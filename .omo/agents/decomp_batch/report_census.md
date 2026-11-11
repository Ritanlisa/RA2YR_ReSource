# 全池机械反编译普查（四层 × 2,000 抽样）

日期：2026-11-11  
产线：`tools/decomp_sys/batch_run.py`（伪码 → 转换 → era cl 编译 → COFF 逐函数抽取 → 字节对拍 → 记账）  
选择器：`tools/decomp_sys/batch_select5.py`（全池难度分层，已判定集合 = status.json ∪ results.jsonl 排除）  
驱动：`tools/decomp_sys/run_census.py`（20 件/part，每 part 独立提交；失败不降级，全量 emit 后仅标记未匹配）

## 0. 结论速览

| 层 | 定义 | 抽样 | MATCH | MISMATCH | COMPILE_FAIL | CONV_FAIL | NO_CLS | NO_PSEUDO/NO_EXPORT | 末判率 MATCH/总 | 编译率 | 对拍匹配率 |
|---|---|---:|---:|---:|---:|---:|---:|---:|---:|---:|---:|
| A | leaf, size < 200B | 642 | 93 | 190 | 67 | 0 | 291 | 0 | 14.5% | 44.2% | 32.9% |
| B | leaf, 200-500B | 84 | 0 | 16 | 46 | 0 | 22 | 0 | 0.0% | 19.0% | 0.0% |
| C | call-bearing, size < 500B | 675 | 17 | 184 | 280 | 0 | 188 | 6 | 2.5% | 29.8% | 8.5% |
| D | call-bearing 500B+ / large / indirect-heavy | 599 | 0 | 67 | 489 | 0 | 36 | 7 | 0.0% | 11.2% | 0.0% |
| X | no full_export block (unstratifiable) | 4 | 0 | 0 | 0 | 0 | 0 | 4 | 0.0% | 0.0% | 0.0% |
| **合计** | — | **2004** | **110** | **457** | **882** | **0** | **537** | **15** | **5.5%** | **28.3%** | **19.4%** |

注：匹配率 = MATCH/(MATCH+MISMATCH)，表示“已进入字节对拍者”的全等率；末判率 = MATCH/抽样数，是端到端机械通过率。

## 1. 方法与抽样口径

- 普查前剩余未判定函数 **18071**（= 抽样后剩余 16067 + 本轮 2004）；按调用/尺寸四层分层，每层先取 500（B 层物理上只有 84 件 → 由 A/C/D 按剩余池质量比例补足到 2,000）。
- 采样 = 层内按难度键 `(size, calls, indirect, ds, addr)` 排序后的**确定性系统（分位）抽样**，输出序 = 易→难；part 顺序即难度递增。
- 已判定集合 = `status.json`（1,000）∪ `results.jsonl`（949，去重后并集 1,007）；普查地址不含其中任何一件。
- 规则 6：转换/编译失败同样 emit 完整实现，只是 verdict 为 COMPILE_FAIL / MISMATCH；无 stub 降级。
- X 层（无 full_export 块）4 件单独跑，不进 2,000 口径。

### 1.1 层池与抽样量

| 层 | 抽样 | 抽样后剩余池 | 备注 |
|---|---:|---:|---|
| A | 642 | 5513 | leaf, size < 200B |
| B | 84 | 0 | leaf, 200-500B |
| C | 675 | 6839 | call-bearing, size < 500B |
| D | 599 | 3715 | call-bearing 500B+ / large / indirect-heavy |
| X | 4 | 0 | no full_export block (unstratifiable) |

## 2. 病理分布

### 2.1 MISMATCH 首差分类（按层）

| pathology | A | B | C | D | X |
|---|---:|---:|---:|---:|---:|
| codegen_shape | 51 | 9 | 65 | 24 | 0 |
| regalloc | 14 | 2 | 47 | 15 | 0 |
| const_fold | 40 | 0 | 16 | 5 | 0 |
| branch_order | 50 | 0 | 10 | 0 | 0 |
| branch_polarity | 10 | 0 | 13 | 6 | 0 |
| cc_mismatch | 6 | 1 | 17 | 0 | 0 |
| frame_sched | 1 | 3 | 7 | 11 | 0 |
| eval_order | 5 | 1 | 1 | 2 | 0 |
| extern_reloc | 6 | 0 | 2 | 1 | 0 |
| width_mismatch | 3 | 0 | 3 | 1 | 0 |
| ret_norm | 3 | 0 | 2 | 1 | 0 |
| signedness | 1 | 0 | 1 | 1 | 0 |

### 2.2 COMPILE_FAIL 首错码（按层）

| Cxxxx | A | B | C | D | X |
|---|---:|---:|---:|---:|---:|
| C2664 | 3 | 0 | 44 | 75 | 0 |
| C2065 | 12 | 7 | 42 | 46 | 0 |
| C2440 | 3 | 4 | 21 | 50 | 0 |
| C2143 | 0 | 0 | 9 | 49 | 0 |
| C2039 | 2 | 0 | 40 | 15 | 0 |
| C2146 | 3 | 2 | 5 | 47 | 0 |
| C2109 | 8 | 8 | 14 | 23 | 0 |
| C2100 | 17 | 19 | 5 | 6 | 0 |
| C2228 | 3 | 0 | 9 | 26 | 0 |
| C2018 | 0 | 0 | 14 | 23 | 0 |
| C2061 | 0 | 0 | 12 | 19 | 0 |
| C2665 | 0 | 0 | 7 | 15 | 0 |
| C2653 | 3 | 0 | 11 | 6 | 0 |
| C2059 | 2 | 0 | 8 | 8 | 0 |
| C2106 | 5 | 0 | 6 | 7 | 0 |
| C2036 | 0 | 1 | 10 | 7 | 0 |
| C2227 | 0 | 0 | 4 | 14 | 0 |
| C2079 | 0 | 0 | 1 | 12 | 0 |

### 2.3 转换/归属类失败（按层）

| 层 | NO_CLS | CONV_FAIL | NO_PSEUDO | NO_EXPORT | DUP_SKIP | OBJ_EXTRACT_FAIL |
|---|---:|---:|---:|---:|---:|---:|
| A | 291 | 0 | 0 | 0 | 0 | 1 |
| B | 22 | 0 | 0 | 0 | 0 | 0 |
| C | 188 | 0 | 4 | 2 | 0 | 0 |
| D | 36 | 0 | 3 | 2 | 2 | 0 |
| X | 0 | 0 | 0 | 4 | 0 | 0 |

### 2.4 归属形态 × verdict（为什么某些层读数为 0）

| 层 | 形态 | 件数 | MATCH | MISMATCH | COMPILE_FAIL | NO_CLS |
|---|---|---:|---:|---:|---:|---:|
| A | named class | 295 | 76 | 170 | 48 | 0 |
| A | unknown | 28 | 9 | 12 | 7 | 0 |
| A | global(无类) | 319 | 8 | 8 | 12 | 291 |
| B | named class | 7 | 0 | 2 | 5 | 0 |
| B | unknown | 35 | 0 | 13 | 22 | 0 |
| B | global(无类) | 42 | 0 | 1 | 19 | 22 |
| C | named class | 378 | 17 | 143 | 212 | 0 |
| C | unknown | 71 | 0 | 26 | 45 | 0 |
| C | global(无类) | 226 | 0 | 15 | 23 | 188 |
| D | named class | 427 | 0 | 54 | 368 | 0 |
| D | unknown | 118 | 0 | 12 | 104 | 0 |
| D | global(无类) | 54 | 0 | 1 | 17 | 36 |
| X | named class | 2 | 0 | 0 | 0 | 0 |
| X | global(无类) | 2 | 0 | 0 | 0 | 0 |

### 2.5 NO_CLS 构成（全部是无类归属的全局函数）

| 形态 | 件数 | 构造性含义 |
|---|---:|---|
| sub_* | 443 | 未命名全局函数；`sub_XXXX` 是合法标识符，无需语义命名即可发射 |
| named global helper | 62 | 已有语义名的全局函数 |
| _CRT/other | 18 | CRT/运行时入口 |
| nullsub_* | 13 | 空体桩 |
| j_* | 1 | 跳转别名 |

> 根因：`decompile.run_function()` 在 `sig["cls"] is None` 时硬失败（`no registry class`）。发射器本来就有 `free` （文件级 `__cdecl`）通道，但该门在签名推导后立即拦截——这是本轮最大的单点可修面（占样本 26.8%）。

### 2.6 编译墙位置：cpp 函数体 vs hpp 声明

| 层 | cpp 体内错误 | hpp/include 声明错误 | hpp 占比 |
|---|---:|---:|---:|
| A | 61 | 6 | 9% |
| B | 44 | 2 | 4% |
| C | 245 | 35 | 12% |
| D | 372 | 117 | 24% |
| X | 0 | 0 | 0% |

> 声明侧代表例：`wchar_t * _wcschr(const wchar_t *Str p0, wchar_t p1)` —— IDA 原型参数名（`Str`/`DstCh`）被并进类型串，再拼 ` p0` → C2146 成批出现；`extern int else(int, ...);` —— 控制关键字被当成被调函数名 → C2143。体侧代表例：`SetString(..., DataGlobal_825BF8)` 全局以 `unsigned int` 发射、形参要求 `void *` → C2664。

## 3. 吞吐率

| 层 | parts | 函数 | 墙钟秒 | 秒/件 | 件/小时 |
|---|---:|---:|---:|---:|---:|
| A | 33 | 642 | 484 | 0.8 | 4775 |
| B | 5 | 84 | 76 | 0.9 | 3969 |
| C | 34 | 675 | 575 | 0.9 | 4226 |
| D | 30 | 599 | 605 | 1.0 | 3565 |
| **合计** | **102** | **2000** | **1740** | **0.9** | **4138** |

口径：part 墙钟 = `run_census.py` 子进程调用 batch_run 的耗时（含伪码转换、发射、编译、抽取、对拍与提交前记账；不含 git commit 本身）。D 层的单件耗时受大函数/多调用支配。

### 3.1 每 part 明细

| 层 | part | n | 秒 | verdicts |
|---|---:|---:|---:|---|
| A | p00 | 20 | 12.9 | COMPILE_FAIL=1 MATCH=4 MISMATCH=1 NO_CLS=10 |
| A | p01 | 20 | 17.5 | COMPILE_FAIL=1 MATCH=14 MISMATCH=5 |
| A | p02 | 20 | 34.0 | MATCH=13 NO_CLS=7 |
| A | p03 | 20 | 16.8 | COMPILE_FAIL=2 MATCH=6 MISMATCH=1 NO_CLS=11 |
| A | p04 | 20 | 18.6 | COMPILE_FAIL=1 MATCH=9 MISMATCH=6 NO_CLS=4 |
| A | p05 | 20 | 17.0 | MATCH=18 MISMATCH=2 |
| A | p06 | 20 | 14.8 | MATCH=8 MISMATCH=1 NO_CLS=11 |
| A | p07 | 20 | 12.9 | MATCH=3 MISMATCH=2 NO_CLS=15 |
| A | p08 | 20 | 14.8 | COMPILE_FAIL=8 MATCH=2 MISMATCH=5 NO_CLS=5 |
| A | p09 | 20 | 13.9 | MISMATCH=1 NO_CLS=19 |
| A | p10 | 20 | 14.5 | COMPILE_FAIL=1 MATCH=1 MISMATCH=1 NO_CLS=17 |
| A | p11 | 20 | 11.4 | MISMATCH=1 NO_CLS=19 |
| A | p12 | 20 | 2.2 | NO_CLS=20 |
| A | p13 | 20 | 2.2 | NO_CLS=20 |
| A | p14 | 20 | 2.3 | NO_CLS=20 |
| A | p15 | 20 | 2.2 | NO_CLS=20 |
| A | p16 | 20 | 14.7 | MISMATCH=2 NO_CLS=18 |
| A | p17 | 20 | 20.0 | COMPILE_FAIL=1 MATCH=5 MISMATCH=2 NO_CLS=12 |
| A | p18 | 20 | 11.8 | MATCH=1 NO_CLS=19 |
| A | p19 | 20 | 15.0 | MISMATCH=6 NO_CLS=14 |
| A | p20 | 20 | 15.7 | MISMATCH=5 NO_CLS=15 |
| A | p21 | 20 | 16.9 | MISMATCH=20 |
| A | p22 | 20 | 16.6 | MISMATCH=20 |
| A | p23 | 20 | 16.8 | COMPILE_FAIL=7 MATCH=2 MISMATCH=10 NO_CLS=1 |
| A | p24 | 20 | 16.8 | COMPILE_FAIL=1 MATCH=3 MISMATCH=13 NO_CLS=3 |
| A | p25 | 20 | 17.2 | COMPILE_FAIL=3 MISMATCH=16 NO_CLS=1 |
| A | p26 | 20 | 16.2 | COMPILE_FAIL=8 MATCH=1 MISMATCH=9 NO_CLS=2 |
| A | p27 | 20 | 17.2 | MATCH=1 MISMATCH=19 |
| A | p28 | 20 | 20.3 | COMPILE_FAIL=10 MISMATCH=7 NO_CLS=2 OBJ_EXTRACT_FAIL=1 |
| A | p29 | 20 | 15.6 | COMPILE_FAIL=3 MATCH=1 MISMATCH=16 |
| A | p30 | 20 | 16.4 | COMPILE_FAIL=8 MISMATCH=12 |
| A | p31 | 20 | 16.2 | COMPILE_FAIL=11 MATCH=1 MISMATCH=6 NO_CLS=2 |
| A | p32 | 2 | 12.6 | MISMATCH=1 NO_CLS=1 |
| B | p00 | 20 | 16.7 | COMPILE_FAIL=9 MISMATCH=6 NO_CLS=5 |
| B | p01 | 20 | 16.8 | COMPILE_FAIL=10 MISMATCH=2 NO_CLS=8 |
| B | p02 | 20 | 21.9 | COMPILE_FAIL=10 MISMATCH=6 NO_CLS=4 |
| B | p03 | 20 | 17.0 | COMPILE_FAIL=14 MISMATCH=2 NO_CLS=4 |
| B | p04 | 4 | 3.8 | COMPILE_FAIL=3 NO_CLS=1 |
| C | p00 | 20 | 16.0 | COMPILE_FAIL=10 MISMATCH=7 NO_CLS=1 NO_EXPORT=2 |
| C | p01 | 20 | 15.7 | COMPILE_FAIL=9 MISMATCH=5 NO_CLS=5 NO_PSEUDO=1 |
| C | p02 | 20 | 16.6 | COMPILE_FAIL=5 MATCH=2 MISMATCH=7 NO_CLS=5 NO_PSEUDO=1 |
| C | p03 | 20 | 17.1 | COMPILE_FAIL=12 MATCH=2 MISMATCH=2 NO_CLS=4 |
| C | p04 | 20 | 21.5 | COMPILE_FAIL=13 MATCH=1 MISMATCH=2 NO_CLS=4 |
| C | p05 | 20 | 16.3 | COMPILE_FAIL=9 MISMATCH=8 NO_CLS=3 |
| C | p06 | 20 | 16.4 | COMPILE_FAIL=8 MISMATCH=8 NO_CLS=4 |
| C | p07 | 20 | 16.2 | COMPILE_FAIL=9 MATCH=1 MISMATCH=2 NO_CLS=8 |
| C | p08 | 20 | 15.8 | COMPILE_FAIL=3 MATCH=1 MISMATCH=2 NO_CLS=14 |
| C | p09 | 20 | 17.0 | COMPILE_FAIL=11 MATCH=1 MISMATCH=6 NO_CLS=2 |
| C | p10 | 20 | 17.0 | COMPILE_FAIL=2 MISMATCH=12 NO_CLS=6 |
| C | p11 | 20 | 2.7 | COMPILE_FAIL=2 NO_CLS=18 |
| C | p12 | 20 | 2.6 | COMPILE_FAIL=1 NO_CLS=19 |
| C | p13 | 20 | 17.7 | COMPILE_FAIL=2 MISMATCH=14 NO_CLS=4 |
| C | p14 | 20 | 16.0 | COMPILE_FAIL=2 MISMATCH=6 NO_CLS=12 |
| C | p15 | 20 | 16.3 | COMPILE_FAIL=2 MISMATCH=7 NO_CLS=11 |
| C | p16 | 20 | 23.2 | COMPILE_FAIL=6 MATCH=7 MISMATCH=5 NO_CLS=1 NO_PSEUDO=1 |
| C | p17 | 20 | 16.4 | COMPILE_FAIL=2 MISMATCH=1 NO_CLS=17 |
| C | p18 | 20 | 18.8 | COMPILE_FAIL=9 MISMATCH=6 NO_CLS=5 |
| C | p19 | 20 | 16.7 | COMPILE_FAIL=3 MATCH=1 MISMATCH=4 NO_CLS=12 |
| C | p20 | 20 | 17.0 | COMPILE_FAIL=5 MISMATCH=3 NO_CLS=12 |
| C | p21 | 20 | 17.7 | COMPILE_FAIL=8 MISMATCH=10 NO_CLS=2 |
| C | p22 | 20 | 18.0 | COMPILE_FAIL=16 MISMATCH=2 NO_CLS=2 |
| C | p23 | 20 | 7.9 | COMPILE_FAIL=20 |
| C | p24 | 20 | 23.2 | COMPILE_FAIL=15 MATCH=1 MISMATCH=3 NO_CLS=1 |
| C | p25 | 20 | 23.5 | COMPILE_FAIL=10 MISMATCH=5 NO_CLS=4 NO_PSEUDO=1 |
| C | p26 | 20 | 17.4 | COMPILE_FAIL=9 MISMATCH=5 NO_CLS=6 |
| C | p27 | 20 | 17.7 | COMPILE_FAIL=14 MISMATCH=6 |
| C | p28 | 20 | 17.8 | COMPILE_FAIL=13 MISMATCH=7 |
| C | p29 | 20 | 23.0 | COMPILE_FAIL=11 MISMATCH=8 NO_CLS=1 |
| C | p30 | 20 | 18.2 | COMPILE_FAIL=8 MISMATCH=9 NO_CLS=3 |
| C | p31 | 20 | 18.8 | COMPILE_FAIL=4 MISMATCH=16 |
| C | p32 | 20 | 22.3 | COMPILE_FAIL=14 MISMATCH=5 NO_CLS=1 |
| C | p33 | 15 | 16.5 | COMPILE_FAIL=13 MISMATCH=1 NO_CLS=1 |
| D | p00 | 20 | 17.4 | COMPILE_FAIL=7 MISMATCH=7 NO_CLS=4 NO_EXPORT=2 |
| D | p01 | 20 | 22.2 | COMPILE_FAIL=15 MISMATCH=5 |
| D | p02 | 20 | 21.8 | COMPILE_FAIL=9 MISMATCH=7 NO_CLS=4 |
| D | p03 | 20 | 22.5 | COMPILE_FAIL=15 MISMATCH=4 NO_CLS=1 |
| D | p04 | 20 | 21.9 | COMPILE_FAIL=16 MISMATCH=3 NO_CLS=1 |
| D | p05 | 20 | 22.8 | COMPILE_FAIL=18 MISMATCH=1 NO_PSEUDO=1 |
| D | p06 | 20 | 22.2 | COMPILE_FAIL=17 MISMATCH=2 NO_CLS=1 |
| D | p07 | 20 | 21.3 | COMPILE_FAIL=14 MISMATCH=2 NO_CLS=4 |
| D | p08 | 20 | 22.9 | COMPILE_FAIL=15 MISMATCH=2 NO_CLS=3 |
| D | p09 | 20 | 22.1 | COMPILE_FAIL=18 MISMATCH=2 |
| D | p10 | 20 | 22.4 | COMPILE_FAIL=11 MISMATCH=9 |
| D | p11 | 20 | 22.8 | COMPILE_FAIL=18 MISMATCH=2 |
| D | p12 | 20 | 22.0 | COMPILE_FAIL=13 MISMATCH=3 NO_CLS=4 |
| D | p13 | 20 | 22.3 | COMPILE_FAIL=16 MISMATCH=2 NO_CLS=2 |
| D | p14 | 20 | 21.6 | COMPILE_FAIL=18 MISMATCH=2 |
| D | p15 | 20 | 22.7 | COMPILE_FAIL=17 MISMATCH=2 NO_CLS=1 |
| D | p16 | 20 | 23.2 | COMPILE_FAIL=15 MISMATCH=4 NO_CLS=1 |
| D | p17 | 20 | 12.0 | COMPILE_FAIL=17 NO_CLS=2 NO_PSEUDO=1 |
| D | p18 | 20 | 13.7 | COMPILE_FAIL=20 |
| D | p19 | 20 | 14.1 | COMPILE_FAIL=17 NO_CLS=2 NO_PSEUDO=1 |
| D | p20 | 20 | 14.3 | COMPILE_FAIL=19 NO_CLS=1 |
| D | p21 | 20 | 13.6 | COMPILE_FAIL=18 NO_CLS=2 |
| D | p22 | 20 | 22.6 | COMPILE_FAIL=18 MISMATCH=2 |
| D | p23 | 20 | 23.1 | COMPILE_FAIL=19 MISMATCH=1 |
| D | p24 | 20 | 24.3 | COMPILE_FAIL=17 MISMATCH=3 |
| D | p25 | 20 | 23.6 | COMPILE_FAIL=17 DUP_SKIP=1 MISMATCH=1 NO_CLS=1 |
| D | p26 | 20 | 14.5 | COMPILE_FAIL=18 NO_CLS=2 |
| D | p27 | 20 | 25.4 | COMPILE_FAIL=19 MISMATCH=1 |
| D | p28 | 20 | 17.2 | COMPILE_FAIL=20 |
| D | p29 | 19 | 12.3 | COMPILE_FAIL=18 DUP_SKIP=1 |

## 4. 全池机械化：还需多少轮、终点数字

| 层 | 剩余 | 观测端到端 MATCH 率 | 编译率 | 层内对拍匹配率 | 剩余预期 MATCH（观测率） | 剩余预期 MATCH（墙清零上限*） |
|---|---:|---:|---:|---:|---:|---:|
| A | 5513 | 14.5% | 44.1% | 32.9% | 799 | 1397 |
| B | 0 | 0.0% | 19.0% | 0.0% | 0 | 0 |
| C | 6839 | 2.5% | 29.8% | 8.5% | 172 | 1092 |
| D | 3715 | 0.0% | 11.2% | 0.0% | 0 | 634 |
| X | 0 | 0.0% | 0.0% | 0.0% | 0 | 0 |
| **合计** | **16067** | — | — | — | **971** | **3123** |

\* 上限口径：把所有 `COMPILE_FAIL` / `CONV_FAIL` / `NO_CLS` / `DUP_SKIP` 视为可修复，并按**全普查对拍匹配率 19.4%**（110/567）折算；B/D 层层内匹配率为 0（样本小且全是硬件），不能直接外推。

- 当前已判定函数（results 末值 ∪ ledger）≈ **3011**，其中 MATCH（OK）≈ **579**。
- 若按本次观测到的端到端通过率机械推进，剩余 16067 件预计再产出 **971** 件 MATCH（端点 ≈ 579 + 971 = **1550**）。
- 若把本轮暴露的编译墙/转换墙全部当作可修（按全普查对拍匹配率 19.4% 折算上限），剩余上限约 **3123** 件。

- **机械铺满**：当前吞吐 **4138 件/小时**（本次 2000 件 / 0.5 小时）。跑完剩余 16067 件约需 **3.9 小时** = **8 个 2,000 件轮次** = 803 个 20 件 part。
- **质量终点**：按当前产线（不修任何墙）机械跑完全池，端到端 MATCH 还有约 **971** 件，全池 MATCH 约 **1550 / 19,078 = 8.1%**；编译/转换墙全清的上限约 **3702 / 19,078 = 19.4%**。
- **还差几轮修复**：本轮 882 件编译墙分布在 **36 个首错族**（C2664/C2065/C2440/C2143/C2039/C2146/C2109/C2100…）。按 R7 实测（326 件墙一轮供给修复转化 76 件 ≈ 23%）线性外推，清完这批墙约需 **4–6 轮**同类供给修复；但易族已被 R5–R8 清掉，长尾更慢，实际更可能是 **6–8 轮**（每轮以首错 census 分桶为目标）。
- **结论**：机械覆盖本身是 **1 个工作日**（≈ 3.9 小时）就能铺满的事；决定最终数字的不是轮次数量，而是编译墙的清理深度。在不修墙的前提下继续铺量，终点只有约 8.1%；每清掉一层墙，终点按 19.4% 的对拍匹配率上移。

## 5. 抽样构成（命名维度，仅记录不阻塞）

| 层 | 全局/无类名 | unknown 类 | 有名类 |
|---|---:|---:|---:|
| A | 319 | 28 | 295 |
| B | 42 | 35 | 7 |
| C | 226 | 71 | 378 |
| D | 54 | 118 | 427 |
| X | 2 | 0 | 2 |

## 6. 局限

- 通过率是**当前产线成熟度**的测量值，不是理论极限；编译墙（COMPILE_FAIL）与转换墙（NO_CLS/CONV_FAIL）是本轮暴露的主要可修面。
- B 层剩余池仅 84 件，抽样即全量；其读数置信度低于 A/C/D。
- 20 件/part 的 part 内单位合并会放大同类函数的编译耦合（一个 unit 失败 → 逐件隔离重编），吞吐口径已包含该成本。
- 命名质量按用户裁决搁置；本报告只按层/verdict/病理统计。

