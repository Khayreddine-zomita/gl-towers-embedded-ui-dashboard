/**
 * @file led_edit_settings_button_card_gen.h
 */

#ifndef LED_EDIT_SETTINGS_BUTTON_CARD_H
#define LED_EDIT_SETTINGS_BUTTON_CARD_H

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

lv_obj_t * led_edit_settings_button_card_create(lv_obj_t * parent, const char * button_text);

/**********************
 *      MACROS
 **********************/

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif /*LED_EDIT_SETTINGS_BUTTON_CARD_H*/