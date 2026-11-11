# CW3 编译墙 —— B/C/D 五大结构性缺口修复与全量重跑

日期：2026-11-12  
输入工单：`report_bcd_census.md`（B/C/D CF = 1,180，88.2% 的 CF 量）  
代码改动：仅 `tools/decomp_sys/`（`decompile.py` / `passes.py` / `pseudo.py` / `era_types.h` / 新增 `run_cw3.py`）。`src/` 零改动，`checker.py` 零改动，`minclass_solver.py` 零改动。

---

## 0. 结论速览

| 指标 | 数值 |
|---|---:|
| CW3 靶集（B/C/D CF，冻结于普查快照） | **1,180**（B 82 / C 535 / D 563） |
| 同靶集 **pre-CW3 代码基线**（诚实对照，no-ledger 重跑） | 98 compiled（8.3%）；1,082 CF |
| **CW3 后同一靶集** | **309 compiled（26.2%）**；871 CF |
| **净转换（真实增量）** | **+211**（B +22 / C +158 / D +31） |
| 基线已编译 → 当前 CF 的回归 | **0** |
| 台账口径转换（含陈旧账本已转换件） | 301→309；CF 首错族显著位移 |
| 规则 3/4 自检违规 | 601 函数/6,329 条 → **482 函数/2,722 条**（未弱化 checker） |
| 发布层编译率投影（普查同口径） | B 19.0%→**50.0%** / C 29.8%→**64.6%** / D 11.2%→**19.2%** |
| 已对拍 MATCH 回归抽样 | 30/30 + 17/17 保持 MATCH；R7-75 9/9 保持 MISMATCH（1 件为既有 CF，非本轮回归） |

一句话：五个结构性缺口全部落地；CW3 自身的真实净增为 **+211 件**（对 1,180 件的 17.9pp），
三层发布口径编译率全部显著上移，零回归；残余 871 件集中在 F7 调用点实参（C2664 212）、
F10 成员视图（C2227/C2036/C2228/C2039）与 F8 伪码残留（C2065/C2059）。

---

## 1. 方法（为什么有“真实增量”）

普查快照（`66285923f`，pre-CW2）的 CF 账本有 66.7% 末次判定早于 CW2；直接拿
“普查 CF 1,180 → 现在编译”做增量会把 CW2/NOCLS 的转换算到 CW3 头上。因此本轮做了三层对照：

1. **逐档样本探针**（5 件/档）：`cw3_probe.py` 直接调用 `batch_run.run_part`，把
   `append_results` / `record_ledger` 打桩为 no-op，不写账本、不写 results。
2. **同靶集 pre-CW3 基线**（诚实对照）：`git checkout <fix>^ -- decomp_sys 四文件`
   后用同一 probe 会话跑完全部 1,180 件（`cw3_baseline.py` → `cw3_baseline.json`）。
3. **CW3 全量重跑**：正式代码下 `run_cw3.py` 以 20 件/part 跑两轮（run1 为初版，
   run2 为回归修复后的最终账本），每 part 单独 git commit；`run2`（tag `cw3b`）为最终数字。

三个口径的数字互相对齐：run2 的台账转换 = 309；基线 = 98；真实增量 = 211；回归 = 0。

---

## 2. 五个缺口：实现与证据

### CW3-1 param 类型通道倒置（F1）

**根因**：`derive_signature` 只要 registry `fn["params"]` 非空就整表采用，而 signals 的
param 是全 `int` 占位；export proto 的真实指针类型只在 registry params 为空时回退使用。
`0x42BCA0` proto 明写 `_DWORD *a4,int *a5`，生成 `int p3,int p4` → `*p4` C2100。

**修复**（`decompile.py:derive_signature`）：
- 逐槽合并：registry 类型属于 int 家族且 proto 对应槽为指针（`*` 结尾）→ 采用 proto；
  其它 registry 拼写（bool/float/类名/数组）原样保留。
- 阿字数严格对齐；`this` 槽剥离。对 signals 把 receiver 计成 p0 的 thiscall 家族
  （proto 显式 this + registry = proto+1）：proto 显式类型对到 `params[0..]`，
  丢弃尾部幽灵槽（`pass_param_rename` 本就按显式参数映射 a2..aN）。
- 未改动 `_solver_domain_params`（R6 先例保留，仍在其后运行）。

**证据**：`0x42BCA0` 由 C2100 转为 MISMATCH；`0x491D90`（11 个 int 占位、proto 两个
`unsigned __int8 *` + `char *`）由 C2100 转为 MISMATCH（202B vs 234B，形态层残差）。

### CW3-2 模板 vector/dynamic-vector 壳（F2）

**根因**：①`pass_era_normalize` 的 vftable 正则不支持模板实参（`<` 处失配）；
②body 的 `__pad_0` / `m_1` 与 hpp 的 `__pad_000` / `m001` 命名分裂（C2039）；
③`*(void **)&this->m_1[3]` 被 `_CAST_DEREF_MEM` 单星正则漏掉，随后
`pass_member_addr_view` 把 `&this->m_1` 改成 `m001` 并丢掉外层的指针 cast →
`*this->m001[3]`（char 解引用，C2100）；④`__pad_0` 名称未编码进
`_member_record_for`，进入 offset-name 死路。

**修复**（`passes.py` / `pseudo.py` / `era_types.h`）：
- vftable 正则允许每段的平衡 `<...>`：`VectorClass<int>::`vftable'` → `0`。
- `_member_record_for` 识别 `__pad_H` 为偏移编码（与 `m_H` 同权）。
- `_CAST_DEREF_MEM` 捕获完整 cast 拼写（含多 star / 多词），外层 deref 去掉一个
  star 作为值类型；`m_1[3]` 直接落到 offset-true 的 `m004[0]` 视图。
- `ClassView.add_array` 同偏移多形态合并：指针元素 spelling 优先（读指针 + 写 0 同时合法）。
- `pseudo._parse_stmts` / `pass_era_normalize` 的 return 包裹去掉表达式尾部 `;`。

**证据**：5/5 样本（0x49FCE0 / 0x40BC60 / 0x40D850 / 0x420630 / 0x477BE0）
C2018/C2065/C2275/C2039/C2100 → **全部编译**（MATCH=0，均 MISMATCH，属形态层）。
模板 vftable 族（89 件 B/C/D）与 `__pad_0` C2039 族（39 件）同步收敛。

### CW3-3 全局对象/数组成员类型供给（F5）

**根因**：①`_GLOBAL_RE` 不含 `stru_`，`stru_887598.lineTrailer` 永不改名，而
`_chain_ok` 明确拒绝 `stru_` 基座；②`_named_mem_sub` 手工扫描尾部 `[idx]` 却不消费它，
生成 `(...)[31][31]`（C2109）；③register 全局类型常是 `uint32_t/void*`，成员反查
（`global_member_offset`）对 `barrelFacing` 这类多偏移名返回 None；④标量全局被
`G[e]` 下标（C2109/C2036）；⑤值类型类局部（`Rect v34;`）的 `.X` 从未登记 shell 成员。

**修复**（`passes.py`）：
- `_GLOBAL_RE` 扩展 `stru/off`（IDA 前缀全族）；`_named_mem_sub` 的 idx 进入捕获组，
  渲染消费原始 `[idx]`。
- 成员反查三级：reverse index（唯一偏移）→ IDA 全局类型（`anchors/ida_global_types.json`）
  指向的类 → 全局名派生类（`g_`/`_Array`/尾号剥离）；命中后按
  `((T *)((char *)&G + off))[idx]` 做 4 字节等价的偏移真值访问。
- 新增 global-array 升级：本体内只被下标、且无裸值使用的标量全局 →
  `extern <elem> G[];`（IDA `T[]` 提供元素，否则 registry 标量）。
- 值类型类局部（`Rect v34`）纳入 dot-member 视图登记，shell 获得真实成员。
- `pass_era_normalize` 的 `(int)((x))` 去括号规则不再吞掉指针 cast 前的 `(int)`
  （`(int)((char **)&G)[1]` 保持 int 上下文，C2446 修复）。

**证据**：0x550000 `Game::loadCampaignData`（`g_MissionQueueFrame.random[31][31]`
C2109 → MISMATCH）、0x4756F0（`FootClass_Array.barrelFacing` C2228 → MISMATCH）、
0x42E1C0（`DataGlobal_887598.lineTrailer` C2228 → MISMATCH）3/5 编译；另两件残余属
F10 成员数组视图（`Occupants[0]`）与 `G[idx].member` on void* 全局，已记账不在本轮范围。

### CW3-4 窄宏 store 的 lvalue 展开（F6）

**根因**：①`pass_macro_residual_sweep` 的 store 跳过检查取在 `MACRO(` 的 `(` 之后
（而不是闭合 `)` 之后），且不允许空白，导致 embedded store `LOBYTE(v5) = ...` 被改写为
非 lvalue `((v5) & 0xFF) = ...`（C2106）；②`pass_intrinsics_lobyte` 对指针局部
（`_DWORD *v1`）也发 masked-dword merge（C2296）；③`WORD2`/`BYTE4` 未在 era_types 定义，
被 `pass_unknown_symbols` 声明成 `extern int WORD2(...)`。

**修复**：
- residual sweep 先配平闭合括号，再在 `)` 之后匹配 `\s*[+\-*/|&^%]?=(?!=)`；store 原样保留
  （era_types 的 `LOBYTE`/`WORD2` 都是可寻址 lvalue 宏）。
- `pass_intrinsics_lobyte`：指针声明局部保持宏 store（不生成整数 merge）。
- `era_types.h` 补 `WORD2`（+4 word）/`BYTE4`（+4 byte）；residual sweep 元数据补
  `WORD2=(2,4)`、`BYTE4=(1,4)`；unknown-symbol 关键字集合同步。
- 顺带：`pass_era_normalize` 把 VC6 不支持的 `NNNLL/ULL` 字面量转为 `(__int64)NNN`
  （C2059 bad suffix on number）。

**证据**：0x439080 `TechnoClass::checkRange`（embedded LOBYTE ×2）C2106 → MISMATCH；
0x420E90 `AirstrikeClass::UpdateAll`（指针局部 HIBYTE/BYTE）C2296 → MISMATCH；
0x480510 保持 MISMATCH；另两件（0x448160 / 0x42A5B0）首错为 F10 成员视图，非窄宏。

### CW3-5 qualified-call 伪接收者（F3 / Math）

**根因**：`pass_callees` 只要 registry 有 `cls` 就把 `Class::Method(args)` 当成员调用。
`Math` 是 size=0/no-vtable 的 helper 伪类（`cc=unknown`，1 个 double 参数），
`Math::RoundToInt(expr)` 被渲染为 `((Math *)(expr))->RoundToInt()`（C2440，61 件首错）。

**修复**（`passes.py:pass_callees`）：
- 接收者证据判定：size=0/no-vtable 且 registry `cc=unknown` 的类强制 free 通道
  → `extern ... Math__RoundToInt(double); Math__RoundToInt(expr)`。
- free 通道的 stub 参数：arg-form 优先（pointer/array → `void *`），随后才采信 registry
  的 **非指针** 非 int 家族标量拼写（double/short/float），保证 Math 的 double 槽不被
  降级成 int，同时不把 `X *const` 塞进 registry `int *` 槽（回归修复）。
- `((T **)x)[i]` 下标元素识别为指针（`.vfptr[K]` 表达式实参）。

**证据**：5/5 样本（0x40DB70 / 0x40F410 / 0x427490 / 0x41C380 / 0x7760B0）
C2440/C2039 → **全部编译**（均 MISMATCH）。顺带修复 `tagTEXTMETRICA` 真实 56B 布局
（`tmAveCharWidth` 等 20 个成员，0x7760B0 的 C2039）。

---

## 3. 逐档验证（5 件/档，最终代码）

| 档 | 样本 | 修复前首错 | 修复后 |
|---|---|---|---|
| CW3-1 param | 0x42BCA0 | C2100 | **MISMATCH** |
|  | 0x491D90 | C2100 | **MISMATCH** |
|  | 0x4CBBA0 | C2664 | C2664（F7 调用点，非 param 通道） |
|  | 0x53FBD0 | C2664 | C2664（`queueSendPacket` F7） |
|  | 0x4C9B20 | C2109 | C2109（成员数组视图 F10） |
| CW3-2 模板 | 0x49FCE0 / 0x40BC60 / 0x40D850 / 0x420630 / 0x477BE0 | C2065/C2100/C2275 | **5/5 MISMATCH** |
| CW3-3 全局 | 0x550000 / 0x4756F0 / 0x42E1C0 | C2109/C2228/C2228 | **3/3 MISMATCH**（档内另两件 0x453E20/0x484180 属 F10） |
| CW3-4 窄宏 | 0x439080 / 0x420E90 / 0x480510 | C2106/C2296/MISMATCH | **3/3 MISMATCH**（0x448160/0x42A5B0 属 F10） |
| CW3-5 Math | 0x40DB70 / 0x40F410 / 0x427490 / 0x41C380 / 0x7760B0 | C2440/C2039 | **5/5 MISMATCH** |

统一备注：CW3 的验收指标是**编译**；“MISMATCH”表示已进入字节对拍（形态层残差），
不再计入编译墙。禁止用“编译通过即通过”替代对拍指标。

---

## 4. 全量重跑（1,180 件）

### 4.1 最终账本（run2 / tag `cw3b`，59 parts，每 part commit）

| 层 | 靶集 | MATCH | MISMATCH | COMPILE_FAIL | 编译率 |
|---|---:|---:|---:|---:|---:|
| B | 82 | 0 | 26 | 56 | **31.7%** |
| C | 535 | 1 | 234 | 300 | **43.9%** |
| D | 563 | 0 | 48 | 515 | **8.5%** |
| **合计** | **1,180** | **1** | **308** | **871** | **26.2%** |

### 4.2 诚实基线对照（同一靶集，pre-CW3 代码，no-ledger）

| 层 | 基线编译 | CW3 后编译 | 净增 |
|---|---:|---:|---:|
| B | 4/82（4.9%） | 26/82（31.7%） | **+22** |
| C | 77/535（14.4%） | 235/535（43.9%） | **+158** |
| D | 17/563（3.0%） | 48/563（8.5%） | **+31** |
| **合计** | **98/1,180（8.3%）** | **309/1,180（26.2%）** | **+211** |

转移矩阵：`(编译→编译) 98`、`(CF→编译) 211`、`(CF→CF) 871`、**(编译→CF) 0**。

### 4.3 发布层编译率投影（`report_census.md` 同口径 84/675/599 样本）

| 层 | 基线 | CW3 后 | 变化 |
|---|---:|---:|---:|
| B | 19.0% | **50.0%** | +31.0pp |
| C | 29.8% | **64.6%** | +34.8pp |
| D | 11.2% | **19.2%** | +8.0pp |

### 4.4 首错族位移（B/C/D 全靶集，基线 → 最终）

| 首错码 | 基线 | 最终 | 说明 |
|---|---:|---:|---|
| C2065 | 157 | **83** | 模板/全局/`fild`/`MEMORY` 混合，F2/F3 已吃掉模板与全局子族 |
| C2109 | 80 | **35** | 全局数组升级生效；残余为成员数组视图（`Occupants[0]` 类） |
| C2039 | 67 | **25** | `__pad_0`/`m_1` 模板族收敛 |
| C2228 | 67 | **31** | 全局 named-member 收敛；残余为 `G[idx].member` 与成员指针视图 |
| C2146 | 58 | **34** | hpp 单行声明残差（CW2 未覆盖件） |
| C2143 | 57 | **14** | 文本损坏族继续下降 |
| C2018 | 39 | **2** | 模板 vftable 正则 |
| C2106 | 31 | **9** | embedded store span 修复 |
| C2100 | 34 | **14** | param 指针通道 |
| C2440 | 150 | **126** | Math 61 件已清零；残余为局部 decl/指针拼写 |
| C2664 | 147 | **212** | 首错栈上移：低层错误修好后暴露的 F7 调用点实参族 |
| C2036 | 32 | **33** | `void*` unknown size（`G[idx].member` on void* 全局） |

> 首错族会随修复向下位移（低层错误修好后下一条错误才成为首错），因此**绝对编译增量**
> （+211）是唯一可信的产线指标；上表的下降项只用于归因。

### 4.5 规则红线

- `checker.py` 未改（六规则/自检口径原样）。
- 靶集规则 3/4 违规：基线 **601 函数 / 6,329 条** → 最终 **482 函数 / 2,722 条**
  （下降 57%）；未以任何方式豁免或弱化。
- 每 part `rule_violations` 照实写入 results/账本。

---

## 5. 零回归抽样

| 抽样 | 数量 | 期望 | 实际 |
|---|---:|---|---|
| 历史 MATCH（`r6_regress30_batch.json`，小函数） | 30 | 30 MATCH | **30/30 MATCH** |
| 历史 MATCH（新增 ≥64B 大函数分位抽样） | 17 | 17 MATCH | **17/17 MATCH** |
| R7-75 已编译 MISMATCH（`r6_r75_sample10.json`） | 10 | 10 MISMATCH | **9/9 保持**（0x402330 为既有 CF，非本轮回归；已用 pre-CW3 代码复现） |
| 全靶集基线回退检测 | 1,180 | 0 回退 | **0 回退**（初版曾有 5 件回退，已在 `606458ffc` 回归修复后清零） |

回归修复内容（`606458ffc`）：free 通道实参槽改为 arg-form 优先（pointer/array → `void *`），
registry **指针** 类型不再覆盖实参形态（`AbstractClass__SaveLoad_Prefix_0` / `SHA1__Transform`
C2664）；`.vfptr[K]` 保留索引；`((T **)x)[i]` 判定为指针。

---

## 6. 残余与下一步（871 件）

| 族 | 首错 | 件数 | 归属 / 下一步 |
|---|---|---:|---|
| F7 调用点实参 harmonizer | C2664 + C2665/C2660/C2198 | 212 + 32 | 下一轮最高杠杆：标量→指针槽 site 包装、`const void*` 槽、CRT 原型（`memset`/`atexit`/`swprintf`）、fn-ptr arity |
| 指针拼写/局部 decl | C2440 + C2446 + C2296 | 126+18+23 | 局部 decl vs RHS 基类型、`int*`↔`unsigned int*`、指针局部位运算 |
| 伪码残留 | C2065 + C2059 + C2100/2064 | 83+14+14+14 | `MEMORY[0x]`、`asc_`、`fild`、裸 `?`、mangled 名 |
| 成员指针视图 | C2227 + C2036 + C2228 | 44+33+31 | 成员被降成标量后 `->`；`void*` 全局的 `[idx].member`；`G[idx]` rank |
| 成员数组视图 | C2109 + C2106 | 35+9 | `Occupants[0]` 类（成员声明为标量/char 却下标） |
| hpp 声明残余 | C2146 + C2143 + C2377 + C2653 | 34+14+25+11 | `LONG`/`INT_PTR` 重定义（era_types 与 extern 冲突）、单行声明、`const uintN_t` |
| ret/元数/this | C2562 + C4716 + C2673 + C2380 | 9+6+13+6 | ret 真值/补齐 return/free body 的 this |
| 其他 | — | ~50 | 长尾 |

D 层（563 件，编译率 8.5%）是下一轮主战场：其残余多为大函数上的 F7 + F10 + F8 复合。

---

## 7. 工件与复现

- 修复提交：
  - `13714c487` — 五大结构性修复（4 文件，383+/30-）
  - `606458ffc` — 回归修复（arg-form 指针槽 / vfptr 索引 / 二重指针下标）
- 全量重跑：`run1` = 59 parts（tag `cw3`，初版），`run2` = 59 parts（tag `cw3b`，最终账本），
  每 part 一个 commit，含 part 输出、part batch、`results.jsonl`、`status.json`、`timings.jsonl`。
- 靶集：`.omo/agents/decomp_batch/batch_cw3_bcd.json`（1,180，B 82/C 535/D 563）。
- 驱动：`tools/decomp_sys/run_cw3.py`；无账本探针：`.omo/agents/decomp_batch/cw3_probe.py`；
  诚实基线：`.omo/agents/decomp_batch/cw3_baseline.py` + `.omo/decomp_batch/cw3_baseline.json`。
- 档位样本：`.omo/agents/decomp_batch/cw3_probe_{g1_param,g2_tmpl,g3_glob,g4_narrow,g5_math}.json`。
- 输出目录：`.omo/decomp_batch/cw3_run2/p00..p58/`（最终），`.omo/decomp_batch/cw3/final3_*/`（档位探针）。

复现：

```bash
# 档位探针（不写账本）
python .omo/agents/decomp_batch/cw3_probe.py \
  --batch .omo/agents/decomp_batch/cw3_probe_g5_math.json \
  --out .omo/decomp_batch/cw3/repro_g5

# 全量重跑（20 件/part，每 part commit）
python tools/decomp_sys/run_cw3.py --run cw3_run2 --tag cw3b
```

---

## 8. 局限与诚实声明

1. **1,180 是“普查快照的 CF 集”**，不是当前全池 CF。台账转换 309 中包含 98 件
   pre-CW3 已编译件（陈旧账本）；真实增量以 4.2 的 +211 为准。
2. **D 层编译率仍低（8.5%）**：本轮五个缺口按设计主要打 C 层（+158）；D 层的大函数
   残余是 F7/F10/F8 复合，需要独立一轮。
3. **MISMATCH 308 + MATCH 1**：本轮只承诺编译面；形态层（codegen_shape/regalloc/
   frame_sched）未动。1 件 MATCH 为顺带收益。
4. **规则违规仍有 482 函数**（自检口径）：checker 的 R3“成员未在 hpp 声明”等条目在
   shell 不完整时照实报告，属已知残余，未被豁免。
5. **回归修复的代价**：free 通道对 registry 指针类型改用 arg-form，可能让少数“真正
   需要 registry 指针类型”的 stub 退化为 `void*`（decl-only，代码生成中性）；本轮
   全靶集未观察到编译回退（0 回归）。
