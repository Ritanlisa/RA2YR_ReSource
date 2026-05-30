cmake_minimum_required(VERSION 3.20)
project(RA2YR_ReSource VERSION 0.1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# 32-bit build (gamemd.exe is 32-bit)
if(WIN32)
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /arch:IA32")
endif()

# Collect all source files
file(GLOB_RECURSE HEADERS
    "include/gamemd/*.hpp"
)

file(GLOB_RECURSE SOURCES
    "src/*.cpp"
)

# Main library target (static library for now)
add_library(gamemd_core STATIC
    ${HEADERS}
    ${SOURCES}
)

target_include_directories(gamemd_core PUBLIC
    "include"
)

target_compile_definitions(gamemd_core PRIVATE
    $<$<CONFIG:Debug>:GAMEMD_DEBUG>
)

# Platform-specific settings
if(MSVC)
    target_compile_options(gamemd_core PRIVATE
        /W3         # Warning level 3
        /FS         # Force synchronous PDB writes (multi-processor compilation)
        /utf-8      # Treat source/execution charset as UTF-8
        /wd4250     # Disable dominance warning (diamond inheritance intentional)
        /wd4275     # Non-DLL interface class used as base (expected for game engine)
    )
    target_compile_definitions(gamemd_core PRIVATE
        WIN32_LEAN_AND_MEAN
        NOMINMAX
        _CRT_SECURE_NO_WARNINGS
    )
endif()

if(GCC OR CLANG)
    target_compile_options(gamemd_core PRIVATE
        -Wall
        -Wextra
    )
    if(WIN32)
        target_compile_options(gamemd_core PRIVATE -m32)
    endif()
endif()

# Optional: Verification target (compiles headers only for syntax checking)
add_custom_target(verify_headers
    COMMAND ${CMAKE_COMMAND} -E echo "Header verification: compile stub target"
    DEPENDS gamemd_core
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
    )

    target_include_directories(gamemd PRIVATE "include" "app")

    target_link_libraries(gamemd PRIVATE
        gamemd_core
        user32
        gdi32
        ole32
        comctl32
        ddraw
        dxguid
    )

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
endif()

# Platform-specific settings for executable
if(MSVC)
    target_compile_options(gamemd PRIVATE
        /W3
        /FS
        /utf-8
    )
    target_compile_definitions(gamemd PRIVATE
        WIN32_LEAN_AND_MEAN
        NOMINMAX
        _CRT_SECURE_NO_WARNINGS
    )
endif()
