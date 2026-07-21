/**
 * @file irrigation_settings_manual_pump_test_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "irrigation_settings_manual_pump_test_gen.h"
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

lv_obj_t * irrigation_settings_manual_pump_test_create(lv_obj_t * parent, const char * title_text, const char * description_text, const char * button_text)
{
    LV_TRACE_OBJ_CREATE("begin");

    lv_obj_t * lv_obj_0 = lv_obj_create(parent);
    lv_obj_set_name_static(lv_obj_0, "irrigation_settings_manual_pump_test_#");
    lv_obj_set_width(lv_obj_0, 452);
    lv_obj_set_height(lv_obj_0, 50);
    lv_obj_set_flag(lv_obj_0, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(lv_obj_0, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(lv_obj_0, COLOR_CARD_BG, 0);
    lv_obj_set_style_bg_opa(lv_obj_0, 255, 0);
    lv_obj_set_style_radius(lv_obj_0, 12, 0);
    lv_obj_set_style_pad_all(lv_obj_0, 0, 0);
    lv_obj_set_style_border_width(lv_obj_0, 2, 0);
    lv_obj_set_style_border_color(lv_obj_0, COLOR_DIVIDER, 0);
    lv_obj_set_style_shadow_width(lv_obj_0, 8, 0);
    lv_obj_set_style_shadow_opa(lv_obj_0, 16, 0);
    lv_obj_set_style_shadow_color(lv_obj_0, COLOR_SHADOW, 0);
    lv_obj_set_style_shadow_offset_y(lv_obj_0, 3, 0);

    lv_obj_t * irrigation_settings_manual_pump_test_title_label = lv_label_create(lv_obj_0);
    lv_obj_set_name(irrigation_settings_manual_pump_test_title_label, "irrigation_settings_manual_pump_test_title_label");
    lv_obj_set_x(irrigation_settings_manual_pump_test_title_label, 20);
    lv_obj_set_y(irrigation_settings_manual_pump_test_title_label, 8);
    lv_obj_set_width(irrigation_settings_manual_pump_test_title_label, 180);
    lv_label_set_text(irrigation_settings_manual_pump_test_title_label, title_text);
    lv_label_set_long_mode(irrigation_settings_manual_pump_test_title_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(irrigation_settings_manual_pump_test_title_label, COLOR_TEXT_PRIMARY, 0);
    lv_obj_set_style_text_font(irrigation_settings_manual_pump_test_title_label, font_inter_14, 0);

    lv_obj_t * irrigation_settings_manual_pump_test_desc_label = lv_label_create(lv_obj_0);
    lv_obj_set_name(irrigation_settings_manual_pump_test_desc_label, "irrigation_settings_manual_pump_test_desc_label");
    lv_obj_set_x(irrigation_settings_manual_pump_test_desc_label, 20);
    lv_obj_set_y(irrigation_settings_manual_pump_test_desc_label, 28);
    lv_obj_set_width(irrigation_settings_manual_pump_test_desc_label, 260);
    lv_label_set_text(irrigation_settings_manual_pump_test_desc_label, description_text);
    lv_label_set_long_mode(irrigation_settings_manual_pump_test_desc_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(irrigation_settings_manual_pump_test_desc_label, COLOR_TEXT_SECONDARY, 0);
    lv_obj_set_style_text_font(irrigation_settings_manual_pump_test_desc_label, font_inter_10, 0);

    lv_obj_t * irrigation_settings_manual_pump_test_btn = lv_button_create(lv_obj_0);
    lv_obj_set_name(irrigation_settings_manual_pump_test_btn, "irrigation_settings_manual_pump_test_btn");
    lv_obj_set_x(irrigation_settings_manual_pump_test_btn, 350);
    lv_obj_set_y(irrigation_settings_manual_pump_test_btn, 11);
    lv_obj_set_width(irrigation_settings_manual_pump_test_btn, 82);
    lv_obj_set_height(irrigation_settings_manual_pump_test_btn, 28);
    lv_obj_set_flag(irrigation_settings_manual_pump_test_btn, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(irrigation_settings_manual_pump_test_btn, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(irrigation_settings_manual_pump_test_btn, COLOR_WATER_TEMP_BG, 0);
    lv_obj_set_style_bg_opa(irrigation_settings_manual_pump_test_btn, 120, 0);
    lv_obj_set_style_radius(irrigation_settings_manual_pump_test_btn, 10, 0);
    lv_obj_set_style_border_width(irrigation_settings_manual_pump_test_btn, 0, 0);
    lv_obj_set_style_pad_all(irrigation_settings_manual_pump_test_btn, 0, 0);
    lv_obj_set_style_shadow_width(irrigation_settings_manual_pump_test_btn, 0, 0);
    lv_obj_t * irrigation_settings_manual_pump_test_btn_label = lv_label_create(irrigation_settings_manual_pump_test_btn);
    lv_obj_set_name(irrigation_settings_manual_pump_test_btn_label, "irrigation_settings_manual_pump_test_btn_label");
    lv_obj_set_x(irrigation_settings_manual_pump_test_btn_label, 0);
    lv_obj_set_y(irrigation_settings_manual_pump_test_btn_label, 6);
    lv_obj_set_width(irrigation_settings_manual_pump_test_btn_label, 82);
    lv_label_set_text(irrigation_settings_manual_pump_test_btn_label, button_text);
    lv_label_set_long_mode(irrigation_settings_manual_pump_test_btn_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_align(irrigation_settings_manual_pump_test_btn_label, LV_TEXT_ALIGN_CENTER, 0);
    lv_obj_set_style_text_color(irrigation_settings_manual_pump_test_btn_label, COLOR_STATUS_INFO, 0);
    lv_obj_set_style_text_font(irrigation_settings_manual_pump_test_btn_label, font_inter_12, 0);

    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

