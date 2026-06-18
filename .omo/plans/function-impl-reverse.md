# 逐个函数逆向补全：54 文件 → 0 TODO

## TL;DR

> **Quick Summary**: 从 IDA 反编译翻译 ~263 个待补全函数，按文件逐个深度完成。System 核心优先（map→ini→cell），然后实体层→网络→UI→脚本→对象层次→渲染→杂项。每文件完成后编译验证并 commit。
>
> **Deliverables**: 54 个 .cpp 文件全部 0 TODO/REVERSE 残留
> **Estimated Effort**: XL (54 files, ~263 functions)
> **Parallel Execution**: Sequential per file, within-file functions analyzed in parallel
> **Critical Path**: System Core → Object hierarchy → render → 全量编译通过

---

## Context

### Original Request
使用 IDA 反编译结果 (`decompile-results/gamemd.exe.c`) 逐个函数逆向补全函数实现。忠实翻译 IDA 逻辑但用清晰 C++ 重写。

### Interview Summary
- **策略**: 逐个文件深度优先 — 完成一个文件所有函数后再跳下一个
- **质量**: IDA 反编译作为 C 伪代码参考 → 命名变量 → C++ 化重写（引用、const、RAII）
- **起点**: System 核心 (map → ini → cell → cc_file → mix_file)
- **提交**: 每文件 commit 一次

### Research Findings
- `decompile-results/` 已更新：`gamemd.exe.c`（全量反编译）、`.asm`、`.map`
- 54 个 .cpp 文件有 TODO/REVERSE 标记
- 最大文件：`techno.cpp` (59), `trigger.cpp` (19), `surface.cpp` (19), `init_game.cpp` (16), `audio.cpp` (16)

---

## Work Objectives

### Core Objective
逐个文件将 IDA 反编译伪代码翻译为可编译的 C++ 实现，保持算法忠实性，提升代码清晰度。

### Concrete Deliverables
- 每个文件：所有 TODO/REVERSE 标记的函数替换为完整实现
- 每个文件：编译 0 error（LNK2019 允允许）

### Definition of Done
- [ ] 54 个 .cpp 文件全部 0 TODO/REVERSE
- [ ] `cmake --build build_win --config Debug --target gamemd_core` 0 compiler errors

### Must Have
- 每个函数实现忠实于 IDA 反编译逻辑（算法相同）
- 变量/函数名使用 camelCase
- 不引入新的类定义修改

### Must NOT Have (Guardrails)
- 不批量处理多个文件（逐个文件深度优先）
- 不修改类定义头文件（已完成）
- 不引入新依赖或第三方库
- 不跳过 IDA 对照验证

---

## Verification Strategy

### Test Decision
- **Automated tests**: None（编译即验证）
- **Agent-Executed QA**: 每个文件完成后：
  1. 编译验证（0 errors）
  2. 随机抽查 2-3 个函数与 IDA 反编译对照

### QA Policy
- **编译验证**: `cmake --build build_win --config Debug --target gamemd_core 2>&1 | findstr "error"`
- **IDA 对照**: 使用 `ida-pro-mcp_decompile` 验证关键函数的反编译结果与实现一致

---

## Execution Strategy

### Parallel Execution Waves

> 按文件顺序执行，每个文件内的多个函数可以并行分析和翻译。
> 每完成一个文件 commit 一次。

```
Wave 1: System 核心 (14 TODOs)
├── system/map.cpp (6) → MapClass 成员函数
├── system/ini_class.cpp (3) → INIClass/CCINIClass
├── system/cell.cpp (1) → CellClass
├── system/cc_file.cpp (3) → CCFileClass
└── system/mix_file.cpp (1) → MIX 读取

→ Commit: "system: complete MapClass, INIClass, CellClass, CCFileClass, MIX implementations"

Wave 2: System 扩展 (9 TODOs)
├── system/convert_class.cpp (4)
├── system/scenario.cpp (4)
└── system/tactical.cpp (1)

→ Commit: "system: complete ConvertClass, ScenarioClass, TacticalClass"

Wave 3: Entity 实体层 (8 TODOs)
├── entity/anim.cpp (1)
├── entity/overlay.cpp (1)
├── entity/particle.cpp (1)
├── entity/particle_system.cpp (1)
├── entity/smudge.cpp (1)
├── entity/terrain.cpp (1)
├── entity/tiberium.cpp (1)
└── entity/wave.cpp (1)

→ Commit: "entity: complete all entity implementations"

Wave 4: Network 网络 (6 TODOs)
├── network/connection.cpp (1)
├── network/multiplayer.cpp (1)
├── network/session.cpp (1)
└── network/winsock.cpp (3)

→ Commit: "network: complete network subsystem"

Wave 5: UI 界面 (14 TODOs)
├── ui/command_class.cpp (1)
├── ui/dialog_win32.cpp (1)
├── ui/message_list.cpp (3)
├── ui/mouse.cpp (1)
├── ui/sidebar.cpp (4)
└── ui/tool_tip.cpp (5)

→ Commit: "ui: complete UI subsystem"

Wave 6: Team/Script 团队脚本 (37 TODOs)
├── team/campaign.cpp (2)
├── team/script.cpp (4)
├── team/tag.cpp (11)
├── team/team.cpp (3)
└── team/trigger.cpp (19)

→ Commit: "team: complete team/script subsystem"

Wave 7: Core 核心 + 杂项 (23 + 16 = 39 TODOs)
├── core/init_game.cpp (16) ← 较大
├── core/menu_select.cpp (5)
├── core/globals.cpp (1)
├── misc/audio.cpp (16) ← 较大
└── misc/rules.cpp (2)

→ Commit: "core+misc: complete init_game, audio, rules"

Wave 8: Object Hierarchy 对象层次 (77 TODOs)
├── object/abstract.cpp (3)
├── object/foot.cpp (10)
├── object/object.cpp (8)
└── object/techno.cpp (59) ← 最大单文件

→ Commit: "object: complete object hierarchy"

Wave 9: Structure + House (7 TODOs)
├── structure/building.cpp (4)
└── house/house_type.cpp (3)

→ Commit: "structure+house: complete building, house_type"

Wave 10: Render 渲染 (27 TODOs)
├── render/bounce.cpp (3)
├── render/fog.cpp (1)
├── render/light_source.cpp (4)
├── render/palette.cpp (1)
└── render/surface.cpp (19)

→ Commit: "render: complete rendering subsystem"

Wave 11: App + WDT + 收尾 (10 + remaining)
├── app/cmdline.cpp (2)
├── app/ddraw_init.cpp (2)
├── app/game_loop.cpp (7)
├── app/main.cpp (1)
├── entity/tube.cpp (1)
└── wdt/wdt.cpp (3)

→ Commit: "app+wdt: finalize remaining implementations"

Wave FINAL (After ALL tasks):
├── F1: 全量编译验证 (oracle)
├── F2: 随机抽查 20 函数 vs IDA 对照
├── F3: TODO count = 0 审计
└── F4: Git commit all changes
```

### Agent Dispatch Summary

> 每 Wave 的任务主要由 Sisyphus 执行，逐文件完成。
> 每个文件内的多个 TODO 函数可以并行分析（同时查询 IDA），然后逐个翻译。

- **Wave 1**: 5 文件 → 5 tasks
- **Wave 2**: 3 文件 → 3 tasks
- **Wave 3**: 8 文件 → 8 tasks
- **Wave 4**: 4 文件 → 4 tasks
- **Wave 5**: 6 文件 → 6 tasks
- **Wave 6**: 5 文件 → 5 tasks
- **Wave 7**: 5 文件 → 5 tasks
- **Wave 8**: 4 文件 → 4 tasks
- **Wave 9**: 2 文件 → 2 tasks
- **Wave 10**: 5 文件 → 5 tasks
- **Wave 11**: 6 文件 → 6 tasks
- **FINAL**: 4 验证 → 4 tasks

---

## TODOs

> 每个 task 对应一个 .cpp 文件，要求完成文件内所有 TODO/REVERSE 标记的函数实现。
> 实现方法：查询 IDA 对应函数的反编译 → 理解逻辑 → 用清晰 C++ 重写。

- [ ] 1. system/map.cpp — 完成 MapClass 6 个函数

  **What to do**:
  - 查询 IDA 中 MapClass 相关函数的反编译
  - 翻译为 C++：MarkForRedraw、GetCellAt、TryGetCellAt、DamageArea、PathfindingFind 等
  - 使用已有的类成员变量名

  **Must NOT do**:
  - 不修改 `src/system/map.hpp`（类定义已完成）

  **Recommended Agent Profile**: `deep` + IDA access
  **Parallelization**: 顺序（依赖 map.hpp 定义）
  **References**: `decompile-results/gamemd.exe.c` 反编译输出
  **Acceptance**: 0 compile errors for map.cpp

  **QA Scenarios**:
  - `cmake --build build_win --config Debug --target gamemd_core` → map.cpp 0 errors
  - 随机抽查 MarkForRedraw(0x4F42F0) 实现与 IDA 对照

- [ ] 2. system/ini_class.cpp — 完成 INIClass/CCINIClass 3 个函数

  **What to do**: Complete remaining constructor/destructor/helper implementations
  **References**: IDA: `INIClass::Constructor(0x535AA0)`, `CCINIClass::Constructor(0x535B30)`
  **Acceptance**: 0 compile errors

- [ ] 3. system/cell.cpp — 完成 CellClass 1 个函数

  **What to do**: Complete remaining CellClass method
  **Acceptance**: 0 compile errors

- [ ] 4. system/cc_file.cpp — 完成 CCFileClass 3 个函数

  **What to do**: Complete file I/O related functions
  **References**: IDA: CCFileClass methods
  **Acceptance**: 0 compile errors

- [ ] 5. system/mix_file.cpp — 完成 MIX 1 个函数

  **What to do**: Complete MIX file reading implementation
  **Acceptance**: 0 compile errors

- [ ] 6. system/convert_class.cpp — 完成 ConvertClass 4 个函数
  **Acceptance**: 0 compile errors

- [ ] 7. system/scenario.cpp — 完成 ScenarioClass 4 个函数
  **Acceptance**: 0 compile errors

- [ ] 8. system/tactical.cpp — 完成 TacticalClass 1 个函数
  **Acceptance**: 0 compile errors

- [ ] 9. entity/anim.cpp — 完成 AnimClass 1 个函数

  **Acceptance**: 0 compile errors

- [ ] 10. entity/overlay.cpp — 完成 OverlayClass 1 个函数

  **Acceptance**: 0 compile errors

- [ ] 11. entity/particle.cpp — 完成 ParticleClass 1 个函数

  **Acceptance**: 0 compile errors

- [ ] 12. entity/particle_system.cpp — 完成 ParticleSystemClass 1 个函数

  **Acceptance**: 0 compile errors

- [ ] 13. entity/smudge.cpp — 完成 SmudgeClass 1 个函数

  **Acceptance**: 0 compile errors

- [ ] 14. entity/terrain.cpp — 完成 TerrainClass 1 个函数

  **Acceptance**: 0 compile errors

- [ ] 15. entity/tiberium.cpp — 完成 TiberiumClass 1 个函数

  **Acceptance**: 0 compile errors

- [ ] 16. entity/wave.cpp — 完成 WaveClass 1 个函数

  **Acceptance**: 0 compile errors

- [ ] 17. network/connection.cpp — 完成 ConnectionClass 1 个函数

  **Acceptance**: 0 compile errors

- [ ] 18. network/multiplayer.cpp — 完成 MPGameModeClass 1 个函数

  **Acceptance**: 0 compile errors

- [ ] 19. network/session.cpp — 完成 SessionClass 1 个函数

  **Acceptance**: 0 compile errors

- [ ] 20. network/winsock.cpp — 完成 3 个网络接口函数

  **Acceptance**: 0 compile errors

- [ ] 21. ui/command_class.cpp — 完成 CommandClass 1 个函数

  **Acceptance**: 0 compile errors

- [ ] 22. ui/dialog_win32.cpp — 完成 DialogClass 1 个函数

  **Acceptance**: 0 compile errors

- [ ] 23. ui/message_list.cpp — 完成 MessageListClass 3 个函数

  **Acceptance**: 0 compile errors

- [ ] 24. ui/mouse.cpp — 完成 MouseClass 1 个函数

  **Acceptance**: 0 compile errors

- [ ] 25. ui/sidebar.cpp — 完成 SidebarClass 4 个函数

  **Acceptance**: 0 compile errors

- [ ] 26. ui/tool_tip.cpp — 完成 ToolTipManager 5 个函数

  **Acceptance**: 0 compile errors

- [ ] 27. team/campaign.cpp — 完成 CampaignClass 2 个函数

  **Acceptance**: 0 compile errors

- [ ] 28. team/script.cpp — 完成 ScriptClass 4 个函数

  **Acceptance**: 0 compile errors

- [ ] 29. team/tag.cpp — 完成 TagClass 11 个函数

  **Acceptance**: 0 compile errors

- [ ] 30. team/team.cpp — 完成 TeamClass 3 个函数

  **Acceptance**: 0 compile errors

- [ ] 31. team/trigger.cpp — 完成 TriggerClass 19 个函数

  **Acceptance**: 0 compile errors

- [ ] 32. core/init_game.cpp — 完成 InitGame 16 个函数

  **Acceptance**: 0 compile errors

- [ ] 33. core/menu_select.cpp — 完成 MenuSelect 5 个函数

  **Acceptance**: 0 compile errors

- [ ] 34. core/globals.cpp — 完成 Globals 1 个函数

  **Acceptance**: 0 compile errors

- [ ] 35. misc/audio.cpp — 完成 Audio 16 个函数

  **Acceptance**: 0 compile errors

- [ ] 36. misc/rules.cpp — 完成 RulesClass 2 个函数

  **Acceptance**: 0 compile errors

- [ ] 37. object/abstract.cpp — 完成 AbstractClass 3 个函数

  **Acceptance**: 0 compile errors

- [ ] 38. object/foot.cpp — 完成 FootClass 10 个函数

  **Acceptance**: 0 compile errors

- [ ] 39. object/object.cpp — 完成 ObjectClass 8 个函数

  **Acceptance**: 0 compile errors

- [ ] 40. object/techno.cpp — 完成 TechnoClass 59 个函数

  **Acceptance**: 0 compile errors

- [ ] 41. structure/building.cpp — 完成 BuildingClass 4 个函数

  **Acceptance**: 0 compile errors

- [ ] 42. house/house_type.cpp — 完成 HouseTypeClass 3 个函数

  **Acceptance**: 0 compile errors

- [ ] 43. render/bounce.cpp — 完成 BounceClass 3 个函数

  **Acceptance**: 0 compile errors

- [ ] 44. render/fog.cpp — 完成 FogClass 1 个函数

  **Acceptance**: 0 compile errors

- [ ] 45. render/light_source.cpp — 完成 LightSource 4 个函数

  **Acceptance**: 0 compile errors

- [ ] 46. render/palette.cpp — 完成 Palette 1 个函数

  **Acceptance**: 0 compile errors

- [ ] 47. render/surface.cpp — 完成 Surface 19 个函数

  **Acceptance**: 0 compile errors

- [ ] 48. app/cmdline.cpp — 完成 CmdLine 2 个函数

  **Acceptance**: 0 compile errors

- [ ] 49. app/ddraw_init.cpp — 完成 DDRAWInit 2 个函数

  **Acceptance**: 0 compile errors

- [ ] 50. app/game_loop.cpp — 完成 GameLoop 7 个函数

  **Acceptance**: 0 compile errors

- [ ] 51. app/main.cpp — 完成 Main 1 个函数

  **Acceptance**: 0 compile errors

- [ ] 52. entity/tube.cpp — 完成 TubeClass 1 个函数

  **Acceptance**: 0 compile errors

- [ ] 53. wdt/wdt.cpp — 完成 WDT 3 个函数

  **Acceptance**: 0 compile errors

- [ ] 54. misc/super_weapon.cpp — 完成 SuperWeapon 1 个函数

  **Acceptance**: 0 compile errors

---

## Final Verification Wave (MANDATORY)

- [ ] F1. **Plan Compliance Audit** — `oracle`
  逐文件检查：所有函数是否有实现（非 stub），实现是否与 IDA 反编译逻辑一致。
  Output: `Files [N/54] | Functions [N/N] | VERDICT: APPROVE/REJECT`

- [ ] F2. **Code Quality Review** — `deep`
  全量编译 + 检查: `as any`/`@ts-ignore`、空 catch、console.log、注释掉的代码、未使用的 import。
  Output: `Build [PASS/FAIL] | Files [N clean/N issues] | VERDICT`

- [ ] F3. **TODO Audit** — `quick`
  扫描全部 .cpp 文件：确保 TODO/REVERSE 标记数为 0。
  Output: `TODOs [0] | VERDICT: CLEAN/DIRTY`

- [ ] F4. **Git commit** — `git-master`
  将所有更改提交为逻辑分组 commits。

---

## Commit Strategy

- **1**: `system: complete MapClass, INIClass, CellClass, CCFileClass, MIXFile implementations` — system/*.cpp
- **2**: `system: complete ConvertClass, ScenarioClass, TacticalClass` — remaining system
- **3**: `entity: complete all entity layer implementations` — entity/*.cpp
- **4**: `network: complete network subsystem` — network/*.cpp
- **5**: `ui: complete UI subsystem` — ui/*.cpp
- **6**: `team: complete script/trigger/tag subsystem` — team/*.cpp
- **7**: `core+misc: complete init_game, audio, rules` — core/*.cpp, misc/*.cpp
- **8**: `object: complete object hierarchy` — object/*.cpp
- **9**: `structure+house: complete building, house_type` — structure/*.cpp, house/*.cpp
- **10**: `render: complete rendering subsystem` — render/*.cpp
- **11**: `app+wdt: finalize remaining implementations` — app/*.cpp, wdt/*.cpp

---

## Success Criteria

### Verification Commands
```bash
cmake --build build_win --config Debug --target gamemd_core  # Expected: 0 errors
Select-String -Path "src\**\*.cpp" -Pattern "TODO|REVERSE\(" # Expected: 0 matches
```

### Final Checklist
- [ ] 54 文件全部 0 TODO/REVERSE
- [ ] 全量编译 0 errors
- [ ] 随机 20 函数 IDA 对照通过
- [ ] 所有 commits 已推送到 git
