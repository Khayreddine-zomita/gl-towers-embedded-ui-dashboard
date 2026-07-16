/**
 * @file irrigation_overview_card_gen.h
 */

#ifndef IRRIGATION_OVERVIEW_CARD_H
#define IRRIGATION_OVERVIEW_CARD_H

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

lv_obj_t * irrigation_overview_card_create(lv_obj_t * parent, const char * stage_text, const char * mode_title, const char * cycle_summary, const char * cycles_per_day, const char * pump_per_day, const char * window_time, const char * night_break_status, const char * warning_text);

/**********************
 *      MACROS
 **********************/

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif /*IRRIGATION_OVERVIEW_CARD_H*/