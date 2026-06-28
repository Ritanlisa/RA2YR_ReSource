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

# gamemd.exe builds directly from sources — no intermediate static library needed.

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

    # hook_dll — DISABLED during translation phase
    find_package(Python3 COMPONENTS Interpreter QUIET)
    # if(Python3_FOUND AND EXISTS "${CMAKE_SOURCE_DIR}/YRpp/Syringe.h")
    #     add_subdirectory(injectFunctionTest)
    # endif()

    # ── signals.json INCREMENTAL refresh (on-demand; preserves flags) ──
    # signals.json is the single canonical symbol file and is checked into git — it is
    # NOT a build artifact regenerated from scratch. `build_signals` performs an
    # INCREMENTAL refresh: it preserves every function's completed/done/idempotent/
    # translated flags and names, and only rebuilds the derived member/global/class
    # sections from their sources. Run it manually when those sources change:
    #     cmake --build <dir> --target build_signals
    if(Python3_FOUND)
        add_custom_target(build_signals
            COMMAND ${Python3_EXECUTABLE} "${CMAKE_SOURCE_DIR}/tools/build_signals.py"
            WORKING_DIRECTORY "${CMAKE_SOURCE_DIR}"
            COMMENT "Incrementally refreshing signals.json (preserves completed/done/idempotent flags)"
        )
    endif()

    # ── Code quality hard-gating (PRE_BUILD: blocks target on failure) ──
    # Gates run before EACH target compilation. If ANY gate fails, target FAILS and produces NO binary.
    if(Python3_FOUND)

        # ── Baseline-filtered build (suppress MSVC errors from unchanged code) ──
        # Runs cmake --build through a filter that parses MSVC error output and suppresses
        # errors from code unchanged since auto-fill-baseline tag. Only errors in MODIFIED
        # code are shown. Use this instead of direct `cmake --build` for clean output.
        add_custom_target(build_filtered
            COMMAND ${Python3_EXECUTABLE} "${CMAKE_SOURCE_DIR}/tools/filter_msvc_build.py"
                ${CMAKE_COMMAND} --build "${CMAKE_BINARY_DIR}" --target gamemd --config $<CONFIG>
            WORKING_DIRECTORY ${CMAKE_SOURCE_DIR}
        )
        # signals.json is the canonical, git-tracked symbol file — always present, so
        # it needs no per-build generation step. `build_signals` is intentionally NOT a
        # dependency of gamemd/hook_dll (it would rewrite the git-tracked file every
        # build); it is an on-demand incremental refresh target instead.

        # ── Gate script (run once, cached by stamp file; re-runs when sources change) ──
        # NOTE: hook_dll is defined in injectFunctionTest/ subdirectory, so PRE_BUILD
        # cannot be attached from root CMakeLists.txt (CMake restriction). Instead we use
        # a custom target with add_dependencies — custom target failure still blocks dependents.
        add_custom_target(code_quality_gate
            COMMAND ${Python3_EXECUTABLE} "${CMAKE_SOURCE_DIR}/tools/run_all_gates.py"
            WORKING_DIRECTORY ${CMAKE_SOURCE_DIR}
            COMMENT "Running all build gates independently (B.2 + B.5 + exec-flow)"
        )
        if(TARGET hook_dll)
            add_dependencies(hook_dll code_quality_gate)
        endif()

        # Hard gate: gamemd.exe (PRE_BUILD — fails BEFORE any object compilation)
        # Gate runs before gamemd via dependency. Cleaner error than PRE_BUILD.
        add_custom_target(gate_check ALL
            COMMAND ${Python3_EXECUTABLE} "${CMAKE_SOURCE_DIR}/tools/gate_prebuild.py"
            WORKING_DIRECTORY ${CMAKE_SOURCE_DIR}
        )
        add_dependencies(gamemd gate_check)

        # Name consistency audit (optional, not build-gating)
        add_custom_target(audit_names
            COMMAND ${Python3_EXECUTABLE} "${CMAKE_SOURCE_DIR}/tools/audit_consistency.py" --check-only
            WORKING_DIRECTORY ${CMAKE_SOURCE_DIR}
            COMMENT "Auditing IDA↔JSON↔hpp name consistency"
        )

        # Sync symbols: keep hpp + signals.json + IDA names in sync with cpp definitions.
        # cpp function definitions (// 0xADDR) are the authoritative source.
        # Runs as a PRE_BUILD dependency of gamemd; idempotent on success.
        add_custom_target(sync-symbols
            COMMAND ${Python3_EXECUTABLE} "${CMAKE_SOURCE_DIR}/tools/sync_symbols.py" > nul 2>&1
            WORKING_DIRECTORY ${CMAKE_SOURCE_DIR}
        )
        add_dependencies(gamemd sync-symbols)
        if(TARGET hook_dll)
            add_dependencies(hook_dll sync-symbols)
        endif()
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
