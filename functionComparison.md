# Function Comparison — Shadow Execution Framework

## Overview

The shadow execution framework (`injectFunctionTest/`) validates reverse-engineered C++ functions by hooking them into the original `gamemd.exe` at runtime. Each hooked function runs a **shadow execution** comparison:

```
Syringe injects hook_dll.dll
  ↓
DEFINE_HOOK intercepts function entry
  ↓
1. RE version runs with page-level memory transaction (all writes auto-rollback)
2. Original function runs on clean state
3. PostProcStub compares RE result vs original (EAX, EDX)
4. Mismatches logged to counter
```

---

## Architecture

```
injectFunctionTest/
├── hook_main.cpp         DllMain + ExeRun server init + VEH
├── shadow_txn.h/cpp      Page-level memory transaction (VirtualProtect + VEH)
├── tls_storage.h         fs:[0x18] TLS slot (RE result / orig ret addr)
├── PostProcStub.asm      Stack-hijack post-process comparison stub
├── headless_server.h/cpp TCP command server (dedicated thread)
├── element_tracker.h/cpp Render element tracking buffer
├── render_hooks.cpp      DSurface::Blit hook for element capture
├── test_hooks.cpp        Verified shadow hooks (CellStruct::Set)
│
├── ida_extract.py        IDA → functions.json (19,067 function metadata)
├── codegen.py            JSON → DEFINE_HOOK code generator
│
├── test_client.py        Python TCP test client
├── RunHeadlessTest.bat   One-click headless launch
└── CMakeLists.txt        MSVC 32-bit DLL build
```

### Build

```bash
cd injectFunctionTest
cmake -B build_hook -G "Visual Studio 17 2022" -A Win32 -DHOOK_OUTPUT_DIR="D:/RA2MD"
cmake --build build_hook --config Release
```

### Environment Variables

| Variable | Default | Purpose |
|----------|---------|---------|
| `HOOK_OUTPUT_DIR` | `../build_win/Debug` | DLL copy destination |
| `SHADOW_HEADLESS` | *(unset)* | Set to `1` to enable TCP server |
| `SHADOW_PORT` | `25400` | TCP port |
| `SHADOW_DATA_START` | `0x812000` | .data section start override |
| `SHADOW_DATA_END` | `0xB7A000` | .data section end override |

---

## Page-Level Memory Transaction

The core innovation. Instead of per-field backup (which requires knowing every write target via IDA analysis), we intercept writes at the **page level**:

```
ShadowTransaction::Begin()
  → VirtualProtect all 872 .data pages → PAGE_READONLY

RE version executes:
  → RE writes to page P → EXCEPTION_ACCESS_VIOLATION
  → VEH handler fires:
     → memcpy(backup_buffer, page_P, 4096)
     → VirtualProtect(page_P, PAGE_READWRITE)
     → Resume execution

ShadowTransaction::End()
  → Restore all backed-up pages from backup_buffer
```

### Why gamemd.exe is uniquely suited

| Property | Value |
|----------|-------|
| Thread model | **Single-threaded** (CreateThread = 0 xrefs) |
| .data section | 872 pages (3,571,712 bytes) |
| First protection cost | ~8.7ms (872 × VirtualProtect) |
| Per-page write cost | ~100μs (exception + 4KB memcpy + unprotect) |
| Typical RE overhead | <1ms (5-10 page writes) |

---

## Function Hook Requirements

### Safe First 5 Bytes

The biggest practical constraint. Syringe overwrites the first N bytes of a function with a `JMP` to its trampoline. The displaced bytes must NOT contain:

1. **ESP-modifying instructions followed by ESP-relative addressing** — the displaced `push/pop` changes ESP, causing subsequent `[esp+offset]` accesses to target wrong stack locations
2. **Relative jumps/calls** — addresses change when relocated to trampoline

### Safe Patterns

| Pattern | Example | Bytes |
|---------|---------|-------|
| `mov reg, [absolute]` | `A1 XX XX XX XX` | 5 ✓ |
| `mov [absolute], reg` | `89 0D XX XX XX XX` | 6 ✓ |
| `push ebp; mov ebp, esp` | `55 8B EC` | 3 (need 5+ for hook) |
| `sub esp, imm` | `81 EC XX XX XX XX` | 6 ✓ |
| `mov reg, imm32` | `B8 XX XX XX XX` | 5 ✓ |

### Unsafe Patterns

| Pattern | Issue |
|---------|-------|
| `push reg` + `mov eax, [esp+N]` | ESP changes → wrong offset after displacement |
| Any relative `jmp`/`call` in first 5 bytes | Target address invalid in trampoline |
| Instruction boundary doesn't align with 5/6 bytes | Partial instruction corruption |

---

## Headless Command Reference

### Query Commands

| Command | Returns |
|---------|---------|
| `ECHO <text>` | Echo back |
| `STATS` | `{ok, mismatch_count}` |
| `REG` | `{ok, re_eax, re_edx, orig_ret, in_shadow}` |
| `HOOKS` | `{ok, mismatch_count}` |
| `MEM <addr> <size>` | `{ok, addr, data:"HEX..."}` |
| `SCREEN` | `{ok, window, client_rect, virtual{buffer_addr, size}}` |
| `WINDOW` | `{ok, hwnd, rect, w, h}` |
| `GETMOUSE` | `{ok, screen:[x,y], client:[x,y]}` |
| `ELEMENTS` | `{ok, count, hint}` |
| `ELEMENTS <offset> <count>` | Paginated element list |
| `ELEMENTS RESET` | Clear element buffer |

### Input Simulation Commands

| Command | Action |
|---------|--------|
| `FOCUS` | SetForegroundWindow |
| `MOUSEMOVE <x> <y>` | SetCursorPos + PostMessage WM_MOUSEMOVE |
| `CLICK [left\|right]` | Mouse down/up at current position |
| `CLICKAT <x> <y> [left\|right]` | Move + click |
| `DRAG <x1> <y1> <x2> <y2> [left]` | Press→10-step interpolated drag→release |
| `KEY <vk_hex>` | Key down + up (30ms delay) |
| `KEYDOWN <vk_hex>` | Key press only |
| `KEYUP <vk_hex>` | Key release only |
| `WAIT <ms>` | Sleep (max 60000ms) |
| `QUIT` | ExitProcess(0) |

### Common VK Codes

| Key | VK Hex |
|-----|--------|
| ESC | 0x1B |
| ENTER | 0x0D |
| SPACE | 0x20 |
| LEFT | 0x25 |
| UP | 0x26 |
| RIGHT | 0x27 |
| DOWN | 0x28 |
| TAB | 0x09 |
| A-Z | 0x41-0x5A |

---

## Automated Testing Pipeline

### Phase 1: Single-Function Validation

```python
# test_client.py workflow for one function
FOCUS                           # ensure window active
WAIT 2000                       # let menu render
ELEMENTS RESET                  # start new frame
WAIT 200                        # collect one frame of blits
ELEMENTS 0 10                   # check what's on screen
STATS                           # mismatch counter should be 0
```

### Phase 2: Menu Navigation Test

```python
# Navigate: Main Menu → Campaign → Back → Main Menu
CLICKAT 479 160                 # Campaign button (425+54, 125+35)
WAIT 1000
ELEMENTS 0 5                    # verify Campaign screen elements
CLICKAT 479 360                 # Back button (approximate)
WAIT 1000
ELEMENTS 0 5                    # verify back at main menu
```

### Phase 3: Game Start Test

```python
# Start a skirmish game
CLICKAT 479 187                 # Skirmish button
WAIT 1000
CLICKAT 479 500                 # Start Game
WAIT 5000
STATS                           # check shadow execution results
ELEMENTS 0 10                   # check game rendering elements
QUIT
```

### Phase 4: Bulk Validation

1. Run `ida_extract.py` in IDA → generates `functions.json`
2. Mark completed functions with `hook.completed = true`
3. Run `codegen.py` → generates DEFINE_HOOK stubs for all completed
4. Rebuild hook DLL
5. Launch game with headless mode
6. Run automated test script
7. Parse STATS/ELEMENTS output to generate test report

---

## Adding a New Function Hook

### 1. Mark completion in JSON

```json
{
  "address": "0x42D470",
  "hook": {
    "completed": true,
    "re_file": "src/core/coordinate.cpp",
    "re_line": 42
  }
}
```

### 2. Write RE implementation

```cpp
// In gamemd_core (src/...):
extern "C" int MyFunction_shadow(int param1, int param2) {
    // Faithful IDA translation
    return param1 + param2;
}
```

### 3. Generate hook via codegen

```bash
python codegen.py
# → gen/hooks_gen.cpp with DEFINE_HOOK macros
```

### 4. Build and test

```bash
cmake --build build_hook --config Release
# Copy DLL, launch game, run test client
```

### 5. Verify results

```bash
python test_client.py STATS
# {"ok":true,"mismatch_count":0} ← verified!
```

---

## Currently Completed Functions (~103)

See `injectFunctionTest/functions.json` for full metadata. Key categories:

| Category | Count | Examples |
|----------|-------|----------|
| Entry/Init | 15 | WinMain, ParseCommandLine, InitGame, DDrawInitialize |
| Menu System | 12 | MenuSelect, MainMenu, CampaignScreen, OptionsScreen |
| MIX/IO | 20 | MixFileClass (parser + bootstrap), CCFileClass, INIClass |
| Blowfish | 15 | Encipher, Decipher, ComputeBlowfishKey, bignum ops |
| Object Hierarchy | 14 | AbstractClass, ObjectClass, TargetClass |
| COM | 5 | RegisterClassCOM, CopyProtection |
| Coordinates | 6 | CoordMove, Direction8, AdjacentCell, IsCloseEnough |
| Render | 5 | DSurface, BinkPlayerControl, ConvertClass |
| Misc | 8 | InitRules, LoadExpansionMixFiles, InitBulkData |

---

## Troubleshooting

| Symptom | Cause | Fix |
|---------|-------|------|
| Game crashes on startup | Hook address not at function entry | Verify with `ida_extract.py` output |
| "程序试图写入..." in log | Page protection interfering with audio callbacks | Only happens if shadow txn is active during audio → ensure single-threaded path |
| ELEMENTS returns 0 | Blit hook not installed | Check `render_hooks.cpp` is compiled in |
| Headless client timeout | Server not started (DllMain → CreateThread deadlock) | Ensure server starts from ExeRun hook (0x7CD810), not DllMain |
| Mismatch count > 0 | RE version logic differs from original | Compare EAX in PostProcStub, check stack parameters |
| PostProcStub crash | Wrong calling convention assumption | Verify function uses correct stack cleanup (ret N vs ret) |
