/**
 * @file irrigation_pump_cycle_recommended_card_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "irrigation_pump_cycle_recommended_card_gen.h"
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

lv_obj_t * irrigation_pump_cycle_recommended_card_create(lv_obj_t * parent, const char * recommended_title, const char * recommended_value, const char * apply_text)
{
    LV_TRACE_OBJ_CREATE("begin");

    lv_obj_t * lv_obj_0 = lv_obj_create(parent);
    lv_obj_set_name_static(lv_obj_0, "irrigation_pump_cycle_recommended_card_#");
    lv_obj_set_width(lv_obj_0, 452);
    lv_obj_set_height(lv_obj_0, 58);
    lv_obj_set_flag(lv_obj_0, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(lv_obj_0, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(lv_obj_0, COLOR_WATER_TEMP_BG, 0);
    lv_obj_set_style_bg_opa(lv_obj_0, 120, 0);
    lv_obj_set_style_radius(lv_obj_0, 16, 0);
    lv_obj_set_style_pad_all(lv_obj_0, 0, 0);
    lv_obj_set_style_border_width(lv_obj_0, 1, 0);
    lv_obj_set_style_border_color(lv_obj_0, COLOR_STATUS_INFO, 0);
    lv_obj_set_style_shadow_width(lv_obj_0, 0, 0);

    lv_obj_t * irrigation_pump_cycle_recommended_title_label = lv_label_create(lv_obj_0);
    lv_obj_set_name(irrigation_pump_cycle_recommended_title_label, "irrigation_pump_cycle_recommended_title_label");
    lv_obj_set_x(irrigation_pump_cycle_recommended_title_label, 18);
    lv_obj_set_y(irrigation_pump_cycle_recommended_title_label, 10);
    lv_obj_set_width(irrigation_pump_cycle_recommended_title_label, 280);
    lv_label_set_text(irrigation_pump_cycle_recommended_title_label, recommended_title);
    lv_label_set_long_mode(irrigation_pump_cycle_recommended_title_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(irrigation_pump_cycle_recommended_title_label, COLOR_STATUS_INFO, 0);
    lv_obj_set_style_text_font(irrigation_pump_cycle_recommended_title_label, font_inter_10, 0);
    lv_obj_set_style_text_letter_space(irrigation_pump_cycle_recommended_title_label, 1, 0);

    lv_obj_t * irrigation_pump_cycle_recommended_value_label = lv_label_create(lv_obj_0);
    lv_obj_set_name(irrigation_pump_cycle_recommended_value_label, "irrigation_pump_cycle_recommended_value_label");
    lv_obj_set_x(irrigation_pump_cycle_recommended_value_label, 18);
    lv_obj_set_y(irrigation_pump_cycle_recommended_value_label, 31);
    lv_obj_set_width(irrigation_pump_cycle_recommended_value_label, 300);
    lv_label_set_text(irrigation_pump_cycle_recommended_value_label, recommended_value);
    lv_label_set_long_mode(irrigation_pump_cycle_recommended_value_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(irrigation_pump_cycle_recommended_value_label, COLOR_TEXT_PRIMARY, 0);
    lv_obj_set_style_text_font(irrigation_pump_cycle_recommended_value_label, font_inter_14, 0);

    lv_obj_t * irrigation_pump_cycle_recommended_apply_btn = lv_button_create(lv_obj_0);
    lv_obj_set_name(irrigation_pump_cycle_recommended_apply_btn, "irrigation_pump_cycle_recommended_apply_btn");
    lv_obj_set_x(irrigation_pump_cycle_recommended_apply_btn, 362);
    lv_obj_set_y(irrigation_pump_cycle_recommended_apply_btn, 12);
    lv_obj_set_width(irrigation_pump_cycle_recommended_apply_btn, 68);
    lv_obj_set_height(irrigation_pump_cycle_recommended_apply_btn, 34);
    lv_obj_set_flag(irrigation_pump_cycle_recommended_apply_btn, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(irrigation_pump_cycle_recommended_apply_btn, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(irrigation_pump_cycle_recommended_apply_btn, COLOR_STATUS_INFO, 0);
    lv_obj_set_style_bg_opa(irrigation_pump_cycle_recommended_apply_btn, 255, 0);
    lv_obj_set_style_radius(irrigation_pump_cycle_recommended_apply_btn, 10, 0);
    lv_obj_set_style_border_width(irrigation_pump_cycle_recommended_apply_btn, 0, 0);
    lv_obj_set_style_pad_all(irrigation_pump_cycle_recommended_apply_btn, 0, 0);
    lv_obj_set_style_shadow_width(irrigation_pump_cycle_recommended_apply_btn, 0, 0);
    lv_obj_t * irrigation_pump_cycle_recommended_apply_label = lv_label_create(irrigation_pump_cycle_recommended_apply_btn);
    lv_obj_set_name(irrigation_pump_cycle_recommended_apply_label, "irrigation_pump_cycle_recommended_apply_label");
    lv_obj_set_x(irrigation_pump_cycle_recommended_apply_label, 0);
    lv_obj_set_y(irrigation_pump_cycle_recommended_apply_label, 8);
    lv_obj_set_width(irrigation_pump_cycle_recommended_apply_label, 68);
    lv_label_set_text(irrigation_pump_cycle_recommended_apply_label, apply_text);
    lv_label_set_long_mode(irrigation_pump_cycle_recommended_apply_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_align(irrigation_pump_cycle_recommended_apply_label, LV_TEXT_ALIGN_CENTER, 0);
    lv_obj_set_style_text_color(irrigation_pump_cycle_recommended_apply_label, COLOR_WHITE, 0);
    lv_obj_set_style_text_font(irrigation_pump_cycle_recommended_apply_label, font_inter_12, 0);

    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

