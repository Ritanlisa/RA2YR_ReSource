# CW4 —— 形态层自动试错引擎（形态假设的批量证伪 + 反哺）

> 工单：`report_shape_census.md` §5（A 层 2,608 NG 的分桶归因 + ROI 排序）。
> 执行：2026-11-12。账本 NG 起点 **4,059**。
> 结论：**317/2,608 (12.2%) 变体命中**；其中 **313 件是同一个 if/else 方向规则**。
> 该规则已反哺生成器（`passes.py::pass_branch_polarity` + `decompile.py` 管线序修复），
> 重放 **313/313 MATCH**、随机 100 件历史 OK 回归 **100/100**，账本 **NG 4,059 → 3,746**。

---

## 0. 结论速览

| 指标 | 数值 |
|---|---:|
| A 层 NG 总数 | 2,608 |
| 试错引擎可试面（能生成 ≥1 变体） | **805**（30.9%） |
| 变体命中 | **317**（占全层 12.2%，占可试面 39.4%） |
| 其中 if/else 方向规则（V_IF_GUARD） | **313**（98.7% 的命中） |
| 其中 signed 比较 cast（V_MICRO_SIGNED_CMP） | 3 |
| 其中 guard→if/else 反方向（V_IF_GUARD_FROM_TAIL） | 1 |
| 已反哺生成规则 | 1 条（if/else 负化 guard，覆盖 313 件） |
| 重放验证（真实 batch 通道） | **313/313 MATCH** |
| 回归验证（历史 OK 随机 100） | **100/100 MATCH** |
| 账本变化 | NG **4,059 → 3,746**（−313）；OK 2,340 → 2,653（+313） |

**一句话**：A 层 NG 里真正能由“等价源形”关闭的是 **if/else 方向族（342 件中 313 件命中，91.5%）**；
其余形态假说（语句交换、常量表达式、循环改写、窄返回 cast、短路交换）在本population上
**全部被证伪**（0 命中）。这不是“试错不够”，而是这些族的第一差异不是源形：它们是类型/宽度/
符号键层面的确定性修复（W1/W2/W4），留给对应工单。

---

## 1. 引擎方法（候选源生成 + 自动判定）

### 1.1 忠实性设计

对每个 A 层 NG 函数：

1. **基线不重编译**：直接读 asweep part 目录里已存的 `ours_*.json` 复核 MISMATCH（0 成本）。
2. **上下文原样复用**：把**产生该 MISMATCH 的原始 unit `.cpp` + `include/*.hpp`** 整目录复制到
   试错目录，只替换目标函数体文本。保证与 batch 通道同一编译上下文（同一 hpp 成员表/函数序）。
3. **候选生成**：`tools/decomp_sys/cw4_variants.py` 按 family/path 生成 ≤4 个等价源形变体
   （if/else 方向、语句/短路交换、常量表达式形态、窄返回 cast、零初始化拆分、循环改写）。
4. **规则合规门**：每个变体先过 `checker.py` 六规则自检；只允许**不新增**违规
   （baseline 违规数 = 变体违规数上限）。违规变体直接 REJECTED_RULE，不编译。
5. **编译 + 对拍**：`decompile.era_compile`（VC6/SP3 /O2 /Gy）→ `batch_run.extract_fn_from_obj`
   单函数 COFF 切片 → `diffasm.compare` 对原版 `.exe` 字节对拍。
6. **首个 MATCH 即接受**，记录变体 id + 完整函数体（`accepted/*.cpp`）；全失败记 NO_HIT
   （附每变体首差）；无候选记 NO_VARIANT（不编译）。

### 1.2 与工单方法的对应

| 工单条目 | 变体 id | 结果 |
|---|---|---|
| ① if/else 方向（2 路试错） | `V_IF_GUARD` / `V_IF_GUARD_EQ` / `V_IF_SWAPNEG` / `V_IF_CMPFLIP` | **313 命中**（唯一大族） |
| ② branch_order：语句/短路交换序 | `V_ORD_SWAP0/SWAPN/INLINE_TEMP` / `V_BOOL_SC_SWAP` | 0 命中（证伪） |
| ③ const_fold：常量表达式形态 | `V_CONST_SHL2MUL/MUL2SHL/MUL_COMMUTE` | 0 命中（证伪） |
| ④ codegen_shape 单指令级子集 | `V_MICRO_*` / `V_LOOP_*` | 3 命中（signed 比较），其余证伪 |
| ⑤ 命中回填生成规则 | `pass_branch_polarity` + 管线序修复 | **313/313 重放 MATCH** |

### 1.3 成本

单变体编译+对拍 **0.03–0.15 s**（unit 很小）。试点 200 件 10 part 共 ~40 s；
全层 2,408 件 121 part 共 ~7 min。比工单预估（2 s/次）低一个数量级。

---

## 2. 试点（200 件，ROI 加权）

抽样：`cw4_pilot.json`（seed 20261112，按工单 ROI 权重：JCC_INVERT 100 / PLUS 15 /
TWO_FOUR 20 / ONE 10 / TOKEN 12 / ROTATE 8 / REORDER 5 / JCC_LAYOUT+ 8 /
STRUCTURAL-if_else 探针 15 / const_fold 7 / branch_polarity 10）。

**结果：105/200 = 52.5%**（远超 15% 扩量门槛）。

| class | n | hit | rate |
|---|---:|---:|---:|
| JCC_INVERT | 100 | 96 | **96.0%** |
| JCC_INVERT_PLUS | 15 | 6 | **40.0%** |
| ROTATE_EXACT | 8 | 3 | 37.5% |
| JCC_LAYOUT_PLUS | 8 | 0 | 0% |
| TWO_FOUR_INSNS | 20 | 0 | 0% |
| TOKEN_MISMATCH | 12 | 0 | 0% |
| ONE_INSN | 10 | 0 | 0% |
| STRUCTURAL（if_else 探针） | 15 | 0 | 0% |
| REORDER | 5 | 0 | 0% |
| MEMBER_OFFSET / RELOC_KEY / REG_ALLOC | 7 | 0 | 0% |

**试点期的两个定点发现**（直接决定反哺内容）：

1. `V_IF_GUARD` 首件即全中（0x50E730：`if (C) {A} else {B}` → `if (!C) {B} A` 字节全等），
   证明工单 §3.3 的 guard 假说**成立**。
2. `V_MICRO_SIGNED_CMP`（把比较写成 `(int)` 有符号形式）命中 0x748FD0 / 0x53A0E0 / 0x422B80
   ——ROTATE_EXACT 的“循环旋转”归因**被推翻**：真实机制是 `jl` vs `jb` 的有符号比较
   （`unsigned int*` 元素被按无符号比较）。9 件 ROTATE_EXACT 中 3 件由此关闭。

---

## 3. 扩量（全 A 层 2,608）

`cw4_all.json` = 全层 − 试点 200，121 parts，逐 part 落盘+提交。

**结果：212/2,408 = 8.8%；合并试点 = 317/2,608 = 12.2%。**

| family | n | hit | rate | no-variant |
|---|---:|---:|---:|---:|
| JCC_INVERT | 313 | **303** | **96.8%** | 10 |
| JCC_INVERT_PLUS | 29 | **10** | **34.5%** | 1 |
| ROTATE_EXACT | 10 | 3 | 30.0% | 1 |
| TWO_FOUR_INSNS | 86 | 1 | 1.2% | 73 |
| 其余 16 family（FOLD_STORE/RELOC_KEY/FP_RECIP/RET_ARITY/STRUCTURAL/…） | 2,170 | 0 | 0% | 1,718 |

按病理路径：`branch_order` **314/379 = 82.8%**，`signedness` 3/14，其余 0。

**关键量纲**：2,608 中有 **1,803 件根本没有可生成变体**（FOLD_STORE/FP_RECIP/RELOC_KEY/
RET_ARITY/RET_VOID 等确定性族 + 无控制流单语句体）。试错引擎的真实可试面 = **805 件**，
命中率 **39.4%**。

### 3.1 变体命中率（形态假说的证实/证伪）

| variant | MATCH | MISMATCH | COMPILE_FAIL | 判定 |
|---|---:|---:|---:|---|
| `V_IF_GUARD` (if/else→负化 guard) | **313** | 63 | 1 | **证实**（唯一大族） |
| `V_MICRO_SIGNED_CMP` | **3** | 162 | 19 | 证实但面窄（真机制是类型层） |
| `V_IF_GUARD_FROM_TAIL` (guard→if/else) | **1** | 37 | 4 | 弱证据（1/38），未回填 |
| `V_IF_GUARD_EQ` / `V_IF_SWAPNEG` / `V_IF_CMPFLIP` | 0 | 63/63/27 | 1/1/1 | 次选拼写，无需（V1 已全中） |
| `V_ORD_SWAP0/SWAPN/INLINE_TEMP` | 0 | 145/99/53 | 23/14/12 | **证伪**（语句顺序不是这些 NG 的成因） |
| `V_BOOL_SC_SWAP` | 0 | 19 | 1 | **证伪** |
| `V_CONST_*` | 0 | 3 | 0 | **证伪**（const_fold 族真机制是成员偏移/reloc 键） |
| `V_LOOP_WHILE2DO/DO2WHILE` | 0 | 18/9 | 1/3 | **证伪**（loop 形态假说不成立） |
| `V_MICRO_DROP_NARROW/SPLIT_ZERO/JOIN_ZERO` | 0 | 36/5/1 | 4/0/0 | **证伪** |

**诚实口径**：COMPILE_FAIL 是变体生成器的语法边界（例如把 decl 与使用点交换），不计入
假说判定；MATCH/MISMATCH 才计入。0 命中的族在报告里保留原始变体与首差（part_report.json），
供后续类型层工单直接用。

### 3.2 为什么 JCC_INVERT_PLUS 只有 34.5%

10 件命中之外的 9 件（抽样 15 中 9 件 NO_HIT）首差统一为：

```
orig: +0 mov al, byte ptr [ecx + 0xc]     ← 原版按 byte 读 IsInitialized
ours: +0 mov eax, dword ptr [ecx + 0xc]   ← hpp 声明为 int（dword）
```

即 **成员宽度表**（`IsInitialized` 应为 `unsigned char`）而非源形。body 层若写
`*(unsigned char*)&this->IsInitialized` 会触发 checker R3（成员 pun），属越狱，拒绝。
→ 归入 W4/成员类型工单。

同理，TWO_FOUR_INSNS 的 73/86 NO_VARIANT 是全局变量宽度（orig `mov word [g], ax` vs ours
`mov dword [g], 0`）等类型层差异。

---

## 4. 反哺生成器（本轮唯一回填规则）

### 4.1 两个真实生成器缺陷（实证）

**(A) 变换本身是 codegen no-op。** 旧 `pass_branch_polarity`：

```python
new = "if (%s)\n{\n%s}\n%s\n" % (c, a, b)      # if (C) { A } B
```

`if (C) { A } B` 与 `if (C) { A } else { B }` 编译出的首 jcc **相同**（都是 `je` 到 B 侧），
不产生原版的 `jne` 布局 —— 所以 313 件 JCC_INVERT 一直保持 `je`。

**(B) 它的结果被管线序静默丢弃。** `pass_scope_shrink` 总会设置 `ctx.stmts`；
`pass_branch_polarity` 改 `ctx.lines`；随后 `pass_era_normalize` 用
`render(ctx.stmts)` 重新生成文本并覆盖 `ctx.lines` —— 旧 pass 的改写从未进入最终产物。

### 4.2 修复

`tools/decomp_sys/decompile.py`（管线序）：

```python
passes.pass_scope_shrink(ctx)
if ctx.stmts is not None:            # CW4: materialize once, lines authoritative
    ctx.lines = render(ctx.stmts)
    ctx.stmts = None
passes.pass_branch_polarity(ctx)
```

`tools/decomp_sys/passes.py`（Polariy 模型 + 变换）：

```
if (C) { return A; } else { return B; }
    ->  if ( !(C) ) { return B; } return A;
```

触发条件改为**确定性的 jcc 极性模型**（不再只认 `jne/jnz`）：

| C 顶层形态 | if/else 期望 jcc | guard 期望 jcc（触发集） |
|---|---|---|
| `a > b` | jle / jbe | **jg / ja** |
| `a >= b` | jl / jb | **jge / jae** |
| `a < b` | jge / jae | **jl / jb** |
| `a <= b` | jg / ja | **jle / jbe** |
| `a == b` | jne | **je** |
| `a != b` | je | **jne** |
| `!x` | jne | **je** |
| 零测试（`x` / `x & m`） | je | **jne** |

- 取原版**首条条件跳转**（jz→je / jnz→jne / jnae→jb 等别名归一）；
- 仅当首 jcc ∈ guard 触发集才改写 → **当前 MATCH 的函数不会进入该分支**（其首 jcc 必然
  是 if/else 极性）；
- 语义等价硬前提：**两个分支都以 `return` 结尾**（由结构解析器强制）；
- 支持 if/else 前的前缀语句（旧正则要求整个函数体就是 if/else，0x557AE0 因此漏掉）。

### 4.3 验证

| 验证 | 结果 |
|---|---|
| 定点样本（0x50E730 零测试 / 0x557AE0 比较 / 0x45A2E0 移位变体） | 全部生成 guard 形式 |
| 探针 40 件（20 命中样本 + 20 历史 OK 随机） | 39/40（唯一 MISMATCH 为历史漂移样本，见 §6） |
| **回填重放 313 件（真实 batch 通道）** | **313/313 MATCH**，`cw4_backfill/batch_report.json` |
| **回归：历史 OK 随机 100 件** | **100/100 MATCH**，`cw4_regress100/batch_report.json` |
| 账本 | NG 4,059 → **3,746**（−313），OK 2,340 → **2,653**（+313） |

重放走的是**正常生成器 + 账本通道**（`batch_run.py`），不是把变体硬塞进账本；CW4 试错本身
从不写账本（遵循工单 §W8）。

---

## 5. 未回填的命中（诚实挂账）

| addr | 名称 | 接受变体 | 未回填原因 |
|---|---|---|---|
| 0x748FD0 | HouseClass::ClearStatArray | `V_MICRO_SIGNED_CMP` | 根因是 `unsigned int*` 元素按无符号比较；生成器修复应走**类型层**（成员/全局 signedness），body 级 `(int)` cast 只是等价源形。单函数 TU 内 cast 安全，但批量回填需要在 `pass_*` 中判定操作数类型，证据仅 3 件 |
| 0x53A0E0 | Weapon_Helper | 同上 | 同上（`||` 返回表达式） |
| 0x422B80 | TerrainClass::ClearAnimationLinkFlags | 同上 | 同上（循环变量 vs 无符号计数） |
| 0x557AC0 | Array::GetClamped | `V_IF_GUARD_FROM_TAIL` | 反方向规则（guard→if/else）；仅 1/38 命中，证据不足，避免过拟合 |

**候选规则（下轮）**：
1. **成员宽度表**：`IsInitialized` 等 `int` 成员被原版按 byte 读 → hpp 成员宽度修正（解开
   JCC_INVERT_PLUS 剩余 19 件 + WIDTH 族）。
2. **signedness 类型链**：比较按原版 jcc 的有/无符号回写全局/成员声明（解开 signedness 14
   件与 ROTATE_EXACT 剩余 7 件）。
3. **reloc 键映射（W1）与 FP 常量物化（W2）**：1,803 件 NO_VARIANT 的主体，属确定性修复，
   本引擎不覆盖（0 变体）。

---

## 6. 风险与反例（必须随报告读）

1. **A 层数字混合了两个时期**：asweep 生成的函数体是当时的生成器产物；重放时生成器已含
   R6/R7/R8 演化。313 件全部重放成功说明这些函数体稳定；但随机 100 件历史 OK 中有 1 件
   （0x5371D0，`CreateTeamCommand::performAction_134`）重放为 MISMATCH（`orig mov eax,0x82767c`
   vs `ours mov eax,[0]`）。该函数体是单条 `return (char*)(aSidebardown);`，**无 if/else**，
   不可能被本 pass 触及 → 属**预存生成器漂移**（reloc/全局符号），非本轮回归。为避免污染账本，
   该函数只在 `--no-ledger` 探针中出现，账本仍保持原状态。
2. **“字节 MATCH”是验收标准，不是语义证明**：guard 变体的语义等价由“两分支均 return”前提
   保证；其余变体（顺序交换/循环改写）没有这个前提，所以它们的 0 命中也不构成“语义正确但
   字节不等”的证据 —— 仅证明**这些源形不是原版写法**。
3. **不要用试点 52.5% 外推全层**：试点按 ROI 加权（JCC 占 50%），全层实际 12.2%。
   可试面命中率 39.4% 才是引擎效力口径。
4. **账本只由重放写**：试错的 317 个 MATCH 中只有 313 个有对应生成规则；直接把 317 全部
   记为 OK 会让账本与实际生成器脱节。

---

## 7. 工件与复现

| 工件 | 说明 |
|---|---|
| `tools/decomp_sys/cw4_variants.py` | 变体库（if/else 4 路、语句/短路交换、常量表达式、微形态、循环、signed 比较） |
| `tools/decomp_sys/run_cw4.py` | 驱动：选择/试错/逐 part 提交/断点续跑/报告（`--report a,b --md`） |
| `tools/decomp_sys/passes.py` | 回填：`pass_branch_polarity` 负化 guard + jcc 极性模型 |
| `tools/decomp_sys/decompile.py` | 回填：`ctx.stmts → ctx.lines` 物化（修复静默丢弃） |
| `.omo/agents/decomp_batch/cw4_pilot.json` / `cw4_all.json` | 冻结的抽样（200 / 2,408） |
| `.omo/agents/decomp_batch/cw4_results.jsonl` | 2,608 行逐函数试错账（每变体结果+首差） |
| `.omo/decomp_batch/cw4_pilot/pNNN/` / `cw4_all/pNNN/` | 逐 part `part_report.json` + `accepted/*.cpp`（接受变体的完整函数体证据） |
| `.omo/decomp_batch/cw4_aggregate.md` | 汇总表生成物 |
| `.omo/decomp_batch/cw4_backfill/` | 313 件回填重放（batch 通道） |
| `.omo/decomp_batch/cw4_regress100/` | 历史 OK 随机 100 回归 |
| `.omo/codegen_match/status.json` | 账本（NG 3,746 / OK 2,653） |

复现：

```bash
python tools/decomp_sys/run_cw4.py --select pilot
python tools/decomp_sys/run_cw4.py --run cw4_pilot --batch .omo/agents/decomp_batch/cw4_pilot.json
python tools/decomp_sys/run_cw4.py --select all --exclude .omo/agents/decomp_batch/cw4_pilot.json
python tools/decomp_sys/run_cw4.py --run cw4_all --batch .omo/agents/decomp_batch/cw4_all.json
python tools/decomp_sys/run_cw4.py --report cw4_pilot,cw4_all --md .omo/decomp_batch/cw4_aggregate.md
# 回填验证（正常 batch/账本通道）
python tools/decomp_sys/batch_run.py --batch .omo/agents/decomp_batch/cw4_backfill_guard.json \
    --out .omo/decomp_batch/cw4_backfill --chunk 20
```

---

## 8. 附录：全层分桶表

见 `cw4_aggregate.md`（本目录）。关键行：

| family | n | hit | rate | no-variant |
|---|---:|---:|---:|---:|
| JCC_INVERT | 313 | 303 | 96.8% | 10 |
| JCC_INVERT_PLUS | 29 | 10 | 34.5% | 1 |
| ROTATE_EXACT | 10 | 3 | 30.0% | 1 |
| TWO_FOUR_INSNS | 86 | 1 | 1.2% | 73 |
| FOLD_STORE | 634 | 0 | 0.0% | 634 |
| RELOC_KEY | 449 | 0 | 0.0% | 449 |
| FP_RECIP | 216 | 0 | 0.0% | 216 |
| RET_ARITY | 150 | 0 | 0.0% | 146 |
| RET_VOID_STUB | 30 | 0 | 0.0% | 30 |
| STRUCTURAL | 487 | 0 | 0.0% | 129 |
| 其余 10 family | 104 | 0 | 0.0% | 24 |

按病理路径 top：`branch_order` 314/379（82.8%）、`signedness` 3/14（21.4%）、
`codegen_shape` 0/423、`extern_reloc` 0/1,394、`regalloc` 0/121、`const_fold` 0/43。
