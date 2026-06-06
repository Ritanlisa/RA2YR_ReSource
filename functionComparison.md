# REVERSE Pipeline — Function Comparison Methodology

## Overview

The REVERSE pipeline validates every reverse-engineered C++ function against the original `gamemd.exe` binary at runtime. Hook injection via Syringe, stack hijacking to capture return values, and page-level memory transactions ensure side-effect-free validation.

## Architecture

```
Source code:  REVERSE(0xADDR, "desc", true/false)
                   ↓
gen_reverse_hooks.py:  scan → check completion → generate DEFINE_HOOK
                   ↓
reverse_hooks.cpp:  compiled into hook_dll.dll
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

## Step-by-Step: Adding a New Function

### 1. Verify First-Byte Safety

From IDA: function's first instruction must fit within hook boundary. The generator reads `min_safe_size` from `functions.json`.

| Bytes | Example | Hook Size |
|-------|---------|-----------|
| `B8 XX XX XX XX` | `mov eax, imm32` | 5 |
| `A1 XX XX XX XX` | `mov eax, [absolute]` | 5 |
| `81 EC XX XX XX XX` | `sub esp, imm` | 6 |
| `55 8B EC` | `push ebp; mov ebp, esp` | ≥3 |

**Warning**: Any `push`/`pop` in first N bytes combined with ESP-relative addressing causes Syringe relocation bugs. Test with `ida_extract.py` → check `min_safe_size`.

### 2. Mark Function Completion

In `mark_completed.py` or directly in `functions.json`:
```json
{
  "address": "0x52BA60",
  "hook": {
    "completed": true,
    "re_file": "src/core/init_game.cpp"
  }
}
```

### 3. Add REVERSE Marker in Source

```cpp
#include "gamemd/core/reverse_marker.hpp"

REVERSE(0x52BA60, "InitGame: master init pipeline (4333B)", true)
int InitGame(bool no_cd) {
    // Parameter names are parsed from this declaration
}
```

### 4. Run Code Generator

```bash
cd injectFunctionTest
python gen_reverse_hooks.py
```

The generator:
- Scans `src/`, `app/`, `include/gamemd/` for `REVERSE(..., true)` markers
- Checks `functions.json` completion status:
  - `completed=false` + `enabled=true` → **ERROR** (build fails)
  - `completed=false` + `enabled=false` → **WARNING** (compiler `#pragma message`)
  - `completed=true` + `enabled=true` → OK, generates hook
- Parses C++ function declaration for parameter names
- Reads `decompile-results/gamemd.exe.map` (segment `0001:`) for caller lookup
- Generates `gen/reverse_hooks.cpp` (DEFINE_HOOK stubs)
- Generates `gen/reverse_check.cpp` (`#pragma`/`#error` diagnostics)

### 5. Build and Test

```bash
cmake --build build_hook --config Release
# Copy hook_dll.dll to game directory
# Launch: Syringe "gamemd.exe" -cd
# Check: comparisonResult.log
```

### 6. Interpret Results

```
[InitGame-0x0052BA60]
Call 1: MainGame()<-0x0048CCCF
  Input:  no_cd(ECX)=0x00000004
  Return: hook=0x00000000    |    original=0x00000000
```

| Field | Meaning |
|-------|---------|
| `InitGame` | Function name (from REVERSE marker) |
| `0x0052BA60` | IDA address |
| `Call 1` | Call counter |
| `MainGame()` | Caller function (from .map binary search) |
| `<-0x0048CCCF` | Call site address = return_addr - 5 |
| `no_cd(ECX)` | Parameter name (from C++ declaration) + register |
| `0x00000004` | Register value at hook entry |
| `hook=0x0` | RE version return value |
| `original=0x0` | Original function return value |
| `No Call` | Function hooked but never invoked |

## completionResult.log Format

All hooked functions appear in the log:

```
[FunctionName-0xADDRESS]
Call 1: CallerName()<-0xCALLSITE
  Input:  param(REG)=0xVAL  [param2(REG)=0xVAL ...]
  Return: hook=0xRE    |    original=0xORIG

[AnotherFunc-0xADDRESS]
No Call
```

- Functions that were **called**: header + Call entries
- Functions **never called**: header + "No Call"
- Summary written at `DLL_PROCESS_DETACH`

## Completion Check System

| Status | enabled=true | enabled=false |
|--------|-------------|---------------|
| **completed** | ✅ Generates hook | ✅ Skipped (no hook) |
| **NOT completed** | ❌ Build ERROR | ⚠️ Compiler WARNING |

Generated `reverse_check.cpp` produces:
- `#pragma message("WARNING: ...")` for uncompleted + disabled
- `#error "ERROR: ..."` for uncompleted + enabled → build fails

## Headless Testing

```bash
# Terminal 1: Launch with headless server
set SHADOW_HEADLESS=1
Syringe "gamemd.exe" -cd

# Terminal 2: Query and control
python test_client.py STATS          # mismatch count
python test_client.py ELEMENTS 0 10  # render elements
python test_client.py CLICKAT 479 160  # click Campaign button
python test_client.py QUIT           # clean exit
```

## Key Files

| File | Purpose |
|------|---------|
| `gen_reverse_hooks.py` | Marker scanner + hook generator |
| `gen/reverse_hooks.cpp` | Generated DEFINE_HOOK stubs |
| `gen/reverse_check.cpp` | Compiler diagnostics |
| `reverse_marker.hpp` | `REVERSE(addr, desc, enabled)` macro |
| `hook_main.cpp` | DllMain + ExeRun server + NoCall summary |
| `PostProcStub.asm` | Stack hijack + LogComparison |
| `tls_storage.h` | `fs:[0x18]` TLS slot |
| `shadow_txn.cpp` | Page-level memory transaction |
| `test_client.py` | Python TCP test client |
| `gamemd.exe.map` | Function address → name lookup |
| `functions.json` | 19K function metadata (IDA export) |

## Configuration

| Variable | Default | Purpose |
|----------|---------|---------|
| `HOOK_OUTPUT_DIR` | `../build_win/Debug` | DLL destination |
| `SHADOW_HEADLESS` | *(unset)* | TCP server enable |
| `SHADOW_PORT` | `25400` | TCP port |
| `SHADOW_DATA_START` | `0x812000` | .data start |
| `SHADOW_DATA_END` | `0xB7A000` | .data end |
