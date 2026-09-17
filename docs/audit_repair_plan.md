# 审计修复计划（2026-09-16 反hacking审计产定，issue #114-#117）

> 背景：体检轮的抽样对照实证了两条系统性绕过向量 + 一个度量假阴性，
> 本文件是可执行的修复计划（git 跟踪）。审计证据与机制链见
> `docs/roadmap_post_csp.md` 体检/审计日志、issue #114-#117、
> `.omo/fake_stub_audit.json`、`.omo/completed_body_audit.json`。
> 当前诚实口径：completed 11,892 的真实下界 ≈ **11,485**（−~370 破损 −~37 假完成，并集待精算）。

## 执行序总览

```
W1.1 ERROR_RE 修复（#117，独立，可立即做）
  → W1.2 验证器 READ 盲点修复（#114，保护文件：先 dry 统计 → 获批 → 改 → 全池新基线）
    → W2.1 铁面 9 假完成复位（#115，g15_rollback 范式）
    → W2.2 嫌疑 28 个逐例复核处置（#115）
    → W2.3 破损文本 ~370 个分路修复（#116）
  → W3 预防固化（随波执行，W3.1/W3.2 可先行）
```

W1.2 与 W2 有依赖：复位清单应以加固后的验证器复核为准（避免按旧盲点口径复位漏人）。
预计工作量：W1.1 ≈ 半小时；W1.2 ≈ 1 会话；W2 ≈ 1-2 会话；W3 随波固化。

---

## W1 — 验证器与度量加固

### W1.1 修复 ERROR_RE 恒 0 假阴性（#117，非保护文件）

- **现状**：`tools/mcp_translate_server.py` 的 ERROR_RE 要求 MSVC `(行,列)` 双数字
  格式，实际输出 `(行)` 单数字——**从未匹配任何行**，stats 的
  `last_build_errors` 恒 0（实证：当日日志 60 error 行，匹配 0）。
- **改动**：正则改为列可选：`\.cpp\((\d+)(?:,(\d+))?\): error (C\d+):`，
  `parse_build_log` 相应取组。**改完必须重启 MCP 服务**（13399 不热加载）。
- **验收**：stats 对当前日志报 `last_build_errors≈60`；单文件编译
  （build scope=file）的错误计数与日志 `grep -c ": error "` 一致。
- **口径澄清（文档同步改）**：AGENTS/coverage 的"编译错误 0/0"在此修复前
  属未证实口径；修复后以真实计数为准（当前主体债 ≈ 裁决 v2 容忍的 5,335 全量口径，
  单文件日志 60 行是 infantry.cpp fatal C1003 截断值，非全量）。

### W1.2 修复验证器 READ 盲点（#114，保护文件：verify_execution_flow.py）

> **执行前置 = 本节即保护文件改动申请**（AGENTS 修改策略：改什么/为什么/影响面）。
> 获批后按序执行，**先 dry 统计、后动本体**。

- **现状（verbose 实证 0x484ab0）**：`step3_0_check` 的"必须在场外部操作"
  不含 READ 事件。IDA 侧 `READ(member,278)/READ(global,0x8B4148)/READ(member,236)`
  vs C++ 侧 `[]` 判 OK；READ-only + 单块结构的函数配任意平凡 return 体即 PASS。
  G15 复位 22 假完成时盲点未修，故持续漏网。
- **两个候选方案**（dry 统计后定）：
  - **方案 A（推荐首发）：平凡体守卫**——新增独立检查：C++ 体（剥注释）为
    平凡 return 形态（单 return 语句、无成员/全局/调用事件）而 IDA 侧存在
    任何 READ/WRITE/CALL 事件 → FAIL `trivial-stub-mismatch`。
    牵连面小：只打"体与真值明显不符"的象限，合法 raw-cast 对称形态不受影响。
  - **方案 B（全面但重）：STEP3(0) 纳入 READ(member)/READ(global)**。
    牵连面大：raw-cast 双侧零事件对称的合法函数（未名偏移形态族）可能大量误伤。
    仅当方案 A 统计显示守卫不够时升级。
- **执行序**：
  1. 写独立统计脚本（不改验证器本体）：对全池 11,892 completed 跑
     "平凡体 × IDA 非平凡事件"交叉表 → 方案 A 的潜在 FAIL 集合与合法豁免集合；
  2. 带数据获批 → 实施方案 A → `python tools/verify_execution_flow.py` 全池复跑；
  3. 验收：铁面 9 个（见 W2.1 清单）在新验证器下全部 FAIL；
     0x484ab0 verbose 显示 trivial-stub-mismatch；合法样本
     （GetPlanningToken/IsMassSelectable/IsRookie 等）保持 PASS；
  4. 记录新基线：全池 FAIL 清单 = W2 复位/修复工作清单（新口径），
     之后回到"禁止带 FAIL 提交重锚"纪律。
- **附注**：`.omo/pool_verify_all.py` 直接复用作全池驱动。

---

## W2 — 存量假完成与破损文本修复

### W2.1 铁面 9 个假完成复位（#115）

清单（IDA 有真实逻辑、C++ 体为平凡 return，其中 0x484ab0 已 live 反编译亲证）：

```
0x484ab0 InfantryClass::IsInBounds          0x406e80 AudioMixer::Shutdown
0x4525f0 BuildingClass::IsPoweredOn         0x458db0 BuildingClass::HasActiveParam
0x458dd0 BuildingClass::CheckMissionGuard   0x401190 sub_401190
0x4dba50 TechnoClass::GetTargetCellCenter   0x522cb0 TechnoClass::IsEnteringOrCapturingStructure
0x659470 TechnoClass::drawSelectionBox
```

- **处置**：g15_rollback 范式（`.omo/g15_rollback.py`）——signals completed=false
  + 伪码块回置 pending；逐个记账；随后按 P2 手动范式重翻。
- **注意**：0x484ab0 的臆造英文注释一并清除；0x401190 同时在
  未声明参数清单（破损向量），两账并修。

### W2.2 嫌疑 28 个逐例复核（#115 复核组）

`.omo/fake_stub_audit.json` suspect_fakes 中排除铁面 9 + 诚实平凡 50 后的余量：
Jumpjet CheckPiggybackState 族（ops=1 边界）/ Blit CallBlit0 族（多行签名干扰
分类，需 live 对照确认真身是否平凡跳板）/ CRT `__allmul`/`__ultoa` 族
（CRT 桶按既有桶政策归类，但 completed 标记同样需要与真身相符）。
每例三选一：复位 / 保留（记录理由）/ 转桶。产出：处置台账补进 issue #115。

### W2.3 破损文本 ~370 个分路修复（#116）

- **清单**：`.omo/completed_body_audit.json`（120 括号不平衡 + 261 签名缺参，
  并集去重后为准）。分布：gap2 五件套 126 / addr7C 35 / CaptureManagerClass 14 /
  addr7D 8 / ObjectClass 8 / 其余散布。
- **分路标准**（逐个判定后进对应路）：
  - **R 路（机械修复）**：语义忠实、仅生成器缺陷者（gap2 丢 this 的
    completed 同族、纯缺括号/缺参数名）→ 补签名参数 + 补括号 +
    `verify_execution_flow` 复验 → 保持 completed。随 H2/H3 机械轮批量。
  - **S 路（复位重翻）**：语义未验证者（含 0x522640 GetProductionLimit——
    G16 曾复验 PASS 记账，需撤账）→ completed=false + 回置 pending。
- **关联**：P0b（docs/g17_prep.md，GetWarhead ml 残留）属本向量同族，
  执行时合并处理。
- **验收**：两清单在修复轮后重扫归零（复用 `.omo/audit_completed_bodies.py`）；
  completed 口径重算并刷 AGENTS/coverage。

### W2.4 口径与文档修正

- 全池 FAIL=0 表述全部加限定词：**"FAIL=0 = 文本 CFG 双射，不含可编译性/
  非 stub 保证"**（AGENTS 状态表、coverage 头注、g17_prep 体检基线三处）；
- "编译错误 0/0"口径按 W1.1 修复后的真实计数重述。

---

## W3 — 未来同类问题预防

### W3.1 mark_completed 前置自检（流程，立即可行）

每次 mark_completed 前三问（写进执行纪律）：
1. 体非平凡（单 return 体 + IDA 非平凡 → 禁止）；
2. 该文件 compile_single_file 通过（或误差已记账）；
3. exec-flow PASS（既有）。
工具化：`.omo/audit_fake_stubs.py` 改造为增量模式（只查本波新增 completed），
作为收尾六件套第 5 项的执行器（g17_prep「G17 主循环工作流」已预留此位）。

### W3.2 波次编译抽检（流程）

每波收尾对本波新增 completed 所在文件跑 `build scope=file`（MCP 已有），
真实错误数计入波次账——在 W1.1 修复后此数可信。

### W3.3 门控类别扩展评估（保护文件：check_translated_functions.py / clang_ast_checker）

提案（获批后实施）：Clang 门控新增 **compile-validity 类别**——对 diff 区间内
函数，Clang diag 出现 undeclared-identifier / unexpected-token / 缺括号类错误
即 FAIL。这能在门控层（编译之前）拦住 #116 族。执行前先跑全库 changed-set
dry 统计误伤面（E3 代基线语法债 10 处等已知项先白名单或先修）。

### W3.4 度量防回归

- ERROR_RE 修复后，stats 的 last_build_errors 与日志 grep 交叉校验
  （收尾六件套追加一行核对）；
- 全池回归抽样制（g17_prep 已定稿）继续执行，W1.2 完成后立即全池复跑一次
  建立新基线。

---

## 与既有计划的关系

- **P0/P0b**（BulletType til + ml 残留 + GetWarhead 复验）：不变，是 W2.3 的
  开胃菜（IDA 回线第一件事）；
- **P1-P3**（TechnoClass 尾区 / H5 / vtable 审计）：不变，排在修复计划之后
  （修复计划完成后 pending 口径会重算，P2 队列不受影响）；
- G17 会话开工顺序建议：W1.1 → P0/P0b → W1.2 dry+获批 → W2 → 回到 P1-P3 主线。
