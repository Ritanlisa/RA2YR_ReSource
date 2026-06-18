# RA2YR ReSource

Reverse-engineered C++ source code of Red Alert 2 / Yuri's Revenge from `gamemd.exe`.

## Project Status

This project reconstructs the RA2/YR game engine `gamemd.exe` — a 7.6MB 32-bit Windows PE compiled with MSVC 6.0, containing 19,059 functions across 1,120 classes.

Current output: static library `gamemd_core` + executable `gamemd.exe`, built with CMake + C++20. The long-term goal is a fully independent, drop-in replacement engine with progressive modernization.

## Architecture Overview

```
RA2/YR (gamemd.exe)
├── 19,059 functions (across 1,120 classes, 235 source files)
├── AbstractClass root (4 vtables, multiple-inheritance COM layer)
├── ObjectClass → MissionClass → RadioClass → TechnoClass → FootClass
├── Type/Instance dual hierarchy (TypeClass prototype pattern)
├── COM interface layer (INoticeSink/Source confirmed via RTTI)
└── Extended ecosystem: Ares/Phobos (DLL injection mods via Syringe)
```

## Four-Source Triangulation

| Source | Purpose | Limitations |
|--------|---------|-------------|
| **RA1 Source** (CnC_Red_Alert/CODE/) | Framework/architecture: class hierarchy, mission state machine, TARGET encoding | RA2 offsets differ; has MI/COM layer |
| **YRpp** (~150 headers) | Runtime-verified member offsets and vtable indices | Declaration-only, no function bodies |
| **IDA Pro** (gamemd.exe MCP) | Binary-level verification: constructor analysis, call graphs, globals | Pseudocode may be imprecise |
| **cnc-ddraw** (./cnc-ddraw) | DirectDraw reference + debug compatibility layer | Replaced in Phase 2 by modern renderer |

## Code Structure

```
RA2YR_ReSource/
├── src/                     ← ~130 .hpp + 85 .cpp source files (20 subdirectories)
│   ├── core/                # Enums, math, memory, vectors, TARGET, coordinates
│   ├── object/              # AbstractClass → ObjectClass → FootClass
│   ├── type/                # Type system (prototype pattern)
│   ├── entity/              # Animations, bullets, particles, overlays
│   ├── structure/           # Infantry, units, aircraft, buildings
│   ├── house/               # Houses, house types, sides
│   ├── system/              # Cells, maps, scenarios, factories
│   ├── render/              # DSurface, BINK, SHP, palette, text
│   ├── ui/                  # Gadget, Dialog, Command, Sidebar, Mouse
│   ├── misc/                # Audio, Locomotion, Rules, SuperWeapon
│   ├── network/             # Winsock, Session, Multiplayer
│   ├── team/                # Team, Trigger, Script, Campaign
│   └── wdt/                 # Watchdog timer
├── app/                     ← EXE entry point (WinMain + game loop + DDraw init)
├── injectFunctionTest/      ← Hook-based shadow execution framework (see below)
├── CMakeLists.txt           # C++20, Win32 static lib + EXE
└── LICENSE.md               # GPL v3 (inherited from CnC_Red_Alert)
```

## Build

```bash
# gamemd_core.lib + gamemd.exe
cmake -B build_win -G "Visual Studio 17 2022" -A Win32
cmake --build build_win

# Hook DLL for shadow execution testing
cd injectFunctionTest
cmake -B build_hook -A Win32 -DHOOK_OUTPUT_DIR="path/to/game/dir"
cmake --build build_hook --config Release
```

Build status: 0 errors, 0 warnings. 235 compileable source files (~130 .hpp + 85 .cpp), ~53,600 total lines (headers ~39,200 + source ~14,400).

## IMPORTANT: REVERSE Pipeline Code Protection

**Do NOT modify the following files without explicit user permission.** These files form the complete REVERSE shadow-comparison pipeline:

| File | Purpose |
|------|---------|
| `src/core/reverse_marker.hpp` | REVERSE macro definition |
| `injectFunctionTest/gen_reverse_hooks.py` | Hook code generator |
| `injectFunctionTest/gen_re_impl.py` | RE function generator |
| `injectFunctionTest/gen/` | Auto-generated hook/RE code |
| `injectFunctionTest/render_hooks.cpp` | Render element tracker |
| `injectFunctionTest/PostProcStub.asm` | Stack-hijack comparison stub |
| `injectFunctionTest/tls_storage.h` | TLS slot layout |
| `injectFunctionTest/shadow_txn.h/cpp` | Page-level memory transaction |
| `injectFunctionTest/headless_server.cpp` | TCP command server |
| `injectFunctionTest/functions.json` | Function metadata (19K entries) |
| `injectFunctionTest/CMakeLists.txt` | Hook DLL build |
| `functionComparison.md` | Pipeline design document |

## Hook-Based Shadow Execution Framework

Located in `injectFunctionTest/`. Validates reverse-engineered functions by hooking them into the original `gamemd.exe` at runtime:

```
Syringe → injects hook_dll.dll → intercepts function entry
  → runs original function (Capture mode: just log inputs/return)
  → runs RE version on clean state (Replace/Inject: stack hijack via PostProcStub)
  → PostProcStub compares RE result vs original result
  → logs mismatches to comparisonResult.log
```

### Current Status

| Mode | Active | Description |
|------|--------|-------------|
| Capture | 12 hooks | Log inputs+return values to Captures section |
| Replace | 1 hook (SetPixel) | Original runs first, then RE on same state (idempotent functions skip transaction) |
| Inject | 0 (infrastructure ready) | Full .data rollback for non-idempotent functions |
| None | 29 markers | Listed in None Calls section, not hooked |

### Key Components

| File | Purpose |
|------|---------|
| `gen_reverse_hooks.py` | Main generator: scans REVERSE() → generates Capture/Replace/Inject hooks |
| `gen_re_impl.py` | RE_* function template generator (pixel_write, fill, etc.) |
| `PostProcStub.asm` | Stack hijack stub: reads g_current_slot, calls LogComparison |
| `shadow_txn.cpp` | VEH handler + ShadowTransaction (Begin/End/Discard/OnWriteViolation) |
| `tls_storage.h` | ShadowSlot struct + g_current_slot pointer + g_owner_tid + g_re_depth |
| `headless_server.cpp` | TCP :25400 (STATS/MEM/REG/ELEMENTS/CLICKAT/QUIT) |
| `render_hooks.cpp` | DSurface::Blit hook (UI element tracking) |
| `functions.json` | 19K function metadata (calling convention, min_safe_size, idempotent) |

### Quick Start

```bash
# Build hook DLL (Release, 32-bit)
cmake -B build_hook_release -G "Visual Studio 17 2022" -A Win32 -DHOOK_OUTPUT_DIR=D:/RA2MD
cmake --build build_hook_release --config Release

# Run test
cd D:\RA2MD
Syringe.exe "gamemd.exe" -cd -SPAWN
# comparisonResult.log generated in D:\RA2MD\comparisonResult.log

# TCP stats
echo STATS | ncat 127.0.0.1 25400
# → {"ok":true,"mismatch_count":0,"orphan_txn_count":0,"re_depth":0}
#   QUIT
```

### Configuration (Environment Variables)

| Variable | Default | Purpose |
|----------|---------|---------|
| `SHADOW_HEADLESS` | *(unset)* | Set to `1` to enable TCP command server |
| `SHADOW_PORT` | `25400` | TCP server port |
| `SHADOW_DATA_START` | `0x812000` | .data section start (for page protection) |
| `SHADOW_DATA_END` | `0xB7A000` | .data section end |
| `HOOK_OUTPUT_DIR` | `../build_win/Debug` | DLL copy destination |

## RA1 vs RA2: Key Differences

| Aspect | RA1 (CnC_Red_Alert) | RA2/YR (gamemd.exe) |
|--------|---------------------|---------------------|
| Compiler | Watcom C++ | MSVC 6.0 |
| Inheritance | Single-inheritance | Multiple inheritance, 4 vtable pointers |
| COM layer | None | 4 base interfaces |
| Rendering | 2D isometric SHP | 3D Voxel + 2D SHP |
| Movement | DriveClass track-based | ILocomotion COM interface |
| Vessels | Separate VesselClass | Merged into UnitClass |
| Fixed-point | `fixed` (16.16) | `float` |
| Health | `short` (0–255) | `int` |
| MIX encryption | RSA-wrapped Blowfish | Direct Blowfish key_source |

## IDA Naming Progress

All 19,067 functions named. 1,120 classes have complete header definitions with all member fields identified.

| Category | Count | Percentage |
|----------|-------|------------|
| Named functions | 10,366 | 100% |
| Member functions (`::`) | 7,936 | 76.6% |
| Global functions | 2,430 | 23.4% |
| Named global variables | 9,999 | 100% |
| Classes with headers | 1,120 | 100% |
| Total functions | 19,067 | — |

## License

GNU General Public License v3.0 with Electronic Arts additional terms (Clause 7). Inherited from CnC_Red_Alert. All contributions must respect this license.

## Acknowledgements

- **Westwood Studios** — Created the original Command & Conquer series
- **Electronic Arts** — Open-sourced CnC_Red_Alert under GPL v3
- **Mentalmeisters** — Created the Mental Omega mod
- **FunkyFr3sh/cnc-ddraw** — DirectDraw compatibility layer
- **YRpp Project** — Runtime reverse engineering reference
- **Ares / Phobos** — DLL injection mod platform ecosystem
