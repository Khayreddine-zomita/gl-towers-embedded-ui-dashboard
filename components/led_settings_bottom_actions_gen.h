/**
 * @file led_settings_bottom_actions_gen.h
 */

#ifndef LED_SETTINGS_BOTTOM_ACTIONS_H
#define LED_SETTINGS_BOTTOM_ACTIONS_H

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

lv_obj_t * led_settings_bottom_actions_create(lv_obj_t * parent, const char * cancel_text, const char * apply_text);

/**********************
 *      MACROS
 **********************/

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif /*LED_SETTINGS_BOTTOM_ACTIONS_H*/