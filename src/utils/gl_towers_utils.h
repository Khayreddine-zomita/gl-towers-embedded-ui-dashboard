
#ifndef GL_TOWERS_UTILS_H
#define GL_TOWERS_UTILS_H

#include "../gl_towers_ui_contract.h"
#include <stdint.h>
#include <stdbool.h>

//=============================================================================
// Function Declarations
//=============================================================================

// Sensor validation
bool gl_towers_validate_ph(float ph);
bool gl_towers_validate_water_temp(float temp_c);
bool gl_towers_validate_air_temp(float temp_c);
bool gl_towers_validate_humidity(float humidity_pct);
bool gl_towers_validate_cwbe_level(float level_pct);

// Sensor insight
gl_towers_sensor_insight_t gl_towers_get_ph_insight(float ph);
gl_towers_sensor_insight_t gl_towers_get_water_temp_insight(float temp_c);
gl_towers_sensor_insight_t gl_towers_get_air_temp_insight(float temp_c);
gl_towers_sensor_insight_t gl_towers_get_humidity_insight(float humidity_pct, gl_towers_growth_stage_t stage);

// Health scoring
uint8_t gl_towers_calculate_health_score(const gl_towers_device_t *device);
gl_towers_health_status_t gl_towers_calculate_health_status(const gl_towers_device_t *device, uint8_t *out_score);

// CWBE status
gl_towers_cwbe_status_t gl_towers_calculate_cwbe_status(float level_pct);

// Tank level calculation
float gl_towers_calculate_tank_percent(float liters);

#endif
