# RA2YR ReSource — Function Comparison Pipeline

## 1. Architecture Overview

The shadow execution framework validates reverse-engineered C++ functions against the original `gamemd.exe` binary at runtime. Three key mechanisms work together:

```
┌─ Syringe (injector) ───────────────────────────────────────┐
│  1. CREATE_SUSPENDED → INT3 at entry point (0x7CD80F)      │
│  2. Inject cLoadLibrary machine code → resolve hook addrs   │
│  3. Write JMP (5 bytes) at each hook address → trampoline   │
│  4. DebugActiveProcessStop → detach, hooks active           │
└─────────────────────────────────────────────────────────────┘
                                 ↓
┌─ hook_dll.dll (injected) ───────────────────────────────────┐
│  DllMain: InitTLS → InstallVEH → (wait for ExeRun)         │
│  ExeRun hook (0x7CD810): StartServer + InitNames            │
│  Per-function hooks: save regs → RE version → hijack stack  │
│  PostProcStub: compare RE vs original → LogComparison       │
│  DLL_PROCESS_DETACH: WriteNoCallSummary                     │
└─────────────────────────────────────────────────────────────┘
```

### 1.1 Stack Hijacking — How PostProcStub Works

The core innovation. When our hook fires at function entry:

```
1. Hook saves all registers (PUSHAD/PUSHFD by Syringe trampoline)
2. RE version runs with page-level memory transaction
3. RE result stored in TLS (fs:[0x18])
4. Original return address on stack: R->Stack<DWORD>(0)
5. REPLACE stack return address: R->Stack(0, &PostProcStub)
6. return 0 → Syringe executes displaced bytes → JMP back to function
7. Original function runs normally → RET pops PostProcStub address
8. PostProcStub: EAX=original result, compares with TLS RE result
9. LogComparison called with (orig_result, hook_addr) → writes to file
10. PostProcStub: mov eax, [original_ret_addr]; jmp eax → returns to caller
```

**Why this works**: The original function runs on CLEAN state (RE's modifications were rolled back by the page transaction). The stack is restored by Syringe's POPFD/POPAD before the displaced bytes execute. The function's `ret` instruction pops our hijacked address, landing in PostProcStub with EAX=return value.

### 1.2 Page-Level Memory Transaction

```
ShadowTransaction::Begin()
  → VirtualProtect all 872 .data pages (0x812000-0xB7A000) → PAGE_READONLY

RE version executes:
  → RE writes to page P → EXCEPTION_ACCESS_VIOLATION (write=1)
  → VEH handler (AddVectoredExceptionHandler):
     → memcpy(backup_buffer, page, 4096)   // backup entire 4KB page
     → VirtualProtect(page, PAGE_READWRITE) // unprotect
     → EXCEPTION_CONTINUE_EXECUTION         // retry the write

ShadowTransaction::End()
  → For each backed-up page:
     → VirtualProtect(page, PAGE_READWRITE)
     → memcpy(page, backup, 4096)  // restore original content
     → VirtualProtect(page, PAGE_READONLY) // re-protect for next call
```

**TLS slot layout** (fs:[0x18], avoids Syringe's fs:[0x14]):

| Offset | Field | Purpose |
|--------|-------|---------|
| +0x00 | original_ret_addr | Caller return address (before hijack) |
| +0x04 | re_result_eax | RE version's EAX output |
| +0x08 | re_result_edx | RE version's EDX output |
| +0x0C | hook_addr | Current hook function address |
| +0x10 | transaction | Active ShadowTransaction* (null if none) |
| +0x14 | in_shadow | bool: currently in shadow execution |

### 1.3 VEH Exception Handler

```cpp
// Install: AddVectoredExceptionHandler(1, handler) — called in DllMain
LONG CALLBACK VEHHandler(PEXCEPTION_POINTERS info) {
    if (code != EXCEPTION_ACCESS_VIOLATION) return CONTINUE_SEARCH;
    if (access_type != 1) return CONTINUE_SEARCH;  // only WRITE violations

    Transaction* txn = Transaction::Current();  // from fs:[0x18]
    if (!txn) {
        // No active transaction → just unprotect
        VirtualProtect(page, 4096, PAGE_READWRITE, &old);
        return CONTINUE_EXECUTION;
    }

    txn->OnWriteViolation(fault_addr);  // backup + unprotect
    return CONTINUE_EXECUTION;  // retry the write
}
```

**Why gamemd.exe can use page-level transactions**:
- Single-threaded (CreateThread/InitializeCriticalSection = 0 xrefs)
- No VEH conflicts with other threads
- .data section: 872 pages (3,571,712 bytes)
- First call overhead: ~8.7ms (872 × VirtualProtect)
- Subsequent calls: ~50μs (re-protect only dirty pages)

## 2. REVERSE Pipeline

### 2.1 Source Marking

```cpp
#include "gamemd/core/reverse_marker.hpp"

// REVERSE(addr, description, enabled)
// The NEXT line MUST contain the C++ function declaration with parameter names.
REVERSE(0x52BA60, "InitGame: master init pipeline (4333B)", true)
int InitGame(bool no_cd) {
    // Parameter names parsed from this declaration → appear in log
}
```

`reverse_marker.hpp` defines REVERSE as a NO-OP macro:
```cpp
#define REVERSE(addr, desc, enabled) \
    /* REVERSE_MARKER: addr desc enabled */
```

### 2.2 Code Generator (`gen_reverse_hooks.py`)

```bash
python gen_reverse_hooks.py
```

**Scanning phase**:
1. Walks `src/`, `app/`, `include/gamemd/` for `REVERSE(0xADDR, "desc", true/false)` markers
2. Skips markers on comment lines (`// ` prefixed)
3. Parses the C++ function declaration on the NEXT line for parameter names
4. Looks up each address in `functions.json` for completion status + calling convention

**Validation phase**:
| Condition | Severity | Action |
|-----------|----------|--------|
| addr not found in `functions.json` | ERROR | exits with sys.exit(1) |
| `completed:false` + `enabled:true` | ERROR | exits with sys.exit(1) |
| `completed:false` + `enabled:false` | WARNING | compiler `#pragma message` |
| FuncA(enabled) calls FuncB(uncompleted) | ERROR | blocked until dep completed |
| FuncA(disabled) calls FuncB(uncompleted, no REVERSE marker) | WARNING | `#pragma message` |
| Library function (CRT/MSVC) in callees | SKIP | `is_lib()` filter |

**Library function filter** (`is_lib()`):
```python
# Excluded from dependency warnings:
name.startswith(('??', '__', '?_', '?$'))  # MSVC name-mangled operators
name.startswith('_') and name[1].isalpha() # _malloc, _free, etc.
name.startswith(('j_', 'nullsub', 'unknown_libname'))
name in ('Debug::Log', 'Debug::Log_0')
```

**Generation phase**:
1. Reads `decompile-results/gamemd.exe.map` (segment `0001:` only) for caller name lookup
2. Embeds 8,000 function address→name entries as binary search array
3. Generates `gen/reverse_hooks.cpp` — DEFINE_HOOK stubs with:
   - Register capture (all 8 GPRs)
   - Parameter-name-to-register mapping (from C++ signature + calling convention)
   - Stack hijack setup
   - LogComparison callback
4. Generates `gen/reverse_check.cpp` — `#pragma message` / `#error` for compiler diagnostics

### 2.3 Dependency Data

`callee_map.json` — 39 completed functions, ~10K unique callee names:
- Generated from IDA via `CodeRefsFrom` instruction-level scan
- Self-calls filtered
- Names deduplicated
- Updated: `python ida_extract.py` → re-run the callee scan

### 2.4 comparisonResult.log Format

```
[InitGame-0x0052BA60]
Call 1: MainGame()<-0x0048CCCF
  Input:  no_cd(ECX)=0x00000004
  Return: hook=0x00000000    |    original=0x00000000

[ParseCommandLine-0x0052F620]
No Call
```

| Field | Source |
|-------|--------|
| `InitGame` | `functions.json` function name |
| `0x0052BA60` | REVERSE macro address |
| `MainGame()` | `gamemd.exe.map` binary search lookup |
| `<-0x0048CCCF` | return_address - 5 (CALL instruction site) |
| `no_cd(ECX)` | Parameter name from C++ declaration + calling convention mapping |
| `hook=` / `original=` | PostProcStub comparison (EAX values) |
| `No Call` | Written at `DLL_PROCESS_DETACH` by `WriteNoCallSummary()` |

## 3. Hook Safety Constraints

### 3.1 First-Byte Safety

Syringe overwrites N bytes at the hook address with a JMP. The displaced bytes must NOT contain:

| Pattern | Issue |
|---------|-------|
| `push reg` + ESP-relative addressing | Displaced `push` changes ESP → wrong `[esp+N]` offsets |
| Relative `jmp`/`call` in first N bytes | Address changes when relocated to trampoline |
| Instruction spanning hook boundary | Partial instruction corruption → garbage opcode |

**Safe patterns**:
| Bytes | Instruction | Hook Size |
|-------|------------|-----------|
| `B8 XX XX XX XX` | `mov eax, imm32` | 5 |
| `A1 XX XX XX XX` | `mov eax, [absolute]` | 5 |
| `81 EC XX XX XX XX` | `sub esp, imm` | 6 |
| `8B 0D XX XX XX XX` | `mov ecx, [absolute]` | 6 |

`min_safe_size` is computed per-function in `functions.json` via IDA instruction boundary analysis.

### 3.2 Calling Convention Mapping

| Convention | this pointer | Parameter 1 | Parameter 2 | Parameter 3+ |
|------------|-------------|-------------|-------------|-------------|
| `thiscall` | ECX | [ESP+4] | [ESP+8] | [ESP+12] |
| `stdcall` | — | [ESP+4] | [ESP+8] | [ESP+12] |
| `cdecl` | — | [ESP+4] | [ESP+8] | [ESP+12] |
| `fastcall` | — | ECX | EDX | [ESP+4] |

`gen_reverse_hooks.py` reads `call.convention` from `functions.json` and generates correct register extraction per function.

## 4. Headless Testing Infrastructure

### 4.1 TCP Command Server

Starts from ExeRun hook (0x7CD810), runs on dedicated thread. Commands:

| Command | Response |
|---------|----------|
| `STATS` | `{"ok":true,"mismatch_count":0}` |
| `REG` | `{"ok":true,"re_eax":"...","in_shadow":false}` |
| `HOOKS` | `{"ok":true,"mismatch_count":0}` |
| `MEM addr size` | `{"ok":true,"data":"HEX..."}` |
| `SCREEN` | `{"ok":true,"virtual":{"addr":"...","captured":true}}` |
| `WINDOW` | `{"ok":true,"hwnd":"...","rect":[0,0,800,600]}` |
| `GETMOUSE` | `{"ok":true,"screen":[x,y],"client":[x,y]}` |
| `ELEMENTS` | `{"ok":true,"count":514}` |
| `ELEMENTS reset` | Clear element buffer |
| `ELEMENTS offset count` | Paginated query |
| `FOCUS` | SetForegroundWindow |
| `MOUSEMOVE x y` | SetCursorPos + PostMessage WM_MOUSEMOVE |
| `CLICKAT x y [left/right]` | Move + click |
| `DRAG x1 y1 x2 y2` | Press → 10-step interpolated drag → release |
| `KEY vk` | Key down + up (vk in hex) |
| `WAIT ms` | Sleep(ms), max 60000 |
| `QUIT` | ExitProcess(0) |

### 4.2 Render Element Tracking

`DSurface::Blit` hook (0x4BB0D0) intercepts all surface blits. 4,096-slot ring buffer records:
- Type (SHP/BINK/TEXT/RECT/VXL)
- Screen position + dimensions
- Source surface address (low 16 bits exposed)
- Timestamp

### 4.3 Input Simulation

`PostMessage` (not `SendInput`) is used for compatibility with the game's message pump:
- `MOUSEMOVE`: SetCursorPos + PostMessage(WM_MOUSEMOVE)
- `CLICKAT`: ScreenToClient → PostMessage(WM_LBUTTONDOWN) → Sleep(50) → PostMessage(WM_LBUTTONUP)
- `KEY`: PostMessage(WM_KEYDOWN) → Sleep(30) → PostMessage(WM_KEYUP)

## 5. Adding a New Function — Step by Step

### 5.1 Complete the C++ implementation
```cpp
// Must be a FAITHFUL translation from IDA, not a stub
int InitGame(bool no_cd) {
    // ...[888 lines matching IDA @ 0x52BA60]...
}
```

### 5.2 Mark completion in functions.json
```json
{
  "address": "0x52BA60",
  "hook": { "completed": true, "re_file": "src/core/init_game.cpp" }
}
```

### 5.3 Verify first-byte safety
From IDA: `python ida_extract.py` → check `min_safe_size` in functions.json.
Must be ≥ 5 and not contain push/call/relative-jmp in displacement zone.

### 5.4 Add REVERSE marker
```cpp
#include "gamemd/core/reverse_marker.hpp"
REVERSE(0x52BA60, "InitGame: master init pipeline", true)
int InitGame(bool no_cd) { ... }
```

### 5.5 Generate hooks + check dependencies
```bash
cd injectFunctionTest
python gen_reverse_hooks.py
# Fix any ERRORs before proceeding to build
```

### 5.6 Build and test
```bash
cmake --build build_hook --config Release
# Copy DLL, launch game, check comparisonResult.log
```

## 6. Key Files

| File | Purpose |
|------|---------|
| `injectFunctionTest/PostProcStub.asm` | Stack hijack + result comparison + LogComparison call |
| `injectFunctionTest/shadow_txn.cpp` | Page-level memory transaction (VirtualProtect + VEH) |
| `injectFunctionTest/tls_storage.h` | `fs:[0x18]` TLS slot layout |
| `injectFunctionTest/gen_reverse_hooks.py` | Scanner + validator + code generator |
| `injectFunctionTest/gen/reverse_hooks.cpp` | Generated DEFINE_HOOK stubs (auto) |
| `injectFunctionTest/gen/reverse_check.cpp` | Compiler diagnostics (auto) |
| `injectFunctionTest/headless_server.cpp` | TCP command server |
| `injectFunctionTest/element_tracker.cpp` | Render element capture |
| `injectFunctionTest/render_hooks.cpp` | DSurface::Blit interception |
| `injectFunctionTest/test_client.py` | Python TCP client |
| `include/gamemd/core/reverse_marker.hpp` | REVERSE(addr, desc, enabled) no-op macro |
| `decompile-results/gamemd.exe.map` | Function address→name (segment 0001) |
| `injectFunctionTest/functions.json` | 19K function metadata (IDA export) |
| `injectFunctionTest/callee_map.json` | Dependency graph (39 funcs, 10K names) |

## 7. Configuration

| Variable | Default | Purpose |
|----------|---------|---------|
| `HOOK_OUTPUT_DIR` | `../build_win/Debug` | DLL copy destination |
| `SHADOW_HEADLESS` | *(unset)* | TCP server on port 25400 |
| `SHADOW_PORT` | `25400` | TCP server port |
| `SHADOW_DATA_START` | `0x812000` | .data section start |
| `SHADOW_DATA_END` | `0xB7A000` | .data section end |

## 8. Current Status

| Metric | Value |
|--------|-------|
| Completed rendering functions | **13** (faithful IDA translations) |
| REVERSE markers | **13 active** (Capture mode) + **~32 disabled** (None mode) |
| Hook modes tested | **Capture ✅ Inject ✅ Replace ⏳** |
| comparisonResult.log sections | **3-section dynamic insertion** (Capture/Different/Same) |
| Hook DLL build | **0 errors, 0 C4129 warnings** |
| gamemd_core build | **0 errors** |
| CMake single-build | **gamemd.exe + hook_dll.dll** in one command |
| Verified at runtime | **Fill (Capture & Inject), 12 rendering functions (Capture)** |
| Not hookable (ESP-relative) | **ClipRectIntersection** (min_safe_size=0) |
| Verified at runtime | **1** (CellStruct::Set — 0 mismatches) |
