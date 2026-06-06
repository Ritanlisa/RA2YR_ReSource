# REVERSE Pipeline — Function Comparison & Dependency Validation

## Overview

The REVERSE pipeline validates reverse-engineered C++ functions against the original `gamemd.exe` at runtime. Hook injection via Syringe, stack hijacking for return value capture, and page-level memory transactions ensure side-effect-free validation.

**39 functions** are currently marked as faithfully reverse-engineered (completed:true in functions.json). **~11,000** remaining functions are stubs or not yet implemented.

## Architecture

```
Source code:  REVERSE(0xADDR, "desc", true/false)
                   ↓
gen_reverse_hooks.py:  scan → check completion → check dependencies → generate hooks
                   ↓
gen/reverse_hooks.cpp:  DEFINE_HOOK stubs compiled into hook_dll.dll
gen/reverse_check.cpp:  #pragma message (warnings) / #error (errors)
                   ↓
Syringe → inject DLL → hook each function
                   ↓
Hook fires:  save regs → call RE version → save result →
             stack hijack → run original → PostProcStub compare
                   ↓
comparisonResult.log:  [FuncName-0xADDR]
                       Call N: CallerName()<-0xCALLSITE
                         Input:  param1(REG)=value  param2(REG)=value
                         Return: hook=RE_VAL    |    original=ORIG_VAL
```

## Completion & Dependency Validation

### Rules

| Condition | Result |
|-----------|--------|
| REVERSE enabled + function NOT completed | **ERROR** (build fails) |
| REVERSE disabled + function NOT completed | **WARNING** (compiler `#pragma message`) |
| Address not found in `functions.json` | **ERROR** (build fails) |
| FuncA(REVERSE=true) calls FuncB(not completed) | **ERROR** — any uncompleted callee |
| FuncA(REVERSE=false) calls FuncB(not completed, no REVERSE marker) | **WARNING** — unmarked dependency |

### Sample Output

```
ERROR: 0x52ba60 (InitGame) calls 56 uncompleted: AnimSystem::Init, Audio::Callback, LoadFileSHP (+51)
WARNING: 0x5bed40 (Movie::Play) — NOT completed (functions.json line 301834)
ERROR: src/object/object.cpp:77: 0x5f44a0 (ObjectClass::Remove) — NOT completed
```

### Dependency Data

- `callee_map.json` — 39 completed functions, 10,008 unique callee names
- Generated from IDA via `CodeRefsFrom` instruction-level scan
- Self-calls filtered, names deduplicated

## comparisonResult.log Format

```
[InitGame-0x0052BA60]
Call 1: MainGame()<-0x0048CCCF
  Input:  no_cd(ECX)=0x00000004
  Return: hook=0x00000000    |    original=0x00000000

[AnotherFunc-0xADDRESS]
No Call
```

| Field | Meaning |
|-------|---------|
| `[FuncName-0xADDRESS]` | Function identity (from `functions.json`) |
| `Call N` | Call counter |
| `MainGame()` | Caller identified via `gamemd.exe.map` binary search |
| `<-0xCALLSITE` | CALL instruction address = return_addr - 5 |
| `no_cd(ECX)` | Parameter name from C++ declaration + register |
| `Return: hook=\|original=` | RE version vs original output |
| `No Call` | Function hooked but never invoked (written at `DLL_PROCESS_DETACH`) |

## Step-by-Step: Adding a New Function

### 1. Verify Completion

In `functions.json`:
```json
{
  "address": "0x52BA60",
  "hook": { "completed": true, "re_file": "src/core/init_game.cpp" }
}
```

Only mark as completed if the function has a **faithful IDA translation** (not a stub/placeholder).

### 2. Verify First-Byte Safety

First instruction must fit within hook boundary. `gen_reverse_hooks.py` reads `min_safe_size` from `functions.json`.

| Safe Bytes | Example |
|-----------|---------|
| `B8 XX XX XX XX` | `mov eax, imm32` (5 bytes) |
| `A1 XX XX XX XX` | `mov eax, [absolute]` (5 bytes) |
| `81 EC XX XX XX XX` | `sub esp, imm` (6 bytes) |
| `55 8B EC` | `push ebp; mov ebp, esp` (≥3) |

**Warning**: `push`/`pop` combined with ESP-relative addressing breaks Syringe relocation. Compute `min_safe_size` via IDA.

### 3. Add REVERSE Marker

```cpp
#include "gamemd/core/reverse_marker.hpp"

REVERSE(0x52BA60, "InitGame: master init pipeline (4333B)", true)
int InitGame(bool no_cd) {
    // Parameter names parsed from this declaration
}
```

### 4. Generate Hooks

```bash
cd injectFunctionTest
python gen_reverse_hooks.py
```

This script:
- Scans `src/`, `app/`, `include/gamemd/` for all `REVERSE(...)` markers
- Validates completion status via `functions.json`
- Checks callee dependencies via `callee_map.json`
- Parses parameter names from C++ function declarations
- Generates `gen/reverse_hooks.cpp` (DEFINE_HOOK stubs)
- Generates `gen/reverse_check.cpp` (`#pragma message` / `#error`)
- Exits with code 1 if any ERROR found

### 5. Build and Test

```bash
cmake --build build_hook --config Release
# Copy hook_dll.dll to game directory
# Launch: Syringe "gamemd.exe"
# Check: comparisonResult.log
```

## Headless Testing Commands

```bash
STATS              # {"ok":true,"mismatch_count":0}
REG                # {"ok":true,"re_eax":"0x...","in_shadow":false}
HOOKS              # {"ok":true,"mismatch_count":0}
MEM 0x812000 64    # {"ok":true,"data":"HEX..."}
SCREEN             # {"ok":true,"virtual":{"addr":"0x...","captured":true}}
WINDOW             # {"ok":true,"hwnd":"0x...","rect":[0,0,800,600]}
GETMOUSE           # {"ok":true,"screen":[x,y],"client":[x,y]}

ELEMENTS           # {"ok":true,"count":514}
ELEMENTS RESET     # clear buffer
ELEMENTS 0 5       # paginated element query

FOCUS              # SetForegroundWindow
MOUSEMOVE x y      # SetCursorPos + PostMessage WM_MOUSEMOVE
CLICKAT x y [left] # Move + click
DRAG x1 y1 x2 y2   # Press → interpolated drag → release
KEY 0x1B           # Key down + up (0x1B = ESC)
WAIT ms            # Sleep(ms), max 60000
QUIT               # ExitProcess(0)
```

## Generated Files

| File | Purpose |
|------|---------|
| `gen/reverse_hooks.cpp` | Generated DEFINE_HOOK stubs |
| `gen/reverse_check.cpp` | Compiler diagnostics (`#pragma`/`#error`) |

## Key Configuration

| Variable | Default | Purpose |
|----------|---------|---------|
| `HOOK_OUTPUT_DIR` | `../build_win/Debug` | DLL copy destination |
| `SHADOW_HEADLESS` | *(unset)* | TCP server on port 25400 |
| `SHADOW_PORT` | `25400` | TCP server port |
| `SHADOW_DATA_START` | `0x812000` | .data section start |
| `SHADOW_DATA_END` | `0xB7A000` | .data section end |

## Pipeline Files

| File | Purpose |
|------|---------|
| `include/gamemd/core/reverse_marker.hpp` | `REVERSE(addr, desc, enabled)` no-op macro |
| `injectFunctionTest/gen_reverse_hooks.py` | Marker scanner + hook generator + dependency checker |
| `injectFunctionTest/gen/reverse_hooks.cpp` | Generated DEFINE_HOOK stubs |
| `injectFunctionTest/gen/reverse_check.cpp` | Compiler diagnostics |
| `injectFunctionTest/hook_main.cpp` | DllMain + ExeRun server + NoCall summary |
| `injectFunctionTest/PostProcStub.asm` | Stack hijack + LogComparison |
| `injectFunctionTest/tls_storage.h` | `fs:[0x18]` TLS slot |
| `injectFunctionTest/shadow_txn.cpp` | Page-level memory transaction |
| `injectFunctionTest/headless_server.cpp` | TCP command server |
| `injectFunctionTest/element_tracker.cpp` | Render element capture |
| `injectFunctionTest/test_client.py` | Python TCP test client |
| `injectFunctionTest/fix_completed.py` | Fix JSON completion flags |
| `injectFunctionTest/enable_all.py` | Batch-enable REVERSE markers |
| `injectFunctionTest/callee_map.json` | Callee dependency data (39 functions, 10K names) |
| `injectFunctionTest/functions.json` | 19K function metadata (IDA export) |
| `decompile-results/gamemd.exe.map` | Function address → name lookup |
| `functionComparison.md` | This document |
