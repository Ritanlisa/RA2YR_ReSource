# CSP 后时代路线图 — 类型体系收官 → 语义重建 → 功能对等

> 2026-09-05 制定。CSP 约束求解体系已达证据上限（TOP=0，七通道全绿），
> 本文档是此基线上的完整后续工作分解。前情：AGENTS.md「最近完成」各条目、
> `docs/coverage.md`、memory `type-infer-oop-rebuild-roadmap`。
>
> **执行状态首查表（2026-09-06 会话更新）**：
>
> | 任务 | 状态 | 摘要 |
> |---|---|---|
> | B1 apply_sigs 550 失败 | ✅ 完成 | fail=0，914 处 return/param 编辑落盘 |
> | B2 mass_type 1 失败 | ✅ 完成 | CRT RTTI 折叠体池级过滤 |
> | B3 枚举通道 | ✅ 完成 | 5 枚举声明 + 8 成员 + 2 参数回填 |
> | A4 命名一致性 | ✅ 完成 | 511 → 0（audit 0/0） |
> | **新** hpp-impl 存量债务 | 🔶 迁移完成/构建受阻 | 1,765 → 0 违规；构建暴露 2,874 存量编译错误 |
> | A1 成员语义命名 | ⬜ 未开始 | |
> | A2 sub_* Pass 3 命名 | ⬜ 未开始 | |
> | B4 零观测 struct 考古 | ⬜ 未开始（可选） | |
> | B5 池外 thiscall | ⬜ 未开始（可选） | |
> | C1-C4 批量翻译 | ⬜ 未开始 | 输入质量投资（A 轮）已部分就位 |
> | D1-D4 集成验收 | ⬜ 未开始 | |
>
> 详细过程与遗留问题见文末「执行日志」。

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
| 完整翻译函数 | 472 | 472（C 线未开始） | — | 1,000 → 3,000 → 472+5,758 全量 |
| REVERSE 对拍 | 41 函数 | 41 函数 | — | Same 率 >95% |
| 构建 | 0/0（实为 gate 假绿） | **2,874 存量错误暴露** | — | 0/0（红线，最高优先修复） |

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

**⛔ 构建红线未恢复 — 全量构建 2,874 个存量编译错误（下一会话最高优先）**

hpp 迁移完成后全量构建暴露 2,874 错误。初步归因（已完成的部分）：

- **大头是存量债务**（gate 假绿期间从未真正编译过）：
  - surface.hpp ×734（17 个 TU 重复）：`class XSurface : public Surface`
    基类 **Surface 未定义**——fundamentals.hpp 仅 40 行无 Surface 类
    （迁移前 inline ctor 就引用 `Surface(width,height)`，说明此前同样
    编不过）；
  - _gap2/gap2_global_defs.cpp ×102：`BOOL` 未声明（缺 windows.h）；
  - checksummer.cpp ×5：hpp 中成员声明本就被注释、cpp 却有定义；
  - 其余 ~100 错误/TU 的模式待逐类归因（object.cpp 108 / unit.cpp 106 /
    building.cpp 106 / ini_class.cpp 102 …）。
- **迁移引入的部分待甄别**：command_class_bodies.cpp ×38、
  misc_ext.hpp ×74（迁移后 hpp 仍报错，需查）等。
- 83 个 `_bodies.cpp` + 3 个 `_bodies.inl` 与 174 个文件改动**未提交**
  （构建不过不提交，遵守红线）。
- 处置建议（下一会话）：
  1. 逐错误类归因（存量 vs 迁移引入），迁移引入的先修；
  2. 存量按文件清理（Surface 基类定义考古：dsurface.md 38 条 vtable
     继承链是现成参考）；
  3. 构建过 → hpp_scan 复扫 0 → `run_all_gates.py` 3/3 → 提交迁移。

**⬜ 其余未开始任务**（优先序不变，但全部让位于构建红线）：

- A1 类成员语义命名（TechnoClass/FootClass/ObjectClass 家族优先）；
- A2 sub_* Pass 3 反编译级命名（3,590 池外）；
- A3 局部变量语义命名（随 C 线吸收）；
- B4 7 零观测 struct 考古（可选）；B5 池外 thiscall（可选）；
- C1-C4 批量翻译主线；D1-D4 集成验收。
- 快照重导出（本轮 IDA 侧类型/命名变更后需要：5 枚举 + 8 成员回填 +
  502 改名 + 914 签名落盘都尚未反映到 full_export）。

### 本轮度量变化

| 指标 | 会话前 | 会话后 |
|---|---|---|
| apply_sigs return/param 落盘 | 1,419 | +914（fail 0） |
| mass_type fail | 1 | 0 |
| IDA 枚举 | 0（仅 CRT/COM 16 个） | +5 游戏枚举 |
| 枚举类型 struct 成员 | 0 | 8 |
| 命名不一致 | 511 | **0** |
| hpp-impl 违规 | 1,765（未暴露） | **0**（迁移完成） |
| 构建状态 | gate 假绿（实际未编译） | **2,874 存量错误暴露，待清理** |
| 提交 | — | 9402bf24（B1/B2/B3/A4）；迁移改动在工作区待构建通过后提交 |
