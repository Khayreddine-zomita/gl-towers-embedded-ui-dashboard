/**
 * @file edit_irrigation_settings_bottom_actions_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "edit_irrigation_settings_bottom_actions_gen.h"
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

lv_obj_t * edit_irrigation_settings_bottom_actions_create(lv_obj_t * parent, const char * back_text, const char * save_text)
{
    LV_TRACE_OBJ_CREATE("begin");

    lv_obj_t * lv_obj_0 = lv_obj_create(parent);
    lv_obj_set_name_static(lv_obj_0, "edit_irrigation_settings_bottom_actions_#");
    lv_obj_set_width(lv_obj_0, 452);
    lv_obj_set_height(lv_obj_0, 34);
    lv_obj_set_flag(lv_obj_0, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(lv_obj_0, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_opa(lv_obj_0, 0, 0);
    lv_obj_set_style_pad_all(lv_obj_0, 0, 0);
    lv_obj_set_style_border_width(lv_obj_0, 0, 0);
    lv_obj_set_style_radius(lv_obj_0, 0, 0);

    lv_obj_t * edit_irrigation_back_btn = lv_button_create(lv_obj_0);
    lv_obj_set_name(edit_irrigation_back_btn, "edit_irrigation_back_btn");
    lv_obj_set_x(edit_irrigation_back_btn, 0);
    lv_obj_set_y(edit_irrigation_back_btn, 0);
    lv_obj_set_width(edit_irrigation_back_btn, 152);
    lv_obj_set_height(edit_irrigation_back_btn, 34);
    lv_obj_set_flag(edit_irrigation_back_btn, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(edit_irrigation_back_btn, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(edit_irrigation_back_btn, COLOR_CARD_BG, 0);
    lv_obj_set_style_bg_opa(edit_irrigation_back_btn, 255, 0);
    lv_obj_set_style_radius(edit_irrigation_back_btn, 10, 0);
    lv_obj_set_style_border_width(edit_irrigation_back_btn, 1, 0);
    lv_obj_set_style_border_color(edit_irrigation_back_btn, COLOR_DIVIDER, 0);
    lv_obj_set_style_pad_all(edit_irrigation_back_btn, 0, 0);
    lv_obj_set_style_shadow_width(edit_irrigation_back_btn, 0, 0);
    lv_obj_t * edit_irrigation_back_label = lv_label_create(edit_irrigation_back_btn);
    lv_obj_set_name(edit_irrigation_back_label, "edit_irrigation_back_label");
    lv_obj_set_x(edit_irrigation_back_label, 0);
    lv_obj_set_y(edit_irrigation_back_label, 8);
    lv_obj_set_width(edit_irrigation_back_label, 152);
    lv_label_set_text(edit_irrigation_back_label, back_text);
    lv_label_set_long_mode(edit_irrigation_back_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_align(edit_irrigation_back_label, LV_TEXT_ALIGN_CENTER, 0);
    lv_obj_set_style_text_color(edit_irrigation_back_label, COLOR_TEXT_PRIMARY, 0);
    lv_obj_set_style_text_font(edit_irrigation_back_label, font_inter_12, 0);

    lv_obj_t * edit_irrigation_save_btn = lv_button_create(lv_obj_0);
    lv_obj_set_name(edit_irrigation_save_btn, "edit_irrigation_save_btn");
    lv_obj_set_x(edit_irrigation_save_btn, 166);
    lv_obj_set_y(edit_irrigation_save_btn, 0);
    lv_obj_set_width(edit_irrigation_save_btn, 286);
    lv_obj_set_height(edit_irrigation_save_btn, 34);
    lv_obj_set_flag(edit_irrigation_save_btn, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(edit_irrigation_save_btn, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(edit_irrigation_save_btn, COLOR_STATUS_HEALTHY, 0);
    lv_obj_set_style_bg_opa(edit_irrigation_save_btn, 255, 0);
    lv_obj_set_style_radius(edit_irrigation_save_btn, 10, 0);
    lv_obj_set_style_border_width(edit_irrigation_save_btn, 0, 0);
    lv_obj_set_style_pad_all(edit_irrigation_save_btn, 0, 0);
    lv_obj_set_style_shadow_width(edit_irrigation_save_btn, 0, 0);
    lv_obj_t * edit_irrigation_save_label = lv_label_create(edit_irrigation_save_btn);
    lv_obj_set_name(edit_irrigation_save_label, "edit_irrigation_save_label");
    lv_obj_set_x(edit_irrigation_save_label, 0);
    lv_obj_set_y(edit_irrigation_save_label, 8);
    lv_obj_set_width(edit_irrigation_save_label, 286);
    lv_label_set_text(edit_irrigation_save_label, save_text);
    lv_label_set_long_mode(edit_irrigation_save_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_align(edit_irrigation_save_label, LV_TEXT_ALIGN_CENTER, 0);
    lv_obj_set_style_text_color(edit_irrigation_save_label, COLOR_WHITE, 0);
    lv_obj_set_style_text_font(edit_irrigation_save_label, font_inter_12, 0);

    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

