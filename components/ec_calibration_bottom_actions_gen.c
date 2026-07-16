/**
 * @file ec_calibration_bottom_actions_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "ec_calibration_bottom_actions_gen.h"
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

lv_obj_t * ec_calibration_bottom_actions_create(lv_obj_t * parent, const char * cancel_text, const char * next_text)
{
    LV_TRACE_OBJ_CREATE("begin");

    lv_obj_t * lv_obj_0 = lv_obj_create(parent);
    lv_obj_set_name_static(lv_obj_0, "ec_calibration_bottom_actions_#");
    lv_obj_set_width(lv_obj_0, 452);
    lv_obj_set_height(lv_obj_0, 34);
    lv_obj_set_flag(lv_obj_0, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(lv_obj_0, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_opa(lv_obj_0, 0, 0);
    lv_obj_set_style_pad_all(lv_obj_0, 0, 0);
    lv_obj_set_style_border_width(lv_obj_0, 0, 0);
    lv_obj_set_style_radius(lv_obj_0, 0, 0);

    lv_obj_t * ec_calibration_cancel_btn = lv_button_create(lv_obj_0);
    lv_obj_set_name(ec_calibration_cancel_btn, "ec_calibration_cancel_btn");
    lv_obj_set_x(ec_calibration_cancel_btn, 0);
    lv_obj_set_y(ec_calibration_cancel_btn, 0);
    lv_obj_set_width(ec_calibration_cancel_btn, 216);
    lv_obj_set_height(ec_calibration_cancel_btn, 34);
    lv_obj_set_flag(ec_calibration_cancel_btn, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(ec_calibration_cancel_btn, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(ec_calibration_cancel_btn, COLOR_CARD_BG, 0);
    lv_obj_set_style_bg_opa(ec_calibration_cancel_btn, 255, 0);
    lv_obj_set_style_radius(ec_calibration_cancel_btn, 10, 0);
    lv_obj_set_style_border_width(ec_calibration_cancel_btn, 1, 0);
    lv_obj_set_style_border_color(ec_calibration_cancel_btn, COLOR_DIVIDER, 0);
    lv_obj_set_style_shadow_width(ec_calibration_cancel_btn, 0, 0);
    lv_obj_set_style_pad_all(ec_calibration_cancel_btn, 0, 0);
    lv_obj_t * ec_calibration_cancel_label = lv_label_create(ec_calibration_cancel_btn);
    lv_obj_set_name(ec_calibration_cancel_label, "ec_calibration_cancel_label");
    lv_obj_set_x(ec_calibration_cancel_label, 0);
    lv_obj_set_y(ec_calibration_cancel_label, 8);
    lv_obj_set_width(ec_calibration_cancel_label, 216);
    lv_label_set_text(ec_calibration_cancel_label, cancel_text);
    lv_label_set_long_mode(ec_calibration_cancel_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_align(ec_calibration_cancel_label, LV_TEXT_ALIGN_CENTER, 0);
    lv_obj_set_style_text_color(ec_calibration_cancel_label, COLOR_TEXT_PRIMARY, 0);
    lv_obj_set_style_text_font(ec_calibration_cancel_label, font_inter_12, 0);

    lv_obj_t * ec_calibration_next_btn = lv_button_create(lv_obj_0);
    lv_obj_set_name(ec_calibration_next_btn, "ec_calibration_next_btn");
    lv_obj_set_x(ec_calibration_next_btn, 236);
    lv_obj_set_y(ec_calibration_next_btn, 0);
    lv_obj_set_width(ec_calibration_next_btn, 216);
    lv_obj_set_height(ec_calibration_next_btn, 34);
    lv_obj_set_flag(ec_calibration_next_btn, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(ec_calibration_next_btn, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(ec_calibration_next_btn, COLOR_PRIMARY_GREEN, 0);
    lv_obj_set_style_bg_opa(ec_calibration_next_btn, 255, 0);
    lv_obj_set_style_radius(ec_calibration_next_btn, 10, 0);
    lv_obj_set_style_border_width(ec_calibration_next_btn, 0, 0);
    lv_obj_set_style_shadow_width(ec_calibration_next_btn, 0, 0);
    lv_obj_set_style_pad_all(ec_calibration_next_btn, 0, 0);
    lv_obj_t * ec_calibration_next_label = lv_label_create(ec_calibration_next_btn);
    lv_obj_set_name(ec_calibration_next_label, "ec_calibration_next_label");
    lv_obj_set_x(ec_calibration_next_label, 0);
    lv_obj_set_y(ec_calibration_next_label, 8);
    lv_obj_set_width(ec_calibration_next_label, 216);
    lv_label_set_text(ec_calibration_next_label, next_text);
    lv_label_set_long_mode(ec_calibration_next_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_align(ec_calibration_next_label, LV_TEXT_ALIGN_CENTER, 0);
    lv_obj_set_style_text_color(ec_calibration_next_label, COLOR_WHITE, 0);
    lv_obj_set_style_text_font(ec_calibration_next_label, font_inter_12, 0);

    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

