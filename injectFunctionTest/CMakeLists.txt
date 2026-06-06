cmake_minimum_required(VERSION 3.20)
project(hook_framework VERSION 1.0 LANGUAGES CXX ASM_MASM)

set(CMAKE_CXX_STANDARD 17)

# ============================================================
# Configuration
# ============================================================
# YRpp include dir (relative to this CMakeLists.txt)
set(YRPP_DIR           "${CMAKE_SOURCE_DIR}/../Ares/YRpp")
# gamemd_core include dir
set(GAMEMD_INCLUDE_DIR "${CMAKE_SOURCE_DIR}/../include")
# Output directory for hook_dll.dll (set via -DHOOK_OUTPUT_DIR=... or env)
if(NOT DEFINED HOOK_OUTPUT_DIR)
    if(DEFINED ENV{HOOK_OUTPUT_DIR})
        set(HOOK_OUTPUT_DIR "$ENV{HOOK_OUTPUT_DIR}")
    else()
        set(HOOK_OUTPUT_DIR "${CMAKE_SOURCE_DIR}/../build_win/Debug")
    endif()
endif()

# ============================================================
# Source files
# ============================================================
set(HOOK_SOURCES
    hook_main.cpp
    shadow_txn.cpp
    headless_server.cpp
    element_tracker.cpp
    render_hooks.cpp
    test_hooks.cpp
)

set(HOOK_HEADERS
    tls_storage.h
    shadow_txn.h
    shadow_veh.h
    headless_server.h
    element_tracker.h
    render_hooks.h
)

set(HOOK_ASM
    PostProcStub.asm
)

# ============================================================
# DLL target
# ============================================================
add_library(hook_dll SHARED
    ${HOOK_SOURCES}
    ${HOOK_HEADERS}
    ${HOOK_ASM}
)

target_include_directories(hook_dll PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}
    ${YRPP_DIR}
    ${GAMEMD_INCLUDE_DIR}
)

target_link_libraries(hook_dll PRIVATE
    winmm.lib
    ws2_32.lib
)

target_compile_definitions(hook_dll PRIVATE
    _WINDLL
    SYR_VER=2
)

target_compile_options(hook_dll PRIVATE $<$<COMPILE_LANGUAGE:CXX>:/utf-8>)

# ============================================================
# Post-build
# ============================================================
add_custom_command(TARGET hook_dll POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy_if_different
        "$<TARGET_FILE:hook_dll>"
        "${HOOK_OUTPUT_DIR}/"
    COMMENT "Copying hook_dll.dll -> ${HOOK_OUTPUT_DIR}"
)
