# CSP 机械重建：1-6 步计划与实际执行记录

## ⚠️ 新 Agent 接手指令（先读这节）

1. **当前阶段 = 第 6 步后半（RA2MCP/LLM 阶段）**：在 `src/csp_canon/` +
   `bodies/*.inc` 基底上工作——补锚 7,131 签名缺口（downgrade 4,875 +
   no-cls 2,256，通道 = CSP 增量求解器）、重命名、优化实现、对拍、complete。
2. **禁止**：恢复旧 fleet/H5/吞吐配额管线（docs/g26_prep.md 已作废）；
   以旧 completed 计数（12,794）报进度；手动改 `src/csp_canon/`、
   `src/raw_decomp/`、`anchors/csp_canon_*.json`（全是机械生成物，
   要改就改生成器 `tools/csp_export/*.py` 后重跑）。
3. **进度口径**：manifest sig=csp 占比 + 对拍 Same 数，替代旧 completed 计数。
4. 旧树（src/ 既有 hpp/cpp）仍是唯一编译体；回填体接管后再切编译目标。


> 日期：2026-09-20。原则：1-5 步 + 第 6 步回填**纯机械算法**，零人工逐函数处理。
> 归档点：tag `archive/pre-mech-rebuild`（5b9b2531，completed 12,793 时点全量快照）。
> 完成点：commit 84f44ed4，tag `auto-fill-baseline` 重锚（门控 diff 归零）。

## 用户计划的六步（规格）

1. CSP 系统性约束求解
2. 从 CSP 系统性导出全部 IDA 符号并机械转写为 C++ 签名（类/变量/函数签名/继承）
3. 用 IDA 导出每个函数的反编译 C 与 asm
4. 用 CSP 结果把反编译中非规范类成员引用机械转为 `.` / `->`
5. 更新 git 基线使门控不判别原始代码
6. RA2MCP 分析：系统性重命名、优化实现、反编译并 complete

## 逐步：计划 vs 实际

### 第 1 步 — CSP 求解 ✅（此前已完成，直接消费）
- 产物：`type_map.json`（type_map 73 万条目，`0xADDR:this` 逐函数 this 定型）、
  `tools/csp/full_report/csp_functions.json`（13,949 函数签名）、
  `anchors/class_db.json`（1,597 类：direct_bases/size/members/methods/vtables）、
  `anchors/class_layouts.json`（1,282 类绝对偏移布局）、
  `anchors/member_types.json`、`anchors/global_types.json`（1,338）、
  `anchors/class_name_align.json`（rtti→canon 975/988）。
- 本阶段未重跑引擎，消费既有确定性输出（TOP=0、sha256 双跑一致在案）。

### 第 2 步 — CSP→C++ 全量机械转写 ✅（本次新建）
- 工具：`tools/csp_export/gen_cpp_canon.py`（纯算法：canon 归一 → 类型映射 →
  成员三源合成 class_db+layouts+offsets → vptr 槽规则 → padding 填充 →
  标识符净化/去重）。
- 产物：
  - `src/csp_canon/classes.hpp` — 1,597 类（继承=RTTI direct_bases 机械转写；
    成员逐偏移注释；vptr 槽内重叠成员丢弃、槽位规范为 `void* vtableN`；
    方法声明带 `// 0xADDR vt+NNN sig=源`）
  - `src/csp_canon/functions.hpp` — 8,285 自由函数签名
  - `src/csp_canon/globals.hpp` — 1,338 全局
  - `anchors/csp_canon_manifest.json` — **19,078 函数逐条溯源**
    （sig=csp 13,735 / sig=ida-proto 5,343；cls=canon 类锚）
  - `anchors/csp_canon_members.json` — 1,597 类成员表（偏移→名/型/宽，
    第 4/6 步的唯一权威数据源）

### 第 3 步 — IDA 反编译导出覆盖验证 ✅（既有产物机械化验证）
- `decompile-results/full_export/`（19,089 索引条目）+ `.omo/ida_cache/`
  （19,056 文件，全部含非空反编译文本）。
- 覆盖：**19,074/19,078 = 99.98%**；4 缺失（0x750041/0x7CAACB/0x7CABFB/0x7DC6FA，
  CRT 块）。

### 第 4 步 — 成员引用机械重写 ✅（本次新建）
- 工具：`tools/csp_export/rewrite_member_refs.py`（确定性正则 + CSP 成员表查询 +
  宽度匹配：cast 宽度 ≠ 成员宽度则保持原样；this 缩放按签名 `_DWORD *this` 判定；
  this 类源 = type_map `0xADDR:this`（12,868 函数命中）→ manifest cls 回退）。
- 产物：`src/raw_decomp/fn_00..3E.c` 63 桶，**19,056 函数全量**；
  **2,746 函数命中重写，12,247 处 `this+偏移` → `this->Member`**；
  树内 `this->` 引用共 16,910。未匹配偏移机械保留原样（不猜测）。

### 第 5 步 — git 基线 ✅
- commit 5b2e082b（1-5 步产物）→ `auto-fill-baseline` 重锚；
- commit 84f44ed4（第 6 步回填）→ 再次重锚。门控对基线 diff = 空，
  原始代码不被判别。

### 第 6 步 — 回填 ✅（机械部分完成；RA2MCP 重加工归后续 LLM 阶段）
- 工具：`tools/csp_export/backfill_completed.py`（单遍体索引 18,095 +
  逐函数机械分类 + 成员名偏移映射改写，仅 `->`/`.` 令牌词边界替换）。
- **回填三账（12,794 completed）**：

| 账目 | 数量 | 含义 |
|------|------|------|
| direct | 4,894 | CSP 锚定且成员名已合规（含 CSP 自由函数），体原样入基底 |
| renamed | 420 | 成员名按 old偏移→new偏移 机械改写（renamed_refs 逐函数记录）|
| downgrade | 4,875 | sig=ida-proto 未锚定——降级，待 CSP 增量求解补锚 |
| no-cls | 2,256 | sig=csp 但带 `::` 名而无类锚——签名真值缺口，待 CSP 对账 |
| no-body | 349 | 树内未索引到体（注解形态长尾）|

- 产物：`src/csp_canon/bodies/fn_00..3E.inc` 63 桶（direct+renamed 回填体，
  函数头带 `BACKFILL 0xADDR cls sig renamed_refs`）、
  `anchors/backfill_manifest.json`（逐函数账）、
  `signals.json` 增量 `backfill` 注记字段（不破坏既有消费方）。

## 溯源链（重建后的权威数据流）

```
CSP 求解(第1步, 唯一类型权威)
  → csp_canon_manifest(逐函数 sig 溯源) + csp_canon_members(成员唯一权威)
  → raw_decomp(第4步机械重写的参考反编译)
  → bodies/*.inc(第6步回填体, 成员名已规范)
  → [后续 LLM/RA2MCP 阶段] 在此基底上重命名/优化/对拍/complete
```

## 已知机械边界（如实记录）

1. raw_decomp / bodies 是**参考基底**（`.c`/`.inc` 后缀，不参与编译）；
   使其成为可编译树（接 CMake、过编译）属第 6 步 RA2MCP 阶段工作。
2. 第 4 步重写只覆盖 this 相对引用（确定性核心）；局部接收者引用需
   CSP 栈变量类型对账，未在本轮范围。
3. downgrade 4,875 + no-cls 2,256 = **7,131 签名真值缺口**——是第 6 步
   RA2MCP/对拍阶段的准入工作量底数；CSP 增量求解器（已有 incremental
   模式）是补锚通道。
4. 旧树（src/ 既有 hpp/cpp）保留未动——旧 completed 翻译体仍是唯一编译体，
   回填体在 bodies 基底上逐步接管。

## 工具与产物索引

| 路径 | 内容 |
|------|------|
| `tools/csp_export/gen_cpp_canon.py` | 第 2 步转写器 |
| `tools/csp_export/rewrite_member_refs.py` | 第 4 步重写器 |
| `tools/csp_export/backfill_completed.py` | 第 6 步回填器 |
| `src/csp_canon/*.hpp` | 规范声明（1,597 类 / 8,285 自由函数 / 1,338 全局）|
| `src/csp_canon/bodies/*.inc` | 回填体 63 桶 |
| `src/raw_decomp/*.c` | 重写反编译 63 桶（19,056 函数）|
| `anchors/csp_canon_manifest.json` | 19,078 函数签名溯源 |
| `anchors/csp_canon_members.json` | 成员唯一权威表 |
| `anchors/backfill_manifest.json` | 回填逐函数账 |
| tag `archive/pre-mech-rebuild` | 重建前全量归档 |
