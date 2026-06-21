cmake_minimum_required(VERSION 3.20)
project(hook_framework VERSION 1.0 LANGUAGES CXX ASM_MASM)

set(CMAKE_CXX_STANDARD 17)

# ============================================================
# Configuration
# ============================================================
# YRpp include dir (Phobos submodule @ 613922a)
set(YRPP_DIR           "${CMAKE_CURRENT_SOURCE_DIR}/../YRpp")
# gamemd_core include dir
set(GAMEMD_INCLUDE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/../src")
# Output directory for hook_dll.dll (set via -DHOOK_OUTPUT_DIR=... or env)
if(NOT DEFINED HOOK_OUTPUT_DIR)
    if(DEFINED ENV{HOOK_OUTPUT_DIR})
        set(HOOK_OUTPUT_DIR "$ENV{HOOK_OUTPUT_DIR}")
    else()
        set(HOOK_OUTPUT_DIR "D:/RA2MD")
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
    blit_tracker.cpp
    render_hooks.cpp
    "${CMAKE_CURRENT_SOURCE_DIR}/gen/reverse_hooks.cpp"
    "${CMAKE_CURRENT_SOURCE_DIR}/gen/reverse_check.cpp"
    "${CMAKE_CURRENT_SOURCE_DIR}/gen/re_impl.cpp"
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
target_link_options(hook_dll PRIVATE "/MAP:${CMAKE_CURRENT_BINARY_DIR}/hook_dll.map" "/FORCE:UNRESOLVED")

# ============================================================
# Code generation — auto-regenerate gen/*.cpp from REVERSE markers
# Runs on every build when Python is available.
# Falls back to committed gen files when Python is absent (CI / clean clone).
# ============================================================
find_package(Python3 COMPONENTS Interpreter QUIET)

if(Python3_FOUND)
    # Collect all source files that may contain REVERSE markers
    file(GLOB_RECURSE REVERSE_SOURCES CONFIGURE_DEPENDS
        "${GAMEMD_INCLUDE_DIR}/*.hpp"
        "${CMAKE_SOURCE_DIR}/src/*.cpp"
        "${CMAKE_SOURCE_DIR}/src/*.hpp"
        "${CMAKE_SOURCE_DIR}/app/*.cpp"
        "${CMAKE_SOURCE_DIR}/app/*.hpp"
    )

    set(GEN_DIR     "${CMAKE_CURRENT_SOURCE_DIR}/gen")
    set(SCRIPTS_DIR "${CMAKE_CURRENT_SOURCE_DIR}")

    # Step 1: Idempotency analysis → idempotent_results.json
    # (Only re-runs when purity_effects.json or annotations.json change)
    add_custom_command(
        OUTPUT  "${SCRIPTS_DIR}/idempotent_results.json"
        COMMAND "${Python3_EXECUTABLE}" "${SCRIPTS_DIR}/analyze_idempotent.py"
        DEPENDS
            "${SCRIPTS_DIR}/analyze_idempotent.py"
            "${SCRIPTS_DIR}/purity_effects.json"
            "${SCRIPTS_DIR}/annotations.json"
        COMMENT "Analyzing function idempotency..."
        WORKING_DIRECTORY "${SCRIPTS_DIR}"
    )

    # Step 1b: IDA extraction → gen/re_impl_generated.cpp
    # Extracts decompiled pseudocode from IDA for all Inject-mode functions.
    # Falls back to cached file when IDA is unavailable.
    add_custom_command(
        OUTPUT  "${GEN_DIR}/re_impl_generated.cpp"
        COMMAND "${Python3_EXECUTABLE}" "${SCRIPTS_DIR}/ida_gen_re_impl.py"
        DEPENDS
            "${SCRIPTS_DIR}/ida_gen_re_impl.py"
            "${SCRIPTS_DIR}/functions.json"
            "${SCRIPTS_DIR}/gen_re_impl.py"
        COMMENT "Extracting IDA decompiled implementations..."
        WORKING_DIRECTORY "${SCRIPTS_DIR}"
    )

    # Step 2: Generate hook code → gen/reverse_hooks.cpp + check + re_impl
    set(GEN_OUTPUTS
        "${GEN_DIR}/reverse_hooks.cpp"
        "${GEN_DIR}/reverse_check.cpp"
        "${GEN_DIR}/re_impl.cpp"
    )
    add_custom_command(
        OUTPUT  ${GEN_OUTPUTS}
        COMMAND "${Python3_EXECUTABLE}" "${SCRIPTS_DIR}/gen_reverse_hooks.py"
        DEPENDS
            "${SCRIPTS_DIR}/gen_reverse_hooks.py"
            "${SCRIPTS_DIR}/gen_re_impl.py"
            "${SCRIPTS_DIR}/functions.json"
            "${SCRIPTS_DIR}/idempotent_results.json"
            "${GEN_DIR}/re_impl_generated.cpp"
            ${REVERSE_SOURCES}
        COMMENT "Generating REVERSE hook code..."
        WORKING_DIRECTORY "${SCRIPTS_DIR}"
    )

    add_custom_target(regenerate_hooks ALL DEPENDS ${GEN_OUTPUTS})
    add_dependencies(hook_dll regenerate_hooks)
else()
    message(WARNING "Python3 not found — using committed gen/*.cpp files (may be stale)")
endif()

# ============================================================
# Post-build
# ============================================================
add_custom_command(TARGET hook_dll POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy_if_different
        "$<TARGET_FILE:hook_dll>"
        "${HOOK_OUTPUT_DIR}/"
    COMMENT "Copying hook_dll.dll -> ${HOOK_OUTPUT_DIR}"
)
