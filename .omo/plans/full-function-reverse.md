# Full Function Reverse Engineering — 全量函数逆向

## TL;DR

> **Quick Summary**: 从 IDA 反编译逐函数翻译全部 ~19,067 个 gamemd.exe 函数为可编译 C++ 实现。三阶段：菜单(1,083)→渲染(1,140)→逻辑(16,844)。编译 0/0 + IDA 对照即 completed，对拍验证后续批量。
>
> **Deliverables**: Phase 1: 89 个 UI 类 + 全局函数 | Phase 2: 113 个渲染类 + 全局函数 | Phase 3: 746 个逻辑类 + sub_* 命名
> **Estimated Effort**: XXL (multi-month)
> **Parallel Execution**: YES — 13 waves total, each 3-8 parallel tasks
> **Critical Path**: P0 → W1 → W2 → W3 → W4 → W5 → W6 → W7 → W8

---

## Context

### Original Request
先完成游戏菜单相关函数的逆向，然后游戏内渲染框架，最后游戏内逻辑。全量 19K 函数覆盖。

### Interview Summary
- **Deliverable**: 编译通过即 completed（后续对拍批量处理）
- **sub_* 处理**: 翻译时根据反编译逻辑当场命名
- **验证**: 编译 0/0 + IDA 对照；done 后置
- **done=true**: 无条件信任（5 个）；completed-unverified（~45 个）需重审

### Research Findings
| Phase | Functions | Pure Classes | Completed |
|-------|-----------|-------------|-----------|
| 1 (Menu) | 1,083 | 89 | 4 |
| 2 (Rendering) | 1,140 | 113 | 22 |
| 3 (Logic) | 16,844 | 746 (pure) + 229 (split) | 24 |

### Metis Review
- **验证定义**: 编译 = completed，对拍 = done（后置批量）
- **sub_* 策略**: 翻译时命名
- **CRT/thunk 排除**: Phase 0 分类

---

## Work Objectives

### Core Objective
逐函数将 IDA 反编译伪代码翻译为可编译 C++ 实现，按菜单→渲染→逻辑三阶段组织。每个函数：IDA 反编译对照所有分支/边/返回路径 → 语义命名 → C++ 重写 → 编译 0/0。

### Concrete Deliverables
- Phase 1: 89 个菜单类全部方法 + ~428 全局函数
- Phase 2: 113 个渲染类全部方法 + ~323 全局函数
- Phase 3: 746 个逻辑类 Phase 3 方法 + 拆分类方法 + sub_* 命名 + ~8,709 全局函数

### Definition of Done
- [ ] Wave 1-13: 每个 task batch 编译 0/0
- [ ] 每个函数: IDA 反编译对照记录（branches, edges, returns）
- [ ] 每个 sub_*: 已命名并 `idb_save`
- [ ] 0 个 class header 修改
- [ ] 0 个 REVERSE 保护文件修改（未经审查）

### Must Have
- 忠实于 IDA 反编译算法
- 编译 0 errors, 0 warnings
- 语义化 camelCase 命名
- completed=true 逐个设置（禁止批量）
- sub_* 翻译时命名

### Must NOT Have (Guardrails)
- 不批量标记 completed=true
- 不修改类定义头文件（1,120 类已完成）
- 不修改 REVERSE 管道保护文件未经审查
- 不翻译 CRT/thunk/编译器生成代码

---

## Verification Strategy

### Test Decision
- **Automated tests**: NONE
- **Acceptance gate**: `cmake --build build_win --target gamemd_core` → 0/0
- **Per-function**: IDA decompile cross-check
- **done=true**: 后续批量 REVERSE comparison phase

---

## Execution Strategy

### 13 Waves

```
Wave 0: Phase 0 — Baseline (3 tasks, parallel)
Wave 1: Dialog/Gadget Core — 4 classes (~86 functions)
Wave 2: Menu Screens — 4 screen classes (~120 functions)
Wave 3: BINK + UI Components — 4 groups (~116 functions)
Wave 4: Menu Globals + Remaining — menu global functions (~428 functions)
Wave 5: DDraw/Surface Core — 3 classes (~82 functions)
Wave 6: Tactical + Object Rendering — 3 groups (~190 functions)
Wave 7: Effects + Rendering Globals — 3 groups (~393 functions)
Wave 8: Object Hierarchy Core — 3 classes (~412 functions)
Wave 9: Techno/Foot + Building — 2 classes (~750 functions)
Wave 10: Infantry/Unit/Aircraft + Combat — 4 groups (~410 functions)
Wave 11: AI/Pathfinding + Network + INI/Rules — 4 groups (~1,000 functions)
Wave 12: Audio/Movie + Global Functions + sub_* naming — 4 groups (~13,000 functions)
Wave Final: Build verification + spot-check audit — 4 parallel reviews
```

**Critical Path**: 0→1→2→3→4→5→6→7→8→9→10→11→12→Final
**Parallel Speedup**: ~60% (class/group implementations fan out within waves)

---

## TODOs

- [x] 1. Regenerate comparisonResult.log baseline

  **What to do**: Build hook DLL (`cmake --build build_hook --config Release`), run game test (menu 15s+), capture comparisonResult.log. Verify 5 done=true functions still show "Same Compares".
  **Which agent**: `quick`
  **Acceptance**: comparisonResult.log exists; 5 done functions in Same Compares section
  **QA**: Run game → verify log file generated → grep for "Same Compares" → check 5 done names present
  **Evidence**: .omo/evidence/fr-task-0.1-baseline.txt

- [x] 2. Review 45 completed-but-unverified functions

  **What to do**: For each of ~45 functions where hook.completed=true but hook.done=false: open IDA decompile, read current C++ impl, check all branches/edges/returns. Fix discrepancies. Mark reviewed.
  **Which agent**: `deep` — IDA MCP per-function analysis
  **Acceptance**: All 45 reviewed; discrepancies fixed; 0/0 build
  **QA**: Spot-check 5 random functions — IDA decompile vs C++ side-by-side match
  **Evidence**: .omo/evidence/fr-task-0.2-review.txt

- [x] 3. Classify CRT/thunk/library exclusions

  **What to do**: Scan functions with size≤6 bytes OR known CRT patterns (memcpy, memset, vector deleting destructor, vtable adjustor). Mark EXCLUDED. These are compiler-generated, not game logic.
  **Which agent**: `quick`
  **Acceptance**: Exclusion list saved as tools/crt_exclusions.json
  **QA**: Verify no game-logic functions accidentally excluded (sample 10, cross-check IDA)
  **Evidence**: .omo/evidence/fr-task-0.3-exclusions.txt

---

- [x] 4. Implement DialogClass + GadgetClass methods (~71 functions)

  **What to do**: Read IDA decompile for DialogClass (~46) and GadgetClass/TextButtonClass (~25). Translate to C++. Source: `src/ui/dialog_win32.cpp`, `src/ui/gadget.cpp`. All methods in pure-menu classes.
  **Which agent**: `deep` — IDA decompile analysis per method
  **Acceptance**: 0/0 build, IDA cross-check per function, functions.json completed=true set individually
  **QA**: Spot-check 3 methods vs IDA — all branches/edges/returns match
  **Evidence**: .omo/evidence/fr-task-1.1-dialog.txt

- [x] 5. Implement LabelClass + LoadOptions + HashTable menu classes (~71 functions)

  **What to do**: LabelClass (~15) + LoadOptions (~29) + HashTable menu methods (~27). Source: `src/ui/gadget.cpp`, `src/core/menu_select.cpp`.
  **Which agent**: `deep`
  **Acceptance**: 0/0 build, IDA cross-check per function
  **Evidence**: .omo/evidence/fr-task-1.2-menusupport.txt

- [x] 6. Implement MainMenu + CampaignScreen methods (~60 functions)

  **What to do**: MainMenu (~20) + CampaignScreen + CampaignMenu (~40). Source: `src/core/menu_select.cpp`.
  **Which agent**: `deep`
  **Acceptance**: 0/0 build, IDA cross-check
  **Evidence**: .omo/evidence/fr-task-1.3-maincampaign.txt

- [x] 7. Implement OptionsScreen + MultiplayerScreen + SkirmishSetup methods (~60 functions)

  **What to do**: OptionsScreen (~25) + MultiplayerScreen (~20) + SkirmishSetup (~15). Source: `src/core/menu_select.cpp`.
  **Which agent**: `deep`
  **Acceptance**: 0/0 build, IDA cross-check
  **Evidence**: .omo/evidence/fr-task-1.4-screens.txt

- [x] 8. Implement BinkMovie + Loading + SidebarClass + UI components (~116 functions)

  **What to do**: BinkMovie (~15) + Loading/Intro (~10) + SidebarClass (~41) + Mouse/Command/Message/ToolTip (~50).
  **Which agent**: `deep` — split across 4 parallel sub-tasks
  **Acceptance**: 0/0 build, IDA cross-check per function
  **Evidence**: .omo/evidence/fr-task-1.5-uicomponents.txt

- [x] 9. Implement remaining menu global functions (~428 functions)

  **What to do**: All remaining menu-category global functions not yet implemented. Group by source file. Source: `src/core/menu_select.cpp`, `src/core/init_game.cpp` menu sections.
  **Which agent**: `deep` — split across 4 parallel groups (~107 each)
  **Acceptance**: 0/0 build, IDA cross-check per function
  **QA**: Verify menu navigation works (launch game, navigate to Skirmish/Options dialogs)
  **Evidence**: .omo/evidence/fr-task-1.6-menuglobals.txt

---

- [x] 10. Implement DSurface + XSurface + BSurface methods (~82 functions)

  **What to do**: DSurface (~36), XSurface (~31), BSurface/BlitTrans (~15). Source: `src/render/surface.cpp`. Follow existing XSurface patterns (SetPixel, GetPixel already done=true).
  **Which agent**: `deep` — split across 3 parallel sub-tasks
  **Acceptance**: 0/0 build, IDA cross-check. For functions with existing REVERSE hooks: update hook mode if implementation complete.
  **QA**: If REVERSE hook exists for rendered functions, verify Capture mode still works
  **Evidence**: .omo/evidence/fr-task-2.1-surface.txt

- [x] 11. Implement TacticalClass + Cell rendering + Object Draw methods (~190 functions)

  **What to do**: TacticalClass (~100) + Cell rendering/Isometric (~40) + ObjectClass::Draw + building/unit/infantry Draw (~50).
  **Which agent**: `deep` — split across 3 parallel sub-tasks
  **Acceptance**: 0/0 build, IDA cross-check
  **Evidence**: .omo/evidence/fr-task-2.2-tactical.txt

- [x] 12. Implement Effects + Rendering globals (~393 functions)

  **What to do**: Anim/Particle rendering (~30) + Fog/Radar/UI overlay (~40) + remaining rendering global functions (~323).
  **Which agent**: `deep` — split across 3 parallel sub-tasks
  **Acceptance**: 0/0 build, IDA cross-check
  **Evidence**: .omo/evidence/fr-task-2.3-effects.txt

---

- [x] 13. Implement AbstractClass + ObjectClass + MissionClass methods (~412 functions)

  **What to do**: AbstractClass Phase 3 methods (~242) + ObjectClass Phase 3 (~155) + MissionClass (~15). Root of the class hierarchy.
  **Which agent**: `deep` — split across 3 parallel sub-tasks
  **Acceptance**: 0/0 build, IDA cross-check
  **Evidence**: .omo/evidence/fr-task-3.1-objectcore.txt

- [x] 14. Implement TechnoClass + FootClass methods (~471 functions)

  **What to do**: TechnoClass Phase 3 methods (~351) + FootClass Phase 3 (~120). Largest class clusters after Building.
  **Which agent**: `deep` — split across 2 parallel groups
  **Acceptance**: 0/0 build, IDA cross-check
  **Evidence**: .omo/evidence/fr-task-3.2-technofoot.txt

- [x] 15. Implement BuildingClass Phase 3 methods (~279 functions)

  **What to do**: BuildingClass Phase 3 methods. Largest single class. Source: `src/structure/building.cpp`.
  **Which agent**: `deep`
  **Acceptance**: 0/0 build, IDA cross-check
  **Evidence**: .omo/evidence/fr-task-3.3-building.txt

- [x] 16. Implement InfantryClass + UnitClass + AircraftClass Phase 3 methods (~210 functions)

  **What to do**: InfantryClass (~80) + UnitClass (~70) + AircraftClass (~60) Phase 3 methods. Source: `src/structure/`.
  **Which agent**: `deep` — 3 parallel sub-tasks
  **Acceptance**: 0/0 build, IDA cross-check
  **Evidence**: .omo/evidence/fr-task-3.4-infantryunit.txt

- [x] 17. Implement Combat + AI/Pathfinding/Locomotion (~500 functions)

  **What to do**: Combat/damage system (~100) + AI + pathfinding (~200) + Locomotion classes (~200, incl Jumpjet 279 methods).
  **Which agent**: `deep` — split across 4 parallel sub-tasks
  **Acceptance**: 0/0 build, IDA cross-check
  **Evidence**: .omo/evidence/fr-task-3.5-combatai.txt

- [x] 18. Implement Network + INI/Rules/Type + Audio/Movie subsystems (~1,000 functions)

  **What to do**: Network (~300) + INI/Rules/Type system (~500) + Audio/Movie misc (~200).
  **Which agent**: `deep` — split across 4 parallel sub-tasks
  **Acceptance**: 0/0 build, IDA cross-check
  **Evidence**: .omo/evidence/fr-task-3.6-networkini.txt

- [x] 19. Implement remaining global functions + sub_* naming (~12,000 functions)

  **What to do**: All remaining unimplemented global functions. For each sub_*: analyze decompile to determine function → name in IDA → `idb_save` → translate to C++. Largest batch — split across 8 parallel groups (~1,500 each).
  **Which agent**: `deep` — 8 parallel sub-tasks
  **Acceptance**: 0/0 build; each sub_* named + saved to IDA; functions.json updated individually
  **Evidence**: .omo/evidence/fr-task-3.7-globals.txt

---

## Final Verification Wave

- [ ] F1. **Phase 1 Audit**: `cmake --build build_win` 0/0. Spot-check 10 random menu functions: IDA decompile vs C++ — all branches/edges/returns match. Verify 0 class headers modified.
  **Agent**: `oracle` | **Output**: `Must Have [N/N] | Spot-checks [10/10] | VERDICT`

- [ ] F2. **Phase 2 Audit**: Same for rendering functions. Spot-check 10 random render functions.
  **Agent**: `unspecified-high` | **Output**: `Build [PASS/FAIL] | Spot-checks [10/10] | VERDICT`

- [ ] F3. **Phase 3 Audit**: Same for logic functions. Spot-check 20 random functions (larger scope). Verify sub_* naming rate.
  **Agent**: `unspecified-high` | **Output**: `Build [PASS/FAIL] | Spot-checks [20/20] | Sub_* named [N/N] | VERDICT`

- [ ] F4. **Scope Fidelity**: Verify 0 class header modifications, 0 REVERSE pipeline file changes (without review), 0 CRT/thunk included. Read git diff across all waves.
  **Agent**: `deep` | **Output**: `Classes modified [0] | REVERSE files [CLEAN] | CRT included [0] | VERDICT`

---

## Commit Strategy

- **Per task batch**: `feat(phaseN): implement <class/group> (N functions)` — commit after each task's 0/0 build
- **Pre-commit**: `cmake --build build_win --target gamemd_core` → 0/0 required

## Success Criteria

### Verification Commands
```bash
cmake -B build_win -G "Visual Studio 17 2022" -A Win32
cmake --build build_win --target gamemd_core
# Expected: Build succeeded. 0 Warning(s) 0 Error(s)
```

### Final Checklist
- [ ] Phase 1: ~1,083 functions → 0/0 build, IDA cross-checked
- [ ] Phase 2: ~1,140 functions → 0/0 build, IDA cross-checked
- [ ] Phase 3: ~16,844 functions → 0/0 build, IDA cross-checked
- [ ] All sub_* named + `idb_save` complete
- [ ] 0 class header modifications
- [ ] 0 REVERSE pipeline file modifications (without review)
- [ ] CRT/thunk functions excluded
