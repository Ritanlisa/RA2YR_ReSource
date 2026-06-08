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
2. Hook records input parameters (ECX/EDX/stack args) in per-function slot
3. Begin ShadowTransaction (page-level memory protection for .data)
4. Original return address on stack saved to TLS: s->original_ret_addr = R->Stack(0)
5. REPLACE stack return address: R->Stack(0, &PostProcStub)
6. return 0 → Syringe executes displaced bytes → JMP to function
7. ORIGINAL function runs (writes to .data captured by VEH + backed up)
8. Original function returns → RET pops PostProcStub address → enters PostProcStub
9. PostProcStub calls PostProcess(orig_eax, hook_addr):
   a. PostProcess rolls back ShadowTransaction (restores .data pages)
   b. PostProcess runs RE version on fully clean state with saved inputs
   c. PostProcess compares original vs RE results
   d. PostProcess logs to comparisonResult.log
   e. PostProcess returns RE result
10. PostProcStub returns RE result to original caller (jmp to original_ret_addr)
```

**Why this works**: The original function runs first, with all writes to .data captured by the page-level transaction (VEH backs up modified pages). After the original function returns, PostProcess rolls back every .data modification. The RE version then runs on a fully clean state identical to what the original function started with. The RE version's result replaces the original's, making this a transparent substitution. For Capture mode, PostProcStub is not used; inputs are logged directly in the hook body without stack hijacking.

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

// REVERSE(addr, description, mode)
// The NEXT line MUST contain the C++ function declaration with parameter names.
REVERSE(0x52BA60, "InitGame: master init pipeline (4333B)", "Replace")
int InitGame(bool no_cd) {
    // Parameter names parsed from this declaration → appear in log
}
```

`reverse_marker.hpp` defines REVERSE as a NO-OP macro:
```cpp
#define REVERSE(addr, desc, mode) \
    /* REVERSE_MARKER: addr desc enabled */
```

### 2.2 Code Generator (`gen_reverse_hooks.py`)

```bash
python gen_reverse_hooks.py
```

**Scanning phase**:
1. Walks `src/`, `app/`, `include/gamemd/` for `REVERSE(0xADDR, "desc", Hook_mode)` markers
2. Skips markers on comment lines (`// ` prefixed)
3. Parses the C++ function declaration on the NEXT line for parameter names
4. Looks up each address in `functions.json` for completion status + calling convention

### 2.3 Hook Modes
1. **None**: This function is only marked as a hook function, **won't apply any hooks**. Only raise warning when it's not completed
2. **Capture**: This function is marked as a hook function and **its hook will catch every input/output result to comparisonResult.log**. This hook won't affect original function. Only raise warning when it's not completed
3. **Inject**: This function **will replace the output of the origional Function and their output will both be written in comparisonResult.log**. Raise Error when it's not completed.
4. **Replace**: This fuction and its callee-functions need to be replaced (this means lib functions won't count in) **will all be replaced but callees won't be written in comparisonResult.log**. Raise Error when it's not completed or its callee-functions need to be replaced.

### Hook Modes Example

Original Execution Flow (ignore Argument Type Defines):
```
Entrance -> parent functions -> typeA FuncA(a1, a2) -> typeB FuncB(b1, b2) -> typeC LibFunc(c1, c2)
```
Our Target Functions:
```
Entrance -> parent functions -> typeA RepFuncA(a1, a2) -> typeB RepFuncB(b1, b2) -> typeC LibFunc(c1, c2)
```
In this Example, we need to test RepFuncA & RepFuncB:

---
**Normal Execution Flow (-> for call & <- for return):**
```
Entrance -> parent functions -> typeA FuncA(a1, a2) -> typeB FuncB(b1, b2) -> typeC LibFunc(c1, c2)
parent functions <- retValA <- FuncA <- retValB <- FuncB <- retValLibFunc <- LibFunc(c1, c2)
```

---
for **None** type Mode:
```cpp
REVERSE(0xADDR_FuncA, "desc", "None")
typeA RepFuncA(a1,a2)

REVERSE(0xADDR_FuncA, "desc", "None")
typeB RepFuncB(b1, b2)
```

**None Mode Execution Flow (-> for call & <- for return):**
```
Entrance -> parent functions -> typeA FuncA(a1, a2) -> typeB FuncB(b1, b2) -> typeC LibFunc(c1, c2)
parent functions <- retValA <- FuncA <- retValB <- FuncB <- retValLibFunc <- LibFunc(c1, c2)
```

---
for **Capture** type Mode:
```cpp
REVERSE(0xADDR_FuncA, "desc", "Capture")
typeA RepFuncA(a1,a2)

REVERSE(0xADDR_FuncA, "desc", "None")
typeB RepFuncB(b1, b2)
```

**Capture Mode Execution Flow (-> for call & <- for return):**
```
Entrance -> parent functions -> Hook (Record a1 & a2, stack hijack with FuncA_Retprocess)-> typeA FuncA(a1, a2) -> typeB FuncB(b1, b2) -> typeC LibFunc(c1, c2)
parent functions <- FuncA_Retprocess(print a1/a2/retValA as a full "Call" into comparisonResult.log) <- retValA <- FuncA <- retValB <- FuncB <- retValLibFunc <- LibFunc(c1, c2)
```

---
for **Inject** type Mode:
```cpp
REVERSE(0xADDR_FuncA, "desc", "Inject")
typeA RepFuncA(a1,a2)

REVERSE(0xADDR_FuncA, "desc", "None")
typeB RepFuncB(b1, b2)
```

**Inject Mode Execution Flow (-> for call & <- for return):**
```
Entrance -> parent functions -> Hook (Record a1 & a2, stack hijack with FuncA_Retprocess, ready to recover memory by page-protect/backup/something else) -> typeA FuncA(a1, a2) -> typeB FuncB(b1, b2) -> typeC LibFunc(c1, c2)
            FuncA_Retprocess(record a1/a2/retValA and recover memory) <- retValA <- FuncA <- retValB <- FuncB <- retValLibFunc <- LibFunc(c1, c2)
            FuncA_Retprocess -> typeA RepFuncA(a1, a2) -> typeB FuncB(b1, b2) -> typeC LibFunc(c1, c2)
parent functions <- FuncA_Retprocess(print a1/a2/retValA/retValRepA as a full "Call" into comparisonResult.log) <- retValRepA <- RepFuncA <- retValB <- FuncB <- retValLibFunc <- LibFunc(c1, c2)
```
If it would works like below would be better:
```
Entrance -> parent functions -> Hook (Record a1 & a2, stack hijack with FuncA_Retprocess, ready to recover memory by page-protect/backup/something else) -> typeA FuncA(a1, a2) -> Hook (Record b1/b2) -> typeB FuncB(b1, b2) -> typeC LibFunc(c1, c2)
            FuncA_Retprocess(record a1/a2/retValA and recover memory) <- retValA <- FuncA <- Hook (Record retValB) <- retValB <- FuncB <- retValLibFunc <- LibFunc(c1, c2)
            FuncA_Retprocess -> typeA RepFuncA(a1, a2) -> Calling Manager(check calling if match FuncB(b1, b2), assert any match exists)
parent functions <- FuncA_Retprocess(print a1/a2/retValA/retValRepA as a full "Call" into comparisonResult.log) <- retValRepA <- RepFuncA <- retValB <- Calling Manager
```

---
for **Replace** type Mode:
```cpp
REVERSE(0xADDR_FuncA, "desc", "Replace")
typeA RepFuncA(a1,a2)

REVERSE(0xADDR_FuncA, "desc", "None")
typeB RepFuncB(b1, b2)
```

**Replace Mode Execution Flow (-> for call & <- for return):**
```
Entrance -> parent functions -> Hook (Record a1 & a2, stack hijack with FuncA_Retprocess, ready to recover memory by page-protect/backup/something else) -> typeA FuncA(a1, a2) -> typeB FuncB(b1, b2) -> typeC LibFunc(c1, c2)
            FuncA_Retprocess(record a1/a2/retValA and recover memory) <- retValA <- FuncA <- retValB <- FuncB <- retValLibFunc <- LibFunc(c1, c2)
            FuncA_Retprocess -> typeA RepFuncA(a1, a2) -> typeB RepFuncB(b1, b2) -> typeC LibFunc(c1, c2)
parent functions <- FuncA_Retprocess(print a1/a2/retValA/retValRepA as a full "Call" into comparisonResult.log) <- retValRepA <- RepFuncA <- retValRepB <- RepFuncB <- retValLibFunc <- LibFunc(c1, c2)
```

---
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

### 2.4 Dependency Data

`callee_map.json` — 39 completed functions, ~10K unique callee names:
- Generated from IDA via `CodeRefsFrom` instruction-level scan
- Self-calls filtered
- Names deduplicated
- Updated: `python ida_extract.py` → re-run the callee scan

### 2.5 comparisonResult.log Format

```
============ Different Calls ============
[int InitGame(bool no_cd)-0x0052BA60]
Call 2: MainGame()<-0x0048CCCF
  Input:  no_cd(ECX)=false(0x00000004)
  Return: hook=1(0x00000001) | original=0(0x00000000)

============== None Calls ================
[int ParseCommandLine(int argc, char** argv)-0x0052F620]

================ Captures ================
[TechnoType* Toggle(TechnoType* Techno)-0x0052FC5A]
Call 2: MainGame()<-0x0048CCCF
  Input:  Techno*(ECX)={Techno Class, var1=0}(0xFA531AC4)
  Return: {Techno Class, var1=111}(0xFA531AC4)

============= Same Compares =============
[int InitGame(bool no_cd)-0x0052BA60]
Call 1: MainGame()<-0x0048CCCF
  Input:  no_cd(ECX)=false(0x00000004)
  Return: hook=original=0(0x00000000)

Call 3: MainGame()<-0x0048CCCF
  Input:  no_cd(ECX)=false(0x00000004)
  Return: hook=original=0(0x00000000)
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

## 8. 可能的陷阱

- `tls_storage.h` — `GetSlot()` inline 函数体引用任何新符号都会改变 DLL section 布局，导致 hook 静默失效
- `PostProcStub.asm` — 添加任何 `EXTERN` 会偏移 DLL 导出序数，使所有 hook 的 `GetProcAddress` 返回错误地址
- `gen/reverse_hooks.cpp` — 不在 git 跟踪中，`git checkout` 不更新，必须重新运行 `gen_reverse_hooks.py`
- `D:\RA2MD\` — Syringe 自动加载目录下所有带 `.syhks00` section 的 DLL，只能保留一个 `hook_dll.dll`
- `fs:[0x18]` — TIB Self 指针，非空闲槽位，当前通过 `InitTLS` 的 `__writefsdword` 覆盖使用
- ShadowTransaction — 保护 EXE `.data` 页无法回滚 DDraw 表面状态，渲染函数中使用会导致白屏
- `retn N` — 使用 callee-cleanup 的原函数（如 Fill 的 `retn 4`）需要 PostProcStub 补偿额外清理的字节

## 9. 待修复

- `PostProcStub.asm:60` — `mov eax,[ecx];jmp eax` 破坏 EAX 返回值
- `tls_storage.h` — `ShadowSlot` 缺 `stack_cleanup` 字段 (offset +0x10)
- `gen_reverse_hooks.py` — `comparisonResult.log` 需三文件直接写入
- `gen_reverse_hooks.py` FI_* — Input 显示 `rect(ECX)=...` 应为 `color=0xFF`
- `gen_reverse_hooks.py` — 函数头 `XSurface::Fill-0xADDR` 应为 `bool XSurface::Fill(uint32_t color)-0xADDR`

## 10. Current Status

| Metric | Value |
|--------|-------|
| Truly completed functions | **30** (faithful IDA translations) |
| REVERSE markers in source | **~32** (across 14 files, all disabled) |
| Completed + enabled hooks | **0** (pending dependency resolution) |
| Dependency callees tracked | **~10K unique** (callee_map.json) |
| Hook DLL build | **0 errors** |
| gamemd_core build | **0 errors** (1 pre-existing linker issue) |
| Verified at runtime | **1** (CellStruct::Set — 0 mismatches) |
