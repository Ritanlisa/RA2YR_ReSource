# CSP 后时代路线图 — 类型体系收官 → 语义重建 → 功能对等

> 2026-09-05 制定。CSP 约束求解体系已达证据上限（TOP=0，七通道全绿），
> 本文档是此基线上的完整后续工作分解。前情：AGENTS.md「最近完成」各条目、
> `docs/coverage.md`、memory `type-infer-oop-rebuild-roadmap`。

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

### A4. 215 命名不一致清零
- 59 method_diff：IDA↔hpp 别名差异，逐函数查快照裁决。
- 116 wrong_class：声明挂错类体，需移动声明（机械重构）。
- 40 other：签名差异逐个处理。
- 验收：`tools/audit_consistency.py` → 0 剩余。

---

## Phase B — 类型体系收尾（工程债，小而必要）

| 任务 | 内容 | 规模 |
|---|---|---|
| B1 | t14_apply_sigs 550 失败归因（return 通道新类型拼接问题，同 wchar_t 双 CC 类） | 半天 |
| B2 | mass_type 1 失败（RTtypeid CRT 折叠体，0x7caacb 非函数起始） | 1 小时 |
| B3 | 枚举通道：Action/Armor/CellFlags/LandType/Layer 走 IDA enum 声明（非 struct）；type_map 枚举类型变量回填 enum 类型 | 1 天 |
| B4 | 7 零观测 struct 考古（OwnedTiberiumStruct/LineTrail/Sequence/PassengersClass/PlanningTokenClass/RecoilData/RepeatableTimerStruct）：IDA 字段级 xref + YRpp 源对照恢复布局 | 2-3 天，可选 |
| B5 | 888 池外 thiscall：需新证据源（vtable 间接 this 传递链深挖），排后 | 可选 |

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

| 指标 | 当前 | A 轮后目标 | C 线里程碑 |
|---|---|---|---|
| IDA 函数命名覆盖 | 70.5% | 85%+ | — |
| 类成员语义名 | ~0（field_0xNN 占位） | >60% | — |
| 命名不一致 | 215 | 0 | 0（维持） |
| 完整翻译函数 | 472 | — | 1,000 → 3,000 → 472+5,758 全量 |
| REVERSE 对拍 | 41 函数 | — | Same 率 >95% |
| 构建 | 0/0 | 0/0 | 0/0（红线） |

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
