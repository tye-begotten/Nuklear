beginsection("T3_LIB_NUKLEAR")



t3_create_lib(LIB_PREFIX t3_shared
    IMPL_SOURCES
    ${CMAKE_CURRENT_LIST_DIR}/nuklear_math.c
    ${CMAKE_CURRENT_LIST_DIR}/nuklear_util.c
    ${CMAKE_CURRENT_LIST_DIR}/nuklear_color.c
    ${CMAKE_CURRENT_LIST_DIR}/nuklear_utf8.c
    ${CMAKE_CURRENT_LIST_DIR}/nuklear_buffer.c
    ${CMAKE_CURRENT_LIST_DIR}/nuklear_string.c
    ${CMAKE_CURRENT_LIST_DIR}/nuklear_draw.c
    ${CMAKE_CURRENT_LIST_DIR}/nuklear_vertex.c
    ${CMAKE_CURRENT_LIST_DIR}/nuklear_font.c
    ${CMAKE_CURRENT_LIST_DIR}/nuklear_input.c
    ${CMAKE_CURRENT_LIST_DIR}/nuklear_style.c
    ${CMAKE_CURRENT_LIST_DIR}/nuklear_context.c
    ${CMAKE_CURRENT_LIST_DIR}/nuklear_pool.c
    ${CMAKE_CURRENT_LIST_DIR}/nuklear_page_element.c
    ${CMAKE_CURRENT_LIST_DIR}/nuklear_table.c
    ${CMAKE_CURRENT_LIST_DIR}/nuklear_panel.c
    ${CMAKE_CURRENT_LIST_DIR}/nuklear_window.c
    ${CMAKE_CURRENT_LIST_DIR}/nuklear_popup.c
    ${CMAKE_CURRENT_LIST_DIR}/nuklear_contextual.c
    ${CMAKE_CURRENT_LIST_DIR}/nuklear_menu.c
    ${CMAKE_CURRENT_LIST_DIR}/nuklear_layout.c
    ${CMAKE_CURRENT_LIST_DIR}/nuklear_tree.c
    ${CMAKE_CURRENT_LIST_DIR}/nuklear_group.c
    ${CMAKE_CURRENT_LIST_DIR}/nuklear_list_view.c
    ${CMAKE_CURRENT_LIST_DIR}/nuklear_widget.c
    ${CMAKE_CURRENT_LIST_DIR}/nuklear_text.c
    ${CMAKE_CURRENT_LIST_DIR}/nuklear_image.c
    ${CMAKE_CURRENT_LIST_DIR}/nuklear_9slice.c
    ${CMAKE_CURRENT_LIST_DIR}/nuklear_button.c
    ${CMAKE_CURRENT_LIST_DIR}/nuklear_toggle.c
    ${CMAKE_CURRENT_LIST_DIR}/nuklear_selectable.c
    ${CMAKE_CURRENT_LIST_DIR}/nuklear_slider.c
    ${CMAKE_CURRENT_LIST_DIR}/nuklear_knob.c
    ${CMAKE_CURRENT_LIST_DIR}/nuklear_progress.c
    ${CMAKE_CURRENT_LIST_DIR}/nuklear_scrollbar.c
    ${CMAKE_CURRENT_LIST_DIR}/nuklear_text_editor.c
    ${CMAKE_CURRENT_LIST_DIR}/nuklear_edit.c
    ${CMAKE_CURRENT_LIST_DIR}/nuklear_property.c
    ${CMAKE_CURRENT_LIST_DIR}/nuklear_chart.c
    ${CMAKE_CURRENT_LIST_DIR}/nuklear_color_picker.c
    ${CMAKE_CURRENT_LIST_DIR}/nuklear_combo.c
    ${CMAKE_CURRENT_LIST_DIR}/nuklear_tooltip.c
    INC_DIRS ${CMAKE_CURRENT_LIST_DIR}
    LINK_LIBS
    t3_common
    t3_core
)

# t3_gather_includes(${CMAKE_CURRENT_LIST_DIR})

# t3_add_library(t3_shared_fft
#     ${CMAKE_CURRENT_LIST_DIR}/fft.c
# )

# t3_gather_includes(${CMAKE_CURRENT_LIST_DIR})

# target_include_directories(t3_shared_fft PRIVATE ${CMAKE_CURRENT_LIST_DIR}/inc)
# target_include_directories(t3_shared_fft INTERFACE ${CMAKE_CURRENT_LIST_DIR}/inc)

# t3_target_link_libraries(t3_shared_fft
#     t3_core
#     t3_lib_kissfft 
#     t3_lib_pocketfft
# )

endsection()