/**
 * @file device_pairing_bottom_actions_gen.h
 */

#ifndef DEVICE_PAIRING_BOTTOM_ACTIONS_H
#define DEVICE_PAIRING_BOTTOM_ACTIONS_H

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

lv_obj_t * device_pairing_bottom_actions_create(lv_obj_t * parent, const char * back_text, const char * continue_text);

/**********************
 *      MACROS
 **********************/

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif /*DEVICE_PAIRING_BOTTOM_ACTIONS_H*/