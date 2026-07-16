/**
 * @file screen_saver_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "screen_saver_gen.h"
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

lv_obj_t * screen_saver_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");


    static bool style_inited = false;

    if (!style_inited) {

        style_inited = true;
    }

    lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
    lv_obj_set_name_static(lv_obj_0, "screen_saver_#");
    lv_obj_set_width(lv_obj_0, 480);
    lv_obj_set_height(lv_obj_0, 320);
    lv_obj_set_flag(lv_obj_0, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(lv_obj_0, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(lv_obj_0, COLOR_DARK_FOREST, 0);
    lv_obj_set_style_bg_opa(lv_obj_0, 255, 0);
    lv_obj_set_style_pad_all(lv_obj_0, 0, 0);
    lv_obj_set_style_border_width(lv_obj_0, 0, 0);
    lv_obj_set_style_radius(lv_obj_0, 0, 0);

    lv_obj_t * screen_saver_status_card_0 = screen_saver_status_card_create(lv_obj_0, "13:20", "Healthy", COLOR_PRIMARY_GREEN, "92", 88, "6.0 L / 6.5 L", "Pump ON", COLOR_PRIMARY_GREEN, "LED ON", COLOR_ALERT_ORANGE, "WiFi OK", COLOR_STATUS_INFO, "Tap anywhere to wake");
    lv_obj_set_x(screen_saver_status_card_0, 14);
    lv_obj_set_y(screen_saver_status_card_0, 26);

    lv_obj_t * screen_saver_wake_btn = lv_button_create(lv_obj_0);
    lv_obj_set_name(screen_saver_wake_btn, "screen_saver_wake_btn");
    lv_obj_set_x(screen_saver_wake_btn, 0);
    lv_obj_set_y(screen_saver_wake_btn, 0);
    lv_obj_set_width(screen_saver_wake_btn, 480);
    lv_obj_set_height(screen_saver_wake_btn, 320);
    lv_obj_set_flag(screen_saver_wake_btn, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(screen_saver_wake_btn, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_opa(screen_saver_wake_btn, 0, 0);
    lv_obj_set_style_radius(screen_saver_wake_btn, 0, 0);
    lv_obj_set_style_border_width(screen_saver_wake_btn, 0, 0);
    lv_obj_set_style_shadow_width(screen_saver_wake_btn, 0, 0);
    lv_obj_set_style_pad_all(screen_saver_wake_btn, 0, 0);

    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

