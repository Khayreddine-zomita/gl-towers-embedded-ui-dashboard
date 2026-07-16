/**
 * @file irrigation_summary_card_gen.h
 */

#ifndef IRRIGATION_SUMMARY_CARD_H
#define IRRIGATION_SUMMARY_CARD_H

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

lv_obj_t * irrigation_summary_card_create(lv_obj_t * parent, const char * summary_1_value, const char * summary_1_label, const char * summary_2_value, const char * summary_2_label, const char * summary_3_value, const char * summary_3_label);

/**********************
 *      MACROS
 **********************/

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif /*IRRIGATION_SUMMARY_CARD_H*/