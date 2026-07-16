/**
 * @file screen_boot_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "screen_boot_gen.h"
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

lv_obj_t * screen_boot_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");


    static bool style_inited = false;

    if (!style_inited) {

        style_inited = true;
    }

    lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
    lv_obj_set_name_static(lv_obj_0, "screen_boot_#");
    lv_obj_set_width(lv_obj_0, 480);
    lv_obj_set_height(lv_obj_0, 320);
    lv_obj_set_flag(lv_obj_0, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(lv_obj_0, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(lv_obj_0, COLOR_DARK_FOREST, 0);
    lv_obj_set_style_bg_opa(lv_obj_0, 255, 0);
    lv_obj_set_style_pad_all(lv_obj_0, 0, 0);
    lv_obj_set_style_border_width(lv_obj_0, 0, 0);
    lv_obj_set_style_radius(lv_obj_0, 0, 0);

    lv_obj_t * boot_glow_circle = lv_obj_create(lv_obj_0);
    lv_obj_set_name(boot_glow_circle, "boot_glow_circle");
    lv_obj_set_x(boot_glow_circle, 170);
    lv_obj_set_y(boot_glow_circle, 48);
    lv_obj_set_width(boot_glow_circle, 140);
    lv_obj_set_height(boot_glow_circle, 140);
    lv_obj_set_flag(boot_glow_circle, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(boot_glow_circle, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(boot_glow_circle, COLOR_GL_GREEN, 0);
    lv_obj_set_style_bg_opa(boot_glow_circle, 35, 0);
    lv_obj_set_style_radius(boot_glow_circle, 70, 0);
    lv_obj_set_style_border_width(boot_glow_circle, 0, 0);
    lv_obj_set_style_pad_all(boot_glow_circle, 0, 0);

    lv_obj_t * boot_logo_holder = lv_obj_create(lv_obj_0);
    lv_obj_set_name(boot_logo_holder, "boot_logo_holder");
    lv_obj_set_x(boot_logo_holder, 216);
    lv_obj_set_y(boot_logo_holder, 82);
    lv_obj_set_width(boot_logo_holder, 48);
    lv_obj_set_height(boot_logo_holder, 48);
    lv_obj_set_flag(boot_logo_holder, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(boot_logo_holder, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(boot_logo_holder, COLOR_CARD_BG, 0);
    lv_obj_set_style_bg_opa(boot_logo_holder, 255, 0);
    lv_obj_set_style_radius(boot_logo_holder, 24, 0);
    lv_obj_set_style_border_width(boot_logo_holder, 0, 0);
    lv_obj_set_style_shadow_width(boot_logo_holder, 10, 0);
    lv_obj_set_style_shadow_opa(boot_logo_holder, 35, 0);
    lv_obj_set_style_shadow_color(boot_logo_holder, COLOR_SHADOW, 0);
    lv_obj_set_style_shadow_offset_y(boot_logo_holder, 4, 0);
    lv_obj_set_style_pad_all(boot_logo_holder, 0, 0);
    lv_obj_t * boot_logo_image = lv_image_create(boot_logo_holder);
    lv_obj_set_name(boot_logo_image, "boot_logo_image");
    lv_obj_set_x(boot_logo_image, 12);
    lv_obj_set_y(boot_logo_image, 12);
    lv_obj_set_width(boot_logo_image, 24);
    lv_obj_set_height(boot_logo_image, 24);
    lv_image_set_src(boot_logo_image, img_gl_towers_logo_1);
    lv_obj_set_flag(boot_logo_image, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(boot_logo_image, LV_SCROLLBAR_MODE_OFF);

    lv_obj_t * boot_title_label = lv_label_create(lv_obj_0);
    lv_obj_set_name(boot_title_label, "boot_title_label");
    lv_obj_set_x(boot_title_label, 0);
    lv_obj_set_y(boot_title_label, 146);
    lv_obj_set_width(boot_title_label, 480);
    lv_label_set_text(boot_title_label, "GL TOWERS");
    lv_label_set_long_mode(boot_title_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_align(boot_title_label, LV_TEXT_ALIGN_CENTER, 0);
    lv_obj_set_style_text_color(boot_title_label, COLOR_WHITE, 0);
    lv_obj_set_style_text_font(boot_title_label, font_inter_26, 0);

    lv_obj_t * boot_subtitle_label = lv_label_create(lv_obj_0);
    lv_obj_set_name(boot_subtitle_label, "boot_subtitle_label");
    lv_obj_set_x(boot_subtitle_label, 0);
    lv_obj_set_y(boot_subtitle_label, 178);
    lv_obj_set_width(boot_subtitle_label, 480);
    lv_label_set_text(boot_subtitle_label, "Hydroponic Intelligence");
    lv_label_set_long_mode(boot_subtitle_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_align(boot_subtitle_label, LV_TEXT_ALIGN_CENTER, 0);
    lv_obj_set_style_text_color(boot_subtitle_label, COLOR_LIGHT_GREEN, 0);
    lv_obj_set_style_text_font(boot_subtitle_label, font_inter_12, 0);

    lv_obj_t * boot_status_label = lv_label_create(lv_obj_0);
    lv_obj_set_name(boot_status_label, "boot_status_label");
    lv_obj_set_x(boot_status_label, 0);
    lv_obj_set_y(boot_status_label, 220);
    lv_obj_set_width(boot_status_label, 480);
    lv_label_set_text(boot_status_label, "Initializing system...");
    lv_label_set_long_mode(boot_status_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_align(boot_status_label, LV_TEXT_ALIGN_CENTER, 0);
    lv_obj_set_style_text_color(boot_status_label, COLOR_MUTED_GRAY, 0);
    lv_obj_set_style_text_font(boot_status_label, font_inter_11, 0);

    lv_obj_t * boot_progress_track = lv_obj_create(lv_obj_0);
    lv_obj_set_name(boot_progress_track, "boot_progress_track");
    lv_obj_set_x(boot_progress_track, 150);
    lv_obj_set_y(boot_progress_track, 246);
    lv_obj_set_width(boot_progress_track, 180);
    lv_obj_set_height(boot_progress_track, 4);
    lv_obj_set_flag(boot_progress_track, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(boot_progress_track, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(boot_progress_track, COLOR_TEXT_SECONDARY, 0);
    lv_obj_set_style_bg_opa(boot_progress_track, 120, 0);
    lv_obj_set_style_radius(boot_progress_track, 2, 0);
    lv_obj_set_style_border_width(boot_progress_track, 0, 0);
    lv_obj_set_style_pad_all(boot_progress_track, 0, 0);

    lv_obj_t * boot_progress_fill = lv_obj_create(lv_obj_0);
    lv_obj_set_name(boot_progress_fill, "boot_progress_fill");
    lv_obj_set_x(boot_progress_fill, 150);
    lv_obj_set_y(boot_progress_fill, 246);
    lv_obj_set_width(boot_progress_fill, 60);
    lv_obj_set_height(boot_progress_fill, 4);
    lv_obj_set_flag(boot_progress_fill, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(boot_progress_fill, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(boot_progress_fill, COLOR_GL_GREEN, 0);
    lv_obj_set_style_bg_opa(boot_progress_fill, 255, 0);
    lv_obj_set_style_radius(boot_progress_fill, 2, 0);
    lv_obj_set_style_border_width(boot_progress_fill, 0, 0);
    lv_obj_set_style_pad_all(boot_progress_fill, 0, 0);

    lv_obj_t * boot_version_label = lv_label_create(lv_obj_0);
    lv_obj_set_name(boot_version_label, "boot_version_label");
    lv_obj_set_x(boot_version_label, 0);
    lv_obj_set_y(boot_version_label, 286);
    lv_obj_set_width(boot_version_label, 480);
    lv_label_set_text(boot_version_label, "Firmware v0.1.0");
    lv_label_set_long_mode(boot_version_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_align(boot_version_label, LV_TEXT_ALIGN_CENTER, 0);
    lv_obj_set_style_text_color(boot_version_label, COLOR_TEXT_SECONDARY, 0);
    lv_obj_set_style_text_font(boot_version_label, font_inter_9, 0);

    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

