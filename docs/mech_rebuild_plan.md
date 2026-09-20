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
- **回填账（12,862 completed 终态）**：

| 账目 | 数量 | 含义 |
|------|------|------|
| direct | 4,995 | CSP 锚定且成员名合规（含 CSP 自由函数），体原样入基底 |
| renamed | 326 | 成员名按 old偏移→new偏移 机械改写完成 |
| needs-retranslation | 27 | 旧扁平向量模型成员（IsAllocated@0xD 等）与二进制 vptr 槽冲突——旧翻译建在错误布局上，名字迁移无意义，显式留给第 6 步 RA2MCP 重翻 |
| downgrade | 4,901 | sig=ida-proto 未锚定——降级，待 CSP 增量求解补锚 |
| no-cls | 2,256 | sig=cps 但带 `::` 名而无类锚——签名真值缺口 |
| no-body | 357 | 树内未索引到体 |

- **迁移可行性审计（机械化，终态）**：5,070 体 / 3,335 类成员令牌逐令牌对账
  新成员表——**不可迁移仅 27（0.5%）且全部显式入账**；342→107→27 的收敛
  过程中纠正了审计自身两处方法论错误（① vtable 命名位移 315 例为审计假
  阳性——回填体已是新名而审计误用旧链解释；② 新成员表静默缺行=生成器
  未并集旧 ml 链偏移，已修并重跑）。

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

## 第 6 步 RA2MCP 阶段执行记录（2026-09-20 G26 首轮）

> 纯 RA2MCP 循环：`next_batch → get_context → 语义 C++ 翻译 → replace_body →
> verify_function → mark_completed`。无自定义脚本直驱、无旧转换器路径。

### 账目

| 项 | 值 |
|---|---|
| 翻译+验证 | **18 函数**（techno.cpp 14 + building.cpp 4），verify 18/18 PASS |
| 净增 completed | **+8**（12,848 → 12,856） |
| 假完成修复 | **~10 件**（HEAD 中 completed=true 但树内体仍为伪码——vt_entry_4AC/4B0/4B4/4C4、GetTypeFlag 等；证实 HEAD 口径含假完成） |
| pending | 3,988 → 3,979 |
| issue 新增 | #135（0x708c10 出参签名不匹配）、#136（get_context member_map `_BYTE this` 缩放 bug） |

### 机制验证（本轮打通）

1. **链式成员访问**：`this->q6C4->qE1B` 经 ml 条目 `type: 'UnitTypeClass *'`
   解析，verify PASS——ml 类型字段是 cpp 侧链式事件的解析依据。
2. **偏移缩放权威**：翻译前必须跑验证器同源
   `detect_this_type + _this_mult`（0x746db0 `_BYTE *this` → 偏移 1761/1762，
   get_context member_map 报 7044/7048 是错的 → #136）。
3. **成员注册通道**：缺失偏移经 ml+mbn 双侧注册（` .omo/g26_member_check.py
   --reg`），q<HEX> 中性名 + 显式 size（字节读 size=1）。
4. **同文件批量替换**：replace_body 必须用 `0xADDR` 形态顺序执行（file:line
   形态并行调用会因行位移全部失配）。

### 语义发现（挂命名轮 + 误归属复核）

| 函数 | 发现 |
|---|---|
| TechnoClass::GetTarget (0x6f9dc0) | 实读 `owner@540`（G16 ctor 真值），IDA 名疑错 |
| TechnoClass::GetID (0x6f9db0) | 实读 `owner->relatedTagsCount@48`，IDA 名疑错 |
| TechnoClass::HasPassengers (0x70efd0) | 实读 `empLockRemaining@1284`（g17-p1 ctor+yrpp），IDA 名错 |
| TechnoClass::GetTypeFlag (0x5224e0) | `+1728`（=FootClass 尾，UnitClass own 区首）解引用 → Unit 级 byte@3784 |
| ml airstrikeTimer@432 | 与 GetTypeFlag 指针解引用矛盾，但 IsDeployed dword@432 又合 timer 语义——疑似误归属族（G8 型），待 vtable 证据定谳 |

### 已知边界（本轮如实记录）

- q 名成员（17 条 ml+mbn 注册）**尚无 hpp 声明**——techno.cpp 本就在基线编译债
  中（file build 53 errors 全为既有 hpp 债，C1003@41 行截断，未及翻译行）；
  hpp 声明补齐 = G27 首项。
- 收割脚本对 bodyless 函数（downgrade/no-cls 账）verify PASS 的机理未定界，
  G25 收割检查点已清除，重跑前须先审计（防假完成复发）。

## 下一步计划（G27，详见 docs/g27_prep.md）

1. **hpp 声明补齐**：q 名成员 17 条经 IDA→header pipeline 补进
   techno.hpp/building.hpp（解锁本轮翻译函数的编译）。
2. **RA2MCP 循环批量化**：同引擎 module 直驱 + 逐件 verify + mark
   （G24 范式），覆盖 3,979 pending 的琐碎/小函数桶（~1,278 件）。
3. **命名轮 A1**：q 名语义升级（rename_symbol 四方）+ 上表 5 项语义发现的
   vtable 证据复核。
4. **收割机理审计**：bodyless 函数 verify PASS 定界后重启 G25 收割续跑。
5. **签名缺口补锚**：downgrade 4,875 + no-cls 2,256 经 CSP 增量求解器补锚
   （已知边界 3 的落实）。


## 第 6 步实战测试报告（02869633）

以 Agent 视角实跑第 6 步闭环三件（0x473140 / 0x4E01F0 / 0x4E0700，
needs-retranslation 桶），暴露并修复 RA2MCP 缺口 9 项：

| # | 缺口 | 处置 |
|---|------|------|
| ⑥ 重翻译无入口（replace_body 只收 pending） | ✅ 新增 `reopen` 工具（completed→pending，ida_cache 复原伪码）|
| ⑦ pending 索引缓存 reopen 后不失效 | ✅ `invalidate_pending_index()` + signals mtime 入 stamp |
| ⑨ mark 无重验防护（reopen 后未过验可标记） | ✅ mark 拒绝 reopened 未过验；verify PASS 自动清除 |
| ⑧ resolve_target 地址不做归一化（0x004E01F0≠0x4e01f0） | ✅ int 归一比较 |
| #139 build/verify 同步阻塞超时 | ✅ 通用异步 job 框架（build/verify/canon_regen/csp_anchor 支持 async=true + job_status）|
| #138 get_context 不查 canon 权威表 | ✅ member_map 并入 csp-canon 源 + manifest sig/cls 溯源 |
| #137 issues_list 无过滤刷屏 | ✅ status/kind/target 过滤 + limit + summary |
| #140 member_set 无批量 | ✅ entries 数组模式 |
| 证据录入通道缺失 | ✅ `member_set` 工具（member_types 权威锚 + ml/mbn 同步）+ 生成器证据覆盖优先规则 |

### 实战沉淀的方法论
1. **G21 局部中转规则的方向性**：cache `this+N` 直写 ⇒ cpp 必须 `this->M`
   （局部 `blk[]` 双侧静默丢事件）；cache 经局部中转 ⇒ cpp 同构局部。判断依据 = cache 文本形态。
2. **证据覆盖优先**：member_types 权威锚（ctor 写图/xref 铁证）> 投票派生的
   vtable 归属——CaptureManagerClass 4-vtable 误归属被构造铁证推翻。
3. **变体类（Cls_42）成员双录**：cpp def 类名是变体时，成员证据须同时录
   canon 类与变体类，否则解析落全局。
4. **槽名考古**：vtable_signatures 缺类时，IDA 在线直读 vtable 内存
   （base+slot*4 → 函数名）补 vtable_offsets。
5. **needs-retranslation 三态分诊**：可证据覆盖（如 FoggedObject/CaptureManager
   的向量模型件）→ member_set+重翻；真实双模型冲突（如 CampaignClass
   scenario[512] vs 向量头）→ 归属 xref 裁决后再翻。

### 实战后的 RA2MCP 工具面（29 个）
sig_lookup / backfill_accounts / backfill_get / canon_regen(async) /
csp_anchor(async) / compare_parse / member_set(批量) / reopen / job_status
——第 6 步全循环（补锚→证据→重翻→验证→改名→重生成→标记→对拍账）单服务器
闭环，无绕行路径。
