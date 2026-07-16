/**
 * @file irrigation_overview_card_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "irrigation_overview_card_gen.h"
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

lv_obj_t * irrigation_overview_card_create(lv_obj_t * parent, const char * stage_text, const char * mode_title, const char * cycle_summary, const char * cycles_per_day, const char * pump_per_day, const char * window_time, const char * night_break_status, const char * warning_text)
{
    LV_TRACE_OBJ_CREATE("begin");

    lv_obj_t * lv_obj_0 = lv_obj_create(parent);
    lv_obj_set_name_static(lv_obj_0, "irrigation_overview_card_#");
    lv_obj_set_width(lv_obj_0, 452);
    lv_obj_set_height(lv_obj_0, 198);
    lv_obj_set_flag(lv_obj_0, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(lv_obj_0, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(lv_obj_0, COLOR_CARD_BG, 0);
    lv_obj_set_style_bg_opa(lv_obj_0, 255, 0);
    lv_obj_set_style_radius(lv_obj_0, 20, 0);
    lv_obj_set_style_pad_all(lv_obj_0, 0, 0);
    lv_obj_set_style_border_width(lv_obj_0, 1, 0);
    lv_obj_set_style_border_color(lv_obj_0, COLOR_STATUS_INFO, 0);
    lv_obj_set_style_shadow_width(lv_obj_0, 10, 0);
    lv_obj_set_style_shadow_opa(lv_obj_0, 18, 0);
    lv_obj_set_style_shadow_color(lv_obj_0, COLOR_SHADOW, 0);
    lv_obj_set_style_shadow_offset_y(lv_obj_0, 4, 0);

    lv_obj_t * irrigation_overview_icon_bg = lv_obj_create(lv_obj_0);
    lv_obj_set_name(irrigation_overview_icon_bg, "irrigation_overview_icon_bg");
    lv_obj_set_x(irrigation_overview_icon_bg, 20);
    lv_obj_set_y(irrigation_overview_icon_bg, 15);
    lv_obj_set_width(irrigation_overview_icon_bg, 54);
    lv_obj_set_height(irrigation_overview_icon_bg, 54);
    lv_obj_set_flag(irrigation_overview_icon_bg, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(irrigation_overview_icon_bg, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(irrigation_overview_icon_bg, COLOR_WATER_TEMP_BG, 0);
    lv_obj_set_style_bg_opa(irrigation_overview_icon_bg, 90, 0);
    lv_obj_set_style_radius(irrigation_overview_icon_bg, 14, 0);
    lv_obj_set_style_border_width(irrigation_overview_icon_bg, 0, 0);
    lv_obj_set_style_pad_all(irrigation_overview_icon_bg, 0, 0);
    lv_obj_t * irrigation_overview_drop_icon = lv_image_create(irrigation_overview_icon_bg);
    lv_obj_set_name(irrigation_overview_drop_icon, "irrigation_overview_drop_icon");
    lv_obj_set_x(irrigation_overview_drop_icon, 15);
    lv_obj_set_y(irrigation_overview_drop_icon, 15);
    lv_obj_set_width(irrigation_overview_drop_icon, 24);
    lv_obj_set_height(irrigation_overview_drop_icon, 24);
    lv_image_set_src(irrigation_overview_drop_icon, img_irrigation_drop_24px);
    lv_obj_set_flag(irrigation_overview_drop_icon, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(irrigation_overview_drop_icon, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_image_recolor(irrigation_overview_drop_icon, COLOR_STATUS_INFO, 0);
    lv_obj_set_style_image_recolor_opa(irrigation_overview_drop_icon, 255, 0);

    lv_obj_t * irrigation_overview_stage_pill = lv_obj_create(lv_obj_0);
    lv_obj_set_name(irrigation_overview_stage_pill, "irrigation_overview_stage_pill");
    lv_obj_set_x(irrigation_overview_stage_pill, 94);
    lv_obj_set_y(irrigation_overview_stage_pill, 11);
    lv_obj_set_width(irrigation_overview_stage_pill, 122);
    lv_obj_set_height(irrigation_overview_stage_pill, 22);
    lv_obj_set_flag(irrigation_overview_stage_pill, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(irrigation_overview_stage_pill, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(irrigation_overview_stage_pill, COLOR_LIGHT_GREEN, 0);
    lv_obj_set_style_bg_opa(irrigation_overview_stage_pill, 255, 0);
    lv_obj_set_style_radius(irrigation_overview_stage_pill, 11, 0);
    lv_obj_set_style_border_width(irrigation_overview_stage_pill, 0, 0);
    lv_obj_set_style_pad_all(irrigation_overview_stage_pill, 0, 0);
    lv_obj_t * irrigation_overview_stage_label = lv_label_create(irrigation_overview_stage_pill);
    lv_obj_set_name(irrigation_overview_stage_label, "irrigation_overview_stage_label");
    lv_obj_set_x(irrigation_overview_stage_label, 0);
    lv_obj_set_y(irrigation_overview_stage_label, 3);
    lv_obj_set_width(irrigation_overview_stage_label, 122);
    lv_label_set_text(irrigation_overview_stage_label, stage_text);
    lv_label_set_long_mode(irrigation_overview_stage_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_align(irrigation_overview_stage_label, LV_TEXT_ALIGN_CENTER, 0);
    lv_obj_set_style_text_color(irrigation_overview_stage_label, COLOR_PRIMARY_GREEN, 0);
    lv_obj_set_style_text_font(irrigation_overview_stage_label, font_inter_12, 0);

    lv_obj_t * irrigation_germination_icon = lv_image_create(irrigation_overview_stage_pill);
    lv_obj_set_name(irrigation_germination_icon, "irrigation_germination_icon");
    lv_obj_set_x(irrigation_germination_icon, 5);
    lv_obj_set_y(irrigation_germination_icon, 3);
    lv_obj_set_width(irrigation_germination_icon, 18);
    lv_obj_set_height(irrigation_germination_icon, 18);
    lv_image_set_src(irrigation_germination_icon, img_irrigation_germination_16px);
    lv_obj_set_flag(irrigation_germination_icon, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(irrigation_germination_icon, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_image_recolor(irrigation_germination_icon, COLOR_PRIMARY_GREEN, 0);
    lv_obj_set_style_image_recolor_opa(irrigation_germination_icon, 255, 0);

    lv_obj_t * irrigation_overview_title_drop = lv_image_create(lv_obj_0);
    lv_obj_set_name(irrigation_overview_title_drop, "irrigation_overview_title_drop");
    lv_obj_set_x(irrigation_overview_title_drop, 90);
    lv_obj_set_y(irrigation_overview_title_drop, 40);
    lv_obj_set_width(irrigation_overview_title_drop, 26);
    lv_obj_set_height(irrigation_overview_title_drop, 26);
    lv_image_set_src(irrigation_overview_title_drop, img_irrigation_drop_silhouette_24px);
    lv_obj_set_flag(irrigation_overview_title_drop, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(irrigation_overview_title_drop, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_image_recolor(irrigation_overview_title_drop, COLOR_STATUS_INFO, 0);
    lv_obj_set_style_image_recolor_opa(irrigation_overview_title_drop, 255, 0);

    lv_obj_t * irrigation_overview_mode_title_label = lv_label_create(lv_obj_0);
    lv_obj_set_name(irrigation_overview_mode_title_label, "irrigation_overview_mode_title_label");
    lv_obj_set_x(irrigation_overview_mode_title_label, 118);
    lv_obj_set_y(irrigation_overview_mode_title_label, 34);
    lv_obj_set_width(irrigation_overview_mode_title_label, 250);
    lv_label_set_text(irrigation_overview_mode_title_label, mode_title);
    lv_label_set_long_mode(irrigation_overview_mode_title_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(irrigation_overview_mode_title_label, COLOR_TEXT_PRIMARY, 0);
    lv_obj_set_style_text_font(irrigation_overview_mode_title_label, font_inter_26, 0);

    lv_obj_t * irrigation_overview_cycle_summary_label = lv_label_create(lv_obj_0);
    lv_obj_set_name(irrigation_overview_cycle_summary_label, "irrigation_overview_cycle_summary_label");
    lv_obj_set_x(irrigation_overview_cycle_summary_label, 118);
    lv_obj_set_y(irrigation_overview_cycle_summary_label, 65);
    lv_obj_set_width(irrigation_overview_cycle_summary_label, 280);
    lv_label_set_text(irrigation_overview_cycle_summary_label, cycle_summary);
    lv_label_set_long_mode(irrigation_overview_cycle_summary_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(irrigation_overview_cycle_summary_label, COLOR_TEXT_SECONDARY, 0);
    lv_obj_set_style_text_font(irrigation_overview_cycle_summary_label, font_inter_11, 0);

    lv_obj_t * irrigation_overview_cycles_card = lv_obj_create(lv_obj_0);
    lv_obj_set_name(irrigation_overview_cycles_card, "irrigation_overview_cycles_card");
    lv_obj_set_x(irrigation_overview_cycles_card, 20);
    lv_obj_set_y(irrigation_overview_cycles_card, 85);
    lv_obj_set_width(irrigation_overview_cycles_card, 198);
    lv_obj_set_height(irrigation_overview_cycles_card, 34);
    lv_obj_set_flag(irrigation_overview_cycles_card, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(irrigation_overview_cycles_card, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(irrigation_overview_cycles_card, COLOR_WATER_TEMP_BG, 0);
    lv_obj_set_style_bg_opa(irrigation_overview_cycles_card, 50, 0);
    lv_obj_set_style_radius(irrigation_overview_cycles_card, 11, 0);
    lv_obj_set_style_border_width(irrigation_overview_cycles_card, 1, 0);
    lv_obj_set_style_border_color(irrigation_overview_cycles_card, COLOR_WATER_TEMP_BG, 0);
    lv_obj_set_style_pad_all(irrigation_overview_cycles_card, 0, 0);
    lv_obj_t * irrigation_overview_cycles_value_label = lv_label_create(irrigation_overview_cycles_card);
    lv_obj_set_name(irrigation_overview_cycles_value_label, "irrigation_overview_cycles_value_label");
    lv_obj_set_x(irrigation_overview_cycles_value_label, 14);
    lv_obj_set_y(irrigation_overview_cycles_value_label, 2);
    lv_obj_set_width(irrigation_overview_cycles_value_label, 120);
    lv_label_set_text(irrigation_overview_cycles_value_label, cycles_per_day);
    lv_label_set_long_mode(irrigation_overview_cycles_value_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(irrigation_overview_cycles_value_label, COLOR_TEXT_PRIMARY, 0);
    lv_obj_set_style_text_font(irrigation_overview_cycles_value_label, font_inter_14, 0);

    lv_obj_t * irrigation_overview_cycles_caption_label = lv_label_create(irrigation_overview_cycles_card);
    lv_obj_set_name(irrigation_overview_cycles_caption_label, "irrigation_overview_cycles_caption_label");
    lv_obj_set_x(irrigation_overview_cycles_caption_label, 14);
    lv_obj_set_y(irrigation_overview_cycles_caption_label, 20);
    lv_obj_set_width(irrigation_overview_cycles_caption_label, 130);
    lv_label_set_text(irrigation_overview_cycles_caption_label, "CYCLES / DAY");
    lv_label_set_long_mode(irrigation_overview_cycles_caption_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(irrigation_overview_cycles_caption_label, COLOR_TEXT_SECONDARY, 0);
    lv_obj_set_style_text_font(irrigation_overview_cycles_caption_label, font_inter_9, 0);

    lv_obj_t * irrigation_overview_pump_card = lv_obj_create(lv_obj_0);
    lv_obj_set_name(irrigation_overview_pump_card, "irrigation_overview_pump_card");
    lv_obj_set_x(irrigation_overview_pump_card, 234);
    lv_obj_set_y(irrigation_overview_pump_card, 85);
    lv_obj_set_width(irrigation_overview_pump_card, 198);
    lv_obj_set_height(irrigation_overview_pump_card, 34);
    lv_obj_set_flag(irrigation_overview_pump_card, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(irrigation_overview_pump_card, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(irrigation_overview_pump_card, COLOR_WATER_TEMP_BG, 0);
    lv_obj_set_style_bg_opa(irrigation_overview_pump_card, 50, 0);
    lv_obj_set_style_radius(irrigation_overview_pump_card, 11, 0);
    lv_obj_set_style_border_width(irrigation_overview_pump_card, 1, 0);
    lv_obj_set_style_border_color(irrigation_overview_pump_card, COLOR_WATER_TEMP_BG, 0);
    lv_obj_set_style_pad_all(irrigation_overview_pump_card, 0, 0);
    lv_obj_t * irrigation_overview_pump_value_label = lv_label_create(irrigation_overview_pump_card);
    lv_obj_set_name(irrigation_overview_pump_value_label, "irrigation_overview_pump_value_label");
    lv_obj_set_x(irrigation_overview_pump_value_label, 14);
    lv_obj_set_y(irrigation_overview_pump_value_label, 2);
    lv_obj_set_width(irrigation_overview_pump_value_label, 120);
    lv_label_set_text(irrigation_overview_pump_value_label, pump_per_day);
    lv_label_set_long_mode(irrigation_overview_pump_value_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(irrigation_overview_pump_value_label, COLOR_TEXT_PRIMARY, 0);
    lv_obj_set_style_text_font(irrigation_overview_pump_value_label, font_inter_14, 0);

    lv_obj_t * irrigation_overview_pump_caption_label = lv_label_create(irrigation_overview_pump_card);
    lv_obj_set_name(irrigation_overview_pump_caption_label, "irrigation_overview_pump_caption_label");
    lv_obj_set_x(irrigation_overview_pump_caption_label, 14);
    lv_obj_set_y(irrigation_overview_pump_caption_label, 20);
    lv_obj_set_width(irrigation_overview_pump_caption_label, 130);
    lv_label_set_text(irrigation_overview_pump_caption_label, "PUMP / DAY");
    lv_label_set_long_mode(irrigation_overview_pump_caption_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(irrigation_overview_pump_caption_label, COLOR_TEXT_SECONDARY, 0);
    lv_obj_set_style_text_font(irrigation_overview_pump_caption_label, font_inter_9, 0);

    lv_obj_t * irrigation_overview_window_card = lv_obj_create(lv_obj_0);
    lv_obj_set_name(irrigation_overview_window_card, "irrigation_overview_window_card");
    lv_obj_set_x(irrigation_overview_window_card, 20);
    lv_obj_set_y(irrigation_overview_window_card, 127);
    lv_obj_set_width(irrigation_overview_window_card, 198);
    lv_obj_set_height(irrigation_overview_window_card, 34);
    lv_obj_set_flag(irrigation_overview_window_card, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(irrigation_overview_window_card, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(irrigation_overview_window_card, COLOR_WATER_TEMP_BG, 0);
    lv_obj_set_style_bg_opa(irrigation_overview_window_card, 50, 0);
    lv_obj_set_style_radius(irrigation_overview_window_card, 11, 0);
    lv_obj_set_style_border_width(irrigation_overview_window_card, 1, 0);
    lv_obj_set_style_border_color(irrigation_overview_window_card, COLOR_WATER_TEMP_BG, 0);
    lv_obj_set_style_pad_all(irrigation_overview_window_card, 0, 0);
    lv_obj_t * irrigation_overview_window_value_label = lv_label_create(irrigation_overview_window_card);
    lv_obj_set_name(irrigation_overview_window_value_label, "irrigation_overview_window_value_label");
    lv_obj_set_x(irrigation_overview_window_value_label, 14);
    lv_obj_set_y(irrigation_overview_window_value_label, 2);
    lv_obj_set_width(irrigation_overview_window_value_label, 150);
    lv_label_set_text(irrigation_overview_window_value_label, window_time);
    lv_label_set_long_mode(irrigation_overview_window_value_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(irrigation_overview_window_value_label, COLOR_TEXT_PRIMARY, 0);
    lv_obj_set_style_text_font(irrigation_overview_window_value_label, font_inter_14, 0);

    lv_obj_t * irrigation_overview_window_caption_label = lv_label_create(irrigation_overview_window_card);
    lv_obj_set_name(irrigation_overview_window_caption_label, "irrigation_overview_window_caption_label");
    lv_obj_set_x(irrigation_overview_window_caption_label, 14);
    lv_obj_set_y(irrigation_overview_window_caption_label, 20);
    lv_obj_set_width(irrigation_overview_window_caption_label, 130);
    lv_label_set_text(irrigation_overview_window_caption_label, "WINDOW");
    lv_label_set_long_mode(irrigation_overview_window_caption_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(irrigation_overview_window_caption_label, COLOR_TEXT_SECONDARY, 0);
    lv_obj_set_style_text_font(irrigation_overview_window_caption_label, font_inter_9, 0);

    lv_obj_t * irrigation_overview_night_card = lv_obj_create(lv_obj_0);
    lv_obj_set_name(irrigation_overview_night_card, "irrigation_overview_night_card");
    lv_obj_set_x(irrigation_overview_night_card, 234);
    lv_obj_set_y(irrigation_overview_night_card, 127);
    lv_obj_set_width(irrigation_overview_night_card, 198);
    lv_obj_set_height(irrigation_overview_night_card, 34);
    lv_obj_set_flag(irrigation_overview_night_card, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(irrigation_overview_night_card, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(irrigation_overview_night_card, COLOR_WATER_TEMP_BG, 0);
    lv_obj_set_style_bg_opa(irrigation_overview_night_card, 50, 0);
    lv_obj_set_style_radius(irrigation_overview_night_card, 11, 0);
    lv_obj_set_style_border_width(irrigation_overview_night_card, 1, 0);
    lv_obj_set_style_border_color(irrigation_overview_night_card, COLOR_WATER_TEMP_BG, 0);
    lv_obj_set_style_pad_all(irrigation_overview_night_card, 0, 0);
    lv_obj_t * irrigation_overview_night_value_label = lv_label_create(irrigation_overview_night_card);
    lv_obj_set_name(irrigation_overview_night_value_label, "irrigation_overview_night_value_label");
    lv_obj_set_x(irrigation_overview_night_value_label, 14);
    lv_obj_set_y(irrigation_overview_night_value_label, 2);
    lv_obj_set_width(irrigation_overview_night_value_label, 120);
    lv_label_set_text(irrigation_overview_night_value_label, night_break_status);
    lv_label_set_long_mode(irrigation_overview_night_value_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(irrigation_overview_night_value_label, COLOR_TEXT_PRIMARY, 0);
    lv_obj_set_style_text_font(irrigation_overview_night_value_label, font_inter_14, 0);

    lv_obj_t * irrigation_overview_night_caption_label = lv_label_create(irrigation_overview_night_card);
    lv_obj_set_name(irrigation_overview_night_caption_label, "irrigation_overview_night_caption_label");
    lv_obj_set_x(irrigation_overview_night_caption_label, 14);
    lv_obj_set_y(irrigation_overview_night_caption_label, 20);
    lv_obj_set_width(irrigation_overview_night_caption_label, 130);
    lv_label_set_text(irrigation_overview_night_caption_label, "NIGHT BREAK");
    lv_label_set_long_mode(irrigation_overview_night_caption_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(irrigation_overview_night_caption_label, COLOR_TEXT_SECONDARY, 0);
    lv_obj_set_style_text_font(irrigation_overview_night_caption_label, font_inter_9, 0);

    lv_obj_t * irrigation_overview_warning_strip = lv_obj_create(lv_obj_0);
    lv_obj_set_name(irrigation_overview_warning_strip, "irrigation_overview_warning_strip");
    lv_obj_set_x(irrigation_overview_warning_strip, 20);
    lv_obj_set_y(irrigation_overview_warning_strip, 169);
    lv_obj_set_width(irrigation_overview_warning_strip, 412);
    lv_obj_set_height(irrigation_overview_warning_strip, 20);
    lv_obj_set_flag(irrigation_overview_warning_strip, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(irrigation_overview_warning_strip, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(irrigation_overview_warning_strip, COLOR_WARNING_BG, 0);
    lv_obj_set_style_bg_opa(irrigation_overview_warning_strip, 255, 0);
    lv_obj_set_style_radius(irrigation_overview_warning_strip, 7, 0);
    lv_obj_set_style_border_width(irrigation_overview_warning_strip, 0, 0);
    lv_obj_set_style_pad_all(irrigation_overview_warning_strip, 0, 0);
    lv_obj_t * irrigation_overview_warning_dot = lv_obj_create(irrigation_overview_warning_strip);
    lv_obj_set_name(irrigation_overview_warning_dot, "irrigation_overview_warning_dot");
    lv_obj_set_x(irrigation_overview_warning_dot, 12);
    lv_obj_set_y(irrigation_overview_warning_dot, 6);
    lv_obj_set_width(irrigation_overview_warning_dot, 6);
    lv_obj_set_height(irrigation_overview_warning_dot, 6);
    lv_obj_set_flag(irrigation_overview_warning_dot, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(irrigation_overview_warning_dot, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(irrigation_overview_warning_dot, COLOR_STATUS_WARNING, 0);
    lv_obj_set_style_bg_opa(irrigation_overview_warning_dot, 255, 0);
    lv_obj_set_style_radius(irrigation_overview_warning_dot, 3, 0);
    lv_obj_set_style_border_width(irrigation_overview_warning_dot, 0, 0);
    lv_obj_set_style_pad_all(irrigation_overview_warning_dot, 0, 0);

    lv_obj_t * irrigation_overview_warning_label = lv_label_create(irrigation_overview_warning_strip);
    lv_obj_set_name(irrigation_overview_warning_label, "irrigation_overview_warning_label");
    lv_obj_set_x(irrigation_overview_warning_label, 26);
    lv_obj_set_y(irrigation_overview_warning_label, 1);
    lv_obj_set_width(irrigation_overview_warning_label, 370);
    lv_label_set_text(irrigation_overview_warning_label, warning_text);
    lv_label_set_long_mode(irrigation_overview_warning_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(irrigation_overview_warning_label, COLOR_STATUS_WARNING, 0);
    lv_obj_set_style_text_font(irrigation_overview_warning_label, font_inter_12, 0);

    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

