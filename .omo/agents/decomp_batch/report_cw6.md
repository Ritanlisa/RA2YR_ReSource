# CW6 收割报告——947 件陈旧 CF 重跑（2026-11-12）

性质：**纯收割轮**。未改 `tools/decomp_sys/` 任何生成器/checker（`checker.py` 零改动）、
未碰 `src/`、未碰 `tools/csp_export/minclass_solver.py`。仓库写入 = 每 part 的生成工件/账本/
`results.jsonl` + 本报告 + 工单工件。
输入 = `.omo/decomp_batch/cw6_prep/plan.json` 的 `_status ∈ {stale_cw3, stale_cw5}`（947 件）；
驱动 = `tools/decomp_sys/run_wa.py`（通用 per-part 驱动）→ `batch_run.py`（正常生成器 + 对拍 + 账本通道）。
起点 HEAD `9437b23be`（W-A 收官）；本报告末 commit = `42477fc91`。

---

## 0. 结论速览

| 项 | 数值 |
|---|---:|
| 重跑目标（stale 947 = stale_cw3 817 + stale_cw5 130） | **947** |
| **编译转化（MATCH+MISMATCH）** | **837 / 947 = 88.4%**（预告 549–784 = 58.0–82.8%） |
| ├ MATCH（字节全等） | **15（1.6%）** |
| ├ MISMATCH（编译过、字节不等） | **822（86.8%）** |
| └ 仍 COMPILE_FAIL | **110（11.6%）** |
| 账本 CF | **1,889 → 1,052（−837，−44.3%）** |
| 账本 NG | 2,690 → **3,512（+822）** |
| 账本 OK | 3,906 → **3,921（+15）** |
| PENDING | 31 → **31（不变；3 件 DUP_SKIP 已单件重跑收口）** |
| 目标集外账本变动 | **0 件** |
| clean OK 池（MATCH+clean+0 违规+非 this-as-id） | 3,191 → **3,201（+10）** |
| 零回归抽样（历史 OK 30 件，当前 HEAD 全链重跑） | **30/30 MATCH** |
| 六规则违规（目标集内，照实记录未豁免） | 315 函数/601 条 → **333 函数/625 条** |
| 时间 | 51 part / **31.2 分钟**（48 主 part 中位 36.8s + 1 补提交 + 3 单件重跑） |

**一句话**：CW6 备弹的核心判断被实测确认且**略超上限**——947 件陈旧证据用当前 HEAD 重跑，
**837 件（88.4%）恢复可编译**，CF 从 1,889 降到 **1,052**。但"可编译"≠"正确"：
822 件落 NG（首差形态 394 codegen_shape / 158 branch_polarity / 115 const_fold / 76 regalloc…），
只有 15 件字节全等。真正的收益是**分母清账**：CF 残墙从 1,889 的混合池收缩为
**live 817 + evidence 125 + 复败 110 = 1,052**，且三者地址两两不相交。

---

## 1. 执行记录

| 项 | 内容 |
|---|---|
| 目标批文件 | `.omo/decomp_batch/cw6_stale_targets.json`（947 条，含 `family/name/_layer/_code/_gen/_status/_fix`） |
| 生成器 | `.omo/decomp_batch/cw6_prep/cw6_build_targets.py` |
| 驱动 | `tools/decomp_sys/run_wa.py --batch cw6_stale_targets.json --run cw6_run --tag cw6`（20 件/part，part 完成即 `git commit`，失败重试 3 次） |
| part 数 | 48（p00–p47；末 part 7 件） |
| 每 part 提交内容 | `<run>/pXX/`（cpp/hpp/obj/part_report/batch_report/run.log）+ part 批文件 + `results.jsonl` + `timings.jsonl` + `status.json` |
| 提交数 | **52** = 48 part + 1（`cw6_p42` 提交重试，见 §9）+ 3（DUP_SKIP 单件重跑） |
| 分析脚本 | `cw6_analyze.py`（转化矩阵/账本对账）、`cw6_regress.py`（零回归）、`cw6_workorder.py`（残墙工单） |
| 实测工件 | `cw6_prep/cw6_result.json`、`cw6_prep/cw6_regress.json` |

驱动选择说明：`run_wa.py` 是 W-A 轮已验证的通用驱动（batch 参数化、resume 靠 part_report、
每 part 提交、3 连败中止），本轮**复用而不改**：`git diff HEAD -- "tools/decomp_sys/*.py"` 为空
（`registry_ext.py` 仅 stat-dirty，`git diff` 内容为空；只剩 `__pycache__/*.pyc` 二进制变更）。

---

## 2. 转化统计

### 2.1 总体 × 旧代际（T-A）

| 旧代际（末次编译时点） | 件 | MATCH | MISMATCH | 仍 CF | 编译率 |
|---|---:|---:|---:|---:|---:|
| G2 asweep（pre-CW3） | 819 | 11 | 735 | 73 | 91.1% |
| G3 cw3_run2（pre-CW4/CW5） | 24 | 0 | 3 | 21 | 12.5% |
| G0 census（pre-CW2） | 44 | 3 | 33 | 8 | 81.8% |
| G1 CW2 | 32 | 0 | 29 | 3 | 90.6% |
| G_R5toR8 | 23 | 1 | 19 | 3 | 87.0% |
| G_nocls | 5 | 0 | 3 | 2 | 60.0% |
| **合计** | **947** | **15** | **822** | **110** | **88.4%** |

> G3 只有 12.5%：CW3 末的 24 件本身就是"CW3 修完仍编译不过"的硬骨头（多为 C2146/C2039），
> 与 CW6 备弹 §3.1 的"stale_cw5"判定一致——它们是 CW5 形态的**真残余**，不是代际差。

### 2.2 旧首错码 × 结果（T-B）——23 个码

| 旧首错 | 件 | MATCH | MISMATCH | 仍 CF | 编译率 | 预告编译（件） | 实测 vs 预告 |
|---|---:|---:|---:|---:|---:|---:|---|
| C2100 | 593 | 7 | 580 | 6 | **99.0%** | 540 | +47 |
| C2065 | 108 | 0 | 105 | 3 | **97.2%** | 95 | +10 |
| C2109 | 91 | 0 | 75 | 16 | 82.4% | 60 | +15 |
| C2039 | 34 | 0 | 14 | 20 | **41.2%** | 8 | +6 |
| C2146 | 31 | 0 | 8 | 23 | **25.8%** | 30 | **−22** ❌ |
| C2143 | 22 | 0 | 16 | 6 | 72.7% | 19 | −3 |
| C2228 | 21 | 0 | 10 | 11 | 47.6% | 9 | +1 |
| C2296 | 15 | 0 | 4 | 11 | 26.7% | 8 | −4 |
| C2664 | 12 | 7 | 1 | 4 | 66.7% | 8 | 0 |
| C2227 | 8 | 0 | 2 | 6 | 25.0% | 2 | 0 |
| C2036 | 7 | 0 | 5 | 2 | 71.4% | 2 | +3 |
| C2059 | 4 | 1 | 1 | 2 | 50.0% | 2 | 0 |
| C2275 | 1 | 0 | 1 | 0 | 100% | 1 | 0 |
| **合计** | **947** | **15** | **822** | **110** | **88.4%** | **784** | **+53** |

### 2.3 已修族 × 实测（T-C）——预告 vs 实际（按编译件数）

| 已修族（CW6 备弹归因） | 件 | 实际编译 | 实测率 | 预告 | 结论 |
|---|---:|---:|---:|---:|---|
| CW3-2 template shell（C2100 `this->m001[]`） | 462 | **462** | **100%** | 416 | ✅ 超预告（+46） |
| CW3-1 param proto merge（C2100 `*pN`） | 131 | **125** | 95.4% | 124 | ✅ 命中（+1） |
| CW3-2 vftable regex（C2065 模板 vftable） | 90 | **89** | 98.9% | 81 | ✅ 超预告（+8） |
| CW3-3 global-array upgrade（C2109 DataGlobal） | 71 | **56** | 78.9% | 43 | ✅ 超预告（+13） |
| CW5-10 uintN_t typedef（C2146） | 31 | **8** | **25.8%** | 30 | ❌ 证伪（−22） |
| CW3-3 idx consumption（C2109 `[N][N]`） | 21 | **19** | 90.5% | 18 | ✅ 命中（+1） |
| CW3-2 return-tail `;` strip（C2143） | 16 | **16** | 100% | 14 | ✅ 命中（+2） |
| CW5-8/9/12 shell supply（C2039） | 34 | **14** | 41.2% | 8 | ✅ 超预告（+6） |
| CW5-1/2/3/4 call-site args（C2664） | 12 | **8**（7 MATCH） | 66.7% | 8 | ✅ 命中（MATCH 密度最高） |
| CW3-4 pointer-local store（C2296） | 15 | **4** | 26.7% | 8 | ⚠️ 半（−4） |
| CW5-10 GUID constants（C2065） | 8 | **8** | 100% | 7 | ✅ |
| CW5-10 MEMORY rewrite（C2065） | 7 | **6** | 85.7% | 6 | ✅ |
| CW5-10 `__usercall` strip（C2143） | 6 | **0** | **0%** | 5 | ❌ 证伪（−5） |
| CW5-5/6/7/8 member view（C2228） | 14 | **6** | 42.9% | 5 | ✅ |
| CW3-3 global member view（C2228） | 7 | **4** | 57.1% | 4 | ✅ |
| CW5-6/7 member chain（C2227） | 8 | **2** | 25.0% | 2 | ✅ |
| CW3-4 `__int64` literal（C2059） | 4 | **2**（1 MATCH） | 50.0% | 2 | ✅ |
| CW5-5 global object array（C2036） | 6 | **5** | 83.3% | 1 | ✅ 超预告（+4） |
| CW5-10 undeclared g_/s_/p_（C2065） | 4 | **3** | 75.0% | 1 | ✅ |
| **合计** | **947** | **837** | **88.4%** | **784** | **+53 超上限** |

**两条被实测证伪的备弹假设（重要，勿再按原口径预测）**：

1. **CW5-10 `uintN_t` typedef 不是 C2146 的解**（预告 30/31，实测 8/31）。
   旧错 `EventClass.hpp(36): missing ';' before identifier ...` 确实消失了（typedef 生效），
   但**换成下游类型错误**：C2146 的 31 件里 23 件仍 CF，新首错分布
   `C2440×6 / C2446×4 / C2109×2 / C2228×2 / C2660×2 / C2664×2 / C2100×2 / C2562×1 / C2227×1 / C2673×1`。
   → 该族真实病因是 `extern const uint32_t X` 声明后的**取用站点类型**（W1/W20 领土），不是 typedef 缺失。
2. **CW5-10 `__usercall` strip 不覆盖这 6 件**（预告 5，实测 0/6 编译）。6 件全部仍 CF。

### 2.4 MATCH 15 件（新 OK）

| # | addr | emitted | 旧族 | clean | 违规 |
|---|---|---|---|---:|---:|
| 1 | 0x53f020 | ObjectClass::sub_53F020 | CW5-1/2/3/4 (C2664) | ✅ | 0 |
| 2 | 0x53f050 | ObjectClass::sub_53F050 | 同上 | ✅ | 0 |
| 3 | 0x53f080 | ObjectClass::sub_53F080 | 同上 | ✅ | 0 |
| 4 | 0x53f0b0 | ObjectClass::sub_53F0B0 | 同上 | ✅ | 0 |
| 5 | 0x633ae0 | ObjectClass::sub_633AE0 | 同上 | ✅ | 0 |
| 6 | 0x6cf410 | SwizzleManagerClass::Clear | CW3-1 (C2100) | ✅ | 0 |
| 7 | 0x6cf490 | SwizzleManagerClass::Add | CW3-1 | ✅ | 0 |
| 8 | 0x72f510 | VtableStub::_72F510 | CW3-4 (C2059) | ✅ | 0 |
| 9 | 0x747600 | sub_747600 | CW3-1 | ✅ | 0 |
| 10 | 0x769490 | ObjectClass::sub_769490 | CW3-1 | ✅ | 0 |
| 11 | 0x491670 | _BlitTransRemapDest_E::sub_491670 | CW3-1 | ❌ | 1 |
| 12 | 0x5a9920 | ObjectClass::sub_5A9920 | CW3-1 | ❌ | 2 |
| 13 | 0x5a9960 | ObjectClass::sub_5A9960 | CW3-1 | ❌ | 2 |
| 14 | 0x626070 | ObjectClass::sub_626070 | CW5-1/2/3/4 | ❌ | 1 |
| 15 | 0x759760 | TechnoClass::sub_759760 | CW5-1/2/3/4 | ❌ | 1 |

**10 clean / 5 带违规（7 条）**。违规照实入账（`status.json` 的 `clean=false` /
`rule_violations=N`），未豁免、未洗白——这 5 件**不得**进入 BM 的 clean 证据池。

---

## 3. 账本对账（硬证据）

### 3.1 总量

| 状态 | 重跑前 | 重跑后 | Δ |
|---|---:|---:|---:|
| OK | 3,906 | **3,921** | **+15** |
| NG | 2,690 | **3,512** | **+822** |
| COMPILE_FAIL | 1,889 | **1,052** | **−837** |
| PENDING | 31 | **31** | 0 |
| 合计 | 8,516 | 8,516 | 0 |

### 3.2 目标集移动矩阵（逐件，947/947 命中）

| 迁移 | 件 |
|---|---:|
| COMPILE_FAIL → OK | 15 |
| COMPILE_FAIL → NG | 822 |
| COMPILE_FAIL → COMPILE_FAIL | 110 |

### 3.3 目标集外零变动（关键，证明无附带损伤）

对 `cw6_pre_ledger.json`（快照）与当前 `status.json` 之间**所有非 947 地址**逐条比对：
**0 件状态变化**。（脚本 = `cw6_analyze.py` 的 `ledger_move_outside`；结果 =
`cw6_result.json.ledger_move_outside = []`。）

### 3.4 clean 池（BM 消费端）

`OK ∧ clean=true ∧ rule_violations=0 ∧ !this_as_id` = 3,191 → **3,201（+10）**。
即 15 件新 MATCH 中只有 10 件可作 strict 证据（与偏好设置一致：+49 → +10，因为本轮 MATCH 面本来就小）。

### 3.5 CF 残墙构成（1,052 件，两两不相交）

| 桶 | 件 | 定义 | 来源 |
|---|---:|---|---|
| live | **817** | CW6 备弹 §3.1 的 live 桶（既有族残余 + 新族），需新规则 | `plan.json _status=live` |
| evidence | **125** | 函数体含 `?`/截断/asm，规则不可修，需 IDA 重导出 | `plan.json _status=evidence` |
| 复败 | **110** | 本轮 947 stale 重跑后仍 CF（首错码已换新） | `cw6_result.json.still_cf` |
| **合计** | **1,052** | 817 + 125 + 110，地址交集 = 0 | — |

---

## 4. 复败 110 件（新证据，非"旧错重演"）

### 4.1 新旧首错迁移（T-D，摘录 ≥2 件）

| 旧 → 新 | 件 | 含义 |
|---|---:|---|
| C2039 → C2039 | 19 | 壳成员供给仍缺（CW5-8/9/12 真残余） |
| C2296 → C2296 | 9 | 非整数位运算（CW3-4 真残余） |
| C2109 → C2036 | 7 | 标量下标降级为 void* 算术 |
| C2228 → C2228 | 6 | 标量 `.member` |
| C2146 → C2440 | 6 | uintN_t 声明后取用站点赋值类型 |
| C2143 → C2143 | 6 | 语法残伤（另一种形态） |
| C2109 → C2109 | 4 | 同族未消 |
| C2146 → C2446 | 4 | 指针/int 比较 |
| C2100 → C2296 | 3 | 解引用已消，暴露位运算 |
| 其余 33 组合 | 46 | 长尾（C2059→C2673 等） |

### 4.2 复败按新首错（TOP）

`C2039 19 / C2296 14 / C2440 13 / C2109 12 / C2143 12 / C2228 9 / C2036 8 / C2227 5 /
C2100 4 / C2446 4 / C2673 2 / C2562 2 / C2660 2 / C2664 2 / C2065 1 / C2106 1`（合计 110）。

> 三件典型：
> - `0x401190` C2059 → **C2673**（`global functions do not have 'this' pointers`）——CW3-4 修掉坏后缀后暴露自由函数 this（W6 领土）。
> - `0x4073b0` C2039 → C2039（`'m000' : is not a member of 'SaveGame'`）——壳成员缺（W11）。
> - `0x40d8e0` C2065 → **C2440**（`initializing: cannot convert ...`）——名字供给已修，类型层暴露（W1）。

---

## 5. 新 NG 822 的形态谱（下一轮的候选杠杆，非本轮承诺）

| 首差形态 | 件 | 备注 |
|---|---:|---|
| codegen_shape | 394 | 指令选择/词序差异，无现成引擎 |
| branch_polarity | 158 | 生成器的负化 guard（CW4 回填）已生效，这 158 是**规则后残余**；CW4 变体引擎的 4 路 if/else 是候选（需给 822 新 NG 做 baseline 适配，`run_cw4` 当前读 asweep 存盘 ours） |
| const_fold | 115 | W-A 的 `restore_data_constants` 在管线内**默认 ON**，这 115 件已过该 pass 仍差 → 不是 W-A 触发形态，**勿盲目重跑 W-A** |
| regalloc | 76 | 寄存器分配差异 |
| branch_order | 34 | 分支顺序 |
| extern_reloc | 20 | W1（diffasm reloc 符号键）领土 |
| eval_order | 9 / width_mismatch 7 / cc_mismatch 5 / signedness 2 / frame_sched 2 | 长尾 |

---

## 6. 零回归（实测）

| 检查 | 方法 | 结果 |
|---|---|---|
| 历史 OK 抽样 30 件 | `cw6_regress.py --sample 30 --seed 20261112`：从 **pre-CW6** 账本 OK（3,906）随机抽 30，用当前 HEAD 全链重跑（生成→VC6 编译→COFF 切片→diffasm），**不写账本** | **30/30 MATCH** |

样本覆盖：`sub_539EA0` / `sub_54FC00` / `_VectorClass_V_TRect_H::Run` / `ScoreClass::SetState` /
`StringBuffer::Reset` / `_VectorCursor_...::AddRef` 等 30 件（完整清单 = `cw6_prep/cw6_regress.json`）。
本轮**未改生成器**，理论上零回归由构造保证；抽样仅证明"HEAD 生成器对老 OK 仍字节等"。

---

## 7. 六规则红线

| 事项 | 状态 |
|---|---|
| `tools/decomp_sys/checker.py` | **零改动**（`git diff HEAD` 为空） |
| 违规豁免/弱化 | 无 |
| 目标集内违规 | 601 条/315 函数 → **625 条/333 函数**（照实入 `status.json`） |
| 新 MATCH 违规 | 5/15 件带违规（7 条），已标 `clean=false`，**不入 clean 池** |
| `src/` / `minclass_solver.py` | 零改动 |
| stub/占位 | 无；110 复败件同样 emit 完整实现，仅登记 CF |

违规条数上升 24 条/18 函数的解释：本轮 947 件此前**根本没走完生成**（CF 的首错在编译阶段前/早期），
现在全部 emit 到可检查状态，checker 的可见面变大；这是**可见性变化，不是生成质量退化**——
同一批地址的历史记录（`plan.json.rule_violations`）与现在逐件对照后，没有出现"新豁免规则"。

---

## 8. 交给下一轮的工单（已落盘）

| 工件 | 内容 |
|---|---|
| `.omo/agents/decomp_batch/cw6_live_workorder.md` | 人读版：G5 live 194 全清单 / C2440 210（live 192）全清单 / 复败 110 全清单 / live 817 按码 |
| `.omo/agents/decomp_batch/cw6_live_workorder.json` | 机器可读同内容（`g5_live_rows` / `c2440_live_rows` / `refail_rows` / `live_rows`） |

**建议下一轮靶集 = `G5 live 194 + 复败 110 = 304`**（地址不相交），理由：

1. G5 live 194 是**当前生成器**的真残墙（CW6 备弹 §2.4 与 CW5 §6 逐项一致）。
2. 复败 110 是**本轮新产生**的当前证据（旧族已消、新族暴露），与 live 形态高度重叠但代价更低
   （已有一半修复在身）。两者合并后按码分派既有 W 工单（W1/W2/W3/W5/W10/W11/W12/W13/W15/W16/W17）。
3. live 817 里的 G0–G3 子集（623 件）**不建议**直接开新规则——其中相当部分会在下一轮"再收割"
   中自然转化（本轮已证明代际差是主因）；先做 304，再把 live 817 拆成「G5 + 旧代际」两批处理。

C2440 210（live 192 + evidence 18，见备弹四态优先级）单列：备弹判定它是当前最大真残族
（ptr→ptr 99 / ptr↔int 80 / member→void* 17 / value-cast 14），W1 的方案已写在备弹 §6.1，
本轮只提供**去重后的 192 件 live 清单**（含 gen/form/unit；18 件 evidence 属快照损坏，
必须等 IDA 重导出，不能进 W1 靶集）。

---

## 9. 诚实声明与局限

1. **"转化"= 编译通过（MATCH 或 MISMATCH），不是正确性**。本轮 837/947 的转化里 822 件字节不等；
   唯一可作为正确性证据的是 15 件 MATCH（其中 10 件 clean）。
2. **预投影的两条假设被证伪**（§2.3）：CW5-10 `uintN_t` 对 C2146 只有 25.8%，`__usercall` strip 0/6。
   下一轮若沿用备弹 §6.1 的 W20（类型/声明供给），必须以本轮的新首错分布为输入，不能沿用旧口径。
3. **`cw6_p42` 的首次提交失败（rc=128）**：part 工件已生成并落盘，`git add` 成功但 `git commit` 返回 128
   （未捕获 stderr，原因未取到）；随后手工同内容提交成功（`515857181`）。账本/`results.jsonl`
   在 `cw6_p43` 的提交里一并入库，故无数据丢失；但**这是驱动的一个已知脆弱点**（未做 stderr 捕获）。
4. **3 件 DUP_SKIP**（同 part 内两个地址 emit 同一个 `Class::method`）：首轮按 `DUP_SKIP` 记账会把
   账本写成 PENDING（`record_ledger` 对未知 verdict 的兜底），本轮已用单件 part 重跑收口为 MISMATCH
   （`0x4b9ed0` / `0x6bf440` / `0x6bf5c0`）。最终 PENDING 31 不变。**下一轮若批量重跑需注意此坑**。
5. **part 级 unit 共享**：同一 part 内多个函数共享 cpp/hpp，首错归因是 unit 级；本报告的"件数"
   是函数件数，不是缺陷数（备弹 §1.2 已声明，本轮延用）。
6. **证据代数**：本轮所有判定来自 `decompile-results/full_export`（v2 快照）；125 件 evidence 类
   （`?`/截断/asm）本轮未纳入（备弹判定规则不可修），仍留 IDA 重导出（Phase 2）。

---

## 10. 复现命令

```powershell
# 1) 生成 947 目标批（读 cw6_prep/plan.json）
python .omo/decomp_batch/cw6_prep/cw6_build_targets.py

# 2) 重跑（20 件/part，每 part 提交；resume 靠 part_report.json 存在性）
python tools/decomp_sys/run_wa.py --batch .omo/decomp_batch/cw6_stale_targets.json `
    --run cw6_run --tag cw6

# 3) 转化/账本对账
python .omo/decomp_batch/cw6_prep/cw6_analyze.py

# 4) 零回归（不写账本）
python .omo/decomp_batch/cw6_prep/cw6_regress.py --sample 30

# 5) 下一轮工单
python .omo/decomp_batch/cw6_prep/cw6_workorder.py
```
