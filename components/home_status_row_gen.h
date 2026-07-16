/**
 * @file home_status_row_gen.h
 */

#ifndef HOME_STATUS_ROW_H
#define HOME_STATUS_ROW_H

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

lv_obj_t * home_status_row_create(lv_obj_t * parent, const char * pump_status, const char * irrigation_status, const char * led_status, lv_color_t pump_color, lv_color_t irrigation_color, lv_color_t led_color);

/**********************
 *      MACROS
 **********************/

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif /*HOME_STATUS_ROW_H*/