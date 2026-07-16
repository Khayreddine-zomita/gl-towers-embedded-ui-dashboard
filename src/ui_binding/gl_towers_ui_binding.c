
#include "gl_towers_ui_binding.h"
#include "../state/gl_towers_state.h"
#include "../utils/gl_towers_utils.h"
#include "../commands/gl_towers_commands.h"
#include "stdio.h"
#include "string.h"

//=============================================================================
// Static Variables
//=============================================================================
static gl_towers_ui_screen_t s_current_screen = GL_TOWERS_UI_SCREEN_BOOT;

//=============================================================================
// Helper Functions
//=============================================================================
static lv_color_t get_status_color(gl_towers_health_status_t status) {
    switch (status) {
        case GL_TOWERS_HEALTH_STATUS_EXCELLENT: return COLOR_STATUS_HEALTHY;
        case GL_TOWERS_HEALTH_STATUS_GOOD: return COLOR_STATUS_HEALTHY;
        case GL_TOWERS_HEALTH_STATUS_ATTENTION: return COLOR_STATUS_WARNING;
        case GL_TOWERS_HEALTH_STATUS_CRITICAL: return COLOR_STATUS_CRITICAL;
        default: return COLOR_STATUS_INFO;
    }
}

//=============================================================================
// Public Functions
//=============================================================================
void gl_towers_ui_binding_init(void) {
    s_current_screen = GL_TOWERS_UI_SCREEN_BOOT;
    // Subscribe to state changes
    gl_towers_state_subscribe(gl_towers_ui_binding_update, NULL);
}

void gl_towers_ui_binding_show_screen(gl_towers_ui_screen_t screen) {
    s_current_screen = screen;
    // Here you would call the generated screen create functions
    // For example, if screen == GL_TOWERS_UI_SCREEN_HOME, call screen_home_create()
}

void gl_towers_ui_binding_update(const gl_towers_ui_state_t *state, void *user_data) {
    (void)user_data;
    if (!state) return;

    // Update all UI components based on state
    // This is where you'd:
    // 1. Update sensor cards with current values
    // 2. Update reservoir level
    // 3. Update device status
    // 4. Update LED status
    // 5. Update irrigation status
    // 6. Show alerts if any
}
