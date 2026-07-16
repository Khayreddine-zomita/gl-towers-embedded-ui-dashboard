/**
 * @file home_sensor_card_gen.h
 */

#ifndef HOME_SENSOR_CARD_H
#define HOME_SENSOR_CARD_H

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

lv_obj_t * home_sensor_card_create(lv_obj_t * parent, const char * sensor_title, const char * sensor_value, const char * sensor_unit, int32_t sensor_unit_x, const char * sensor_status, lv_color_t sensor_title_color, lv_color_t sensor_status_color);

/**********************
 *      MACROS
 **********************/

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif /*HOME_SENSOR_CARD_H*/