/**
 * @file gl_towers_embedded_ui_dashboard_gen.h
 */

#ifndef GL_TOWERS_EMBEDDED_UI_DASHBOARD_GEN_H
#define GL_TOWERS_EMBEDDED_UI_DASHBOARD_GEN_H

#ifndef UI_SUBJECT_STRING_LENGTH
#define UI_SUBJECT_STRING_LENGTH 256
#endif

#ifdef __cplusplus
extern "C" {
#endif

/*********************
 *      INCLUDES
 *********************/

#ifdef LV_LVGL_H_INCLUDE_SIMPLE
    #include "lvgl.h"
    #include "lvgl_private.h"
#else
    #include "lvgl/lvgl.h"
    #include "lvgl/lvgl_private.h"
#endif

#ifdef LV_USE_XML
    #include "lv_xml/lv_xml.h"
#endif



/*********************
 *      DEFINES
 *********************/

#define COLOR_PRIMARY_GREEN lv_color_hex(0x1A6B38)

#define COLOR_SECONDARY_GREEN lv_color_hex(0x22883F)

#define COLOR_LIGHT_GREEN lv_color_hex(0xDFF0E6)

#define COLOR_APP_BG lv_color_hex(0xF1F6F3)

#define COLOR_CARD_BG lv_color_hex(0xFFFFFF)

#define COLOR_WHITE lv_color_hex(0xFFFFFF)

#define COLOR_TEXT_PRIMARY lv_color_hex(0x0D1F14)

#define COLOR_TEXT_SECONDARY lv_color_hex(0x3A6448)

#define COLOR_TEXT_MUTED lv_color_hex(0x7A9E87)

#define COLOR_STATUS_HEALTHY lv_color_hex(0x1A6B38)

#define COLOR_STATUS_WARNING lv_color_hex(0xB8620A)

#define COLOR_STATUS_CRITICAL lv_color_hex(0xC0392B)

#define COLOR_STATUS_INFO lv_color_hex(0x2473AA)

#define COLOR_WARNING_BG lv_color_hex(0xFFF4E3)

#define COLOR_DIVIDER lv_color_hex(0xDDE9E1)

#define COLOR_SOFT_SURFACE lv_color_hex(0xF8FCF9)

#define COLOR_SHADOW lv_color_hex(0x000000)

#define COLOR_PURPLE lv_color_hex(0x6A35FF)

#define COLOR_BLUE lv_color_hex(0x2473AA)

#define COLOR_WATER_TEMP_BG lv_color_hex(0xD0EEF9)

#define COLOR_DARK_FOREST lv_color_hex(0x0D1F14)

#define COLOR_GL_GREEN lv_color_hex(0x1A6B38)

#define COLOR_GL_GREEN_DARK lv_color_hex(0x0F4F2A)

#define COLOR_SUCCESS_GREEN lv_color_hex(0x1A6B38)

#define COLOR_ALERT_RED lv_color_hex(0xC0392B)

#define COLOR_ALERT_ORANGE lv_color_hex(0xB8620A)

#define COLOR_MUTED_GRAY lv_color_hex(0xDDE9E1)

#define COLOR_BOTTOM_NAV_BG lv_color_hex(0xFFFFFF)

/**********************
 *      TYPEDEFS
 **********************/

/**********************
 * GLOBAL VARIABLES
 **********************/

/*-------------------
 * Permanent screens
 *------------------*/

/*----------------
 * Global styles
 *----------------*/

/*----------------
 * Fonts
 *----------------*/

extern lv_font_t * font_inter_8;

extern lv_font_t * font_inter_9;

extern lv_font_t * font_inter_10;

extern lv_font_t * font_inter_11;

extern lv_font_t * font_inter_12;

extern lv_font_t * font_inter_14;

extern lv_font_t * font_inter_15;

extern lv_font_t * font_inter_26;

/*----------------
 * Images
 *----------------*/

extern const void * img_gl_towers_logo_1;
extern const void * img_simple_chevron_icon_1;
extern const void * img_simple_chevron_icon_2;
extern const void * img_irrigation_growth_stage_germination_16px;
extern const void * img_irrigation_growth_stage_germination_color_16px;
extern const void * img_irrigation_growth_stage_seedling_16px;
extern const void * img_irrigation_growth_stage_vegetative_16px;
extern const void * img_irrigation_growth_stage_mature_16px;
extern const void * img_irrigation_drop_silhouette_substrate_16px;
extern const void * img_irrigation_clay_pebbles_substrate_16px;
extern const void * img_irrigation_rockwool_substrate_16px;
extern const void * img_irrigation_coco_coir_substrate_16px;
extern const void * img_irrigation_mixed_soil_substrate_16px;
extern const void * img_irrigation_germination_16px;
extern const void * img_irrigation_germination_24px;
extern const void * img_irrigation_drop_silhouette_16px;
extern const void * img_irrigation_drop_silhouette_24px;
extern const void * img_irrigation_drop_16px;
extern const void * img_irrigation_drop_24px;
extern const void * img_irrigation_clock_16px;
extern const void * img_irrigation_clock_24px;
extern const void * img_irrigation_pump_24px;
extern const void * img_qr_terms_conditions_1;
extern const void * img_qr_privacy_policy_1;
extern const void * img_top_status_bar_wifi;
extern const void * img_top_status_bar_no_wifi;
extern const void * img_home_pump;
extern const void * img_home_irrigation;
extern const void * img_home_light;
extern const void * img_nav_home;
extern const void * img_nav_sensors;
extern const void * img_nav_irrigation;
extern const void * img_nav_light;
extern const void * img_nav_settings;

/*----------------
 * Subjects
 *----------------*/

/**********************
 * GLOBAL PROTOTYPES
 **********************/

/*----------------
 * Event Callbacks
 *----------------*/

/**
 * Initialize the component library
 */

void gl_towers_embedded_ui_dashboard_init_gen(const char * asset_path);

/**********************
 *      MACROS
 **********************/

/**********************
 *   POST INCLUDES
 **********************/

/*Include all the widgets, components and screens of this library*/
#include "components/device_pairing_bottom_actions_gen.h"
#include "components/device_pairing_card_gen.h"
#include "components/ec_calibration_bottom_actions_gen.h"
#include "components/ec_calibration_card_gen.h"
#include "components/edit_irrigation_settings_bottom_actions_gen.h"
#include "components/edit_irrigation_settings_card_gen.h"
#include "components/global_bottom_nav_gen.h"
#include "components/global_top_status_bar_gen.h"
#include "components/home_reservoir_card_gen.h"
#include "components/home_sensor_card_gen.h"
#include "components/home_status_row_gen.h"
#include "components/irrigation_edit_settings_button_gen.h"
#include "components/irrigation_overview_card_gen.h"
#include "components/irrigation_pump_cycle_bottom_actions_gen.h"
#include "components/irrigation_pump_cycle_card_gen.h"
#include "components/irrigation_pump_cycle_editor_card_gen.h"
#include "components/irrigation_pump_cycle_recommended_card_gen.h"
#include "components/irrigation_settings_bottom_actions_gen.h"
#include "components/irrigation_settings_growth_stage_bottom_actions_gen.h"
#include "components/irrigation_settings_growth_stage_card_gen.h"
#include "components/irrigation_settings_manual_pump_test_gen.h"
#include "components/irrigation_settings_night_break_card_gen.h"
#include "components/irrigation_settings_window_card_gen.h"
#include "components/irrigation_substrate_bottom_actions_gen.h"
#include "components/irrigation_substrate_card_gen.h"
#include "components/irrigation_summary_card_gen.h"
#include "components/irrigation_window_card_gen.h"
#include "components/led_edit_settings_button_card_gen.h"
#include "components/led_overview_card_gen.h"
#include "components/led_preset_card_gen.h"
#include "components/led_schedule_card_gen.h"
#include "components/led_settings_bottom_actions_gen.h"
#include "components/led_settings_intensity_gen.h"
#include "components/led_settings_presets_gen.h"
#include "components/led_settings_schedule_gen.h"
#include "components/load_cell_calibration_bottom_actions_gen.h"
#include "components/load_cell_calibration_card_gen.h"
#include "components/mini_trend_chart_gen.h"
#include "components/ph_calibration_bottom_actions_gen.h"
#include "components/ph_calibration_card_gen.h"
#include "components/screen_saver_status_card_gen.h"
#include "components/sensors_screen_card_gen.h"
#include "components/settings_account_card_gen.h"
#include "components/settings_calibration_bottom_actions_gen.h"
#include "components/settings_calibration_card_gen.h"
#include "components/settings_device_bottom_actions_gen.h"
#include "components/settings_device_card_gen.h"
#include "components/settings_factory_reset_bottom_actions_gen.h"
#include "components/settings_factory_reset_card_gen.h"
#include "components/settings_firmware_bottom_actions_gen.h"
#include "components/settings_firmware_card_gen.h"
#include "components/settings_language_bottom_actions_gen.h"
#include "components/settings_language_card_gen.h"
#include "components/settings_menu_card_gen.h"
#include "components/settings_subscreen_bottom_actions_gen.h"
#include "components/settings_terms_bottom_actions_gen.h"
#include "components/settings_terms_card_gen.h"
#include "components/settings_wlan_bottom_actions_gen.h"
#include "components/settings_wlan_card_gen.h"
#include "components/wifi_setup_bottom_actions_gen.h"
#include "components/wifi_setup_card_gen.h"
#include "screens/screen_boot_gen.h"
#include "screens/screen_device_pairing_gen.h"
#include "screens/screen_ec_calibration_gen.h"
#include "screens/screen_edit_irrigation_settings_gen.h"
#include "screens/screen_edit_led_settings_gen.h"
#include "screens/screen_home_gen.h"
#include "screens/screen_irrigation_gen.h"
#include "screens/screen_irrigation_settings_growth_stage_gen.h"
#include "screens/screen_irrigation_settings_irrigation_window_gen.h"
#include "screens/screen_irrigation_settings_pump_cycle_gen.h"
#include "screens/screen_irrigation_settings_substrate_gen.h"
#include "screens/screen_led_gen.h"
#include "screens/screen_load_cell_calibration_gen.h"
#include "screens/screen_ph_calibration_gen.h"
#include "screens/screen_saver_gen.h"
#include "screens/screen_sensors_gen.h"
#include "screens/screen_settings_account_gen.h"
#include "screens/screen_settings_calibration_gen.h"
#include "screens/screen_settings_device_gen.h"
#include "screens/screen_settings_factory_reset_gen.h"
#include "screens/screen_settings_firmware_gen.h"
#include "screens/screen_settings_gen.h"
#include "screens/screen_settings_language_gen.h"
#include "screens/screen_settings_terms_gen.h"
#include "screens/screen_settings_wlan_gen.h"
#include "screens/screen_wifi_setup_gen.h"

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif /*GL_TOWERS_EMBEDDED_UI_DASHBOARD_GEN_H*/