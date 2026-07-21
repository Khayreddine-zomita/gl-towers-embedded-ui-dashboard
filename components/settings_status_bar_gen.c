/**
 * @file settings_status_bar_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "settings_status_bar_gen.h"
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

lv_obj_t * settings_status_bar_create(lv_obj_t * parent, const char * system_status_value, const char * last_update_value)
{
    LV_TRACE_OBJ_CREATE("begin");

    lv_obj_t * lv_obj_0 = lv_obj_create(parent);
    lv_obj_set_name_static(lv_obj_0, "settings_status_bar_#");
    lv_obj_set_width(lv_obj_0, 464);
    lv_obj_set_height(lv_obj_0, 38);
    lv_obj_set_flag(lv_obj_0, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(lv_obj_0, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(lv_obj_0, COLOR_SOFT_SURFACE, 0);
    lv_obj_set_style_bg_opa(lv_obj_0, 255, 0);
    lv_obj_set_style_radius(lv_obj_0, 10, 0);
    lv_obj_set_style_border_width(lv_obj_0, 1, 0);
    lv_obj_set_style_border_color(lv_obj_0, COLOR_DIVIDER, 0);
    lv_obj_set_style_shadow_width(lv_obj_0, 6, 0);
    lv_obj_set_style_shadow_opa(lv_obj_0, 10, 0);
    lv_obj_set_style_shadow_color(lv_obj_0, COLOR_SHADOW, 0);
    lv_obj_set_style_shadow_offset_y(lv_obj_0, 2, 0);
    lv_obj_set_style_pad_all(lv_obj_0, 0, 0);

    lv_obj_t * settings_status_bar_system_status_icon = lv_image_create(lv_obj_0);
    lv_obj_set_name(settings_status_bar_system_status_icon, "settings_status_bar_system_status_icon");
    lv_obj_set_x(settings_status_bar_system_status_icon, 9);
    lv_obj_set_y(settings_status_bar_system_status_icon, 5);
    lv_obj_set_width(settings_status_bar_system_status_icon, 24);
    lv_obj_set_height(settings_status_bar_system_status_icon, 24);
    lv_image_set_src(settings_status_bar_system_status_icon, img_settings_system_status);
    lv_obj_set_flag(settings_status_bar_system_status_icon, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(settings_status_bar_system_status_icon, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_image_recolor(settings_status_bar_system_status_icon, COLOR_GL_GREEN_DARK, 0);
    lv_obj_set_style_image_recolor_opa(settings_status_bar_system_status_icon, 255, 0);

    lv_obj_t * settings_system_status_title_label = lv_label_create(lv_obj_0);
    lv_obj_set_name(settings_system_status_title_label, "settings_system_status_title_label");
    lv_obj_set_x(settings_system_status_title_label, 46);
    lv_obj_set_y(settings_system_status_title_label, 5);
    lv_obj_set_width(settings_system_status_title_label, 140);
    lv_label_set_text(settings_system_status_title_label, "SYSTEM STATUS");
    lv_label_set_long_mode(settings_system_status_title_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(settings_system_status_title_label, COLOR_TEXT_PRIMARY, 0);
    lv_obj_set_style_text_font(settings_system_status_title_label, font_inter_11, 0);
    lv_obj_set_style_text_letter_space(settings_system_status_title_label, 1, 0);

    lv_obj_t * settings_system_status_value_label = lv_label_create(lv_obj_0);
    lv_obj_set_name(settings_system_status_value_label, "settings_system_status_value_label");
    lv_obj_set_x(settings_system_status_value_label, 46);
    lv_obj_set_y(settings_system_status_value_label, 21);
    lv_obj_set_width(settings_system_status_value_label, 180);
    lv_label_set_text(settings_system_status_value_label, system_status_value);
    lv_label_set_long_mode(settings_system_status_value_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(settings_system_status_value_label, COLOR_PRIMARY_GREEN, 0);
    lv_obj_set_style_text_font(settings_system_status_value_label, font_inter_10, 0);

    lv_obj_t * settings_status_divider = lv_obj_create(lv_obj_0);
    lv_obj_set_name(settings_status_divider, "settings_status_divider");
    lv_obj_set_x(settings_status_divider, 232);
    lv_obj_set_y(settings_status_divider, 7);
    lv_obj_set_width(settings_status_divider, 1);
    lv_obj_set_height(settings_status_divider, 24);
    lv_obj_set_flag(settings_status_divider, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(settings_status_divider, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(settings_status_divider, COLOR_DIVIDER, 0);
    lv_obj_set_style_bg_opa(settings_status_divider, 255, 0);
    lv_obj_set_style_border_width(settings_status_divider, 0, 0);
    lv_obj_set_style_pad_all(settings_status_divider, 0, 0);

    lv_obj_t * settings_status_bar_last_update_icon = lv_image_create(lv_obj_0);
    lv_obj_set_name(settings_status_bar_last_update_icon, "settings_status_bar_last_update_icon");
    lv_obj_set_x(settings_status_bar_last_update_icon, 254);
    lv_obj_set_y(settings_status_bar_last_update_icon, 5);
    lv_obj_set_width(settings_status_bar_last_update_icon, 24);
    lv_obj_set_height(settings_status_bar_last_update_icon, 24);
    lv_obj_set_flag(settings_status_bar_last_update_icon, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(settings_status_bar_last_update_icon, LV_SCROLLBAR_MODE_OFF);
    lv_image_set_src(settings_status_bar_last_update_icon, img_settings_last_update);
    lv_obj_set_style_image_recolor(settings_status_bar_last_update_icon, COLOR_GL_GREEN_DARK, 0);
    lv_obj_set_style_image_recolor_opa(settings_status_bar_last_update_icon, 255, 0);

    lv_obj_t * settings_last_update_title_label = lv_label_create(lv_obj_0);
    lv_obj_set_name(settings_last_update_title_label, "settings_last_update_title_label");
    lv_obj_set_x(settings_last_update_title_label, 294);
    lv_obj_set_y(settings_last_update_title_label, 5);
    lv_obj_set_width(settings_last_update_title_label, 130);
    lv_label_set_text(settings_last_update_title_label, "LAST UPDATE");
    lv_label_set_long_mode(settings_last_update_title_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(settings_last_update_title_label, COLOR_TEXT_PRIMARY, 0);
    lv_obj_set_style_text_font(settings_last_update_title_label, font_inter_11, 0);
    lv_obj_set_style_text_letter_space(settings_last_update_title_label, 1, 0);

    lv_obj_t * settings_last_update_value_label = lv_label_create(lv_obj_0);
    lv_obj_set_name(settings_last_update_value_label, "settings_last_update_value_label");
    lv_obj_set_x(settings_last_update_value_label, 294);
    lv_obj_set_y(settings_last_update_value_label, 21);
    lv_obj_set_width(settings_last_update_value_label, 150);
    lv_label_set_text(settings_last_update_value_label, last_update_value);
    lv_label_set_long_mode(settings_last_update_value_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(settings_last_update_value_label, COLOR_PRIMARY_GREEN, 0);
    lv_obj_set_style_text_font(settings_last_update_value_label, font_inter_10, 0);

    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

