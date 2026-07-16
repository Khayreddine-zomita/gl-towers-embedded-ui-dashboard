/**
 * @file gl_towers_embedded_ui.c
 */

/*********************
 *      INCLUDES
 *********************/

#include "gl_towers_embedded_ui.h"

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

/**********************
 *      MACROS
 **********************/

/**********************
 *   GLOBAL FUNCTIONS
 **********************/

void gl_towers_embedded_ui_init(const char * asset_path)
{
    gl_towers_embedded_ui_dashboard_init_gen(asset_path);
    gl_towers_state_init();
    gl_towers_commands_init();
    gl_towers_ui_binding_init();
}

const gl_towers_ui_state_t* gl_towers_embedded_ui_get_state(void)
{
    return gl_towers_mock_state_get();
}

void gl_towers_embedded_ui_tick(void)
{
    gl_towers_mock_state_tick();
}

/**********************
 *   STATIC FUNCTIONS
 **********************/