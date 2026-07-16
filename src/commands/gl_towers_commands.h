
#ifndef GL_TOWERS_COMMANDS_H
#define GL_TOWERS_COMMANDS_H

#include "../gl_towers_ui_contract.h"

//=============================================================================
// Function Declarations
//=============================================================================
void gl_towers_commands_init(void);
void gl_towers_commands_send(gl_towers_ui_command_t cmd, const void *params);
void gl_towers_commands_set_handler(gl_towers_command_handler_t handler, void *user_data);

#endif
