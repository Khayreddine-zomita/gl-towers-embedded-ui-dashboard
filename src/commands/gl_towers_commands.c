
#include "gl_towers_commands.h"
#include "../state/gl_towers_state.h"
#include <string.h>

//=============================================================================
// Static Variables
//=============================================================================
static gl_towers_command_handler_t s_command_handler = NULL;
static void *s_handler_user_data = NULL;

//=============================================================================
// Public Functions
//=============================================================================
void gl_towers_commands_init(void) {
    s_command_handler = NULL;
    s_handler_user_data = NULL;
}

void gl_towers_commands_send(gl_towers_ui_command_t cmd, const void *params) {
    if (s_command_handler != NULL) {
        s_command_handler(cmd, params, s_handler_user_data);
    }
}

void gl_towers_commands_set_handler(gl_towers_command_handler_t handler, void *user_data) {
    s_command_handler = handler;
    s_handler_user_data = user_data;
}
