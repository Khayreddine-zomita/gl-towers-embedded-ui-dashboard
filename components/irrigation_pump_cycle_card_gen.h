/**
 * @file irrigation_pump_cycle_card_gen.h
 */

#ifndef IRRIGATION_PUMP_CYCLE_CARD_H
#define IRRIGATION_PUMP_CYCLE_CARD_H

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

lv_obj_t * irrigation_pump_cycle_card_create(lv_obj_t * parent, const char * pump_on_value, const char * pump_off_value, const char * schedule_label, const char * schedule_time);

/**********************
 *      MACROS
 **********************/

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif /*IRRIGATION_PUMP_CYCLE_CARD_H*/