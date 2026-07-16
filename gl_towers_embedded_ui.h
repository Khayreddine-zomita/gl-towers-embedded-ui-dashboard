/**
 * @file gl_towers_embedded_ui.h
 */

#ifndef GL_TOWERS_EMBEDDED_UI_H
#define GL_TOWERS_EMBEDDED_UI_H

#ifdef __cplusplus
extern "C" {
#endif

/*********************
 *      INCLUDES
 *********************/

#include "gl_towers_embedded_ui_gen.h"
#include "src/gl_towers_ui_contract.h"
#include "src/state/gl_towers_state.h"
#include "src/commands/gl_towers_commands.h"
#include "src/utils/gl_towers_utils.h"
#include "src/ui_binding/gl_towers_ui_binding.h"
#include "src/gl_towers_mock_state.h"

/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/

/**********************
 * GLOBAL VARIABLES
 **********************/

/**********************
 * GLOBAL PROTOTYPES
 **********************/

/**
 * Initialize the component library
 */
void gl_towers_embedded_ui_init(const char * asset_path);

/**
 * Get the current UI state
 */
const gl_towers_ui_state_t* gl_towers_embedded_ui_get_state(void);

/**
 * Tick the UI (call periodically for telemetry updates, etc.
 */
void gl_towers_embedded_ui_tick(void);

/**********************
 *      MACROS
 **********************/

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif /*GL_TOWERS_EMBEDDED_UI_H*/