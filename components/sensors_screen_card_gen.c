/**
 * @file sensors_screen_card_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "sensors_screen_card_gen.h"
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

lv_obj_t * sensors_screen_card_create(lv_obj_t * parent, const char * sensor_title, const char * sensor_value, const char * sensor_unit, int32_t sensor_unit_x, const char * sensor_status, const char * sensor_hint, lv_color_t sensor_color, const char * trend_values, int32_t trend_min, int32_t trend_max)
{
    LV_TRACE_OBJ_CREATE("begin");

    lv_obj_t * lv_obj_0 = lv_obj_create(parent);
    lv_obj_set_name_static(lv_obj_0, "sensors_screen_card_#");
    lv_obj_set_width(lv_obj_0, 150);
    lv_obj_set_height(lv_obj_0, 104);
    lv_obj_set_flag(lv_obj_0, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(lv_obj_0, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(lv_obj_0, COLOR_CARD_BG, 0);
    lv_obj_set_style_bg_opa(lv_obj_0, 255, 0);
    lv_obj_set_style_radius(lv_obj_0, 16, 0);
    lv_obj_set_style_pad_all(lv_obj_0, 0, 0);
    lv_obj_set_style_border_width(lv_obj_0, 0, 0);
    lv_obj_set_style_shadow_width(lv_obj_0, 10, 0);
    lv_obj_set_style_shadow_opa(lv_obj_0, 22, 0);
    lv_obj_set_style_shadow_color(lv_obj_0, COLOR_SHADOW, 0);
    lv_obj_set_style_shadow_offset_y(lv_obj_0, 4, 0);

    lv_obj_t * sensor_card_title = lv_label_create(lv_obj_0);
    lv_obj_set_name(sensor_card_title, "sensor_card_title");
    lv_obj_set_x(sensor_card_title, 10);
    lv_obj_set_y(sensor_card_title, 8);
    lv_obj_set_width(sensor_card_title, 110);
    lv_label_set_text(sensor_card_title, sensor_title);
    lv_label_set_long_mode(sensor_card_title, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(sensor_card_title, sensor_color, 0);
    lv_obj_set_style_text_font(sensor_card_title, font_inter_12, 0);

    lv_obj_t * sensor_card_value = lv_label_create(lv_obj_0);
    lv_obj_set_name(sensor_card_value, "sensor_card_value");
    lv_obj_set_x(sensor_card_value, 10);
    lv_obj_set_y(sensor_card_value, 25);
    lv_obj_set_width(sensor_card_value, 78);
    lv_label_set_text(sensor_card_value, sensor_value);
    lv_label_set_long_mode(sensor_card_value, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(sensor_card_value, COLOR_TEXT_PRIMARY, 0);
    lv_obj_set_style_text_font(sensor_card_value, font_inter_26, 0);

    lv_obj_t * sensor_card_unit = lv_label_create(lv_obj_0);
    lv_obj_set_name(sensor_card_unit, "sensor_card_unit");
    lv_obj_set_x(sensor_card_unit, sensor_unit_x);
    lv_obj_set_y(sensor_card_unit, 41);
    lv_obj_set_width(sensor_card_unit, 34);
    lv_label_set_text(sensor_card_unit, sensor_unit);
    lv_label_set_long_mode(sensor_card_unit, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(sensor_card_unit, COLOR_TEXT_PRIMARY, 0);
    lv_obj_set_style_text_font(sensor_card_unit, font_inter_9, 0);

    lv_obj_t * sensor_card_status = lv_label_create(lv_obj_0);
    lv_obj_set_name(sensor_card_status, "sensor_card_status");
    lv_obj_set_x(sensor_card_status, 94);
    lv_obj_set_y(sensor_card_status, 42);
    lv_obj_set_width(sensor_card_status, 46);
    lv_label_set_text(sensor_card_status, sensor_status);
    lv_label_set_long_mode(sensor_card_status, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_align(sensor_card_status, LV_TEXT_ALIGN_RIGHT, 0);
    lv_obj_set_style_text_color(sensor_card_status, COLOR_STATUS_HEALTHY, 0);
    lv_obj_set_style_text_font(sensor_card_status, font_inter_10, 0);

    lv_obj_t * mini_trend_chart_0 = mini_trend_chart_create(lv_obj_0, trend_min, trend_max, sensor_color);
    lv_obj_set_x(mini_trend_chart_0, 19);
    lv_obj_set_y(mini_trend_chart_0, 60);

    lv_obj_t * sensor_card_hint = lv_label_create(lv_obj_0);
    lv_obj_set_name(sensor_card_hint, "sensor_card_hint");
    lv_obj_set_x(sensor_card_hint, 35);
    lv_obj_set_y(sensor_card_hint, 90);
    lv_obj_set_width(sensor_card_hint, 130);
    lv_label_set_text(sensor_card_hint, sensor_hint);
    lv_label_set_long_mode(sensor_card_hint, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(sensor_card_hint, COLOR_DARK_FOREST, 0);
    lv_obj_set_style_text_font(sensor_card_hint, font_inter_10, 0);

    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

