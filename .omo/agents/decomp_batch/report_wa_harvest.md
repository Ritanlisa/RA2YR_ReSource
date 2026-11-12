# W-A 收割 —— 三桶全量重跑（D_CONST_FOLD / D_CONST_FP / D_RELOC）

> 工单：W-A 收割（生成器已修复 `wa_const.restore_data_constants`，commit `6910251c5`；批跑通道 CW5 已释放）。
> 执行：2026-11-12，79 part（20 件/part），每 part 独立 commit；账本由正常 `batch_run` 通道写入。
> 结论：**1,564 目标 → 1,252 件 NG→OK（80.0%）**，账本 **OK 2,654 → 3,906 / NG 3,942 → 2,690**
> （CF 1,889、PENDING 31 不变）；全量零回归验证 + 30 抽样 29/30 MATCH（1 件为证明与本规则无关的
> censusA 期陈旧账本条目，见 §4.3）。

---

## 0. 结论速览

| 桶 | 目标 | MATCH | 命中率 | 工单预期 |
|---|---:|---:|---:|---:|
| D_CONST_FOLD | 736 | **734** | **99.7%** | ~100% |
| D_CONST_FP | 273 | **246** | **90.1%** | ~88% |
| D_RELOC | 555 | **272** | **49.0%** | ~50% |
| **合计** | **1,564** | **1,252** | **80.0%** | 1,100–1,250 |

| 项 | 数值 |
|---|---:|
| 账本 OK | 2,654 → **3,906**（+1,252） |
| 账本 NG | 3,942 → **2,690**（−1,252） |
| 账本 COMPILE_FAIL / PENDING | 1,889 / 31（均不变） |
| 判定总数 | 8,516（不变） |
| 非目标账本条目变动 | **0**（逐条 diff 实测） |
| 新 OK 的 clean 门 | **1,252/1,252**（clean=true + rule_violations=0 + this_as_id=false） |
| 批跑耗时 | 79 part / 2,220.6s（37.0 min），0 失败、0 重试 |
| W-A 可归因回归 | **0**（§4） |

---

## 1. 目标集与执行方式

### 1.1 目标集（1,564 件，全部为当前 NG）

来源 = `.omo/agents/decomp_batch/w_census_rows.json`（W 系列 3,746 行 NG 普查快照）按 `cls` 过滤：

| cls | n | 说明 |
|---|---:|---|
| D_CONST_FOLD | 736 | 折叠形态（`dbl_X = <lit> * <lit>` 被 era 编译器折叠成立即数） |
| D_CONST_FP | 273 | 倒数乘法形态（`x / 60.0` 强度削减） |
| D_RELOC | 555 | 探针实测同机制交叉覆盖（1.0 字面量等，抽样 8/16） |

固化：`.omo/decomp_batch/wa_harvest_targets.json`（1,564 行，`{addr, family, name}`，按桶连续排列，无重复地址）。
执行前逐条核验：**1,564/1,564 在当前账本中仍为 NG**（快照 = `.omo/agents/decomp_batch/wa_harvest_pre_ledger.json`），
因此全部翻转为对当前账本的**净增量**。

### 1.2 驱动

新驱动 `tools/decomp_sys/run_wa.py`（沿用 CW5 的 part 纪律）：

- 20 件/part → **79 part**；每 part 独立 `git commit`（part 目录 + part batch + `results.jsonl` + 账本 + `timings.jsonl`），抗配额中断；
- 中断恢复 = 已有 `part_report.json` 的 part 跳过；批跑失败重试 2 次，连续 3 次失败中止（本轮未触发）；
- part 通道 = `batch_run.py`（pseudo.fetch → `decompile.run_function`（W-A pass 默认 ON）→ emit → `checker` 六规则 → era CL /O2 /Gy → COFF 逐函数切片 → `diffasm` 字节对拍 → 账本记账）。

### 1.3 生成器改动确认

`6910251c5` 对 `decompile.py` 的 diff = **仅 +8 行**（`import wa_const` + `run_function` 中 `pass_globals` 后调用
`wa_const.restore_data_constants(ctx)`），无其它行为变化。环境开关 `DECOMP_NO_DATA_CONST=1` 可禁用（A/B 用）。
本轮全部 part 使用默认（pass ON）。

---

## 2. 结果

### 2.1 三桶命中

见 §0 表。合计 **1,252/1,564 = 80.0%**，落在工单预期区间内；三桶命中率与探针预测偏差均 ≤2.1pp
（fold +0/−0.3、fp +2.1、reloc −1.0）。

### 2.2 新 MATCH 的规模画像

新 OK 全部为微型常量叶子函数：

| orig_size | 件数 |
|---|---:|
| <10B | 22 |
| 10–19B | **1,226** |
| 20–49B | 4 |
| ≥50B | 0 |

min 4B / max 31B / median 19B。典型产物（`0x403D50`，part p00）：

```c
void __cdecl sub_403D50()
{
        DataGlobal_87E260 = dbl_7E1720 * dbl_7E1700;   // 19B 逐字节 MATCH
}
```

### 2.3 残余 312 件（NG→NG）归因

| 桶 | n | pathology 分布 |
|---|---:|---|
| D_CONST_FOLD | 2 | const_fold 2（`0x41d120`、`0x49f190`） |
| D_CONST_FP | 27 | codegen_shape 20 / frame_sched 3 / extern_reloc 1 / const_fold 1 / regalloc 1 / branch_order 1 |
| D_RELOC | 283 | **extern_reloc 262** / const_fold 14 / width_mismatch 4 / regalloc 2 / codegen_shape 1 |

- D_CONST_FOLD 残余仅 2 件（口径 99.7%）——该桶 detail 高度同质，与探针“0/100 残余”一致。
- D_CONST_FP 残余 27 件与探针归因吻合（`unk_` 字节型全局承载 double → W2_WIDTH；整数化指令选择；结构/求值序）。
- D_RELOC 残余 262 件首差 = `extern_reloc`，即旧形态就是“reloc 键 vs 绝对地址”一类差异，**不属于 1.0 字面量
  恢复机制**；该桶 272 件命中即为探针 50% 预测的落地（+272 顺带收益）。

---

## 3. 账本变化（逐条实测）

| 转移 | 件数 |
|---|---:|
| NG → OK | **1,252** |
| NG → NG | 312 |
| 任何非目标条目变动 | **0** |

前后总量：

| status | before | after |
|---|---:|---:|
| OK | 2,654 | **3,906** |
| NG | 3,942 | **2,690** |
| COMPILE_FAIL | 1,889 | 1,889 |
| PENDING | 31 | 31 |

> 口径说明：账本只由正常 batch 通道写入；本轮的 1,564 条 part 记录（`part_report.json`）与
> `results.jsonl`、账本一一对应（79 次 commit 全含）。探针/试错通道未写账本（沿用 CW4 纪律）。

---

## 4. 零回归验证

### 4.1 全量触发面扫描（穷举，非抽样）

对**全部 2,654 个收割前 OK 函数**做超集判定：函数体是否含 FP 字面量（`FP_LIT_RE`，与 pass 同源）
且 disassembly 是否载入 `double/float` 数据符号。

| 判定 | 结果 |
|---|---:|
| 含 FP 字面量的 OK 函数 | **0 / 2,654** |
| 含 FP 字面量 + FP 符号载入（pass 可触发超集） | **0 / 2,654** |

→ W-A pass 对历史 OK 集合的**触发面为空集**（不是“抽样没坏”，而是“不可能触发”）。证据 =
`.omo/agents/decomp_batch/wa_probe/wa_harvest_regress.json`。

### 4.2 全链抽样重跑（30 件历史 OK）

`tools/decomp_sys/wa_harvest_regress.py`（seed 20261112，pass 默认 ON，走 `batch_run.run_part` 全链，
不写账本）：**29/30 MATCH**。

### 4.3 唯一非 MATCH：`0x5378e0`（证明与 W-A 无关的陈旧账本条目）

| 项 | 值 |
|---|---|
| 账本记录 | `CreateTeamCommand::performAction_178`，status=OK，**censusA 期旧记录**（无 clean/rule_violations 字段） |
| 当前 emitted | `SetView4CommandClass::performAction_178`（身份漂移：类归属解析已不同） |
| orig bytes | `b8 4c 78 82 00 c3` = `mov eax, 0x82784C; ret` |
| ours bytes | `a1 00 00 00 00 c3` = `mov eax, ds:aSetview4; ret`（DIR32 → `?aSetview4@@3HA`） |
| pass OFF vs ON | **两边均 MISMATCH、首差相同**（`wa_ab.py --addrs 0x5378e0`：same=1 up=0 down=0） |
| 触发面 | 该函数无 FP 字面量（§4.1 穷举亦覆盖它）→ pass 不可能改写 |

→ 性质 = **生成器对“全局地址 vs 取值”的旧漂移 + 账本陈旧**（censusA 期 OK，后续身份解析变化后未回写），
与 W-A 无因果。按 R5 先例（`0x4a3c00`）只报告、不回写账本：该条目属于历史审计债，不在本轮工单范围。
本抽样中陈旧率 1/30（3.3%），提示后续可做一轮“账本 OK 全量复跑审计”。

---

## 5. 六规则合规

| 项 | 结果 |
|---|---|
| 1,252 新 OK 的 `clean` | **1,252/1,252 true** |
| 1,252 新 OK 的 `rule_violations` | **0** |
| 1,252 新 OK 的 `this_as_id` | 0 件 |
| 目标集中仍有违规的条目 | 6 件，**全部为 NG**：5 件与收割前计数相同；`0x5bd730` 20 → 4（results 历史 censusA 记录为 20，本 pass 反而减少） |
| 本轮新增违规 | **0** |

`checker.py` 未做任何豁免/弱化；`rule_violations` 照实记账。

---

## 6. BM 第二轮提示（字节匹配反馈通道）

- **G1 clean 池**（`status=OK + clean=true + rule_violations=0 + this_as_id=false`）：**1,939 → 3,191（+1,252）**。
- **G2 工件复核**：`s7_build.py` 以 `.omo/decomp_batch/**/part_report.json` 递归取最新 MATCH+clean 记录；
  本轮 79 个 part 目录（`.omo/decomp_batch/wa_run/p*/part_00/`）天然落入 glob，**无需改管道**，
  且每条新记录的 part_report 自身复记 `verdict=MATCH, clean=true, rule_violations=0`（审计期记录）。
- **可提取证据的结构性上限（实测本批 1,252 件）**：class-scoped emitted 仅 **35** 件（bm-owner 候选）、
  含 `this->` 访问仅 **15** 件（bm-member 候选）、带参数的仅 **3** 件且均为裸 `int`（bm-sig 的裸
  int 族剔除规则直接排除）。→ 常数叶子函数**天然缺 owner/member/sig 证据**，第二轮 BM 的收益远小于
  +1,252，量级预期为“数十条”（owner ≤35 / member ≤15 / sig ≈0，再经 G3/G3b/G6 去重）。
- **建议执行序**（仅用于测量增量，不阻塞其他线）：
  `python .omo/agents/bm/s1_scan.py` → `s23_proven.py` → `s7_build.py` → `s28_intptr.py` →
  `MINCLASS_NO_CACHE=1 python .omo/agents/bm/s27_repair.py` → `python tools/csp_export/minclass_solver.py --use-rs --dump-domains`，
  并与 BM 第一轮终点（`docs/report_bm.md` §0：`43,088/90,463 = 47.6%`，同一条 solver 命令口径）做 before/after 对照。
- 注意：不要把 G1 池的 +1,252 直接当成 BM 证据增量——**覆盖率由可提取通道决定，不由 MATCH 数决定**。

---

## 7. 工件清单

| 工件 | 说明 |
|---|---|
| `tools/decomp_sys/run_wa.py` | 本轮收割驱动（batch 参数化、20/part、每 part commit、resume） |
| `tools/decomp_sys/wa_harvest_regress.py` | 零回归验证（穷举触发面扫描 + N 抽样全链重跑，不写账本） |
| `.omo/decomp_batch/wa_harvest_targets.json` | 1,564 目标（addr/family/name，按桶连续） |
| `.omo/decomp_batch/wa_run/p00..p78/` | 79 part 产物（cpp/hpp/obj/orig/ours/report/log），**git 已入库**（每 part 一 commit） |
| `.omo/agents/decomp_batch/wa_probe/wa_harvest_regress.json` | 零回归证据（扫描结果 + 30 抽样 verdict + 地址表） |
| `.omo/agents/decomp_batch/wa_probe/ab_harvest_smoke.json` | 20 件 fold 冒烟 A/B（20/20 MATCH） |
| `report_wa.md` | W-A 机制确证 + 生成器反哺报告（前序，已随本轮入库） |

账本/结果：`.omo/codegen_match/status.json`、`.omo/agents/decomp_batch/results.jsonl`（每次 part commit 同步）。

---

## 8. 复现

```bash
# 0) 目标集重建（从 w_census_rows.json 过滤三桶；已固化，一般无需重跑）
#    -> .omo/decomp_batch/wa_harvest_targets.json

# 1) 全量收割（79 part，每 part commit；中断直接重跑，自动跳过已完成 part）
python tools/decomp_sys/run_wa.py

# 2) 零回归验证（穷举扫描 + 30 抽样全链重跑，不写账本）
python tools/decomp_sys/wa_harvest_regress.py --sample 30

# 3) 单件 A/B（pass 开关对照，不写账本）
python tools/decomp_sys/wa_ab.py --addrs 0x403d50
```

---

## 9. 备注与风险

1. **D_RELOC 残余 262 件 `extern_reloc`** 是下一个可攻族（与 W-A 无关）：旧形态无 reloc，源形涉及
   全局地址/取值或符号键，需按 `extern_reloc` 病理单独取证（可参考 §4.3 的 “地址 vs 取值” 形态）。
2. **账本陈旧条目**：本轮 30 抽样即命中 1 件 censusA 期 OK 现已不匹配（`0x5378e0`）。建议后续做一次
   “账本 OK 全量复跑审计”（只读重跑 + 差异清单），把历史 OK 的可信度量化；本轮未回写账本（范围外）。
3. **探针/试错纪律保持**：本轮只走正常 batch 通道，账本只由 `batch_run.main` 写入；`src/` 与
   `tools/csp_export/minclass_solver.py` 全程零改动。
4. **确定性**：pass 无随机源（同输入双跑 sha256 一致为 `report_wa.md` 已验项）；本轮 part 产物可复现。
