
#ifndef GL_TOWERS_STATE_H
#define GL_TOWERS_STATE_H

#include "../gl_towers_ui_contract.h"
#include <stdint.h>
#include <stdbool.h>

//=============================================================================
// Type Definitions
//=============================================================================
typedef struct {
    gl_towers_state_change_callback_t callback;
    void *user_data;
} gl_towers_state_subscription_t;

//=============================================================================
// Function Declarations
//=============================================================================

// Initialize the state manager
void gl_towers_state_init(void);

// Get the current state
const gl_towers_ui_state_t *gl_towers_state_get(void);

// Get the active device
const gl_towers_device_t *gl_towers_state_get_active_device(void);

// Apply a sensor snapshot
void gl_towers_state_apply_snapshot(const gl_towers_sensors_t *snapshot);

// Update device state (for firmware)
void gl_towers_state_update_device(const gl_towers_device_t *device);

// Add a state change subscriber
void gl_towers_state_subscribe(gl_towers_state_change_callback_t callback, void *user_data);

// Remove a state change subscriber
void gl_towers_state_unsubscribe(gl_towers_state_change_callback_t callback);

// Notify all subscribers of state change (internal use)
void gl_towers_state_notify_subscribers(void);

#endif
