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

6. **指针类型纪律（最高优先——Agent 最常见翻译错误）**：

   **规则：IDA 伪码声明 `_DWORD *v2` → C++ 翻译必须声明为指针类型
   （如 `unsigned int *v2` / `INILinkNode *v2`），禁止写成 `int v2` 后
   用强转 `*(int *)v2` 解引用。**

   **为什么这最重要**：
   - 把指针写成 `int` 会导致 CFG 提取器把 `*(int *)v2` 解析为**虚假的
     member 事件**（如 READ(member,8)/READ(member,4)），产生额外 CFG 块，
     verify 必 FAIL。
   - 正确使用指针类型后，提取器识别为**局部指针解引用 → 零事件**，
     与 IDA 侧对称，verify 自然 PASS。
   - **门控报 FAIL 时，Agent 应首先检查自己是否把指针写成了 int/整数，
     而不是认为门控出错或验证器有限制。**

   **正确示范**（INIClass::deleteKey 0x52B4D0）：
   ```
   IDA: _DWORD *v2 = (_DWORD *)*(this + 4);
        return v2 && *v2 == *(DWORD *)aP1;

   ✅ 正确 C++：
      unsigned int *v2 = this->sectionHead;
      return v2 != 0 && *v2 == *aP1;
   → CFG: 1 块, READ(member,16)+RET, PASS

   ❌ 错误 C++（导致 6 块 vs 1 块 FAIL）：
      int v2 = this->sectionHead;
      return v2 != 0 && *(int *)v2 == *(int *)aP1;
   → int 上的解引用被提取器误解析为 member/global 事件
   ```

   **判定流程**：
   1. 看伪码声明 `_DWORD *v2` / `void *v2` → C++ 用指针类型
   2. `char v2` / `int v2`（无星号）→ C++ 用对应标量类型
   3. verify FAIL 时：先用 `--verbose` 看 C++ CFG 是否多出虚假事件
   4. 虚假事件中 READ(member,N)/WRITE(member,N) 的 N 看起来像被错误
      缩放/解引用 → 检查是否有指针被写成了整数
   5. 只有确认翻译无类型错误后才考虑是验证器问题（绝大多数 FAIL
      是翻译问题，不是门控问题）

### 实战后的 RA2MCP 工具面（29 个）
sig_lookup / backfill_accounts / backfill_get / canon_regen(async) /
csp_anchor(async) / compare_parse / member_set(批量) / reopen / job_status
——第 6 步全循环（补锚→证据→重翻→验证→改名→重生成→标记→对拍账）单服务器
闭环，无绕行路径。


## 第 6 步 RA2MCP 阶段执行记录（2026-09-20 G27 第二轮）

> 承 G26 首轮。本轮 = G27 计划项 1（hpp 声明补齐，发现布局陷阱后记账挂起）
> + 项 2（RA2MCP 循环批量化）主体。会话中用户更新了 RA2MCP（#144 _BYTE 缩放
> 修复、reopen 工具、pending 索引重建），且有并行会话同步提交（基线 12,856→
> 12,653 诚实化重算为并行会话所为，非本会话回退）。

### 账目

| 项 | 值 |
|---|---|
| 翻译+验证+mark | **13 件净新增 completed**（techno 1 + building 10 + load_options 3 — 全 CFG verify PASS） |
| 假完成修复 | 1 件（0x522cb0 IsEnteringOrCapturingStructure：completed=true 但体为伪码） |
| 签名修复 | 2 件：GetGlobalValue(+int* outValue 出参，#135 收口)、CaptureBuilding(→bool(HouseClass* newOwner)，树上 Capture() 旧薄包装经查证 0x4fce80 并不调用 0x44d5d0，属早期误包装，改传 nullptr 保持可编译形状) |
| pending | 3,979（G26 末口径）→ 3,950（含并行会话改动） |
| 挂起 | IsFootprintBlocked(0x4578c0) 体已机械忠实替换、verify 差 2 个路由块（IDA goto 拼贴行/列循环 5 路由块 vs for 循环 4 块）——未 mark，留 G28 首批 |

### G27 新增机制结论（CFG 雕形秘籍，G28 直接复用）

1. **验证器 canon = ida_cache 快照伪码**，不是 get_context 的 live 反编译
   （live 会 CSE 化简：CalcDrawPos 的 0x87F8E4 vs 快照 0x886FA4、GetFireError
   的 v2 缓存消块）。翻译后以 `python tools/verify_execution_flow.py 0xADDR
   --verbose` 的 IDA 块转储为对拍基准。
2. **&& 融合粒度由括号控制**：深度 0（无括号）→ 逐条件分块；括号内 → 融合
   单块。IDA 侧按二进制基本块分块——同块内的连续测试天然融合（CanOccupyFire
   测试与 CanBeOccupied 同块消失）。用括号复刻。
3. **|| 臂失败边汇入下一臂**；IDA 二进制每跳 = 独立块。共享 ret 块用
   `((A && !B)) && !C || D` 形（arm1 融合 + && 分裂 + || 收尾）或嵌套 if 菱形。
4. **事件对称性盲区**：IDA 侧 `(#375**)this + N` cast 不产事件（#373 族），
   cpp 侧 this->X 必产事件 → 用局部中转（ownerHouse->recheckTechTree）消
   cpp 侧多余 READ；`((char*)this + 904)` cast 形式 cpp 侧同样无事件，可反向
   利用（ProgressTimer::GetValue 地址取参）。
5. **canonicalize_branch_polarity 后逐边同构**是判定本体：块数不等 = 必败；
   事件全对齐仍 FAIL 时逐边查 canonical DAG（--verbose 转储）。
6. **RA2MCP 更新后**：replace_body 对已替换（translated）函数拒绝 →
   `reopen 0xADDR` 回 pending 再改；mark 过的直接 reopen 恢复伪码重译。
7. ml 注册通道照旧：`python .omo/g26_member_check.py --reg <Class> <off> <size> <Name>`
   （本轮新增 BuildingClass q11B@283/q534@1332/q6E9@1769、LoadOptions
   q188@392/q18C@396/q3F0@1008）。

### 命名轮（随译做）

- 小驼峰局部命名全量落实（missionState/storageTypeIndex/typePtr/ownerHouse/
  gateStage/baseCoords/facingDelta 等按实际语义）。
- 语义发现挂账（G28 定谳）：BuildingClass@1332(q534) 疑为生产/工厂状态指针；
  @1769(q6E9) 疑为出售相关标志；Tiberium 数组全局 `BuildingClass_InstanceArray`
  (0xB0F4EC) 疑名错（元素带 double@160/176 + TiberiumClass 布局特征）→
  rename_symbol 四方同步待证据；0x522cb0 读 1732 与 q6C4 指针类型冲突
  （同偏移跨类双义，hpp 补声明时须裁决）。
- q204@516 落在 reloadTimer(TimeLeft) 内部——hpp 声明不可行，须改写访问
  表达式或修 TimerStruct 布局，G28 裁决。

### G27 计划项对账

| G27 项 | 状态 |
|---|---|
| 1 hpp 声明补齐 | **部分**：q204@516 与 reloadTimer 重叠、Unit 级偏移 this 归属两陷阱 → 记账挂起（见上）；q1524 族 AntiAir/AntiArmor/AntiInfantry 已有 hpp 声明无需补 |
| 2 循环批量化 | **主体完成**：13 件净增 + 雕形秘籍沉淀（吞吐受逐件 CFG 雕形成本限制，见 g28_prep 速率预估） |
| 3 命名轮 | **随译做** + 语义发现挂账（上表） |
| 4 收割机理审计 | 未动（G28 项） |
| 5 签名缺口补锚 | 未动（G28 项） |

## 第 6 步 RA2MCP 阶段执行记录（2026-09-21 G28 第三轮）

### 账目

- **净增 completed +5 → 12,662**（时点 stats 复核 pending 3,946）：
  1. `0x559E40 LoadOptions::Release`（保存游戏对话框 + WWMouse 显隐）
  2. `0x67FD20 LoadOptions_Load`（COM StgOpenStorage 读档流程）
  3. `0x559D60 LoadOptions::AddRef`（读档对话框 + 帧率保持双循环）
  4. `0x6B0300 BuildingClass::FindPlacementCells2`（三分支地基尺寸决策 + 寻路
     坐标，14 块全同构；hpp 签名补参 `(int* outCell, int inCell)`）
  5. `0x46D350 sub_46D350`（CampaignScore 虚表安装件）
- 全部走 `verify_execution_flow` PASS 后 `mark_completed`；门控（Clang AST）
  对修改文件零违规；单 TU 编译错误均为既有基线债（abstract/object/vector
  等 hpp include 顺序债），改动文件零新增错误。

### G28 新增机制结论（G29 直接复用）

1. **subs_N.cpp 旧 Task17 存根双通道抢占定位**：验证器 by-name 的
   def_pattern 会匹配存根注释行里的 `__thiscall` 伪码签名（`// IDA: void
   __thiscall sub_XXXXXX(...)`）；by_addr 又命中其 `0xADDR` 注释。清除存根时
   残留注释**不得带 `0xADDR` 样式**（先例：subs_2.cpp 46D350）。e4 类限定名
   （`E4Recv_XXX::sub_YYY`）不吃 by-name pattern（`::` 阻断前导空白匹配），
   全靠 by_addr 兜底定位 e4 文件——所以存根清扫是 e4 收割的**前置动作**。
2. **`A || B` 融合复刻共享标签块**（秘籍 2 实战验证）：IDA 的
   `LABEL_4:` 共享失败出口 = C++ `if (A || B) { LABEL_4 内容 }`，深度 0
   逐条件分块 + 共享 then 入口，0x67FD20 一次过。
3. **`*(_DWORD *)0x520` 常量地址解引用**产生 `READ(global,0x520)` 事件 ✓
   （PE 头死路径读的忠实复刻词汇；十进制 1312 渲染统一写 0x520）。
4. **WWMouse 虚调用指针形态**：`(*(void(__thiscall**)(int))(*(_DWORD*)
   g_WWMouseClass_Instance + 12))(g_WWMouseClass_Instance)` 被 C++ 提取器
   解析为具体 CALL 地址（0x622800/0x622720）+ 双 READ(global,0x887640)，
   与 IDA 侧对称（gap2 同源词汇，G23 词汇表可直接搬）。
5. **replace_body 签名处理**：new_body 首行若带函数签名会被 auto-strip，
   但**旧签名行保留**——改签名时旧签名行需手动 Edit 或 new_body 不带签名。
   尾部 `}` 闭合位置以 ASM 注释块为界，多删/多加 `}` 要对文件复核。
6. **e4 自由函数事件词汇缺口（G29 大项）**：`sub_XXX(unsigned int* a1)`
   形态的载体（addr40/addr47 等约 2,900 件）`a1[3]`/`*(a1+1)` 参数指针
   下标**不产生 READ(member,N) 事件**——需类形态 + `this->member`。受阻
   件清单 = next_batch 里 class="" 的 5 行件。可行解：e4 hpp 加最小类声明
   （E4Recv 模式扩展）或签名改 `Class*` 型参。
7. **伪码丢参警惕**：SelectWeapon(0x6f3330) 的 `v11 [esp+1Ch] [ebp+4h]`
   = 寄存器溢出的**栈参数**（target），签名渲染丢失——翻译前对照 ebp+4
   偏移识别丢弃参数，hpp 签名要补。

### G28 挂账（转 G29）

- **#145 IsFootprintBlocked(0x4578c0) 形状不可达**：事件层全对齐
  （STEP3(0) OK：440 槽 SetZ + 双读 q520），但 IDA 用 `goto LABEL_12` +
  共享 RET（LABEL_13 双入边 / RET1 三入边），C++ 无 goto 时 4 return 语句
  = 4 RET 块 vs IDA 2 个，恒差 2 块。需验证器 canonical 增加「同返回值 RET
  合并」规则。姊妹件 CheckOverlapWithOthers(0x44e3a0) 现存 goto 译法被
  reject gate 拦，同款阻塞。
- **SelectWeapon/CreateDestructionEffect/ValidatePlacement** 三大件
  （132/216/223 行）未动——SelectWeapon 需先补 target 参数。
- **BuildingClass@36 objectTypeFlags 误名**：实为 occupant/驻留体指针
  （`*(this+9)` 被 cast TechnoClass* 并 WhatAmI==6 判建筑）。ml 名来自
  ObjectClass 继承面，rename 影响 ObjectClass 全族——G29 裁决。
- **BuildingTypeClass@0x1703 = PlaceAnywhere 定谳**（0x464AC0 的
  `this[5891] || ValidatePath` 语义 = PlaceAnywhere=yes 跳过路径验证）；
  该件真实归属 BuildingTypeClass 而非 canon 的 AbstractClass，跨类调用
  （ValidatePath 是 TechnoType 层 vt+168）+ 归属改名一起做。
- g28_prep 的 hpp 裁决两项（q204@516 / 1732 双义）与收割机理审计、
  签名缺口补锚未动，顺延 G29。

## G28.5 复核（2026-09-21，MCP/源码更新后）

用户更新后逐项实测 G28 挂账：

| 挂账项 | 状态 |
|---|---|
| #145 RET 合并词汇 | **已解决**（1bb979ec 容忍规则）→ IsFootprintBlocked(0x4578c0) + CheckOverlapWithOthers(0x44e3a0) 双双 verify PASS 收割，completed **12,664** |
| 存根抢占定位 | **已解决**（_generated 62,245 行清除 d6a015c6 + 定位器 e4 优先）——0x401FB0 实测直接定位 e4 文件 |
| e4 自由函数事件词汇缺口 | **仍在**：0x401FB0 C++ 侧 `a1[3]` 仍零事件（READ(member,12) 缺失）；e4 无 ObjectClass 声明，方案 B 需先建 e4 类声明基建 |
| 0x464AC0 PlaceAnywhere 归属 | 仍在：member_map 键 23564(=5891×4) 未解析，canon 仍归 AbstractClass——G29 裁决 |

**新技巧（sticky-or）**：`goto X`（提前退出跳过置位）可用「循环条件自终止 + 出口 `v = v || cond` 永或」消除——CheckOverlapWithOthers 的 `while(this==v4){v4=v4[12]; if(!v4)break;} v6=v6||v4!=0` 7 块全同构。适用于同款"链条遍历+粘性标志"形状。

**工具面确认**：`addr_lookup` 支持全局变量反查（G28 时用 grep 绕远，以后先用它）。

## G29 基建轮（2026-09-21，canon 溯源审计 + MCP 工具五件套）

### canon 溯源审计（用户质询「canon 的来源是否可信」的定量回答）

| 层 | 结论 |
|---|---|
| member_types 证据层 | 52,656 偏移中 **83.3%（43,885）带 evidence 字段**（member_set/ctor 写图/xref 证明）——可信 |
| member_types 无证据层 | **8,771 条（16.7%）** 为 CSP 纪元批量同步残留，跨 1,003 类 |
| 命名冲突 | 无证据条目与 member_lookup 现名冲突 **453 处**；其中 **176 处** member_lookup 带裁定 src（g16-ctor-adjudicated 等） |
| **实锤案例** | TechnoClass@536/@540：member_types=`displayProductionTo`/`Owner`（旧、无证据）vs member_lookup=`focus`/`owner`（G16 ctor 写图终审）——**canon 链未吸收 G16** |
| 字节噪声 | class_db 观察并集含字节粒度噪声（ObjectClass 171 成员中 31 个非 4 对齐无名条目）→ 生成为 qXXX 占位符 |

**修复（全部机械，gen_cpp_canon.py）**：

1. **四层命名优先级**：①member_types 带 evidence（二进制真值）②member_lookup 带裁定 src（`adjudic|g1[5-9]|write-map|ctor-adjud` 正则）③语义名胜占位名（`field_0x`/`qXXX` 模式判定）④原填充序兜底。修复后 canon 成员表 @536=focus/@540=owner/@532=controlGroup/@544=cloakState（G16 真值全吸收）。
2. **字节噪声过滤**：无证据/无裁定/无名/非 4 对齐的偏移不再发射（padding 补洞）。
3. **编译修复九连**（classes.hpp 从未编译过的欠账一次清偿）：
   - 类拓扑排序（基类先于派生；Kahn + 弹出门控——scheduled≠popped，堆按字母序弹出会让晚名字基类排在早名字派生类后，两轮才抓到）
   - 基类解析单源化（bases_map 一次解析，拓扑图与发射共用——分离解析曾致错边）
   - canon 类与 math/enums 头重名 → 数学/枚举头获胜（CellStruct/ColorStruct/GameMode）
   - Windows/CRT typedef 名（GUID/UINT/LCID…）永不前置声明、缺定义基类走 minimal-vfptr（t14 先例）、Win32 宏名消歧（CreateDialog* 族）、成员/方法重名去重、模板名不与 struct 冲突
   - 探针 `_canon_probe.cpp`（含 classes.hpp + main）**MSVC /std:c++20 0 error**
4. **canon_regen 三段重跑**：rewrite 4,588 函数/29,614 处；backfill 账目重收敛（direct 4,836/renamed 293/downgrade 4,887/no-cls 2,244/no-body 352/needs-retranslation 52）。

### MCP 工具五件套（29→35，用户点名的卡手点全部落地）

| 工具 | 能力 |
|---|---|
| `verify_function` +verbose/+auto_mark | verbose 返回双侧 CFG 块级转储 + STEP3(0) 缺失事件（不再逃出 MCP 跑 --verbose）；auto_mark PASS 即写 completed+note，FAIL 跳过 |
| `get_context` +globals_map | MEMORY[0x]/dword_XXX/g_Name → 名字 + `// data: 0xADDR` 的 hpp 声明位置（file:line），不用再 grep |
| `get_context` +receiver | til 类型化 `T *this` → member_lookup 可解析的类 → 成员形态翻译指引（e4 自由函数 a1 词汇缺口的主通道） |
| `set_signature`（新） | cpp def 行改写 + hpp 声明同步（按 // 0xADDR 定位，跳过生成目录）；成员形态自动补载体 include（e4/gap2 → csp_canon/classes.hpp；E4Recv → 对应 _e4.hpp）；改名仍走 rename_symbol |
| `sweep_stubs`（新） | 死存根批量清扫：stub 文件中 // 0xADDR 指向 completed 或非 stub 文件有真体注解的块整体移除（46D350 误命中治理）；dry_run 实测 58 文件/46 死块 |
| `harvest_loop`（新） | 琐碎桶机械收割：pending 且 raw_decomp 重写体=单条 return（无 this）→ replace→verify→PASS 标记/FAIL 回滚；dry_run 实测 pool 345/试 12 全 DRY |
| `resolve_target` 修复 | 0x%X vs 0x%08X int 归一兜底（旧版只精确匹配必 miss） |

### e4 词汇缺口的最终答案

`a1[3]` 零事件的解 = **成员形态翻译**（E4Recv 先例的推广）：def 改 `Cls::Name()`、a1→隐式 this、体内 this->Name——验证器 class_name→member_name_to_off 全链已通。载体：csp_canon/classes.hpp 现已编译干净（本节），set_signature 自动 include，get_context 给 receiver 指引。canon 表给成员名，载体给类型化 receiver——缺口闭合。

## G29 基建轮工具实测（2026-09-21，五件套首跑）

| 工具 | 实测结果 |
|---|---|
| sweep_stubs | ✓ dry 预览 58 文件/16 死块（_generated 残留），待实跑 |
| harvest_loop | ⚠️ **半可用**：自动链路（定位→replace→verify→mark）跑通 +3（COM thunk 委托件质量合格），但发现 2 bug（#146 写体错位→幻影 completed、#147 载体丢参→编译错误），均已手工修复 + reconcile 0 phantom |
| set_signature | ⚠️ #148：e4 pending 形态（签名行+独立 `{` 行）定位错行——把 ` {` 行当定义行替换 |
| verify_function verbose/auto_mark | 未单测（harvest 内部已用同管线） |
| get_context member_map | ✓ canon 成员名已注入（csp-canon source） |

**关键架构确认（e4 自由函数词汇缺口根因）**：efv_cpp_events 源码自述
"free function (class_name=None): member step skipped"——**成员事件只认
this-relative 访问**，参数型 receiver（`a1->X`）架构上不产事件。故方案 B
（改参数类型）无效，唯一解 = 生成器产出类形态载体（canon 有类的函数挂到
类成员/E4Recv 类下，receiver 用 this）。classes.hpp 0 error 已铺好地基。
**注意**：csp_canon/classes.hpp 与 e4/e4_globals.hpp 目前不能同 TU 共存
（CRTGlobal/vt_* 双声明类型冲突，e4_globals 既有债）——类形态载体迁转时
须处理 include 策略。

### G29.1 工具 bug 修复（2026-09-21，实测反馈 #146-148 全闭环）

| bug | 根因 | 修复 |
|---|---|---|
| #146 harvest 写体错位 | 循环用首轮 pending 索引的陈旧行号；第一件收割缩短文件后 marker 搜索漂进下一个函数块 | 写入前 `resolve_target` 重解析 + **地址注解守卫**（块上方 `// 0xADDR` 必须 == target，不一致即中止）；`replace_pseudocode` 同加守卫 |
| #147 载体丢参 | 模板只看体是单 return，不管裸标识符是否在保留的 def 行声明 | return 语句中的裸小写标识符（非 g_/PascalCase/关键字）必须出现在 def 行，否则跳过 |
| #148 set_signature 错行 | e4 pending 形态「签名行+独立 `{` 行」，`_enclosing_function` 把 `{` 行当定义行 | 独立 `{` 行上溯一行取真签名；set_signature 加 fname-in-old_def 守卫（目标行不含函数名即拒绝改写） |
| signals.json 撕裂读 | run_verify/mark 双写者非原子写，并发读者看到半写文件（"Extra data"） | `write_signals_atomic`（tmp+os.replace）全 5 处替换 + signals() 读失败 250ms 重试 |
| harvest 同步超时 | 每件 verify 10-30s×N | `async=true` 走 job 框架 |

**验证**：受控实跑 harvest 4/4 PASS 全部落点正确（PostMessageA/_getmbcp 等逐一对账注解）；reconcile 幻影=0；#146-148 已 resolve。

### G29.2 e4_globals.hpp 生成器债清偿（classes.hpp 同 TU 障碍清除）

- **根因**：`gen_e4_materialize.py` E1 refresh 路径把全局名与声明行列表比对（恒真），旧声明永远重挂——**e4_globals.hpp 累积 11,977 条同名不同型重复声明**（15,460 行声明 / 3,483 唯一名）。
- **修复**：生成器 refresh 改按名去重（新run优先）+ 逐名唯一兜底；现存文件外科去重 + 1 处 `_DWORD*` IDA-ism 修正。
- **结果**：`csp_canon/classes.hpp` + `e4/e4_globals.hpp` **同 TU 编译 0 error / exit 0**（探针产出 .obj）——e4 类形态迁转的 include 策略不再有障碍。
- 另：_generated 六个 core 文件 33K 行死存根删除经事后审计 **206/206 地址全部满足 sweep 语义**（completed 或非 stub 文件有真体注解）——并行会话合法产物，一并入库；本会话 sweep_stubs 实跑清除剩余 128 块，dry 复查 0 残留。
