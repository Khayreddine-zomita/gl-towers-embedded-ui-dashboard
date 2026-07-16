/**
 * @file sensors_screen_card_gen.h
 */

#ifndef SENSORS_SCREEN_CARD_H
#define SENSORS_SCREEN_CARD_H

#ifdef __cplusplus
extern "C" {
#endif

/*********************
 *      INCLUDES
 *********************/

#ifdef LV_LVGL_H_INCLUDE_SIMPLE
    #include "lvgl.h"
    #include "lvgl_private.h"
#else
    #include "lvgl/lvgl.h"
    #include "lvgl/lvgl_private.h"
#endif

#ifdef LV_USE_XML
    #include "lv_xml/lv_xml.h"
#endif

/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/

/**********************
 * GLOBAL PROTOTYPES
 **********************/

lv_obj_t * sensors_screen_card_create(lv_obj_t * parent, const char * sensor_title, const char * sensor_value, const char * sensor_unit, int32_t sensor_unit_x, const char * sensor_status, const char * sensor_hint, lv_color_t sensor_color, const char * trend_values, int32_t trend_min, int32_t trend_max);

/**********************
 *      MACROS
 **********************/

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif /*SENSORS_SCREEN_CARD_H*/