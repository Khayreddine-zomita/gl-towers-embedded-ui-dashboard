/**
 * @file home_reservoir_card_gen.h
 */

#ifndef HOME_RESERVOIR_CARD_H
#define HOME_RESERVOIR_CARD_H

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

lv_obj_t * home_reservoir_card_create(lv_obj_t * parent, const char * reservoir_value, int32_t reservoir_unit_x, const char * reservoir_volume, const char * reservoir_hint, int32_t reservoir_level);

/**********************
 *      MACROS
 **********************/

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif /*HOME_RESERVOIR_CARD_H*/