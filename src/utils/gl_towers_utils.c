
#include "gl_towers_utils.h"
#include <math.h>

//=============================================================================
// Sensor Validation
//=============================================================================
bool gl_towers_validate_ph(float ph) {
    return ph >= 0.0f && ph <= 14.0f;
}

bool gl_towers_validate_water_temp(float temp_c) {
    return temp_c >= 0.0f && temp_c <= 50.0f;
}

bool gl_towers_validate_air_temp(float temp_c) {
    return temp_c >= 0.0f && temp_c <= 50.0f;
}

bool gl_towers_validate_humidity(float humidity_pct) {
    return humidity_pct >= 0.0f && humidity_pct <= 100.0f;
}

bool gl_towers_validate_cwbe_level(float level_pct) {
    return level_pct >= 0.0f && level_pct <= 100.0f;
}

//=============================================================================
// Sensor Insight
//=============================================================================
gl_towers_sensor_insight_t gl_towers_get_ph_insight(float ph) {
    if (ph < 5.5f || ph > 7.5f) {
        return GL_TOWERS_SENSOR_INSIGHT_WARN;
    } else if (ph < 5.8f || ph > 7.2f) {
        return GL_TOWERS_SENSOR_INSIGHT_LOW;
    } else {
        return GL_TOWERS_SENSOR_INSIGHT_OK;
    }
}

gl_towers_sensor_insight_t gl_towers_get_water_temp_insight(float temp_c) {
    if (temp_c < 16.0f || temp_c >= 27.0f) {
        return GL_TOWERS_SENSOR_INSIGHT_WARN;
    } else if (temp_c < 18.0f || temp_c >= 25.0f) {
        return GL_TOWERS_SENSOR_INSIGHT_LOW;
    } else {
        return GL_TOWERS_SENSOR_INSIGHT_OK;
    }
}

gl_towers_sensor_insight_t gl_towers_get_air_temp_insight(float temp_c) {
    if (temp_c < 12.0f || temp_c >= 28.0f) {
        return GL_TOWERS_SENSOR_INSIGHT_WARN;
    } else if (temp_c < 16.0f || temp_c >= 24.0f) {
        return GL_TOWERS_SENSOR_INSIGHT_LOW;
    } else {
        return GL_TOWERS_SENSOR_INSIGHT_OK;
    }
}

gl_towers_sensor_insight_t gl_towers_get_humidity_insight(float humidity_pct, gl_towers_growth_stage_t stage) {
    float min_humidity, max_humidity;
    switch (stage) {
        case GL_TOWERS_GROWTH_STAGE_GERMINATION:
            min_humidity = 80.0f;
            max_humidity = 96.0f;
            break;
        case GL_TOWERS_GROWTH_STAGE_SEEDLING:
            min_humidity = 70.0f;
            max_humidity = 96.0f;
            break;
        case GL_TOWERS_GROWTH_STAGE_VEGETATIVE:
            min_humidity = 60.0f;
            max_humidity = 96.0f;
            break;
        case GL_TOWERS_GROWTH_STAGE_MATURE:
        default:
            min_humidity = 50.0f;
            max_humidity = 96.0f;
            break;
    }
    
    if (humidity_pct < (min_humidity - 10.0f) || humidity_pct > 99.0f) {
        return GL_TOWERS_SENSOR_INSIGHT_WARN;
    } else if (humidity_pct < min_humidity || humidity_pct > max_humidity) {
        return GL_TOWERS_SENSOR_INSIGHT_LOW;
    } else {
        return GL_TOWERS_SENSOR_INSIGHT_OK;
    }
}

//=============================================================================
// Health Scoring
//=============================================================================
uint8_t gl_towers_calculate_health_score(const gl_towers_device_t *device) {
    if (device == NULL || device->sensors.last_update_ms == 0) {
        return 0;
    }
    
    int score = 100;
    
    // Check each sensor and apply penalties
    gl_towers_sensor_insight_t insight;
    
    insight = gl_towers_get_ph_insight(device->sensors.ph);
    if (insight == GL_TOWERS_SENSOR_INSIGHT_WARN) {
        score -= GL_TOWERS_HEALTH_PENALTY_CRITICAL;
    } else if (insight == GL_TOWERS_SENSOR_INSIGHT_LOW) {
        score -= GL_TOWERS_HEALTH_PENALTY_WARNING;
    }
    
    insight = gl_towers_get_water_temp_insight(device->sensors.water_temp_c);
    if (insight == GL_TOWERS_SENSOR_INSIGHT_WARN) {
        score -= GL_TOWERS_HEALTH_PENALTY_WARNING;
    } else if (insight == GL_TOWERS_SENSOR_INSIGHT_LOW) {
        score -= GL_TOWERS_HEALTH_PENALTY_INFO;
    }
    
    insight = gl_towers_get_air_temp_insight(device->sensors.air_temp_c);
    if (insight == GL_TOWERS_SENSOR_INSIGHT_WARN) {
        score -= GL_TOWERS_HEALTH_PENALTY_WARNING;
    } else if (insight == GL_TOWERS_SENSOR_INSIGHT_LOW) {
        score -= GL_TOWERS_HEALTH_PENALTY_INFO;
    }
    
    insight = gl_towers_get_humidity_insight(device->sensors.humidity_pct, device->saved_irrigation.stage);
    if (insight == GL_TOWERS_SENSOR_INSIGHT_WARN) {
        score -= GL_TOWERS_HEALTH_PENALTY_WARNING;
    } else if (insight == GL_TOWERS_SENSOR_INSIGHT_LOW) {
        score -= GL_TOWERS_HEALTH_PENALTY_INFO;
    }
    
    // Check CWBE level
    float tank_percent = gl_towers_calculate_tank_percent(device->tank_liters);
    if (tank_percent <= 5.0f) {
        score -= GL_TOWERS_HEALTH_PENALTY_CRITICAL;
    }
    
    // Clamp score to 0-100
    if (score < 0) score = 0;
    if (score > 100) score = 100;
    
    return (uint8_t)score;
}

gl_towers_health_status_t gl_towers_calculate_health_status(const gl_towers_device_t *device, uint8_t *out_score) {
    if (device == NULL || device->sensors.last_update_ms == 0) {
        if (out_score != NULL) *out_score = 0;
        return GL_TOWERS_HEALTH_STATUS_NO_DATA;
    }
    
    uint8_t score = gl_towers_calculate_health_score(device);
    if (out_score != NULL) *out_score = score;
    
    // First determine status from rules (worst-case)
    bool has_critical = false;
    bool has_warning = false;
    bool has_info = false;
    
    gl_towers_sensor_insight_t insight;
    
    insight = gl_towers_get_ph_insight(device->sensors.ph);
    if (insight == GL_TOWERS_SENSOR_INSIGHT_WARN) has_critical = true;
    else if (insight == GL_TOWERS_SENSOR_INSIGHT_LOW) has_warning = true;
    
    insight = gl_towers_get_water_temp_insight(device->sensors.water_temp_c);
    if (insight == GL_TOWERS_SENSOR_INSIGHT_WARN) has_critical = true;
    else if (insight == GL_TOWERS_SENSOR_INSIGHT_LOW) has_info = true;
    
    insight = gl_towers_get_air_temp_insight(device->sensors.air_temp_c);
    if (insight == GL_TOWERS_SENSOR_INSIGHT_WARN) has_warning = true;
    else if (insight == GL_TOWERS_SENSOR_INSIGHT_LOW) has_info = true;
    
    insight = gl_towers_get_humidity_insight(device->sensors.humidity_pct, device->saved_irrigation.stage);
    if (insight == GL_TOWERS_SENSOR_INSIGHT_WARN) has_warning = true;
    else if (insight == GL_TOWERS_SENSOR_INSIGHT_LOW) has_warning = true;
    
    float tank_percent = gl_towers_calculate_tank_percent(device->tank_liters);
    if (tank_percent <= 5.0f) has_critical = true;
    
    // Determine status from rules
    gl_towers_health_status_t rule_status = GL_TOWERS_HEALTH_STATUS_EXCELLENT;
    if (has_critical) rule_status = GL_TOWERS_HEALTH_STATUS_CRITICAL;
    else if (has_warning) rule_status = GL_TOWERS_HEALTH_STATUS_ATTENTION;
    else if (has_info) rule_status = GL_TOWERS_HEALTH_STATUS_GOOD;
    
    // Determine status from score
    gl_towers_health_status_t score_status = GL_TOWERS_HEALTH_STATUS_EXCELLENT;
    if (score < GL_TOWERS_HEALTH_SCORE_ATTENTION_MIN) score_status = GL_TOWERS_HEALTH_STATUS_CRITICAL;
    else if (score < GL_TOWERS_HEALTH_SCORE_GOOD_MIN) score_status = GL_TOWERS_HEALTH_STATUS_ATTENTION;
    else if (score < GL_TOWERS_HEALTH_SCORE_EXCELLENT_MIN) score_status = GL_TOWERS_HEALTH_STATUS_GOOD;
    
    // Return the worse of the two
    return (rule_status > score_status) ? rule_status : score_status;
}

//=============================================================================
// CWBE Status
//=============================================================================
gl_towers_cwbe_status_t gl_towers_calculate_cwbe_status(float level_pct) {
    if (level_pct < 15.0f) {
        return GL_TOWERS_CWBE_STATUS_CRITICAL;
    } else if (level_pct < 30.0f) {
        return GL_TOWERS_CWBE_STATUS_LOW;
    } else {
        return GL_TOWERS_CWBE_STATUS_OK;
    }
}

//=============================================================================
// Tank Level
//=============================================================================
float gl_towers_calculate_tank_percent(float liters) {
    float clamped = (liters < 0.0f) ? 0.0f : (liters > GL_TOWERS_TANK_MAX_LITERS) ? GL_TOWERS_TANK_MAX_LITERS : liters;
    return (clamped / GL_TOWERS_TANK_MAX_LITERS) * 100.0f;
}
