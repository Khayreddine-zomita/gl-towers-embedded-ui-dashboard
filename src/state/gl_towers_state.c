
#include "gl_towers_state.h"
#include <string.h>
#include <stdio.h>

//=============================================================================
// Static Variables
//=============================================================================
static gl_towers_ui_state_t s_state;
static gl_towers_state_subscription_t s_subscribers[8];
static size_t s_subscribers_count = 0;
static uint64_t s_current_time_ms = 0;

//=============================================================================
// Static Helper Functions
//=============================================================================
static void init_default_device(gl_towers_device_t *device, const char *device_id) {
    memset(device, 0, sizeof(gl_towers_device_t));
    strncpy(device->device_id, device_id, sizeof(device->device_id) - 1);
    strncpy(device->name, "GL Tower", sizeof(device->name) - 1);
    device->tank_liters = GL_TOWERS_TANK_NOMINAL_LITERS;
    
    // Default LED config
    device->saved_led.preset = GL_TOWERS_LED_PRESET_STANDARD;
    strncpy(device->saved_led.on_time, "06:00", sizeof(device->saved_led.on_time) - 1);
    strncpy(device->saved_led.off_time, "22:00", sizeof(device->saved_led.off_time) - 1);
    device->saved_led.intensity = 80;
    
    // Default irrigation config
    device->saved_irrigation.stage = GL_TOWERS_GROWTH_STAGE_VEGETATIVE;
    device->saved_irrigation.substrate = GL_TOWERS_SUBSTRATE_HYDROPONIC;
    device->saved_irrigation.cycle_on_minutes = 1;
    device->saved_irrigation.cycle_pause_minutes = 90;
    device->saved_irrigation.irrigation_saved = false;
    device->saved_irrigation.night_break_enabled = false;
    strncpy(device->saved_irrigation.window_start, "06:00", sizeof(device->saved_irrigation.window_start) - 1);
    strncpy(device->saved_irrigation.window_end, "22:00", sizeof(device->saved_irrigation.window_end) - 1);
    
    // Default sensors (initial state)
    device->sensors.ph = 6.2f;
    device->sensors.ec = 1.6f;
    device->sensors.water_temp_c = 22.0f;
    device->sensors.air_temp_c = 23.5f;
    device->sensors.humidity_pct = 70.0f;
    device->sensors.cwbe_level_pct = 92.0f;
    device->sensors.cwbe_status = GL_TOWERS_CWBE_STATUS_OK;
    device->sensors.pump_active = false;
    device->sensors.last_update_ms = 0; // No data yet
    device->connection_status = GL_TOWERS_CONNECTION_STATUS_OFFLINE;
}

//=============================================================================
// Public Functions
//=============================================================================
void gl_towers_state_init(void) {
    memset(&s_state, 0, sizeof(gl_towers_ui_state_t));
    s_subscribers_count = 0;
    
    // Initialize default device
    init_default_device(&s_state.devices[0], "gl-tower-001");
    s_state.devices_count = 1;
    s_state.active_device_idx = 0;
    s_state.last_notification_gen_ms = 0;
    s_state.persist_tick_counter = 0;
}

const gl_towers_ui_state_t *gl_towers_state_get(void) {
    return &s_state;
}

const gl_towers_device_t *gl_towers_state_get_active_device(void) {
    if (s_state.active_device_idx < s_state.devices_count) {
        return &s_state.devices[s_state.active_device_idx];
    }
    return NULL;
}

void gl_towers_state_apply_snapshot(const gl_towers_sensors_t *snapshot) {
    if (s_state.active_device_idx >= s_state.devices_count) {
        return;
    }
    
    gl_towers_device_t *device = &s_state.devices[s_state.active_device_idx];
    memcpy(&device->sensors, snapshot, sizeof(gl_towers_sensors_t));
    
    // Update connection status based on snapshot age
    uint64_t age_ms = s_current_time_ms - device->sensors.last_update_ms;
    if (age_ms > GL_TOWERS_OFFLINE_THRESHOLD_MS) {
        device->connection_status = GL_TOWERS_CONNECTION_STATUS_OFFLINE;
    } else if (age_ms > GL_TOWERS_STALE_DATA_THRESHOLD_MS) {
        device->connection_status = GL_TOWERS_CONNECTION_STATUS_WARNING;
    } else {
        device->connection_status = GL_TOWERS_CONNECTION_STATUS_ONLINE;
    }
    
    // Update history if enough time has passed
    if (device->history_count == 0 || 
        (device->sensors.last_update_ms - device->history[(device->history_start_idx + device->history_count - 1) % GL_TOWERS_HISTORY_MAX_SAMPLES].timestamp_ms) >= GL_TOWERS_HISTORY_MIN_SAMPLE_INTERVAL_MS) {
        size_t write_idx = (device->history_start_idx + device->history_count) % GL_TOWERS_HISTORY_MAX_SAMPLES;
        device->history[write_idx].timestamp_ms = device->sensors.last_update_ms;
        device->history[write_idx].ph = device->sensors.ph;
        device->history[write_idx].water_temp_c = device->sensors.water_temp_c;
        device->history[write_idx].air_temp_c = device->sensors.air_temp_c;
        device->history[write_idx].humidity_pct = device->sensors.humidity_pct;
        device->history[write_idx].cwbe_level_pct = device->sensors.cwbe_level_pct;
        device->history[write_idx].tank_liters = device->tank_liters;
        
        if (device->history_count < GL_TOWERS_HISTORY_MAX_SAMPLES) {
            device->history_count++;
        } else {
            device->history_start_idx = (device->history_start_idx + 1) % GL_TOWERS_HISTORY_MAX_SAMPLES;
        }
    }
    
    gl_towers_state_notify_subscribers();
}

void gl_towers_state_update_device(const gl_towers_device_t *device) {
    if (device == NULL || s_state.active_device_idx >= s_state.devices_count) {
        return;
    }
    memcpy(&s_state.devices[s_state.active_device_idx], device, sizeof(gl_towers_device_t));
    gl_towers_state_notify_subscribers();
}

void gl_towers_state_subscribe(gl_towers_state_change_callback_t callback, void *user_data) {
    if (s_subscribers_count >= 8 || callback == NULL) {
        return;
    }
    s_subscribers[s_subscribers_count].callback = callback;
    s_subscribers[s_subscribers_count].user_data = user_data;
    s_subscribers_count++;
}

void gl_towers_state_unsubscribe(gl_towers_state_change_callback_t callback) {
    for (size_t i = 0; i < s_subscribers_count; i++) {
        if (s_subscribers[i].callback == callback) {
            // Shift remaining subscribers left
            for (size_t j = i; j < s_subscribers_count - 1; j++) {
                s_subscribers[j] = s_subscribers[j + 1];
            }
            s_subscribers_count--;
            break;
        }
    }
}

void gl_towers_state_notify_subscribers(void) {
    for (size_t i = 0; i < s_subscribers_count; i++) {
        if (s_subscribers[i].callback != NULL) {
            s_subscribers[i].callback(&s_state, s_subscribers[i].user_data);
        }
    }
}
