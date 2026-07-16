/**
 * @file global_bottom_nav_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "global_bottom_nav_gen.h"
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

lv_obj_t * global_bottom_nav_create(lv_obj_t * parent, lv_color_t nav_home_text_color, lv_color_t nav_sensors_text_color, lv_color_t nav_irrigation_text_color, lv_color_t nav_led_text_color, lv_color_t nav_settings_text_color)
{
    LV_TRACE_OBJ_CREATE("begin");

    lv_obj_t * lv_obj_0 = lv_obj_create(parent);
    lv_obj_set_name_static(lv_obj_0, "global_bottom_nav_#");
    lv_obj_set_width(lv_obj_0, 480);
    lv_obj_set_height(lv_obj_0, 40);
    lv_obj_set_flag(lv_obj_0, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(lv_obj_0, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(lv_obj_0, COLOR_WHITE, 0);
    lv_obj_set_style_bg_opa(lv_obj_0, 255, 0);
    lv_obj_set_style_pad_all(lv_obj_0, 0, 0);
    lv_obj_set_style_border_width(lv_obj_0, 0, 0);
    lv_obj_set_style_radius(lv_obj_0, 0, 0);

    lv_obj_t * nav_home_btn = lv_button_create(lv_obj_0);
    lv_obj_set_name(nav_home_btn, "nav_home_btn");
    lv_obj_set_x(nav_home_btn, 0);
    lv_obj_set_y(nav_home_btn, 0);
    lv_obj_set_width(nav_home_btn, 96);
    lv_obj_set_height(nav_home_btn, 40);
    lv_obj_set_flag(nav_home_btn, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(nav_home_btn, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_opa(nav_home_btn, 0, 0);
    lv_obj_set_style_border_width(nav_home_btn, 0, 0);
    lv_obj_set_style_radius(nav_home_btn, 0, 0);
    lv_obj_set_style_pad_all(nav_home_btn, 0, 0);
    lv_obj_set_style_shadow_width(nav_home_btn, 0, 0);
    lv_obj_t * lv_obj_1 = lv_obj_create(nav_home_btn);
    lv_obj_set_x(lv_obj_1, 20);
    lv_obj_set_y(lv_obj_1, 0);
    lv_obj_set_width(lv_obj_1, 56);
    lv_obj_set_height(lv_obj_1, 40);
    lv_obj_set_flag(lv_obj_1, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(lv_obj_1, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_opa(lv_obj_1, 0, 0);
    lv_obj_set_style_border_width(lv_obj_1, 0, 0);
    lv_obj_set_style_pad_all(lv_obj_1, 0, 0);
    lv_obj_set_style_radius(lv_obj_1, 0, 0);
    lv_obj_t * nav_home_icon = lv_image_create(lv_obj_1);
    lv_obj_set_name(nav_home_icon, "nav_home_icon");
    lv_obj_set_x(nav_home_icon, 0);
    lv_obj_set_y(nav_home_icon, 11);
    lv_obj_set_width(nav_home_icon, 16);
    lv_obj_set_height(nav_home_icon, 16);
    lv_image_set_src(nav_home_icon, img_nav_home);
    lv_obj_set_flag(nav_home_icon, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(nav_home_icon, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_image_recolor(nav_home_icon, nav_home_text_color, 0);
    lv_obj_set_style_image_recolor_opa(nav_home_icon, 255, 0);

    lv_obj_t * nav_home_label = lv_label_create(lv_obj_1);
    lv_obj_set_name(nav_home_label, "nav_home_label");
    lv_obj_set_x(nav_home_label, 22);
    lv_obj_set_y(nav_home_label, 13);
    lv_obj_set_width(nav_home_label, 34);
    lv_label_set_text(nav_home_label, "Home");
    lv_label_set_long_mode(nav_home_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(nav_home_label, nav_home_text_color, 0);
    lv_obj_set_style_text_font(nav_home_label, font_inter_12, 0);

    lv_obj_t * nav_sensors_btn = lv_button_create(lv_obj_0);
    lv_obj_set_name(nav_sensors_btn, "nav_sensors_btn");
    lv_obj_set_x(nav_sensors_btn, 96);
    lv_obj_set_y(nav_sensors_btn, 0);
    lv_obj_set_width(nav_sensors_btn, 96);
    lv_obj_set_height(nav_sensors_btn, 40);
    lv_obj_set_flag(nav_sensors_btn, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(nav_sensors_btn, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_opa(nav_sensors_btn, 0, 0);
    lv_obj_set_style_border_width(nav_sensors_btn, 0, 0);
    lv_obj_set_style_radius(nav_sensors_btn, 0, 0);
    lv_obj_set_style_pad_all(nav_sensors_btn, 0, 0);
    lv_obj_set_style_shadow_width(nav_sensors_btn, 0, 0);
    lv_obj_t * lv_obj_2 = lv_obj_create(nav_sensors_btn);
    lv_obj_set_x(lv_obj_2, 12);
    lv_obj_set_y(lv_obj_2, 0);
    lv_obj_set_width(lv_obj_2, 72);
    lv_obj_set_height(lv_obj_2, 40);
    lv_obj_set_flag(lv_obj_2, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(lv_obj_2, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_opa(lv_obj_2, 0, 0);
    lv_obj_set_style_border_width(lv_obj_2, 0, 0);
    lv_obj_set_style_pad_all(lv_obj_2, 0, 0);
    lv_obj_set_style_radius(lv_obj_2, 0, 0);
    lv_obj_t * nav_sensors_icon = lv_image_create(lv_obj_2);
    lv_obj_set_name(nav_sensors_icon, "nav_sensors_icon");
    lv_obj_set_x(nav_sensors_icon, 0);
    lv_obj_set_y(nav_sensors_icon, 11);
    lv_obj_set_width(nav_sensors_icon, 16);
    lv_obj_set_height(nav_sensors_icon, 16);
    lv_image_set_src(nav_sensors_icon, img_nav_sensors);
    lv_obj_set_flag(nav_sensors_icon, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(nav_sensors_icon, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_image_recolor(nav_sensors_icon, nav_sensors_text_color, 0);
    lv_obj_set_style_image_recolor_opa(nav_sensors_icon, 255, 0);

    lv_obj_t * nav_sensors_label = lv_label_create(lv_obj_2);
    lv_obj_set_name(nav_sensors_label, "nav_sensors_label");
    lv_obj_set_x(nav_sensors_label, 22);
    lv_obj_set_y(nav_sensors_label, 13);
    lv_obj_set_width(nav_sensors_label, 50);
    lv_label_set_text(nav_sensors_label, "Sensors");
    lv_label_set_long_mode(nav_sensors_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(nav_sensors_label, nav_sensors_text_color, 0);
    lv_obj_set_style_text_font(nav_sensors_label, font_inter_12, 0);

    lv_obj_t * nav_irrigation_btn = lv_button_create(lv_obj_0);
    lv_obj_set_name(nav_irrigation_btn, "nav_irrigation_btn");
    lv_obj_set_x(nav_irrigation_btn, 192);
    lv_obj_set_y(nav_irrigation_btn, 0);
    lv_obj_set_width(nav_irrigation_btn, 96);
    lv_obj_set_height(nav_irrigation_btn, 40);
    lv_obj_set_flag(nav_irrigation_btn, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(nav_irrigation_btn, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_opa(nav_irrigation_btn, 0, 0);
    lv_obj_set_style_border_width(nav_irrigation_btn, 0, 0);
    lv_obj_set_style_radius(nav_irrigation_btn, 0, 0);
    lv_obj_set_style_pad_all(nav_irrigation_btn, 0, 0);
    lv_obj_set_style_shadow_width(nav_irrigation_btn, 0, 0);
    lv_obj_t * lv_obj_3 = lv_obj_create(nav_irrigation_btn);
    lv_obj_set_x(lv_obj_3, 6);
    lv_obj_set_y(lv_obj_3, 0);
    lv_obj_set_width(lv_obj_3, 84);
    lv_obj_set_height(lv_obj_3, 40);
    lv_obj_set_flag(lv_obj_3, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(lv_obj_3, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_opa(lv_obj_3, 0, 0);
    lv_obj_set_style_border_width(lv_obj_3, 0, 0);
    lv_obj_set_style_pad_all(lv_obj_3, 0, 0);
    lv_obj_set_style_radius(lv_obj_3, 0, 0);
    lv_obj_t * nav_irrigation_icon = lv_image_create(lv_obj_3);
    lv_obj_set_name(nav_irrigation_icon, "nav_irrigation_icon");
    lv_obj_set_x(nav_irrigation_icon, 8);
    lv_obj_set_y(nav_irrigation_icon, 11);
    lv_obj_set_width(nav_irrigation_icon, 16);
    lv_obj_set_height(nav_irrigation_icon, 16);
    lv_image_set_src(nav_irrigation_icon, img_nav_irrigation);
    lv_obj_set_flag(nav_irrigation_icon, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(nav_irrigation_icon, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_image_recolor(nav_irrigation_icon, nav_irrigation_text_color, 0);
    lv_obj_set_style_image_recolor_opa(nav_irrigation_icon, 255, 0);

    lv_obj_t * nav_irrigation_label = lv_label_create(lv_obj_3);
    lv_obj_set_name(nav_irrigation_label, "nav_irrigation_label");
    lv_obj_set_x(nav_irrigation_label, 28);
    lv_obj_set_y(nav_irrigation_label, 13);
    lv_obj_set_width(nav_irrigation_label, 62);
    lv_label_set_text(nav_irrigation_label, "Irrigation");
    lv_label_set_long_mode(nav_irrigation_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(nav_irrigation_label, nav_irrigation_text_color, 0);
    lv_obj_set_style_text_font(nav_irrigation_label, font_inter_12, 0);

    lv_obj_t * nav_led_btn = lv_button_create(lv_obj_0);
    lv_obj_set_name(nav_led_btn, "nav_led_btn");
    lv_obj_set_x(nav_led_btn, 288);
    lv_obj_set_y(nav_led_btn, 0);
    lv_obj_set_width(nav_led_btn, 96);
    lv_obj_set_height(nav_led_btn, 40);
    lv_obj_set_flag(nav_led_btn, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(nav_led_btn, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_opa(nav_led_btn, 0, 0);
    lv_obj_set_style_border_width(nav_led_btn, 0, 0);
    lv_obj_set_style_radius(nav_led_btn, 0, 0);
    lv_obj_set_style_pad_all(nav_led_btn, 0, 0);
    lv_obj_set_style_shadow_width(nav_led_btn, 0, 0);
    lv_obj_t * lv_obj_4 = lv_obj_create(nav_led_btn);
    lv_obj_set_x(lv_obj_4, 23);
    lv_obj_set_y(lv_obj_4, 0);
    lv_obj_set_width(lv_obj_4, 50);
    lv_obj_set_height(lv_obj_4, 40);
    lv_obj_set_flag(lv_obj_4, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(lv_obj_4, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_opa(lv_obj_4, 0, 0);
    lv_obj_set_style_border_width(lv_obj_4, 0, 0);
    lv_obj_set_style_pad_all(lv_obj_4, 0, 0);
    lv_obj_set_style_radius(lv_obj_4, 0, 0);
    lv_obj_t * nav_led_icon = lv_image_create(lv_obj_4);
    lv_obj_set_name(nav_led_icon, "nav_led_icon");
    lv_obj_set_x(nav_led_icon, 0);
    lv_obj_set_y(nav_led_icon, 11);
    lv_obj_set_width(nav_led_icon, 16);
    lv_obj_set_height(nav_led_icon, 16);
    lv_image_set_src(nav_led_icon, img_nav_light);
    lv_obj_set_flag(nav_led_icon, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(nav_led_icon, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_image_recolor(nav_led_icon, nav_led_text_color, 0);
    lv_obj_set_style_image_recolor_opa(nav_led_icon, 255, 0);

    lv_obj_t * nav_led_label = lv_label_create(lv_obj_4);
    lv_obj_set_name(nav_led_label, "nav_led_label");
    lv_obj_set_x(nav_led_label, 22);
    lv_obj_set_y(nav_led_label, 12);
    lv_obj_set_width(nav_led_label, 28);
    lv_label_set_text(nav_led_label, "Light");
    lv_label_set_long_mode(nav_led_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(nav_led_label, nav_led_text_color, 0);
    lv_obj_set_style_text_font(nav_led_label, font_inter_12, 0);

    lv_obj_t * nav_settings_btn = lv_button_create(lv_obj_0);
    lv_obj_set_name(nav_settings_btn, "nav_settings_btn");
    lv_obj_set_x(nav_settings_btn, 384);
    lv_obj_set_y(nav_settings_btn, 0);
    lv_obj_set_width(nav_settings_btn, 96);
    lv_obj_set_height(nav_settings_btn, 40);
    lv_obj_set_flag(nav_settings_btn, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(nav_settings_btn, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_opa(nav_settings_btn, 0, 0);
    lv_obj_set_style_border_width(nav_settings_btn, 0, 0);
    lv_obj_set_style_radius(nav_settings_btn, 0, 0);
    lv_obj_set_style_pad_all(nav_settings_btn, 0, 0);
    lv_obj_set_style_shadow_width(nav_settings_btn, 0, 0);
    lv_obj_t * lv_obj_5 = lv_obj_create(nav_settings_btn);
    lv_obj_set_x(lv_obj_5, 12);
    lv_obj_set_y(lv_obj_5, 0);
    lv_obj_set_width(lv_obj_5, 72);
    lv_obj_set_height(lv_obj_5, 40);
    lv_obj_set_flag(lv_obj_5, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(lv_obj_5, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_opa(lv_obj_5, 0, 0);
    lv_obj_set_style_border_width(lv_obj_5, 0, 0);
    lv_obj_set_style_pad_all(lv_obj_5, 0, 0);
    lv_obj_set_style_radius(lv_obj_5, 0, 0);
    lv_obj_t * nav_settings_icon = lv_image_create(lv_obj_5);
    lv_obj_set_name(nav_settings_icon, "nav_settings_icon");
    lv_obj_set_x(nav_settings_icon, 0);
    lv_obj_set_y(nav_settings_icon, 11);
    lv_obj_set_width(nav_settings_icon, 16);
    lv_obj_set_height(nav_settings_icon, 16);
    lv_image_set_src(nav_settings_icon, img_nav_settings);
    lv_obj_set_flag(nav_settings_icon, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(nav_settings_icon, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_image_recolor(nav_settings_icon, nav_settings_text_color, 0);
    lv_obj_set_style_image_recolor_opa(nav_settings_icon, 255, 0);

    lv_obj_t * nav_settings_label = lv_label_create(lv_obj_5);
    lv_obj_set_name(nav_settings_label, "nav_settings_label");
    lv_obj_set_x(nav_settings_label, 22);
    lv_obj_set_y(nav_settings_label, 12);
    lv_obj_set_width(nav_settings_label, 50);
    lv_label_set_text(nav_settings_label, "Settings");
    lv_label_set_long_mode(nav_settings_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(nav_settings_label, nav_settings_text_color, 0);
    lv_obj_set_style_text_font(nav_settings_label, font_inter_12, 0);

    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

