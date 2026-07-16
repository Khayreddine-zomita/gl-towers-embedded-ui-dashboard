/**
 * @file home_sensor_card_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "home_sensor_card_gen.h"
#include "../gl_towers_embedded_ui_dashboard.h"

/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/

/***********************
 *  STATIC VARIABLES
 **********************/

/***********************
 *  STATIC PROTOTYPES
 **********************/

/**********************
 *   GLOBAL FUNCTIONS
 **********************/

lv_obj_t * home_sensor_card_create(lv_obj_t * parent, const char * sensor_title, const char * sensor_value, const char * sensor_unit, int32_t sensor_unit_x, const char * sensor_status, lv_color_t sensor_title_color, lv_color_t sensor_status_color)
{
    LV_TRACE_OBJ_CREATE("begin");

    lv_obj_t * lv_obj_0 = lv_obj_create(parent);
    lv_obj_set_name_static(lv_obj_0, "home_sensor_card_#");
    lv_obj_set_width(lv_obj_0, 148);
    lv_obj_set_height(lv_obj_0, 74);
    lv_obj_set_flag(lv_obj_0, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(lv_obj_0, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(lv_obj_0, COLOR_CARD_BG, 0);
    lv_obj_set_style_bg_opa(lv_obj_0, 255, 0);
    lv_obj_set_style_radius(lv_obj_0, 16, 0);
    lv_obj_set_style_pad_all(lv_obj_0, 0, 0);
    lv_obj_set_style_border_width(lv_obj_0, 0, 0);
    lv_obj_set_style_shadow_width(lv_obj_0, 8, 0);
    lv_obj_set_style_shadow_opa(lv_obj_0, 18, 0);
    lv_obj_set_style_shadow_color(lv_obj_0, COLOR_SHADOW, 0);
    lv_obj_set_style_shadow_offset_y(lv_obj_0, 3, 0);

    lv_obj_t * home_sensor_title = lv_label_create(lv_obj_0);
    lv_obj_set_name(home_sensor_title, "home_sensor_title");
    lv_obj_set_x(home_sensor_title, 10);
    lv_obj_set_y(home_sensor_title, 8);
    lv_obj_set_width(home_sensor_title, 100);
    lv_label_set_text(home_sensor_title, sensor_title);
    lv_label_set_long_mode(home_sensor_title, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(home_sensor_title, sensor_title_color, 0);
    lv_obj_set_style_text_font(home_sensor_title, font_inter_12, 0);

    lv_obj_t * home_sensor_value = lv_label_create(lv_obj_0);
    lv_obj_set_name(home_sensor_value, "home_sensor_value");
    lv_obj_set_x(home_sensor_value, 10);
    lv_obj_set_y(home_sensor_value, 28);
    lv_obj_set_width(home_sensor_value, 72);
    lv_label_set_text(home_sensor_value, sensor_value);
    lv_label_set_long_mode(home_sensor_value, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(home_sensor_value, COLOR_TEXT_PRIMARY, 0);
    lv_obj_set_style_text_font(home_sensor_value, font_inter_26, 0);

    lv_obj_t * home_sensor_unit = lv_label_create(lv_obj_0);
    lv_obj_set_name(home_sensor_unit, "home_sensor_unit");
    lv_obj_set_x(home_sensor_unit, sensor_unit_x);
    lv_obj_set_y(home_sensor_unit, 41);
    lv_obj_set_width(home_sensor_unit, 30);
    lv_label_set_text(home_sensor_unit, sensor_unit);
    lv_label_set_long_mode(home_sensor_unit, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(home_sensor_unit, COLOR_TEXT_PRIMARY, 0);
    lv_obj_set_style_text_font(home_sensor_unit, font_inter_9, 0);

    lv_obj_t * home_sensor_status = lv_label_create(lv_obj_0);
    lv_obj_set_name(home_sensor_status, "home_sensor_status");
    lv_obj_set_x(home_sensor_status, 105);
    lv_obj_set_y(home_sensor_status, 45);
    lv_obj_set_width(home_sensor_status, 40);
    lv_label_set_text(home_sensor_status, sensor_status);
    lv_label_set_long_mode(home_sensor_status, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(home_sensor_status, sensor_status_color, 0);
    lv_obj_set_style_text_font(home_sensor_status, font_inter_10, 0);

    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

