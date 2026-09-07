# CSP 后时代路线图 — 类型体系收官 → 语义重建 → 功能对等

> 2026-09-05 制定。CSP 约束求解体系已达证据上限（TOP=0，七通道全绿），
> 本文档是此基线上的完整后续工作分解。前情：AGENTS.md「最近完成」各条目、
> `docs/coverage.md`、memory `type-infer-oop-rebuild-roadmap`。
>
> **执行状态首查表（2026-09-07 会话更新，含污染排查与命名轮）**：
>
> | 任务 | 状态 | 摘要 |
> |---|---|---|
> | B1 apply_sigs 550 失败 | ✅ 完成 | fail=0，914 处 return/param 编辑落盘 |
> | B2 mass_type 1 失败 | ✅ 完成 | CRT RTTI 折叠体池级过滤 |
> | B3 枚举通道 | ✅ 完成 | 5 枚举声明 + 8 成员 + 2 参数回填 |
> | A4 命名一致性 | ✅ 完成 | 511 → 0（audit 0/0） |
> | hpp-impl 存量债务 | ✅ 迁移完成 | 1,765 → 0 违规 |
> | **构建红线（编译层）** | ✅ **恢复** | 2,874 → **0 编译错误**；链接产出 `build_win/Debug/gamemd.exe`（1.5MB，/FORCE:UNRESOLVED 容忍 682 历史未解析 stub 债） |
> | **构建红线（gate 层）** | ✅ **3/3（重锚后）** | 用户裁决 v2：未完成翻译保留为 **IDA 原始反编译活代码块**（不再使用 `#if 0`）；存量编译错误按基线裁决允许。**⚠ ida-artifact 门控脚本仍为空文件（存量空转）——见执行日志** |
> | **最终目标债（翻译积压）** | 🔴 **核心主线** | MCP 当前 pending **3,428** 个活伪码块 + CFG 不忠实真翻译 + 682 链接未解析符号 + triage 未定位——目标：全部真翻译（见「最终目标债清单」节） |
> | **ra2-translate MCP 工具集** | ✅ **已上线** | 22 工具全流程 MCP 化（翻译/重命名/错误追踪/0xADDR 注解维护）；HTTP 常驻 `127.0.0.1:13399/mcp` + stdio 双模式；官方 SDK 客户端冒烟全过（见 `docs/mcp_tools.md`） |
> | A1 成员语义命名 | 🔶 **进行中（污染优先）** | 09-06 武器槽/军衔谓词 7 函数 + 09-07 轮 12 函数改名（FacingClass 族、音量三连、GameSettings/Particle/Accumulate/CDTimer/AnimClass 双 setter）与 6 处 IDB this 类型修复；成员语义命名主体未展开 |
> | A2 sub_* Pass 3 命名 | ⬜ 未开始 | |
> | A5 T14/T19 类型与 owner 污染排查 | 🔶 **进行中** | 快照扫描 320 个标量指针 this；已修正 3 个 IDB this 类型、1 个 owner；剩余 `AdjustHeight`、音量三连、类型侧布局待考古 |
> > | B4 零观测 struct 考古 | ⬜ 未开始（可选） | 与 TechnoClass/TechnoTypeClass 中段布局和类型侧 Weapon 数组债务相互关联 |
> | B5 池外 thiscall | ⬜ 未开始（可选） | |
> | C1-C4 批量翻译 | 🔶 **进行中（纯 MCP 工作流）** | `next_batch → get_context → replace_body → build → audit_access → verify_function → mark_completed`；当前 pending=3,428，completed=27（09-07 轮 +CDTimerClass::TimeRemaining/FacingClass::Update/Set_SyncLog/IsRookie 补验）；QueryInterface(0x410260) 真翻译因 verifier 虚调用提取不对称挂 issue #9 |
> | D1-D4 集成验收 | ⬜ 未开始 | exe 已产出待运行时验收 |
>
> 详细过程与遗留问题见文末「执行日志」。

## 用户裁决（2026-09-06 深夜，本路线图的基线事件）

> **裁决 v2（同夜追加，取代第 2 条的 #if 0 形态）**：撤销 `#if 0` 包装，
> IDA 原始反编译代码**直接作为函数体活代码**；**基线上的编译错误被明确
> 允许**（解包后 3,544 个 = 3,434 块未翻译伪码的天然规模）。执行提交
> 98fc14c2（`tools/unwrap_if0_blocks.py`，3,405 个 stub return 行同删）。
> 翻译工作形态变为：在函数体内就地以真 C++ 替换伪码。

1. **最终目标**：翻译所有内容（全部真翻译，非 stub）。
2. **未完成翻译的占位形态**（v2）：函数体 = **IDA 原始反编译活代码**
   （带 `[IDA decompile]` 标记行界定），编译错误在基线被允许。
   ~~v1 的 #if 0 形态~~已撤销。
3. **baseline 重锚**：`auto-fill-baseline` tag 移到最新裁决执行提交，
   暂时避免门控对存量债的 FAIL。**重锚不是销账**——债清单全部保留
   在本文档「最终目标债清单」节，是 C 线的工作队列。
4. **gate 语义保持**：今后修改含伪码的函数，gate 的 rejectable 检查
   （函数指针 cast/伪码形态）会 FAIL——**设计使然**，强制该函数完成
   真翻译后才能过 gate。存量债只能通过真翻译清偿，不能绕过。
5. **completed 虚标纠正**（本次执行附带）：`BuildingClass::GetPowerOutput`
   真翻译已恢复（语义完整），但其 CFG 缺 1 个 `vfptr+468` 事件——根因是
   src 侧继承链 vtable 槽位与二进制系统错位（实测槽 124 vs 二进制 117；
   object.hpp 虚区存在错位插入：`GetCellCoords_Alt` 标注 [165] 却排在
   [110] 位、`GetMapCoords` 无槽位标注）。`signals.json` 该函数
   completed=true→**false**（附 note）——存在未对齐事件即不满足
   completed 语义；真翻译代码保留。**新增工作项：vtable 槽位审计**
   （ObjectClass 虚区 124+ 槽对齐二进制注释，波及全继承链 vfptr 校验）。
6. **已完成真翻译（本执行）**：GetAmmoCountScaled（0x44D700）与
   SWAvailable（0x457630）exec-flow CFG 校验**通过**；GetPowerOutput
   见上条。三函数均以 IDA til 权威布局翻译（发现并绕开 member_lookup
   的 BuildingTypeClass 3800 区段错位：3808 实为 PowerBonus 而非
   DoorStages——**member_lookup 数据修正列入债清单**）。
7. **已完成代码核验（v2，2026-09-07 增量）**：
   - **逻辑忠实**：MCP `completed=true` 当前为 **24 函数**；本轮新增的
     `VeterancyStruct::IsRookie` 已真翻译并通过成员访问审计，但 verifier
     因该地址没有 IDA 伪码缓存暂未能执行 CFG，已记录 issue #8；
   - **成员访问**：`tools/audit_member_access.py` 增加 marker 回看和注释剥离，
     全库真代码当前 **0 个裸偏移成员访问**；剩余 14 处仅为 surface.cpp
     帧缓冲 `pix/zptr` 行进游标，按既有裁决保留；此前 building.cpp 的
     `*(int*)(*(int*)updated + 180)` 已考古为
     `(*weaponSlot)->MinimumRange`（WeaponTypeClass::MinimumRange）；
   - **语义命名/污染修复**：完成 7 个武器槽/军衔谓词函数的四方命名同步，
     并将 `TechnoClass::HasVoiceResponse` 从错误的 TechnoTypeClass owner
     迁回实例类；去除调用点的 `(float*)this` 污染强转；IDB 修正 3 个
     this 参数类型；
   - **命名规范**：局部变量继续使用 lowerCamelCase；本轮未统一类成员
     PascalCase。A4 基线曾为 0 mismatch，但后续语义改名后
     `audit_consistency.py` 当前报告 80 条既有 mismatch，需另行清理，
     不把当前状态回写成 A4 已通过。

## 最终目标债清单（C 线工作队列，重锚不清账）

| 债 | 数量 | 说明 |
|---|---|---|
| IDA 原码活代码块 | **3,428 pending（MCP）** | v2 已撤销 `#if 0` 包装；未完成函数以 `[IDA decompile] original pseudocode` 活代码块占位。数量以 `mcp__RA2-MCP__stats` 为权威，当前 pending=3,428；分布仍以 system/_gap2/_generated 为主。 |
| CFG 不忠实真翻译 | **69** | 基线有真实译但 exec-flow CFG 校验不通过——需逐函数对照 IDA 修复（清单见执行日志 09-06 终态甄别） |
| triage 未定位 | **20** | 行号漂移致甄别失败，需重扫 |
| 链接未解析符号 | **682** | 有声明从未有定义；`/FORCE:UNRESOLVED` 容忍链接。`tools/gen_link_stubs.py` 已生成 101 个近似签名 stub（`src/_generated/link_stubs.cpp`），**未入构建**——需按 hpp 原声明精确签名后接入，最终全部真翻译 |
| 无二进制对应函数 | 1 | `LocomotionClass::ChangeLocomotorTo`（历史手工编造，IDA 无此函数）——保留注释体，翻译时按调用语义重建或删除 |
| **vtable 槽位审计** | 1 项 | src 继承链虚函数声明槽位与二进制 vtable 系统错位（object.hpp 虚区至少 2 处错位插入 + 编译器实测 124 vs 二进制 117）——波及所有含虚调用函数的 exec-flow vfptr 校验。GetPowerOutput(0x44E7B0) 真翻译已就位但被此阻塞（completed 已纠正为 false） |
| **member_lookup 错位** | 1 区段 | BuildingTypeClass 3800 区段（3808=PowerBonus 被标 DoorStages、3816=ExtraPowerBonus 被标 BuildingAnim…整段偏移错位）——以 IDA til 为准修正数据文件 |
| ~~真代码裸偏移成员访问~~ | ~~1~~ | ✅ 已清偿（2026-09-07）：`updated` 链考古完成——0x70E1A0/0x4526F0/0x7177C0/0x7177E0 实为武器槽选择器族（T19 误命名为 UpdatePowered/SelectVocOrSfx/GetAudioEntry）；返回 WeaponTypeClass** 槽位指针，+180=WeaponTypeClass::MinimumRange@+0xB4（til 与 DisplayBuildingInfoPanel@0x4B99FA 的 Name@+0x64 字符串渲染双重印证）。UpdatePowered 返回类型改为 WeaponTypeClass**，GetPowerFrame 尾段改 `(*weaponSlot)->MinimumRange` 成员访问；audit_member_access 加注释剥离+marker 回看后全库真代码 0 违规（余 surface.cpp 14 处已裁决帧缓冲游标） |
| **T14/T19 类型与 owner 污染** | **1 项** | ✅ 已修正：IsRookie 误名、3 个 IDB primitive this 类型、HasVoiceResponse owner 与调用点污染强转；🔶 剩余 AdjustHeight owner、Audio 音量三连、TechnoTypeClass 错误局部 til、TechnoClass 中段偏移待考古（issue #7） |
| **嵌入子对象 receiver 类型污染** | **7 高 + 3 中候选** | 🔶 新增候选：FacingClass::Set_SyncLog/Update、Coord::GetCoords、Float4::Sum、Float::Accumulate、VoxelAnimClass::QuaternionToMatrix、JumpjetLocomotionClass::Update2（高）；FootClass::CheckAccelLimit、Locomotor::GetSpeed、VeinholeClass::GetState（中）。共同特征是调用方明确传 `object + offset`，而 type_map 将 receiver 误归到外层对象、int 或其他类。 |
| **verifier 伪码缓存缺口** | **1 项** | 🔶 IsRookie(0x74FFC0) 真翻译和 audit 已通过，但 `verify_function` 因无 IDA pseudocode cache 返回 exit=2；需补缓存后完成 CFG 校验（issue #8） |
| ida-artifact 门控空转 | 1 | `tools/check_pointer_arithmetic.py` 为**空文件**（f5da6e4f 起所有可达版本皆空）——三重门控之一从未真正检查。需用户裁决恢复实现（部分功能由 code-standards 的 AST ptr-arithmetic 检查覆盖，但那是 diff-scoped 非全量） |


## 0. 当前基线（2026-09-07 MCP 会话刷新）

| 维度 | 数值 |
|---|---|
| 约束/求解 | 1,196,795 条约束 → type_map 732,742 变量类型 |
| 类类型变量 | 138,884（this 10,767 / SSA 103,821 / 栈槽 10,193 / 成员 8,203 / 参数 3,992 / 全局 1,781 / 返回 127） |
| TOP 矛盾 | **0**（0 对冲突，verify_csp 七通道 ALL PASS） |
| ORPHAN | 20.6%（结构性天花板：计算写消灭身份） |
| IDB 落盘 | 历史基线：this 签名 ~9,840 / 局部变量 ~19,695 / 参数+返回 1,419 / 全局 449；本轮新增 3 处 this 类型修正并保存 IDB |
| til struct | 1,474（1,252 全布局 + 20 观测建 + 202 最小 vfptr） |
| struct 门 | 661 类可用，缺口 13（5 枚举 + 7 零观测 + 1 数组伪型） |
| 反编译 | 19,067 函数全部可反编译（6 个历史失败已修复） |
| 快照 | full_export v2（本次导出，类型化伪代码基座） |
| src/ 树 | ~130 hpp + ~135 cpp（~110K 行），0 错误 0 警告 |
| 完整翻译 | MCP completed=24；历史完整翻译统计 472 与 MCP completed 口径尚未统一 |
| 待命名 | sub_* 残留 5,468（其中 3,590 需反编译上下文命名） |
| 命名不一致 | A4 基线曾为 0；当前 audit_consistency 报 80 条既有 mismatch，需单独清理 |

**关键认知**：类型体系的工作重心已从"推断"转移到"消费"——快照里
19K 函数的伪代码现在带着 this 类型、~19.7K 个类型化局部变量和结构化
成员访问，这是语义命名与批量翻译的输入质量天花板跃升。

---

## Phase A — 语义命名轮（roadmap ④，快照消费，无需 IDA）

**目标**：把 `field_0xNN` / `v123` / `sub_XXXXXX` 变成有语义的名字。
**输入**：`decompile-results/full_export/` v2 快照 + `anchors/class_db.json`
+ YRpp/ecosystem 参考源（docs/ecosystem.md 四重参考）。

### A1. 类成员语义命名（最高收益）
- class_db 1,557 类中 ~1,252 类有布局；成员名当前多为 `field_0xNN` 占位。
- 方法：按类分桶 → LLM 依据（伪代码中该成员的所有访问上下文 + YRpp
  同名类偏移对照 + INI key 映射）生成候选名 → 人工抽检 → 
  `tools/rename_symbol.py` 四方同步（src/ + signals.json + member_lookup.json + IDA）。
- 优先序：TechnoClass/FootClass/ObjectClass 家族（成员访问频次最高）
  → 容器类（VectorClass/DynamicVector）→ UI 类。
- 验收：抽样 50 类，成员名与伪代码行为一致；构建 0 错误（hpp 改名后）。
- 规模：~8,200 个类类型成员偏移，预计 3-5 个工作日（分批+抽检）。

### A2. sub_* 函数命名 Pass 3（3,590 个池外函数）
- 前 two passes 命名 822 个靠 caller 上下文；Pass 3 用**类型化伪代码**
  （快照 v2）做反编译级命名——调用模式 + this 类型 + 成员访问语义。
- 产出：`sub_naming_proposals.json` v2 → rename_symbol.py 批量执行。
- 验收：IDA 名覆盖率 70.5% → 85%+；signals.json 同步 0 mismatch。

### A3. 局部变量语义命名
- `type_map` 103,821 个 SSA 类类型 + 19.7K IDA 局部类型已落盘；
  `auto_name.py`（T21）基于此生成 `renaming_suggestions.json`。
- 快照消费侧：LLM 依据类型+用途命名（`v28:TechnoClass*` → `pTarget`）。
- 只影响快照/反编译可读性，不动 src/（翻译时自然吸收）。

### A4. 命名一致性基线 ✅（2026-09-06 完成；2026-09-07 后续命名轮已追加语义改名）
- 59 method_diff：IDA↔hpp 别名差异，逐函数查快照裁决。
- 116 wrong_class：声明挂错类体，需移动声明（机械重构）。
- 40 other：签名差异逐个处理。
- 验收：`tools/audit_consistency.py` → 0 剩余。
- **终态**：基线漂移到 511（中间批量改名引入回归）→ 清零。
  - 502 个 IDA `Class[N]::M` → `Class_N::M`（signals/src 已是 _N 形态，
    补 IDA 改名 + ida_function_db.json 大写键同步）；
  - 3 个 `::?` 占位名对齐 hpp vt_method 命名（IDA+signals+db 三方同步）；
  - 4 个 hpp 陈旧 sub_ 名改语义名（InitScoreScreenData 等）；
  - 2 个错误地址注解移除（Hash 类误认领 0x5dac00=WideString::Hash、
    Memory 模板误认领 0x65d190=FileClass::Delete，IDA 反编译验证）。
  - **验收达成（A4 基线）**：0 mismatch / 0 normalized mismatch；后续 2026-09-07 语义改名（武器槽/军衔谓词）已按四方同步执行，当前审计存在 80 条既有 mismatch，需单独清理，不能回写为 A4 已通过。

---

## Phase B — 类型体系收尾（工程债，小而必要）

| 任务 | 内容 | 规模 | 状态 |
|------|------|------|------|
| B1 | t14_apply_sigs 550 失败归因（return 通道新类型拼接问题，同 wchar_t 双 CC 类） | 半天 | ✅ 完成（见日志） |
| B2 | mass_type 1 失败（RTtypeid CRT 折叠体，0x7caacb 非函数起始） | 1 小时 | ✅ 完成（见日志） |
| B3 | 枚举通道：Action/Armor/CellFlags/LandType/Layer 走 IDA enum 声明（非 struct）；type_map 枚举类型变量回填 enum 类型 | 1 天 | ✅ 完成（见日志） |
| B4 | 7 零观测 struct 考古（OwnedTiberiumStruct/LineTrail/Sequence/PassengersClass/PlanningTokenClass/RecoilData/RepeatableTimerStruct）：IDA 字段级 xref + YRpp 源对照恢复布局 | 2-3 天，可选 | ⬜ 未开始 |
| B5 | 888 池外 thiscall：需新证据源（vtable 间接 this 传递链深挖），排后 | 可选 | ⬜ 未开始 |

---

## Phase C — 函数体批量翻译（Phase 1 主线，最大工作量）

**流程（每函数）**：快照伪代码 → `tools/pre_translate.py`（门控）→
翻译到 src/ → `cmake --build build_win`（Clang AST 门控）→ REVERSE
对拍（Inject/Replace → comparisonResult.log Same）→ completed=true。

### C1. 优先队列重建
- 以 `docs/todo.md` P0/P1 为骨架，用**调用频次×类核心度**重排：
  ObjectClass/TechnoClass/FootClass 虚方法（游戏循环每帧路径）→
  容器/算法 → UI/Dialog → INI/序列化 → 网络。
- 每批 30-50 函数，走完对拍再进下一批。

### C2. sub_* 翻译积压
- 4,255 个 <50B 存根 + 1,203 个 50-500B 存根（`src/_generated/`，
  含 IDA 伪代码注释）——A2 命名后按 C1 优先级逐步替换为真实实现。
- 目标节奏：每会话 30-80 个（视复杂度）。

### C3. 对拍管道扩容
- 当前 Inject 活跃仅 2 个、39 个标 None——翻译进度上来后逐步激活。
- 首个写 .data 的非渲染函数 Inject 回滚测试（当前阻塞项，
  AGENTS.md「当前阻塞」#1）。
- 高频函数标 idempotent=true 避免事务开销（M4 教训）。

### C4. 门控红线维持
- 每函数过 `verify_execution_flow.py`（translation-incomplete 需手动
  IDA 对照补全）；禁止绕过（AGENTS.md 门控条例）。

---

## Phase D — 集成与验收（Phase 1 出口）

| 任务 | 内容 |
|---|---|
| D1 | gamemd.exe 全量构建对拍：菜单进入 + 主界面 15s+ 存活 + comparisonResult.log |
| D2 | EIP=0 偶发崩溃（Blit_Tracker DEFINE_HOOK 覆盖指令问题）——按 M7 六项标准排查 |
| D3 | 功能对等清单：按 docs/coverage.md 模块逐项对照原版行为 |
| D4 | Phase 1 验收 → 进入 Phase 2（现代化重构）立项 |

---

## 依赖关系与建议顺序

```
快照v2 (done) ──→ A1 成员命名 ──→ A2 函数命名 ──→ A4 一致性清零
                    │                                  │
                    ▼                                  ▼
              B1-B3 工程债（并行随时）          C1-C4 翻译主线
                                                       │
                                                       ▼
                                                 D1-D4 集成验收
```

- A1/A2 是 C 线的**输入质量投资**：命名后的快照让 LLM 翻译的上下文
  可读性质变（`this->AvailableCredits` vs `*(int*)(this+588)`）。
- B 线与 A/C 并行，互不阻塞。
- A3（局部变量命名）随 C 线自然吸收，不单独立项。

## 度量与检查点

| 指标 | 制定时 | 2026-09-07 现状 | A 轮后目标 | C 线里程碑 |
|---|---|---|---|---|
| IDA 函数命名覆盖 | 70.5% | A2 未开始；本轮新增 7 个语义函数名 + 1 个 T19 误名纠正 | 85%+ | — |
| 类成员语义名 | ~0（field_0xNN 占位） | A1 进入污染优先轮；尚未批量命名成员 | >60% | — |
| 命名不一致 | 215 | A4 基线曾清零；当前 audit_consistency 报 80 条既有 mismatch，需单独清理 | 0 | 0（维持） |
| hpp-impl 违规 | 未统计（1,765 隐性） | **0**（迁移完成） | 0 | 0（红线） |
| 完整翻译函数 | 472 | MCP stats：completed=24；本轮完成 IsRookie，历史“完整翻译”与 MCP completed 口径尚未统一 | — | 1,000 → 3,000 → 全量 |
| REVERSE 对拍 | 41 函数 | 41 函数 | — | Same 率 >95% |
| 构建 | gate 假绿 | MCP 最近记录 build errors=0；本轮单 TU 探针干净；`run_gates` 本次调用超时，未据此宣称全绿 | — | 0/0 + gate 3/3（红线） |

## 风险与对策

1. **LLM 命名的正确性**：语义名是假设立——错名比 field_0xNN 更危险。
   对策：命名必须附证据（伪代码上下文/YRpp 对照）；REVERSE 对拍兜底
   （行为对不上时命名嫌疑优先排查）；A1 抽检率 ≥10%。
2. **rename_symbol.py 四方同步漏网**：IDA 不在线时 --no-ida 模式会留下
   同步债——账目化（`.omo/rename_debt.json`），恢复连接后补同步。
3. **翻译引入回归**：每批对拍 Same 后才提交；崩一个回滚一个
   （M7 六项标准）。
4. **快照漂移**：IDA 侧任何类型/命名变更后需重导出（约 30 分钟）；
   快照版本号写入 README，翻译任务锁定快照版本。
5. **构建红线的"假绿"风险（2026-09-06 实证）**：`auto-fill-baseline`
   标签丢失导致 gate_prebuild diff 失败 → `add_dependencies(gamemd
   gate_check)` 使 gamemd 编译被整体跳过 → 历史"构建 0/0"报告部分为
   未编译假象。对策：标签已恢复（锚定 b01d3cf9）；任何构建验证必须
   确认 gamemd.vcxproj 实际执行了 cl 编译（非仅 gate 通过）。

---

## 执行日志 — 2026-09-06 会话（B1/B2/B3 + A4 完成；hpp-impl 债务迁移）

### 已完成

**B1 — t14_apply_sigs 550 失败归因修复（fail=0）**

诊断重跑（加 fail_log 落盘）后 637/637 失败全数归因于两类解析器缺陷：

1. **无名声明**（585 个 `int __stdcall(...)` 形 + 52 个 `int(...)` 形）：
   IDA C 解析器拒绝无名函数声明（已知 MCP 规则），而 param-only 编辑
   路径从不插入函数名——旧代码只在 `__thiscall(` 分支插名。修复：头部
   不以函数名结尾时统一插入 `nm`（同名重声明非改名，不破坏
   symbols-locked 1:1:1）。
2. **函数指针形参碎切**（2 个）：参数表用裸 `split(",")` 把
   `int (__stdcall ****)(A, B)` 的内层形参表切碎，重组后多出一个 `)`
   （双右括号畸形）。修复：深度感知切分（与 name_anon_params 同法）。

终态：`fail=0`，本轮 **914 处 return/param 编辑全部落盘**（重试 637 →
2 → 0），抽查 InfantryClass::updateOccupiedBuilding / Session::RemoveTeam
原型已带 IUnknown*/MSShapeAnim* 参数。

**B2 — mass_type CRT 折叠体过滤（fail=0）**

- 根因：`anchors/ctor_types.json` 含 7 条 CRT RTTI 支持类记录
  （type_info×1 / __non_rtti_object×2 / bad_typeid×2 / bad_cast×2）——
  全是 COMDAT 折叠体，地址非函数起始（0x7caacb ∈ RTtypeid 内部），
  vtable 安装属 CRT 自身而非游戏类。
- 修复：`load_truth()` 池级剔除 CRT RTTI 类（与 `_` 前缀 CRT 防御
  同源的确定性排除）；state 清理（fail 归零，移除已入 done 的折叠地址）。

**B3 — 枚举通道（5 枚举 + 8 成员 + 2 参数，IDB 已保存）**

- IDA til 声明 5 枚举，成员取自 `src/core/enums.hpp` +
  `src/system/cell.hpp` **权威表**（首版曾误发臆造成员，已删除重建）：
  Action(73) / Armor(11) / LandType(12) / Layer(5) / CellFlags(33)。
  成员名带前缀（`Action_`/`Armor_`/`Land_`/`Layer_`）防全局重名；
  CellFlags 头文件已带前缀。CellFlags 以普通枚举落盘（bitmask 模式
  与 None=0 成员冲突，非阻塞）。
- struct 成员回填 8 处（int[1]/int[2] 占位 → 枚举）：
  AnimTypeClass+0x364→Layer、CellClass+0x140→CellFlags、
  DifficultyStruct+0x18→Armor（**顺带修复 int[2] 与 ROF@0x1c 重叠**）、
  ObjectTypeClass+0x9C→Armor、OverlayTypeClass+0x294→LandType、
  SuperWeaponTypeClass+0xBC→Action、UnitTypeClass+0x2EC→LandType、
  ScriptActionNode+0x0→Action（成员本名即 Action）。
- 函数参数回填 2 处（type_map param2 通道，语义验证吻合）：
  ArmorType::FindIndex 第 4 参→Armor、AnimTypeClass::ReadINIString
  第 4 参→Layer。
- 布局完整性验证：三个抽查类成员偏移/尺寸无漂移。

**A4 — 命名一致性 511 → 0**

（详见上文 A4 小节终态。）IDA 侧 502 改名 + 3 个 `::?` 三方同步 +
ida_function_db.json 大写键同步（52+450）；hpp 侧 4 处语义名 + 2 处
错误注解移除（IDA 反编译实证函数真实归属）。
验收：`audit_consistency.py` → **0 mismatch / 0 normalized mismatch**。

**附带 — auto-fill-baseline 标签恢复（构建红线修复）**

- 本克隆标签丢失 → gate_prebuild `git diff` rc=128 → 构建永久失败
  （"1/3 gates FAILED" 且无 FAIL 明细）。
- 恢复路径考据：先锚 1f300ba8（gate restore commit 声明的基线）→
  暴露 1,526+ 违规（Phase A 无条件全量扫描，与 diff 无关）→ 改锚
  **b01d3cf9**（路线图基线 commit，文档明载构建 0/0 态）→ 仅剩
  tab.hpp 1 个（实为 Phase A 全量扫描命中，非 diff 引入）。
- 教训已入"风险与对策"第 5 条：标签丢失期间"构建 0/0"报告部分为
  未编译假象。

**新增工作项 — hpp-impl 存量债务机械化迁移（1,765 → 0）**

- 发现：标签恢复后 Phase A（全量 hpp 扫描）暴露 **1,765 处**头文件
  函数体（misc_ext.hpp 852 / locomotion.hpp 273 / utility_ext.hpp 136 /
  game_systems.hpp 53 …），系历史翻译会话积累、被 gate 假绿掩盖。
- 新工具 `tools/move_hpp_bodies.py`：libclang AST 偏移精确迁移——
  - latin-1 字节保真读写（token 偏移是字节偏移；UTF-8 会错位）+
    `newline=''`（CRLF 折叠会使偏移漂移）——两条都是实战踩坑；
  - 普通成员/自由函数 → `<stem>_bodies.cpp`（namespace 分组、
    默认实参留声明侧、声明侧剥 `inline`、`Class::` 限定、
    ctor init-list 定义侧保留且注释感知）；
  - 模板/constexpr → `<stem>_bodies.inl`（hpp 末尾 #include，
    AGENTS.md 明文许可路线）；
  - `= default` 析构 → hpp 声明 + cpp `X::~X() = default;`
    （libclang 对 defaulted 函数 token 流**不含结尾分号**，需回退到
    末 token——清零 115 残余的关键）；
  - 转换运算符（CONVERSION_FUNCTION）spelling 是规范类型
    （`operator unsigned int` vs 源码 `operator target_t`），从声明头
    提取实际文本匹配；
  - windows.h 宏 A/W 后缀回退（GetClassName→GetClassNameA）；
  - 模板名剥离（`Node<T>`→`Node`）；friend 定义扫描确认零风险。
- 终态：**1,765 → 0 违规**（hpp_scan 全量复扫验证）；产出 83 个
  `_bodies.cpp` + 3 个 `_bodies.inl`。

### 未完成 / 阻塞

**🔶 构建红线：编译层已恢复、gate 层 2/3（2026-09-06 深夜会话终态）**

**编译层 ✅**：2,874 → **0 编译错误**（35 轮迭代），链接产出
`build_win/Debug/gamemd.exe`（1.5MB）。主要修复（详见下方 09-06 夜日志）：

1. **IDA 嵌入体隔离**（`tools/quarantine_ida_embeds.py`）：历史"伪翻译"
   把 IDA 反编译裸文本（`#374`/`__thiscall`/`_DWORD`）粘进函数体——
   这些 TU 从未编译过。19 万行注释化 + 3,404 个显式 stub（保留原文本
   为参考注释，Task 17/18 存根惯例）。62 文件。
2. **Surface 抽象基类重建**（surface.hpp，IDA vtable 0x7E2198 实证）：
   32 条 vtable + Width@+4/Height@+8（0x411540/0x411550 反汇编铁证）；
   DrawSHP/DrawText 4 重载声明补齐；GetRect 出参形态（0x411510）。
3. **misc_ext.hpp 垃圾建模清理**：4 个 kernel32 导入跳板误建类删除
   （GetCurrent* / OleUninitialize，IDA 实证 jmp __imp）；13 个数字名
   虚函数合法化 Method_XXXXXX；3 个构造误生成修复；IClassFactory
   COM 头补齐。
4. **大规模存量甄别修复**：checksummer/radbeam/shp_struct/ebolt/
   waypoint 系成员声明恢复；GameMode 枚举/类冲突裁决（删错误工具类，
   0x5D5DE0 实为 thiscall 成员）；CellStruct typedef 对齐（math.hpp
   `Vector2D<short>`）；namespace 分裂缓解（locomotion FootClass 桥、
   foot.cpp Mission 全局限定）；空指针 return 修正 197 处；
   bodies 双重定义去重（misc_ext_bodies 852 个 = hpp inline 迁移与
   原 cpp 定义并存）；类内 `= default` dtor 误迁出回滚（LNK2005 根因）。
5. **链接 stub 基建**（`tools/gen_link_stubs.py`）：682 个历史未解析
   符号（从未有定义的声明）以 /FORCE:UNRESOLVED 容忍链接（既有策略）；
   101 个 stub 已生成（`src/_generated/link_stubs.cpp`），因 demangle
   签名近似误差暂未入构建——后续按 hpp 原声明精确生成后接入。

**gate 层 🔶（2/3，ida-artifact ✅ / code-standards ❌ / exec-flow ❌）**：

- exec-flow **232 translation-incomplete**（终态甄别 `.omo/triage_final.py`）：
  - **143 个**基线即伪翻译（非法嵌入体）——隔离为 stub 后 CFG 校验
    FAIL 是诚实反映，语义与基线等价（从未工作过）；
  - **69 个**基线真翻译但 CFG 不忠实（building/unit/infantry 主力，
    如 SetProduction/UpdateProduction/Mission_Harvest）——**真修复
    对象**，即 C 线首批工作；
  - **20 个**定位失败（行号漂移，需重扫）。
- code-standards **35 FAIL**（26 stub + 9 comment shell）：隔离产出的
  stub 函数与注释占比过高的函数——同批 C 线对象。
- **决策点 → 已裁决（2026-09-06 深夜，用户）**：未完成翻译以 IDA 原始
  反编译 `#if 0` 块占位（`tools/uncomment_ida_blocks.py` 全量转换
  3,421 块 + `.omo/fill_isolated_ida.py` 从快照回填 16 个虚构 API legacy
  函数），提交后 `auto-fill-baseline` 重锚该提交。gate 对存量债转绿，
  债转入「最终目标债清单」节跟踪。object.cpp 双重前缀修正 68 行
  （单文件试验 + 全量两次隔离所致，`.omo/fix_double_prefix.py`）。

**69 个 CFG 不忠实真翻译清单**（C 线修复对象，按文件分组；
✅=本执行已真翻译并通过 exec-flow，🔶=已真翻译待 vtable 审计解锁）：

- building.cpp（32）：✅GetAmmoCountScaled / 🔶GetPowerOutput /
  ✅SWAvailable /
  Construct / Dtor / IsCellPlaceable / ValidatePlacement /
  FindPlacementCells2 / SearchPlacement / CheckBuildability / SetRallyPoint /
  CheckExitPath / SellEffects / PowerDrainUpdate / IsPoweredOn /
  IsPoweredActive / StartProduction / UpdateProduction / SetProduction /
  Infiltrate / GetCrew / Is1x1AndUndeployable_BuildingMassSelectable /
  IsInvisible / OnObjectExpired / SetType / AddUpgrade / CalcDrawPos /
  GetBoundingSizeExt / GetFactoryPosition / Mission_Missile / Mission_Repair /
  ClearSuperWeaponAnim
- unit.cpp（12）：Mission_Harvest / GetExitCell / SimpleDeployerDeploy /
  SimpleDeployerUndeploy / MissionDispatch / ApproachTarget_DisallowMoving /
  UpdateRotation_TurretFacing_EMP / CheckForNearbyEnemies / CanCrushTarget /
  Destructor / LoadFromStream / ClearTargetRef / UnloadPassengers /
  ProcessIdleOrders
- infantry.cpp（7）：ProcessDeployAction / GetFireError / FindNearbyCell /
  CalcFacingToTarget / SelectAutoTarget / CalculateApproachPath
- aircraft.cpp（3）：MissionDispatch / GetMissionTimer / Destruct
- tactical.cpp（11）：RenderIsometric / DrawMap / DrawTerrain /
  DrawTerrainPartial / SetView / SetViewDimensions / SetViewportPosition /
  ScrollViewport / AddToDrawQueue / DecrementCounter / MouseInput /
  PixelToCellCheck / ScreenToCellLookup / TransformPixel
- 其他：techno.cpp SelectWeapon ×2 / surface.cpp DSurface::Unlock /
  connection.cpp queueSendPacket / network_ext.cpp NetworkOptions::DlgProc /
  init_game.cpp CCFileClass::Open / CCFileClass::Reset / CCINIClass::Load /
  cell.cpp CellClass::DrawDispatch / mix_file.cpp MixFileClass::Bootstrap

**⚠ 新发现——ida-artifact 门控空转**：`tools/check_pointer_arithmetic.py`
为空文件（0 字节），`git log` 显示 f5da6e4f 起所有可达版本皆空——
三重门控之一从未真正执行检查，属 AGENTS.md「静默退化」条目的实例。
未擅自恢复（门控基建需用户审查）；部分功能被 code-standards 的
AST 检查（diff-scoped）覆盖，全量扫描缺失。

**⬜ 其余未开始任务**（优先序不变）：

- C 线主线 = 「最终目标债清单」逐一清偿（3,437 #if 0 + 69 CFG + 682 链接）；
- A1 类成员语义命名（TechnoClass/FootClass/ObjectClass 家族优先）；
- A2 sub_* Pass 3 反编译级命名（3,590 池外）；
- A3 局部变量语义命名（随 C 线吸收）；
- B4 7 零观测 struct 考古（可选）；B5 池外 thiscall（可选）；
- D1-D4 集成验收（exe 已产出，待真翻译覆盖率提升后运行时验收）；
- 快照重导出（本轮 IDA 侧类型/命名变更后需要：5 枚举 + 8 成员回填 +
  502 改名 + 914 签名落盘都尚未反映到 full_export）。

### 本轮度量变化（09-06 深夜会话，含裁决执行）

| 指标 | 会话前 | 会话后 |
|---|---|---|
| 编译错误 | 2,874 | **0** |
| gamemd.exe | 无（从未链接成功） | **产出**（/FORCE:UNRESOLVED 容忍 682 stub 债） |
| IDA 嵌入体形态 | 190,744 行裸文本（非法语法） | **3,437 个 `#if 0` IDA 原码块**（原码在体，可编译可 grep） |
| hpp-impl 违规 | 0（迁移后） | **0**（hpp_scan 全量复扫维持） |
| gate | 假绿（未真正运行） | 诚实 2/3 → **重锚后 3/3**（ida-artifact 空转存疑） |
| Surface 基类 | 未定义（734 错根因） | 重建（IDA vtable 实证） |
| 双重定义（LNK2005） | 852+3 | 0 |
| 磁盘 | D: 100% | 清理 ~1GB（.omo/tmp 452M + 2 IDA 副本 486M） |
| 提交 | — | 本次提交（含 baseline 重锚，tag 同步移动） |

**新增工具**：`tools/quarantine_ida_embeds.py`（嵌入体隔离）、
`tools/quarantine_backfill.py`（stub 补插 pass 2）、
`tools/uncomment_ida_blocks.py`（裁决执行：注释伪代码 → `#if 0` 原码块）、
`tools/isolate_broken_translations.py`（虚构 API 翻译隔离）、
`tools/dedup_bodies.py`（bodies 去重）、`tools/gen_link_stubs.py`
（链接 stub 生成）、`.omo/check_ns.py`（hpp namespace/brace 平衡检查）、
`.omo/fill_isolated_ida.py`（快照回填 IDA 原码）、
`.omo/fix_double_prefix.py`（双重隔离前缀修正）、
`tools/unwrap_if0_blocks.py`（裁决 v2：撤 #if 0 原码活代码化）、
`tools/audit_member_access.py`（成员访问全量审计）。

---

## 执行日志 — ra2-translate MCP 工具集上线（2026-09-06 深夜续）

**用户指令**：编写专用 MCP 工具集，使翻译/重命名/追踪错误等机械性
复杂操作全部经 MCP 完成；函数/变量与 IDA 地址一一对应、注释由 MCP
维护；随后启动服务并提供配置 JSON。

### 交付

- **`tools/mcp_translate_server.py`**（22 工具，自包含无第三方依赖）：
  - 翻译流水线 7：list_pending / next_batch / get_context /
    replace_body / verify_function / mark_completed / function_state
  - 重命名 2：rename_symbol（四方同步）/ rename_local（函数域）
  - 编译验证 4：build（单 TU 秒级 / 全项目）、get_build_errors、
    run_gates、audit_access
  - **地址一一对应 5**（用户要求）：annotations_audit / annotations_fix /
    globals_annotations_audit / annotate_function / addr_lookup——
    replace_body 翻译后**自动维护 `// 0xADDR`**
  - 错误追踪 4：issues_add / issues_list / issues_resolve / stats
- **双传输**：stdio（客户端自动拉起）+ HTTP 常驻
  （`--http 13399`，本会话已后台启动，GET / 健康检查 + initialize +
  stats 三项探针验证通过）
- **冒烟**：`tools/mcp_translate_smoke.py` 用官方 MCP SDK 客户端跑通
  全部 22 工具（--heavy 附带 build/verify）
- 文档：`docs/mcp_tools.md`（注册 JSON ×2 + 纯 MCP 标准工作流）

### 地址注解初始化（annotations_fix 全量执行）

补齐 **2,689** 条函数 `// 0xADDR` 注解 → 终态
**matched 3,313 / missing 0 / mismatch 7（真实差异待审）/
unknown 2,085**（signals 外形态——helper/别名，翻译时甄别归因）。
全局变量注解：annotated 1,034 / missing 22。

### 关键实现决策

- **协议自实现**：官方 mcp SDK 2.0 的 `add_request_handler` dual-era
  分发以 -32602（ValidationError→"Invalid request parameters"）拒绝
  经典 tools/call 信封（实测多轮定位）——改为直接实现 stdio
  JSON-RPC 循环（~80 行）；官方 SDK **客户端**连接验证正常。
- member_lookup 已知坏区（BuildingTypeClass 3800 段）在 get_context
  中自动警告；IDA til 在线（:13337）优先提供权威成员名。

### C 线工作方式（自此变更）

翻译全部经 MCP 工作流执行：
`next_batch` → `get_context` → `replace_body(dry_run)` →
`replace_body` → `build(scope=file)` → `audit_access(file)` →
`verify_function` → `mark_completed`；失败路径 `issues_add` +
`get_build_errors(file)` 定位。地址注解由 replace_body 自动维护，
人工翻译时不再手写 `// 0xADDR`。

---

## 执行日志 — 2026-09-07 继续调研：T14/T19 污染排查、命名与计划刷新

### 当前 MCP 统计

- pending translations: **3,429**
- completed functions: **24**
- open issues: **5**
- 最近 MCP build error 记录：**0**（本轮单 TU 探针编译干净；`run_gates` 本轮调用超时，未据此宣称全门控通过）

### 污染排查与确定性修复

对 `decompile-results/full_export/src/` 的函数原型进行标量指针 this 扫描，发现
320 个 `float*`/`double*`/`char*` 等原型。逐个按反汇编与调用方分类，得到以下结果：

1. **军衔谓词三件套已确定并命名**：
   - `VeterancyStruct::IsRookie` @ 0x74FFC0：`fld [ecx]`，`0.0f <= value < 1.0f`；
     原 signals/IDA 名为 `Crate::initializeCrate`/`sub_74FFC0`，已四方同步纠正，
     并完成真翻译 `this->Veterancy`。
   - `VeterancyStruct::IsVeteran` @ 0x74FF90：阈值 1.0f。
   - `VeterancyStruct::IsElite` @ 0x750010：阈值 2.0f；这里的 `float*` 经 x87
     `fld/fcomp` 指令确认是真实 ABI，不是 T14 污染；但同族 `SelectWeaponSlot`
     的 float* this 确认为 T14 污染。

2. **武器槽选择器族已命名**：`GetPoweredWeaponSlot`、`SelectWeaponSlot`
   （Techno/Building 两个 owner）、`GetWeaponSlot`、`GetEliteWeaponSlot`。
   `WeaponStruct` 28 字节、`Weapon[18]`/`EliteWeapon[18]` 数组和调用方
   `lea [esi+150h]` 的 veterancy 参数共同提供证据。

3. **HasVoiceResponse owner 与调用点污染已修正**：
   `TechnoTypeClass::HasVoiceResponse` → `TechnoClass::HasVoiceResponse`；
   调用方均传 `TechnoClass*`，并已删除 `(float*)this` 强转。IDB 参数类型同步为
   `TechnoClass*`，源码声明从 `techno_type.hpp` 迁到 `techno.hpp`。

4. **成员访问清债维持**：全库真代码审计为 0 个裸偏移成员访问；surface.cpp
   剩余 14 处为既有裁决的帧缓冲游标，不是对象成员访问。审计器新增 marker 回看
   与注释剥离，避免把内层 IDA 伪码签名和注释误报为真代码。

### 尚未修改的污染债务

- `BuildingClass::AdjustHeight` @ 0x62D5E0：`float* this` 明显可疑，函数簇同时
  调 `ParticleClass::CheckWaterImpact` 和 `UpdateFloatPosition`；owner 搬移需要
  进一步确认，不能只凭函数名改类声明。
- `Audio::SetScoreVolume`/`SetSoundVolume`/`SetVoiceVolume`：`float* this` 疑似
  音量状态结构入口，真实 owner 与现有 hpp 结构待调用方考古。
- `TechnoTypeClass` 的 til 模型仅 0x2EC，无法容纳 Weapon[18]/EliteWeapon[18]
  数组；类型侧函数 owner/布局仍是独立债务。
- `HouseClass::AccumulateScore` 的 `float* this` 可能是分数累加字段指针，暂不盲改。
- 0x750030 存在 JUMPOUT，暂不命名。
- `VeterancyStruct::IsRookie` 的成员访问审计通过，但 verifier 因 IDA 伪码缓存缺失
  返回 exit=2，已记录 issue #8，待预缓存该地址后补 CFG PASS。

### 新增：嵌入子对象 receiver 类型污染候选

本轮从 full_export 调用点和 type_map 交叉筛查出一种不同于“完整对象 owner 错误”的污染：
函数本身属于 `FacingClass`、`Coord`、`Float4` 等嵌入结构，但调用方把外层对象的
`base + offset` 传入；Hex-Rays 原型显示为 `char*`/`float*`/`int* this`，type_map
却把 receiver 误归为外层对象、整数或无关类。翻译时应恢复嵌入成员的 `.`/`->` 语义
访问，不能把外层对象类型直接传播给被调函数。

**高置信候选（7）**：

| 地址 | 函数 | 调用方证据 | type_map 异常 |
|---:|---|---|---|
| `0x4C9300` | `FacingClass::Set_SyncLog` | Aircraft/Building/Techno/Unit 多处传 `this+904/928` | this→ObjectClass / DIRECT_PROP |
| `0x4C9220` | `FacingClass::Update` | Building/Unit/Aircraft 多处传 `this+904/928` | this→ObjectClass / DIRECT_PROP |
| `0x4399A0` | `Coord::GetCoords` | Anim/VoxelAnim 多处传 `(float*)this+44/74` | this→int / DIRECT_PROP |
| `0x6C9650` | `Float4::Sum` | Foot/Infantry/Techno/Unit 多处传 `(float*)this+207` | this→BuildingTypeClass / ANCHORED |
| `0x6C9690` | `Float::Accumulate` | Infantry/Unit 多处传 `(float*)this+207` | this→BuildingTypeClass / DIRECT_PROP |
| `0x4399E0` | `VoxelAnimClass::QuaternionToMatrix` | VoxelAnim 多处传 `(float*)this+44` | this→int / DIRECT_PROP |
| `0x439B00` | `JumpjetLocomotionClass::Update2` | AnimClass 传 `this+296` | this→int / DIRECT_PROP |

**中置信候选（3）**：

| 地址 | 函数 | 证据 | 当前限制 |
|---:|---|---|---|
| `0x750030` | `FootClass::CheckAccelLimit` | 调用处传 `(float*)this+84` | 中间对象来源需确认 |
| `0x426630` | `Locomotor::GetSpeed` | 多处传 `(int*)this+2`、`this+139` | receiver 可能存在多种布局 |
| `0x74FFF0` | `VeinholeClass::GetState` | 单点传 `(float*)this+84` | 调用证据不足 |

**明确排除**：`TechnoClass::Fire @ 0x70ECE0` 属 weapon 相关，按当前 weapon selector
专项边界不纳入本组；`IsVeteran/IsElite` 的 `float*` 是真实 x87 标量 ABI；surface.cpp
14 处是帧缓冲游标，不是对象成员访问。

这些候选尚未修改。下一步应按优先级检查每个 receiver 的 vtable/struct 来源和所有调用方，
再决定是补充嵌入成员类型、修正 `type_map`，还是保持合法的字段指针 ABI。

---

## 执行日志 — 2026-09-07 污染清偿轮 + 翻译推进（MCP 全流程）

### 污染修复（全部证据 = 反汇编 + 调用方 xref + live IDA）

**基础设施层（污染传播链切断）**：

- **rename_symbol.py IDA 通道从未生效**：原实现调不存在的 `ida-pro-mcp_py_eval`
  CLI（WinError 2）——重走 HTTP `127.0.0.1:13337/mcp`（rename 工具 func/data
  batch + idb_save）；附带发现 0x70D0D0 的 IDA 名自上轮起一直滞留旧名，已补齐。
- **`_by_name` / `ida_name_index` 派生索引滞后**：rename_symbol 补两处同步；
  signals 主表 0x70D0D0 旧 owner 纠正 + `_by_name` 全量重建（25,228 条）；
  `ida_name_index.json` 从 ida_function_db 权威重建。
- **rename 债务账目化**：`.omo/rename_debt.json` + `--replay-debt` 重放
  （roadmap 风险条 2 落地）；MCP 服务器 signals 缓存改 mtime 失效。

**命名/类型污染修复（12 个函数改名 + 8 处 IDB 类型/结构）**：

| 原名（误） | 新名（证据） |
|---|---|
| Locomotor::GetSpeed（虚构类） | CDTimerClass::TimeRemaining（读 {start,pad,count} 倒计时；FacingClass::Set_SyncLog 传 &RotationTimer） |
| Audio::Set{Score,Sound,Voice}Volume | Options::Set{...}Volume（14 调用点全传 &0xA8EB60 全局；兄弟族 Options::DlgProc 同 receiver；音量槽 +0x38/0x3C/+0x40） |
| TechnoTypeClass::CheckFlag | GameSettings::SetScoreVolume（=[this+0xC]·min(v,255)；3/3 调用方传 &0xA83D10；声明迁 game_systems.hpp） |
| BuildingClass::AdjustHeight | ParticleClass::AdjustHeight（调用方全粒子系统；体读 location@0x9C/height@0xE4） |
| HouseClass::AccumulateScore | VeterancyStruct::Accumulate（3/3 调用方传 TechnoClass+0x150 军衔 float；this 保持 float* 字段 ABI） |
| BuildingClass::SetField8/SetField95 | AnimClass::SetField8/SetField95（4/4 调用方传 AnimClass：ctor 结果/建筑动画槽项；写 +0x19E byte/+0x17C dword；成员名待 AnimClass 中段考古） |

IDB：FacingClass/CDTimerClass til 结构补成员声明（class_layouts 权威）；
0x4C9220/0x4C9300 this→FacingClass*+DirStruct*、0x62D5E0→ParticleClass*、
音量三连→Options*、0x721290→GameSettings*、0x6C9690 param1 BuildingTypeClass*→float。
反编译立即恢复 `this->DesiredFacing`/`this->RotationTimer.StartTime` 语义渲染。
`g_CurrentFrame`(0xA8ED84) src 类型 void*→int；该全局深埋 HouseClass_Player
45KB 误标 mega-blob——blob 拆分记数据模型债。虚构类 Locomotor 双声明删除。

**Receiver 污染候选裁决（7 高 + 3 中，issue #7 结案附全表）**：已修 6 项；
Coord::/Float::/Float4:: 家族转 A2 逐函数证据轮；0x750030 边界损坏禁动；
VeinholeClass::GetState 单调用点证据不足维持。

### 翻译推进（completed 24 → 27）

- **CDTimerClass::TimeRemaining(0x426630)**、**FacingClass::Update(0x4C9220)**、
  **FacingClass::Set_SyncLog(0x4C9300)**：真翻译 + CFG 双射 PASS + completed。
- **VeterancyStruct::IsRookie(0x74FFC0)**：补验 PASS（issue #8 结案；根因三重：
  签名正则不认 namespace 单行前缀 / `&&` 切分 vs IDA 扁平单块 / IDA 离线）。
- **AbstractClass::QueryInterface(0x410260)**：真翻译落盘（编译净/audit 0/
  STEP3 OK/结构 10↔10 同构），但 verifier 逐块事件集合相等拒收——C++ 侧
  AddRef 提取为 CALL、IDA 侧间接虚调用无事件（提取不对称）→ issue #9。
- 批次 B 余 5 函数（issue #4/#10）：SetField8/95 owner 破案改名；三函数
  （CheckC4Active/IsTiberium*）经 live til 复核维持布局考古延缓。

### CFG 双射经验（翻译方法论沉淀）

1. 条件方向照抄 IDA 伪码文本（`if (<=0) goto` 形态要用空真臂 if/else 镜像）。
2. C++ `&&`/`||` 切分多块 vs Hex-Rays 扁平化——能用单块表达式（含非短路 `&`）
   就不用短路运算。
3. 三元 `?:` 降级为菱形块——位技巧 abs（`(x^(x>>31))-(x>>31)`）替代分支 abs。
4. 多语句无事件臂可折叠，带 gating 事件（CALL/WRITE）或全局 READ 的臂独立成块
   ——全局读提升到条件块外。
5. 伪码的 if 外默认赋值（无 else 形态）必须镜像为"默认赋值+覆盖"而非 else 臂。

### 工具债清偿

issue #2（replace_body 双签名自动剥离）、#8（IsRookie 补验）、#7（污染全表结案）
已 resolve；新增 #9（虚调用提取不对称）、#10（批次 B 进展记录）。

### 未完成 / 下一步

- **full_export 快照重导出**（本轮 IDB 变更大量未反映：12 改名 + 8 类型 +
  2 结构声明；~30 分钟）；
- Coord::/Float::/Float4:: 家族 A2 命名轮（逐函数证据）；
- verifier 虚调用提取补齐（issue #9/#3 同族）或 vtable 槽位审计落地；
- AnimClass/TechnoClass 中段布局考古（SetField8/95 与 tiberium 族解锁前提）；
- issue #4 三函数 + 69 CFG 不忠实清单继续清偿。
