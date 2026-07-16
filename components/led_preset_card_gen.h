/**
 * @file led_preset_card_gen.h
 */

#ifndef LED_PRESET_CARD_H
#define LED_PRESET_CARD_H

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

lv_obj_t * led_preset_card_create(lv_obj_t * parent, const char * intensity_value, int32_t slider_value, lv_color_t seedling_bg_color, lv_color_t seedling_text_color, lv_color_t vegetative_bg_color, lv_color_t vegetative_text_color, lv_color_t bloom_bg_color, lv_color_t bloom_text_color, lv_color_t custom_bg_color, lv_color_t custom_text_color, lv_color_t off_bg_color, lv_color_t off_text_color);

/**********************
 *      MACROS
 **********************/

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif /*LED_PRESET_CARD_H*/