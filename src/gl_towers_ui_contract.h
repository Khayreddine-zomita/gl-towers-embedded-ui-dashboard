
#ifndef GL_TOWERS_UI_CONTRACT_H
#define GL_TOWERS_UI_CONTRACT_H

#include <stdbool.h>
#include <stdint.h>
#include <stddef.h>

//=============================================================================
// Contract Version
//=============================================================================
#define GL_TOWERS_UI_CONTRACT_VERSION 1

//=============================================================================
// Constants
//=============================================================================
#define GL_TOWERS_TANK_MAX_LITERS 6.5f
#define GL_TOWERS_TANK_NOMINAL_LITERS 6.0f

#define GL_TOWERS_HISTORY_MAX_SAMPLES 480
#define GL_TOWERS_NOTIFICATIONS_MAX_COUNT 50

// Telemetry Timing Thresholds (ms)
#define GL_TOWERS_TELEMETRY_TICK_SLOW_MS 30000
#define GL_TOWERS_TELEMETRY_TICK_NORMAL_MS 15000
#define GL_TOWERS_TELEMETRY_TICK_FAST_MS 5000
#define GL_TOWERS_HISTORY_MIN_SAMPLE_INTERVAL_MS 10000
#define GL_TOWERS_NOTIFICATION_THROTTLE_MS 8000
#define GL_TOWERS_STALE_DATA_THRESHOLD_MS 120000
#define GL_TOWERS_OFFLINE_THRESHOLD_MS 240000
#define GL_TOWERS_AGRONOMIST_OFFLINE_THRESHOLD_MS 300000

// Health Score Penalties
#define GL_TOWERS_HEALTH_PENALTY_CRITICAL 40
#define GL_TOWERS_HEALTH_PENALTY_WARNING 15
#define GL_TOWERS_HEALTH_PENALTY_INFO 5

// Health Score Ranges
#define GL_TOWERS_HEALTH_SCORE_EXCELLENT_MIN 85
#define GL_TOWERS_HEALTH_SCORE_GOOD_MIN 65
#define GL_TOWERS_HEALTH_SCORE_ATTENTION_MIN 40
#define GL_TOWERS_HEALTH_SCORE_CRITICAL_MIN 0

//=============================================================================
// Enums
//=============================================================================
typedef enum {
    GL_TOWERS_HEALTH_STATUS_EXCELLENT = 0,
    GL_TOWERS_HEALTH_STATUS_GOOD,
    GL_TOWERS_HEALTH_STATUS_ATTENTION,
    GL_TOWERS_HEALTH_STATUS_CRITICAL,
    GL_TOWERS_HEALTH_STATUS_NO_DATA
} gl_towers_health_status_t;

typedef enum {
    GL_TOWERS_ALERT_SEVERITY_INFO = 0,
    GL_TOWERS_ALERT_SEVERITY_WARNING,
    GL_TOWERS_ALERT_SEVERITY_CRITICAL
} gl_towers_alert_severity_t;

typedef enum {
    GL_TOWERS_GROWTH_STAGE_GERMINATION = 0,
    GL_TOWERS_GROWTH_STAGE_SEEDLING,
    GL_TOWERS_GROWTH_STAGE_VEGETATIVE,
    GL_TOWERS_GROWTH_STAGE_MATURE,
    GL_TOWERS_GROWTH_STAGE_COUNT
} gl_towers_growth_stage_t;

typedef enum {
    GL_TOWERS_SUBSTRATE_HYDROPONIC = 0,
    GL_TOWERS_SUBSTRATE_SOIL,
    GL_TOWERS_SUBSTRATE_CLAY_PEBBLES,
    GL_TOWERS_SUBSTRATE_COCO_COIR,
    GL_TOWERS_SUBSTRATE_ROCKWOOL,
    GL_TOWERS_SUBSTRATE_COUNT
} gl_towers_substrate_t;

typedef enum {
    GL_TOWERS_LED_PRESET_OFF = 0,
    GL_TOWERS_LED_PRESET_SEEDLING,
    GL_TOWERS_LED_PRESET_STANDARD,
    GL_TOWERS_LED_PRESET_BLOOM,
    GL_TOWERS_LED_PRESET_CUSTOM,
    GL_TOWERS_LED_PRESET_COUNT
} gl_towers_led_preset_t;

typedef enum {
    GL_TOWERS_CONNECTION_STATUS_ONLINE = 0,
    GL_TOWERS_CONNECTION_STATUS_WARNING,
    GL_TOWERS_CONNECTION_STATUS_OFFLINE
} gl_towers_connection_status_t;

typedef enum {
    GL_TOWERS_CWBE_STATUS_OK = 0,
    GL_TOWERS_CWBE_STATUS_LOW,
    GL_TOWERS_CWBE_STATUS_CRITICAL
} gl_towers_cwbe_status_t;

typedef enum {
    GL_TOWERS_SENSOR_INSIGHT_OK = 0,
    GL_TOWERS_SENSOR_INSIGHT_LOW,
    GL_TOWERS_SENSOR_INSIGHT_WARN
} gl_towers_sensor_insight_t;

typedef enum {
    GL_TOWERS_UI_SCREEN_BOOT = 0,
    GL_TOWERS_UI_SCREEN_HOME,
    GL_TOWERS_UI_SCREEN_SENSORS,
    GL_TOWERS_UI_SCREEN_IRRIGATION,
    GL_TOWERS_UI_SCREEN_LED,
    GL_TOWERS_UI_SCREEN_SETTINGS,
    GL_TOWERS_UI_SCREEN_COUNT
} gl_towers_ui_screen_t;

typedef enum {
    GL_TOWERS_UI_CMD_SET_PUMP_ENABLED = 0,
    GL_TOWERS_UI_CMD_SET_IRRIGATION_WINDOW,
    GL_TOWERS_UI_CMD_SET_LED_ENABLED,
    GL_TOWERS_UI_CMD_SET_LED_INTENSITY,
    GL_TOWERS_UI_CMD_SET_LED_PRESET,
    GL_TOWERS_UI_CMD_START_PH_CALIBRATION,
    GL_TOWERS_UI_CMD_START_EC_CALIBRATION,
    GL_TOWERS_UI_CMD_CHANGE_WIFI,
    GL_TOWERS_UI_CMD_START_OTA_UPDATE,
    GL_TOWERS_UI_CMD_ADJUST_TANK,
    GL_TOWERS_UI_CMD_SAVE_LED_CONFIG,
    GL_TOWERS_UI_CMD_SAVE_IRRIGATION_CONFIG,
    GL_TOWERS_UI_CMD_SAVE_PH_CALIBRATION_POINT,
    GL_TOWERS_UI_CMD_SAVE_EC_CALIBRATION_POINT,
    GL_TOWERS_UI_CMD_SAVE_LOAD_CELL_TARE,
    GL_TOWERS_UI_CMD_SAVE_LOAD_CELL_REFERENCE,

    GL_TOWERS_UI_CMD_SET_LANGUAGE,
    GL_TOWERS_UI_CMD_SET_DISPLAY_BRIGHTNESS,
    GL_TOWERS_UI_CMD_SET_SCREEN_TIMEOUT,

    GL_TOWERS_UI_CMD_ACCEPT_LEGAL,
    GL_TOWERS_UI_CMD_FACTORY_RESET,
    
    GL_TOWERS_UI_CMD_COUNT
} gl_towers_ui_command_t;

//=============================================================================
// Structures
//=============================================================================
typedef struct {
    float ph;
    float ec;
    float water_temp_c;
    float air_temp_c;
    float humidity_pct;
    float cwbe_level_pct;
    gl_towers_cwbe_status_t cwbe_status;
    bool pump_active;
    uint64_t last_update_ms;
} gl_towers_sensors_t;

typedef struct {
    char on_time[6];  // HH:MM
    char off_time[6]; // HH:MM
    uint8_t intensity; // 0-100%
    gl_towers_led_preset_t preset;
} gl_towers_led_config_t;

typedef struct {
    gl_towers_growth_stage_t stage;
    gl_towers_substrate_t substrate;
    uint16_t cycle_on_minutes;
    uint16_t cycle_pause_minutes;
    bool night_break_enabled;
    char window_start[6]; // HH:MM
    char window_end[6];   // HH:MM
    bool irrigation_saved;
} gl_towers_irrigation_config_t;

typedef struct {
    char plant_id[32];
    char plant_name[64];
} gl_towers_plant_t;

typedef struct {
    uint64_t timestamp_ms;
    float ph;
    float water_temp_c;
    float air_temp_c;
    float humidity_pct;
    float cwbe_level_pct;
    float tank_liters;
} gl_towers_history_sample_t;

typedef struct {
    char alert_key[64];
    char title[128];
    char message[256];
    gl_towers_alert_severity_t severity;
    uint64_t created_at_ms;
    bool read;
} gl_towers_alert_t;

typedef struct {
    char device_id[32];
    char hardware_id[32];
    char name[64];
    char room[64];
    float tank_liters;
    
    gl_towers_sensors_t sensors;
    gl_towers_led_config_t saved_led;
    gl_towers_irrigation_config_t saved_irrigation;
    gl_towers_plant_t saved_plants[8];
    size_t saved_plants_count;
    
    gl_towers_history_sample_t history[GL_TOWERS_HISTORY_MAX_SAMPLES];
    size_t history_count;
    size_t history_start_idx;
    
    gl_towers_connection_status_t connection_status;
} gl_towers_device_t;

typedef struct {
    gl_towers_device_t devices[8];
    size_t devices_count;
    size_t active_device_idx;
    
    gl_towers_alert_t alerts[GL_TOWERS_NOTIFICATIONS_MAX_COUNT];
    size_t alerts_count;
    
    uint64_t last_persist_tick;
    uint8_t persist_tick_counter;
    uint64_t last_notification_gen_ms;
} gl_towers_ui_state_t;

//=============================================================================
// Callback Types
//=============================================================================
typedef void (*gl_towers_state_change_callback_t)(const gl_towers_ui_state_t *new_state, void *user_data);
typedef void (*gl_towers_command_handler_t)(gl_towers_ui_command_t cmd, const void *params, void *user_data);

//=============================================================================
// Function Declarations (from existing mock state)
//=============================================================================
const gl_towers_ui_state_t *gl_towers_mock_state_get(void);
void gl_towers_mock_state_tick(void);

#endif
