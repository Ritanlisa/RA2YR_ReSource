# A 层全量放量报告（asweep，2026-11-12）

范围：`tools/decomp_sys/` 产线 + `.omo` 产物。**`src/` 零改动；`tools/csp_export/minclass_solver.py`
零改动；`checker.py`（六规则）零改动、无豁免、violations 照实记账。**

任务链：A 层剩余池选择器 → 266 part 全量跑批（20 件/part，**每 part commit**）→ 每 500 件进度广播 +
10 件历史 MATCH 回归抽样 → 本报告。

---

## 0. 结论速览

| 指标 | 数值 |
|---|---:|
| 选择时 A 层剩余池（ledger∪results 排除后） | **5,313**（任务书写 5,513 = a200 抽掉 200 件之前的数） |
| 完成 | **5,313 / 5,313 = 100%** |
| part 数 / commit 数 | **266 / 266**（p00–p265，每 part 一次 commit；另 1 个驱动修复 commit） |
| 计算耗时 | 3,326 s ≈ **55.4 min**（均值 12.5 s/part，min 3.2 / max 18.8） |
| MATCH | **1,638** |
| MISMATCH | **2,608** |
| COMPILE_FAIL | **1,057** |
| 其他（NO_EXPORT 1 / DUP_SKIP 5 / OBJ_EXTRACT_FAIL 4） | 10 |
| **编译通过率**（可对拍/总池） | **4,246 / 5,313 = 79.9%** |
| **字节匹配率**（MATCH/已对拍） | **1,638 / 4,246 = 38.6%** |
| 字节匹配率（MATCH/总池） | 1,638 / 5,313 = 30.8% |
| clean（MATCH 且 0 规则违规） | 1,409 |
| 规则违规函数（照实记账，未豁免） | 884 / 5,313 = 16.6% |
| 回归抽样（11 个检查点 × 10 件历史 MATCH） | **110/110 MATCH，0 rule violation** |
| 项目累计唯一 MATCH（results.jsonl 去重） | **726 → 2,364（+1,638）** |
| ledger 累计 | 8,516 条：OK **2,339** / NG 3,751 / COMPILE_FAIL 2,395 / PENDING 31 |

对任务预期的核对：编译率 80.5%（CW2 测得）→ 本层实测 **79.9%**（一致）；新 MATCH 预期 ~1,500 →
实测 **1,638**（超出 +9%）；累计 MATCH 预期突破 2,000 → 实测 **2,364**（达成）。

---

## 1. 执行方式

```bash
# 1) 选择器（A 层全量，排除 ledger∪results 已判定）
python tools/decomp_sys/batch_select5.py --layers A --n 100000 --tag asweep
#    -> .omo/agents/decomp_batch/batch_asweep_A.json  (5,313 件)
#    选择时分布：pool A=5313  B=0  C=6839  D=3715  X=0；A 层 size 1..196B
#    （mean 29B，200/200 早期样本 n_calls=0 —— 严格 leaf）

# 2) 跑批（块式 = 进度广播点；driver 内 20 件/part、每 part commit）
python tools/decomp_sys/run_census.py --run asweep --tag asweep --layers A --max-parts 25
python .omo/agents/decomp_batch/asweep_progress.py       # 累计账

# 3) 每个检查点回归（10 件历史 MATCH）
python tools/decomp_sys/batch_run.py \
  --batch .omo/agents/decomp_batch/asweep_regress.json \
  --chunk 20 --out .omo/decomp_batch/asweep_regress/bNN --no-ledger
```

- 批内排序 = `(size, n_calls, n_indirect, n_ds, addr)`（易→难），所以**早期检查点天然偏高**，
  §3 的 size-band 表才是该层的诚实难度剖面。
- 驱动改动（`tools/decomp_sys/run_census.py`，2 处、加法式）：
  1. `--max-parts N`（块式推进，任务要求的分块/广播点）；
  2. 去掉对 `batch_run --resume` 的透传——实测 `--resume` 会把**全部 results.jsonl 历史**
     折进每个 part 的 `batch_report.json`（p00 单 part 1.7MB），266 part 累计可达 GB 级
     仓库膨胀。part 级 resume 由 `part_report.json` 存在性判定，语义不变。
- 每 part commit 内容：part 目录（cpp/hpp/obj/part_report/log）+ part batch +
  `results.jsonl` + `status.json` + `timings.jsonl`。中断恢复 = 跳过已有 `part_report.json` 的 part。

---

## 2. 全层账（5,313 件）

### 2.1 verdict 总表

| verdict | n | 说明 |
|---|---:|---|
| MATCH | **1,638** | 字节级全等（diffasm 归一化后） |
| MISMATCH | 2,608 | 编译通过、字节不等（病理见 §3） |
| COMPILE_FAIL | **1,057** | era cl 编译失败（实现仍完整 emit，无 stub 降级） |
| NO_EXPORT | 1 | full_export 无块 |
| DUP_SKIP | 5 | part 内 (cls,method) 重复 |
| OBJ_EXTRACT_FAIL | 4 | OBJ 符号不唯一 |

### 2.2 verdict × size band（A 层难度剖面）

| size(B) | n | MATCH | MISMATCH | COMPILE_FAIL | 编译率 | match/decided |
|---|---:|---:|---:|---:|---:|---:|
| 1–9 | 695 | **535** | 112 | 46 | 93.1% | **82.7%** |
| 10–19 | 2,106 | 687 | 1,256 | 158 | 92.3% | 35.4% |
| 20–29 | 1,056 | 333 | 665 | 57 | 94.5% | 33.4% |
| 30–49 | 588 | 61 | 292 | 235 | 60.0% | 17.3% |
| 50–99 | 718 | 21 | 208 | 488 | 31.9% | 9.2% |
| 100–196 | 150 | 1 | 75 | 73 | 50.7% | 1.3% |

读法：**A 层不是同质池**。1–9B 是真正意义上的“机械可复现区”（82.7% 匹配）；10–29B 编译几乎
无墙（92–94%）但匹配率掉到 33–35%（`extern_reloc` 浮点常量簇 + `branch_order` 源形反转簇）；
30B 以上编译墙陡增（`_VectorClass_*` C2100 族主导），50–99B 只剩 31.9% 可编译。

### 2.3 每 500 件检查点（进度广播原始账）

| checkpoint | 累计已判定 | MATCH | MISMATCH | COMPILE_FAIL | 编译率 | match/decided |
|---|---:|---:|---:|---:|---:|---:|
| 1（p00–p25） | 520 | 409 | 83 | 26 | 94.6% | 83.1% |
| 2 | 1,020 | 759 | 182 | 77 | 92.3% | 80.7% |
| 3 | 1,520 | 1,068 | 280 | 165 | 88.7% | 79.2% |
| 4 | 2,020 | 1,222 | 598 | 193 | 90.1% | 67.1% |
| 5 | 2,520 | 1,222 | 1,092 | 199 | 91.8% | 52.8% |
| 6 | 3,020 | 1,371 | 1,419 | 222 | 92.4% | 49.1% |
| 7 | 3,520 | 1,533 | 1,732 | 247 | 92.8% | 47.0% |
| 8 | 4,020 | 1,578 | 2,149 | 285 | 92.7% | 42.3% |
| 9 | 4,520 | 1,617 | 2,334 | 561 | 87.4% | 40.9% |
| 10 | 5,020 | 1,626 | 2,468 | 917 | 81.6% | 39.7% |
| 终（5,313） | 5,313 | **1,638** | 2,608 | 1,057 | **79.9%** | **38.6%** |

---

## 3. 病理分类（MISMATCH 2,608）

| pathology | n | 主要 size band |
|---|---:|---|
| **extern_reloc** | **1,394** | 10–19: 1,113 / 20–29: 234 |
| codegen_shape | 423 | 30–49: 165 / 50–99: 96 / 10–19: 50 |
| **branch_order** | **379** | 20–29: 324 |
| regalloc | 121 | 50–99: 43 / 30–49: 22 |
| cc_mismatch | 86 | 10–19: 34 / 1–9: 29 |
| branch_polarity | 45 | 50–99: 17 / 30–49: 11 |
| const_fold | 43 | 10–19: 16 / 1–9: 8 |
| ret_norm | 41 | 20–29: 19 |
| width_mismatch | 26 | — |
| eval_order | 26 | — |
| signedness | 14 | — |
| frame_sched | 10 | — |

### 3.1 头号簇：extern_reloc（1,394 件）——浮点常量符号键无地址映射

**机制（实证，0x69EA70，19B）：**

```text
orig bytes: dd 05 e077b000   dc 35 f8127f00   dd 1d 3078b000  c3
            fld  [0xB077E0]  fdiv [0x7F12F8]   fstp [0xB07830]  ret
ours bytes: dd 05 00000000   dc 0d 00000000   dd 1d 00000000  c3
ours relocs: ?DataGlobal_B077E0(off2)  __real@8@3ff98888888888888800(off8)
             ?DataGlobal_B07830(off14)
```

- **指令形态逐字节同构**，唯一差异是 reloc 符号键：`DataGlobal_*` 键能映射回绝对地址
  （首个差异在 +6，不在 +2/+0 —— 证明 off2 已正确映射），而 **`__real@4@…` / `__real@8@…`
  字面量常量键没有映射表**，diffasm 按 `[0]` 处理。
- 该簇不是地址连续区，而是 **size 相关**：n=1,394，addr 0x403D10..0x7DD413，size 6..103
  （mean 20.3B，10–19B 占 1,113）——整层“微小浮点数学 helper”几乎全部落在这里。
- 修复路线（下一轮，单点最大杠杆）：为 `__real@4@<8hex>` / `__real@8@<16hex>` 建
  **值→.rdata 地址反查表**（符号名内嵌 IEEE754 位型，扫原版 .rdata 匹配 4/8 字节即可），
  在 diffasm 侧把该符号键归一为绝对地址。**不改源码语义、不改 checker**。
- 预估 yield：该簇语义与字节形态已同构，修复后转化率应 ≥70% → **+950~1,100 MATCH**。

### 3.2 二号簇：branch_order 379 件，实为 96% 分支极性反转（分类器口径待修）

**机制（实证，0x483460 HouseClass::checkAutoProduction，31B）：**

```text
orig: 8b 81 40 01 00 00 | a8 10 | 74 12 | 24 ef ...| b0 01 | c3 | 32 c0 | c3
                          test al,0x10 | je  ZERO  | body...| ret1|    | xor al,al; ret
ours: 8b 81 40 01 00 00 | a8 10 | 75 03 | 32 c0 | c3 | 24 ef ...| b0 01 | c3
                          test al,0x10 | jne BODY | ZERO: xor al,al; ret | body...
```

- 语义等价、仅**块布局反转**：IDA 伪码给的是守卫式
  `if ((v1 & 0x10) == 0) return 0; ... return 1;`，原版源形是正向 if 块
  `if (flags & 0x10) { ...; return 1; } return 0;`，MSVC 对两种源形的分支方向/尾部布局选择不同。
- **口径修正（重要）**：379 件里 **363 件是互补 jcc 对**（`jne↔je` 342、`jge↔jl` 13、
  `jae↔jb` 3、`jg↔jle` 4…），仅 16 件同 mnemonic 纯布局。现行 `classify_diff` 的
  `branch_polarity` 规则只识别同 mnemonic 的 `je/jne`、`jz/jnz` 别名对（且要求 `om==bm`），
  互补 jcc 被落进 `branch_order`。**建议**（下一轮）：扩展极性表（互补 jcc 族 16 对），
  并把 `branch_order` 收窄为同 mnemonic 情形。本轮**未改分类器**（跑批一致性优先），
  仅在报告中给出修正后口径。
- 修复路线：`pass_branch_polarity` 以二进制实测分支极性为准，把“守卫式早退”重写为
  “正向 if 块 + 共享尾部”（或反向），即按原版的源形还原控制流**布局**。
- 预估 yield：379 件中块布局可复现者 → **+250~330 MATCH**。

### 3.3 三号簇：codegen_shape 423 件

跨全 band（30–49B 165 / 50–99B 96 / 10–19B 50 / 1–9B 42 / 100–196B 39），首差处指令数发散。
1–9B 的 42 件多为“一边多/少一条指令”的细粒度构形差，是最便宜的子集；大 size 段与编译墙重叠，
优先级低于前两簇。

### 3.4 const_fold 43 件

`1–9: 8 / 10–19: 16 / 20–29: 7 / 30–49: 7 / 50–99: 4 / 100–196: 1`——同形不同立即数。
分布薄且散，作为 §3.1/§3.2 之后的第三优先级。

---

## 4. COMPILE_FAIL 族谱（1,057）

| 首错 | n | 形态 |
|---|---:|---|
| **C2100** | **561** | `illegal indirection`——`_VectorClass_*` / `_DynamicVectorClass_*` 模板壳元素按未知类型落地（**447 件集中在 vector 模板单元**，addr 0x40B140..0x7B4550；CW2 §5 已挂账的最大 CF 族） |
| C2109 | 114 | `subscript requires array or pointer`（全局/成员标量视图被下标） |
| C2065 | 100 | 未声明标识符（`TClassFactory` / `TypeList` / 伪码局部作用域） |
| C2440 | 45 | 指针 vs 裸 dword 赋值 |
| C2143 | 31 | 语法：缺 `,`/`;`（proto 胶着、`(void*)(this;)` 残伤） |
| C2296 | 27 | `'&' illegal, operand char*/void*` |
| C4716 | 22 | `must return a value`（nullsub 族伪码 return 缺值） |
| C2228 | 20 | `.member` 用在非类对象 |
| C2039 | 19 | 成员不存在（`CommandClass` 等壳供给） |
| C2673 | 18 | 全局函数调用成员语法 |
| C2446 | 16 | 指针/整数比较 |
| C2059 | 13 | 裸 `?` / 语法残伤 |

与 CW2 §5 的预测一致：C2100 vector 壳是第一大墙；C2109/C2065 是全局/模板供给面。
40 个 C 族合计 1,057 件，长尾形态见 `.omo/decomp_batch/asweep/A/*/part_00/*.cpp` 首错行。

---

## 5. 回归（零回退）

11 个检查点（每 ~500 件）各重跑同一组 10 件历史 MATCH
（`0x401940 / 0x486380 / 0x4870d0 / 0x406540 / 0x4065c0 / 0x4065d0 / 0x4065e0 / 0x406640 /
0x410490 / 0x411540`）：

```text
b01..b11: MATCH=10, rule_violation_fns=0, pathology={}   (11/11 检查点全绿)
```

---

## 6. 六规则与硬约束合规

- `src/` 零 tracked 改动（`git status --porcelain src/` 空；仅会话前既有未跟踪 `src/decomp_out/`）。
- `tools/csp_export/minclass_solver.py` 零改动；`tools/decomp_sys/checker.py` 零改动。
- 无任何白名单/suppression：884 个函数带 rule violations **照实计入**（未豁免、未重跑洗白）。
- 规则 6（零 stub）：1,057 件 COMPILE_FAIL 同样 emit 完整函数体，仅 verdict 记账。
- 每 part commit：**266/266**，`git log --grep "census asweep"` 计数 = 266（p00 `859eaf28e` …
  p265 `aae0803ba`）；中断可恢复（part_report 存在性判定）。
- 失败不降级：无 stub/占位/跳过路径（驱动改动仅 --max-parts 与 batch_report 体积修复）。

---

## 7. 项目累计（本轮后）

| 口径 | 数值 |
|---|---:|
| results.jsonl 有 verdict 的唯一函数 | 8,504 |
| 唯一 MATCH（去重、last-wins） | **2,364**（本轮前 726） |
| 唯一 MISMATCH | 3,710 |
| ledger 条目 | 8,516（OK **2,339** / NG 3,751 / COMPILE_FAIL 2,395 / PENDING 31） |

交叉校验：ledger OK 2,339 = 本轮前 701 + 本轮 1,638（逐数一致）。

---

## 8. 下一批目标排序（A 层内，按 ROI）

| # | 目标 | 件数 | 机制 | 预估新增 MATCH | 风险 |
|---|---|---:|---|---:|---|
| 1 | `__real@4/8` 常量键 → .rdata 地址映射（diffasm 侧） | 1,394 | 值→地址反查（符号名内嵌 IEEE754） | +950~1,100 | 低（不改语义） |
| 2 | 分支极性/源形反转（guard ↔ 正向块） | 379 | 二进制极性驱动 `pass_branch_polarity` + 分类器口径修正 | +250~330 | 中（改控制流布局需逐形验证） |
| 3 | `_VectorClass_*` C2100 壳（元素指针宽度/类型证据） | 561（447 模板件） | `_view_span`/arrs 供给元素类型 | 先解锁编译，再谈 MATCH | 中 |
| 4 | 1–9B 段的 codegen_shape（42）+ const_fold（43）等细粒度构形 | ~120 | 指令级构形对齐 | +40~80 | 低 |
| 5 | C2109/C2065 全局/模板供给面 | 214 | 全局结构类型 + 模板类壳 | 先解锁编译 | 中 |

若 #1+#2 落地，A 层 match/decided 可由 38.6% 抬到 ~70%+（不含 CF 修复带来的对拍面扩大）。

---

## 9. 工件与复现

- 报告：`.omo/agents/decomp_batch/report_a_sweep.md`（本文件）
- 选择器产物：`.omo/agents/decomp_batch/batch_asweep_A.json` / `batch_asweep_all.json`
- 跑批产物：`.omo/decomp_batch/asweep/A/p000..p265/`（每 part：cpp/hpp/obj/part_report/run.log）
- 逐 part 账：`.omo/decomp_batch/asweep/timings.jsonl`（266 条，含每 part verdict 计数）
- 进度/分析：`.omo/agents/decomp_batch/asweep_progress.py` / `asweep_analyze.py`
- 回归产物：`.omo/decomp_batch/asweep_regress/b01..b11/`（每 checkpoint 10/10 MATCH）
- 复现：

```bash
python tools/decomp_sys/batch_select5.py --layers A --n 100000 --tag asweep
python tools/decomp_sys/run_census.py --run asweep --tag asweep --layers A   # 全量（可 --max-parts 分块）
python .omo/agents/decomp_batch/asweep_progress.py                            # 累计账
python .omo/agents/decomp_batch/asweep_analyze.py                             # 全层分析账
```
