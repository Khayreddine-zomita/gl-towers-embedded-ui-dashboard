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
    lv_obj_set_style_bg_color(lv_obj_0, COLOR_BOOT_BLACK, 0);
    lv_obj_set_style_bg_opa(lv_obj_0, 255, 0);
    lv_obj_set_style_pad_all(lv_obj_0, 0, 0);
    lv_obj_set_style_border_width(lv_obj_0, 0, 0);
    lv_obj_set_style_radius(lv_obj_0, 0, 0);

    lv_obj_t * boot_logo_image = lv_image_create(lv_obj_0);
    lv_obj_set_name(boot_logo_image, "boot_logo_image");
    lv_obj_set_x(boot_logo_image, 90);
    lv_obj_set_y(boot_logo_image, 10);
    lv_obj_set_width(boot_logo_image, 300);
    lv_obj_set_height(boot_logo_image, 300);
    lv_image_set_src(boot_logo_image, img_gl_towers_logo_1);
    lv_obj_set_flag(boot_logo_image, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(boot_logo_image, LV_SCROLLBAR_MODE_OFF);

    lv_obj_t * boot_status_label = lv_label_create(lv_obj_0);
    lv_obj_set_name(boot_status_label, "boot_status_label");
    lv_obj_set_x(boot_status_label, 0);
    lv_obj_set_y(boot_status_label, 300);
    lv_obj_set_width(boot_status_label, 480);
    lv_label_set_text(boot_status_label, "Initializing System...");
    lv_label_set_long_mode(boot_status_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_align(boot_status_label, LV_TEXT_ALIGN_CENTER, 0);
    lv_obj_set_style_text_color(boot_status_label, COLOR_MUTED_GRAY, 0);
    lv_obj_set_style_text_font(boot_status_label, font_inter_11, 0);

    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

