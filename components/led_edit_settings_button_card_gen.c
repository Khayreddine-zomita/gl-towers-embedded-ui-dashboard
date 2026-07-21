/**
 * @file led_edit_settings_button_card_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "led_edit_settings_button_card_gen.h"
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

lv_obj_t * led_edit_settings_button_card_create(lv_obj_t * parent, const char * button_text)
{
    LV_TRACE_OBJ_CREATE("begin");

    lv_obj_t * lv_obj_0 = lv_obj_create(parent);
    lv_obj_set_name_static(lv_obj_0, "led_edit_settings_button_card_#");
    lv_obj_set_width(lv_obj_0, 452);
    lv_obj_set_height(lv_obj_0, 48);
    lv_obj_set_flag(lv_obj_0, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(lv_obj_0, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(lv_obj_0, COLOR_STATUS_WARNING, 0);
    lv_obj_set_style_bg_opa(lv_obj_0, 25, 0);
    lv_obj_set_style_radius(lv_obj_0, 16, 0);
    lv_obj_set_style_pad_all(lv_obj_0, 0, 0);
    lv_obj_set_style_border_width(lv_obj_0, 0, 0);
    lv_obj_set_style_shadow_width(lv_obj_0, 8, 0);
    lv_obj_set_style_shadow_opa(lv_obj_0, 18, 0);
    lv_obj_set_style_shadow_color(lv_obj_0, COLOR_SHADOW, 0);
    lv_obj_set_style_shadow_offset_y(lv_obj_0, 3, 0);

    lv_obj_t * led_edit_settings_btn = lv_button_create(lv_obj_0);
    lv_obj_set_name(led_edit_settings_btn, "led_edit_settings_btn");
    lv_obj_set_x(led_edit_settings_btn, 2);
    lv_obj_set_y(led_edit_settings_btn, 2);
    lv_obj_set_width(led_edit_settings_btn, 448);
    lv_obj_set_height(led_edit_settings_btn, 44);
    lv_obj_set_flag(led_edit_settings_btn, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(led_edit_settings_btn, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_opa(led_edit_settings_btn, 0, 0);
    lv_obj_set_style_radius(led_edit_settings_btn, 10, 0);
    lv_obj_set_style_border_width(led_edit_settings_btn, 1, 0);
    lv_obj_set_style_border_color(led_edit_settings_btn, COLOR_STATUS_WARNING, 0);
    lv_obj_set_style_pad_all(led_edit_settings_btn, 0, 0);
    lv_obj_set_style_shadow_width(led_edit_settings_btn, 0, 0);
    lv_obj_t * led_edit_settings_label = lv_label_create(led_edit_settings_btn);
    lv_obj_set_name(led_edit_settings_label, "led_edit_settings_label");
    lv_obj_set_x(led_edit_settings_label, 0);
    lv_obj_set_y(led_edit_settings_label, 10);
    lv_obj_set_width(led_edit_settings_label, 440);
    lv_label_set_text(led_edit_settings_label, button_text);
    lv_label_set_long_mode(led_edit_settings_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_align(led_edit_settings_label, LV_TEXT_ALIGN_CENTER, 0);
    lv_obj_set_style_text_color(led_edit_settings_label, COLOR_STATUS_WARNING, 0);
    lv_obj_set_style_text_font(led_edit_settings_label, font_inter_12, 0);

    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

