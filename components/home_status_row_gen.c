/**
 * @file home_status_row_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "home_status_row_gen.h"
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

lv_obj_t * home_status_row_create(lv_obj_t * parent, const char * pump_status, const char * irrigation_status, const char * led_status, lv_color_t pump_color, lv_color_t irrigation_color, lv_color_t led_color)
{
    LV_TRACE_OBJ_CREATE("begin");

    lv_obj_t * lv_obj_0 = lv_obj_create(parent);
    lv_obj_set_name_static(lv_obj_0, "home_status_row_#");
    lv_obj_set_width(lv_obj_0, 464);
    lv_obj_set_height(lv_obj_0, 48);
    lv_obj_set_flag(lv_obj_0, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(lv_obj_0, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(lv_obj_0, COLOR_CARD_BG, 0);
    lv_obj_set_style_bg_opa(lv_obj_0, 255, 0);
    lv_obj_set_style_pad_all(lv_obj_0, 0, 0);
    lv_obj_set_style_radius(lv_obj_0, 10, 0);
    lv_obj_set_style_border_width(lv_obj_0, 2, 0);
    lv_obj_set_style_border_color(lv_obj_0, COLOR_DIVIDER, 0);
    lv_obj_set_style_shadow_width(lv_obj_0, 8, 0);
    lv_obj_set_style_shadow_opa(lv_obj_0, 18, 0);
    lv_obj_set_style_shadow_color(lv_obj_0, COLOR_SHADOW, 0);
    lv_obj_set_style_shadow_offset_y(lv_obj_0, 3, 0);

    lv_obj_t * home_pump_icon = lv_image_create(lv_obj_0);
    lv_obj_set_name(home_pump_icon, "home_pump_icon");
    lv_obj_set_x(home_pump_icon, 22);
    lv_obj_set_y(home_pump_icon, 10);
    lv_obj_set_width(home_pump_icon, 26);
    lv_obj_set_height(home_pump_icon, 26);
    lv_image_set_src(home_pump_icon, img_home_pump);
    lv_obj_set_flag(home_pump_icon, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(home_pump_icon, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_image_recolor(home_pump_icon, COLOR_DARK_FOREST, 0);
    lv_obj_set_style_image_recolor_opa(home_pump_icon, 255, 0);

    lv_obj_t * home_pump_title = lv_label_create(lv_obj_0);
    lv_obj_set_name(home_pump_title, "home_pump_title");
    lv_obj_set_x(home_pump_title, 56);
    lv_obj_set_y(home_pump_title, 8);
    lv_obj_set_width(home_pump_title, 70);
    lv_label_set_text(home_pump_title, "Pump");
    lv_label_set_long_mode(home_pump_title, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(home_pump_title, COLOR_TEXT_PRIMARY, 0);
    lv_obj_set_style_text_font(home_pump_title, font_inter_12, 0);

    lv_obj_t * home_pump_status = lv_label_create(lv_obj_0);
    lv_obj_set_name(home_pump_status, "home_pump_status");
    lv_obj_set_x(home_pump_status, 56);
    lv_obj_set_y(home_pump_status, 27);
    lv_obj_set_width(home_pump_status, 44);
    lv_label_set_text(home_pump_status, pump_status);
    lv_label_set_long_mode(home_pump_status, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(home_pump_status, pump_color, 0);
    lv_obj_set_style_text_font(home_pump_status, font_inter_10, 0);

    lv_obj_t * lv_obj_1 = lv_obj_create(lv_obj_0);
    lv_obj_set_x(lv_obj_1, 150);
    lv_obj_set_y(lv_obj_1, 8);
    lv_obj_set_width(lv_obj_1, 1);
    lv_obj_set_height(lv_obj_1, 32);
    lv_obj_set_flag(lv_obj_1, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(lv_obj_1, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(lv_obj_1, COLOR_DIVIDER, 0);
    lv_obj_set_style_bg_opa(lv_obj_1, 255, 0);
    lv_obj_set_style_border_width(lv_obj_1, 0, 0);
    lv_obj_set_style_radius(lv_obj_1, 0, 0);
    lv_obj_set_style_pad_all(lv_obj_1, 0, 0);

    lv_obj_t * home_irrigation_icon = lv_image_create(lv_obj_0);
    lv_obj_set_name(home_irrigation_icon, "home_irrigation_icon");
    lv_obj_set_x(home_irrigation_icon, 170);
    lv_obj_set_y(home_irrigation_icon, 10);
    lv_obj_set_width(home_irrigation_icon, 26);
    lv_obj_set_height(home_irrigation_icon, 26);
    lv_image_set_src(home_irrigation_icon, img_home_irrigation);
    lv_obj_set_flag(home_irrigation_icon, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(home_irrigation_icon, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_image_recolor(home_irrigation_icon, COLOR_STATUS_INFO, 0);
    lv_obj_set_style_image_recolor_opa(home_irrigation_icon, 255, 0);

    lv_obj_t * home_irrigation_title = lv_label_create(lv_obj_0);
    lv_obj_set_name(home_irrigation_title, "home_irrigation_title");
    lv_obj_set_x(home_irrigation_title, 202);
    lv_obj_set_y(home_irrigation_title, 8);
    lv_obj_set_width(home_irrigation_title, 84);
    lv_label_set_text(home_irrigation_title, "Irrigation");
    lv_label_set_long_mode(home_irrigation_title, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(home_irrigation_title, COLOR_TEXT_PRIMARY, 0);
    lv_obj_set_style_text_font(home_irrigation_title, font_inter_12, 0);

    lv_obj_t * home_irrigation_status = lv_label_create(lv_obj_0);
    lv_obj_set_name(home_irrigation_status, "home_irrigation_status");
    lv_obj_set_x(home_irrigation_status, 202);
    lv_obj_set_y(home_irrigation_status, 27);
    lv_obj_set_width(home_irrigation_status, 44);
    lv_label_set_text(home_irrigation_status, irrigation_status);
    lv_label_set_long_mode(home_irrigation_status, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(home_irrigation_status, irrigation_color, 0);
    lv_obj_set_style_text_font(home_irrigation_status, font_inter_10, 0);

    lv_obj_t * lv_obj_2 = lv_obj_create(lv_obj_0);
    lv_obj_set_x(lv_obj_2, 306);
    lv_obj_set_y(lv_obj_2, 8);
    lv_obj_set_width(lv_obj_2, 1);
    lv_obj_set_height(lv_obj_2, 32);
    lv_obj_set_flag(lv_obj_2, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(lv_obj_2, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(lv_obj_2, COLOR_DIVIDER, 0);
    lv_obj_set_style_bg_opa(lv_obj_2, 255, 0);
    lv_obj_set_style_border_width(lv_obj_2, 0, 0);
    lv_obj_set_style_radius(lv_obj_2, 0, 0);
    lv_obj_set_style_pad_all(lv_obj_2, 0, 0);

    lv_obj_t * home_led_icon = lv_image_create(lv_obj_0);
    lv_obj_set_name(home_led_icon, "home_led_icon");
    lv_obj_set_x(home_led_icon, 324);
    lv_obj_set_y(home_led_icon, 10);
    lv_obj_set_width(home_led_icon, 26);
    lv_obj_set_height(home_led_icon, 26);
    lv_image_set_src(home_led_icon, img_home_light);
    lv_obj_set_flag(home_led_icon, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(home_led_icon, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_image_recolor(home_led_icon, COLOR_ALERT_ORANGE, 0);
    lv_obj_set_style_image_recolor_opa(home_led_icon, 255, 0);

    lv_obj_t * home_led_title = lv_label_create(lv_obj_0);
    lv_obj_set_name(home_led_title, "home_led_title");
    lv_obj_set_x(home_led_title, 356);
    lv_obj_set_y(home_led_title, 8);
    lv_obj_set_width(home_led_title, 86);
    lv_label_set_text(home_led_title, "LED Lights");
    lv_label_set_long_mode(home_led_title, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(home_led_title, COLOR_TEXT_PRIMARY, 0);
    lv_obj_set_style_text_font(home_led_title, font_inter_12, 0);

    lv_obj_t * home_led_status = lv_label_create(lv_obj_0);
    lv_obj_set_name(home_led_status, "home_led_status");
    lv_obj_set_x(home_led_status, 356);
    lv_obj_set_y(home_led_status, 27);
    lv_obj_set_width(home_led_status, 44);
    lv_label_set_text(home_led_status, led_status);
    lv_label_set_long_mode(home_led_status, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(home_led_status, led_color, 0);
    lv_obj_set_style_text_font(home_led_status, font_inter_10, 0);

    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

