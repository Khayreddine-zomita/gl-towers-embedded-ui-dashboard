/**
 * @file gl_towers_embedded_ui_dashboard_gen.c
 */

/*********************
 *      INCLUDES
 *********************/

#include "gl_towers_embedded_ui_dashboard_gen.h"

#if LV_USE_XML
#endif /* LV_USE_XML */

/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/

/**********************
 *  STATIC PROTOTYPES
 **********************/

/**********************
 *  STATIC VARIABLES
 **********************/

/*----------------
 * Translations
 *----------------*/

/**********************
 *  GLOBAL VARIABLES
 **********************/

/*--------------------
 *  Permanent screens
 *-------------------*/

/*----------------
 * Fonts
 *----------------*/

lv_font_t * font_inter_8;
extern lv_font_t font_inter_8_data;
lv_font_t * font_inter_9;
extern lv_font_t font_inter_9_data;
lv_font_t * font_inter_10;
extern lv_font_t font_inter_10_data;
lv_font_t * font_inter_11;
extern lv_font_t font_inter_11_data;
lv_font_t * font_inter_12;
extern lv_font_t font_inter_12_data;
lv_font_t * font_inter_14;
extern lv_font_t font_inter_14_data;
lv_font_t * font_inter_15;
extern lv_font_t font_inter_15_data;
lv_font_t * font_inter_26;
extern lv_font_t font_inter_26_data;

/*----------------
 * Images
 *----------------*/

const void * img_gl_towers_logo_1;
extern const void * img_gl_towers_logo_1_data;
const void * img_simple_chevron_icon_1;
extern const void * img_simple_chevron_icon_1_data;
const void * img_simple_chevron_icon_2;
extern const void * img_simple_chevron_icon_2_data;
const void * img_irrigation_growth_stage_germination_16px;
extern const void * img_irrigation_growth_stage_germination_16px_data;
const void * img_irrigation_growth_stage_germination_color_16px;
extern const void * img_irrigation_growth_stage_germination_color_16px_data;
const void * img_irrigation_growth_stage_seedling_16px;
extern const void * img_irrigation_growth_stage_seedling_16px_data;
const void * img_irrigation_growth_stage_vegetative_16px;
extern const void * img_irrigation_growth_stage_vegetative_16px_data;
const void * img_irrigation_growth_stage_mature_16px;
extern const void * img_irrigation_growth_stage_mature_16px_data;
const void * img_irrigation_drop_silhouette_substrate_16px;
extern const void * img_irrigation_drop_silhouette_substrate_16px_data;
const void * img_irrigation_clay_pebbles_substrate_16px;
extern const void * img_irrigation_clay_pebbles_substrate_16px_data;
const void * img_irrigation_rockwool_substrate_16px;
extern const void * img_irrigation_rockwool_substrate_16px_data;
const void * img_irrigation_coco_coir_substrate_16px;
extern const void * img_irrigation_coco_coir_substrate_16px_data;
const void * img_irrigation_mixed_soil_substrate_16px;
extern const void * img_irrigation_mixed_soil_substrate_16px_data;
const void * img_irrigation_germination_16px;
extern const void * img_irrigation_germination_16px_data;
const void * img_irrigation_germination_24px;
extern const void * img_irrigation_germination_24px_data;
const void * img_irrigation_drop_silhouette_16px;
extern const void * img_irrigation_drop_silhouette_16px_data;
const void * img_irrigation_drop_silhouette_24px;
extern const void * img_irrigation_drop_silhouette_24px_data;
const void * img_irrigation_drop_16px;
extern const void * img_irrigation_drop_16px_data;
const void * img_irrigation_drop_24px;
extern const void * img_irrigation_drop_24px_data;
const void * img_irrigation_clock_16px;
extern const void * img_irrigation_clock_16px_data;
const void * img_irrigation_clock_24px;
extern const void * img_irrigation_clock_24px_data;
const void * img_irrigation_pump_24px;
extern const void * img_irrigation_pump_24px_data;
const void * img_qr_terms_conditions_1;
extern const void * img_qr_terms_conditions_1_data;
const void * img_qr_privacy_policy_1;
extern const void * img_qr_privacy_policy_1_data;
const void * img_top_status_bar_wifi;
extern const void * img_top_status_bar_wifi_data;
const void * img_top_status_bar_no_wifi;
extern const void * img_top_status_bar_no_wifi_data;
const void * img_home_pump;
extern const void * img_home_pump_data;
const void * img_home_irrigation;
extern const void * img_home_irrigation_data;
const void * img_home_light;
extern const void * img_home_light_data;
const void * img_nav_home;
extern const void * img_nav_home_data;
const void * img_nav_sensors;
extern const void * img_nav_sensors_data;
const void * img_nav_irrigation;
extern const void * img_nav_irrigation_data;
const void * img_nav_light;
extern const void * img_nav_light_data;
const void * img_nav_settings;
extern const void * img_nav_settings_data;

/*----------------
 * Global styles
 *----------------*/

/*----------------
 * Subjects
 *----------------*/

/**********************
 *      MACROS
 **********************/

/**********************
 *   GLOBAL FUNCTIONS
 **********************/

void gl_towers_embedded_ui_dashboard_init_gen(const char * asset_path)
{
    char buf[256];


    /*----------------
     * Fonts
     *----------------*/

    /* get font 'font_inter_8' from a C array */
    font_inter_8 = &font_inter_8_data;
    /* get font 'font_inter_9' from a C array */
    font_inter_9 = &font_inter_9_data;
    /* get font 'font_inter_10' from a C array */
    font_inter_10 = &font_inter_10_data;
    /* get font 'font_inter_11' from a C array */
    font_inter_11 = &font_inter_11_data;
    /* get font 'font_inter_12' from a C array */
    font_inter_12 = &font_inter_12_data;
    /* get font 'font_inter_14' from a C array */
    font_inter_14 = &font_inter_14_data;
    /* get font 'font_inter_15' from a C array */
    font_inter_15 = &font_inter_15_data;
    /* get font 'font_inter_26' from a C array */
    font_inter_26 = &font_inter_26_data;


    /*----------------
     * Images
     *----------------*/
    img_gl_towers_logo_1 = &img_gl_towers_logo_1_data;
    img_simple_chevron_icon_1 = &img_simple_chevron_icon_1_data;
    img_simple_chevron_icon_2 = &img_simple_chevron_icon_2_data;
    img_irrigation_growth_stage_germination_16px = &img_irrigation_growth_stage_germination_16px_data;
    img_irrigation_growth_stage_germination_color_16px = &img_irrigation_growth_stage_germination_color_16px_data;
    img_irrigation_growth_stage_seedling_16px = &img_irrigation_growth_stage_seedling_16px_data;
    img_irrigation_growth_stage_vegetative_16px = &img_irrigation_growth_stage_vegetative_16px_data;
    img_irrigation_growth_stage_mature_16px = &img_irrigation_growth_stage_mature_16px_data;
    img_irrigation_drop_silhouette_substrate_16px = &img_irrigation_drop_silhouette_substrate_16px_data;
    img_irrigation_clay_pebbles_substrate_16px = &img_irrigation_clay_pebbles_substrate_16px_data;
    img_irrigation_rockwool_substrate_16px = &img_irrigation_rockwool_substrate_16px_data;
    img_irrigation_coco_coir_substrate_16px = &img_irrigation_coco_coir_substrate_16px_data;
    img_irrigation_mixed_soil_substrate_16px = &img_irrigation_mixed_soil_substrate_16px_data;
    img_irrigation_germination_16px = &img_irrigation_germination_16px_data;
    img_irrigation_germination_24px = &img_irrigation_germination_24px_data;
    img_irrigation_drop_silhouette_16px = &img_irrigation_drop_silhouette_16px_data;
    img_irrigation_drop_silhouette_24px = &img_irrigation_drop_silhouette_24px_data;
    img_irrigation_drop_16px = &img_irrigation_drop_16px_data;
    img_irrigation_drop_24px = &img_irrigation_drop_24px_data;
    img_irrigation_clock_16px = &img_irrigation_clock_16px_data;
    img_irrigation_clock_24px = &img_irrigation_clock_24px_data;
    img_irrigation_pump_24px = &img_irrigation_pump_24px_data;
    img_qr_terms_conditions_1 = &img_qr_terms_conditions_1_data;
    img_qr_privacy_policy_1 = &img_qr_privacy_policy_1_data;
    img_top_status_bar_wifi = &img_top_status_bar_wifi_data;
    img_top_status_bar_no_wifi = &img_top_status_bar_no_wifi_data;
    img_home_pump = &img_home_pump_data;
    img_home_irrigation = &img_home_irrigation_data;
    img_home_light = &img_home_light_data;
    img_nav_home = &img_nav_home_data;
    img_nav_sensors = &img_nav_sensors_data;
    img_nav_irrigation = &img_nav_irrigation_data;
    img_nav_light = &img_nav_light_data;
    img_nav_settings = &img_nav_settings_data;

    /*----------------
     * Global styles
     *----------------*/

    /*----------------
     * Subjects
     *----------------*/
    /*----------------
     * Translations
     *----------------*/

#if LV_USE_XML
    /* Register widgets */

    /* Register fonts */
    lv_xml_register_font(NULL, "font_inter_8", font_inter_8);
    lv_xml_register_font(NULL, "font_inter_9", font_inter_9);
    lv_xml_register_font(NULL, "font_inter_10", font_inter_10);
    lv_xml_register_font(NULL, "font_inter_11", font_inter_11);
    lv_xml_register_font(NULL, "font_inter_12", font_inter_12);
    lv_xml_register_font(NULL, "font_inter_14", font_inter_14);
    lv_xml_register_font(NULL, "font_inter_15", font_inter_15);
    lv_xml_register_font(NULL, "font_inter_26", font_inter_26);

    /* Register subjects */

    /* Register callbacks */
#endif

    /* Register all the global assets so that they won't be created again when globals.xml is parsed.
     * While running in the editor skip this step to update the preview when the XML changes */
#if LV_USE_XML && !defined(LV_EDITOR_PREVIEW)
    /* Register images */
    lv_xml_register_image(NULL, "img_gl_towers_logo_1", img_gl_towers_logo_1);
    lv_xml_register_image(NULL, "img_simple_chevron_icon_1", img_simple_chevron_icon_1);
    lv_xml_register_image(NULL, "img_simple_chevron_icon_2", img_simple_chevron_icon_2);
    lv_xml_register_image(NULL, "img_irrigation_growth_stage_germination_16px", img_irrigation_growth_stage_germination_16px);
    lv_xml_register_image(NULL, "img_irrigation_growth_stage_germination_color_16px", img_irrigation_growth_stage_germination_color_16px);
    lv_xml_register_image(NULL, "img_irrigation_growth_stage_seedling_16px", img_irrigation_growth_stage_seedling_16px);
    lv_xml_register_image(NULL, "img_irrigation_growth_stage_vegetative_16px", img_irrigation_growth_stage_vegetative_16px);
    lv_xml_register_image(NULL, "img_irrigation_growth_stage_mature_16px", img_irrigation_growth_stage_mature_16px);
    lv_xml_register_image(NULL, "img_irrigation_drop_silhouette_substrate_16px", img_irrigation_drop_silhouette_substrate_16px);
    lv_xml_register_image(NULL, "img_irrigation_clay_pebbles_substrate_16px", img_irrigation_clay_pebbles_substrate_16px);
    lv_xml_register_image(NULL, "img_irrigation_rockwool_substrate_16px", img_irrigation_rockwool_substrate_16px);
    lv_xml_register_image(NULL, "img_irrigation_coco_coir_substrate_16px", img_irrigation_coco_coir_substrate_16px);
    lv_xml_register_image(NULL, "img_irrigation_mixed_soil_substrate_16px", img_irrigation_mixed_soil_substrate_16px);
    lv_xml_register_image(NULL, "img_irrigation_germination_16px", img_irrigation_germination_16px);
    lv_xml_register_image(NULL, "img_irrigation_germination_24px", img_irrigation_germination_24px);
    lv_xml_register_image(NULL, "img_irrigation_drop_silhouette_16px", img_irrigation_drop_silhouette_16px);
    lv_xml_register_image(NULL, "img_irrigation_drop_silhouette_24px", img_irrigation_drop_silhouette_24px);
    lv_xml_register_image(NULL, "img_irrigation_drop_16px", img_irrigation_drop_16px);
    lv_xml_register_image(NULL, "img_irrigation_drop_24px", img_irrigation_drop_24px);
    lv_xml_register_image(NULL, "img_irrigation_clock_16px", img_irrigation_clock_16px);
    lv_xml_register_image(NULL, "img_irrigation_clock_24px", img_irrigation_clock_24px);
    lv_xml_register_image(NULL, "img_irrigation_pump_24px", img_irrigation_pump_24px);
    lv_xml_register_image(NULL, "img_qr_terms_conditions_1", img_qr_terms_conditions_1);
    lv_xml_register_image(NULL, "img_qr_privacy_policy_1", img_qr_privacy_policy_1);
    lv_xml_register_image(NULL, "img_top_status_bar_wifi", img_top_status_bar_wifi);
    lv_xml_register_image(NULL, "img_top_status_bar_no_wifi", img_top_status_bar_no_wifi);
    lv_xml_register_image(NULL, "img_home_pump", img_home_pump);
    lv_xml_register_image(NULL, "img_home_irrigation", img_home_irrigation);
    lv_xml_register_image(NULL, "img_home_light", img_home_light);
    lv_xml_register_image(NULL, "img_nav_home", img_nav_home);
    lv_xml_register_image(NULL, "img_nav_sensors", img_nav_sensors);
    lv_xml_register_image(NULL, "img_nav_irrigation", img_nav_irrigation);
    lv_xml_register_image(NULL, "img_nav_light", img_nav_light);
    lv_xml_register_image(NULL, "img_nav_settings", img_nav_settings);
#endif

#if LV_USE_XML == 0
    /*--------------------
     *  Permanent screens
     *-------------------*/
    /* If XML is enabled it's assumed that the permanent screens are created
     * manaully from XML using lv_xml_create() */
#endif
}

/* Callbacks */

/**********************
 *   STATIC FUNCTIONS
 **********************/