# CSP 后时代路线图 — 类型体系收官 → 语义重建 → 功能对等

> 2026-09-05 制定。CSP 约束求解体系已达证据上限（TOP=0，七通道全绿），
> 本文档是此基线上的完整后续工作分解。前情：AGENTS.md「最近完成」各条目、
> `docs/coverage.md`、memory `type-infer-oop-rebuild-roadmap`。
>
> **执行状态首查表（2026-09-08 会话更新，含污染清偿与翻译管线修复）**：
>
> | 任务 | 状态 | 摘要 |
> |---|---|---|
> | B1 apply_sigs 550 失败 | ✅ 完成 | fail=0，914 处 return/param 编辑落盘 |
> | B2 mass_type 1 失败 | ✅ 完成 | CRT RTTI 折叠体池级过滤 |
> | B3 枚举通道 | ✅ 完成 | 5 枚举声明 + 8 成员 + 2 参数回填 |
> | A4 命名一致性 | ✅ **完成（含 09-08 清偿）** | 511 → 0（09-06 基线）→ 87 → **1**（09-08 轮；唯一剩余 = getMapCoords vtable 槽位审计债挂账）；审计器补 dtor 形态归一/namespace 边界/~ 保留 |
> | hpp-impl 存量债务 | ✅ 迁移完成 | 1,765 → 0 违规 |
> | **构建红线（编译层）** | ✅ **恢复** | 2,874 → **0 编译错误**；链接产出 `build_win/Debug/gamemd.exe`（1.5MB，/FORCE:UNRESOLVED 容忍 682 历史未解析 stub 债） |
> | **构建红线（gate 层）** | ✅ **3/3（重锚后）** | 用户裁决 v2：未完成翻译保留为 **IDA 原始反编译活代码块**（不再使用 `#if 0`）；存量编译错误按基线裁决允许。**⚠ ida-artifact 门控脚本仍为空文件（存量空转）——见执行日志** |
> | **最终目标债（翻译积压）** | 🔴 **核心主线** | MCP 当前 pending **3,416** 个活伪码块 + CFG 不忠实真翻译 + 682 链接未解析符号 + triage 未定位——目标：全部真翻译（见「最终目标债清单」节） |
> | **ra2-translate MCP 工具集** | ✅ **已上线** | 22 工具全流程 MCP 化（翻译/重命名/错误追踪/0xADDR 注解维护）；HTTP 常驻 `127.0.0.1:13399/mcp` + stdio 双模式；官方 SDK 客户端冒烟全过（见 `docs/mcp_tools.md`）；09-08 补全局注解审计的伪码块/ASM 行跳过 |
> | A1 成员语义命名 | 🔶 **进行中（污染优先）** | 09-06 武器槽/军衔谓词 7 函数 + 09-07 污染清偿轮 12 函数改名 + **09-08 大轮：member_lookup BuildingTypeClass 3800 区段 til 对齐清偿（0 残留）+ 20 hpp sub_ 滞留名 + 9 Method_ 对齐 + 12 owner 冲突裁决**；成员语义命名主体未展开 |
> | A2 sub_* Pass 3 命名 | ⬜ 未开始 | |
> | A5 T14/T19 类型与 owner 污染排查 | 🔶 **进行中** | 快照扫描 320 个标量指针 this；09-07 清偿 owner/命名污染 + **09-08：signals/_by_name 同步缺口全修复（0 missing/0 extra）、receiver 候选 4 高置信 live 复核（Coord::GetCoords 出参修正，type_map 侧债记 issue #11）**；剩余 TechnoTypeClass 中段布局、AnimClass 中段成员与 tiberium/C4/draw-position 函数待考古 |
> > | B4 零观测 struct 考古 | ⬜ 未开始（可选） | 与 TechnoClass/TechnoTypeClass 中段布局和类型侧 Weapon 数组债务相互关联 |
> | B5 池外 thiscall | ⬜ 未开始（可选） | |
> | C1-C4 批量翻译 | 🔶 **进行中（纯 MCP 工作流）** | `next_batch → get_context → replace_body → build → audit_access → verify_function → mark_completed`；当前 pending=3,416，completed=**39**（09-09 会话 +10：含 owner 修复 Is1x1AndUndeployable→BuildingTypeClass、SetFlag1752→SetPermanentBerzerk 语义改名、TechnoClass member_lookup 452-464 区修正、verifier 三处修复后回归 34 PASS/0 FAIL；IDA 离线轮全走缓存+debt）；批次仍卡 A1 命名/签名/vtable 审计三类前置债（见执行日志） |
> | **E 全量落盘：定义+签名+类声明+全局变量** | ✅ **E0-E4 完成（2026-09-09 会话，提交 c70eb5cd + 重锚）** | v3 快照 19,088 函数 100%；E4 物化 14,576 无体函数（pending **3,416 → 17,992 真实总账**）；E3 声明 1,057；E2 类 289；E1 全局 882；偏移→OO 重写 1,869 处；TechnoClass 452-580 考古四源对齐（issue #19 挂剩余两争议区）；93 错类声明清偿回基线 3 normalized；auto-fill-baseline 重锚 c70eb5cd（重锚不清账）。E5 后台批量 verify 进行中；E6 常量收割 374 启动（首批 10/10 PASS） |
> | **F 证据补全轮：偏移成员访问重写收尾** | ✅ **已执行（2026-09-09 F 会话，提交 1eeb4bea + 重锚）** | rewritten **1,869 → 9,217**（4.9×）；F1 til 导入 247 新类 + 4,578 填洞 + 容器语义 138 实例（SuperClass/MPCooperative/Radar/MapClass/Network/RandomMap/EventClass/JumpjetLocomotion/WarheadTypeClass 等全部真身确认——非幽灵类，是 til 有 layouts 无的缺口）；F2 重写器升级（继承链走查 + member_types 嵌套子对象解析 + own 区段防污染 + til-pad 伪条目清除 175）；F3 w1/w2 load 截断形态；F4 refresh 模式（214 翻译记录字节级保留）+ E3 前向声明 bug 修复。验收：一致性 38/3=基线、注解 0 missing、括号 0 失衡。剩余 unmapped 6,202（争议区/占位类，A1/B4 输入） |
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
7. **已完成代码核验（v2，2026-09-08 增量）**：
   - **逻辑忠实**：MCP `completed=true` 当前为 **28 函数**；09-08 新增 `IsNonNullPtr(0x70E240)` 并通过 CFG 双射。27 个既有 completed 回归中 26 PASS；`FacingClass::Set_SyncLog` 的对象表达式调用暴露 issue #12（工具债），`AbstractClass::QueryInterface` 仍受 issue #9 虚调用提取不对称影响；
   - **成员访问**：`tools/audit_member_access.py` 增加 marker 回看和注释剥离，全库真代码当前 **0 个裸偏移成员访问**；剩余 14 处仅为 surface.cpp 帧缓冲 `pix/zptr` 行进游标，按既有裁决保留；
   - **语义命名/污染修复**：09-08 完成函数注解 7 mismatch→0、signals/_by_name 同步 0 missing/0 extra、BuildingTypeClass 3800 区段 til 对齐、20 个 hpp `sub_` 名和 9 个 `Method_` 名对齐、导入跳板/owner 误认领清理；`Coord::GetCoords` 出参修正为 `int*`；issue #7 相关 receiver 复核债转为 issue #11；
   - **命名规范**：局部变量继续使用 lowerCamelCase；当前 `audit_consistency.py` 为 37 raw / **1 normalized mismatch**，唯一剩余为 getMapCoords vtable 槽位审计债。

## 最终目标债清单（C 线工作队列，重锚不清账）

| 债 | 数量 | 说明 |
|---|---|---|
| IDA 原码活代码块 | **3,416 pending（MCP）** | v2 已撤销 `#if 0` 包装；未完成函数以 `[IDA decompile] original pseudocode` 活代码块占位。数量以 `mcp__RA2-MCP__stats` 为权威（09-09 会话完成 10 个）。**⚠ 这只是「已落体」子集**：全集 19,133 中 ~13,700 尚无 src 函数体（仅声明/无声明）——E4 落盘后 pending 将升到 ~19,000 真实总账，见「Phase E」节。 |
| CFG 不忠实真翻译 | **69** | 基线有真实译但 exec-flow CFG 校验不通过——需逐函数对照 IDA 修复（清单见执行日志 09-06 终态甄别） |
| triage 未定位 | **20** | 行号漂移致甄别失败，需重扫 |
| 链接未解析符号 | **682** | 有声明从未有定义；`/FORCE:UNRESOLVED` 容忍链接。`tools/gen_link_stubs.py` 已生成 101 个近似签名 stub（`src/_generated/link_stubs.cpp`），**未入构建**——需按 hpp 原声明精确签名后接入，最终全部真翻译 |
| 无二进制对应函数 | 1 | `LocomotionClass::ChangeLocomotorTo`（历史手工编造，IDA 无此函数）——保留注释体，翻译时按调用语义重建或删除 |
| **vtable 槽位审计** | 1 项 | src 继承链虚函数声明槽位与二进制 vtable 系统错位（object.hpp 虚区至少 2 处错位插入 + 编译器实测 124 vs 二进制 117）——波及所有含虚调用函数的 exec-flow vfptr 校验。GetPowerOutput(0x44E7B0) 真翻译已就位但被此阻塞（completed 已纠正为 false） |
| **member_lookup 错位** | ✅ 已清偿 | BuildingTypeClass 3800 区段已按 IDA til 名字锚定重排；3808=PowerBonus、3816=ExtraPowerBonus、3840=DoorStages，债区残留 mismatch=0；基类短偏移区（0-3572）保持历史形态 |
| ~~真代码裸偏移成员访问~~ | ~~1~~ | ✅ 已清偿（2026-09-07）：`updated` 链考古完成——0x70E1A0/0x4526F0/0x7177C0/0x7177E0 实为武器槽选择器族（T19 误命名为 UpdatePowered/SelectVocOrSfx/GetAudioEntry）；返回 WeaponTypeClass** 槽位指针，+180=WeaponTypeClass::MinimumRange@+0xB4（til 与 DisplayBuildingInfoPanel@0x4B99FA 的 Name@+0x64 字符串渲染双重印证）。UpdatePowered 返回类型改为 WeaponTypeClass**，GetPowerFrame 尾段改 `(*weaponSlot)->MinimumRange` 成员访问；audit_member_access 加注释剥离+marker 回看后全库真代码 0 违规（余 surface.cpp 14 处已裁决帧缓冲游标） |
| **T14/T19 类型与 owner 污染** | **1 项** | ✅ 已修正：IsRookie 误名、3 个 IDB primitive this 类型、HasVoiceResponse owner 与调用点污染强转；🔶 剩余 TechnoTypeClass 中段布局、AnimClass 中段成员与 tiberium/C4/draw-position 函数待考古（issue #7 已结案） |
| 嵌入子对象 receiver 类型污染 | **已复核，剩余 type_map 债** | 🔶 FacingClass/CDTimerClass/Coord 等 IDB ABI 已按 live IDA 复核；Coord::GetCoords 出参已修正为 `int*`。Float4::Sum 的 type_map `BuildingTypeClass*` 误锚记录为 issue #11；VoxelAnimClass::QuaternionToMatrix 等名称/布局债留 A2 证据轮。 |
| ~~verifier 伪码缓存缺口~~ | ~~1 项~~ | ✅ `VeterancyStruct::IsRookie` 已补齐 IDA 伪码并通过 CFG 双射，issue #8 结案；后续 verifier 主债转为虚调用事件提取不对称（issue #9） |
| ida-artifact 门控空转 | 1 | `tools/check_pointer_arithmetic.py` 为**空文件**（f5da6e4f 起所有可达版本皆空）——三重门控之一从未真正检查。需用户裁决恢复实现（部分功能由 code-standards 的 AST ptr-arithmetic 检查覆盖，但那是 diff-scoped 非全量） |


## 0. 当前基线（2026-09-08 MCP 会话刷新）

| 维度 | 数值 |
|---|---|
| 约束/求解 | 1,196,795 条约束 → type_map 732,742 变量类型 |
| 类类型变量 | 138,884（this 10,767 / SSA 103,821 / 栈槽 10,193 / 成员 8,203 / 参数 3,992 / 全局 1,781 / 返回 127） |
| TOP 矛盾 | **0**（0 对冲突，verify_csp 七通道 ALL PASS） |
| ORPHAN | 20.6%（结构性天花板：计算写消灭身份） |
| IDB 落盘 | 历史基线：this 签名 ~9,840 / 局部变量 ~19,695 / 参数+返回 1,419 / 全局 449；09-08 继续修正 Coord::GetCoords 出参并保存 IDB |
| til struct | 1,474（1,252 全布局 + 20 观测建 + 202 最小 vfptr） |
| struct 门 | 661 类可用，缺口 13（5 枚举 + 7 零观测 + 1 数组伪型） |
| 反编译 | 19,067 函数全部可反编译（6 个历史失败已修复） |
| 快照 | full_export v2（本次导出，类型化伪代码基座） |
| src/ 树 | ~130 hpp + ~135 cpp（~110K 行），0 错误 0 警告 |
| 完整翻译 | MCP completed=**28**；历史完整翻译统计 472 与 MCP completed 口径尚未统一 |
| 待命名 | sub_* 残留 5,468（其中 3,590 需反编译上下文命名） |
| 命名不一致 | 09-08 audit_consistency：37 raw / **1 normalized**（唯一剩余为 getMapCoords vtable 槽位债） |

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
  - **验收达成（A4 基线）**：0 mismatch / 0 normalized mismatch；后续 2026-09-07 语义改名（武器槽/军衔谓词）曾引入 87 条报告差异，已在 2026-09-08 清偿轮中复核，当前为 37 raw / 1 normalized（唯一剩余为 getMapCoords vtable 槽位审计债）。

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

## Phase E — 全量落盘：定义 + 签名 + 类声明 + 全局变量（用户裁决 2026-09-09）⬜ 计划就绪

**目标形态（用户裁决原话）**：先全部把 **①代码的定义（反编译）②签名（CSP 求解
结果）③类声明 ④全局变量声明** 弄好，**最后完成全部 pending 的翻译**。
终态：全集 19,133 函数统一为「completed + pending」两态，无中间层。

**签名来源裁决（纠正 09-09 早版计划——CSP 就是签名的类型权威）**：
IDA 原生原型满是 `void*`/`_DWORD*` 的 C 反编译结构，**不能**直接当签名落盘。
分工：

| 层 | 来源 | 提供什么 |
|---|---|---|
| 结构骨架 | IDA prototype（full_export） | 参数个数/顺序、调用约定、函数名、地址 |
| **参数/返回类型** | **CSP 求解结果**（type_map 732,742 / csp_param 3,992 / return 通道 B10c / member_types / class_db 归属） | 类类型指针、枚举、已知结构——把 `void*` 升级成 `TechnoClass*` 这类语义类型 |
| 无证据槽位 | 回退 IDA 原生类型占位 | 标记低置信，随类型体系升级替换 |

这正是 T14 已验证的路径（apply_sigs 按此落盘过 1,419 处 param/return 编辑），
E 线把它从「单函数批处理」升级为「全集合成」。

**数据源**：

| 源 | 内容 | 用途 | 局限 |
|---|---|---|---|
| `decompile-results/full_export/` v2 | 19,087 函数 prototype+类型化伪码+汇编 100%；全局 10,674 地址/globals.hpp 15,797 条；1,343 类头 | 结构骨架 + 占位体来源 + 全局清单 | 09-05 时点快照，其后改名/类型变更未反映（TechnoClass 452-464 实证陈旧）→ E0 重导出 v3 |
| CSP 体系 | type_map / csp_functions 13,949 / member_types / class_db 1,557 类 / 各锚 | **签名类型权威** + 类归属 | return 通道覆盖低（127）——无证据槽位回退 IDA 类型并标记 |
| `signals.json` | 19,133 元数据 + 0xADDR/全局地址权威 | 对账基准 | — |

### E0. IDA 在线窗口同步（IDA 已回线，尽快执行）

1. rename debt 重放 ✅（09-09 已执行：5 条全部落 IDA）；
2. `ida_function_db.json` 重刷新（消除 2 条 rename-debt 陈旧镜像 mismatch）；
3. 5 个 NOCACHE completed 函数 live 复验 + 缓存回填（回归 → 39 PASS）；
4. **full_export v3 重导出**（~30 分钟）——E1-E4 全部锁定 v3，v2 归档。

### E1. 全局变量声明（第④层）

- 盘点：full_export 全局 10,674 地址 vs src 已声明+注解 ~1,406——差集批量补
  src 声明（extern + `// data: 0xADDR`）。
- 类型来源：type_map 全局通道（类类型全局 1,781）→ global_types/ida_global_types
  锚 → 无类型数据 `uint8_t[]`/`int` 占位。
- 验收：伪码体引用的全局 100% 有 src 声明；globals_annotations_audit 0 missing。

### E2. 类声明对齐（第③层）

- 盘点：src hpp（1,120 IDA 类，6 月完成）vs class_db 1,557 / til 1,474
  （含 t14 最小 struct 202 + 观测建 20）——差集 ~437（模板实例/COM 内部件/
  匿名类）按既有惯例补最小声明（vfptr/观测成员）。
- 验收：class_db 每类在 src 有可编译声明（最小形态可）；E4 占位体引用的类
  100% 已声明。

### E3. 签名合成 + hpp 声明补全（第②层）

- 全集 19,133 逐函数合成签名：骨架=IDA prototype，**类型=CSP 通道优先**
  （vtable/ctor 锚 > csp_param/return > type_map 置信度分级），无证据回退
  IDA 原生类型+低置信标记。
- 清洗沿用 T14 教训清单：无名参数补名、非法名 `[N]`→`_N`、双 CC 归一、
  函数指针形参深度切分、CRT `?` 修饰名识别。
- 产出：~2,900 JSON-only 函数补 hpp 声明 + 既有声明的 CSP 类型升级。
- 验收：audit_consistency JSON-only / missing annotation → 0；抽样 100 签名
  人工核对 CSP 证据链。

### E4. 定义（反编译占位体）批量落盘（第①层）

- ~13,700 无体函数 → 裁决 v2 pending 块（def 行 + marker + 伪码 + ASM 注释），
  按模块/类分桶；MCP pending 3,416 → **~19,000 真实总账浮出**。
- **gate 策略（执行前需用户裁决）**：批量新符号触发 new-symbol 门控——按
  09-06 先例物化提交后 `auto-fill-baseline` 重锚、重锚不清账。
- 编译验证：全量单 TU 不可行（C1003），分层抽样探针 TU + 新 hpp 的
  check_hpp_implementations 全查。

### E5. 中间态口径统一（~1,900 有体未标）

- 批量 CFG 回归（退出码）：PASS → mark_completed（预计 +400-500，历史 472
  真翻译为主）；FAIL → 并入 69-CFG 债清单。完成后 stats 单数字可信。

### E6. → C 线：翻译全部 pending

- 全量队列上按 调用频次 × 类核心度 排序；A1/A2 命名轮继续作为提速前置
  （E 线不依赖 A1，可并行）。

---

## 依赖关系与建议顺序

```
E0-E4 全量落盘(done) ──→ E5 口径统一(done) ──→ E6 收割队列(G1) ──────────────┐
                                                                            ▼
F1 owner类修复 ──→ F2 偏移考古 ──→ F3 字宽降级 ──→ F4 重写器重跑+重锚 ──→ A1 成员命名 ──→ A2 函数命名
                    │（F2 产出直接喂 A1）                                                │
                    └──────────────────────────→ C 线翻译主线（17,778 pending）◄────────┘
                                                  │
              B 线工程债（并行随时）──────────────→ ▼
                                              D1-D4 集成验收
```

- **F 线是 A1 的证据输入与 C 线的质量前置**：F1/F2 的考古产出（类真身、早区成员名）
  直接成为 A1 命名候选；重写率提升让占位体伪码可读性质变。F 与 E6 收割（G1）并行。
- **E 线是 C 线的范围前提**（用户裁决 2026-09-09）：四层（定义/签名/类声明/
  全局变量）全部落盘之后，翻译对象才是全集 19,133 而非当前的 3,455 个有体函数。
  ✅ 已达成（pending 17,778 真实总账浮出）。
- **签名 = CSP 求解结果**（类型权威），IDA prototype 仅提供参数个数/调用约定
  骨架；无 CSP 证据的槽位回退 IDA 类型并标记低置信——E3 是 CSP 体系
  （type_map/csp_functions/class_db）作为「消费端」的最大单笔变现。
- A1/A2 是 C 线的**输入质量投资**：命名后的快照让 LLM 翻译的上下文
  可读性质变（`this->AvailableCredits` vs `*(int*)(this+588)`）。
  E 线不依赖 A1——两线并行。
- B 线与 A/C/E/F 并行，互不阻塞。
- A3（局部变量命名）随 C 线自然吸收，不单独立项。

## 度量与检查点

| 指标 | 制定时 | 2026-09-08 现状 | A 轮后目标 | C 线里程碑 |
|---|---|---|---|---|
| IDA 函数命名覆盖 | 70.5% | A2 未开始；本轮新增 7 个语义函数名 + 1 个 T19 误名纠正 | 85%+ | — |
| 类成员语义名 | ~0（field_0xNN 占位） | A1 进入污染优先轮；尚未批量命名成员 | >60% | — |
| 命名不一致 | 215 | 09-08 audit_consistency：37 raw / **1 normalized**（唯一剩余为 getMapCoords vtable 槽位债） | 0 | 0（维持） |
| hpp-impl 违规 | 未统计（1,765 隐性） | **0**（迁移完成） | 0 | 0（红线） |
| 完整翻译函数 | 472 | MCP stats：completed=**28**；09-08 新增 IsNonNullPtr(0x70E240)，历史“完整翻译”与 MCP completed 口径尚未统一；issue #9/#12 仍是 verifier 工具债 | — | 1,000 → 3,000 → 全量 |
| REVERSE 对拍 | 41 函数 | 41 函数 | — | Same 率 >95% |
| 构建 | gate 假绿 | MCP 最近记录 build errors=0；本轮单 TU 探针干净；`run_gates` 本次调用超时，未据此宣称全绿 | — | 0/0 + gate 3/3（红线） |
| MCP completed（E5 校准后可信） | — | **406**（39 + 213 常量收割 + 154 E5 校准） | — | 1,000 → 3,000 → 全量 |
| MCP pending（真实总账） | 3,416（失真） | **17,778** | — | → 0 |
| 偏移重写率（F 线目标） | rewritten 1,869 / unmapped 4,379（557 函数）/ 沉默 ~9,889（1,630 函数 owner 不在布局） | 同左 | **unmapped ≤1,000；沉默清偿 ≥80%；rewritten 5,000+** | 维持 |

## 风险与对策

0. **F 线考古的错误归一风险**：幽灵类名（SuperClass/Radar/MPCooperative）与别名
   （House→HouseClass）若裁决错误，会把成员名挂到错误的类上——错名比无名胜。
   对策：每条别名须 vtable 安装点/RTTI/单一最小祖先证据；抽检 20 类；
   rewrite_pseudocode 保守降级（证据不足保持原始伪码）。

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

## Phase F — 证据补全轮：偏移成员访问重写收尾（✅ 2026-09-09 F 会话已执行）

**执行终态**（提交 1eeb4bea，auto-fill-baseline 重锚；详细日志见文末 F 会话节）：

| 子项 | 计划 | 执行结果 |
|---|---|---|
| F1 owner 类修复 | 幽灵类考古 ~530 + 别名归一 ~200 + VectorClass 布局 ~229 | **考古结论反转**：所谓幽灵类（SuperClass/MPCooperative/Radar/MapClass/Network/DSurface/RandomMap/EventClass/...）全部是 til 真实结构（T14 时代声明），缺口仅在 class_layouts —— live IDA til 批量导出 427 结构 → **247 新类 + 4,578 填洞**；VectorClass 族经 `src/core/vector.hpp` ctor 验证布局赋容器语义名（Items@4/Capacity@8/IsInitialized@C/IsAllocated@D/Count@10）**138 实例**；AbstractClass 四 vtable（abstract.hpp ctor 注释证据）；AudioController 嵌入子对象 |
| F2 偏移考古 | ObjectClass 早区 ~200 / SessionClass 大偏移 / 其余 → ≤1,000 | **机制突破替代逐点考古**：① 继承链走查（class_layouts parent 链，绝对偏移系）——ObjectClass 早区（+0x10~0x20 经 AbstractClass 链直达）等基区缺口自动清偿；② member_types ANCHORED 嵌套子对象解析（覆盖成员尺寸==类布局尺寸排除数组）——`ambientSoundController.AudioController_field_04` 形态；③ til-pad 伪条目清除 175（重复名铁证判据）+ own 区段防护（条目仅 [父类 size, 本类 size) 有效——TechnoTypeClass+4="IdleRate" 基区错位行不得污染链解析）；④ 非法标识符名过滤。**unmapped 4,379 → 6,202**（分母从 6,248 扩到 15,433：沉默 owner 全部入场后） |
| F3 字宽降级 | w1/w2 → 已知 4B 成员，形态裁决 | **load-only 截断形态**：`(unsigned char)this->member`（store 上下文保持原始伪码——截断写丢高位） |
| F4 重写器重跑 + 重锚 | 幂等重跑 | **refresh 模式**：214 已翻译 e4 记录字节级保留 + marker 块全量重生成；E3 前向声明 bug 修复（`class X;` fwd decl 匹配后 find("{") 落进下一类体——house.hpp StartingTechnoStruct 实证，曾插错 64 条声明）；E1/E2 并集合并 |

**验收**：rewritten **9,217** / unmapped 6,202（诚实保留：争议区 + 占位类 + 真无名）；括号平衡 0 破坏；
注解审计 8,771 matched / 0 missing / 0 mismatch；一致性 38 raw / 3 normalized（=既有基线）；
保留块 214/214 字节一致。

**遗留**（A1/B4 输入）：Type 类基区遗留错位行（424 个基区名被 own 区段防护旁路，未删——B4 字段级考古后清理）；
SessionClass +0x2840 / TechnoTypeClass 中段 / issue #4 区（0x6E9/0x534 等 til pad 内无名）；
mega-blob 家族（House/Scenario/Mission/Tactical 21-90K，til ≥4096B pad 截断防护已内置）。

**F1. owner 类修复（解锁 ~1,630 函数沉默群体）**

实查构成（2026-09-09 核实，class_layouts 1,033 键）：

| 形态 | 证据 | 量级 | 处置 |
|---|---|---|---|
| 幽灵类名 | `SuperClass`(243 命中；class_layouts 仅 SuperClassVector 变体)、`MPCooperative`(163，完全无近邻)、`Radar`(124，仅 RadarHashVector 变体) | ~530 | F1a 逐个反汇编取证真身——Hex-Rays 泛称渲染、旧名、还是真类；禁止按名臆测 |
| 别名键不匹配 | `House`(124) → `HouseClass` 存在；csp 模板修饰名 vs canon 键同类 | ~200+ | F1b 名字键归一表（扩展 mangled_alias 机制或新建 `anchors/class_alias.json`），rewrite_pseudocode 查表前先归一；每条别名须 vtable/RTTI/单一最小祖先证据 |
| 真缺布局的核心类 | `VectorClass`（模板容器，type_map 5.9K 变量的载体，class_layouts 无此键——仅 VectorClassUInt 等实例变体） | ~229+ | F1c 布局补建：vtable 锚 + 观测成员 + 最小 struct 路径（t14_minimal_structs 先例），IDA→header pipeline 四源同步 |

- 验收：owner_not_in_layouts 命中清偿 ≥80%；错误归一 0（抽检 20 类逐一对照
  vtable 安装点）。
- 产出：`anchors/class_alias.json` + class_layouts 增量 + 不可解类 issue 化挂账。

**F2. 偏移访问考古（清偿 4,379 unmapped 主体，557 函数）**

| 子项 | 目标 | 方法 |
|---|---|---|
| F2a | ObjectClass 早区 +0x4/+0x8/+0xC/+0x3C/+0x40/+0x44（~200 命中，最大单项） | 先核对 owner 判定是否被 Hex-Rays 旧名污染（记录名行 vs 声明行 vs 调用方三方对照）；再 ctor 写入序列 + 访问点上下文 + YRpp 对照 → member_lookup/class_layouts/til/src hpp 四源补名 |
| F2b | SessionClass +0x2840 大偏移（23 命中） | 布局表完整性核查——大结构疑似只建了部分；以二进制访问点上界重建尺寸 |
| F2c | ParasiteClass +0x28 等其余未名点 | 按 B4 零观测 struct 考古方法逐类分桶 |

- 验收：unmapped 4,379 → ≤1,000（其余为无证据真天花板，issue 化挂账）。

**F3. 字节/字宽降级重写（w1/w2 → 已知 4B 成员）**

- 对象：HashTable +0x14 w1、RulesClass +0xD w1 等「字节/字读落在已知 4B 成员」的
  宽度不匹配命中（约 40-100 处）。
- 形态裁决（执行前需确认）：`(uint8_t)this->member` 显式截断 vs `成员 & 0xFF` vs
  位域——以 verifier CFG 事件等价为判据，抽样 30 处 verify PASS 后才批量。
- 验收：宽度不匹配类命中清偿；无 verify 回归。

**F4. 重写器重跑 + 门控收口**

- `tools/gen_e4_materialize.py` 幂等重跑（F1-F3 落地后）。
- 验收：括号平衡 0 破坏；注解审计 0 missing；一致性 ≤3 normalized（基线）；
  rewritten 由 1,869 显著上升（预期 5,000+）。
- 提交 + `auto-fill-baseline` 重锚（重锚不清账，未清偿项 issue 化保留）。

**F 线定位**：F 是 A1 成员语义命名的证据输入（F2 考古产出的名字直接成为 A1 候选）、
也是 C 线翻译质量的前置。F 与 E6 收割队列（G1）可并行。

---

## Phase G — 剩余工作排序（F 线之后/并行）

| 序 | 工作 | 内容 | 依赖 |
|---|---|---|---|
| G1 | E6 收割队列继续 | 58 全局 getter → 457 证据完备（偏移已重写）函数 → 6,146 个 ≤8 行小函数长尾 | 无（可立即续） |
| G2 | A1 成员语义命名 | F2 考古产出 + TechnoClass/FootClass/ObjectClass 家族优先 | F2 产出喂入 |
| G3 | C 线批量翻译主线 | 17,778 pending 全量（G1 是其机械前端） | A1 提速 |
| G4 | 既有工程债 | 69 CFG 不忠实 / 682 链接未解析 / vtable 槽位审计 / issue #4 #17 #19 | 与上并行 |
| G5 | D1-D4 集成验收 | 翻译覆盖率达标后运行时验收 | C 线里程碑 |

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

### 地址注解初始化与 09-08 清偿终态

初始 `annotations_fix` 补齐 **2,689** 条函数 `// 0xADDR` 注解；09-08 逐条
对照 live IDA 后终态为 **matched 3,319 / missing with known address 0 /
addr mismatch 0 / unknown in signals 2,051**（helper/别名形态，翻译时甄别归因）。
全局变量注解终态：**annotated 1,406 / missing 0**；审计器已排除伪码块和
inline ASM 操作数误报。

### 关键实现决策

- **协议自实现**：官方 mcp SDK 2.0 的 `add_request_handler` dual-era
  分发以 -32602（ValidationError→"Invalid request parameters"）拒绝
  经典 tools/call 信封（实测多轮定位）——改为直接实现 stdio
  JSON-RPC 循环（~80 行）；官方 SDK **客户端**连接验证正常。
- member_lookup：IDA 在线（:13337）时以 til 为权威；BuildingTypeClass 3800
  区段已完成重排，get_context 不再把该区段报告为已知坏区。
- signals 写回统一使用仓库的 `indent=2` JSON 格式，避免 MCP 写回造成整文件
  缩进漂移和无意义大 diff。

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

- pending translations: **3,426**
- completed functions: **28**
- open issues: **6**
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

- `BuildingClass::AdjustHeight` @ 0x62D5E0：已裁决为 `ParticleClass::AdjustHeight`，owner 已修正；后续留给布局考古与真翻译。
- `Audio::SetScoreVolume`/`SetSoundVolume`/`SetVoiceVolume`：已裁决为 `Options::Set{...}Volume`，owner 已修正。
- `TechnoTypeClass` 的 til 模型仅 0x2EC，无法容纳 Weapon[18]/EliteWeapon[18] 数组；类型侧函数 owner/布局仍是独立债务。
- `HouseClass::AccumulateScore` 已裁决为 `VeterancyStruct::Accumulate`，owner 已修正。
- 0x750030 存在 JUMPOUT，暂不命名。
- `VeterancyStruct::IsRookie` 的成员访问审计通过并已补验 PASS（issue #8 结案）；`AbstractClass::QueryInterface` 的虚调用提取不对称另挂 issue #9。

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

---

## 执行日志 — rename_symbol MCP 安全修复

`rename_symbol` 的当前 MCP 链路使用独立 argv，不会主动拆分 `::`；本轮修复了
真正会导致同类事故的安全和一致性缺口：

- 预检拒绝空名、控制字符、no-op、危险裸类名和多 owner 裸成员名；目标名称
  与不同地址 canonical symbol/index 冲突时拒绝执行。
- 源码替换改为 C++ 符号边界；限定名仍作为一个完整参数传递，并同步类内裸声明，
  不会把 `Class::` 前缀注入类体。
- 同步范围补齐：`signals.symbols`、顶层 `globals`、`_by_name`、`classes`、
  `_member_by_name`、`class_layouts.json`、`member_lookup.json`、
  `ida_name_index.json`；JSON 原子写回统一 `indent=2` + LF。
- MCP wrapper 解析 `RENAME_RESULT`，返回 `ok/exit/source_replacements/signals/
  member_lookup/class_layouts/IDA` 等结构化字段；子进程非零时返回 `isError=true`，
  不再把协议成功误当成 rename 成功。
- `member_lookup` 缓存增加 mtime 失效；MCP heavy smoke 改用真实
  `Function::Method_41C430 → Function::Method_41C430_Probe` dry-run。
- 新增 `tools/test_rename_symbol.py` 隔离回归：限定名 dry-run 无副作用、类内声明
  替换、后缀边界、多 owner 拒绝、同类成员冲突拒绝、signals/member/index/layout
  同步均通过（5/5）。

### 修复后测试与审计（2026-09-08 终态）

- **隔离回归**：`tools/test_rename_symbol.py` **5/5 PASS**（限定名 dry-run
  hash 校验 unchanged、类内声明替换且 `OldMethodExtra` 后缀不受影响、
  多 owner 裸名拒绝、同类成员冲突拒绝、全索引同步断言）。
- **MCP heavy smoke**：`rename_symbol(dry) ok=True exit=0 qualified=True
  src=3`（真实 `Function::Method_41C430` 探针）；其余 22 工具全绿。
- **危险裸名拒绝**：`BuildingClass→SelectWeaponSlot` CLI exit=2
  （"ambiguous bare symbol"），MCP 层 `isError=true`——09-07 灾难场景现在
  在预检即被拦截。
- **真实仓库 dry-run**：`Function::Method_41C430` 探针对 signals/
  ida_name_index/member_lookup/class_layouts/rename_debt/受影响 src 的
  sha256 快照 **unchanged=True**。
- **一致性审计**：audit_consistency 37 raw / **1 normalized**（getMapCoords
  vtable 债，维持）；signals `_by_name` vs 主表 **0 missing / 0 extra /
  0 name conflicts**，completed=**28**。
- **注解审计终态**：rename 引入的 33 个 bodies 定义缺注解由 `annotations_fix`
  补齐 → **matched 3,352 / missing 0 / mismatch 0**；全局注解
  **annotated 1,406 / missing 0**。
- 附带清理：`audit_consistency.py` 2 处行尾空白（git diff --check 归零）。

### 未完成 / 下一步

- **full_export 快照重导出**（本轮 IDB 变更大量未反映：12 改名 + 8 类型 +
  2 结构声明；~30 分钟）；
- Coord::/Float::/Float4:: 家族 A2 命名轮（逐函数证据）；
- verifier 虚调用提取补齐（issue #9/#3 同族）或 vtable 槽位审计落地；
- AnimClass/TechnoClass 中段布局考古（SetField8/95 与 tiberium 族解锁前提）；
- issue #4 三函数 + 69 CFG 不忠实清单继续清偿。

---

## 执行日志 — 2026-09-08 污染清偿大轮 + 翻译管线打通

### 污染检验与修复（全部 live IDA 取证）

**函数注解（annotations_audit 7 mismatch → 0）**：hash_table/radio×3 的
调用方地址混入注释被审计器误读（改写为无 0x 前缀形态）；aircraft/building×3
为真实错注（0x41ADF0→0x41ADC0、0x43bfa0 在 Dtor 内→0x453e20、
0x4d9f70=SellUnit 张冠李戴→0x739ec0），逐个以 live IDA 函数名+尺寸证据修正。

**命名一致性（audit_consistency 87 → 1）**，1 = getMapCoords（vtable 槽位
审计债挂账，有意保留）：

- **09-07 改名轮的四方同步缺口修复**：signals 主表 4 条旧名
  （Locomotor::GetSpeed→CDTimerClass::TimeRemaining 等）+ `_by_name` 索引
  10 缺 10 旧键残留（武器槽/军衔族）+ 音量三连（Audio::→Options::）+
  HouseClass::AccumulateScore→VeterinaryStruct::Accumulate——全部对照
  live IDA 确认后修复，`_by_name` 与主表达成 0 missing / 0 extra。
- **审计器等价盲区修复**（audit_consistency.py）：dtor 形态归一
  （X::ddtor/Dtor/DTOR/SDDTOR/Destruct ↔ ~X()/Destructor 同一函数）；
  hpp 提取保留 `~`（此前源信息丢失）；namespace 边界感知（namespace 内
  自由函数不再误挂外层类名）+ 单段 namespace 前缀透明（Math::RoundToInt
  vs RoundToInt）。
- **hpp 滞留 sub_ 名 20 条**（含 2 条畸形 sub_54C58C0/sub_55D4390）全部
  rename 为 IDA 语义名；**Method_ 前缀 9 条** IDA 侧改名对齐。
- **owner 冲突 12 条裁决**：4 条 kernel32/user32 导入跳板误认领（SetFileTime/
  GetFileTime/InvalidateRect/ShowCursor——`jmp __imp_*` 单指令铁证，删 hpp
  地址注解保留声明）；WriteINI（h p p SaveToINI 别名→统一 IDA 名）；
  FractalNoise::Dtor 函数体为引用计数 Release（--refcount/向量摘除/delete，
  38 个 Blit dtor 调用方）→ IDA 改名 Release；BlowStraw::Get（函数体为解压
  Get 实现，hpp Release 误名→改 Get）；ScenarioClass::allocateCells（函数体
  为 delete+清零的释放例程，语义相反）→ IDA 回退 sub_5D80B0 + hpp 注解删除；
  CheckBltStatus（DSurface_Vtable slot 37 铁证→删 XSurface 侧重复注解）；
  RoundToInt（namespace 修复消解）；GetField10/FindLinkIndex/AccumulateScore/
  Territory ctor 4 条误认领注解删除。
- ** VeterancyStruct 三谓词归属修复**：map.hpp struct Crate 的误声明删除，
  techno.hpp 补 IsRookie/IsVeteran/IsElite 声明（owner=live IDA 确认）。

**member_lookup BuildingTypeClass 3800 区段错位（债清单项）→ 清偿**：
根因 = 数组尺寸被低估（BuildupFile 16B 按 4B、PowersUpBuilding 24B 按 4B、
BuildingAnimFrame[18]/BuildingAnim[357] 同类）造成三级累积偏移（-12/-32/
-100→-1820）。修复 = til 名字锚定重排（186+49 条重定位，17 占位名二轮锚定），
终态**债区与 til 0 残留 mismatch**（3808=PowerBonus ✓ 3840=DoorStages ✓）。
基类短偏移区（0-3572）保持历史形态未动（MCP KNOWN_BAD 警告区已撤）。

**全局变量注解（1443 missing → 0 真缺）**：1443 中 1327 为审计器缺陷误报
（伪码块/内联 ASM 文本的 Destination/Source/Buffer/Delimiter 撞名）——
审计器补伪码块跳过 + ASM 助记符行排除；真缺 116 条批量补 `// data: 0xADDR`。

**基础设施**：ida_export_func_db.py 的 H: 残留路径修 D:（memory 迁移债）；
ida_function_db.json 双刷新（13,443 函数，09-07 改名全部反映）。

### 事故与恢复（本轮自身失误，如实记录）

**rename_symbol 批量误调灾难**：bash 循环用 `:` 做分隔符而符号名含 `::`，
实际执行了 `BuildingClass→SelectWeaponSlot`（946 处）等 4 组灾难替换
（共 ~2,200 行 src 破坏）。发现后 `git checkout -- src/` 全量回滚 +
member_lookup OverlayTypeClass.22 误改（Crate→IsRookie）手工恢复 + 7 处
合法注解修复重放。**教训：含 `::` 的参数禁止用冒号做列表分隔符；rename
前必跑 dry-run 看 replacement 数量级。** 二次小事故：rename 新名误带
`Class::` 限定前缀污染类内声明（4 处，手工修正）；member_lookup 修正脚本
第二轮丢失 3680 门限把基类短偏移区误移（49 条），逆向恢复时识别出 17 条
门内占位修正需保留、2 条同名碰撞损失（HalfDamageSmokeLocation1/2、
BuildingAnim[0x15]）补回。

### 翻译管线打通（completed 27 → 28）

- **IsNonNullPtr(0x70E240)**：全流程真翻译（get_context → 签名修正
  int→int* → replace_body → build 0 新错 → verify PASS → mark_completed）。
- **verifier 两处工具缺陷修复**：
  1. `verify_execution_flow.py` def 正则不认 gap2 单行 namespace 包裹形态
     （`namespace gamemd { int F(...) {`）——加可选前缀（issue #8 根因之一
     的正式修复，gap2 555 函数从此可验证）；
  2. `efv_cpp_events.py` PascalCase 调用规则把签名行自身匹配为 CALL(self)
     （裸函数名无 `::` 限定时）——加 `_looks_like_definition` 守卫
     （`) {` / `) const {` 是定义不是调用）。
- **27 个 completed 回归**：26 PASS；0x4C9300 FacingClass::Set_SyncLog 暴露
  为 issue #3 文法盲区新案例（对象表达式调用 `RotationTimer.TimeRemaining()`
  不产生 CALL 事件——符合语义访问裁决的规范形态反被旧文法卡住）→ issue #12
  记账，维持 completed。
- **目标筛选经验**：BuildingClass 批次（next_batch core-small-first）全卡
  issue #4 布局争议区（0x6E9/0x534 等 til 无名成员）；CreateInstanceCOM 等
  COM 虚调用族卡 issue #9/#12 提取不对称；`_generated` 存根无地址注解不可
  verify。**单体函数的成员考古成本是当前翻译节奏瓶颈**——A1 成员语义命名
  （ TechnoClass/FootClass/BuildingClass 家族优先）是 C 纡提速的前置投资，
  与路线图依赖判断一致。

### 度量变化

| 指标 | 会话前 | 会话后 |
|---|---|---|
| 函数注解 addr_mismatch | 7 | **0** |
| audit_consistency normalized | 87 | **1**（vtable 债挂账） |
| member_lookup 3800 区段 | 整段错位（-12→-32→-1820 累积） | **til 对齐 0 残留** |
| 全局变量注解 missing | 1,443（含 1,327 误报） | **0**（审计器缺陷修复 + 116 补齐） |
| signals _by_name 索引 | 10 缺 10 旧键残留 | **0 missing / 0 extra** |
| MCP completed | 27 | **28** |
| verifier 可覆盖形态 | gap2 namespace 形态不可验证 | **已覆盖**（+签名自 CALL 守卫） |

---

## 执行日志 — 2026-09-08 二次会话：verifier 虚调用提取盲区清偿 + completed 池校准

### 污染检验（四重审计全基线）

annotations_audit 0 mismatch / globals 0 missing / audit_access 14 处全部为
surface.cpp 帧缓冲游标（既有裁决）/ audit_consistency 37 raw / 1 normalized
（getMapCoords vtable 债挂账）——与 09-08 首轮终态一致。

### verifier 提取盲区清偿（issue #3/#9/#12 同族，全数 resolve）

- **efv_cpp_events 三条新文法**（全部单元验证）：
  1. 对象表达式调用 `obj.Method()` / `ptr->Method(...)` → CALL(0xADDR)，
     经 `_strict_resolve_call` **严格唯一解析**（歧义裸名不发事件，杜绝
     shared `_resolve_call` 的 min-pick 臆造——AddRef 在 ~200 个 COM 类上
     曾被解析到 VectorClass::AddRef）；
  2. `_receiver_is_cast_of_this`：`((Type*)this)->X(...)` 按 this 分支处理
     （vtable 槽位解析 + 严格解析兜底）；
  3. `_is_known_virtual` 抑制：跨对象调用已知虚方法（vtable_offsets 任一
     类占位）不发事件——IDA 侧对局部变量 vtable 派发（如
     `(*(_DWORD*)v1+116))(v1)`）本就不提取，词汇表对称。
- **efv_ida_events 新增 `_IDA_VTABLE_INDIRECT`**：this 相关间接调用
  `(*(CAST)(expr + N))(...)` → CALL(vfptr+N)；**排除**局部指针 vtable 形态
  （v1+116 属于另一对象 vtable，C++ 侧词汇表不可表达——放行即制造假不对称，
  GetAmmoCountScaled 回归实证后收紧）。
- **verify 查找顺序修正**：`find_cpp_function`（名字精确）优先于
  `find_cpp_function_by_addr`（邻近启发式曾把 0x7105E0 误定位到
  CheckHealthForRepair 体中——ASM 注释块的 def 形态假阳性）；与
  callee provider 既有顺序一致。

### 二进制直读补 vtable ground truth（tools/vtable_offsets.json）

| 类 | 槽位 | 实证 | 附带效果 |
|---|---|---|---|
| BuildingClass | IsFactorySelectable=128 | 0x7E3EBC+128=0x457620（**修正原误名 CheckHealthDiff**——0x701140 是 InfantryClass 的方法，从不在此表） | CheckHealthForRepair PASS |
| BuildingClass | CheckMissionGuard=1024 / MissionStubReturnZero6=1032 | 0x458dd0 / 0x4581f0 | HasActiveParam/CheckMissionGuard PASS |
| BuildingClass | GetExitCoords=72 | 0x447ac0（override；基表 0x7E1F50+72=0x4104C0 同槽） | SquaredDistanceTo/GetCoords PASS |
| AbstractClass | QueryInterface=0 / COMStub_AddRef=4 / COMStub_Release=8 | 0x7E1F50 头三槽 | QueryInterface PASS |

另记（未动）：BuildingClass 槽 117（+468）= 0x70C5B0 = `ObjectClass::GetShroudByte`
（object.hpp:539 地址注解双重吻合；CanRepair 的该槽调用为 byte 返回形态）。
GetPowerOutput golden 体的 `this->Mission_Harvest()`（hpp 序 124）与二进制
槽 117 的语义归属差异仍属 vtable 槽位审计债——**本会话不改其语义**。

### 提取盲区暴露的假 completed 纠偏（盲验时期产物）

| 函数 | 判定 | 处置 |
|---|---|---|
| HasActiveParam(0x458db0) | 旧体把虚自派发（vtable+1024 CheckMissionGuard）误译为成员读 field_bool_6E9 | 重译 + PASS + completed |
| CheckMissionGuard(0x458dd0) | 体已对，缺槽位真值（虚调用曾被提取为直接 CALL） | 补真值 + PASS |
| SquaredDistanceTo(0x5f6500) | 旧体 dx²+dy² 为臆造（真实 = 双虚坐标 + 2D 平方差） | 重译 + PASS |
| IsBeingRepairedOrCaptured(0x7105e0) | 旧体读 +0x6E8/+0x6E3 无关布尔（真实 = locomotorTarget@704 ∥ locomotorSource@708） | 重译 + PASS |
| AbstractClass::GetCoords(0x410540) | 定义误名 fetchCoordinatesHere、体为置零占位 | 改名 + 槽 18 派发重译 + PASS；fetchCoordinatesHere 保留委托（techno.cpp 2 调用方） |
| QueryInterface(0x410260) | AddRef 裸调用被 min-pick 到 VectorClass::AddRef | this->COMStub_AddRef() + PASS + **completed** |
| IsIdleWithNoCaptives(0x63be10) | 真实结构 = GetPrimaryOrFallback(槽 97)==11 + 标志卫；忠实重译被 +1444 无名成员阻塞 | **completed→false（GetPowerOutput 先例）+ issue #17** |

### completed 池终态与回归

- **completed 28 → 29**（+QueryInterface +CheckHealthForRepair −IsIdleWithNoCaptives）。
- 逐函数回归：**22 PASS / 5 NOCACHE / 1 FAIL**（0x63BE10 issue #17）。
  NOCACHE 5 个（TimeRemaining/FacingClass::Update/Set_SyncLog/IsNonNullPtr/
  IsRookie）为 IDA 离线且缓存未存——09-07/08 曾对 live IDA 验证过；
  Set_SyncLog 的文法根因（issue #12）已单元级修复，IDA 回线重缓存即过。
- 编译：building.cpp / abstract.cpp / locomotion_bodies.cpp 全部 0 新错；
  audit_access 全 0 违规。
- efv_cpp_events 自测的 GetPowerOutput golden FAIL（vfptr+496 vs +468）
  为**既有 vtable 审计债**（git stash 对照确认先于本会话存在），非本轮回归。

### C 线批次推进诊断（本轮 next_batch 实测，pending=3,426 不变）

BuildingClass 15 个 pending 逐个 get_context 评估，**全部受阻于三类前置债**
（与路线图"A1 命名是 C 线提速前置投资"判断一致）：

1. **无名成员**：IsIdleWithNoCaptives +1444、CanRepair aP1 侧 ironTintTimer
   索引数学、GetFactoryPosition 哨兵全局 0x89C848-50（signals 无名）；
2. **签名/声明缺失**：CanBeSold 需槽 97 方法（MissionClass::GetPrimaryOrFallback
   无 hpp 声明）、GetTargetFacing 需 GetTurretAngle 签名考古（hpp 0 参 vs
   二进制 3 参）、CanRepair 需槽 117 身份裁决；
3. **既有争议区**：issue #4 的 +68/+286（IsTiberium*Eligible）、AnimClass
   中段（SetField8/95）维持延缓。

### 本轮账本变化

issues：#3/#9/#12 resolve；#17 新增（IsIdleWithNoCaptives 降级 + +1444 考古）。
file_class.hpp GetFileSize 0x7C8512 导入跳板注解删除（jmp __imp_* 字节实证，
issue #11d 清偿，声明保留）。signals.json 0x63BE10 completed=false 附 note。

---

## 执行日志 — 2026-09-09 F 会话：Phase F 证据补全执行 + G1 机械收割波次

### Phase F 执行（提交 1eeb4bea + 重锚）

见「Phase F」节终态表。关键认知修正与工具：

- **F1 考古结论反转**：路线图预设的「幽灵类考古」（SuperClass/MPCooperative/Radar）
  实为 **til 真实结构 vs class_layouts 缺键**——live IDA `py_exec_file` 批量导出
  427 结构（`.omo/export_til_layouts.py`），合并策略：新类全量导入 + 既有类填洞
  （不覆盖既有名、不越既有 size）+ mega-blob 截断（til ≥4096B pad 起点截断，
  House/Scenario/Mission/Tactical 21-90K 家族防护）。
- **容器语义**（`src/core/vector.hpp` ctor 验证布局）：Items@4/Capacity@8/
  IsInitialized@C(w1)/IsAllocated@D(w1)/Count@10——138 个模板实例全部获得语义名
  （仅当 til 全部非 pad 成员为 field_* 占位时套用——TimerClass 等具名真类不受影响）。
- **重写器三项升级**（gen_e4_materialize.py）：
  1. 继承链走查（parent 链 + own 区段防护 [父size, 本size)，基区遗留错位行
     TechnoTypeClass+4="IdleRate" 实证 424 个基区名被旁路）；
  2. 嵌套子对象解析（member_types ANCHORED 类型 + 覆盖成员尺寸==类布局尺寸
     排除数组——`ambientSoundController.AudioController_field_04` 形态）；
  3. w1/w2 load-only 截断（`(unsigned char)this->M`；store 保持原始伪码）。
- **til-pad 伪条目清除**：class_layouts 中「til 显式 pad 覆盖 + 名字与 til 别处
  赋名重复」双重铁证判据删除 175 条（BuildingClass 0x118/0x11C/0x120 与
  0x10C/0x110/0x114 重复名实证）。首版误用「pad 覆盖即删」过激判据（误删 1,320
  条 Type 类基区有效映射）——从备份重建后改用双重铁证。
- **E3 前向声明 bug**：类定位正则匹配 `class X;` fwd decl 后 `find("{")` 落进
  下一类体（house.hpp:41 fwd → :67 StartingTechnoStruct），64 条声明插错类体；
  修复 = 跳过行尾分号的声明行。一致性曾飙至 85 normalized，修复后回基线 3。
- **refresh 模式**：`--phase refresh` 保留已翻译 e4 记录（块级提取 + 字节级回写 +
  used_names 预播种防重名漂移 + E1/E2 并集合并）；验收 214/214 字节一致。

### G1 机械收割（wave A-E）

**收割器基础设施修复（E6 遗留 bug）**：`build_pending_index` 的 marker_line 在
同文件多次 replace 后行号上移，旧收割器按陈旧行号读块 → 每文件只处理首个候选
（E6 需两轮收割的根因）。新收割器（`.omo/e7_harvest*.py`）改为**地址注解行 →
向下 marker → 现算括号平衡 span** 的漂移安全定位 + 每条目重读文件。

| 波次 | 模式 | 结果 |
|---|---|---|
| A | `return <全局>;`（src 已声明） | 50 |
| C | `return <常量>;`（E6 残留） | 174 |
| P | `return aN;` 参数直通 | 2 |
| B | `return [cast]this->语义成员;` | 门控 ida-naming 排除 field_ 系名 + free-form-this 防护后少量 |
| E | 净化直排（≤8 语句；白名单词法：禁 v\d 局部/伪码类型名/调用/goto/循环/field_ 名；free-form 禁 this） | **298 marked / 31 reverted** |

**wave E 事故与恢复**：首版 E 波漏了「自由形态函数（合成时 this 参数被丢弃）
体内禁 this」防护——59 个无效翻译（`return *(this+3);` 形）混入；人工回滚脚本
自身有顺序替换索引失效 bug 加剧损坏（19 文件括号失衡）→ 干净恢复路径：
`git checkout HEAD -- src/e4` + signals 取消 400 个 G1 标记 + 白名单修复 +
refresh#3 重跑 + 收割重放（脚本确定性）。终态 0 无效翻译残留。

**门控语义确认**：单行体（`return 176;`）被 code-standards 的 stub 启发式 FAIL
（"1 real line"）——按 E6 先例 + 用户裁决模式（提交 + 重锚吸收，重锚不清账）处理。

**手动批次结论**：BuildingClass 批次维持 issue #4 延缓（CanBeSold/CalcDrawPos/
CheckOverlap 全部卡 0x6E9/0x534 争议区 + 槽 97 声明缺失 + vtable 身份未定）；
VectorClass mega 桶（1,562 pending）属 vtable 身份债（vector.hpp 已注明 IDA
系统性误标 _vt06=GetItem 等）——**A1/A2 命名轮是 C 线提速前置**的判断再次实证。

### 度量变化（本会话）

| 指标 | 会话前 | 会话后 |
|---|---|---|
| 偏移重写 | 1,869 rewritten / 4,379 unmapped | **9,215 / 6,204**（沉默 owner 全部入场） |
| class_layouts | 1,033 类 | **1,281 类**（+247 til 导入 + 容器语义） |
| MCP completed | 406 | **919**（+524 G1：A=50 / C=174 / P=2 / E=298；含 11 return-this CRT 与 59 free-form-this 无效体回滚后终态） |
| 一致性 | 38/3 | 38/3（维持基线） |
| auto-fill-baseline | c70eb5cd | F+G1 提交后重锚（本会话末） |
| src/e4 翻译记录 | 214 | **798**（214 保留 + 584 G1 收割） |

## 执行日志 — 2026-09-09 会话（续）：Phase E 全量落盘执行 + E5/E6 启动

### Phase E 执行终态（E0-E4 全部完成，提交 c70eb5cd，auto-fill-baseline 重锚）

**E0 IDA 回线同步**：
- rename debt 55 条全清偿：10 条 09-08 灾难条目标 cancelled（src 已回滚，永不重放）、
  19 条 sub_* 债对 live IDA 核验「IDA 已是语义名」直接销账、2 条畸形地址校正
  （0x4C58C0=EMPulseClass::IterateCellsInRadius、0x5D4390=Chat::RefreshMessagePositions）。
- ida_function_db.json 双刷新（13,443 具名，含全部 09-09 改名）。
- 5 个 NOCACHE completed 函数 live 复验全 PASS（TimeRemaining/FacingClass::Update/
  Set_SyncLog/IsNonNullPtr/IsRookie）→ completed 池 39 PASS / 0 FAIL。
- **full_export v3 重导出完成**：19,088 函数 100%（伪码+汇编）、globals 5,847 数据段
  条目、include 1,343 类头、71MB。v2 归档为 full_export_v2_20260909/。
  ⚠ v3 已知限制：export_funcs 对超长伪码有输出截断（`[NNNN chars total]` 标记，
  ~100 个长函数受影响）——E4 物化时已检测并注释化；翻译时以 get_context live 拉取为准。

**E3-IDA TechnoClass 452-580 考古修复**（三重二进制铁证）：
- forceShielded@0x1C4（IronCurtain@0x70E2C0 `mov dword ptr [ecx+1C4h],1/0`）；
- isDeactivated@0x1C8（IsDeactivated@0x70FBD0 `mov al,[ecx+1C8h]`）；
- focus@0x21C 锚点（GetTarget `mov eax,[ecx+21Ch]`）+ 460-540 区 80 字节紧凑排列
  推导 → airstrikeTintStage@0x1CC、drain 三连起于 0x1D0。
- 裁决：til 仅 0x1C4-0x1CF 三成员顺序错；member_lookup 从 464 起整体 +4 错到 0x244
  （09-09 会话修正了头部但把尾部带偏）。四源对齐：til（t14_structs --only 重声明）+
  class_layouts + member_lookup + src/techno.hpp。
- 残留两争议区挂 issue #19（244-280 区 +12、424-448 区 +4，member_lookup 单方偏离，
  待 B4 字段级 xref 考古）。

**E1-E4 全量落盘**（tools/gen_e4_materialize.py，50 秒可再生，幂等）：
- **E4 定义占位体**：14,576 无体函数物化为裁决 v2 pending 块（src/e4/ 565 桶文件；
  member 形态 6,080 + free 形态 8,496）。MCP pending **3,416 → 17,992 真实总账浮出**
  （19,133 全集 − 3,455 既有体 − 39 completed − 若干信号外形态 ≈ 17,992 精确对账）。
- **E3-src 签名合成 + hpp 声明**：1,057 条成员声明插入 94 个 hpp（签名=IDA 骨架 +
  已应用 CSP 类型；**方法名以记录名行（IDA label/signals 权威）为准**——Hex-Rays
  声明行会渲染 T14 时代嵌入的旧类型名（VectorClass::_vt06 vs 实际 VectorClass::Clear
  实证））；花括号 code-aware 匹配（注释/字符串剥离——house.hpp 曾因原始计数把
  HouseClass 声明插进 StartingTechnoStruct）。
- **E2 最小类声明**：289 个（src/e4/classes/*.hpp，vfptr + 方法声明，CSP inferred
  class 驱动）。
- **E1 全局声明**：882 个伪码引用全局 extern（e4_globals.hpp；参数名噪音过滤——
  IDA 数据自动名 a1/aP1 与参数名不可区分，保守排除）。
- **偏移→OO 语法重写**：1,869 处 this 相对偏移改写为 `this->成员名`（owner 证据 =
  记录名行 :: + csp_functions.inferred_real_class for sub_*；宽度按 cast 类型对齐
  class_layouts 成员表精确匹配 offset+size）。4,379 处未映射（owner 未知/成员无名/
  尺寸错配）保持原始形态——诚实优先。
- 截断记录处理：v3 超长伪码截断检测 → 注释化 + 空体（括号平衡，replace_body 安全）。

**审计回归清偿**（E4 曾引入 2,119 raw / 5,004 missing 两类审计噪音）：
- MCP 注解审计补 namespace 行跳过 + 伪码块内伪 def 跳过 → **matched 8,771 /
  missing 0 / mismatch 0**（服务源码级修复，进程热载需重启）。
- audit_consistency 补 src/e4 跳过 + **93 条历史 wrong-class 声明删除**
  （五组 Type↔Instance 混淆：HouseClass↔StartingTechnoStruct 104 对、TagTypeClass↔
  TagClass 28、VoxelAnimTypeClass↔VoxLib 24、ScriptTypeClass↔ScriptActionNode 14、
  TriggerTypeClass↔TriggerClass 12——删除错类侧，保留 IDA 权威侧）→
  **回基线 38 raw / 3 normalized**（getMapCoords vtable 债 + 2 rename-debt 自愈型）。
- MCP 服务器：pending 索引 mtime 失效（新增 src 文件自动入账，不再需要 annotate
  触发重置）；build_pending_index/_signals 状态一致性维持。

**auto-fill-baseline 重锚**：c70eb5cd（E4 物化提交），diff=0，门控空转通过。
**重锚不清账**：债清单全部保留（17,992 pending / 69 CFG / 682 链接 / vtable 审计 /
issue #4/#17/#19 等），是 C 线工作队列。

**基建缺陷记录（未修）**：
- e4 声明插入产生个别非法方法名（`int AbstractClass(); // 0x4385D0`——方法名与
  基类同名，合法 C++ 冲突）；签名类型偶有不可解析形态（std::locale::facet* 等）——
  均在「基线编译错误允许」框架内，翻译到具体函数时逐个吸收。
- v3 快照长函数截断（见 E0 注）。

### E5 口径统一（完成）

- 候选 = 有真体未标 completed 的 2,900 函数（.omo/e5_candidates.json）；
  4 并行 verify_execution_flow 子进程全量跑完（live IDA fetch 回填缓存）。
- **终态：154 PASS → 全部 mark_completed；2,746 FAIL（存根/不忠实/受阻）诚实保留
  pending**。stats 单数字自此可信（completed=406 @ 本会话末）。
- ⚠ 经验：signals.json 并行写（标记）与并行读（verify 子进程）在 Windows 上撞
  Errno 22 —— 标记操作须带 6 次退避重试（e6_harvest_const.py 已内置）。

### E6 翻译启动（纯 MCP 工作流，机械收割优先）

- **常量返回收割完成**：374 个 `return CONST;` 型候选中 **213 个真翻译 + verify
  PASS + 标记**（两轮收割 0 FAIL；对账清扫确认无已译未标损失）。
- 后续批次队列：58 个全局 getter、457 个证据完备（偏移已重写）函数、
  6,146 个 ≤8 行小函数长尾、BuildingClass 布局争议区（issue #4）维持延缓。
- 已知瓶颈再确认：单体函数成员考古成本（BombClass 0x30/0x38 hpp 缺成员实证）——
  A1 成员语义命名仍是 C 线提速前置投资。

### 本会话度量变化（2026-09-09 Phase E 会话）

| 指标 | 会话前 | 会话后 |
|---|---|---|
| MCP pending | 3,416（失真，仅含有体子集） | **17,778（真实总账）** |
| MCP completed | 39 | **406**（+213 常量收割 + 154 E5 校准） |
| src 函数体覆盖 | ~3,455 / 19,133 | **~17,870 / 19,133**（93.5%） |
| 类声明 | 1,120 | +289 E2 最小声明 |
| 全局声明 | ~1,406 | +882 E1 extern |
| IDA til TechnoClass 452-580 | 三成员错序 | 四源对齐（铁证修复） |
| rename debt | 29 未清 | **0**（10 灾难 cancelled + 19 销账） |
| 一致性审计 | 37 raw / 3 normalized | 38 raw / **3 normalized**（清偿 93 错类后回基线） |
| 注解审计 | 3,345 matched | **8,771 matched / 0 missing / 0 mismatch** |
| 快照 | v2（09-05，陈旧） | **v3（19,088 函数 100%，含全部改名/类型/布局修复）** |

---

## 执行日志 — 2026-09-09 会话：污染复检全基线 + IDA 离线纯 MCP 翻译轮（completed 29 → 39）

### 污染检验（会话首四重审计）

注解 0 mismatch / 全局注解 0 missing / audit_access 全库 14 处全为 surface.cpp
帧缓冲游标（既有裁决）/ audit_consistency 37 raw / 1 normalized（getMapCoords
vtable 债）——与 09-08 终态一致，**无新增污染**。会话尾复核：注解 matched 3,345 /
0 mismatch、全局 0 missing、一致性 39 raw / **3 normalized**（=getMapCoords
既有债 + 2 条 rename-debt：0x465D40/0x5220F0 的 ida_function_db 侧仍为旧名，
IDA 回线后 `--replay-debt` 自愈，非真污染）。

### 环境约束与工作队列（IDA 离线）

IDA MCP（:13337）全程离线 → get_context 走 member_lookup 回退、verify 只能用
`.omo/ida_cache/`（581 函数 live 缓存）、rename 全走 debt。工作队列 = pending
索引 ∩ 缓存 = **283 个可验证目标**，按伪码行数升序取小函数。

### 翻译完成（10 函数，全部 CFG PASS + completed）

| 函数 | 地址 | 要点 |
|---|---|---|
| BuildingClass::IsFactorySelectable | 0x457620 | `return this->Type->Is1x1AndUndeployable...()` tail 委托 |
| BuildingClass::IsMassSelectable | 0x459C00 | 赋值臂独立+RET 尾块镜像；`TechnoClass::CanMoveToCell()` 限定直调（ASM call 非虚派发铁证） |
| BuildingClass::GetTypeField60 | 0x459ED0 | `return this->Type->UIName`（快照权威 +0x60）；返回类型 int→const wchar_t* |
| InfantryClass::SetPermanentBerzerk | 0x5220F0 | 原 SetFlag1752 语义改名（+0x6D8=PermanentBerzerk 快照名）；int→void |
| InfantryClass::IsBridgeRepairEnabled | 0x5224D0 | `return this->Type->Engineer`（+0xEC3；FootClass 伪码 VoiceResponse(14) 并列读佐证） |
| AbstractClass::IsClean | 0x410450 | `return !NeedsSaveOrLink`（ASM [ecx+20h] 字节判零；+0x20 双语义既有习语） |
| UnitClass::IsDeactivated | 0x70FBD0 | `return isDeactivated`（Activate=0/Deactivate=1/ctor=bl 三重铁证）；int→bool |
| CellClass::DrawWrapper | 0x653F50 | 纯转发 UpdateTerrainAndWaypoints；签名 2 参→4 参修正（retn 10h=4 栈参） |
| UnitClass::StubReturn176 | 0x6B4F30 | `return 176;` |
| UnitClass::StubReturn29 | 0x6B4F40 | `return 29;` |

### 污染修复（本轮主体）

1. **owner 修复**：`BuildingClass::Is1x1AndUndeployable_BuildingMassSelectable`
   → **BuildingTypeClass::**（0x465D40）。证据链：两调用方（0x457620/0x459C00）
   均 `mov ecx,[esi+520h]`（this->Type）后 call；被调体读 Foundation@+0xEF0 查
   1x1 宽高表。声明 building.hpp→building_type.hpp 迁移；IDA 侧 rename debt。
2. **member_lookup TechnoClass 452-464 区外科修正**（备份
   `.omo/member_lookup.backup_0909.json`）：452=forceShielded（IronCurtain
   @0x70E2C0 写 dword 1/0）、456=isDeactivated（字节写读三重证）、
   460=airstrikeTintStage（位移名）、464 删错位条目。原区整体 +4 错位。
   **快照 TechnoClass.hpp 该区仍为旧形态**（重导出待办）。
3. **GadgetClass::ClearState 受阻建账**：src 模型为宽松自定义（缺 NeedsRedraw
   成员，hpp 注释自证 binary@+0x1C），加成员须走 IDA→header pipeline——未擅自添加。

### verifier 基建修复（3 处，回归零退化）

1. **rename-debt 别名**（verify_execution_flow.load_signals）：未清偿
   `.omo/rename_debt.json` 的旧名→新地址映射，否则 IDA 缓存伪码里的旧名调用
   解析失败→事件缺失→假 FAIL（IsFactorySelectable 实证）。
2. **namespace 双层前缀**：def 正则 `namespace\s+\w+\s*\{\s*)?` → `*`（两处），
   支持 `namespace ra2 { namespace game {` 形态（上次只修了单层 gamemd）。
3. **qualified 定义头守卫**（efv_cpp_events）：`A::B(...)` 路径补
   `_looks_like_definition`——`RetType Class::Method() {` 签名行不再伪造
   CALL(self)（09-08 只给 PascalCase 简单路径加了守卫）。

### 编译验证方法论（单 TU C1003 中止问题）

带存量伪码债的文件 MSVC 在 ~100 错误即 C1003 中止，**编辑区根本没编译到**——
MCP build 的"0 errors"字段此时无意义。本轮建立**探针 TU 方法**：抽取原文件
include 块 + 仅含新函数定义的小 TU（`.omo/probe_*.cpp`）同 flags 编译，
rc=0 判定（6+4 函数全过）。infantry.cpp 顺带补缺失的
`#include "type/infantry_type.hpp"`（hpp 只有前向声明，`Type->Engineer` 不可达）。
Clang AST 门控（check_translated_functions）在大 TU 上 40min+ 不完成（已知
基建限制，run_gates 同症）；hpp 侧以 `check_hpp_implementations` 直查
5 个触碰头文件全 CLEAN，cpp 侧以探针+audit_access+verify 兜底——**本轮不宣称
gate 3/3**。

### 新定位的受阻函数（下一轮考古输入）

processEnterTarget（0x7178B0，+0x814 变索引 dword 数组无名）、IsPoweredOn
（0x4525F0，+3392 CheckPowerFlags receiver 无名）、GetHealthRatio（0x5F5C60，
vtable 槽 34 身份未知）、startPanic（0x772AC0，MissionClass+324 无名）、
ClearState（0x4E1550，GadgetClass 模型缺成员）、IsObserver（0x5E9440，三全局
0xAC11A4/8/C 无名且无 pending 体）、Hash::InsertOrdered（0x4F4410，全局头
0xA8EF54 无名）、CCFileClass::Reset（0x473CE0，+88/+100 无名）、
LoadOptions::Run（0x5587F0，成员无名）——**成员考古瓶颈再次确认**，与
"A1 是 C 线提速前置投资"判断一致。

### 基建观察（待修，未动）

- MCP pending 索引对「签名与 `{` 分行」形态丢失 class/function 归属
  （`_enclosing_function` 要求上一行以 `{` 结尾）——3,400 个 class=""
  pending 中相当部分源于此；按地址 target 可绕过。
- replace_body 落盘后行号移位使缓存索引 stale——file:line target 失效，
  地址 target 稳定。

### 度量变化

| 指标 | 会话前 | 会话后 |
|---|---|---|
| MCP completed | 29 | **39**（+10） |
| pending | 3,426 | 3,416 |
| completed 池回归 | 22 PASS/5 NOCACHE/1 FAIL | **34 PASS / 0 FAIL / 5 NOCACHE** |
| 一致性 normalized | 1（getMapCoords） | 3（+2 rename-debt 自愈型） |
| verifier 覆盖形态 | 单层 namespace | 双层 namespace + qualified 定义头 |
| rename debt | 3 条 | 5 条（+Is1x1 owner +SetPermanentBerzerk） |

issues：#18 新增（UnitClass::SaveState 0x6B4F00 stdcall-vt06 签名建模债：
二进制 3 栈参 thunk + ECX 不装载 this，转发 SaveLoad_Prefix@0x410320 疑似
stdcall 3 参非 thiscall）。
