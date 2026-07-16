/**
 * @file settings_calibration_bottom_actions_gen.h
 */

#ifndef SETTINGS_CALIBRATION_BOTTOM_ACTIONS_H
#define SETTINGS_CALIBRATION_BOTTOM_ACTIONS_H

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

lv_obj_t * settings_calibration_bottom_actions_create(lv_obj_t * parent, const char * back_text);

/**********************
 *      MACROS
 **********************/

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif /*SETTINGS_CALIBRATION_BOTTOM_ACTIONS_H*/