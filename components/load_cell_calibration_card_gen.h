/**
 * @file load_cell_calibration_card_gen.h
 */

#ifndef LOAD_CELL_CALIBRATION_CARD_H
#define LOAD_CELL_CALIBRATION_CARD_H

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

lv_obj_t * load_cell_calibration_card_create(lv_obj_t * parent, const char * step_text, const char * current_value, const char * stability_status, const char * instruction_title, const char * instruction_text);

/**********************
 *      MACROS
 **********************/

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif /*LOAD_CELL_CALIBRATION_CARD_H*/