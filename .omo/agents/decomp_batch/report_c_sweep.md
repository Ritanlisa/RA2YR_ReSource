# C 层全量放量报告（csweep，2026-11-13）

范围：`tools/decomp_sys/` 产线 + `.omo` 产物。**`src/` 零改动；`tools/csp_export/minclass_solver.py`
零改动；`checker.py`（六规则）零改动、无豁免、violations 照实记账。**

任务链：C 层剩余池选择器 → 342 part 全量跑批（20 件/part，**每 part commit**）→ 每 500 件进度广播
+ 30 件历史 MATCH 回归（末次 100 件）→ 本报告。

---

## 0. 结论速览

| 指标 | 数值 |
|---|---:|
| 选择时 C 层剩余池（ledger∪results 排除后） | **6,839** |
| 完成 | **6,839 / 6,839 = 100%** |
| part 数 / commit 数 | **342 / 342**（p00–p341，每 part 一次 commit；`337b1dd35` → `d0be4b67f`） |
| 计算耗时 | 16,134 s ≈ **268.9 min**（均值 47.2 s/part，min 13.4 / max 67.4） |
| MATCH | **376** |
| MISMATCH | **5,105** |
| COMPILE_FAIL | **1,331** |
| 其他（NO_PSEUDO 19 / NO_EXPORT 3 / OBJ_EXTRACT_FAIL 3 / DUP_SKIP 2） | 27 |
| **编译通过率**（可对拍/总池） | **5,481 / 6,839 = 80.1%** |
| **字节匹配率**（MATCH/已对拍） | **376 / 5,481 = 6.9%** |
| 字节匹配率（MATCH/总池） | 376 / 6,839 = 5.5% |
| clean（MATCH 且 0 规则违规） | **362 / 376 = 96.3%** |
| 规则违规（照实记账，未豁免） | 22 条 / 14 函数（占全池 0.2%） |
| `this_as_id` 伪判定 | **0** |
| 回归抽样（14 个检查点 × 30 件 + 末次 100 件，历史 OK） | **520/520 MATCH，0 差异** |
| 账本 OK（前 → 后） | 3,963 → **4,339（+376）** |
| 账本 NG（前 → 后） | 3,736 → **8,841（+5,105）** |
| 账本 COMPILE_FAIL（前 → 后） | 786 → **2,117（+1,331）** |
| 账本 PENDING（前 → 后） | 31 → 58（+27，全部为快照/去重类不可对拍件） |
| 全池 OK 占比 | **4,339 / 19,067 = 22.8%**（"25%+" 目标未达） |
| 全池已判定 | 15,355 / 19,067 = 80.5%（剩余 = D 层 3,712） |

对任务预期的核对（**如实**）：

| 预期 | 实测 | 判定 |
|---|---|---|
| 编译率 ~64.6% → 4,400 件可对拍 | **80.1% → 5,481 件** | 超预期（+1,081 件） |
| 字节 MATCH 按 30-40% → 1,300-1,800 新 MATCH | **376**（占已对拍 6.9%） | **未达**（差 3.5-4.8×） |
| 全池突破 25% MATCH | **22.8%** | 未达 |

未达的原因有结构性证据、不是随机波动：376 个 MATCH 中 **188 个（50.0%）来自两个同族带**
（ConvertClass 45B×143 + 58B×45），其余 5,000+ 件是形态层差异（§4）。C 层历史普查（CW3 口径，
675 件）的 MATCH/已对拍 = 8.5%，本次 6.9% 与之同量级；30-40% 的预期来自 A 层（leaf，38.6%），
**对带调用的 C 层不成立**。

---

## 1. 执行方式

```bash
# 1) 选择器（C 层全量，排除 ledger∪results 已判定）
python tools/decomp_sys/batch_select5.py --layers C --n 100000 --tag csweep
#    -> .omo/agents/decomp_batch/batch_csweep_C.json  (6,839 件)
#    选择时分布：pool A=0 B=0 C=6839 D=3715 X=0（A/B 已由 asweep 清空）
#    C 层 size 5..489B（mean 69B）；n_calls={1:3865, 2:2068, 3:906}
#    class 分布：无类 2,254 / unknown 709 / ObjectClass 210 / TechnoClass 91 / VectorClass 84 / …

# 2) 跑批（25 part 块式推进 = 每 500 件一个广播检查点）
python tools/decomp_sys/run_census.py --run csweep --tag csweep --layers C --chunk 20 --max-parts 25

# 3) 每个检查点零回归（30 件历史 OK，末次 100 件）
python tools/decomp_sys/csweep_regress.py --sample 30 --tag k500
python tools/decomp_sys/csweep_regress.py --sample 100 --tag final100
```

- 批内排序 = `(size, n_calls, n_indirect, n_ds, addr)`（易→难），所以早期 part 天然偏高；
  §3 的 size-band 表才是该层的诚实难度剖面。
- 驱动复用 `run_census.py`：20 件/part、每 part `git add -f` 落 part 目录 + part batch +
  `results.jsonl` + `status.json` + `timings.jsonl`，commit 后进入下一 part；`part_report.json`
  存在即跳过（中断即续跑）。**342 part 全部一次成功，未触发"连续 3 次失败中止"。**
- 回归工具 `tools/decomp_sys/csweep_regress.py`（本任务新增，独立可重跑）：从
  `.omo/decomp_batch/csweep/baseline.json` 的**放量前 OK 集（3,963）**抽样，走完整
  `batch_run.run_part` 链重生成 + 字节对拍；**只写 probe 目录，不写 ledger / results.jsonl**。
- **W-A 常量规则**：`wa_const.restore_data_constants` 在生成器管线内**默认 ON**（未设
  `DECOMP_NO_DATA_CONST=1`），对本批新函数自动生效；其触发面仅限「同一语句内的 double/float
  数据符号载入 + FP 字面量」，剩余 `const_fold` NG 不属于它的触发族（§4.2 有反例证据）。

---

## 2. 账本与零回归

### 2.1 账本逐项增量（baseline.json → 末态）

| status | 前 | 后 | Δ |
|---|---:|---:|---:|
| OK | 3,963 | 4,339 | **+376** |
| NG | 3,736 | 8,841 | **+5,105** |
| COMPILE_FAIL | 786 | 2,117 | **+1,331** |
| PENDING | 31 | 58 | +27 |
| 合计 | 8,516 | 15,355 | +6,839 |

- 6,839 个批内地址 **100% 有终判**（OK/NG/CF/PENDING 之一），无漏账。
- PENDING 27 件全部是**不可对拍类**：NO_PSEUDO 19（快照无伪码）+ NO_EXPORT 3（无 full_export
  块）+ OBJ_EXTRACT_FAIL 3 + DUP_SKIP 2（COMDAT 折叠重复件）——不是"未跑"。

### 2.2 零回归（双重证据）

1. **账本级全量对照**：放量前 3,963 个 OK 地址，末态仍为 OK 的有 **3,963 / 3,963**
   （`changed = 0`）。即本批 6,839 件新增判定**没有改写任何历史 OK**。
2. **动态重生成抽样**：14 个检查点 × 30 件 + 末次 100 件 = **520 件历史 OK** 全链重跑
   （默认 W-A ON），**520/520 MATCH**。证据文件 =
   `.omo/decomp_batch/csweep/regress/regress_{p00,k500,…,k6500,final100}.json`。

### 2.3 规则红线

- 5,481 个可对拍件中 **639 件**存在规则违规（合计 **1,564 条**，占全池 639/6,839 = 9.3%），
  照实记录，无豁免、无 checker 弱化。
- 376 个 MATCH 中 **362 clean**（96.3%）；14 件 dirty 合计 22 条违规。
- `this_as_id` = **0**。

---

## 3. 难度剖面（size-band，全批 6,839 件）

| size (B) | n | MATCH | MISMATCH | CF | 其他 | 编译率 | MATCH/总 | MATCH/已对拍 |
|---|---:|---:|---:|---:|---:|---:|---:|---:|
| 0-9 | 381 | 21 | 270 | 80 | 10 | 76.4% | 5.5% | 7.2% |
| 10-19 | 356 | **66** | 264 | 24 | 2 | **92.7%** | **18.5%** | **20.0%** |
| 20-29 | 470 | 30 | 395 | 43 | 2 | 90.4% | 6.4% | 7.1% |
| 30-39 | 1,209 | 21 | 1,059 | 122 | 7 | 89.3% | 1.7% | 1.9% |
| 40-49 | 1,285 | **159** | 1,065 | 61 | 0 | **95.3%** | 12.4% | 13.0% |
| 50-74 | 1,286 | 63 | 1,031 | 190 | 2 | 85.1% | 4.9% | 5.8% |
| 75-99 | 508 | 14 | 355 | 137 | 2 | 72.6% | 2.8% | 3.8% |
| 100-149 | 630 | 2 | 436 | 191 | 1 | 69.5% | 0.3% | 0.5% |
| 150-199 | 463 | 0 | 97 | **365** | 1 | **21.0%** | 0 | 0 |
| 200-299 | 173 | 0 | 95 | 78 | 0 | 54.9% | 0 | 0 |
| 300-399 | 47 | 0 | 26 | 21 | 0 | 55.3% | 0 | 0 |
| 400-489 | 31 | 0 | 12 | 19 | 0 | 38.7% | 0 | 0 |

关键形状：

- **10-19B 是最高效带**（20.0% of compiled）——多为单语句访问器/小型转发。
- **40-49B 的 159 个 MATCH 中 143 个集中在 size=45**，全部来自 **ConvertClass 同族**
  （0x491300-0x4917F0 一带）；另有 size=58 的 45 件（0x4918A0 起，同一族）。两带合计
  **188 = 全部 MATCH 的 50.0%**——这不是普遍匹配率，而是同族代码形状对齐。
- **≥150B 零 MATCH**，且 150-199B 带编译率骤降 **21.0%**（CF 365/463）——硬尾的
  "编译墙"与"形态墙"叠加。
- 30-39B 带 1,209 件只有 21 MATCH（1.9% of compiled）——中段（含调用、多语句）
  是形态差异最密的区域。

---

## 4. MISMATCH 形态谱（5,105 件）

### 4.1 pathology（驱动器分桶）

| pathology | n | 占比 |
|---|---:|---:|
| codegen_shape | 1,906 | 37.3% |
| const_fold | 1,496 | 29.3% |
| regalloc | 849 | 16.6% |
| extern_reloc | 204 | 4.0% |
| branch_polarity | 192 | 3.8% |
| branch_order | 149 | 2.9% |
| frame_sched | 126 | 2.5% |
| width_mismatch | 48 | 0.9% |
| ret_norm | 42 | 0.8% |
| signedness | 41 | 0.8% |
| eval_order | 27 | 0.5% |
| cc_mismatch | 25 | 0.5% |

### 4.2 首差异对（first_diff，实证观测，非根因结论）

| n | orig 首差异 | ours 首差异 | 形态 |
|---:|---|---|---|
| 466 | `+0 push ecx` | `+0 sub esp, 8` | 帧布局：原版无局部帧，我方分配栈槽 |
| 317 | `+0 push ebx` | `+0 push esi` | prologue 保存寄存器选择/次序 |
| 227 | `+12 call 0x7c8fb0` | `+12 call 0x11` | **调用 reloc 目标显示为偏移**（W1 符号键族） |
| 217 | `+18 call 0x4cad50` | `+18 call 0x17` | 同上（W1 族） |
| 108 | `+0 push esi` | `+0 push ecx` | prologue 次序 |
| 89 | `+0 mov eax, [esp+4]` | `+0 push ecx` | 原版直读参数，我方多余 prologue |
| 70 | `+18 mov edx, [esp+0xc]` | `+18 mov edx, [esp+0x10]` | 栈帧偏移漂移 |
| 54 | `+16 call 0x7c8b3d` | `+16 call 0x15` | 同上（W1 族） |
| 29 | `+3 mov ecx, 0x87e8a8` | `+3 mov eax, [esi+8]` | 全局 vs 成员装载形状 |
| 26 | `+15 call 0x410320` | `+15 call 0x14` | 同上（W1 族） |
| 25 | `+22 call 0x7c8b3d` | `+22 call 0x1b` | 同上（W1 族） |
| 25 | `+9 mov [esi], 0x7e5ba0` | `+9 mov [esi], 0` | **vtable 安装常量丢失** |
| 22 | `+9 mov [esi], 0x7e5b88` | `+9 mov [esi], 0` | 同上 |
| 14 | `+9 mov [esi], 0x7ebe3c` | `+9 mov [esi], 0` | 同上 |

- **W1 族合计 549 个首差异信号**（227+217+54+26+25）：我方 reloc 目标被渲染成 `0x11/0x17`
  这类小偏移，说明 diffasm 的符号键未对上；这批 NG 中可能含**假 NG**，需要先在样本上
  验证"修 reloc 键后是否翻 MATCH"，**不可直接计入收益**。
- **prologue/帧形状族**（466+317+108+89+70 = 1,050 信号）是最大可攻击的 codegen_shape
  子族：原版多次选择"无帧/直读参数"，我方稳定发 prologue。机械化规则（按调用点/参数
  使用选择 `push` vs `sub esp`）可行性需单点取证，本报告不预设结论。
- vtable 安装常量 `0x7e5ba0` 被写成 0（61 个首差异信号）：属于**非 FP 常量物化**，
  与 W-A 的触发族（FP 字面量 + double/float 数据载入）不同，W-A 默认 ON 不覆盖它。

### 4.3 COMPILE_FAIL 首错码（1,331 件）

| 错误码 | n | 备注 |
|---|---:|---|
| C2036 | 319 | 指针算术目标 size unknown（类型供给缺口） |
| C2440 | 148 | 指针/整数转换（值类型层） |
| C2109 | 124 | 下标需要数组/指针（伪码数组形态） |
| C2065 | 80 | 未声明标识符（全局/成员供给） |
| C2100 | 77 | 非法间接（`*` 于非指针） |
| C2653 | 60 | 名字空间/类名未声明（壳供给） |
| C2446 | 60 | 指针/整数比较 |
| C2664 | 54 | 实参类型不匹配 |
| C2061 | 51 | 标识符语法（声明形态） |
| C2059 | 46 | 语法错误 |
| C2039 | 46 | 成员不存在 |
| C2660 | 40 | 调用参数个数 |
| 其余长尾 | 226 | C2227 26 / C2143 22 / C2296 20 / C2064 19 / C2228 16 / … |

CF 结构 = **类型供给面（C2036/C2440/C2109/C2100）与壳/成员供给面（C2065/C2653/C2039）
双峰**，与 CW6/CW7 的结论同向；150-199B 带的 CF 集中爆发（365/463）说明该带的内联
访问器/容器方法最依赖准确的成员类型。

---

## 5. 对任务四项 MUST 的核对

| MUST | 状态 | 证据 |
|---|---|---|
| 全量 6,839 | ✅ | 6,839/6,839 终判；timings.jsonl 342 行、n 求和 = 6,839 |
| 每 part commit | ✅ | `git log --grep "census csweep"` = **342** 条（p00→p341） |
| 进度广播 | ✅ | 14 次广播（520→6,839）；累计 MATCH 47→101→125→136→141→145→297→352→359→369→374→376→376→376 |
| 最终全层账 | ✅ | §2.1 账本增量 + §3 size-band 全表 + §4 形态谱 |

| MUST NOT | 状态 |
|---|---|
| 不碰 `src/` | ✅ 本任务零写入（part 只写 `.omo`；`src/decomp_out/` 为任务开始前已存在的未跟踪目录，非本任务产物） |
| 不碰 `minclass_solver.py` | ✅ 零改动 |
| 不绕过 checker | ✅ `checker.py` 零改动，1,564 条违规照实入账 |

---

## 6. 产物与复现

| 产物 | 路径 |
|---|---|
| 选批 | `.omo/agents/decomp_batch/batch_csweep_C.json`（6,839）+ `batch_csweep_all.json` |
| 342 part 工件 | `.omo/decomp_batch/csweep/C/p000..p341/part_00/`（cpp/hpp/obj/report/run.log） |
| part 批文件 | `.omo/decomp_batch/csweep/parts/C_pXXX.json` |
| 计时 | `.omo/decomp_batch/csweep/timings.jsonl` |
| 基线/统计 | `.omo/decomp_batch/csweep/baseline.json`、`final_stats.json` |
| 零回归证据 | `.omo/decomp_batch/csweep/regress/regress_*.json`（15 份） |
| 回归工具 | `tools/decomp_sys/csweep_regress.py` |
| 账本 | `.omo/codegen_match/status.json`（15,355 条） |
| 结果流 | `.omo/agents/decomp_batch/results.jsonl` |

复现：

```bash
python tools/decomp_sys/batch_select5.py --layers C --n 100000 --tag csweep
python tools/decomp_sys/run_census.py --run csweep --tag csweep --layers C --chunk 20
python tools/decomp_sys/csweep_regress.py --sample 100 --tag final100
```

---

## 7. 下一步候选（按证据强度排序，均需先样本验证）

1. **W1 调 reloc 符号键映射**：549 个首差异信号显示 ours 的 call 目标被渲染成小偏移
   （`0x11/0x17`）；这是**假 NG 嫌疑**，先取 30-50 件做键修复 A/B，测翻 MATCH 率再扩量。
2. **prologue/帧形状规则试错**：1,050 个首差异信号集中在此（`push ecx` vs `sub esp,8`、
   `push ebx` vs `push esi`）；可用 CW4 式变体引擎在 30-39B 带做小样本。
3. **vtable 安装常量**：61 个首差异信号（`mov [esi], 0x7e5bXX` vs `0`）指向常量物化
   缺族，与 W-A（FP-only）正交。
4. **CF 类型供给**：C2036 319 件是最大单码；与 W4（签名/类型确定性）同战场。
5. **D 层（3,715 件未判定）**：按 C 层硬尾（150B+ 编译率 21-55%、MATCH 0）预期收益有限，
   建议先做 1-3 的规则修复再放量 D，否则重复"高 CF、零 MATCH"的硬尾。

---

## 8. 诚实性声明

- 本报告的 MATCH 数字 = 驱动器 `MISMATCH→MATCH` 字节对拍终判（diffasm），未经人工逐件复核；
  376 个 MATCH 的 clean 率为 96.3%，22 条违规与 14 件 dirty 已如实列出。
- "MATCH 30-40%" 的预期**未实现**，本报告不修饰、不外推；结构性原因见 §0/§3/§4。
- 549 个 call-reloc 首差异是**观测**，不是"这 549 件都应 MATCH"的结论；翻 MATCH 率未知，
  必须先做 A/B 样本。
- W-A 规则默认 ON 是事实（`decompile.run_function` 管线内，未设禁用环境变量）；但它只覆盖
  FP 数据常量族，不能解释 1,496 个 `const_fold` NG，本报告没有把两者强行归因。
