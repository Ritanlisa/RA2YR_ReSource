cmake_minimum_required(VERSION 3.20)
project(hook_framework VERSION 1.0 LANGUAGES CXX ASM_MASM)

set(CMAKE_CXX_STANDARD 17)

# External dependencies
set(YRPP_DIR           "${CMAKE_SOURCE_DIR}/../../Ares/YRpp")
set(GAMEMD_INCLUDE_DIR "${CMAKE_SOURCE_DIR}/../../include")

# Source files
set(HOOK_SOURCES
    hook_main.cpp
    shadow_txn.cpp
    test_hooks.cpp
)

set(HOOK_HEADERS
    tls_storage.h
    shadow_txn.h
    shadow_veh.h
)

set(HOOK_ASM
    PostProcStub.asm
)

# DLL target
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
    psapi.lib
)

target_compile_definitions(hook_dll PRIVATE
    _WINDLL
    SYR_VER=2
)

target_compile_options(hook_dll PRIVATE $<$<COMPILE_LANGUAGE:CXX>:/utf-8>)

# Post-build
add_custom_command(TARGET hook_dll POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy_if_different
        "$<TARGET_FILE:hook_dll>"
        "${CMAKE_SOURCE_DIR}/../../build_win/Debug/"
    COMMENT "Copy hook_dll.dll -> gamemd output"
)
