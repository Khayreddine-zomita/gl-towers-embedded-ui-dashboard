/**
 * @file screen_saver_status_card_gen.h
 */

#ifndef SCREEN_SAVER_STATUS_CARD_H
#define SCREEN_SAVER_STATUS_CARD_H

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

lv_obj_t * screen_saver_status_card_create(lv_obj_t * parent, const char * time_text, const char * system_status, lv_color_t system_status_color, const char * reservoir_value, int32_t reservoir_unit_x, const char * reservoir_volume, const char * pump_status, lv_color_t pump_status_color, const char * led_status, lv_color_t led_status_color, const char * wifi_status, lv_color_t wifi_status_color, const char * hint_text);

/**********************
 *      MACROS
 **********************/

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif /*SCREEN_SAVER_STATUS_CARD_H*/