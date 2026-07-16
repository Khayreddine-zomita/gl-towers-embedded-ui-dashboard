# =============================================================================
# user_config.cmake - Add your custom source files here
# =============================================================================
#
# This file is included by the generated CMakeLists.txt and allows you to
# add extra source files to the project without modifying generated files
# (which may be overwritten).
#
# To add your own sources, append them to LV_EDITOR_PROJECT_SOURCES:
#
#   list(APPEND LV_EDITOR_PROJECT_SOURCES
#       ${CMAKE_CURRENT_LIST_DIR}/src/my_widget.c
#       ${CMAKE_CURRENT_LIST_DIR}/src/my_screen.c
#   )
#
# Tip:
#   - Use ${CMAKE_CURRENT_LIST_DIR} to get paths relative to this file
#
# =============================================================================

list(APPEND LV_EDITOR_PROJECT_SOURCES
    ${CMAKE_CURRENT_LIST_DIR}/src/gl_towers_mock_state.c
    ${CMAKE_CURRENT_LIST_DIR}/src/state/gl_towers_state.c
    ${CMAKE_CURRENT_LIST_DIR}/src/utils/gl_towers_utils.c
    ${CMAKE_CURRENT_LIST_DIR}/src/commands/gl_towers_commands.c
    ${CMAKE_CURRENT_LIST_DIR}/src/ui_binding/gl_towers_ui_binding.c
)
