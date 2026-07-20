
#ifndef GL_TOWERS_UI_BINDING_H
#define GL_TOWERS_UI_BINDING_H

#include "../gl_towers_ui_contract.h"
#include "gl_towers_embedded_ui_dashboard_gen.h"

//=============================================================================
// Function Declarations
//=============================================================================
void gl_towers_ui_binding_init(void);
void gl_towers_ui_binding_update(const gl_towers_ui_state_t *state, void *user_data);
void gl_towers_ui_binding_show_screen(gl_towers_ui_screen_t screen);

#endif
