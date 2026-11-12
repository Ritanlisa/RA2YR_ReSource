# W 系列工单恢复：NG 3,746 确定性分桶与 ROI 排序

> 生成日期：2026-11-12
> 性质：**工单报告（只读普查的收口）**。不跑 batch_run、不写账本、不碰 `src/`、不碰 `minclass_solver.py`。
> 数据来源：前任普查产物 `.omo/agents/decomp_batch/w_census_rows.json`（3,746 NG 行全量分类）
> + `.omo/codegen_match/status.json`（账本）+ 各 part 目录的 `orig_*/ours_*.json` 字节工件
> + `anchors/signed_default_ledger.json` + `tools/codegen_match/diffasm.py`（只 import，不修改）。
> 统计脚本：`.omo/agents/decomp_batch/w_report_stats.py`（本报告所有数字均可复现）。

---

## 0. 结论摘要

1. **NG 池的 52.5%（1,968/3,746）是单维确定性差异**，不是源形/regalloc 随机性：
   `D_RELOC 555 + D_CONST_FOLD 736 + D_CONST_FP 273 + D_IMM 322 + D_RET_ARITY 82`。
2. **W1（D_RELOC 555）已被闭式定位为 `diffasm` 规范化缺陷，不是代码生成缺陷**。
   555/555 行的指令流与原始二进制逐条同构（仅地址/符号键不同，见 `classify_func` 的
   `reloc_identical=True`），而差异全部来自 4 个可枚举的 canon 缺陷。**修 canon 无需重编译**，
   预计 **+539~555 → OK**（占全池 14.4%~14.8%），是唯一"零 codegen 风险"的大额杠杆。
3. **W2-FP（736+273=1,009）是同一个机制的两种表现**：FP 常量对象/除法在生成器与编译器两层被
   折叠/倒数化。已用 era CL 6.00.8447 **实测**：`/O2 /Gy` 下 `x/60.0 → fmul[1/60]`，
   加 `/Op → fdiv[60.0]`（与原始字节同形）；`literal*literal` 在两种 flag 下都折叠为立即数，
   故 FOLD 族必须**保留 .rdata 常量对象**（不是加 `/Op` 能解决的）。预计 **+981~1,008**。
4. **W4 符号类（22 件首差 / 166 件含符号指令）不可用 `signed_default_ledger` 直接翻**：
   22 件里只有 2 件（4 个实体）落在台账 6,917 函数覆盖内；CW4 的**函数级** `(int)` cast 试验
   **3/184 = 1.6%** 命中。正确粒度是**实体级**（成员/全局/栈槽/参数），触发证据是二进制 jcc
   极性而不是"diff 失败就翻"（详见 §4）。
5. 不要重跑 CW4 已证伪的变体族（语句交换/常量表达式/循环/窄 cast/短路交换，全 0 命中）；
   不要批量改 `ScalarDtor` 名（AGENTS.md 已记 +627 回归）。

---

## 1. 数据与口径

### 1.1 前任产物清单

| 文件 | 内容 | 修订注意 |
|---|---|---|
| `w_census.py` | 分类器（capstone 对齐 + 单维标签） | 权威 |
| `w_census_rows.json` | 3,746 行 × {cls, detail, flags 计数, n_o/n_b, part_dir, artifact_verdict} | **权威口径** |
| `w_index.json` | addr → 各 root 的 part 目录索引 | 权威 |
| `w_samples.txt` | 各桶 6-14 件并排反汇编 + 生成源码 | **早期快照**：桶 n 与最终 rows 不同（W4 26 vs 22、D_RELOC 598 vs 555、D_IMM 260 vs 322、R_STRUCTURAL 1247 vs 1133），样本仅作形态示例，数量以 rows 为准 |
| `w_struct.txt` | R_STRUCTURAL 抽样 14 件 | 早期快照（n=1133 一致，仅供参考） |
| `_tmp_flags.py` | 多标签统计脚本 | — |

### 1.2 账本状态与陈旧行

`status.json`：**NG 3,746 / OK 2,653 / COMPILE_FAIL 2,086 / PENDING 31**（总计 8,516）。

普查按 part 目录的 `part_report.json` 复核出 **45 行"账本说 NG、工件实际 MATCH"**：

- 按类：`D_RELOC 25` + `D_IMM 20`
- 按 root：`r8_ng_census4 42` + `r8_probeE4 3`（都是 R8 期重跑留下的新旧 verdict 漂移）

另有 **2 行 NO_ARTIFACT**（无任何非 CW5 工件）：`0x4cadb0 Math::ArcTan2_Table`、`0x4cade0 Math::ArcTan`。

> 这 45 行属于**账本陈旧**而非真实差异，任何 W 工单开工前应先做一次"仅复核、不编译"的收口
> （+45 OK）。

### 1.3 两种口径必须分开看

- **首差类（partition）**：每行恰好一类，12 类合计 3,746（见 §2 表 1）。
- **flag 存在（多标签）**：一行可同时出现多个维度（如 736 件 FOLD 同时带 `D_CONST_FP`+`R_STRUCTURAL`）。
  维度数分布：`0 维 557 / 1 维 717 / 2 维 329 / 3 维 1,247 / 4 维 327 / 5 维 250 / 6 维 250 / 7 维 63 / 8 维 6`。

  → **只有 717 行（19.1%）是单因行**；其余 2,472 行（66.0%）需要组合修复。
  报告中的"预计转化"均按"该桶单因 + 该机制修复后连带消失的伪标签"估算，并单列纯单因行数。

---

## 2. 总分桶表

表 1：首差类（每行一类，合计 3,746）

| 桶 | 首差件数 | 占比 | any-flag | 纯单因 | 典型首差（实测计数） | 修复通道 | 自动化 | 预计转化 |
|---|---:|---:|---:|---:|---|---|---|---:|
| **D_RELOC**（W1 符号键） | **555** | 14.8% | 0（整函数同构） | 555 | 指令流 100% 同构；`DATA:DATA:0x…` 双补丁 263、`__real@` 249、addend 16、已 MATCH 25 | `diffasm` canon 4 缺陷（§3.1） | **高（离线、免重编译）** | **539~555**¹ |
| **D_CONST_FOLD**（FP 折叠） | **736** | 19.6% | 736 | 0* | `fld [deg2rad]; fmul [45/60/90]; fstp [g]` → 双立即数写；735/736 同一模板 | 保留 .rdata 常量对象（§3.2） | **高** | **735** |
| **D_CONST_FP**（FP 倒数） | **273** | 7.3% | 1,132（FP 族） | 246 | `fld [gA]; fdiv [60.0]; fstp [gB]` → `fmul [1/60]` | `/Op` 或除数符号化（§3.2） | **高（probe 已证）** | **246~273** |
| **D_IMM** | **322** | 8.6% | 1,029 | 107 | 字面量 155 / `[esp+N]` 帧 87 / 成员偏移 42 / vtable 存入 38 | 4 子族分流（§3.6） | 中 | 107~200 |
| **D_RET_ARITY** | **82** | 2.2% | 345 | 79 | `ret 4\|''`、`ret 8\|''`（空体丢 arity） | 空体保 arity + CC（§3.3） | **高** | **79~82** |
| **W2_WIDTH**（宽度） | **87** | 2.3% | 639 | 24 | `mov mem 1->4` 35、`4->1` 19、reg-width 14 | IG/SG 证据 + hpp 成员宽度（§3.5） | 中（IG 覆盖 28/87） | 24~50 |
| **W1_TYPE**（类型键） | **49** | 1.3% | 629 | 27 | deref-level 36、lea↔mov 5、operand-kind 6 | 逐站点指针层级（§3.6） | 中低 | 27~49 |
| **W4_SIGNED**（符号） | **22** | 0.6% | 166 | 12 | `jl\|jb` 20（orig 有符号 / ours 无符号）、`shr\|sar` 2 | 实体级 signedness（§4） | 中低（台账覆盖 2/22） | 12~19 |
| **R_BRANCH** | **276** | 7.4% | 1,145 | 0 | `jcc complement jne\|je` 88、`je\|je` 75 | CW4 已试；残余需块级证据 | 低 | ≤10 |
| **R_REGALLOC** | **209** | 5.6% | 1,224 | 12 | `ebx\|esi`、`eax,[esp+4]\|ecx,[esp+4]` | 编译器分配；CW4 源形族 0 命中 | 低 | ≤12 |
| **R_STRUCTURAL** | **1,133** | 30.2% | 2,618 | 210 | insert/delete 885；其中 **stub 形 126** | stub 形单列（§3.4）；其余结构 | 低（stub 子族高） | 126 + 少量 |
| NO_ARTIFACT | 2 | 0.05% | — | — | 无工件（Math ArcTan/ArcTan2） | 重导出即可 | — | — |

\* FOLD 的 736 行虽然都带 3 个 flag，但三个 flag 是同一处 4→3 指令差异在对齐器里的连带产物；一处修复即全部消失（见 §3.2）。

¹ W1 的 539 = W1R-a(263)+W1R-b(249)+W1R-d(2)+陈旧复核(25)；再加 W1R-c(addend 16) 即 555。

**关键交叉量**：

- W 轴（W1/W2/W4）任一口径：**1,010 行**（27.0%），其中纯单 W 仅 **63 行**，W+非 W 维度 **942 行**。
- → W 轴不能当独立战场；它的行大多同时含 D/R 维度，必须先做确定性族。

---

## 3. 逐桶工单

### 3.1 W1-R：D_RELOC 555 件 —— 已闭式定位为 `diffasm` 规范化缺陷（P0）

**证据等级：实证（字节 + canon 模拟 + 常量值核对）。**

#### 3.1.1 核心事实

- `w_census_rows.json` 中 555/555 行：`reloc_identical=True`、`n_o==n_b`、
  detail 全部为 `sequence identical modulo reloc/addr`（`w_census.py::classify_func` 的整函数判定：
  mnemonic 序列与去地址后的操作数序列完全相等）。
- 但账本/part_report 判 MISMATCH。用 `diffasm.Side.normalize()` 重放这 555 行，首差 canon 分布：

| 子族 | 件数 | 机制 | 例 |
|---|---:|---|---|
| **operand-scope 双补丁** | **263** | `Side.normalize()` 的 `rel_here` 是**按指令**收集 reloc；同一条指令的 IMM 操作数会再次消费 MEM 操作数的 DIR32，把 `_patch_imm` 打进已替换的字符串 | orig `mov dword ptr [DATA:0x87E278], 0` vs ours `mov dword ptr [DATA:DATA:0x87E278x87E278], 0`（0x403eb0） |
| **`__real@` 字面量符号** | **249** | MSVC6 把 FP 常量符号化为 `__real@8@<20 hex>`，payload = **80-bit x87 extended 大端**；`data_key_canon` 不识别，orig 侧是 `DATA:0x7E1718` | orig `fld qword ptr [DATA:0x7E1718]` vs ours `fld qword ptr [DATA:_real@8@3fff8000000000000000]`（0x403d30） |
| **DIR32 addend 丢失** | **16** | ours 的符号是基地址、addend 写在 4 字节字段里；diffasm 把字段整体 mask，addend 丢失 | orig `[DATA:0x8871E0]` vs ours `DSurface_ViewBounds(=0x886FA0)`，字段 addend=**0x240**（0x50d9e0） |
| 已 MATCH（账本陈旧） | 25 | 工件重新对拍已过 | — |
| MEM base/index + DIR32 | 2 | `[ecx + disp]` / `[ecx*4 + disp]` 且 disp 是 reloc；`normalize()` 的 MEM 分支只处理 `base==0 && index==0` | orig `[ecx + 0x89e000]` vs ours `[ecx]`（0x46d490、0x5e8d90） |

**addend 实证**（ours 原始 4 字节字段）：

```
0x50d9e0  reloc@1 DSurface_ViewBounds  addend=0x240  → 0x886FA0+0x240 = 0x8871E0 ✓ orig
0x466280  reloc@13 DataGlobal_89DE34   addend=0x4    → 0x89DE34+0x4   = 0x89DE38 ✓ orig
0x41d260  reloc@3 g_INI_DefaultBuffer  addend=0xC    → 0x889F64+0xC   = 0x889F70 ✓ orig
0x53ca50  reloc@7 DataGlobal_A9FF80    addend=0x4    → 0xA9FF80+0x4   = 0xA9FF84 ✓ orig
```

**`__real@` 值核对：248/249 完全相等**（把 20-hex payload 按 x87 extended 解出 double bits，
再读 orig 引用地址处的 qword 比对）。唯一不等的是 0x48acf0（正则取错了同指令的另一个
`[0x...]` 操作数），不是机制反例。

> 结论：**D_RELOC 的 555 件没有一件是真正的代码差异**；16 件"相邻全局"也是 addend 折叠，
> 2 件是 MEM base 形式未归一。修复后预期 **555 全部 MATCH**（其中 25 件只需重新对拍）。

#### 3.1.2 工单 W1-R（4 个独立修复 + 1 次复核）

| 编号 | 修改点 | 内容 | 影响件数 |
|---|---|---|---:|
| W1R-a | `tools/codegen_match/diffasm.py::Side.normalize` | reloc 按**操作数字段偏移**消费，而不是按指令；同一 reloc offset 只 patch/mask 一次。顺带修复"非 reloc 字段被 mask"（当前 imm 0 字段也被通配，比较被放松） | 263 |
| W1R-b | 同上 + `data_key_canon` | `__real@4@…/__real@8@…` 解码为 `FP:0x<bits>`；orig 侧对 `.rdata` 引用地址读 qword/dword 生成同一 key。`@8@` 的 20 hex 是 x87 extended（实测 248/249 值相等） | 249 |
| W1R-c | 同上 | DIR32 key = `resolve(symbol) + addend(字段原值)`；addend≠0 时不得把字段整体丢弃后再单独 mask | 16 |
| W1R-d | 同上（MEM 分支） | `base!=0 \\|\\| index!=0` 且带 DIR32 reloc 时：patch disp 文本并 mask 字段（`[ecx + 0x89e000]` / `[ecx*4 + 0xa8da90]`） | 2 |
| W1R-e | 仅复核 | 45 件账本陈旧行（25 D_RELOC + 20 D_IMM）重新对拍 | +45 |

**验收门（必须全过）**：

1. 2,653 件 OK 全量重新对拍 **0 退化**（W1R-a 会收紧 mask，理论上可能暴露旧假 MATCH；
   若出现，逐件归因，不允许"因为改 canon 而放行"）。
2. 16 件 addend / 2 件 MEM 行在**修复前**必须 MISMATCH、修复后 MATCH（正反双向）。
3. 负样本：两个不同全局（0x886FA0 vs 0x8871E0）仍必须 MISMATCH；两个不同 FP 常量
   （1.5 vs 0.5）仍必须 MISMATCH。
4. 真实代码差异样本（例如 0x46d490 若不含 MEM 修复）不得被误判为 MATCH。

**风险**：`diffasm` 是"验证器"，不是被验证对象。任何修改都必须使比较**更严格**（a/d 是收紧；
b/c 是补全等价语义），并在提交说明里逐条给出正反样本。

**成本**：0.5~1 天；**免重编译**（工件已落盘）。

---

### 3.2 W2-F：FP 常量族 1,009 件（736 FOLD + 273 RECIP）—— 一个"常量对象"机制（P1）

**证据等级：实证（原始字节 + 生成源码 + era CL 双 flag 编译实验）。**

#### 3.2.1 FOLD（736）

同一 4 指令模板占 **735/736**：

```
ORIG: fld qword [deg2rad]; fmul qword [45.0|60.0|90.0]; fstp qword [gX]; ret   (19B)
OURS: mov dword [gX], <lo>; mov dword [gX+4], <hi>; ret                        (21B)
源码: DataGlobal_X = 0.0174532925199433 * 45.0;
```

常量值实测（读 `D:\RA2MD\gamemd.exe`）：

| 操作数 | 值 | 件数 |
|---|---|---:|
| op1 | `0x3f91df46a2529d39` = deg2rad（π/180） | **735** |
| op1 异常 | `0x4080000000000000` = 512.0 | 1 |
| op2 | `0x4046800000000000` = 45.0 | 246 |
| op2 | `0x4056800000000000` = 90.0 | 246 |
| op2 | `0x404e000000000000` = 60.0 | 243 |
| op2 异常 | `0x3f8999999999999a` = 0.0125 | 1 |

即 **735 件 = deg2rad × {45,60,90}**。ours 的立即数是 `0.0174532925199433 * K` 的折叠结果；
而 pseudo 里那个十进制字面量比真常量**低 1 ULP**（`0x…3a` vs 真值 `0x…39`），
即便不折叠也不是原字节。

**根因判定**：原始源码引用的是 **.rdata 里的常量对象**（250 个不同地址、同一 value = 各 TU 的
deg2rad 副本），pseudo 把它物化成十进制字面量，编译器再折叠。

**实验**（era CL 6.00.8447 与 `.vc6` RTM 两个版本结果一致）：

| 源码 | `/O2 /Gy` | `/O2 /Gy /Op` |
|---|---|---|
| `g = gA / 60.0;` | `fmul [1/60]` | **`fdiv [60.0]`** ← 与原始同形 |
| `g = 0.017453292519943295 * 45.0;` | 双立即数 | **双立即数（仍折叠）** |

→ `/Op` 只能修 RECIP，**修不了 FOLD**；FOLD 必须让表达式里出现**内存对象**。

#### 3.2.2 RECIP（273）

```
ORIG: fld qword [gA]; fdiv qword [60.0]; fstp qword [gB]; ret
OURS: fld qword [gA]; fmul qword [__real@8@3ff988888888888888 (=1/60)]; fstp qword [gB]; ret
源码: DataGlobal_B = DataGlobal_A / 60.0;
```

246/273 是纯 `fdiv|fmul reciprocal`。两种修法：

- **(a) 全局 `/Op`**：一行编译 flag，立竿见影；但影响所有 FP 函数，**必须 A/B 回归**。
- **(b) 除数符号化**（推荐）：把字面量除数换成 `extern const double g_Sixty;`，编译器无法倒数化
  → 自然出 `fdiv`。与 FOLD 共用同一套"FP 常量对象"设施，风险局部化。

#### 3.2.3 工单 W2-F

| 编号 | 修改点 | 内容 |
|---|---|---|
| W2F-a | 新增 `tools/decomp_sys/fp_consts.py`（或并入 `passes.py`） | 从 `anchors/insn_value_types.json` / W2 `float\|double` 表建立 **FP 常量对象表**（value bits → symbol），至少覆盖 deg2rad / 45 / 60 / 90 / 1/60 |
| W2F-b | `passes.py` 新增 `pass_fp_const_object` | 当 `ex.disasm_lines` 的 orig 侧出现 `fld/fmul/fdiv qword [img]`，且 ours 是"双立即数写 / fmul 倒数"两形态时：把 pseudo 表达式的字面量替换为常量对象符号（`g_Deg2Rad * g_45` / `gA / g_Sixty`），禁止动手写 `src/` |
| W2F-c | `gen_hpp`/unit 头 | 为用到的常量对象发 `extern const double`（精确 bit 值，用 17 位十进制或位模式注释） |
| W2F-d | 编译 flag（可选 A/B） | `batch_run` 的 era CL 命令加 `/Op`，与 (b) 二选一；A/B 结论入报告 |

**验收门**：
1. 编译探针（本报告已做）：两种修法各自产出目标 opcode 序列。
2. 试点 20 件 FOLD + 20 件 RECIP → 40/40 MATCH。
3. 历史 OK 抽样 100（含 FP 函数 ≥20）→ 100/100 不回退；若走 `/Op`，回归面扩大到全 2,653 OK。
4. 常量子集：735 件必须共用同一 deg2rad 符号，不允许 735 个不同 extern（符号爆炸 + 可读性）。

**成本**：1~2 天；**预计 +735（FOLD）+ 246~273（RECIP）**。

---

### 3.3 W3-RET：D_RET_ARITY 82 件（P2）

**证据等级：实证（样本 6/6 同形）。**

| 子类 | 件数 | 形态 |
|---|---:|---|
| ours 丢 ret imm | 22 | orig `ret 4`/`ret 8` vs ours `ret`（源：`void __cdecl nullsub_N(int p0) {}` / `void FootClass::vt_entry_XXXX(){}`） |
| 两侧都有 imm 但不等 | 60 | `ret 4\|8`（29）、`ret 4\|0xc`（5）、`ret 8\|0`（7）… |

全部落在 `cc_mismatch` 病理。根因是**空体/存根函数的 arity 在生成侧被丢弃**（源码声明 `(int p0)`
但 ours 反汇编是 `ret`，说明壳里没带参数/没按 stdcall 清栈）。

工单：

| 编号 | 修改点 | 内容 |
|---|---|---|
| W3R-a | `decompile.py::derive_signature` | 空体（1~2 指令）函数：**保留 proto/registry 的形参个数与调用约定**，即使变量未使用 |
| W3R-b | 同上 | `ret imm` 反推 CC：`ret N` + N=4×k → `__stdcall`/`__thiscall` 家族；`ret` → `__cdecl`。以 orig 指令为准，而非 proto 猜测 |
| W3R-c | 生成器 | `void f(...) {}` 不得降级为 `void f()`；`__stdcall` 成员空体应输出 `ret 4` 而非 `ret` |

**验收**：82 件试点全跑 → 79 纯单因必过；3 件多因允许仍 MISMATCH（但 ret 维度必须消失）。
**成本**：0.5 天；**预计 +79~82**。

---

### 3.4 W4-STUB：R_STRUCTURAL 内的存根形状 126 件（P3）

**证据等级：实证（6/6 样本同形）。**

`R_STRUCTURAL` 1,133 件里最大的**可机械识别子族**是"空体/存根形状"：
`n_o<=2` 且 `3<=n_b<=10`，共 **126 件**（122 属 R_STRUCTURAL，其余 4 件分散）。

样本：

```
orig: ret            / ret 8
ours: push ecx; mov eax, [esp]; pop ecx; ret        ← "返回第一个参数"的伪形
```

以及：

```
orig: mov eax,[ecx]; jmp [eax+0xc]                  ← tail-call
ours: mov eax,[ecx]; push ecx; call [eax+0xc]; ret  ← 多 push ecx，且未尾调用
```

名字分布：`other 88 / COMStub 25 / StubReturn 7 / vt_entry 3 / sub_ 3`。

工单：

| 编号 | 修改点 | 内容 |
|---|---|---|
| W4S-a | `pseudo` / `passes.py` | 空体（pseudo 只有 `return result;` 且 `result` 未初始化）→ 按 **orig ret imm** 生成 `return 0;` / 空体，禁止生成"返回 p0"的 `mov eax,[esp]` 形 |
| W4S-b | 同上 | `return callee(...)` 且形参/CC 完全匹配时，允许 VC6 的尾调用 `jmp`；当前多出的 `push ecx` 说明实参个数/this 传递有偏差，先修 arity |
| W4S-c | 校验 | 以 `n_o<=2 && n_b>n_o` 为筛选器，产出 126 件批次；逐 part 提交 |

**验收**：126 件里 `n_o=1 → n_b=4` 的 42+ 件应全过；`n_o=2` 的 tail-call 件允许部分留在残余。
**成本**：1 天；**预计 +100~126**。

---

### 3.5 W2-W：W2_WIDTH 87 件首差 / 639 件含宽度指令（P4）

**证据等级：实证（首差形态）；证据覆盖有限。**

首差形态：

| 形态 | 件数 |
|---|---:|
| `mov mem 1->4` | 35 |
| `mov mem 4->1` | 19 |
| `mov mem 2->4` | 8 |
| `mov mem 2->1` | 4 |
| 其它 mem（4->8 2、4->2 1、1->2 1） | 4 |
| width-ext（`movzx\|movsx`） | 3 |
| reg-width（`ebx,eax\|bl,al`、`xor eax,eax\|ax,ax`） | 14 |

典型样本：

- `0x487150 FootClass::checkTerrainSpeed`：orig `inc word ptr [ecx+eax*2+0x7c]` vs ours `inc byte ptr [eax+ecx+0x7c]`
  —— **宽度 + 缩放同时错**（成员元素类型是 `short[]`，ours 当 `char*`）。
- `0x4e01c0 DynamicVector::queueMission`：orig `mov al,[ecx+0xc]` vs ours `mov eax,[ecx+0xc]`
  —— `IsInitialized` 应为 `unsigned char`（CW4 §5 已记为"成员宽度表"工单）。
- `0x4349b0 FontClass::GetPixelData`：orig `test eax,eax` vs ours `test ax,ax`。

现有证据通道覆盖（按函数地址）：

| 证据文件 | 条目 | 函数 | 覆盖 NG 行 | W2 首差覆盖 |
|---|---:|---:|---:|---:|
| `insn_granularity_types.json`（成员/全局部分寄存器） | 8,119 | 3,865 | 486 | **28/87** |
| `slot_granularity_types.json`（栈槽） | 2,533 | 1,176 | 59 | 0/87 |
| `insn_value_types.json`（movzx/movsx 指针目标） | 1,552 | 824 | 67 | 3/87 |

工单：

| 编号 | 修改点 | 内容 |
|---|---|---|
| W2W-a | `registry.py` / `gen_hpp.py` | 把 IG/SG 的 (cls,off)→width 真正用于**成员声明宽度**（当前 IG 主要进 registry，未覆盖的成员仍是 dword 占位） |
| W2W-b | `decompile.py` | 栈槽 S: entity 宽度 → 局部变量声明（`unsigned char/short`），供 `[esp+N]`/`inc mem` 形态 |
| W2W-c | 复用 CW4 的 `V_MICRO_*` 只读探针 | 宽度错误**不做**源形试错（CW4 已证伪），只走类型层 |

**验收**：87 件里 24 件纯单因全过；IG 覆盖的 28 件优先；其余登记为"宽度证据缺口"。
**成本**：1~2 天；**预计 +24~50**。

---

### 3.6 W1-T + D_IMM：类型键 49 件 + 标量操作数差 322 件（P5）

#### W1_T 形态（49）

| 形态 | 件数 | 例 |
|---|---:|---|
| deref-level（memcount 0↔1） | **36** | `0x407480 AudioList::GetNextEntry`：orig `mov eax,ecx; sub eax,[ecx+8]` vs ours `mov eax,[ecx+8]; sub eax,ecx`（同一表达式的源形不同，产生不同中间值） |
| lea↔mov（地址 vs 值） | 5 | `0x4b4ff0 DropListClass::KillFocus` 等 |
| operand-kind（reg↔mem） | 6 | `0x4e24a0 Time::GetElapsedMS`：orig `call dword ptr [0x7e1530]` vs ours **`call 5`**（全局函数指针被物化成小立即数 → 真缺陷） |
| element-scale | 1 | — |

> `call 5` / `call 0` 形态是**生成器把间接调用目标物化成常数**，属确定性缺陷，优先单独修。

#### D_IMM 322 的 4 个子族（首差文本模式）

| 子族 | 件数 | 形态 | 归属 |
|---|---:|---|---|
| 字面量立即数 | **155** | `…, 0xbd1e0\|0x17`；107 件是整函数"仅立即数不同" | 立即数宽度/符号扩展（确定性） |
| `[esp+N]` 帧位移 | **87** | `esp, 0xc\|esp, 8`、`[esp+4]\|[esp+8]` | 帧布局（局部变量个数/宽度）→ 部分与 W3/W4-STUB 重叠 |
| 成员偏移 | **42** | `[ecx+0x194]\|[ecx+0x198]`、`[ecx+0xc]\|[ecx+0x10]` | 成员偏移差 4 → W1/W2 类型层 |
| **vtable/地址存入** | **38** | orig `mov [esi], 0x7e180c` vs ours `mov [esi], 0` | **vtable 安装丢失（语义缺陷）** |

**vtable 存入子族必须单列**：`0x40bc60 _VectorClass_PAVTechnoClass::QueryInterface` 的生成源码是
`this->m000 = 0;`，而 orig 是 `mov dword ptr [esi], 0x7e180c`。这不是字节级小差，而是
**重建的构造函数/初始化函数没有安装 vtable**（运行期行为错误）。修复：当 orig 首差是
`.rdata` 内的 vtable 地址、ours 为 0 时，从 `anchors/rtti_vtable_class.json` /
`vtable_slot_authority.json` 反查类 → 发 `this->vfptr = &VTBL_Class;`。38 件，确定性高。

工单：

| 编号 | 内容 | 件数 |
|---|---|---:|
| W1T-a | 间接调用目标物化（`call 5`/`call 0`）→ 全局函数指针符号 | ~3（全池扫描可扩） |
| W1T-b | deref-level 36 件逐站点：按 orig 的 `mov/sub` 序还原"先加载后比较"的中间值形态 | 36 |
| W1T-c | `lea↔mov` 5 件：地址 vs 值（`&m[i]` vs `m[i]`） | 5 |
| W3I-a | D_IMM 字面量子族：VC6 立即数宽度/符号（`mov al,0xff` vs `mov eax,0xffffffff` 类） | 107~155 |
| W3I-b | vtable 安装（见上） | **38** |
| W3I-c | `[esp+N]` 帧位移：并入 W3/W4-STUB，不单独立项 | 87（重叠） |

**预计**：W1T 27~49；D_IMM 107~200。**成本**：2 天。

---

### 3.7 W4-S：signedness 22 件首差（P6）→ 见 §4 专项复核

**预计 +12~19**；方法与粒度见 §4。

---

### 3.8 R_* 残余 1,618 件（P7，最后）

| 桶 | 件数 | 形态 | 立场 |
|---|---:|---|---|
| R_STRUCTURAL（除 stub 126） | ~1,007 | insert/delete 885（多因）、`push\|sub` 63、`sub\|mov` 42、`jmp\|mov` 36 | CW4 已证伪源形族；需逐件结构证据，ROI 低 |
| R_BRANCH | 276 | `jne\|je` 88、`je\|je` 75、`jl\|jl` 21… | CW4 JCC 族 313 件已回填；残余是块序/提前返回，非单一 jcc 翻转 |
| R_REGALLOC | 209 | `ebx\|esi` 等 | 编译器分配；CW4 order/micro 族 3/627 命中（0.5%），不投入 |

**唯一例外**：R_STRUCTURAL 里 `mov eax,0` / `ret` 的 `POINTER_NULLED`/`RET_VOID_STUB` 小族可在
W4-STUB 工单里顺带处理（已在 §3.4 筛选中覆盖）。

---

## 4. 特别复核：W4 符号类的翻转粒度

### 4.1 实测事实（3 条）

1. **CW4 的函数级试验是失败的**：`V_MICRO_SIGNED_CMP`（在比较表达式上插 `(int)` cast）
   在 184 件上试验 → **MATCH 3 / MISMATCH 162 / COMPILE_FAIL 19**（1.6%）。
   3 件命中：`0x53a0e0 Weapon_Helper`、`0x422b80 TerrainClass::ClearAnimationLinkFlags`、
   `0x748fd0 HouseClass::ClearStatArray`；且均**未回填**（CW4 报告 §5 自述"根因是类型层，
   body cast 只是等价源形"）。
2. **本桶的符号差异方向是单向的**：22 件首差里 **20 件是 orig 有符号 / ours 无符号**
   （`jl|jb` 11、`jle|jbe` 4、`jge|jae` 4、`jg|ja` 1），其余 2 件是 `shr|sar`。
   即：**我们的声明把本应有符号的类型写成了无符号（或反之）**，是声明问题，不是比较写法问题。
3. **台账覆盖几乎为零**：22 件首差里只有 **2 件**（`0x485060 Cell::IsValidHeight`、
   `0x624810 DynamicVector::GrowCapacity`）在 `signed_default_ledger` 有实体，合计 4 个
   （3×`EAX:185060/18624810` + 1×`RET:485060`），且 `chosen==alt` **0/4**。

样本证据（`w_samples.txt`）：

| 地址 | orig | ours | 生成源码 | 应翻实体 |
|---|---|---|---|---|
| 0x422b80 | `jle` | `jbe` | `for (i=0; i<g_AnimClassCount; ++i)` | `G:<g_AnimClassCount>` → signed |
| 0x483610 | `shr` | `sar` | `(this->m140 >> 8) & 1` | `M:483610:this:0x140` → unsigned |
| 0x4867b0 | `jl` | `jb` | `v1 = this->m038; v1 >= g …` | `M:…:0x38` 或 `G:` → signed |
| 0x748fd0 | `jl` | `jb` | `unsigned int*` 元素比较 | 容器元素/成员 → signed |

### 4.2 24,596 条 alt 台账的用法审计（`anchors/signed_default_ledger.json`）

台账本体：

| 项 | 值 |
|---|---|
| `entities` | **24,596** |
| 结构 | `{ent, default(signed int/char/short), alt(unsigned), chosen, domain_size}` |
| `chosen==alt` | **4,791 (19.5%)**；其余 19,805 仍是 signed default |
| 实体种类（含翻/未翻） | EAX 15,743 (62)；S 2,646 (2,546)；M 2,479 (1,905)；P 1,795 (47)；GS 1,444 (5)；RET 284 (32)；PP 146 (146)；GP 43 (42)；G 9 (2)；T 7 (4) |
| 覆盖函数 | **6,917 / 19,067** |

**审计结论：粒度正确（实体级），但"通路"没有接通，且与本桶不匹配。**

| # | 缺陷 | 证据（file:line） | 影响 |
|---|---|---|---|
| A | **标量签名的 ledger 决策被丢弃**：`_domain_answer()` 对 2 元 primitive 域返回 `(chosen,"ledger")`，但调用点紧接着 `if not ans[0].endswith("*"): continue`——只有"答案是类指针"才消费，符号对永远到不了生成侧 | `tools/decomp_sys/decompile.py:337-358`（`_domain_answer`）、`:384-386`（指针过滤） | 24,596 条 alt 对**函数体/参数标量**实际是死数据 |
| B | **成员声明从不翻**：`emit_members(rec, psize, sp, ledger, log)` 收下 `ledger` 但函数体内**从未调用 `ledger_flip`**（段内 `ledger` 出现次数 = 1，仅形参）；只有 `emit_methods` 对 vtable 槽声明的 `RET:`/`P:` 调 `ledger_flip` | `tools/decomp_sys/gen_hpp.py:154-165`（`ledger_flip`）、`:250`（`emit_members` 形参）、`:349/357`（唯一两处调用） | 2,479 条 `M:` 实体（其中 1,905 已翻）**没有进入 hpp 成员类型** |
| C | **覆盖不交集**：台账由 minclass 求解器池（6,917 函数）生成；W4 首差 22 件里 20 件不在池内 | `w_report_stats.py` §5 实测 | 不能把 W4 工单建立在台账上 |
| D | **`usage` 语义错误**：meta 写"if codegen diff fails on signed-jcc/idiv/cdq, flip ent to alt first"——这是**盲试**，没有二进制证据；CW4 照此做了函数级盲试 → 1.6% | `signed_default_ledger.json` meta | 盲翻会引入无证据的全局类型变更，违反项目"禁止统计推断通道"裁决 |

### 4.3 正确的 W4 机制（按实体翻 + 二进制证据）

**粒度裁决：按实体翻（entity-level），不按函数翻；函数级 cast 只允许作为探针，不得回填。**

执行步骤（新 pass，建议 `pass_signed_entity`，不写 `src/`）：

1. **取比较站点**：从 `ex.disasm_lines`（orig 反汇编）取 `cmp/test + jcc` 对。
2. **判符号**：jcc 属 `L/LE/G/GE` → 该站点比较必须有符号；`B/BE/A/AE` → 无符号。
   `sar/shr`、`idiv/div`、`movsx/movzx`、`cdq` 同理（成对判定）。
3. **解析操作数实体**（沿用现有 key 格式，`insn_granularity_types.json` 已用同一套）：
   - `[this+off]` → `M:<fn>:this:<off>`
   - 绝对 `[0xADDR]` → `G:ADDR`（或 `GP:ADDR:addend` / `GS:…`）
   - `[ebp/esp+N]` → `S:<fn>:var_X`
   - 形参 → `P:<fn>:k`；返回 → `RET:<fn>`
   - 纯值站点 → `EAX:<fn>:<useaddr>`
4. **翻转**：只翻"有 ≥1 站点支持、且无站点矛盾"的实体；**矛盾 → 保留原状并记账**（不做多数投票）。
5. **再生成 → 编译 → diffasm**；同一实体被多个函数共享时，必须整批重生成（hpp 是共享的）。

**为什么不能按函数翻**：

- 语义上：符号性是**类型属性**；函数内 cast 只改变该处比较，成员/全局声明仍是错的，
  其他函数继续错，且 `movzx/movsx`/`sar/shr` 这类**加载/移位宽度**根本不受比较 cast 影响
  （22 件里 2 件 `shr|sar` 就属此列）。
- 实证上：函数级 cast 184 件只中 3 件（1.6%），且 3 件都是"声明层 unsigned"的个案。

**验收**：12 件纯单因优先；22 件全跑，要求"符号维度消失"（后继差异允许存在）；
2,653 OK 回归 0 退化（成员类型是共享的，翻转可能影响其他函数 → 必须全量回归）。

**预计 +12~19；成本 2~3 天**（实体抽取 1 天 + 冲突仲裁/回归 1~2 天）。

---

## 5. W 系列执行顺序（按 ROI）

| P | 工单 | 件数 | 机制 | 成本 | 预计转化 | 依赖/门 |
|---|---|---:|---|---:|---:|---|
| **P0** | **W1-R**（diffasm canon） | 555 | 4 个 canon 缺陷；免重编译 | 0.5~1 d | **539~555** | 2,653 OK 0 退化 + 正反样本 |
| **P1** | **W2-F**（FP 常量对象） | 1,009 | deg2rad×{45/60/90} 符号化 + 除数符号化/`/Op` | 1~2 d | **981~1,008** | era CL 探针已过；40 件试点 40/40 |
| **P2** | **W3-RET**（ret arity） | 82 | 空体保 arity + `ret imm` 反推 CC | 0.5 d | 79~82 | 82 件试点 |
| **P3** | **W4-STUB**（存根形状） | 126 | `n_o<=2` 生成形（`ret`/`jmp`） | 1 d | 100~126 | 126 件批次 |
| **P4** | **W2-W**（宽度） | 87 | IG/SG 成员/栈槽宽度 → hpp/局部 | 1~2 d | 24~50 | 28 件有 IG 证据者优先 |
| **P5** | **W1-T + D_IMM** | 49+322 | 间接调用物化、vtable 安装 38、字面量 107 | 2 d | 134~249 | vtable 38 件单列验收 |
| **P6** | **W4-S**（signedness） | 22 | 实体级 jcc 极性（§4.3） | 2~3 d | 12~19 | 0 冲突才翻；全量回归 |
| **P7** | R_* 残余 | 1,618 | 结构/分支/regalloc | 逐件 | ≤30 | 只有 P0-P6 完成后才投入 |

**累计（P0-P6，按行去重上界）**：约 **1,869~2,089 行 = 全池 49.9%~55.8%**。
**其中 P0+P1 两项就覆盖 1,520~1,563 行（40.6%~41.7%），且都是确定性、可离线验证的。**

### 5.1 前置收口（P-1，0.5 天）

- 45 件陈旧行（25 D_RELOC + 20 D_IMM）重新对拍 → 预期 +45 OK。
- 2 件 `NO_ARTIFACT`（Math::ArcTan/ArcTan2）：重新导出/生成即可。
- 该收口**不涉及任何代码修改**，应与 P0 一起做，因为它会改变 P0 的基数（555 → 530 真实首差）。
- **计数约定**：P-1 的 45 件**已包含在** P0/P5 的区间内（P0 的 539 含 25 件 RELOC 陈旧行；
  P5 的 D_IMM 上限含 20 件 IMM 陈旧行），§5 累计不再另加，避免重复计数。

---

## 6. 验证协议（不得弱化）

1. **W1-R 的修改是验证器修改**：必须附加正反样本（§3.1.2 验收门 2-4），并在报告中给出
   修改前后的 canon 对照；禁止"为了让数字变好而放宽 key"。
   FP 常量按值 key 属于"等价语义"（链接器常量池身份无关），但必须记录"两个不同常量仍不等"的负样本。
2. **W2-F 的常量对象必须用精确 bit 值**（deg2rad = `0x3f91df46a2529d39`，不是
   `3.141592653589793/180` 的重算式），否则又会出现 1 ULP 漂移。
3. **所有批量修复必须先 20 件试点 → 单 part 提交 → 独立回归**（AGENTS 六步纪律 + CW4 先例）。
4. **共享声明（成员/全局/CC）的修改必须全量回归 2,653 OK**，不能只跑本桶。
5. **账本只由正常生成器 + 对拍通道写入**；本报告不写账本，P0 的 re-verify 也必须走正常通道。

---

## 7. 复现命令

```bash
# 前任普查（只读）
python .omo/agents/decomp_batch/w_census.py          # 产出 w_census_rows.json

# 本报告的统计（只读；会 import diffasm 但不修改）
python .omo/agents/decomp_batch/w_report_stats.py

# W1-R 探针（只读，不改文件；PowerShell）
python -c "import json; rows=json.load(open('.omo/agents/decomp_batch/w_census_rows.json',encoding='utf-8')); print(sum(1 for r in rows if r['cls']=='D_RELOC'))"   # 555

# W2-F 编译探针（临时目录，不碰仓库）
#   .vc6-8447\BIN\cl.exe /nologo /O2 /Gy /c      → fmul[1/60]
#   .vc6-8447\BIN\cl.exe /nologo /O2 /Gy /Op /c  → fdiv[60.0]
```

---

## 8. 不要重跑清单（本报告新增/继承）

| 项 | 结论 | 出处 |
|---|---|---|
| CW4 语句交换 / 常量表达式 / 循环改写 / 窄 cast / 短路交换 | **0 命中**，population 内证伪 | `report_cw4.md` §3.1 |
| CW4 `V_MICRO_SIGNED_CMP`（函数级 cast） | 3/184 = 1.6%，只作探针 | `cw4_results.jsonl` |
| 批量 `ScalarDtor` 改名 | +627 错误 | AGENTS.md / x148 |
| 以 `signed_default_ledger` 直接翻 24,596 条 alt | 通路未接通 + 覆盖不交集（§4.2） | 本报告 |
| 用 `/Op` 修 FOLD 族 | 实测无效（literal*literal 仍折叠） | 本报告 §3.2.1 |
| `insn_granularity` 之外的"统计投票"定符号 | 违反项目 CSP 裁决（禁统计推断） | AGENTS.md 类型确定原则 |

---

## 附录 A：本报告新增文件

| 文件 | 说明 |
|---|---|
| `.omo/agents/decomp_batch/report_w_series.md` | 本工单 |
| `.omo/agents/decomp_batch/w_report_stats.py` | 只读统计脚本（§0-§4 全部数字可复现） |

前任产物（`w_census.py` / `w_census_rows.json` / `w_index.py` / `w_index.json` / `w_show.py` /
`w_samples.txt` / `w_struct.txt` / `_tmp_*.py`）保持原样，未修改。
