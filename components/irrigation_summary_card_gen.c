/**
 * @file irrigation_summary_card_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "irrigation_summary_card_gen.h"
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

lv_obj_t * irrigation_summary_card_create(lv_obj_t * parent, const char * summary_1_value, const char * summary_1_label, const char * summary_2_value, const char * summary_2_label, const char * summary_3_value, const char * summary_3_label)
{
    LV_TRACE_OBJ_CREATE("begin");

    lv_obj_t * lv_obj_0 = lv_obj_create(parent);
    lv_obj_set_name_static(lv_obj_0, "irrigation_summary_card_#");
    lv_obj_set_width(lv_obj_0, 464);
    lv_obj_set_height(lv_obj_0, 60);
    lv_obj_set_flag(lv_obj_0, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(lv_obj_0, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(lv_obj_0, COLOR_CARD_BG, 0);
    lv_obj_set_style_bg_opa(lv_obj_0, 255, 0);
    lv_obj_set_style_radius(lv_obj_0, 16, 0);
    lv_obj_set_style_pad_all(lv_obj_0, 0, 0);
    lv_obj_set_style_border_width(lv_obj_0, 0, 0);
    lv_obj_set_style_shadow_width(lv_obj_0, 8, 0);
    lv_obj_set_style_shadow_opa(lv_obj_0, 18, 0);
    lv_obj_set_style_shadow_color(lv_obj_0, COLOR_SHADOW, 0);
    lv_obj_set_style_shadow_offset_y(lv_obj_0, 3, 0);

    lv_obj_t * irrigation_summary_1_value = lv_label_create(lv_obj_0);
    lv_obj_set_name(irrigation_summary_1_value, "irrigation_summary_1_value");
    lv_obj_set_x(irrigation_summary_1_value, 0);
    lv_obj_set_y(irrigation_summary_1_value, 9);
    lv_obj_set_width(irrigation_summary_1_value, 154);
    lv_label_set_text(irrigation_summary_1_value, summary_1_value);
    lv_label_set_long_mode(irrigation_summary_1_value, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_align(irrigation_summary_1_value, LV_TEXT_ALIGN_CENTER, 0);
    lv_obj_set_style_text_color(irrigation_summary_1_value, COLOR_TEXT_PRIMARY, 0);
    lv_obj_set_style_text_font(irrigation_summary_1_value, font_inter_15, 0);

    lv_obj_t * irrigation_summary_1_label = lv_label_create(lv_obj_0);
    lv_obj_set_name(irrigation_summary_1_label, "irrigation_summary_1_label");
    lv_obj_set_x(irrigation_summary_1_label, 0);
    lv_obj_set_y(irrigation_summary_1_label, 35);
    lv_obj_set_width(irrigation_summary_1_label, 154);
    lv_label_set_text(irrigation_summary_1_label, summary_1_label);
    lv_label_set_long_mode(irrigation_summary_1_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_align(irrigation_summary_1_label, LV_TEXT_ALIGN_CENTER, 0);
    lv_obj_set_style_text_color(irrigation_summary_1_label, COLOR_TEXT_MUTED, 0);
    lv_obj_set_style_text_font(irrigation_summary_1_label, font_inter_10, 0);

    lv_obj_t * irrigation_drop_icon_24px = lv_image_create(lv_obj_0);
    lv_obj_set_name(irrigation_drop_icon_24px, "irrigation_drop_icon_24px");
    lv_obj_set_x(irrigation_drop_icon_24px, 10);
    lv_obj_set_y(irrigation_drop_icon_24px, 15);
    lv_obj_set_width(irrigation_drop_icon_24px, 26);
    lv_obj_set_height(irrigation_drop_icon_24px, 26);
    lv_image_set_src(irrigation_drop_icon_24px, img_irrigation_drop_24px);
    lv_obj_set_flag(irrigation_drop_icon_24px, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(irrigation_drop_icon_24px, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_image_recolor(irrigation_drop_icon_24px, COLOR_BLUE, 0);
    lv_obj_set_style_image_recolor_opa(irrigation_drop_icon_24px, 255, 0);

    lv_obj_t * lv_obj_1 = lv_obj_create(lv_obj_0);
    lv_obj_set_x(lv_obj_1, 154);
    lv_obj_set_y(lv_obj_1, 10);
    lv_obj_set_width(lv_obj_1, 1);
    lv_obj_set_height(lv_obj_1, 40);
    lv_obj_set_flag(lv_obj_1, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(lv_obj_1, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(lv_obj_1, COLOR_DIVIDER, 0);
    lv_obj_set_style_bg_opa(lv_obj_1, 255, 0);
    lv_obj_set_style_border_width(lv_obj_1, 0, 0);
    lv_obj_set_style_pad_all(lv_obj_1, 0, 0);

    lv_obj_t * irrigation_summary_2_value = lv_label_create(lv_obj_0);
    lv_obj_set_name(irrigation_summary_2_value, "irrigation_summary_2_value");
    lv_obj_set_x(irrigation_summary_2_value, 155);
    lv_obj_set_y(irrigation_summary_2_value, 9);
    lv_obj_set_width(irrigation_summary_2_value, 154);
    lv_label_set_text(irrigation_summary_2_value, summary_2_value);
    lv_label_set_long_mode(irrigation_summary_2_value, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_align(irrigation_summary_2_value, LV_TEXT_ALIGN_CENTER, 0);
    lv_obj_set_style_text_color(irrigation_summary_2_value, COLOR_TEXT_PRIMARY, 0);
    lv_obj_set_style_text_font(irrigation_summary_2_value, font_inter_15, 0);

    lv_obj_t * irrigation_summary_2_label = lv_label_create(lv_obj_0);
    lv_obj_set_name(irrigation_summary_2_label, "irrigation_summary_2_label");
    lv_obj_set_x(irrigation_summary_2_label, 155);
    lv_obj_set_y(irrigation_summary_2_label, 35);
    lv_obj_set_width(irrigation_summary_2_label, 154);
    lv_label_set_text(irrigation_summary_2_label, summary_2_label);
    lv_label_set_long_mode(irrigation_summary_2_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_align(irrigation_summary_2_label, LV_TEXT_ALIGN_CENTER, 0);
    lv_obj_set_style_text_color(irrigation_summary_2_label, COLOR_TEXT_MUTED, 0);
    lv_obj_set_style_text_font(irrigation_summary_2_label, font_inter_10, 0);

    lv_obj_t * irrigation_clock_icon = lv_image_create(lv_obj_0);
    lv_obj_set_name(irrigation_clock_icon, "irrigation_clock_icon");
    lv_obj_set_x(irrigation_clock_icon, 165);
    lv_obj_set_y(irrigation_clock_icon, 15);
    lv_obj_set_width(irrigation_clock_icon, 26);
    lv_obj_set_height(irrigation_clock_icon, 26);
    lv_image_set_src(irrigation_clock_icon, img_irrigation_clock_24px);
    lv_obj_set_flag(irrigation_clock_icon, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(irrigation_clock_icon, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_image_recolor(irrigation_clock_icon, COLOR_ALERT_ORANGE, 0);
    lv_obj_set_style_image_recolor_opa(irrigation_clock_icon, 255, 0);

    lv_obj_t * lv_obj_2 = lv_obj_create(lv_obj_0);
    lv_obj_set_x(lv_obj_2, 309);
    lv_obj_set_y(lv_obj_2, 10);
    lv_obj_set_width(lv_obj_2, 1);
    lv_obj_set_height(lv_obj_2, 40);
    lv_obj_set_flag(lv_obj_2, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(lv_obj_2, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(lv_obj_2, COLOR_DIVIDER, 0);
    lv_obj_set_style_bg_opa(lv_obj_2, 255, 0);
    lv_obj_set_style_border_width(lv_obj_2, 0, 0);
    lv_obj_set_style_pad_all(lv_obj_2, 0, 0);

    lv_obj_t * irrigation_summary_3_value = lv_label_create(lv_obj_0);
    lv_obj_set_name(irrigation_summary_3_value, "irrigation_summary_3_value");
    lv_obj_set_x(irrigation_summary_3_value, 310);
    lv_obj_set_y(irrigation_summary_3_value, 9);
    lv_obj_set_width(irrigation_summary_3_value, 154);
    lv_label_set_text(irrigation_summary_3_value, summary_3_value);
    lv_label_set_long_mode(irrigation_summary_3_value, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_align(irrigation_summary_3_value, LV_TEXT_ALIGN_CENTER, 0);
    lv_obj_set_style_text_color(irrigation_summary_3_value, COLOR_TEXT_PRIMARY, 0);
    lv_obj_set_style_text_font(irrigation_summary_3_value, font_inter_15, 0);

    lv_obj_t * irrigation_summary_3_label = lv_label_create(lv_obj_0);
    lv_obj_set_name(irrigation_summary_3_label, "irrigation_summary_3_label");
    lv_obj_set_x(irrigation_summary_3_label, 310);
    lv_obj_set_y(irrigation_summary_3_label, 35);
    lv_obj_set_width(irrigation_summary_3_label, 154);
    lv_label_set_text(irrigation_summary_3_label, summary_3_label);
    lv_label_set_long_mode(irrigation_summary_3_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_align(irrigation_summary_3_label, LV_TEXT_ALIGN_CENTER, 0);
    lv_obj_set_style_text_color(irrigation_summary_3_label, COLOR_TEXT_MUTED, 0);
    lv_obj_set_style_text_font(irrigation_summary_3_label, font_inter_10, 0);

    lv_obj_t * irrigation_pump_icon_24px = lv_image_create(lv_obj_0);
    lv_obj_set_name(irrigation_pump_icon_24px, "irrigation_pump_icon_24px");
    lv_obj_set_x(irrigation_pump_icon_24px, 320);
    lv_obj_set_y(irrigation_pump_icon_24px, 15);
    lv_obj_set_width(irrigation_pump_icon_24px, 26);
    lv_obj_set_height(irrigation_pump_icon_24px, 26);
    lv_image_set_src(irrigation_pump_icon_24px, img_irrigation_pump_24px);
    lv_obj_set_flag(irrigation_pump_icon_24px, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(irrigation_pump_icon_24px, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_image_recolor(irrigation_pump_icon_24px, COLOR_DARK_FOREST, 0);
    lv_obj_set_style_image_recolor_opa(irrigation_pump_icon_24px, 255, 0);

    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

