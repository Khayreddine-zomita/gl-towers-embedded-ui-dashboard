/**
 * @file global_bottom_nav_gen.h
 */

#ifndef GLOBAL_BOTTOM_NAV_H
#define GLOBAL_BOTTOM_NAV_H

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

lv_obj_t * global_bottom_nav_create(lv_obj_t * parent, lv_color_t nav_home_text_color, lv_color_t nav_sensors_text_color, lv_color_t nav_irrigation_text_color, lv_color_t nav_led_text_color, lv_color_t nav_settings_text_color, lv_color_t nav_home_bg_color, lv_color_t nav_sensors_bg_color, lv_color_t nav_irrigation_bg_color, lv_color_t nav_led_bg_color, lv_color_t nav_settings_bg_color, int32_t nav_home_bg_opa, int32_t nav_sensors_bg_opa, int32_t nav_irrigation_bg_opa, int32_t nav_led_bg_opa, int32_t nav_settings_bg_opa);

/**********************
 *      MACROS
 **********************/

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif /*GLOBAL_BOTTOM_NAV_H*/