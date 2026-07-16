/**
 * @file settings_terms_card_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "settings_terms_card_gen.h"
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

lv_obj_t * settings_terms_card_create(lv_obj_t * parent, const char * acceptance_status)
{
    LV_TRACE_OBJ_CREATE("begin");

    lv_obj_t * lv_obj_0 = lv_obj_create(parent);
    lv_obj_set_name_static(lv_obj_0, "settings_terms_card_#");
    lv_obj_set_width(lv_obj_0, 452);
    lv_obj_set_height(lv_obj_0, 217);
    lv_obj_set_flag(lv_obj_0, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(lv_obj_0, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_opa(lv_obj_0, 0, 0);
    lv_obj_set_style_pad_all(lv_obj_0, 0, 0);
    lv_obj_set_style_border_width(lv_obj_0, 0, 0);
    lv_obj_set_style_radius(lv_obj_0, 0, 0);

    lv_obj_t * settings_terms_title_label = lv_label_create(lv_obj_0);
    lv_obj_set_name(settings_terms_title_label, "settings_terms_title_label");
    lv_obj_set_x(settings_terms_title_label, 2);
    lv_obj_set_y(settings_terms_title_label, 0);
    lv_obj_set_width(settings_terms_title_label, 260);
    lv_label_set_text(settings_terms_title_label, "LEGAL DOCUMENTS");
    lv_label_set_long_mode(settings_terms_title_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(settings_terms_title_label, COLOR_PRIMARY_GREEN, 0);
    lv_obj_set_style_text_font(settings_terms_title_label, font_inter_14, 0);
    lv_obj_set_style_text_letter_space(settings_terms_title_label, 1, 0);

    lv_obj_t * settings_terms_subtitle_label = lv_label_create(lv_obj_0);
    lv_obj_set_name(settings_terms_subtitle_label, "settings_terms_subtitle_label");
    lv_obj_set_x(settings_terms_subtitle_label, 250);
    lv_obj_set_y(settings_terms_subtitle_label, 2);
    lv_obj_set_width(settings_terms_subtitle_label, 198);
    lv_label_set_text(settings_terms_subtitle_label, acceptance_status);
    lv_label_set_long_mode(settings_terms_subtitle_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_align(settings_terms_subtitle_label, LV_TEXT_ALIGN_RIGHT, 0);
    lv_obj_set_style_text_color(settings_terms_subtitle_label, COLOR_TEXT_SECONDARY, 0);
    lv_obj_set_style_text_font(settings_terms_subtitle_label, font_inter_11, 0);

    lv_obj_t * settings_terms_conditions_card = lv_obj_create(lv_obj_0);
    lv_obj_set_name(settings_terms_conditions_card, "settings_terms_conditions_card");
    lv_obj_set_x(settings_terms_conditions_card, 0);
    lv_obj_set_y(settings_terms_conditions_card, 24);
    lv_obj_set_width(settings_terms_conditions_card, 216);
    lv_obj_set_height(settings_terms_conditions_card, 156);
    lv_obj_set_flag(settings_terms_conditions_card, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(settings_terms_conditions_card, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(settings_terms_conditions_card, COLOR_CARD_BG, 0);
    lv_obj_set_style_bg_opa(settings_terms_conditions_card, 255, 0);
    lv_obj_set_style_radius(settings_terms_conditions_card, 18, 0);
    lv_obj_set_style_pad_all(settings_terms_conditions_card, 0, 0);
    lv_obj_set_style_border_width(settings_terms_conditions_card, 1, 0);
    lv_obj_set_style_border_color(settings_terms_conditions_card, COLOR_DIVIDER, 0);
    lv_obj_set_style_shadow_width(settings_terms_conditions_card, 8, 0);
    lv_obj_set_style_shadow_opa(settings_terms_conditions_card, 16, 0);
    lv_obj_set_style_shadow_color(settings_terms_conditions_card, COLOR_SHADOW, 0);
    lv_obj_set_style_shadow_offset_y(settings_terms_conditions_card, 3, 0);
    lv_obj_t * settings_terms_conditions_qr_image = lv_image_create(settings_terms_conditions_card);
    lv_obj_set_name(settings_terms_conditions_qr_image, "settings_terms_conditions_qr_image");
    lv_obj_set_x(settings_terms_conditions_qr_image, 60);
    lv_obj_set_y(settings_terms_conditions_qr_image, 24);
    lv_obj_set_width(settings_terms_conditions_qr_image, 96);
    lv_obj_set_height(settings_terms_conditions_qr_image, 96);
    lv_image_set_src(settings_terms_conditions_qr_image, img_qr_terms_conditions_1);
    lv_obj_set_flag(settings_terms_conditions_qr_image, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(settings_terms_conditions_qr_image, LV_SCROLLBAR_MODE_OFF);

    lv_obj_t * settings_terms_conditions_title_label = lv_label_create(settings_terms_conditions_card);
    lv_obj_set_name(settings_terms_conditions_title_label, "settings_terms_conditions_title_label");
    lv_obj_set_x(settings_terms_conditions_title_label, 14);
    lv_obj_set_y(settings_terms_conditions_title_label, 128);
    lv_obj_set_width(settings_terms_conditions_title_label, 188);
    lv_label_set_text(settings_terms_conditions_title_label, "Terms & Conditions");
    lv_label_set_long_mode(settings_terms_conditions_title_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_align(settings_terms_conditions_title_label, LV_TEXT_ALIGN_CENTER, 0);
    lv_obj_set_style_text_color(settings_terms_conditions_title_label, COLOR_TEXT_PRIMARY, 0);
    lv_obj_set_style_text_font(settings_terms_conditions_title_label, font_inter_12, 0);

    lv_obj_t * settings_privacy_policy_card = lv_obj_create(lv_obj_0);
    lv_obj_set_name(settings_privacy_policy_card, "settings_privacy_policy_card");
    lv_obj_set_x(settings_privacy_policy_card, 236);
    lv_obj_set_y(settings_privacy_policy_card, 24);
    lv_obj_set_width(settings_privacy_policy_card, 216);
    lv_obj_set_height(settings_privacy_policy_card, 156);
    lv_obj_set_flag(settings_privacy_policy_card, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(settings_privacy_policy_card, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(settings_privacy_policy_card, COLOR_CARD_BG, 0);
    lv_obj_set_style_bg_opa(settings_privacy_policy_card, 255, 0);
    lv_obj_set_style_radius(settings_privacy_policy_card, 18, 0);
    lv_obj_set_style_pad_all(settings_privacy_policy_card, 0, 0);
    lv_obj_set_style_border_width(settings_privacy_policy_card, 1, 0);
    lv_obj_set_style_border_color(settings_privacy_policy_card, COLOR_DIVIDER, 0);
    lv_obj_set_style_shadow_width(settings_privacy_policy_card, 8, 0);
    lv_obj_set_style_shadow_opa(settings_privacy_policy_card, 16, 0);
    lv_obj_set_style_shadow_color(settings_privacy_policy_card, COLOR_SHADOW, 0);
    lv_obj_set_style_shadow_offset_y(settings_privacy_policy_card, 3, 0);
    lv_obj_t * settings_privacy_policy_qr_image = lv_image_create(settings_privacy_policy_card);
    lv_obj_set_name(settings_privacy_policy_qr_image, "settings_privacy_policy_qr_image");
    lv_obj_set_x(settings_privacy_policy_qr_image, 60);
    lv_obj_set_y(settings_privacy_policy_qr_image, 24);
    lv_obj_set_width(settings_privacy_policy_qr_image, 96);
    lv_obj_set_height(settings_privacy_policy_qr_image, 96);
    lv_image_set_src(settings_privacy_policy_qr_image, img_qr_privacy_policy_1);
    lv_obj_set_flag(settings_privacy_policy_qr_image, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(settings_privacy_policy_qr_image, LV_SCROLLBAR_MODE_OFF);

    lv_obj_t * settings_privacy_policy_title_label = lv_label_create(settings_privacy_policy_card);
    lv_obj_set_name(settings_privacy_policy_title_label, "settings_privacy_policy_title_label");
    lv_obj_set_x(settings_privacy_policy_title_label, 14);
    lv_obj_set_y(settings_privacy_policy_title_label, 128);
    lv_obj_set_width(settings_privacy_policy_title_label, 188);
    lv_label_set_text(settings_privacy_policy_title_label, "Privacy Policy");
    lv_label_set_long_mode(settings_privacy_policy_title_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_align(settings_privacy_policy_title_label, LV_TEXT_ALIGN_CENTER, 0);
    lv_obj_set_style_text_color(settings_privacy_policy_title_label, COLOR_TEXT_PRIMARY, 0);
    lv_obj_set_style_text_font(settings_privacy_policy_title_label, font_inter_12, 0);

    lv_obj_t * settings_terms_note_card = lv_obj_create(lv_obj_0);
    lv_obj_set_name(settings_terms_note_card, "settings_terms_note_card");
    lv_obj_set_x(settings_terms_note_card, 0);
    lv_obj_set_y(settings_terms_note_card, 190);
    lv_obj_set_width(settings_terms_note_card, 452);
    lv_obj_set_height(settings_terms_note_card, 27);
    lv_obj_set_flag(settings_terms_note_card, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(settings_terms_note_card, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(settings_terms_note_card, COLOR_SOFT_SURFACE, 0);
    lv_obj_set_style_bg_opa(settings_terms_note_card, 255, 0);
    lv_obj_set_style_radius(settings_terms_note_card, 12, 0);
    lv_obj_set_style_pad_all(settings_terms_note_card, 0, 0);
    lv_obj_set_style_border_width(settings_terms_note_card, 1, 0);
    lv_obj_set_style_border_color(settings_terms_note_card, COLOR_DIVIDER, 0);
    lv_obj_t * settings_terms_note_label = lv_label_create(settings_terms_note_card);
    lv_obj_set_name(settings_terms_note_label, "settings_terms_note_label");
    lv_obj_set_x(settings_terms_note_label, 14);
    lv_obj_set_y(settings_terms_note_label, 7);
    lv_obj_set_width(settings_terms_note_label, 424);
    lv_label_set_text(settings_terms_note_label, "Scan each QR code to read the full legal document.");
    lv_label_set_long_mode(settings_terms_note_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_align(settings_terms_note_label, LV_TEXT_ALIGN_CENTER, 0);
    lv_obj_set_style_text_color(settings_terms_note_label, COLOR_TEXT_SECONDARY, 0);
    lv_obj_set_style_text_font(settings_terms_note_label, font_inter_10, 0);

    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

