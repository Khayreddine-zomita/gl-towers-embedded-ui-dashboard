/**
 * @file edit_irrigation_settings_card_gen.h
 */

#ifndef EDIT_IRRIGATION_SETTINGS_CARD_H
#define EDIT_IRRIGATION_SETTINGS_CARD_H

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

lv_obj_t * edit_irrigation_settings_card_create(lv_obj_t * parent, const char * growth_stage_text, const char * substrate_text, const char * pump_cycle_text, const char * window_text);

/**********************
 *      MACROS
 **********************/

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif /*EDIT_IRRIGATION_SETTINGS_CARD_H*/