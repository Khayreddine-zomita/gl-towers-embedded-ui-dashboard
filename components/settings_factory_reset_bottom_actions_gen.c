/**
 * @file settings_factory_reset_bottom_actions_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "settings_factory_reset_bottom_actions_gen.h"
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

lv_obj_t * settings_factory_reset_bottom_actions_create(lv_obj_t * parent, const char * back_text, const char * reset_text)
{
    LV_TRACE_OBJ_CREATE("begin");

    lv_obj_t * lv_obj_0 = lv_obj_create(parent);
    lv_obj_set_name_static(lv_obj_0, "settings_factory_reset_bottom_actions_#");
    lv_obj_set_width(lv_obj_0, 452);
    lv_obj_set_height(lv_obj_0, 34);
    lv_obj_set_flag(lv_obj_0, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(lv_obj_0, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_opa(lv_obj_0, 0, 0);
    lv_obj_set_style_pad_all(lv_obj_0, 0, 0);
    lv_obj_set_style_border_width(lv_obj_0, 0, 0);
    lv_obj_set_style_radius(lv_obj_0, 0, 0);

    lv_obj_t * settings_factory_reset_back_btn = lv_button_create(lv_obj_0);
    lv_obj_set_name(settings_factory_reset_back_btn, "settings_factory_reset_back_btn");
    lv_obj_set_x(settings_factory_reset_back_btn, 0);
    lv_obj_set_y(settings_factory_reset_back_btn, 0);
    lv_obj_set_width(settings_factory_reset_back_btn, 216);
    lv_obj_set_height(settings_factory_reset_back_btn, 34);
    lv_obj_set_flag(settings_factory_reset_back_btn, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(settings_factory_reset_back_btn, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(settings_factory_reset_back_btn, COLOR_CARD_BG, 0);
    lv_obj_set_style_bg_opa(settings_factory_reset_back_btn, 255, 0);
    lv_obj_set_style_radius(settings_factory_reset_back_btn, 10, 0);
    lv_obj_set_style_border_width(settings_factory_reset_back_btn, 1, 0);
    lv_obj_set_style_border_color(settings_factory_reset_back_btn, COLOR_DIVIDER, 0);
    lv_obj_set_style_shadow_width(settings_factory_reset_back_btn, 0, 0);
    lv_obj_set_style_pad_all(settings_factory_reset_back_btn, 0, 0);
    lv_obj_t * settings_factory_reset_back_label = lv_label_create(settings_factory_reset_back_btn);
    lv_obj_set_name(settings_factory_reset_back_label, "settings_factory_reset_back_label");
    lv_obj_set_x(settings_factory_reset_back_label, 0);
    lv_obj_set_y(settings_factory_reset_back_label, 8);
    lv_obj_set_width(settings_factory_reset_back_label, 216);
    lv_label_set_text(settings_factory_reset_back_label, back_text);
    lv_label_set_long_mode(settings_factory_reset_back_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_align(settings_factory_reset_back_label, LV_TEXT_ALIGN_CENTER, 0);
    lv_obj_set_style_text_color(settings_factory_reset_back_label, COLOR_TEXT_PRIMARY, 0);
    lv_obj_set_style_text_font(settings_factory_reset_back_label, font_inter_12, 0);

    lv_obj_t * settings_factory_reset_action_btn = lv_button_create(lv_obj_0);
    lv_obj_set_name(settings_factory_reset_action_btn, "settings_factory_reset_action_btn");
    lv_obj_set_x(settings_factory_reset_action_btn, 236);
    lv_obj_set_y(settings_factory_reset_action_btn, 0);
    lv_obj_set_width(settings_factory_reset_action_btn, 216);
    lv_obj_set_height(settings_factory_reset_action_btn, 34);
    lv_obj_set_flag(settings_factory_reset_action_btn, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(settings_factory_reset_action_btn, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(settings_factory_reset_action_btn, COLOR_ALERT_RED, 0);
    lv_obj_set_style_bg_opa(settings_factory_reset_action_btn, 255, 0);
    lv_obj_set_style_radius(settings_factory_reset_action_btn, 10, 0);
    lv_obj_set_style_border_width(settings_factory_reset_action_btn, 0, 0);
    lv_obj_set_style_shadow_width(settings_factory_reset_action_btn, 0, 0);
    lv_obj_set_style_pad_all(settings_factory_reset_action_btn, 0, 0);
    lv_obj_t * settings_factory_reset_action_label = lv_label_create(settings_factory_reset_action_btn);
    lv_obj_set_name(settings_factory_reset_action_label, "settings_factory_reset_action_label");
    lv_obj_set_x(settings_factory_reset_action_label, 0);
    lv_obj_set_y(settings_factory_reset_action_label, 8);
    lv_obj_set_width(settings_factory_reset_action_label, 216);
    lv_label_set_text(settings_factory_reset_action_label, reset_text);
    lv_label_set_long_mode(settings_factory_reset_action_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_align(settings_factory_reset_action_label, LV_TEXT_ALIGN_CENTER, 0);
    lv_obj_set_style_text_color(settings_factory_reset_action_label, COLOR_WHITE, 0);
    lv_obj_set_style_text_font(settings_factory_reset_action_label, font_inter_12, 0);

    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

