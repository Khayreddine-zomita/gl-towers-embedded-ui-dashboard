
#include "gl_towers_ui_contract.h"
#include "state/gl_towers_state.h"
#include "utils/gl_towers_utils.h"
#include <string.h>
#include <stdio.h>

// Static variables for mock state
static uint64_t s_mock_time_ms = 0;
static float s_mock_ph = 6.1f;
static float s_mock_water_temp = 22.2f;
static float s_mock_air_temp = 22.8f;
static float s_mock_humidity = 71.0f;
static float s_mock_tank_liters = 6.0f;
static bool s_mock_pump_active = true;

const gl_towers_ui_state_t *gl_towers_mock_state_get(void) {
    return gl_towers_state_get();
}

void gl_towers_mock_state_tick(void) {
    s_mock_time_ms += GL_TOWERS_TELEMETRY_TICK_NORMAL_MS;
    
    // Update mock sensor values
    s_mock_ph += 0.01f;
    if (s_mock_ph > 6.4f) {
        s_mock_ph = 6.1f;
    }
    
    s_mock_water_temp += 0.02f;
    if (s_mock_water_temp > 22.6f) {
        s_mock_water_temp = 22.2f;
    }
    
    // Create snapshot
    gl_towers_sensors_t snapshot;
    memset(&snapshot, 0, sizeof(snapshot));
    snapshot.ph = s_mock_ph;
    snapshot.ec = 1.6f;
    snapshot.water_temp_c = s_mock_water_temp;
    snapshot.air_temp_c = s_mock_air_temp;
    snapshot.humidity_pct = s_mock_humidity;
    snapshot.cwbe_level_pct = gl_towers_calculate_tank_percent(s_mock_tank_liters);
    snapshot.cwbe_status = gl_towers_calculate_cwbe_status(snapshot.cwbe_level_pct);
    snapshot.pump_active = s_mock_pump_active;
    snapshot.last_update_ms = s_mock_time_ms;
    
    // Apply snapshot
    gl_towers_state_apply_snapshot(&snapshot);
}
