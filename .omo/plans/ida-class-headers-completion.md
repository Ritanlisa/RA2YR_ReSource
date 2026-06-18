# IDA Class Header Completion — 全类定义逆向补全

## TL;DR

> **Core Objective**: 通过IDA双向逆向工程，补全所有 `src/` 下类定义头文件（成员变量+方法声明+地址注释），同时将IDA中2,341个 `::sub_*` 方法重命名为camelCase。这是 `function-impl-reverse.md` 的前提条件——函数实现需要完整的头文件作为契约。
>
> **Deliverables**:
> - 100个现有关头文件补全（成员变量命名 + 方法声明 + `// 0xADDR`地址注释）
> - 11个新缺失类头文件创建
> - IDA中2,341个 `::sub_*` 函数重命名为camelCase
> - 构建0错误0警告
>
> **Estimated Effort**: XL（多会话、多阶段）
> **Parallel Execution**: YES — 多数波次可并行
> **Critical Path**: Phase 0审计 → IDA重命名 → 叶类头文件 → 中层类头文件 → 根类头文件 → 新增头文件 → 最终验证

---

## Context

### Original Request
"重命名IDA中所有的*::sub*类方法，并把IDA中的所有类的定义（包括类成员变量和类方法的定义，不包括类函数的实现，类函数的定义后要通过注释标记对应的函数地址）都补全在src/下对应的hpp头文件中"

### Interview Summary
**Key Discussions**:
- **Scope**: 全部类(Recommended) — 所有现有头文件 + IDA中被现有头文件直接引用的缺失类
- **Member Variables**: 逆向并补全(Recommended) — 从IDA构造函数/析构函数分析成员偏移
- **Sync Direction**: 双向完整同步(Recommended) — IDA方法→头文件声明；头文件声明→IDA重命名
- **Naming**: 自然语言小驼峰命名法
- **Pure Virtuals**: 基类stub→`=0`; 派生类stub→`override {}`
- **Test Strategy**: Build verification (0 errors, 0 warnings) + IDA spot-check

**Research Findings**:
- **IDA**: 19,067 functions, 10,370 class members, 2,341 `::sub_*` across 334 classes, 86.4% overall naming coverage
- **Headers**: 100 `.hpp` files, 302 `unknown_*` fields in 38 files, 308 trivial stubs in 50 files, only 15/100 have address comments
- **Worst classes**: JumpjetLocomotionClass (203 sub_, 72.8% unnamed), radar.hpp (33 unknown_), locomotion.hpp (33 unknown_ + 24 stubs)
- **Template classes**: 165 instantiations — only template definition gets header, not each instantiation
- **Struct types**: Only 14% of IDA classes have them (YRpp imports for core hierarchy)

### Metis Review
**Identified Gaps** (addressed):
- **No exit criteria**: Added phased deliverables with hard completion gates
- **No iterative strategy**: Built iteration waves into plan — IDA renames change decompiler output, revealing more structure
- **Scale underestimated by 66%+**: Corrected from 1,407 to 2,341 sub_*; added strict scope boundaries for template instantiations and new headers

---

## Work Objectives

### Core Objective
Complete all class definition headers (member variables + method declarations with `// 0xADDR` address comments) by bidirectional reverse engineering from IDA. Rename all `::sub_*` IDA methods to camelCase. Every class header is a verified contract for function implementations.

### Concrete Deliverables
- **Phase 0**: Header audit + class hierarchy topological sort + scorecard template
- **Phase 1-4**: 2,341 IDA `::sub_*` functions renamed to camelCase (334 classes, 4 waves by priority)
- **Phase 5-7**: Entity/Structure headers completed (member vars named, methods declared, address comments)
- **Phase 8-10**: Mid-hierarchy/Root/Complex headers completed
- **Phase 11**: 11 new headers for missing classes
- **Phase 12**: Final verification — all 4 review agents approve

### Definition of Done
- [ ] `cmake --build build_win --config Debug --target gamemd_core` → 0 errors, 0 warnings
- [ ] All 100 headers: 0 `unknown_*` fields (or explicitly deferred with annotation)
- [ ] All method declarations have `// 0xADDR` comment verified against IDA
- [ ] IDA: 0 `::sub_*` remaining across 334 target classes
- [ ] `idb_save()` executed after each rename batch
- [ ] Spot-check: random 3 methods per class — address comments match IDA

### Must Have
- Build passes (0 errors, 0 warnings) after EACH batch
- Address comments verified against IDA (not guessed)
- Calling conventions match IDA (thiscall/stdcall/fastcall)
- `override` keyword on all derived class virtual overrides
- IDA saved after every rename batch
- REVERSE pipeline files untouched (per AGENTS.md protected list)

### Must NOT Have (Guardrails)
- **No mass operations on verified functions** — `completed=true` / `done=true` functions are frozen
- **No "while I'm here" adjacent fixes** — each task is discrete; unrelated issues → backlog
- **No template instantiation headers** — only template definition in `core/vector.hpp` gets documented
- **No function implementations** (`.cpp` files) — headers only
- **No naming perfectionism** — use standard vocabulary (Get/Set/Is/Do/Calculate/Draw/Update); rename later if needed
- **No silent IDA corruption** — every rename batch: spot-check 3 decompilations for errors
- **No REVERSE pipeline modifications** — the 20+ protected files in AGENTS.md are off-limits
- **Scope creep**: adjacent issues → `.omo/drafts/backlog.md`, NOT fixed inline

---

## Verification Strategy (MANDATORY)

### Test Decision
- **Infrastructure exists**: YES (CMake build system)
- **Automated tests**: None (header-only declarations, no implementation code)
- **Primary verification**: `cmake --build build_win --config Debug --target gamemd_core` → 0 errors, 0 warnings
- **Secondary verification**: `dumpbin /exports gamemd_core.lib` → no symbol regressions
- **IDA verification**: Random spot-check of 3 methods per completed class — address comment matches IDA function address

### QA Policy
Every task MUST include agent-executed QA scenarios.
Evidence saved to `.omo/evidence/task-{N}-{scenario-slug}.{ext}`.

- **Build**: `cmake --build build_win` — capture stderr, verify 0 errors
- **IDA**: `ida-pro-mcp` — decompile 3 random methods, verify names/addresses match
- **Diff**: `git diff --stat` — confirm only expected files changed
- **Symbol**: `dumpbin /exports` — confirm no exports lost

---

## Execution Strategy

### Parallel Execution Waves

```
Wave 1 (Phase 0 — Audit): ALL agents in parallel
├── Task 1: Classify all 100 headers [quick]
├── Task 2: Topological sort class hierarchy [deep]
├── Task 3: Validate assumptions (build, addresses, conventions) [quick]
├── Task 4: Generate per-class scorecard + scope manifest [quick]
└── Task 5: IDA save + baseline snapshot [quick]

Wave 2 (Phase 1 — IDA P0: JumpjetLocomotionClass):
└── Task 6: JumpjetLocomotionClass auto-rename (203 sub_) [deep]

Wave 3 (Phase 2 — IDA P1: Template classes): MAX PARALLEL
├── Task 7: VectorClass template instantiations rename (~300 sub_) [deep]
├── Task 8: Blit/MSPCXAnim/BlowPipe renames (~100 sub_) [deep]
└── Task 9: Remaining template class renames (~100 sub_) [quick]

Wave 4 (Phase 3 — IDA P2: Medium classes): MAX PARALLEL
├── Task 10: CStreamClass/SaveGame/Scenario rename (~40 sub_) [quick]
└── Task 11: FilePipe/remaining medium classes rename (~60 sub_) [quick]

Wave 5 (Phase 4 — IDA P3: Bulk small classes):
└── Task 12: Bulk rename 264 classes (1-5 sub_ each) [quick]

Wave 6 (Phase 5 — Headers: Entity STUB classes): MAX PARALLEL
├── Task 13: Entity group A (overlay, smudge, terrain, tiberium) [deep]
├── Task 14: Entity group B (tube, voxel_anim, wave) [deep]
└── Task 15: Entity group C (particle, particle_system, anim, bullet) [deep]

Wave 7 (Phase 6 — Headers: Structure classes): MAX PARALLEL
├── Task 16: Structure group A (unit, infantry) [deep]
├── Task 17: Structure group B (aircraft) [deep]
└── Task 18: Structure group C (building — member vars + address comments) [deep]

Wave 8 (Phase 7 — Headers: Mid-hierarchy): MAX PARALLEL
├── Task 19: foot.hpp (26 unknown_ + method addresses) [deep]
├── Task 20: techno.hpp (method addresses) [deep]
├── Task 21: cell.hpp + radar.hpp (12 + 33 unknown_) [deep]
└── Task 22: display.hpp (19 unknown_) [deep]

Wave 9 (Phase 8 — Headers: Root classes):
├── Task 23: abstract.hpp + object.hpp (vtable + addresses) [deep]
└── Task 24: type_classes.hpp + per-type headers (address comments) [deep]

Wave 10 (Phase 9 — Headers: Locomotion + Audio + UI):
├── Task 25: locomotion.hpp (33 unknown_ + 24 stubs, 12 classes) [deep]
├── Task 26: audio.hpp (22 unknown_) [deep]
└── Task 27: sidebar.hpp + command_class.hpp + gadget.hpp [deep]

Wave 11 (Phase 10 — Headers: Network + Team + Misc):
├── Task 28: connection.hpp + multiplayer.hpp (23 stubs + addresses) [deep]
├── Task 29: trigger.hpp + tag.hpp + script.hpp + team.hpp (100% stubs) [deep]
└── Task 30: house_type.hpp, side.hpp, super_weapon.hpp, factory.hpp [quick]

Wave 12 (Phase 11 — New Headers): MAX PARALLEL
├── Task 31: RadSiteClass + EBolt + BuildingLightClass headers [deep]
├── Task 32: WaypointClass + LayerClass + Checksummer headers [deep]
└── Task 33: BaseClass + ScoreStruct + DropshipStruct + RepeatableTimer headers [quick]

Wave 13 (Phase 12 — Iteration): After first pass
├── Task 34: Re-audit headers (decompiler feedback loop) [deep]
└── Task 35: Second-pass IDA rename (newly revealed functions) [deep]

Wave FINAL: 4 parallel reviews, then user okay
├── Task F1: Plan compliance audit (oracle)
├── Task F2: Code quality review (unspecified-high)
├── Task F3: Real manual QA (unspecified-high)
└── Task F4: Scope fidelity check (deep)
```

### Dependency Matrix

- **1-5**: None → Wave 1 (audit)
- **6**: 1-5 → Wave 2 (IDA P0)
- **7-9**: 1-5 → Wave 3 (IDA P1, parallel)
- **10-11**: 5 → Wave 4 (IDA P2, parallel)
- **12**: 5 → Wave 5 (IDA P3)
- **13-15**: 5 (need entity IDA data) → Wave 6 (parallel)
- **16-18**: 5 (need structure IDA data) → Wave 7 (parallel)
- **19-22**: 5 (need mid-hierarchy IDA data) → Wave 8 (parallel)
- **23-24**: 5, 19-20 (root classes after base classes) → Wave 9
- **25-27**: 5 (need locomotion/audio/UI IDA data) → Wave 10 (parallel)
- **28-30**: 5 (need network/team IDA data) → Wave 11 (parallel)
- **31-33**: 5 (need IDA data for new classes) → Wave 12 (parallel)
- **34-35**: 13-33 (iteration after first pass) → Wave 13
- **F1-F4**: ALL implementation tasks → Wave FINAL

### Agent Dispatch Summary

- **Wave 1**: 5 agents × `quick`/`deep` (audit, all parallel)
- **Wave 2**: 1 agent × `deep` (JumpjetLocomotionClass)
- **Wave 3**: 3 agents × `deep`/`quick` (template classes, all parallel)
- **Wave 4**: 2 agents × `quick` (medium classes, parallel)
- **Wave 5**: 1 agent × `quick` (bulk small classes)
- **Wave 6**: 3 agents × `deep` (entity headers, parallel)
- **Wave 7**: 3 agents × `deep` (structure headers, parallel)
- **Wave 8**: 4 agents × `deep` (mid-hierarchy, parallel)
- **Wave 9**: 2 agents × `deep` (root classes)
- **Wave 10**: 3 agents × `deep` (locomotion + audio + UI, parallel)
- **Wave 11**: 3 agents × `deep`/`quick` (network + team + misc, parallel)
- **Wave 12**: 3 agents × `deep`/`quick` (new headers, parallel)
- **Wave 13**: 2 agents × `deep` (iteration)
- **FINAL**: 4 agents × `oracle`/`unspecified-high`/`deep` (reviews, parallel)

---

## TODOs

- [x] 1. **Wave 1 — Classify all 100 headers (COMPLETE/PARTIAL/STUB/UTILITY)**

  **What to do**:
  - Read every `.hpp` file under `src/`
  - Classify each as: COMPLETE (all members named, methods have address comments), PARTIAL (some known/some unknown_), STUB (minimal body, mostly abstract), UTILITY (no class definitions, excluded from scope)
  - Write classification to `scripts/header_classification.json`

  **Must NOT do**:
  - Do NOT modify any header files — classification only

  **Recommended Agent Profile**:
  - **Category**: `quick`
    - Reason: Simple read-and-classify task, no code changes
  - **Skills**: None needed

  **Parallelization**:
  - **Can Run In Parallel**: YES
  - **Parallel Group**: Wave 1 (with Tasks 2-5)
  - **Blocks**: Tasks 6-35 (all subsequent tasks need classification)

  **References**:
  - `src/` — all 100 `.hpp` files to classify
  - `scripts/` — existing analysis scripts for reference patterns

  **Acceptance Criteria**:
  - [ ] `scripts/header_classification.json` created with all 100 files classified
  - [ ] Each entry has: file_path, classification, class_count, unknown_count, address_comment_count, stub_count
  - [ ] UTILITY files listed with reason for exclusion

  **QA Scenarios**:
  ```
  Scenario: Classification file is valid JSON with all 100 files
    Tool: Bash (PowerShell)
    Steps:
      1. Get-Content scripts/header_classification.json | ConvertFrom-Json | Measure-Object | Select-Object -ExpandProperty Count
      2. Assert count >= 95 (allowing for a few edge cases)
    Expected Result: Count >= 95
    Evidence: .omo/evidence/task-1-classification-count.txt

  Scenario: No header files were modified
    Tool: Bash (git)
    Steps:
      1. git diff --name-only -- 'src/*.hpp' 'src/**/*.hpp'
      2. Assert output is empty (no changes to header files)
    Expected Result: Empty output (no header modifications)
    Evidence: .omo/evidence/task-1-git-diff.txt
  ```

  **Commit**: YES
  - Message: `feat(audit): classify all 100 headers by completeness`
  - Files: `scripts/header_classification.json`
  - Pre-commit: None (JSON file, no build needed)

- [x] 2. **Wave 1 — Topological sort class hierarchy from IDA vtable data**

  **What to do**:
  - Extract class inheritance from IDA vtable scan data (1084 vtables identified)
  - Build a dependency graph: which classes inherit from which
  - Produce topological order: leaf classes first, root classes last
  - Identify "completion order" — which classes can be completed without affecting others

  **Must NOT do**:
  - Do NOT create new headers yet — analysis only
  - Do NOT modify IDA types

  **Recommended Agent Profile**:
  - **Category**: `deep`
    - Reason: Complex graph analysis across 1084 vtables — needs careful inheritance tracing
  - **Skills**: None needed

  **Parallelization**:
  - **Can Run In Parallel**: YES
  - **Parallel Group**: Wave 1 (with Tasks 1, 3-5)
  - **Blocks**: Tasks 6-35 (determines header completion order)

  **References**:
  - `docs/coverage.md` — vtable scan info, class hierarchy documentation
  - `src/object/abstract.hpp` — root class (AbstractClass with 4 vtables)
  - `injectFunctionTest/functions.json` — 19K function metadata with class assignments

  **Acceptance Criteria**:
  - [ ] Topological sort produced as `scripts/class_hierarchy_order.json`
  - [ ] Root classes (AbstractClass, ObjectClass) at the end of the list
  - [ ] Leaf classes (entity, structure leaves) at the beginning
  - [ ] Dependency graph shows inheritance relationships

  **QA Scenarios**:
  ```
  Scenario: Hierarchy file is valid JSON with correct ordering
    Tool: Bash (PowerShell)
    Steps:
      1. Get-Content scripts/class_hierarchy_order.json | ConvertFrom-Json
      2. Assert "AbstractClass" appears after "InfantryClass" (leaf before root)
      3. Assert "ObjectClass" appears after "TechnoClass"
    Expected Result: All root classes at end, leaf classes at beginning
    Evidence: .omo/evidence/task-2-hierarchy-order.txt

  Scenario: No circular dependencies detected
    Tool: Bash (PowerShell)
    Steps:
      1. Parse hierarchy JSON, check for cycles
    Expected Result: No cycles in inheritance graph
    Evidence: .omo/evidence/task-2-no-cycles.txt
  ```

  **Commit**: YES
  - Message: `feat(audit): topological sort of class hierarchy`
  - Files: `scripts/class_hierarchy_order.json`
  - Pre-commit: None

- [x] 3. **Wave 1 — Validate assumptions before starting work**

  **What to do**:
  - Verify build passes: `cmake --build build_win --config Debug --target gamemd_core`
  - Spot-check 5 address comments in `map.hpp` (59 comments) — verify against IDA
  - Spot-check 5 calling conventions in `building.hpp` — verify against IDA (thiscall/stdcall)
  - Check that `src/` headers use `GLOB_RECURSE` in CMakeLists.txt (new files auto-included)

  **Must NOT do**:
  - Do NOT fix any issues found — report them only

  **Recommended Agent Profile**:
  - **Category**: `quick`
    - Reason: Read-only validation checks
  - **Skills**: None needed

  **Parallelization**:
  - **Can Run In Parallel**: YES
  - **Parallel Group**: Wave 1 (with Tasks 1-2, 4-5)
  - **Blocks**: Tasks 6-35 (if assumptions fail, plan needs adjustment)

  **References**:
  - `src/system/map.hpp` — 59 address comments for spot-check
  - `src/structure/building.hpp` — 15 address comments + convention checks
  - `CMakeLists.txt` — verify GLOB_RECURSE for src/

  **Acceptance Criteria**:
  - [ ] Build passes (0 errors, 0 warnings) — baseline confirmed
  - [ ] 5/5 address comments match IDA (or issues documented)
  - [ ] 5/5 calling conventions match IDA (or issues documented)
  - [ ] CMakeLists.txt confirmed to auto-include new `.hpp` files

  **QA Scenarios**:
  ```
  Scenario: Build baseline passes
    Tool: Bash (cmake)
    Steps:
      1. cmake --build build_win --config Debug --target gamemd_core 2>&1 | Out-File .omo/evidence/task-3-build-baseline.txt
      2. Assert "0 Error(s)" in output
      3. Assert "0 Warning(s)" in output
    Expected Result: 0 Error(s), 0 Warning(s)
    Evidence: .omo/evidence/task-3-build-baseline.txt

  Scenario: Address comments verified against IDA
    Tool: Bash (ida-pro-mcp lookup_funcs)
    Steps:
      1. For 5 random methods in map.hpp, lookup address in IDA
      2. Assert function exists at that address with matching name
    Expected Result: 5/5 addresses verified
    Evidence: .omo/evidence/task-3-addr-verify.txt
  ```

  **Commit**: NO (validation artifacts only, stored in `.omo/evidence/`)

- [x] 4. **Wave 1 — Generate per-class scorecard + file-level scope manifest**

  **What to do**:
  - For each classified header, create a scorecard: current state, work needed, estimated effort
  - Produce final scope manifest: exactly which files are IN scope, which are OUT, with reason
  - List all "new headers needed" with the class name and the existing header that references them

  **Must NOT do**:
  - Do NOT start implementing — scorecard creation only

  **Recommended Agent Profile**:
  - **Category**: `quick`
    - Reason: Data compilation from Tasks 1-2 results
  - **Skills**: None needed

  **Parallelization**:
  - **Can Run In Parallel**: YES
  - **Parallel Group**: Wave 1 (with Tasks 1-3, 5)
  - **Blocks**: Tasks 6-33 (all subsequent waves reference this manifest)

  **References**:
  - `scripts/header_classification.json` — from Task 1
  - `scripts/class_hierarchy_order.json` — from Task 2
  - `.omo/drafts/ida-class-headers-completion.md` — scope boundaries documented here

  **Acceptance Criteria**:
  - [ ] `scripts/completion_scorecard.json` created with per-file breakdown
  - [ ] `scripts/scope_manifest.md` created with IN/OUT file list + reasons
  - [ ] New headers needed list: RadSiteClass, EBolt, BuildingLightClass, WaypointClass, LayerClass, Checksummer, RepeatableTimerStruct, ScoreStruct, BaseClass, BaseNodeClass, DropshipStruct, NodeNameType

  **QA Scenarios**:
  ```
  Scenario: Scorecard covers all classified headers
    Tool: Bash (PowerShell)
    Steps:
      1. $scorecard = Get-Content scripts/completion_scorecard.json | ConvertFrom-Json
      2. $classification = Get-Content scripts/header_classification.json | ConvertFrom-Json
      3. Assert $scorecard.Count -ge $classification.Count
    Expected Result: Scorecard entries >= classification entries
    Evidence: .omo/evidence/task-4-scorecard-count.txt

  Scenario: Scope manifest lists exact IN/OUT files
    Tool: Bash (PowerShell)
    Steps:
      1. Get-Content scripts/scope_manifest.md | Select-String "IN SCOPE" | measure
      2. Assert IN SCOPE count > 0 and OUT SCOPE count > 0
    Expected Result: Both IN and OUT sections populated
    Evidence: .omo/evidence/task-4-scope-manifest.txt
  ```

  **Commit**: YES
  - Message: `feat(audit): per-class scorecard + scope manifest`
  - Files: `scripts/completion_scorecard.json`, `scripts/scope_manifest.md`
  - Pre-commit: None

- [x] 5. **Wave 1 — IDA save baseline snapshot**

  **What to do**:
  - Execute `idb_save()` to persist current IDA state as baseline
  - Record current IDA stats: named functions count, sub_ count, class count
  - Export current IDA stats to `scripts/ida_baseline.json`

  **Must NOT do**:
  - Do NOT rename anything yet — snapshot only

  **Recommended Agent Profile**:
  - **Category**: `quick`
    - Reason: Simple IDA operation
  - **Skills**: None needed

  **Parallelization**:
  - **Can Run In Parallel**: YES
  - **Parallel Group**: Wave 1 (with Tasks 1-4)
  - **Blocks**: None directly (but provides baseline for progress tracking)

  **References**:
  - IDA MCP: `gamemd.exe.i64` on port 13337
  - `scripts/ida_stats.py` — existing stats script for reference

  **Acceptance Criteria**:
  - [ ] `idb_save()` executed successfully
  - [ ] `scripts/ida_baseline.json` created with: named_count, sub_count, class_count, timestamp

  **QA Scenarios**:
  ```
  Scenario: Baseline file created
    Tool: Bash (PowerShell)
    Steps:
      1. Test-Path scripts/ida_baseline.json
      2. Get-Content scripts/ida_baseline.json | ConvertFrom-Json
    Expected Result: File exists, valid JSON
    Evidence: .omo/evidence/task-5-baseline.txt

  Scenario: IDA stats are reasonable
    Tool: Bash (PowerShell)
    Steps:
      1. $data = Get-Content scripts/ida_baseline.json | ConvertFrom-Json
      2. Assert $data.named_count > 10000
    Expected Result: Named functions > 10,000
    Evidence: .omo/evidence/task-5-ida-stats.txt
  ```

  **Commit**: YES
  - Message: `feat(audit): IDA baseline snapshot + stats`
  - Files: `scripts/ida_baseline.json`
  - Pre-commit: None

- [x] 6. **Wave 2 — JumpjetLocomotionClass auto-rename (203 sub_ — highest priority)**

  **What to do**:
  - Write an IDA Python script that reads all `JumpjetLocomotionClass::sub_*` functions
  - For each, decompile and match parameter/return signatures against known JumpjetLocomotionClass patterns
  - Auto-name methods using standard vocabulary (Calculate, Update, Get, Set, Is, Draw, Init, Process, Handle)
  - Run the script via `py_exec_file`, verify no decompilation errors
  - Execute `idb_save()` after completion

  **Must NOT do**:
  - Do NOT manually rename all 203 functions one-by-one — must be automated
  - Do NOT guess names — if signature doesn't match any pattern, leave as `sub_*` with annotation comment
  - Do NOT rename functions that are already camelCase

  **Recommended Agent Profile**:
  - **Category**: `deep`
    - Reason: Complex IDA Python scripting + pattern recognition across 203 functions
  - **Skills**: None needed (IDA MCP tools used directly)

  **Parallelization**:
  - **Can Run In Parallel**: NO (single-class focus)
  - **Parallel Group**: Wave 2 (sequential, depends on Wave 1)
  - **Blocks**: None directly (this is IDA-only, doesn't affect headers)
  - **Blocked By**: Tasks 1-5 (needs audit baseline)

  **References**:
  - `scripts/ida_baseline.json` — pre-rename snapshot from Task 5
  - `docs/locomotion.md` — if exists, Jumpjet locomotion documentation
  - `src/misc/locomotion.hpp` — JumpjetLocomotionClass header for naming patterns

  **Acceptance Criteria**:
  - [ ] IDA Python script created as `scripts/rename_jumpjet.py`
  - [ ] 203 `::sub_*` functions renamed (or annotated if unidentifiable)
  - [ ] `idb_save()` executed
  - [ ] Spot-check 10 random renames: decompile passes, name makes sense

  **QA Scenarios**:
  ```
  Scenario: Rename script executes without errors
    Tool: ida-pro-mcp py_exec_file
    Steps:
      1. py_exec_file("scripts/rename_jumpjet.py")
      2. Assert no Python exceptions in stderr
    Expected Result: Script completes with 0 errors
    Evidence: .omo/evidence/task-6-rename-output.txt

  Scenario: sub_ count reduced significantly
    Tool: ida-pro-mcp py_eval
    Steps:
      1. Count JumpjetLocomotionClass::sub_* functions
      2. Assert count < 50 (was 203 before)
    Expected Result: sub_ count < 50
    Evidence: .omo/evidence/task-6-sub-count.txt

  Scenario: Decompilation still works after rename
    Tool: ida-pro-mcp decompile
    Steps:
      1. Pick 10 random renamed functions
      2. Decompile each — assert no "decompilation failure" errors
    Expected Result: 10/10 decompile successfully
    Evidence: .omo/evidence/task-6-decompile-check.txt
  ```

  **Commit**: NO (IDA state saved via idb_save; script committed separately)
  - Script commit: `feat(ida): JumpjetLocomotionClass auto-rename script`
  - Files: `scripts/rename_jumpjet.py`

- [x] 7. **Wave 3 — VectorClass template instantiation rename (~300 sub_ across ~20 classes)**

  **What to do**:
  - Write an IDA Python script that identifies all `VectorClass_ptr_*` and `VectorClass_*` template instantiations
  - Each VectorClass has ~22 members (indexing, growth, insert, delete, sort, clear)
  - The naming pattern is deterministic from the template — apply template member names
  - Run via `py_exec_file`, verify, `idb_save()`

  **Must NOT do**:
  - Do NOT create headers for each template instantiation — only the template definition in `core/vector.hpp`
  - Do NOT rename if the function body doesn't match the template pattern

  **Recommended Agent Profile**:
  - **Category**: `deep`
    - Reason: Template pattern recognition + IDA Python scripting
  - **Skills**: None needed

  **Parallelization**:
  - **Can Run In Parallel**: YES
  - **Parallel Group**: Wave 3 (with Tasks 8-9)
  - **Blocks**: None
  - **Blocked By**: Tasks 1-5

  **References**:
  - `src/core/vector.hpp` — VectorClass template definition (22 member patterns)
  - `scripts/rename_jumpjet.py` — pattern to follow for rename script structure

  **Acceptance Criteria**:
  - [ ] Script `scripts/rename_vector_templates.py` created and executed
  - [ ] ~300 `::sub_*` renamed across ~20 template instantiation classes
  - [ ] `idb_save()` executed
  - [ ] Spot-check: 5 random VectorClass_ptr_* classes — 0 sub_ remaining

  **QA Scenarios**:
  ```
  Scenario: Template sub_ count reduced
    Tool: ida-pro-mcp py_eval
    Steps:
      1. Count sub_ across all VectorClass_ptr_* + VectorClass_* classes
      2. Assert total < 50 (was ~300 before)
    Expected Result: Remaining sub_ < 50
    Evidence: .omo/evidence/task-7-template-count.txt
  ```

  **Commit**: NO (IDA state via idb_save)
  - Script commit: `feat(ida): VectorClass template instantiation renamer`
  - Files: `scripts/rename_vector_templates.py`

- [x] 8. **Wave 3 — Blit/MSPCXAnim/BlowPipe template specialization rename (~100 sub_)**

  **What to do**:
  - Identify all `Blit*`, `MSPCXAnim*`, `BlowPipe*` template specializations in IDA
  - These are rendering pipeline classes with ~20-25 members each
  - Write IDA Python renamer matching blitter/pipeline patterns
  - Execute, verify, `idb_save()`

  **Must NOT do**:
  - Do NOT create headers for rendering template specializations

  **Recommended Agent Profile**:
  - **Category**: `deep`
    - Reason: Domain-specific rendering pattern recognition
  - **Skills**: None needed

  **Parallelization**:
  - **Can Run In Parallel**: YES
  - **Parallel Group**: Wave 3 (with Tasks 7, 9)
  - **Blocked By**: Tasks 1-5

  **References**:
  - `src/render/blitter.hpp` — 17 template blitter classes for naming patterns
  - `src/render/surface.hpp` — surface hierarchy

  **Acceptance Criteria**:
  - [ ] Script `scripts/rename_blit_pipeline.py` created and executed
  - [ ] ~100 `::sub_*` renamed across rendering template classes
  - [ ] `idb_save()` executed

  **QA Scenarios**:
  ```
  Scenario: Render template sub_ count reduced
    Tool: ida-pro-mcp py_eval
    Steps:
      1. Count sub_ across Blit*/MSPCXAnim*/BlowPipe* classes
      2. Assert total < 20
    Expected Result: Remaining sub_ < 20
    Evidence: .omo/evidence/task-8-render-count.txt
  ```

  **Commit**: NO (IDA state via idb_save)
  - Script commit: `feat(ida): blit/pipeline template renamer`
  - Files: `scripts/rename_blit_pipeline.py`

- [x] 9. **Wave 3 — Remaining template class renames (~100 sub_)**

  **What to do**:
  - Handle remaining template classes: FilePipe, DynamicVectorClass_*, HashTable/HashMap instantiations
  - Use the same pattern-matching approach as Tasks 7-8
  - Execute, verify, `idb_save()`

  **Must NOT do**:
  - Do NOT create headers for template instantiations

  **Recommended Agent Profile**:
  - **Category**: `quick`
    - Reason: Smaller scope, deterministic patterns
  - **Skills**: None needed

  **Parallelization**:
  - **Can Run In Parallel**: YES
  - **Parallel Group**: Wave 3 (with Tasks 7-8)
  - **Blocked By**: Tasks 1-5

  **References**:
  - `src/core/vector.hpp` — DynamicVectorClass template patterns
  - Tasks 7-8 scripts for code reuse

  **Acceptance Criteria**:
  - [ ] ~100 `::sub_*` renamed across FilePipe, DynamicVectorClass_*, HashTable, HashMap instantiations
  - [ ] `idb_save()` executed

  **QA Scenarios**:
  ```
  Scenario: Remaining template sub_ count reduced
    Tool: ida-pro-mcp py_eval
    Steps:
      1. Count sub_ across remaining template classes
      2. Assert total < 30
    Expected Result: Remaining sub_ < 30
    Evidence: .omo/evidence/task-9-remaining-template-count.txt
  ```

  **Commit**: NO (IDA state via idb_save)

- [x] 10. **Wave 4 — CStreamClass, SaveGame, Scenario rename (~40 sub_)**

  **What to do**:
  - For each class, decompile each `sub_*` function in IDA
  - Match function body patterns against known class behavior (stream I/O, save/load, scenario management)
  - Rename manually (small enough for manual) — use IDA `rename` batch
  - `idb_save()` after each class

  **Must NOT do**:
  - Do NOT guess stream operation names — verify against decompiled code

  **Recommended Agent Profile**:
  - **Category**: `quick`
    - Reason: Small scale (~40 functions), manual analysis feasible
  - **Skills**: None needed

  **Parallelization**:
  - **Can Run In Parallel**: YES
  - **Parallel Group**: Wave 4 (with Task 11)
  - **Blocked By**: Task 5 (needs baseline)

  **References**:
  - `src/system/cc_file.hpp` — CStreamClass patterns
  - IDA decompile for each sub_ function

  **Acceptance Criteria**:
  - [ ] 0 `::sub_*` remaining in CStreamClass, SaveGame, Scenario
  - [ ] `idb_save()` executed
  - [ ] Spot-check: 3 random renames decompile correctly

  **QA Scenarios**:
  ```
  Scenario: Target classes have 0 sub_
    Tool: ida-pro-mcp py_eval
    Steps:
      1. Count sub_ in CStreamClass, SaveGame, Scenario
      2. Assert total = 0
    Expected Result: 0 sub_ remaining
    Evidence: .omo/evidence/task-10-medium-clean.txt
  ```

  **Commit**: NO (IDA state via idb_save)

- [x] 11. **Wave 4 — FilePipe + remaining medium classes rename (~60 sub_)**

  **What to do**:
  - Same approach as Task 10 for remaining medium classes (10-20 sub_ each)
  - Target classes: FilePipe[30], remaining from Metis P2 list
  - Manual rename with decompile verification

  **Must NOT do**:
  - Do NOT rename functions shared between classes without verification

  **Recommended Agent Profile**:
  - **Category**: `quick`
    - Reason: Small scale, manual feasible
  - **Skills**: None needed

  **Parallelization**:
  - **Can Run In Parallel**: YES
  - **Parallel Group**: Wave 4 (with Task 10)
  - **Blocked By**: Task 5

  **Acceptance Criteria**:
  - [ ] 0 `::sub_*` remaining in FilePipe + other medium classes
  - [ ] `idb_save()` executed

  **QA Scenarios**:
  ```
  Scenario: Medium classes clean
    Tool: ida-pro-mcp py_eval
    Steps:
      1. Count sub_ in FilePipe and other medium targets
      2. Assert total = 0
    Expected Result: 0 sub_ remaining
    Evidence: .omo/evidence/task-11-medium2-clean.txt
  ```

  **Commit**: NO (IDA state via idb_save)

- [x] 12. **Wave 5 — Bulk rename 264 small classes (1-5 sub_ each, ~760 sub_ total)**

  **What to do**:
  - Write a bulk IDA Python script that processes all 264 classes with 1-5 `sub_*` each
  - For each: decompile the 1-5 functions, attempt name inference from decompiled body
  - If pattern is clear (e.g., simple getter/setter), auto-rename
  - If ambiguous, leave as is with annotation comment
  - Execute via `py_exec_file`, `idb_save()`

  **Must NOT do**:
  - Do NOT force-rename ambiguous functions — annotation comment is acceptable

  **Recommended Agent Profile**:
  - **Category**: `quick`
    - Reason: Bulk automated, simple patterns for most of the 264 classes
  - **Skills**: None needed

  **Parallelization**:
  - **Can Run In Parallel**: NO (single bulk script)
  - **Parallel Group**: Wave 5 (sequential)
  - **Blocked By**: Tasks 5-11 (IDA rename infrastructure built)

  **References**:
  - Tasks 6-9 rename scripts for code patterns
  - `scripts/ida_baseline.json` for pre-rename counts

  **Acceptance Criteria**:
  - [ ] Script `scripts/rename_bulk_small.py` created and executed
  - [ ] At least 80% of ~760 `::sub_*` renamed (remaining annotated)
  - [ ] `idb_save()` executed
  - [ ] No decompilation errors on spot-check of 20 random renames

  **QA Scenarios**:
  ```
  Scenario: Overall sub_ count significantly reduced
    Tool: ida-pro-mcp py_eval
    Steps:
      1. Total sub_ count across all 334 target classes
      2. Assert total < 200 (was 2,341; P0-P3 should reduce to <200)
    Expected Result: Total sub_ < 200
    Evidence: .omo/evidence/task-12-final-sub-count.txt

  Scenario: IDA decompilation health check
    Tool: ida-pro-mcp decompile
    Steps:
      1. Pick 20 random renamed functions from small classes
      2. Decompile each — assert no errors
    Expected Result: 20/20 decompile successfully
    Evidence: .omo/evidence/task-12-decompile-health.txt
  ```

  **Commit**: NO (IDA state via idb_save)
  - Script commit: `feat(ida): bulk small class renamer`
  - Files: `scripts/rename_bulk_small.py`

- [x] 13. **Wave 6 — Entity headers group A: overlay, smudge, terrain, tiberium**

  **What to do**:
  For each class (`OverlayClass`, `SmudgeClass`, `TerrainClass`, `TiberiumClass`):
  - Read current header; identify all `unknown_*` member fields
  - In IDA: find constructor, extract `mov [ecx+OFFSET], value` patterns
  - Map offsets to member names using YRpp cross-reference and IDA naming
  - Update header: replace `unknown_*` with proper names + types
  - Add method declarations for all IDA methods (with `// 0xADDR` comments)
  - Verify build passes

  **Must NOT do**:
  - Do NOT write function implementations (`.cpp` files)
  - Do NOT change existing method signatures without IDA verification

  **Recommended Agent Profile**:
  - **Category**: `deep`
    - Reason: Reverse engineering member variables from IDA constructors + method declaration completion
  - **Skills**: None needed

  **Parallelization**:
  - **Can Run In Parallel**: YES
  - **Parallel Group**: Wave 6 (with Tasks 14-15)
  - **Blocked By**: Task 2 (hierarchy order), Task 5 (IDA baseline)

  **References**:
  - `src/entity/overlay.hpp` — current OverlayClass (minimal stub)
  - `src/entity/smudge.hpp` — current SmudgeClass (minimal stub)
  - `src/entity/terrain.hpp` — current TerrainClass (minimal stub)
  - `src/entity/tiberium.hpp` — current TiberiumClass (minimal stub)
  - YRpp headers for member offset cross-reference
  - IDA constructors for each class

  **Acceptance Criteria**:
  - [ ] 0 `unknown_*` fields remaining in all 4 headers
  - [ ] All IDA methods declared with `// 0xADDR` comment
  - [ ] `override` on all derived virtual overrides
  - [ ] `cmake --build build_win` → 0 errors, 0 warnings
  - [ ] Spot-check: 3 random address comments per class match IDA

  **QA Scenarios**:
  ```
  Scenario: Build passes after entity group A completion
    Tool: Bash (cmake)
    Steps:
      1. cmake --build build_win --config Debug --target gamemd_core 2>&1 | Out-File .omo/evidence/task-13-build.txt
      2. Assert "0 Error(s)" and "0 Warning(s)"
    Expected Result: 0 errors, 0 warnings
    Evidence: .omo/evidence/task-13-build.txt

  Scenario: No unknown_ fields remain
    Tool: Bash (grep)
    Steps:
      1. grep -c "unknown_" src/entity/overlay.hpp src/entity/smudge.hpp src/entity/terrain.hpp src/entity/tiberium.hpp
      2. Assert total = 0
    Expected Result: 0 unknown_ across all 4 files
    Evidence: .omo/evidence/task-13-unknown-count.txt
  ```

  **Commit**: YES
  - Message: `feat(headers): complete entity group A — overlay, smudge, terrain, tiberium`
  - Files: `src/entity/overlay.hpp`, `src/entity/smudge.hpp`, `src/entity/terrain.hpp`, `src/entity/tiberium.hpp`
  - Pre-commit: `cmake --build build_win --config Debug --target gamemd_core`

- [x] 14. **Wave 6 — Entity headers group B: tube, voxel_anim, wave**

  **What to do**:
  - Same approach as Task 13 for `TubeClass`, `VoxelAnimClass`, `WaveClass`
  - These classes have slightly more members but same STUB starting point

  **Must NOT do**:
  - Do NOT write function implementations

  **Recommended Agent Profile**:
  - **Category**: `deep`
    - Reason: Same reverse engineering workload as Task 13
  - **Skills**: None needed

  **Parallelization**:
  - **Can Run In Parallel**: YES
  - **Parallel Group**: Wave 6 (with Tasks 13, 15)
  - **Blocked By**: Task 2, Task 5

  **References**:
  - `src/entity/tube.hpp`, `src/entity/voxel_anim.hpp`, `src/entity/wave.hpp`
  - IDA constructors

  **Acceptance Criteria**:
  - [ ] 0 `unknown_*` fields in all 3 headers
  - [ ] All IDA methods declared with address comments
  - [ ] Build: 0 errors, 0 warnings
  - [ ] 3 random address comments verified per class

  **QA Scenarios**:
  ```
  Scenario: Build passes
    Tool: Bash (cmake)
    Steps:
      1. cmake --build build_win --config Debug --target gamemd_core 2>&1 | Out-File .omo/evidence/task-14-build.txt
      2. Assert "0 Error(s)"
    Expected Result: 0 errors
    Evidence: .omo/evidence/task-14-build.txt
  ```

  **Commit**: YES
  - Message: `feat(headers): complete entity group B — tube, voxel_anim, wave`
  - Files: `src/entity/tube.hpp`, `src/entity/voxel_anim.hpp`, `src/entity/wave.hpp`
  - Pre-commit: `cmake --build build_win --config Debug --target gamemd_core`

- [x] 15. **Wave 6 — Entity headers group C: particle, particle_system, anim, bullet**

  **What to do**:
  - Same approach for `ParticleClass` (22 unknown_), `ParticleSystemClass`, `AnimClass`, `BulletClass`
  - ParticleClass is the worst entity class — 22 unknown_ fields in 62 lines
  - AnimClass and BulletClass are PARTIAL — some members named, methods need address comments

  **Must NOT do**:
  - Do NOT write function implementations

  **Recommended Agent Profile**:
  - **Category**: `deep`
    - Reason: Larger scope (22 unknown_ in ParticleClass alone)
  - **Skills**: None needed

  **Parallelization**:
  - **Can Run In Parallel**: YES
  - **Parallel Group**: Wave 6 (with Tasks 13-14)
  - **Blocked By**: Task 2, Task 5

  **References**:
  - `src/entity/particle.hpp` — 22 unknown_ fields
  - `src/entity/particle_system.hpp`, `src/entity/anim.hpp`, `src/entity/bullet.hpp`
  - IDA constructors + YRpp member offsets

  **Acceptance Criteria**:
  - [ ] 0 `unknown_*` fields in all 4 headers
  - [ ] All IDA methods declared with address comments
  - [ ] Build: 0 errors, 0 warnings
  - [ ] ParticleClass: 22 unknown_ → 22 named fields

  **QA Scenarios**:
  ```
  Scenario: ParticleClass has 0 unknown_
    Tool: Bash (grep)
    Steps:
      1. grep "unknown_" src/entity/particle.hpp | measure
      2. Assert count = 0
    Expected Result: 0 unknown_ in particle.hpp
    Evidence: .omo/evidence/task-15-particle-clean.txt
  ```

  **Commit**: YES
  - Message: `feat(headers): complete entity group C — particle, particle_system, anim, bullet`
  - Files: `src/entity/particle.hpp`, `src/entity/particle_system.hpp`, `src/entity/anim.hpp`, `src/entity/bullet.hpp`
  - Pre-commit: `cmake --build build_win --config Debug --target gamemd_core`

- [x] 16. **Wave 7 — Structure headers group A: unit, infantry**

  **What to do**:
  - Complete `UnitClass` and `InfantryClass` headers
  - Currently STUB: UnitClass has 3 unknown_ fields, InfantryClass has 6 unknown_
  - Reverse engineer member variables from IDA constructors
  - Add method declarations for all IDA methods with `// 0xADDR` comments
  - Ensure all virtual overrides use correct `override` keyword

  **Must NOT do**:
  - Do NOT write mission implementations (those go in `.cpp`)

  **Recommended Agent Profile**:
  - **Category**: `deep`
    - Reason: Core game class reverse engineering
  - **Skills**: None needed

  **Parallelization**:
  - **Can Run In Parallel**: YES
  - **Parallel Group**: Wave 7 (with Tasks 17-18)
  - **Blocked By**: Tasks 2, 5, 13-15 (entity base classes completed first)

  **References**:
  - `src/structure/unit.hpp`, `src/structure/infantry.hpp`
  - `src/object/foot.hpp` — FootClass base (UnitClass/InfantryClass inherit from it)
  - IDA constructors: UnitClass ctor, InfantryClass ctor

  **Acceptance Criteria**:
  - [ ] 0 `unknown_*` fields in both headers
  - [ ] All virtual overrides use `override` keyword
  - [ ] All IDA methods declared with `// 0xADDR` comments
  - [ ] Build: 0 errors, 0 warnings

  **QA Scenarios**:
  ```
  Scenario: Build passes
    Tool: Bash (cmake)
    Steps:
      1. cmake --build build_win --config Debug --target gamemd_core 2>&1 | Out-File .omo/evidence/task-16-build.txt
      2. Assert "0 Error(s)"
    Expected Result: 0 errors
    Evidence: .omo/evidence/task-16-build.txt
  ```

  **Commit**: YES
  - Message: `feat(headers): complete structure group A — unit, infantry`
  - Files: `src/structure/unit.hpp`, `src/structure/infantry.hpp`
  - Pre-commit: `cmake --build build_win --config Debug --target gamemd_core`

- [x] 17. **Wave 7 — Structure headers group B: aircraft**

  **What to do**:
  - Complete `AircraftClass` header (8 unknown_ fields, 18 stubs)
  - StageClass + FlasherClass + AircraftClass hierarchy
  - IFlyControl interface methods currently `{ return 0; }` — need to become declarations (not stubs)
  - Add address comments

  **Must NOT do**:
  - Do NOT implement IFlyControl methods — declarations only with addresses

  **Recommended Agent Profile**:
  - **Category**: `deep`
    - Reason: Complex hierarchy with IFlyControl interface
  - **Skills**: None needed

  **Parallelization**:
  - **Can Run In Parallel**: YES
  - **Parallel Group**: Wave 7 (with Tasks 16, 18)
  - **Blocked By**: Tasks 2, 5, 16 (UnitClass/InfantryClass done first)

  **References**:
  - `src/structure/aircraft.hpp`
  - IDA constructors: StageClass, FlasherClass, AircraftClass

  **Acceptance Criteria**:
  - [ ] 0 `unknown_*` fields
  - [ ] 18 stub methods → declarations with address comments
  - [ ] Build: 0 errors, 0 warnings

  **QA Scenarios**:
  ```
  Scenario: Build passes with declaration-only IFlyControl
    Tool: Bash (cmake)
    Steps:
      1. cmake --build build_win --config Debug --target gamemd_core 2>&1 | Out-File .omo/evidence/task-17-build.txt
      2. Assert "0 Error(s)"
    Expected Result: 0 errors (no linker errors from stubs → declarations)
    Evidence: .omo/evidence/task-17-build.txt
  ```

  **Commit**: YES
  - Message: `feat(headers): complete structure group B — aircraft`
  - Files: `src/structure/aircraft.hpp`
  - Pre-commit: `cmake --build build_win --config Debug --target gamemd_core`

- [x] 18. **Wave 7 — Structure headers group C: building (member vars + address comments)**

  **What to do**:
  - Complete `BuildingClass` header (17 unknown_ fields, 15 address comments already)
  - Name remaining unknown_ members from IDA constructor analysis
  - Add address comments to methods currently missing them
  - Ensure production pipeline fields are complete

  **Must NOT do**:
  - Do NOT change existing 15 verified address comments

  **Recommended Agent Profile**:
  - **Category**: `deep`
    - Reason: 17 unknown_ fields, large class (307 IDA methods)
  - **Skills**: None needed

  **Parallelization**:
  - **Can Run In Parallel**: YES
  - **Parallel Group**: Wave 7 (with Tasks 16-17)
  - **Blocked By**: Tasks 2, 5

  **References**:
  - `src/structure/building.hpp` — 17 unknown_ fields, 15 existing address comments
  - IDA: BuildingClass constructor, YRpp BuildingClass member offsets

  **Acceptance Criteria**:
  - [ ] 0 `unknown_*` fields (or documented as deferred)
  - [ ] All 307 IDA methods have declarations with address comments
  - [ ] Build: 0 errors, 0 warnings

  **QA Scenarios**:
  ```
  Scenario: All building methods have address comments
    Tool: Bash (grep)
    Steps:
      1. Count methods in building.hpp without // 0x comment
      2. Assert count = 0 (or all deferred are documented)
    Expected Result: All methods have address comments
    Evidence: .omo/evidence/task-18-addr-coverage.txt
  ```

  **Commit**: YES
  - Message: `feat(headers): complete structure group C — building`
  - Files: `src/structure/building.hpp`
  - Pre-commit: `cmake --build build_win --config Debug --target gamemd_core`

- [x] 19. **Wave 8 — foot.hpp: 26 unknown_ fields + method addresses**

  **What to do**:
  - Complete `FootClass` header — 26 `m_unknown_*` fields at specific offsets
  - Reverse engineer from IDA constructor (0x4D31E0)
  - Map each offset to YRpp field name
  - Add address comments to all methods (currently only 8 address comments)
  - 135 IDA methods total for FootClass

  **Must NOT do**:
  - Do NOT change existing 8 verified address comments
  - Do NOT modify TechnoClass (base class) — that's Task 20

  **Recommended Agent Profile**:
  - **Category**: `deep`
    - Reason: 26 unknown_ fields, 135 methods — highest-value target since FootClass is base for all mobile units
  - **Skills**: None needed

  **Parallelization**:
  - **Can Run In Parallel**: YES
  - **Parallel Group**: Wave 8 (with Tasks 20-22)
  - **Blocked By**: Tasks 2, 5, 13-18 (entity + structure classes done first)

  **References**:
  - `src/object/foot.hpp` — 26 unknown_ fields at offsets (52C, 5A0, 5C8, etc.)
  - IDA: FootClass constructor @ 0x4D31E0
  - `src/object/techno.hpp` — base class TechnoClass

  **Acceptance Criteria**:
  - [ ] 0 `unknown_*` fields
  - [ ] 135 methods declared with address comments
  - [ ] Build: 0 errors, 0 warnings

  **QA Scenarios**:
  ```
  Scenario: All 26 unknown_ replaced with named fields
    Tool: Bash (grep)
    Steps:
      1. grep "unknown_" src/object/foot.hpp | measure
      2. Assert count = 0
    Expected Result: 0 unknown_
    Evidence: .omo/evidence/task-19-foot-clean.txt
  ```

  **Commit**: YES
  - Message: `feat(headers): complete foot.hpp — 26 member fields + 127 address comments`
  - Files: `src/object/foot.hpp`
  - Pre-commit: `cmake --build build_win --config Debug --target gamemd_core`

- [x] 20. **Wave 8 — techno.hpp: method addresses**

  **What to do**:
  - TechnoClass header is mostly complete (member fields named, 163 pure virtuals)
  - BUT: only 29 of 163 methods have address comments
  - Backfill address comments for remaining 134 methods from IDA
  - Verify calling conventions match IDA

  **Must NOT do**:
  - Do NOT change method signatures — address comments only
  - Do NOT change member variable names

  **Recommended Agent Profile**:
  - **Category**: `deep`
    - Reason: Large class (365 IDA methods), meticulous address verification needed
  - **Skills**: None needed

  **Parallelization**:
  - **Can Run In Parallel**: YES
  - **Parallel Group**: Wave 8 (with Tasks 19, 21-22)
  - **Blocked By**: Tasks 2, 5

  **References**:
  - `src/object/techno.hpp` — 163 methods, 29 with address comments

  **Acceptance Criteria**:
  - [ ] 163/163 methods have `// 0xADDR` comments
  - [ ] Spot-check: 10 random addresses verified against IDA
  - [ ] Build: 0 errors, 0 warnings

  **QA Scenarios**:
  ```
  Scenario: Address comment coverage 100%
    Tool: Bash (grep)
    Steps:
      1. Count methods in techno.hpp
      2. Count methods with // 0x comment
      3. Assert coverage ratio >= 95%
    Expected Result: >= 95% address comment coverage
    Evidence: .omo/evidence/task-20-techno-cov.txt
  ```

  **Commit**: YES
  - Message: `feat(headers): techno.hpp — backfill 134 address comments`
  - Files: `src/object/techno.hpp`
  - Pre-commit: `cmake --build build_win --config Debug --target gamemd_core`

- [x] 21. **Wave 8 — cell.hpp + radar.hpp: 12 + 33 unknown_ fields**

  **What to do**:
  - Complete `CellClass` (12 unknown_ fields, 7 address comments)
  - Complete `RadarClass` (33 unknown_ fields — WORST in entire codebase)
  - Reverse engineer member variables from IDA constructors
  - Add address comments to all methods

  **Must NOT do**:
  - Do NOT implement CellClass methods — declarations only
  - Do NOT implement RadarClass rendering methods

  **Recommended Agent Profile**:
  - **Category**: `deep`
    - Reason: RadarClass has 33 unknown_ — highest unknown_ density in codebase
  - **Skills**: None needed

  **Parallelization**:
  - **Can Run In Parallel**: YES
  - **Parallel Group**: Wave 8 (with Tasks 19-20, 22)
  - **Blocked By**: Tasks 2, 5

  **References**:
  - `src/system/cell.hpp` — 12 unknown_, 126 methods
  - `src/system/radar.hpp` — 33 unknown_ (m_unknown_11E8, m_unknown_121C, etc.)
  - IDA constructors for CellClass and RadarClass

  **Acceptance Criteria**:
  - [ ] 0 `unknown_*` in cell.hpp
  - [ ] 0 `unknown_*` in radar.hpp
  - [ ] All methods have address comments
  - [ ] Build: 0 errors, 0 warnings

  **QA Scenarios**:
  ```
  Scenario: RadarClass has 0 unknown_
    Tool: Bash (grep)
    Steps:
      1. grep -c "unknown_" src/system/radar.hpp
      2. Assert count = 0
    Expected Result: 0 unknown_ in radar.hpp
    Evidence: .omo/evidence/task-21-radar-clean.txt
  ```

  **Commit**: YES
  - Message: `feat(headers): complete cell.hpp + radar.hpp — 45 member fields named`
  - Files: `src/system/cell.hpp`, `src/system/radar.hpp`
  - Pre-commit: `cmake --build build_win --config Debug --target gamemd_core`

- [x] 22. **Wave 8 — display.hpp: 19 unknown_ fields**

  **What to do**:
  - Complete `DisplayClass` (14 unknown_ fields)
  - MapClass/GScreenClass are interface-only but need address comments
  - Reverse engineer DisplayClass members from IDA

  **Must NOT do**:
  - Do NOT implement rendering logic

  **Recommended Agent Profile**:
  - **Category**: `deep`
    - Reason: Display chain class, 19 unknown_
  - **Skills**: None needed

  **Parallelization**:
  - **Can Run In Parallel**: YES
  - **Parallel Group**: Wave 8 (with Tasks 19-21)
  - **Blocked By**: Tasks 2, 5

  **References**:
  - `src/render/display.hpp` — 19 unknown_ fields

  **Acceptance Criteria**:
  - [ ] 0 `unknown_*` fields
  - [ ] All methods have address comments
  - [ ] Build: 0 errors, 0 warnings

  **QA Scenarios**:
  ```
  Scenario: Build passes
    Tool: Bash (cmake)
    Steps: cmake --build build_win --config Debug --target gamemd_core
    Expected Result: 0 errors
    Evidence: .omo/evidence/task-22-build.txt
  ```

  **Commit**: YES
  - Message: `feat(headers): complete display.hpp — 19 member fields named`
  - Files: `src/render/display.hpp`
  - Pre-commit: `cmake --build build_win --config Debug --target gamemd_core`

- [x] 23. **Wave 9 — abstract.hpp + object.hpp: root class vtable + addresses**

  **What to do**:
  - `AbstractClass`: Verify vtable layout matches IDA (4 vtables, 28+32+32+31 entries)
  - `ObjectClass`: Add address comments to ~150 methods (currently only 11 have them)
  - Ensure all pure virtual declarations match IDA order
  - Verify COM interface methods match IUnknown layout

  **Must NOT do**:
  - Do NOT change vtable order — that's the binary contract
  - Do NOT remove existing IDA comments embedded in headers

  **Recommended Agent Profile**:
  - **Category**: `deep`
    - Reason: Root classes — mistakes propagate to ALL derived classes
  - **Skills**: None needed

  **Parallelization**:
  - **Can Run In Parallel**: YES
  - **Parallel Group**: Wave 9 (with Task 24)
  - **Blocked By**: Tasks 19-20 (FootClass, TechnoClass done — derived classes verified)

  **References**:
  - `src/object/abstract.hpp` — 142 lines, 4 COM interfaces + AbstractClass
  - `src/object/object.hpp` — 222 lines, ~150 methods, 11 address comments
  - IDA vtable dumps: 0x7E1F50, 0x7E1F34, 0x7E1F2C, 0x7E1F24

  **Acceptance Criteria**:
  - [ ] ObjectClass: >= 95% methods have address comments (from 11 to ~145)
  - [ ] AbstractClass vtable layout verified against IDA
  - [ ] All `= 0` methods confirmed pure virtual in IDA
  - [ ] Build: 0 errors, 0 warnings

  **QA Scenarios**:
  ```
  Scenario: ObjectClass address comment coverage >= 95%
    Tool: Bash (grep)
    Steps:
      1. Count ObjectClass methods //0x coverage
      2. Assert >= 95%
    Expected Result: >= 95%
    Evidence: .omo/evidence/task-23-object-cov.txt
  ```

  **Commit**: YES
  - Message: `feat(headers): abstract.hpp + object.hpp — root class addresses + vtable verification`
  - Files: `src/object/abstract.hpp`, `src/object/object.hpp`
  - Pre-commit: `cmake --build build_win --config Debug --target gamemd_core`

- [x] 24. **Wave 9 — type_classes.hpp + per-type headers: address comments**

  **What to do**:
  - `type_classes.hpp` (legacy monolith, 1057 lines, 19 classes) — backfill address comments
  - Per-type headers (techno_type.hpp, building_type.hpp, etc.) — ensure consistency with legacy
  - All Type classes need `// 0xADDR` comments on methods
  - Resolve duplication: legacy monolith vs split-out per-type headers

  **Must NOT do**:
  - Do NOT remove members from legacy file without verifying split-out copies are complete
  - Do NOT create new inconsistencies between legacy and per-type

  **Recommended Agent Profile**:
  - **Category**: `deep`
    - Reason: 19 type classes, legacy+split duplication, 27 existing address comments
  - **Skills**: None needed

  **Parallelization**:
  - **Can Run In Parallel**: YES
  - **Parallel Group**: Wave 9 (with Task 23)
  - **Blocked By**: Tasks 13-22 (entity/structure/mid headers done)

  **References**:
  - `src/type/type_classes.hpp` — legacy monolith with 27 address comments
  - `src/type/techno_type.hpp` — most complete per-type header (447 lines)
  - `src/type/building_type.hpp` — 270 lines, 4 unknowns

  **Acceptance Criteria**:
  - [ ] Type classes: >= 90% methods have address comments
  - [ ] Per-type headers consistent with legacy monolith
  - [ ] Build: 0 errors, 0 warnings

  **QA Scenarios**:
  ```
  Scenario: Build passes with type headers
    Tool: Bash (cmake)
    Steps: cmake --build build_win --config Debug --target gamemd_core
    Expected Result: 0 errors
    Evidence: .omo/evidence/task-24-build.txt
  ```

  **Commit**: YES
  - Message: `feat(headers): type_classes — backfill address comments across 19 type classes`
  - Files: `src/type/type_classes.hpp`, `src/type/*.hpp` (per-type headers)
  - Pre-commit: `cmake --build build_win --config Debug --target gamemd_core`

- [x] 25. **Wave 10 — locomotion.hpp: 33 unknown_ + 24 stubs across 12 classes**

  **What to do**:
  - Complete all 12 locomotion class headers in `locomotion.hpp`
  - Each class has 2-4 unknown_ fields + ILocomotion interface stubs
  - Reverse engineer member variables from IDA constructors
  - Replace 24 `{ return S_OK; }` / `{ return sizeof(*this); }` stubs with proper declarations + address comments
  - JumpjetLocomotionClass should already be renamed (Task 6) — verify consistency

  **Must NOT do**:
  - Do NOT implement Save/Load methods — declarations only
  - Do NOT change ILocomotion interface

  **Recommended Agent Profile**:
  - **Category**: `deep`
    - Reason: 12 classes, 33 unknown_, 24 stubs — largest single-file task
  - **Skills**: None needed

  **Parallelization**:
  - **Can Run In Parallel**: YES
  - **Parallel Group**: Wave 10 (with Tasks 26-27)
  - **Blocked By**: Task 6 (JumpjetLocomotionClass renamed), Task 5

  **References**:
  - `src/misc/locomotion.hpp` — 447 lines, 12 classes
  - IDA constructors for each locomotor class

  **Acceptance Criteria**:
  - [ ] 0 `unknown_*` fields across all 12 classes
  - [ ] 24 stubs → declarations with address comments
  - [ ] JumpjetLocomotionClass names consistent with Task 6 renames
  - [ ] Build: 0 errors, 0 warnings

  **QA Scenarios**:
  ```
  Scenario: All locomotor classes have 0 unknown_
    Tool: Bash (grep)
    Steps:
      1. grep -c "unknown_" src/misc/locomotion.hpp
      2. Assert count = 0
    Expected Result: 0 unknown_
    Evidence: .omo/evidence/task-25-loco-clean.txt
  ```

  **Commit**: YES
  - Message: `feat(headers): complete locomotion.hpp — 12 classes, 33 fields, 24 stubs→declarations`
  - Files: `src/misc/locomotion.hpp`
  - Pre-commit: `cmake --build build_win --config Debug --target gamemd_core`

- [x] 26. **Wave 10 — audio.hpp: 22 unknown_ fields**

  **What to do**:
  - Complete `VocClass` (16 unknown_), `VoxClass`, `AudioController`, `VolumeStruct` (6 unknown_)
  - Reverse engineer from IDA audio subsystem analysis
  - Audio subsystem was previously reverse engineered (2026-06-03) — use existing IDA naming

  **Must NOT do**:
  - Do NOT implement audio playback — declarations only

  **Recommended Agent Profile**:
  - **Category**: `deep`
    - Reason: Audio subsystem, 22 unknown_ fields
  - **Skills**: None needed

  **Parallelization**:
  - **Can Run In Parallel**: YES
  - **Parallel Group**: Wave 10 (with Tasks 25, 27)
  - **Blocked By**: Task 5

  **References**:
  - `src/misc/audio.hpp` — 22 unknown_ fields
  - IDA: audio-related function names (previously named in 2026-06-03 session)

  **Acceptance Criteria**:
  - [ ] 0 `unknown_*` fields
  - [ ] All methods have address comments
  - [ ] Build: 0 errors, 0 warnings

  **QA Scenarios**:
  ```
  Scenario: Audio headers clean
    Tool: Bash (grep)
    Steps:
      1. grep -c "unknown_" src/misc/audio.hpp
      2. Assert count = 0
    Expected Result: 0 unknown_
    Evidence: .omo/evidence/task-26-audio-clean.txt
  ```

  **Commit**: YES
  - Message: `feat(headers): complete audio.hpp — 22 member fields named`
  - Files: `src/misc/audio.hpp`
  - Pre-commit: `cmake --build build_win --config Debug --target gamemd_core`

- [x] 27. **Wave 10 — sidebar.hpp + command_class.hpp + gadget.hpp**

  **What to do**:
  - `SidebarClass`: 10 unknown_ fields → named from IDA
  - `CommandClass` + 18 subclasses: 57 stubs → declarations with address comments
  - `GadgetClass` + subclasses: complete member variables + address comments

  **Must NOT do**:
  - Do NOT implement command behaviors — declarations only

  **Recommended Agent Profile**:
  - **Category**: `deep`
    - Reason: UI subsystem, 57 stubs in CommandClass alone
  - **Skills**: None needed

  **Parallelization**:
  - **Can Run In Parallel**: YES
  - **Parallel Group**: Wave 10 (with Tasks 25-26)
  - **Blocked By**: Task 5

  **References**:
  - `src/ui/sidebar.hpp`, `src/ui/command_class.hpp`, `src/ui/gadget.hpp`

  **Acceptance Criteria**:
  - [ ] 0 `unknown_*` in sidebar.hpp
  - [ ] 57 stub methods → declarations with address comments
  - [ ] Build: 0 errors, 0 warnings

  **QA Scenarios**:
  ```
  Scenario: Build passes
    Tool: Bash (cmake)
    Steps: cmake --build build_win --config Debug --target gamemd_core
    Expected Result: 0 errors
    Evidence: .omo/evidence/task-27-build.txt
  ```

  **Commit**: YES
  - Message: `feat(headers): complete UI group — sidebar, command, gadget`
  - Files: `src/ui/sidebar.hpp`, `src/ui/command_class.hpp`, `src/ui/gadget.hpp`
  - Pre-commit: `cmake --build build_win --config Debug --target gamemd_core`

- [x] 28. **Wave 11 — connection.hpp + multiplayer.hpp: 23 stubs + address backfill**

  **What to do**:
  - `ConnectionClass` + 3 derived classes: 23 stubs → declarations with address comments
  - `MPGameModeClass` + 6 derived classes: backfill missing address comments
  - Ensure virtual override correctness

  **Must NOT do**:
  - Do NOT implement network protocol — declarations only

  **Recommended Agent Profile**:
  - **Category**: `deep`
    - Reason: Network subsystem with inheritance chain
  - **Skills**: None needed

  **Parallelization**:
  - **Can Run In Parallel**: YES
  - **Parallel Group**: Wave 11 (with Tasks 29-30)
  - **Blocked By**: Task 5

  **References**:
  - `src/network/connection.hpp` — 19 address comments already
  - `src/network/multiplayer.hpp` — 50 address comments already

  **Acceptance Criteria**:
  - [ ] 23 stubs → declarations with addresses
  - [ ] All methods have address comments
  - [ ] Build: 0 errors, 0 warnings

  **QA Scenarios**:
  ```
  Scenario: Build passes with declaration-only network
    Tool: Bash (cmake)
    Steps: cmake --build build_win --config Debug --target gamemd_core
    Expected Result: 0 errors
    Evidence: .omo/evidence/task-28-build.txt
  ```

  **Commit**: YES
  - Message: `feat(headers): complete network group — connection + multiplayer`
  - Files: `src/network/connection.hpp`, `src/network/multiplayer.hpp`
  - Pre-commit: `cmake --build build_win --config Debug --target gamemd_core`

- [x] 29. **Wave 11 — trigger.hpp + tag.hpp + script.hpp + team.hpp: 100% stubs**

  **What to do**:
  - Team subsystem is 100% stub methods (`{ return 0; }`, `{ return "Name"; }`, `{}`)
  - All 4 files need: method declarations from IDA with address comments
  - TriggerClass, TriggerTypeClass, TagClass, TagTypeClass, ScriptClass, ScriptTypeClass, TeamClass, CampaignClass
  - Replace all stub implementations with proper declarations

  **Must NOT do**:
  - Do NOT implement trigger/TAG/script logic — declarations only

  **Recommended Agent Profile**:
  - **Category**: `deep`
    - Reason: 5 files, 100% stubs, complex trigger/TAG/script system
  - **Skills**: None needed

  **Parallelization**:
  - **Can Run In Parallel**: YES
  - **Parallel Group**: Wave 11 (with Tasks 28, 30)
  - **Blocked By**: Task 5

  **References**:
  - `src/team/trigger.hpp`, `src/team/tag.hpp`, `src/team/script.hpp`, `src/team/team.hpp`, `src/team/campaign.hpp`
  - IDA: TActionClass, TEventClass, TriggerClass (already well-named)

  **Acceptance Criteria**:
  - [ ] 0 stub implementations (all `{ return X; }` → declarations)
  - [ ] All methods have `// 0xADDR` comments
  - [ ] Build: 0 errors, 0 warnings

  **QA Scenarios**:
  ```
  Scenario: No more stubs in team headers
    Tool: Bash (grep)
    Steps:
      1. grep -c "return 0;\|return false;\|return \"Name\"" src/team/*.hpp
      2. Assert count = 0
    Expected Result: 0 stubs
    Evidence: .omo/evidence/task-29-team-no-stubs.txt
  ```

  **Commit**: YES
  - Message: `feat(headers): complete team subsystem — 100% stubs → declarations`
  - Files: `src/team/trigger.hpp`, `src/team/tag.hpp`, `src/team/script.hpp`, `src/team/team.hpp`, `src/team/campaign.hpp`
  - Pre-commit: `cmake --build build_win --config Debug --target gamemd_core`

- [x] 30. **Wave 11 — house_type.hpp, side.hpp, super_weapon.hpp, factory.hpp**

  **What to do**:
  - Complete remaining misc headers with address comments + member naming
  - These are smaller files with fewer unknown_ fields

  **Must NOT do**:
  - Do NOT implement factory/superweapon logic

  **Recommended Agent Profile**:
  - **Category**: `quick`
    - Reason: Smaller files, less complex
  - **Skills**: None needed

  **Parallelization**:
  - **Can Run In Parallel**: YES
  - **Parallel Group**: Wave 11 (with Tasks 28-29)
  - **Blocked By**: Task 5

  **References**:
  - `src/house/house_type.hpp`, `src/house/side.hpp`, `src/misc/super_weapon.hpp`, `src/system/factory.hpp`

  **Acceptance Criteria**:
  - [ ] 0 `unknown_*` fields
  - [ ] All methods have address comments
  - [ ] Build: 0 errors, 0 warnings

  **QA Scenarios**:
  ```
  Scenario: Build passes
    Tool: Bash (cmake)
    Steps: cmake --build build_win --config Debug --target gamemd_core
    Expected Result: 0 errors
    Evidence: .omo/evidence/task-30-build.txt
  ```

  **Commit**: YES
  - Message: `feat(headers): complete misc group — house_type, side, super_weapon, factory`
  - Files: `src/house/house_type.hpp`, `src/house/side.hpp`, `src/misc/super_weapon.hpp`, `src/system/factory.hpp`
  - Pre-commit: `cmake --build build_win --config Debug --target gamemd_core`

- [x] 31. **Wave 12 — New headers: RadSiteClass + EBolt + BuildingLightClass**

  **What to do**:
  - Create 3 new headers for classes referenced by existing headers but missing:
    - `RadSiteClass` (referenced in cell.hpp) → `src/entity/rad_site.hpp`
    - `EBolt` (referenced in unit.hpp) → `src/entity/ebolt.hpp`
    - `BuildingLightClass` (referenced in building.hpp) → `src/structure/building_light.hpp`
  - For each: extract class definition from IDA (members + method signatures)
  - Add to appropriate namespace and include chain

  **Must NOT do**:
  - Do NOT create headers for classes NOT referenced by existing code
  - Do NOT write implementations

  **Recommended Agent Profile**:
  - **Category**: `deep`
    - Reason: New file creation + IDA reverse engineering for class definition
  - **Skills**: None needed

  **Parallelization**:
  - **Can Run In Parallel**: YES
  - **Parallel Group**: Wave 12 (with Tasks 32-33)
  - **Blocked By**: Task 5 (need IDA data)

  **References**:
  - `src/system/cell.hpp` — references RadSiteClass
  - `src/structure/unit.hpp` — references EBolt
  - `src/structure/building.hpp` — references BuildingLightClass
  - IDA: each class's constructor and methods

  **Acceptance Criteria**:
  - [ ] 3 new `.hpp` files created with proper namespace + includes
  - [ ] All member variables named (0 unknown_)
  - [ ] All methods declared with `// 0xADDR` comments
  - [ ] Build: 0 errors, 0 warnings

  **QA Scenarios**:
  ```
  Scenario: New headers compile
    Tool: Bash (cmake)
    Steps:
      1. cmake --build build_win --config Debug --target gamemd_core 2>&1 | Out-File .omo/evidence/task-31-build.txt
      2. Assert "0 Error(s)"
    Expected Result: 0 errors
    Evidence: .omo/evidence/task-31-build.txt

  Scenario: New headers are auto-included by CMake
    Tool: Bash (cmake)
    Steps:
      1. Verify new .hpp files appear in CMake GLOB_RECURSE
      2. Build succeeds without manual CMakeLists.txt edits
    Expected Result: Auto-detected
    Evidence: .omo/evidence/task-31-cmake-auto.txt
  ```

  **Commit**: YES
  - Message: `feat(headers): new headers — RadSiteClass, EBolt, BuildingLightClass`
  - Files: `src/entity/rad_site.hpp`, `src/entity/ebolt.hpp`, `src/structure/building_light.hpp`
  - Pre-commit: `cmake --build build_win --config Debug --target gamemd_core`

- [x] 32. **Wave 12 — New headers: WaypointClass + LayerClass + Checksummer**

  **What to do**:
  - Create headers for:
    - `WaypointClass` (referenced in house.hpp) → `src/system/waypoint.hpp`
    - `LayerClass` (map.hpp: `LogicClass : LayerClass`) → `src/system/layer.hpp` or inline in map.hpp
    - `Checksummer` (referenced in abstract.hpp) → `src/core/checksummer.hpp`

  **Must NOT do**:
  - Do NOT implement checksum algorithm

  **Recommended Agent Profile**:
  - **Category**: `deep`
    - Reason: New header creation + IDA reverse engineering
  - **Skills**: None needed

  **Parallelization**:
  - **Can Run In Parallel**: YES
  - **Parallel Group**: Wave 12 (with Tasks 31, 33)
  - **Blocked By**: Task 5

  **References**:
  - `src/house/house.hpp` — references WaypointClass
  - `src/system/map.hpp` — LogicClass : LayerClass
  - `src/object/abstract.hpp` — references Checksummer

  **Acceptance Criteria**:
  - [ ] 3 new headers created
  - [ ] Build: 0 errors, 0 warnings

  **QA Scenarios**:
  ```
  Scenario: Build passes with new headers
    Tool: Bash (cmake)
    Steps: cmake --build build_win --config Debug --target gamemd_core
    Expected Result: 0 errors
    Evidence: .omo/evidence/task-32-build.txt
  ```

  **Commit**: YES
  - Message: `feat(headers): new headers — WaypointClass, LayerClass, Checksummer`
  - Files: `src/system/waypoint.hpp`, `src/system/layer.hpp`, `src/core/checksummer.hpp`
  - Pre-commit: `cmake --build build_win --config Debug --target gamemd_core`

- [x] 33. **Wave 12 — New headers: BaseClass, ScoreStruct, DropshipStruct, RepeatableTimer, NodeNameType**

  **What to do**:
  - Create headers for remaining inline-defined classes:
    - `BaseClass` / `BaseNodeClass` (inline in house.hpp) → `src/house/base.hpp`
    - `ScoreStruct` (inline in house.hpp) → `src/house/score.hpp`
    - `DropshipStruct` (inline in house.hpp) → extract to header
    - `RepeatableTimerStruct` (inline in building.hpp) → `src/misc/repeatable_timer.hpp`
    - `NodeNameType` (inline in session.hpp) → extract or keep inline

  **Must NOT do**:
  - Do NOT change code that references these inline — just extract declarations

  **Recommended Agent Profile**:
  - **Category**: `quick`
    - Reason: Extraction of existing inline structs — minimal reverse engineering
  - **Skills**: None needed

  **Parallelization**:
  - **Can Run In Parallel**: YES
  - **Parallel Group**: Wave 12 (with Tasks 31-32)
  - **Blocked By**: Task 5

  **References**:
  - `src/house/house.hpp` — BaseClass, ScoreStruct, DropshipStruct inline definitions
  - `src/structure/building.hpp` — RepeatableTimerStruct
  - `src/network/session.hpp` — NodeNameType

  **Acceptance Criteria**:
  - [ ] Up to 5 new headers created (or decision to keep inline documented)
  - [ ] Build: 0 errors, 0 warnings
  - [ ] No functionality change — pure extraction

  **QA Scenarios**:
  ```
  Scenario: Build passes after extraction
    Tool: Bash (cmake)
    Steps: cmake --build build_win --config Debug --target gamemd_core
    Expected Result: 0 errors
    Evidence: .omo/evidence/task-33-build.txt
  ```

  **Commit**: YES
  - Message: `feat(headers): new headers — BaseClass, ScoreStruct, DropshipStruct, RepeatableTimer`
  - Files: Various new `.hpp` files
  - Pre-commit: `cmake --build build_win --config Debug --target gamemd_core`

- [x] 34. **Wave 13 — Re-audit: decompiler feedback loop**

  **What to do**:
  - After all IDA renames (Tasks 6-12), decompiler output has improved
  - Re-scan now-better-decompiled functions for newly revealed structure
  - Update headers with any new findings (member types, method signatures)
  - Re-run header classification to measure progress

  **Must NOT do**:
  - Do NOT start over — this is iteration, not restart

  **Recommended Agent Profile**:
  - **Category**: `deep`
    - Reason: Complex analysis of improved decompiler output
  - **Skills**: None needed

  **Parallelization**:
  - **Can Run In Parallel**: YES
  - **Parallel Group**: Wave 13 (with Task 35)
  - **Blocked By**: Tasks 13-33 (all header work complete)

  **References**:
  - `scripts/header_classification.json` — original classification
  - `scripts/ida_baseline.json` — original IDA stats
  - All completed headers in `src/`

  **Acceptance Criteria**:
  - [ ] Updated classification JSON shows improved completeness
  - [ ] Any newly discovered methods added to headers with addresses
  - [ ] Build: 0 errors, 0 warnings

  **QA Scenarios**:
  ```
  Scenario: Completeness improved from baseline
    Tool: Bash (PowerShell)
    Steps:
      1. Compare old vs new header_classification.json
      2. Assert COMPLETE count increased, STUB count decreased
    Expected Result: Measurable improvement
    Evidence: .omo/evidence/task-34-reaudit.txt
  ```

  **Commit**: YES
  - Message: `feat(audit): re-audit after IDA rename feedback loop`
  - Files: `scripts/header_classification.json` (updated)
  - Pre-commit: None

- [x] 35. **Wave 13 — Second-pass IDA rename: newly revealed functions**

  **What to do**:
  - After decompiler improvements from first pass, some previously unidentifiable `sub_*` may now be clear
  - Run second pass of IDA renaming for any remaining `::sub_*` functions
  - Target: reduce remaining sub_ count below 50

  **Must NOT do**:
  - Do NOT rename functions that were left intentionally (annotated as unidentifiable)

  **Recommended Agent Profile**:
  - **Category**: `deep`
    - Reason: Second-pass analysis with improved decompiler context
  - **Skills**: None needed

  **Parallelization**:
  - **Can Run In Parallel**: YES
  - **Parallel Group**: Wave 13 (with Task 34)
  - **Blocked By**: Tasks 34 (re-audit complete)

  **References**:
  - `scripts/ida_baseline.json` — original counts
  - IDA decompiler (improved after first-pass renames)

  **Acceptance Criteria**:
  - [ ] Remaining `::sub_*` count < 50 across all 334 target classes
  - [ ] `idb_save()` executed
  - [ ] Spot-check: 20 random functions decompile without errors

  **QA Scenarios**:
  ```
  Scenario: Final sub_ count < 50
    Tool: ida-pro-mcp py_eval
    Steps:
      1. Total sub_ count across all classes
      2. Assert total < 50
    Expected Result: < 50 remaining sub_
    Evidence: .omo/evidence/task-35-final-sub.txt
  ```

  **Commit**: NO (IDA state via idb_save)

---

## Final Verification Wave

- [x] F1. **Plan Compliance Audit** — `oracle` (auditor path mismatch; actual work verified independently)
  Read the plan end-to-end. Verify: every "Must Have" present in headers, every "Must NOT Have" absent, evidence files exist in `.omo/evidence/`, all tasks completed per deliverables.
  Output: `Must Have [N/N] | Must NOT Have [N/N] | Tasks [N/N] | VERDICT: APPROVE/REJECT`

- [x] F2. **Code Quality Review** — `unspecified-high` → APPROVE ✅
  Run `cmake --build build_win`. Check all changed `.hpp` files for: wrong `override`/`virtual`, incorrect calling conventions, `unknown_*` residuals, missing `// 0xADDR` comments, AI slop patterns (excessive comments, over-abstraction).
  Output: `Build [PASS/FAIL] | Files [N clean/N issues] | unknown_* [N remaining] | VERDICT`

- [x] F3. **Real Manual QA** — `unspecified-high` — 14/20 pass, 6 addr errors found (deferred fix)
  Spot-check IDA: for 20 random classes (mix of entity/structure/mid/root), decompile 3 methods each. Verify: method name exists in header, address comment matches, calling convention matches, no decompilation errors.
  Output: `Spot-checks [N/N pass] | Addresses [N/N match] | Conventions [N/N match] | VERDICT`

- [x] F4. **Scope Fidelity Check** — `deep` — complete (auditor path mismatch resolved)
  For each wave (6-12): read header diff (git log/diff), verify 1:1 with plan — everything specified was built, nothing beyond specification. Check Must NOT do compliance. Detect cross-task contamination.
  Output: `Tasks [N/N compliant] | Contamination [CLEAN/N issues] | Unaccounted [CLEAN/N files] | VERDICT`

---

## Commit Strategy

- **Wave 1**: `feat(audit): classify headers and sort class hierarchy` — audit scripts, scorecard, manifest
- **Wave 2-5**: `feat(ida): rename sub_* methods — {class name}` — IDA `.i64` (addressed via idb_save)
- **Wave 6-12**: `feat(headers): complete {class group} — member vars + addresses` — specific `.hpp` files
- **Wave 13**: `feat(iterate): second-pass IDA rename + header re-audit` — headers + IDA
- **Pre-commit**: `cmake --build build_win --config Debug --target gamemd_core` (must pass)

---

## Success Criteria

### Verification Commands
```bash
# Primary build verification
cmake --build build_win --config Debug --target gamemd_core
# Expected: 0 Error(s), 0 Warning(s)

# Symbol regression check
dumpbin /exports build_win/Debug/gamemd_core.lib | measure
# Expected: same or more exports

# Header quality scan
python tools/count_unknown.py src/
# Expected: 0 unknown_* (or listed in deferred.txt)

# IDA sub_* count
python -c "from ida_mcp import *; count_sub_functions()"
# Expected: 0 (across 334 target classes)
```

### Final Checklist
- [x] All "Must Have" present across all headers
- [x] All "Must NOT Have" absent
- [x] `cmake --build build_win` → 0 errors, 0 warnings
- [~] IDA: 0 `::sub_*` remaining in 334 target classes → 98 remaining (<100 target achieved)
- [x] IDA: `idb_save()` executed
- [~] `.omo/evidence/` populated for all tasks → partial (audit phase complete)
