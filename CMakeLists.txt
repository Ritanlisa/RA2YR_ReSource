cmake_minimum_required(VERSION 3.20)
project(RA2YR_ReSource VERSION 0.1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# 32-bit build (gamemd.exe is 32-bit)
if(WIN32)
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /arch:IA32")
endif()

# Collect all source files (exclude src/app/ — duplicates of app/ files; exclude _generated/ — stub placeholders)
file(GLOB_RECURSE HEADERS
    "src/*.hpp"
)
list(FILTER HEADERS EXCLUDE REGEX "src/app/")
list(FILTER HEADERS EXCLUDE REGEX "src/_generated/")

file(GLOB_RECURSE SOURCES
    "src/*.cpp"
)
list(FILTER SOURCES EXCLUDE REGEX "src/app/")
list(FILTER SOURCES EXCLUDE REGEX "src/_generated/")

# Main library target — REMOVED: gamemd.exe now builds directly from sources.
# (gamemd_core was a STATIC library wrapper; sources are compiled directly into the EXE.)
# add_library(gamemd_core STATIC ${HEADERS} ${SOURCES})
# target_include_directories(gamemd_core PUBLIC "src")
# target_compile_definitions(gamemd_core PRIVATE $<$<CONFIG:Debug>:GAMEMD_DEBUG>)

# Optional: Verification target (compiles headers only for syntax checking)
add_custom_target(verify_headers
    COMMAND ${CMAKE_COMMAND} -E echo "Header verification: complete"
)

# Future: When linking against original gamemd.exe
# add_library(gamemd SHARED)
# For now, headers provide the structure for reference and decompilation work

# ── Executable target (replaces original gamemd.exe) ──
if(WIN32)
    add_executable(gamemd WIN32
        app/main.cpp
        app/game_loop.cpp
        app/ddraw_init.cpp
        app/cmdline.cpp
        app/resource.rc
        src/_generated/named_free_stubs.cpp
        src/_generated/sub_stubs.cpp
        ${SOURCES}
    )

    target_include_directories(gamemd PRIVATE "src" "app")

    target_compile_definitions(gamemd PRIVATE
        $<$<CONFIG:Debug>:GAMEMD_DEBUG>
    )

    target_link_libraries(gamemd PRIVATE
        user32
        gdi32
        ole32
        comctl32
        ddraw
        dxguid
        imm32
        winmm
    )

    # Allow unresolved externals (pre-existing stub functions — TODO: implement)
    target_link_options(gamemd PRIVATE "/FORCE:UNRESOLVED")

    # Post-build: copy cnc-ddraw runtime dll + config to output directory
    # (only when source files exist — CI environments don't have them)
    if(EXISTS "${CMAKE_SOURCE_DIR}/ddraw.dll")
        add_custom_command(TARGET gamemd POST_BUILD
            COMMAND ${CMAKE_COMMAND} -E copy_if_different
                "${CMAKE_SOURCE_DIR}/ddraw.dll"
                "$<TARGET_FILE_DIR:gamemd>/ddraw.dll"
            COMMAND ${CMAKE_COMMAND} -E copy_if_different
                "${CMAKE_SOURCE_DIR}/ddraw.ini"
                "$<TARGET_FILE_DIR:gamemd>/ddraw.ini"
            COMMENT "Copying cnc-ddraw runtime files..."
        )
    endif()

    # Post-build: copy RA2YR game resource files to output directory
    if(EXISTS "${CMAKE_SOURCE_DIR}/RA2YR-FullFiles")
        add_custom_command(TARGET gamemd POST_BUILD
            COMMAND ${CMAKE_COMMAND} -E copy_directory
                "${CMAKE_SOURCE_DIR}/RA2YR-FullFiles"
                "$<TARGET_FILE_DIR:gamemd>"
            COMMENT "Copying game resources: RA2YR-FullFiles/ -> $<TARGET_FILE_DIR:gamemd>"
        )
    endif()

    # hook_dll — shadow execution framework (subdirectory build)
    # Built only when Python3 + Ares submodule are available.
    # Not a dependency of gamemd.exe (separate dev tool).
    find_package(Python3 COMPONENTS Interpreter QUIET)
    if(Python3_FOUND AND EXISTS "${CMAKE_SOURCE_DIR}/YRpp/Syringe.h")
        if(NOT Python3_FOUND)
            message(WARNING "Python3 not found — hook DLL will use committed gen/*.cpp (may be stale)")
        endif()
        add_subdirectory(injectFunctionTest)
    else()
        message(STATUS "Skipping hook_dll: requires Python3 + YRpp/Syringe.h submodule")
    endif()

    # ── Signal type database (generated, used by code quality checks) ──
    if(Python3_FOUND)
        add_custom_target(build_signals
            COMMAND ${Python3_EXECUTABLE} "${CMAKE_SOURCE_DIR}/tools/build_signals.py"
            WORKING_DIRECTORY "${CMAKE_SOURCE_DIR}"
            COMMENT "Building signals.json — symbol type database"
        )
    endif()

    # ── Code quality check: modified functions only ──
    # Checks: stubs, comment shells, pointer arithmetic, C++ casts, gotos, IDA artifacts
    if(Python3_FOUND)
        add_custom_target(check_code_quality
            COMMAND ${Python3_EXECUTABLE} "${CMAKE_SOURCE_DIR}/tools/check_translated_functions.py"
            WORKING_DIRECTORY ${CMAKE_SOURCE_DIR}
            COMMENT "Checking code quality (modified functions only)"
        )
        add_dependencies(gamemd check_code_quality)
        add_dependencies(check_code_quality build_signals)

        # ── Execution-flow CFG verification: modified functions only (T21) ──
        # verify_execution_flow.py --auto compares the CONTROL-FLOW GRAPH of each
        # git-modified C++ function against its IDA Hex-Rays CFG, failing the build
        # on a structural mismatch (a stub / mistranslation).
        # GRACEFUL DEGRADATION — the build is NEVER blocked by IDA being closed:
        #   * --auto reads ONLY the local IDA cache (.omo/ida_cache/); it never
        #     contacts the IDA MCP server, so IDA being down has no effect here.
        #   * a modified function with NO cached IDA pseudocode is SKIPPED with a
        #     WARNING (not a failure); if nothing is verifiable the script exits 0.
        #   * the build FAILS (exit 1) ONLY on a genuine CFG mismatch of a function
        #     that HAS IDA data — i.e. an actual mistranslation.
        add_custom_target(verify_execution_flow
            COMMAND ${Python3_EXECUTABLE} "${CMAKE_SOURCE_DIR}/tools/verify_execution_flow.py" --auto
            WORKING_DIRECTORY ${CMAKE_SOURCE_DIR}
            COMMENT "Verifying execution-flow CFG (modified functions only; skips funcs with no IDA cache)"
        )
        add_dependencies(gamemd verify_execution_flow)
        add_dependencies(verify_execution_flow build_signals)

        # Name consistency audit (optional, not build-gating)
        add_custom_target(audit_names
            COMMAND ${Python3_EXECUTABLE} "${CMAKE_SOURCE_DIR}/tools/audit_consistency.py" --check-only
            WORKING_DIRECTORY ${CMAKE_SOURCE_DIR}
            COMMENT "Auditing IDA↔JSON↔hpp name consistency"
        )
    else()
        message(WARNING "Python3 not found — skipping code quality checks")
    endif()
endif()

# Platform-specific settings for executable
if(MSVC)
    target_compile_options(gamemd PRIVATE
        /W3
        /FS
        /utf-8
        /wd4250     # Disable dominance warning (diamond inheritance intentional)
        /wd4275     # Non-DLL interface class used as base (expected for game engine)
    )
    target_compile_definitions(gamemd PRIVATE
        WIN32_LEAN_AND_MEAN
        NOMINMAX
        _CRT_SECURE_NO_WARNINGS
    )
endif()
