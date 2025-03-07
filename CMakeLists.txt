beginsection("T3_LIB_NUKLEAR")


t3_create_lib(LIB_PREFIX t3_shared
    INC_DIRS ${CMAKE_CURRENT_LIST_DIR}/src ${CMAKE_CURRENT_LIST_DIR}/src/inc
    SRC_DIRS ${CMAKE_CURRENT_LIST_DIR}/src
    LINK_LIBS
    t3_common
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