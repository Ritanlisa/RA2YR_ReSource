# CSP 后时代路线图 — 类型体系收官 → 语义重建 → 功能对等

> 2026-09-05 制定。CSP 约束求解体系已达证据上限（TOP=0，七通道全绿），
> 本文档是此基线上的完整后续工作分解。前情：AGENTS.md「最近完成」各条目、
> `docs/coverage.md`、memory `type-infer-oop-rebuild-roadmap`。
>
> **执行状态首查表（2026-09-06 会话更新，含深夜裁决执行）**：
>
> | 任务 | 状态 | 摘要 |
> |---|---|---|
> | B1 apply_sigs 550 失败 | ✅ 完成 | fail=0，914 处 return/param 编辑落盘 |
> | B2 mass_type 1 失败 | ✅ 完成 | CRT RTTI 折叠体池级过滤 |
> | B3 枚举通道 | ✅ 完成 | 5 枚举声明 + 8 成员 + 2 参数回填 |
> | A4 命名一致性 | ✅ 完成 | 511 → 0（audit 0/0） |
> | hpp-impl 存量债务 | ✅ 迁移完成 | 1,765 → 0 违规 |
> | **构建红线（编译层）** | ✅ **恢复** | 2,874 → **0 编译错误**；链接产出 `build_win/Debug/gamemd.exe`（1.5MB，/FORCE:UNRESOLVED 容忍 682 历史未解析 stub 债） |
> | **构建红线（gate 层）** | ✅ **3/3（重锚后）** | 用户裁决：未完成翻译以 **IDA 原始反编译 `#if 0` 块**占位（3,437 个）→ 提交 → baseline 重锚该提交暂避门控。**⚠ ida-artifact 门控脚本为空文件（存量空转）——见执行日志** |
> | **最终目标债（翻译积压）** | 🔴 **核心主线** | **3,437 个 `#if 0` IDA 块** + 69 个 CFG 不忠实翻译 + 682 链接未解析符号 + 20 triage 未定位——目标：全部真翻译（见「最终目标债清单」节） |
> | A1 成员语义命名 | ⬜ 未开始 | |
> | A2 sub_* Pass 3 命名 | ⬜ 未开始 | |
> | B4 零观测 struct 考古 | ⬜ 未开始（可选） | |
> | B5 池外 thiscall | ⬜ 未开始（可选） | |
> | C1-C4 批量翻译 | 🔶 **就绪** | 输入（#if 0 IDA 原码 + 类型化快照）已就位；债清单即工作队列 |
> | D1-D4 集成验收 | ⬜ 未开始 | exe 已产出待运行时验收 |
>
> 详细过程与遗留问题见文末「执行日志」。

## 用户裁决（2026-09-06 深夜，本路线图的基线事件）

1. **最终目标**：翻译所有内容（全部真翻译，非 stub）。
2. **未完成翻译的占位形态**：函数体携带 **IDA 原始反编译代码**
   （`#if 0` 块 + `[IDA decompile]` 标记 + 编译所需的最小 stub return），
   而非裸 stub。伪代码不是合法 C++（`#374`/`__thiscall`/`_DWORD`），
   `#if 0` 是唯一可编译的"原码在体"形态，且是
   `verify_execution_flow.py` 一等识别的 "disabled implementation" 模式。
3. **baseline 重锚**：`auto-fill-baseline` tag 移到本次提交，
   暂时避免门控对存量债的 FAIL。**重锚不是销账**——债清单全部保留
   在本文档「最终目标债清单」节，是 C 线的工作队列。
4. **gate 语义保持**：今后修改任何含 `#if 0` IDA 块的函数会重新触发
   `stub-with-disabled-implementation` FAIL——**设计使然**，强制该函数
   完成真翻译后才能过 gate。存量债只能通过真翻译清偿，不能绕过。
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

## 最终目标债清单（C 线工作队列，重锚不清账）

| 债 | 数量 | 说明 |
|---|---|---|
| `#if 0` IDA 原码块 | **3,437** | 含原 143 个伪翻译隔离体 + 16 个虚构 API legacy 函数（已替换为快照 IDA 原码）+ gap2/Task17-18 存根体系。分布：system 800+ / ui 200+ / structure 100+ / entity 90+ …（`grep -r "original pseudocode" src/`） |
| CFG 不忠实真翻译 | **69** | 基线有真实译但 exec-flow CFG 校验不通过——需逐函数对照 IDA 修复（清单见执行日志 09-06 终态甄别） |
| triage 未定位 | **20** | 行号漂移致甄别失败，需重扫 |
| 链接未解析符号 | **682** | 有声明从未有定义；`/FORCE:UNRESOLVED` 容忍链接。`tools/gen_link_stubs.py` 已生成 101 个近似签名 stub（`src/_generated/link_stubs.cpp`），**未入构建**——需按 hpp 原声明精确签名后接入，最终全部真翻译 |
| 无二进制对应函数 | 1 | `LocomotionClass::ChangeLocomotorTo`（历史手工编造，IDA 无此函数）——保留注释体，翻译时按调用语义重建或删除 |
| **vtable 槽位审计** | 1 项 | src 继承链虚函数声明槽位与二进制 vtable 系统错位（object.hpp 虚区至少 2 处错位插入 + 编译器实测 124 vs 二进制 117）——波及所有含虚调用函数的 exec-flow vfptr 校验。GetPowerOutput(0x44E7B0) 真翻译已就位但被此阻塞（completed 已纠正为 false） |
| **member_lookup 错位** | 1 区段 | BuildingTypeClass 3800 区段（3808=PowerBonus 被标 DoorStages、3816=ExtraPowerBonus 被标 BuildingAnim…整段偏移错位）——以 IDA til 为准修正数据文件 |
| ida-artifact 门控空转 | 1 | `tools/check_pointer_arithmetic.py` 为**空文件**（f5da6e4f 起所有可达版本皆空）——三重门控之一从未真正检查。需用户裁决恢复实现（部分功能由 code-standards 的 AST ptr-arithmetic 检查覆盖，但那是 diff-scoped 非全量） |


## 0. 当前基线（2026-09-05 终态）

| 维度 | 数值 |
|---|---|
| 约束/求解 | 1,196,795 条约束 → type_map 732,742 变量类型 |
| 类类型变量 | 138,884（this 10,767 / SSA 103,821 / 栈槽 10,193 / 成员 8,203 / 参数 3,992 / 全局 1,781 / 返回 127） |
| TOP 矛盾 | **0**（0 对冲突，verify_csp 七通道 ALL PASS） |
| ORPHAN | 20.6%（结构性天花板：计算写消灭身份） |
| IDB 落盘 | this 签名 ~9,840 / 局部变量 ~19,695 / 参数+返回 1,419 / 全局 449 |
| til struct | 1,474（1,252 全布局 + 20 观测建 + 202 最小 vfptr） |
| struct 门 | 661 类可用，缺口 13（5 枚举 + 7 零观测 + 1 数组伪型） |
| 反编译 | 19,067 函数全部可反编译（6 个历史失败已修复） |
| 快照 | full_export v2（本次导出，类型化伪代码基座） |
| src/ 树 | ~130 hpp + ~135 cpp（~110K 行），0 错误 0 警告 |
| 完整翻译 | 472 函数经 IDA 对照验证 |
| 待命名 | sub_* 残留 5,468（其中 3,590 需反编译上下文命名） |
| 命名不一致 | 215（59 method_diff + 116 wrong_class + 40 other） |

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

### A4. 215 命名不一致清零 ✅（2026-09-06 完成，实际起点 511）
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
  - **验收达成**：0 mismatch / 0 normalized mismatch。

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

| 指标 | 制定时 | 2026-09-06 现状 | A 轮后目标 | C 线里程碑 |
|---|---|---|---|---|
| IDA 函数命名覆盖 | 70.5% | 70.5%（A2 未开始） | 85%+ | — |
| 类成员语义名 | ~0（field_0xNN 占位） | ~0（A1 未开始） | >60% | — |
| 命名不一致 | 215 | **0**（A4 完成；期间曾漂移至 511） | 0 | 0（维持） |
| hpp-impl 违规 | 未统计（1,765 隐性） | **0**（迁移完成） | 0 | 0（红线） |
| 完整翻译函数 | 472 | 472（C 线未开始；gate 债清单即首批对象） | — | 1,000 → 3,000 → 472+5,758 全量 |
| REVERSE 对拍 | 41 函数 | 41 函数 | — | Same 率 >95% |
| 构建 | gate 假绿 | **编译 0/0 + exe 产出；gate 2/3（232+35 债显式化）** | — | 0/0 + gate 3/3（红线） |

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
`.omo/fix_double_prefix.py`（双重隔离前缀修正）。
