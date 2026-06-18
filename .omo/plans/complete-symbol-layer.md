# Complete Symbol Layer — 全符号声明层补全

## TL;DR

> **Quick Summary**: Generate C++ `extern` declarations with IDA address annotations for all ~8,285 global/free functions and ~754 new global variables. Zero implementations — pure declaration layer with `cmake --build` 0/0 compile gate.
>
> **Deliverables**:
> - `src/*/_funcs.hpp` — global function declarations by module (7 files)
> - `src/*/globals_*.hpp` — extern global variable declarations by module (6 files)
> - Top-200 most-referenced globals: type-fixed + renamed
> - Generator self-check: duplicate detection + coverage assertion
>
> **Estimated Effort**: Large
> **Parallel Execution**: YES — 5 waves
> **Critical Path**: IDA extraction → Function generation → Global generation → Type fix → Build verification

---

## Context

### Original Request
补全所有函数的定义和全局变量的定义（只定义不实现），修正全局变量类型并重命名常用全局变量。

### Interview Summary
**Key Discussions**:
- **Class members excluded**: 7,936 member methods already in 1,120 complete class headers → implementation phase TBD
- **Scope narrowed**: ~8,285 global/free functions + ~1,489 engine globals (−687 defined −48 extern = ~754 new)
- **Output format**: extern-only headers for globals, stub declarations for functions
- **Organization**: module-split (src/*/ subdirectories), extend existing globals.cpp pattern
- **Type inference**: smart mode using purity_effects.json R/W patterns + IDA xref context
- **R3 definition**: top-200 most-referenced globals from purity_effects.json (≥5 xref sites + ≥2 contexts for rename)

**Research Findings**:
- functions.json: 19,067 entries; 8,285 global/free, 50 completed, 30 re_file mapped → skip
- IDA MCP: 9,974 .data items; 7,602 strings, 988 RTTI → 1,489 engine globals
- 632 globals have IDA types, 857 need inference
- 687 globals already defined in 30 .cpp files → auto-exclude
- ~48 globals already extern-declared in 6 headers → auto-exclude

### Metis Review
**Identified Gaps** (addressed):
- **Member collision**: Resolved — class members out of scope
- **Duplicate definition risk**: Resolved — extern-only headers, auto-exclude set from .cpp scan
- **Namespace ambiguity**: Resolved — derive from existing class header pattern
- **Type inference fidelity**: Resolved — smart inference with confidence annotations
- **functions.json mutation risk**: Resolved — read-only access confirmed

---

## Work Objectives

### Core Objective
Generate C++ `extern` declarations with IDA address annotations for all global/free functions and engine global variables missing from the codebase, with type fixes for the top-200 most-referenced globals — verified by `cmake --build` producing 0 errors, 0 warnings.

### Concrete Deliverables
- 7 `_funcs.hpp` files with ~8,285 function declarations (address-annotated, stubs where needed)
- 6 `globals_*.hpp` files with ~754 new extern global declarations
- Top-200 globals: corrected types + semantic renames
- `tools/verify_decls.py` — coverage assertion script
- `tools/detect_duplicates.py` — duplicate symbol self-check

### Definition of Done
- [ ] `cmake --build build_win` → 0 errors, 0 warnings
- [ ] `cmake --build build_linux` → 0 errors, 0 warnings
- [ ] `python tools/verify_decls.py` → `functions: 8285/8285 | globals: 754/754`
- [ ] `python tools/detect_duplicates.py` → `DUPLICATES: 0`
- [ ] Top-200 globals: type field != "UNKNOWN" AND rename applied where qualified

### Must Have
- Every declaration has `// IDA: 0xADDR` comment
- No duplicate symbol definitions (one-definition rule)
- Completed functions (hook.completed=true) preserved, not overwritten
- REVERSE-marked functions preserved, not overwritten
- Build is 0/0 on both Windows and Linux

### Must NOT Have (Guardrails)
- No function implementations (bodies are stubs: `{ return {}; }` or `{ /* TODO */ }`)
- No overwriting existing completed function implementations (hook.completed=true)
- No class header modifications (member methods out of scope)
- No IDA writes (rename/idb_save) — read-only extraction
- No CMakeLists.txt changes (GLOB_RECURSE left intact)
- No functions.json mutations
- No reordering/deletion of existing member variables or vtable entries

---

## Verification Strategy

> **ZERO HUMAN INTERVENTION** — ALL verification is agent-executed. No exceptions.

### Test Decision
- **Automated tests**: NONE (declarations only, no runtime behavior to test)
- **Acceptance gate**: `cmake --build build_win` → 0 errors, 0 warnings
- **Cross-validation**: `cmake --build build_linux` → 0 errors, 0 warnings
- **Self-checks**: Python verify scripts for coverage + duplicate detection

### QA Policy
Every task MUST include agent-executed QA scenarios. Evidence saved to `.omo/evidence/task-{N}-{scenario-slug}.{ext}`.

- **Build**: Use bash — cmake configure + build, capture output, assert 0/0
- **Script output**: Use bash — run Python verify scripts, assert expected output
- **IDA extraction**: Use bash — run Python scripts, validate JSON output schema

---

## Execution Strategy

### Parallel Execution Waves

```
Wave 1 (Start Immediately — IDA extraction + codebase scanning):
├── Task 1:  IDA global variable extraction script [deep]
├── Task 2:  Build auto-exclude set from existing .cpp/.hpp [quick]
├── Task 3:  Filter functions.json to global/free scope [quick]
└── Task 4:  Build type inference database from purity + IDA xref [deep]

Wave 2 (After Wave 1 — function declarations, MAX PARALLEL):
├── Task 5:  Organize functions by module [quick]
├── Task 6:  Generate _funcs.hpp — core/app [quick]
├── Task 7:  Generate _funcs.hpp — entity [quick]
├── Task 8:  Generate _funcs.hpp — object [quick]
├── Task 9:  Generate _funcs.hpp — system [quick]
├── Task 10: Generate _funcs.hpp — render/ui [quick]
├── Task 11: Generate _funcs.hpp — structure/house/team [quick]
└── Task 12: Generate _funcs.hpp — misc/network/type [quick]

Wave 3 (After Wave 2 — global variable declarations, MAX PARALLEL):
├── Task 13: Organize globals by module [quick]
├── Task 14: Generate globals_X.hpp — core [quick]
├── Task 15: Generate globals_X.hpp — render [quick]
├── Task 16: Generate globals_X.hpp — objects [quick]
├── Task 17: Generate globals_X.hpp — structures [quick]
├── Task 18: Generate globals_X.hpp — system/misc/network [quick]
├── Task 19: Generate globals_X.hpp — entity/house/team [quick]
└── Task 20: Apply smart type inference [deep]

Wave 4 (After Wave 3 — type fix + rename):
├── Task 21: Select top-200 globals from purity_effects.json [quick]
├── Task 22: IDA xref analysis batch 1 (globals 1-100) [deep]
├── Task 23: IDA xref analysis batch 2 (globals 101-200) [deep]
├── Task 24: Apply type fixes batch 1 [quick]
├── Task 25: Apply type fixes batch 2 [quick]
└── Task 26: Rename qualified globals [quick]

Wave 5 (After Wave 4 — verification):
├── Task 27: Windows build verification [quick]
├── Task 28: Linux cross-compile verification [quick]
├── Task 29: Duplicate detection self-check [quick]
└── Task 30: Coverage count assertion [quick]

Critical Path: Task 1 → Task 5 → Task 13 → Task 20 → Task 21 → Task 27 → F1-F4
Parallel Speedup: ~75% faster than sequential
Max Concurrent: 8 (Waves 2 & 3)
```

---

## TODOs

- [x] 1. IDA global variable extraction script

  **What to do**:
  - Write `tools/extract_globals.py` that queries IDA MCP via `entity_query(kind="globals")` for all .data segment entries
  - Filter out: string constants (`a[A-Z]*` pattern), RTTI descriptors (`??_R*`, `??_7*`), code labels (`loc_*`, `jpt_*`, `def_*`)
  - For each retained global, extract: name, addr (hex), size (bytes), segment, type (via `ida_nalt.get_tinfo` if available)
  - Output `tools/globals_extracted.json` — array of `{name, addr, size, segment, ida_type, has_type}`
  - Validate: `len(json) ≈ 1489` (engine globals), `sum(has_type) ≈ 632`, `sum(not has_type) ≈ 857`

  **Must NOT do**:
  - Do NOT write to IDA (no rename/idb_save)
  - Do NOT modify functions.json or any REVERSE pipeline file

  **Recommended Agent Profile**:
  - **Category**: `deep`
    - Reason: Complex IDA MCP interaction + Python scripting + data validation
  - **Skills**: None needed

  **Parallelization**:
  - **Can Run In Parallel**: YES
  - **Parallel Group**: Wave 1 (with Tasks 2, 3, 4)
  - **Blocks**: Tasks 5, 13 (all downstream tasks)
  - **Blocked By**: None (can start immediately)

  **Acceptance Criteria**:
  - [ ] `python tools/extract_globals.py` runs without error
  - [ ] `tools/globals_extracted.json` exists with valid JSON
  - [ ] Entry count between 1400-1600 (target ~1489)
  - [ ] Each entry has `name`, `addr`, `size`, `segment` fields
  - [ ] No a* string constants in output
  - [ ] No ??_R* / ??_7* RTTI entries in output

  **QA Scenarios**:

  ```
  Scenario: Extraction produces valid JSON with correct schema
    Tool: Bash (pwsh)
    Preconditions: IDA MCP server running at 127.0.0.1:13337, gamemd.exe.i64 loaded
    Steps:
      1. Run: python tools/extract_globals.py
      2. Check exit code == 0
      3. Run: python -c "import json; d=json.load(open('tools/globals_extracted.json')); print(f'count={len(d)}, typed={sum(1 for x in d if x[\"has_type\"])}')"
      4. Assert count between 1400 and 1600
    Expected Result: count≈1489, typed≈632
    Evidence: .omo/evidence/task-1-extraction-output.txt

  Scenario: No string constants leak through filter
    Tool: Bash (pwsh)
    Preconditions: globals_extracted.json exists
    Steps:
      1. Run: python -c "import json; d=json.load(open('tools/globals_extracted.json')); strings=[x['name'] for x in d if x['name'].startswith('a') and x['name'][1:2].isupper()]; print(f'string_leaks={len(strings)}')"
      2. Assert string_leaks == 0
    Expected Result: string_leaks=0
    Evidence: .omo/evidence/task-1-string-filter.txt
  ```

  **Commit**: YES
  - Message: `feat(tools): add IDA global variable extraction script`
  - Files: `tools/extract_globals.py`, `tools/globals_extracted.json`

- [x] 2. Build auto-exclude set from existing .cpp/.hpp definitions

  **What to do**:
  - Write `tools/scan_existing_defs.py` that scans all `src/**/*.cpp` and `src/**/*.hpp` for global variable definitions and declarations
  - Grep patterns: `extern\s+\w+[\s*]+\w+\s*;` (extern declarations), `^\s*(int|bool|void\*|char|float|double|uint\w*|int\w*|DWORD|HWND|HANDLE|HINSTANCE|HDC|HRGN|HPALETTE|HBITMAP|HCURSOR|HICON)\s+\w+\s*=` (definitions with init)
  - Also scan for `DynamicVectorClass<`, `RectangleStruct`, `CoordStruct` type definitions
  - Output: `tools/existing_defs.json` — set of `{name, file, is_definition, address_comment}`
  - Verify: count ≈ 687 (definitions) + 48 (externs)

  **Must NOT do**:
  - Do NOT modify any source files
  - Do NOT scan injectFunctionTest/ or gen/ directories

  **Recommended Agent Profile**:
  - **Category**: `quick`
    - Reason: Simple grep + JSON output, no complex logic
  - **Skills**: None needed

  **Parallelization**:
  - **Can Run In Parallel**: YES
  - **Parallel Group**: Wave 1 (with Tasks 1, 3, 4)
  - **Blocks**: Tasks 13-19 (global generation)
  - **Blocked By**: None

  **Acceptance Criteria**:
  - [ ] `python tools/scan_existing_defs.py` runs without error
  - [ ] `tools/existing_defs.json` exists
  - [ ] At least 600 entries in the exclude set
  - [ ] Each entry has `name` and `file` fields

  **QA Scenarios**:

  ```
  Scenario: Scan finds existing globals definitions
    Tool: Bash (pwsh)
    Steps:
      1. Run: python tools/scan_existing_defs.py
      2. Run: python -c "import json; d=json.load(open('tools/existing_defs.json')); print(f'total={len(d)}')"
      3. Assert total >= 600
    Expected Result: total≈735 (687 defs + 48 externs)
    Evidence: .omo/evidence/task-2-scan-count.txt

  Scenario: Known globals are in exclude set
    Tool: Bash (pwsh)
    Steps:
      1. Run: python -c "import json; d=json.load(open('tools/existing_defs.json')); names=[x['name'] for x in d]; print('g_DDraw_Active' in names, 'CurrentFrame' in names, 'RulesClass_Instance' in names)"
      2. Assert all three are True
    Expected Result: True True True
    Evidence: .omo/evidence/task-2-known-globals.txt
  ```

  **Commit**: YES
  - Message: `feat(tools): add existing definition scanner`
  - Files: `tools/scan_existing_defs.py`, `tools/existing_defs.json`

- [x] 3. Filter functions.json to global/free function scope

  **What to do**:
  - Write `tools/filter_functions.py` that reads `injectFunctionTest/functions.json` (READ-ONLY, do not modify)
  - Filter: `call.is_member == false` AND `hook.completed == false` AND `hook.re_file == null`
  - Exclude: pure thunks (size ≤ 6 bytes, name ends with `_thunk`), nullsubs
  - Group by `category` field: global, rendering, com, locomotor, menu, yrpp_io
  - Output: `tools/functions_in_scope.json` — array of `{name, addr, size, convention, return_type, param_bytes, category}`
  - Validate: count ≈ 8,285 (filtered from 19,067 by is_member==false, completed==false, re_file==null, minus thunks/nullsubs)

  **Must NOT do**:
  - Do NOT modify functions.json (REVERSE protected list)
  - Do NOT include member functions (is_member=true)

  **Recommended Agent Profile**:
  - **Category**: `quick`
    - Reason: Simple JSON filtering, no external API calls
  - **Skills**: None needed

  **Parallelization**:
  - **Can Run In Parallel**: YES
  - **Parallel Group**: Wave 1 (with Tasks 1, 2, 4)
  - **Blocks**: Tasks 5 (function organization)
  - **Blocked By**: None

  **Acceptance Criteria**:
  - [ ] `python tools/filter_functions.py` runs without error
  - [ ] `tools/functions_in_scope.json` exists
  - [ ] Count between 8000-8600 (target ~8285)
  - [ ] No entries with `is_member: true` or `completed: true`
  - [ ] functions.json NOT modified (verify with git diff)

  **QA Scenarios**:

  ```
  Scenario: Filter produces correct count
    Tool: Bash (pwsh)
    Steps:
      1. Run: python tools/filter_functions.py
      2. Run: python -c "import json; d=json.load(open('tools/functions_in_scope.json')); print(f'count={len(d)}')"
      3. Assert 8000 <= count <= 8600
    Expected Result: count≈8285
    Evidence: .omo/evidence/task-3-filter-count.txt

  Scenario: No members or completed functions leak through
    Tool: Bash (pwsh)
    Steps:
      1. Run: python -c "import json; d=json.load(open('tools/functions_in_scope.json')); members=sum(1 for x in d if x.get('is_member')); print(f'members={members}')"
      2. Assert members == 0
    Expected Result: members=0
    Evidence: .omo/evidence/task-3-filter-check.txt

  Scenario: functions.json untouched
    Tool: Bash (pwsh)
    Steps:
      1. Run: git diff injectFunctionTest/functions.json
      2. Assert no output (empty diff)
    Expected Result: (empty)
    Evidence: .omo/evidence/task-3-git-diff.txt
  ```

  **Commit**: YES
  - Message: `feat(tools): add function scope filter`
  - Files: `tools/filter_functions.py`, `tools/functions_in_scope.json`

- [x] 4. Build type inference database from purity_effects.json + IDA xref

  **What to do**:
  - Write `tools/build_type_db.py` that reads purity_effects.json + globals_extracted.json
  - For each untyped global: size-based inference (1B→uint8_t, 2B→uint16_t, 4B→uint32_t, 8B→uint64_t, >8B→array)
  - For size-4: check if read-only → const; check if pointer-like → void* (only with strong evidence)
  - Map IDA types to C++ (DWORD→uint32_t, HWND→void*, etc.)
  - Output `tools/type_db.json` with confidence: ida_direct | inferred_strong | inferred_weak

  **Must NOT do**: Do NOT modify input files; Do NOT claim high confidence for ambiguous cases

  **Recommended Agent Profile**:
  - **Category**: `deep` — Reason: Multi-source synthesis + type inference heuristics

  **Parallelization**:
  - **Can Run In Parallel**: YES
  - **Parallel Group**: Wave 1 (with Tasks 1, 2, 3)
  - **Blocks**: Task 20
  - **Blocked By**: Task 1

  **Acceptance Criteria**:
  - [ ] `tools/type_db.json` exists with ~1,489 entries
  - [ ] ≥632 entries have confidence=ida_direct
  - [ ] All entries have cpp_type and confidence fields

  **QA Scenarios**:
  ```
  Scenario: Type DB coverage
    Tool: Bash (pwsh)
    Steps: python tools/build_type_db.py; python -c "import json; d=json.load(open('tools/type_db.json')); print(f'total={len(d)}')"
    Expected Result: total≈1489
    Evidence: .omo/evidence/task-4-type-db.txt
  ```

  **Commit**: YES — `feat(tools): add type inference database builder` — `tools/build_type_db.py`, `tools/type_db.json`

- [x] 5. Organize functions by module and namespace

  **What to do**:
  - Write `tools/organize_functions.py` that reads `tools/functions_in_scope.json`
  - Map `category` field to module directory:
    - `global` → split by name pattern (DDraw→render, Audio→misc, etc.) or address range
    - `rendering` → `src/render/`
    - `com` → `src/core/`
    - `locomotor` → `src/misc/`
    - `menu` → `src/ui/`
    - `yrpp_io` → `src/system/`
  - Determine namespace: check if any existing file in target dir uses `ra2::game`; default `gamemd`
  - Group functions into per-module buckets: `{module: [functions]}`
  - Output: `tools/functions_by_module.json`

  **Must NOT do**:
  - Do NOT guess namespace — always verify against existing headers in target directory

  **Recommended Agent Profile**:
  - **Category**: `quick`
  - **Skills**: None needed

  **Parallelization**:
  - **Can Run In Parallel**: NO
  - **Parallel Group**: Sequential (gate for Wave 2)
  - **Blocks**: Tasks 6-12
  - **Blocked By**: Task 3

  **Acceptance Criteria**:
  - [ ] All ~8,285 functions assigned to a module
  - [ ] Each module bucket has correct namespace derived from existing headers
  - [ ] No function appears in multiple modules

  **QA Scenarios**:
  ```
  Scenario: All functions assigned exactly once
    Tool: Bash (pwsh)
    Steps: bash
      1. Run: python tools/organize_functions.py
      2. Run: python -c "import json; d=json.load(open('tools/functions_by_module.json')); total=sum(len(v) for v in d.values()); print(f'total_assigned={total}')"
      3. Assert total_assigned ≈ 8285
    Expected Result: total_assigned≈8285
    Evidence: .omo/evidence/task-5-organize.txt
  ```

  **Commit**: YES
  - Message: `feat(tools): add function module organizer`
  - Files: `tools/organize_functions.py`, `tools/functions_by_module.json`

- [x] 6. Generate `src/core/_funcs.hpp` — core/app module declarations

  **What to do**:
  - Generate header with `// IDA: 0xADDR` annotations for all core/app functions
  - Format: `ReturnType FunctionName(/* param_bytes: N */) noexcept; // IDA: 0xADDR`
  - For functions with known convention: add comment `// convention: thiscall|stdcall|fastcall|cdecl`
  - Use `gamemd` namespace (verified from existing core headers)
  - Include required forward declarations for types used in signatures

  **Must NOT do**:
  - Do NOT generate function bodies
  - Do NOT overwrite existing declarations in other headers

  **Recommended Agent Profile**:
  - **Category**: `quick`
  - **Skills**: None needed

  **Parallelization**:
  - **Can Run In Parallel**: YES
  - **Parallel Group**: Wave 2 (with Tasks 7-12)
  - **Blocks**: Task 27 (build verification)
  - **Blocked By**: Task 5

  **Acceptance Criteria**:
  - [ ] File compiles without errors when included in a test translation unit
  - [ ] All declarations have `// IDA: 0xADDR` format

  **QA Scenarios**:
  ```
  Scenario: Header includes cleanly
    Tool: Bash (pwsh)
    Steps:
      1. Run: echo '#include "core/_funcs.hpp"' | cat - > build_win/_test_core.cpp 2>&1 || true
      2. Alternative: verify with grep that all declarations have address comments
      3. Run: grep -c "// IDA: 0x" src/core/_funcs.hpp
      4. Assert count > 50
    Expected Result: All declarations annotated
    Evidence: .omo/evidence/task-6-core-funcs.txt
  ```

  **Commit**: YES (groups with Tasks 7-12)
  - Message: `feat(core): add function declarations for core/app modules`
  - Files: `src/core/_funcs.hpp`

- [x] 7. Generate `src/entity/_funcs.hpp` — entity module declarations

  **What to do**: Same as Task 6 but for entity module functions (AnimClass, ParticleClass, etc.)

  **Recommended Agent Profile**: **Category**: `quick`

  **Parallelization**: Wave 2 (with Tasks 6, 8-12), Blocked By Task 5

  **Acceptance Criteria**: All declarations have `// IDA: 0xADDR` format, compiles clean

  **QA Scenarios**: Same pattern — verify grep count + address comment format
  **Commit**: YES (groups with Tasks 6-12)

- [ ] 8. Generate `src/object/_funcs.hpp` — object module declarations

  **What to do**: Same as Task 6 but for object module functions (ObjectClass, MissionClass, etc.)

  **Recommended Agent Profile**: **Category**: `quick`

  **Parallelization**: Wave 2 (with Tasks 6, 7, 9-12), Blocked By Task 5

  **Acceptance Criteria**:
  - [ ] All declarations have `// IDA: 0xADDR` format
  - [ ] `grep -c "// IDA: 0x" src/object/_funcs.hpp` returns count > 30

  **QA Scenarios**: Same verification pattern as Task 6
  **Commit**: YES (groups with Tasks 6-12)

- [x] 9. Generate `src/system/_funcs.hpp` — system module declarations

  **What to do**: Same as Task 6 but for system module functions

  **Recommended Agent Profile**: **Category**: `quick`
  **Parallelization**: Wave 2 (with Tasks 6-8, 10-12), Blocked By Task 5
  **Acceptance Criteria**: All declarations have `// IDA: 0xADDR` format; `grep -c "// IDA: 0x" src/system/_funcs.hpp` > 30
  **QA Scenarios**: Same verification pattern as Task 6
  **Commit**: YES (groups with Tasks 6-12)

- [x] 10. Generate `src/render/_funcs.hpp` — render/ui module declarations

  **What to do**: Same as Task 6 but for render + ui module functions

  **Recommended Agent Profile**: **Category**: `quick`
  **Parallelization**: Wave 2 (with Tasks 6-9, 11-12), Blocked By Task 5
  **Acceptance Criteria**: All declarations have `// IDA: 0xADDR` format; `grep -c "// IDA: 0x" src/render/_funcs.hpp` > 30
  **QA Scenarios**: Same verification pattern as Task 6
  **Commit**: YES (groups with Tasks 6-12)

- [x] 11. Generate `src/structure/_funcs.hpp` — structure/house/team module declarations

  **What to do**: Combined header for structure + house + team module functions

  **Recommended Agent Profile**: **Category**: `quick`
  **Parallelization**: Wave 2 (with Tasks 6-10, 12), Blocked By Task 5
  **Acceptance Criteria**: All declarations have `// IDA: 0xADDR` format; `grep -c "// IDA: 0x" src/structure/_funcs.hpp` > 20
  **QA Scenarios**: Same verification pattern as Task 6
  **Commit**: YES (groups with Tasks 6-12)

- [x] 12. Generate `src/misc/_funcs.hpp` — misc/network/type module declarations

  **What to do**: Combined header for misc + network + type module functions

  **Recommended Agent Profile**: **Category**: `quick`
  **Parallelization**: Wave 2 (with Tasks 6-11), Blocked By Task 5
  **Acceptance Criteria**: All declarations have `// IDA: 0xADDR` format; `grep -c "// IDA: 0x" src/misc/_funcs.hpp` > 20
  **QA Scenarios**: Same verification pattern as Task 6
  **Commit**: YES (groups with Tasks 6-12)

---

- [x] 13. Organize globals by module from extracted data

  **What to do**:
  - Write `tools/organize_globals.py` that reads `tools/globals_extracted.json` and `tools/existing_defs.json`
  - Remove globals already in exclude set → produces the "new globals" list (~754 entries)
  - Group by address range / naming pattern:
    - 0xA8xxxx range → game state / command line → `src/core/`
    - 0x88xxxx range → DDraw / render → `src/render/`
    - 0xB0xxxx range → object pools → `src/object/`
    - 0x87xxxx range → system / map → `src/system/`
    - Other → inferred from naming prefix (g_Audio→misc, g_House→house, etc.)
  - Output: `tools/globals_by_module.json`

  **Must NOT do**:
  - Do NOT include globals from exclude set

  **Recommended Agent Profile**:
  - **Category**: `quick`
  - **Skills**: None needed

  **Parallelization**:
  - **Can Run In Parallel**: NO
  - **Parallel Group**: Sequential (gate for Wave 3)
  - **Blocks**: Tasks 14-19
  - **Blocked By**: Tasks 1, 2

  **Acceptance Criteria**:
  - [ ] All 754 new globals assigned to exactly one module
  - [ ] No globals from exclude set present
  - [ ] Each module bucket has 50-200 entries

  **QA Scenarios**:
  ```
  Scenario: Correct count and no duplicates
    Tool: Bash (pwsh)
    Steps:
      1. Run: python tools/organize_globals.py
      2. Run: python -c "import json; d=json.load(open('tools/globals_by_module.json')); total=sum(len(v) for v in d.values()); print(f'total={total}')"
      3. Assert 700 <= total <= 850
    Expected Result: total≈754
    Evidence: .omo/evidence/task-13-organize.txt
  ```

  **Commit**: YES
  - Message: `feat(tools): add global variable module organizer`
  - Files: `tools/organize_globals.py`, `tools/globals_by_module.json`

- [x] 14. Generate `src/core/globals_core.hpp` — core module extern declarations

  **What to do**:
  - Generate header with `extern` declarations for all core globals
  - Format: `extern Type g_Name; // 0xADDR [confidence: ida_direct|inferred_strong|inferred_weak]`
  - Use types from `tools/type_db.json`
  - Add `#pragma once` + namespace wrapper matching existing core header pattern
  - Group related globals with section comments

  **Must NOT do**:
  - Do NOT emit definitions (no `= value` initializers)
  - Do NOT include globals from exclude set

  **Recommended Agent Profile**:
  - **Category**: `quick`
  - **Skills**: None needed

  **Parallelization**:
  - **Can Run In Parallel**: YES
  - **Parallel Group**: Wave 3 (with Tasks 15-19)
  - **Blocks**: Task 27 (build verification)
  - **Blocked By**: Task 13

  **Acceptance Criteria**:
  - [ ] All declarations use `extern` keyword only
  - [ ] All have `// 0xADDR` comment
  - [ ] Type annotations include confidence level

  **QA Scenarios**:
  ```
  Scenario: Extern-only, no definitions
    Tool: Bash (pwsh)
    Steps:
      1. Run: grep -c "^extern " src/core/globals_core.hpp
      2. Assert count > 50
      3. Run: grep -c "=" src/core/globals_core.hpp
      4. Assert count == 0 (no definitions)
    Expected Result: extern count > 50, no = signs
    Evidence: .omo/evidence/task-14-core-globals.txt
  ```

  **Commit**: YES (groups with Tasks 14-19)
  - Message: `feat(core): add extern global declarations for core module`
  - Files: `src/core/globals_core.hpp`

- [x] 15. Generate `src/render/globals_render.hpp` — render module extern declarations

  **What to do**: Same as Task 14 but for render module globals
  **Recommended Agent Profile**: **Category**: `quick`
  **Parallelization**: Wave 3 (with Tasks 14, 16-19), Blocked By Task 13
  **Acceptance Criteria**: All declarations use `extern` only; `grep -c "^extern " src/render/globals_render.hpp` > 20; `grep -c "=" src/render/globals_render.hpp` == 0
  **QA Scenarios**: Same extern-only verification as Task 14
  **Commit**: YES (groups with Tasks 14-19)

- [x] 16. Generate `src/object/globals_object.hpp` — object module extern declarations

  **What to do**: Same as Task 14 but for object module globals
  **Recommended Agent Profile**: **Category**: `quick`
  **Parallelization**: Wave 3 (with Tasks 14-15, 17-19), Blocked By Task 13
  **Acceptance Criteria**: Same extern-only verification as Task 14
  **Commit**: YES (groups with Tasks 14-19)

- [x] 17. Generate `src/structure/globals_structure.hpp` — structure module extern declarations

  **What to do**: Same as Task 14 but for structure module globals
  **Recommended Agent Profile**: **Category**: `quick`
  **Parallelization**: Wave 3 (with Tasks 14-16, 18-19), Blocked By Task 13
  **Acceptance Criteria**: Same extern-only verification as Task 14
  **Commit**: YES (groups with Tasks 14-19)

- [x] 18. Generate `src/system/globals_system.hpp` — system/misc/network extern declarations

  **What to do**: Combined header for system + misc + network globals
  **Recommended Agent Profile**: **Category**: `quick`
  **Parallelization**: Wave 3 (with Tasks 14-17, 19), Blocked By Task 13
  **Acceptance Criteria**: Same extern-only verification as Task 14
  **Commit**: YES (groups with Tasks 14-19)

- [x] 19. Generate `src/entity/globals_entity.hpp` — entity/house/team extern declarations

  **What to do**: Combined header for entity + house + team globals
  **Recommended Agent Profile**: **Category**: `quick`
  **Parallelization**: Wave 3 (with Tasks 14-18), Blocked By Task 13
  **Acceptance Criteria**: Same extern-only verification as Task 14
  **Commit**: YES (groups with Tasks 14-19)

- [x] 20. Apply smart type inference to all generated global declarations

  **What to do**:
  - Read `tools/type_db.json` and all generated `globals_*.hpp` files
  - For each `inferred_weak` global: refine type using additional heuristics
  - Cross-reference with purity_effects.json: if a global is only read (never written), mark as `const`
  - If a global is written by `mov [addr], eax` where eax comes from `new`/`malloc`, mark as pointer
  - Update declarations in-place with refined types
  - Upgrade confidence from `inferred_weak` to `inferred_strong` where additional evidence found

  **Must NOT do**:
  - Do NOT change `ida_direct` confidence entries

  **Recommended Agent Profile**:
  - **Category**: `deep`
    - Reason: Requires nuanced analysis of purity patterns + assembly idioms
  - **Skills**: None needed

  **Parallelization**:
  - **Can Run In Parallel**: NO
  - **Parallel Group**: Sequential (gate for Wave 4)
  - **Blocks**: Tasks 21, 27
  - **Blocked By**: Tasks 4, 14-19

  **Acceptance Criteria**:
  - [ ] All `inferred_weak` entries reviewed and either upgraded or left with explicit annotation
  - [ ] `const` applied where purity data shows read-only
  - [ ] Pointer types applied only where strong evidence exists

  **QA Scenarios**:
  ```
  Scenario: Type refinement reduces weak count
    Tool: Bash (pwsh)
    Steps:
      1. Run: python tools/build_type_db.py --refine
      2. Run: python -c "import json; d=json.load(open('tools/type_db.json')); weak=sum(1 for v in d.values() if 'weak' in v.get('confidence','')); print(f'weak_remaining={weak}')"
      3. Assert weak_remaining < 857 (improvement over baseline)
    Expected Result: weak_remaining reduced from 857
    Evidence: .omo/evidence/task-20-refine.txt
  ```

  **Commit**: YES
  - Message: `refactor: apply smart type inference to weak-confidence globals`
  - Files: updated globals_*.hpp, `tools/type_db.json`

---

- [ ] 21. Select top-200 most-referenced globals for type fix and rename

  **What to do**:
  - Write `tools/select_top_globals.py` that reads `injectFunctionTest/purity_effects.json`
  - Count total references per global address (sum of function-level R+W hits)
  - Cross-reference addresses with globals_extracted.json names
  - Sort by reference count descending, take top 200
  - Output: `tools/top200_globals.json` — `[{name, addr, ref_count, reads, writes}]`

  **Must NOT do**:
  - Do NOT modify purity_effects.json

  **Recommended Agent Profile**:
  - **Category**: `quick`
  - **Skills**: None needed

  **Parallelization**:
  - **Can Run In Parallel**: NO
  - **Parallel Group**: Sequential (gate for Wave 4)
  - **Blocks**: Tasks 22, 23
  - **Blocked By**: Task 20

  **Acceptance Criteria**:
  - [ ] Top 200 list produced with ref_count descending
  - [ ] Minimum ref_count ≥ 10 for all entries
  - [ ] Each entry links name to address correctly

  **QA Scenarios**:
  ```
  Scenario: Top 200 have meaningful reference counts
    Tool: Bash (pwsh)
    Steps:
      1. Run: python tools/select_top_globals.py
      2. Run: python -c "import json; d=json.load(open('tools/top200_globals.json')); print(f'count={len(d)}, min_ref={min(x[\"ref_count\"] for x in d)}, max_ref={max(x[\"ref_count\"] for x in d)}')"
      3. Assert len(d) == 200
      4. Assert min_ref >= 10
    Expected Result: count=200, min_ref >= 10
    Evidence: .omo/evidence/task-21-top200.txt
  ```

  **Commit**: YES
  - Message: `feat(tools): add top-200 global selector`
  - Files: `tools/select_top_globals.py`, `tools/top200_globals.json`

- [ ] 22. IDA xref analysis — batch 1 (globals 1-100)

  **What to do**:
  - For each of the first 100 globals in the top-200 list:
    1. Query IDA via MCP: `xrefs_to(addr)` to find all code locations that reference it
    2. For each xref: decompile the containing function, identify how the global is used
    3. Classify usage: `int_cmp` (compared as integer), `ptr_deref` (dereferenced), `float_op` (floating-point), `bool_flag` (test/set 0/1), `array_idx` (used as array base)
    4. Record the actual observed type from usage patterns
  - Output: `tools/xref_analysis_batch1.json`

  **Must NOT do**:
  - Do NOT write to IDA (no rename, no comments, no patches)

  **Recommended Agent Profile**:
  - **Category**: `deep`
    - Reason: 100 IDA MCP queries + decompilation analysis per global
  - **Skills**: None needed

  **Parallelization**:
  - **Can Run In Parallel**: YES
  - **Parallel Group**: Wave 4 (with Task 23)
  - **Blocks**: Task 24
  - **Blocked By**: Task 21

  **Acceptance Criteria**:
  - [ ] 100 globals analyzed with usage classification
  - [ ] Each entry has `observed_type` based on xref evidence
  - [ ] At least 80% have ≥3 xref citations

  **QA Scenarios**:
  ```
  Scenario: Batch 1 produces complete analysis
    Tool: Bash (pwsh)
    Steps:
      1. Run: python tools/analyze_xrefs.py --batch 1
      2. Run: python -c "import json; d=json.load(open('tools/xref_analysis_batch1.json')); print(f'analyzed={len(d)}, with_type={sum(1 for x in d if x.get(\"observed_type\"))}')"
      3. Assert analyzed >= 90, with_type >= 70
    Expected Result: 90+ analyzed, 70+ typed
    Evidence: .omo/evidence/task-22-xref1.txt
  ```

  **Commit**: YES
  - Message: `feat(tools): add IDA xref analysis for top-200 batch 1`
  - Files: `tools/analyze_xrefs.py`, `tools/xref_analysis_batch1.json`

- [ ] 23. IDA xref analysis — batch 2 (globals 101-200)

  **What to do**: Same as Task 22 for the second batch of 100 globals
  **Parallelization**: Wave 4 (with Task 22), Blocked By Task 21
  **Acceptance Criteria**: Same as Task 22
  **QA Scenarios**: Same pattern
  **Commit**: YES
  - Message: `feat(tools): add IDA xref analysis for top-200 batch 2`
  - Files: `tools/xref_analysis_batch2.json`

- [ ] 24. Apply type fixes — batch 1 (globals 1-100)

  **What to do**:
  - Read xref_analysis_batch1.json + current type_db.json
  - For each global where `observed_type ≠ current cpp_type`:
    1. Update type_db.json with corrected type, source=xref_verified
    2. Update corresponding globals_*.hpp extern declaration
  - For globals with consistent type (matches xref), upgrade confidence to `xref_verified`
  - Output: updated type_db.json + updated globals_*.hpp files

  **Must NOT do**:
  - Do NOT change types marked `ida_direct` unless xref evidence is overwhelming (≥10 sites, all consistent)

  **Recommended Agent Profile**:
  - **Category**: `quick`
  - **Skills**: None needed

  **Parallelization**:
  - **Can Run In Parallel**: YES
  - **Parallel Group**: Wave 4 (with Task 25)
  - **Blocks**: Task 26
  - **Blocked By**: Task 22

  **Acceptance Criteria**:
  - [ ] All 100 globals reviewed; types fixed where xref evidence contradicts
  - [ ] Updated globals_*.hpp files compile clean
  - [ ] type_db.json reflects corrections

  **QA Scenarios**:
  ```
  Scenario: Type fixes applied correctly
    Tool: Bash (pwsh)
    Steps:
      1. Run: python tools/apply_fixes.py --batch 1
      2. Run: python -c "import json; d=json.load(open('tools/type_db.json')); fixed=sum(1 for v in d.values() if v.get('confidence')=='xref_verified'); print(f'xref_verified={fixed}')"
      3. Assert xref_verified >= 50
    Expected Result: At least 50 globals verified or corrected
    Evidence: .omo/evidence/task-24-fixes1.txt
  ```

  **Commit**: YES
  - Message: `fix(globals): apply type corrections for top-200 batch 1`
  - Files: updated type_db.json + globals_*.hpp

- [ ] 25. Apply type fixes — batch 2 (globals 101-200)

  **What to do**: Same as Task 24 for batch 2
  **Recommended Agent Profile**: **Category**: `quick`
  **Parallelization**: Wave 4 (with Task 24), Blocked By Task 23
  **Acceptance Criteria**: All 100 globals reviewed; types fixed where xref contradicts; globals_*.hpp compile clean
  **Commit**: YES — `fix(globals): apply type corrections for top-200 batch 2`

- [ ] 26. Rename qualified globals based on xref evidence

  **What to do**:
  - For all 200 analyzed globals, check rename criteria:
    - ≥5 distinct xref sites AND ≥2 distinct function contexts that use it
    - Current name is auto-generated (dword_*, byte_*, flt_*) or semantically wrong
  - Propose new name based on usage context (e.g., dword_A8ED84 used as frame counter → `g_FrameCounter`)
  - Update globals_*.hpp with new name
  - Keep old name as comment: `extern uint32_t g_FrameCounter; // 0xA8ED84 (was: dword_A8ED84)`
  - Output: `tools/rename_log.json` — `[{old_name, new_name, addr, justification}]`

  **Must NOT do**:
  - Do NOT rename in IDA (no MCP rename calls)
  - Do NOT rename variables already in existing .cpp definitions (only generated externs)

  **Recommended Agent Profile**:
  - **Category**: `quick`
    - Reason: Rule-based rename decision + file edits
  - **Skills**: None needed

  **Parallelization**:
  - **Can Run In Parallel**: NO
  - **Parallel Group**: Sequential (depends on both batches)
  - **Blocks**: Task 27
  - **Blocked By**: Tasks 24, 25

  **Acceptance Criteria**:
  - [ ] Rename log produced with clear justifications
  - [ ] All renames have ≥5 xref sites evidence
  - [ ] Updated globals_*.hpp compile clean
  - [ ] Old names preserved in comments

  **QA Scenarios**:
  ```
  Scenario: Renames are justified and documented
    Tool: Bash (pwsh)
    Steps:
      1. Run: python tools/rename_globals.py
      2. Run: python -c "import json; d=json.load(open('tools/rename_log.json')); print(f'renamed={len(d)}'); [print(f'  {x[\"old_name\"]} → {x[\"new_name\"]} ({x[\"justification\"][:60]})') for x in d[:5]]"
      3. Assert len(d) >= 20 (at least 20 qualified for rename)
    Expected Result: 20+ renames with evidence
    Evidence: .omo/evidence/task-26-renames.txt
  ```

  **Commit**: YES
  - Message: `refactor(globals): rename qualified globals based on xref evidence`
  - Files: updated globals_*.hpp, `tools/rename_log.json`

---

- [ ] 27. Windows build verification — 0 errors, 0 warnings gate

  **What to do**:
  - Run: `cmake -B build_win -G "Visual Studio 17 2022" -A Win32`
  - Run: `cmake --build build_win`
  - Capture full build output
  - Assert: exit code 0, "0 Warning(s)" in output, "0 Error(s)" in output
  - If build fails: capture error log, fix root cause, rebuild until 0/0

  **Must NOT do**:
  - Do NOT change any CMakeLists.txt
  - Do NOT modify any existing source file to "make it compile" without user approval

  **Recommended Agent Profile**:
  - **Category**: `quick`
  - **Skills**: None needed

  **Parallelization**:
  - **Can Run In Parallel**: YES
  - **Parallel Group**: Wave 5 (with Tasks 28, 29, 30)
  - **Blocks**: F1-F4 (final verification)
  - **Blocked By**: Tasks 6-12, 14-19, 26

  **Acceptance Criteria**:
  - [ ] Build exit code = 0
  - [ ] Output contains "0 Warning(s)"
  - [ ] Output contains "0 Error(s)"

  **QA Scenarios**:
  ```
  Scenario: Clean Windows build
    Tool: Bash (pwsh)
    Steps:
      1. Run: cmake -B build_win -G "Visual Studio 17 2022" -A Win32 2>&1 | tee .omo/evidence/task-27-configure.txt
      2. Run: cmake --build build_win 2>&1 | tee .omo/evidence/task-27-build.txt
      3. Run: type .omo\evidence\task-27-build.txt | findstr /C:"0 Warning" /C:"0 Error"
      4. Assert both strings found
    Expected Result: Build succeeded. 0 Warning(s) 0 Error(s)
    Evidence: .omo/evidence/task-27-build.txt
  ```

  **Commit**: NO (verification step only)

- [ ] 28. Linux cross-compile verification

  **What to do**:
  - Run: `cmake -B build_linux -G "Unix Makefiles"`
  - Run: `cmake --build build_linux`
  - Capture full build output
  - Assert: exit code 0, no errors
  - This verifies no platform-specific syntax leaks (wchar_t, __stdcall, etc.)

  **Parallelization**: Wave 5 (with Tasks 27, 29, 30), Blocked By Tasks 6-12, 14-19, 26

  **Acceptance Criteria**:
  - [ ] Linux build exit code = 0
  - [ ] Output contains "0 Error(s)"

  **QA Scenarios**:
  ```
  Scenario: Clean Linux cross-compile
    Tool: Bash (pwsh)
    Steps:
      1. Run: cmake -B build_linux -G "Unix Makefiles" 2>&1 | tee .omo/evidence/task-28-configure.txt
      2. Run: cmake --build build_linux 2>&1 | tee .omo/evidence/task-28-build.txt
      3. Assert exit code 0
    Expected Result: Build succeeded
    Evidence: .omo/evidence/task-28-build.txt
  ```

  **Commit**: NO

- [ ] 29. Duplicate detection self-check

  **What to do**:
  - Write `tools/detect_duplicates.py` that:
    1. Scans all generated `_funcs.hpp` and `globals_*.hpp` files
    2. Scans all existing `src/**/*.hpp` and `src/**/*.cpp` files
    3. Extracts all symbol names (functions + globals)
    4. Reports any name that appears in both generated AND existing files
  - Run check: `python tools/detect_duplicates.py`
  - Assert output: `DUPLICATES: 0`

  **Must NOT do**:
  - Do NOT report intentional extern re-declarations as duplicates (same type, different file = OK)

  **Recommended Agent Profile**:
  - **Category**: `quick`
  - **Skills**: None needed

  **Parallelization**:
  - **Can Run In Parallel**: YES
  - **Parallel Group**: Wave 5 (with Tasks 27, 28, 30)
  - **Blocks**: F1-F4
  - **Blocked By**: Tasks 6-12, 14-19, 26

  **Acceptance Criteria**:
  - [ ] `python tools/detect_duplicates.py` exits 0
  - [ ] Output contains "DUPLICATES: 0"

  **QA Scenarios**:
  ```
  Scenario: Zero duplicate symbols
    Tool: Bash (pwsh)
    Steps:
      1. Run: python tools/detect_duplicates.py 2>&1 | tee .omo/evidence/task-29-duplicates.txt
      2. Run: findstr "DUPLICATES:" .omo\evidence\task-29-duplicates.txt
      3. Assert output is "DUPLICATES: 0"
    Expected Result: DUPLICATES: 0
    Evidence: .omo/evidence/task-29-duplicates.txt
  ```

  **Commit**: YES
  - Message: `feat(tools): add duplicate symbol detection script`
  - Files: `tools/detect_duplicates.py`

- [ ] 30. Coverage count assertion

  **What to do**:
  - Write `tools/verify_decls.py` that:
    1. Counts function declarations in all generated `_funcs.hpp` files
    2. Counts global extern declarations in all generated `globals_*.hpp` files
    3. Compares against expected targets: ~8,285 functions, ~754 globals
    4. Asserts count matches within ±5%
  - Run check: `python tools/verify_decls.py`
  - Assert output: `functions: 8285/8285 | globals: 754/754` (within tolerance)

  **Recommended Agent Profile**:
  - **Category**: `quick`
  - **Skills**: None needed

  **Parallelization**:
  - **Can Run In Parallel**: YES
  - **Parallel Group**: Wave 5 (with Tasks 27, 28, 29)
  - **Blocks**: F1-F4
  - **Blocked By**: Tasks 6-12, 14-19, 26

  **Acceptance Criteria**:
  - [ ] `python tools/verify_decls.py` exits 0
  - [ ] Function count within 8000-8600
  - [ ] Global count within 700-850

  **QA Scenarios**:
  ```
  Scenario: Coverage matches expected targets
    Tool: Bash (pwsh)
    Steps:
      1. Run: python tools/verify_decls.py 2>&1 | tee .omo/evidence/task-30-coverage.txt
      2. Run: findstr "functions:" .omo\evidence\task-30-coverage.txt
      3. Run: findstr "globals:" .omo\evidence\task-30-coverage.txt
      4. Assert both show counts within expected ranges
    Expected Result: functions: 8285/8285 | globals: 754/754
    Evidence: .omo/evidence/task-30-coverage.txt
  ```

  **Commit**: YES
  - Message: `feat(tools): add declaration coverage verification script`
  - Files: `tools/verify_decls.py`

---

## Final Verification Wave (MANDATORY — after ALL implementation tasks)

> 4 review agents run in PARALLEL. ALL must APPROVE. Present consolidated results to user and get explicit "okay" before completing.

- [ ] F1. **Plan Compliance Audit** — `oracle`
  Read the plan end-to-end. For each "Must Have": verify implementation exists (read file). For each "Must NOT Have": search codebase for forbidden patterns — reject with file:line if found. Check: no duplicate symbols, no completed-function overwrites, no class header modifications, no IDA writes, no functions.json mutations. Check evidence files exist in .omo/evidence/.
  Output: `Must Have [5/5] | Must NOT Have [7/7] | Tasks [30/30] | VERDICT: APPROVE/REJECT`

- [ ] F2. **Code Quality Review** — `unspecified-high`
  Run `cmake --build build_win` + `cmake --build build_linux`. Review all generated files for: duplicate declarations, missing address comments, wrong namespace usage, type safety issues (e.g., void* where uint32_t appropriate). Check AI slop: excessive comments, over-abstraction, inconsistent naming.
  Output: `Build Win [PASS/FAIL] | Build Linux [PASS/FAIL] | Files [N clean/N issues] | VERDICT`

- [ ] F3. **Real Manual QA** — `unspecified-high`
  Execute EVERY QA scenario from EVERY task — follow exact steps, capture evidence. Run python tools/verify_decls.py and python tools/detect_duplicates.py. Test edge cases: empty generated files, missing address comments, wrong types. Save to `.omo/evidence/final-qa/`.
  Output: `Scenarios [30/30 pass] | Scripts [2/2 pass] | Edge Cases [N tested] | VERDICT`

- [ ] F4. **Scope Fidelity Check** — `deep`
  For each task: read "What to do", read actual diffs (git diff). Verify 1:1 — everything in spec was built (no missing), nothing beyond spec was built (no creep). Check "Must NOT do" compliance. Detect cross-task contamination. Flag unaccounted changes. Check: 0 class header modifications, 0 functions.json changes, 0 IDA writes.
  Output: `Tasks [30/30 compliant] | Contamination [CLEAN/N issues] | Unaccounted [CLEAN/N files] | VERDICT`

---

## Dependency Matrix

- **1-4**: - - 5, 13, 20, 1
- **5**: 3 - 6-12, 1
- **6-12**: 5 - 27, 2
- **13**: 1, 2 - 14-19, 2
- **14-19**: 13 - 20, 27, 2
- **20**: 4, 14-19 - 21, 3
- **21**: 20 - 22, 23, 3
- **22**: 21 - 24, 4
- **23**: 21 - 25, 4
- **24**: 22 - 26, 4
- **25**: 23 - 26, 4
- **26**: 24, 25 - 27, 5
- **27-30**: 6-12, 14-19, 26 - F1-F4, 5

## Agent Dispatch Summary

- **Wave 1**: 4 tasks — T1→`deep`, T2→`quick`, T3→`quick`, T4→`deep`
- **Wave 2**: 8 tasks — T5→`quick`, T6-T12→`quick`
- **Wave 3**: 8 tasks — T13→`quick`, T14-T19→`quick`, T20→`deep`
- **Wave 4**: 6 tasks — T21→`quick`, T22-T23→`deep`, T24-T26→`quick`
- **Wave 5**: 4 tasks — T27-T30→`quick`
- **FINAL**: 4 tasks — F1→`oracle`, F2→`unspecified-high`, F3→`unspecified-high`, F4→`deep`

---

## Commit Strategy

- **Wave 1**: `feat(tools): add IDA extraction + codebase scanning tools` — 7 files
- **Wave 2**: `feat: add global function declarations for all modules` — 7 `_funcs.hpp` files
- **Wave 3**: `feat: add extern global declarations for all modules` — 6 `globals_*.hpp` files
- **Wave 3b**: `refactor: apply smart type inference to globals` — updated globals_*.hpp + type_db.json
- **Wave 4**: `fix: type corrections + renames for top-200 globals` — updated files + rename_log.json
- **Wave 5**: `feat(tools): add duplicate detection + coverage verification` — 2 tool scripts
- **Pre-commit**: `cmake --build build_win` (0/0 gate) + `python tools/detect_duplicates.py` (0 dupes)

---

## Success Criteria

### Verification Commands
```bash
# Windows build (primary gate)
cmake -B build_win -G "Visual Studio 17 2022" -A Win32 && cmake --build build_win
# Expected: Build succeeded. 0 Warning(s) 0 Error(s)

# Linux cross-compile (secondary gate)
cmake -B build_linux -G "Unix Makefiles" && cmake --build build_linux
# Expected: Build succeeded. 0 Error(s)

# Duplicate detection
python tools/detect_duplicates.py
# Expected: DUPLICATES: 0

# Coverage assertion
python tools/verify_decls.py
# Expected: functions: 8285/8285 | globals: 754/754
```

### Final Checklist
- [ ] All "Must Have" present (5/5)
- [ ] All "Must NOT Have" absent (7/7)
- [ ] Windows build: 0 errors, 0 warnings
- [ ] Linux build: 0 errors, 0 warnings
- [ ] No duplicate symbols
- [ ] Coverage counts match targets
- [ ] Top-200 globals: types fixed + qualified renames applied
- [ ] All generated files follow `// IDA: 0xADDR` format
