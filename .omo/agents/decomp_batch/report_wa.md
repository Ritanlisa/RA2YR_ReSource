# W-A —— 常量族攻坚（机制确证 + 生成器反哺）

> 工单：`report_w_series.md` §1 W-A（D_CONST_FOLD 736 + D_CONST_FP 273 + D_IMM 322 = 1,331 件，NG 3,746 的最高 ROI 族）。
> 执行：2026-11-12（probe 模式：全程**不写账本**，CW5 占用批跑通道）。
> 结论：**机制不是“常量拼写”，而是“Hex-Rays 把 .rdata 的 double 载入折叠成了数字字面量”**。
> 按函数自身 disassembly 恢复符号引用后：**D_CONST_FOLD 100/100、D_CONST_FP 88/100 经完整生成链翻转为 MATCH**
> （真实 batch 通道同源、无账本写入），并顺带翻转 **D_RELOC 抽样 8/16**。D_IMM 的 0/60 证实其不属于本机制。
> 规则已反哺生成器：`wa_const.restore_data_constants`（decompile.py 管线内），确定性、0 违规、0 回归面
> （2,654 个账本 OK 函数**全部**无 FP 字面量 → 规则不可能触碰它们）。

---

## 0. 结论速览

| 指标 | 数值 |
|---|---:|
| 探针样本（3 桶 × 20） | 60 |
| 探针变体命中 | **30**（50.0%；有效上下文 30/32 = 93.8%） |
| ├ D_CONST_FOLD | **13/20**（65.0%；有效上下文 **13/13 = 100%**） |
| ├ D_CONST_FP | **17/20**（85.0%；有效上下文 17/19 = 89.5%） |
| └ D_IMM | 0/20（0%，7 件无可生成变体） |
| 生成器 A/B（折叠桶抽样） | **100/100 MISMATCH → MATCH**（0 回退） |
| 生成器 A/B（FP 桶抽样） | **88/100 MISMATCH → MATCH**（0 回退） |
| 生成器 A/B（D_IMM 抽样） | 0/60（0 回退） |
| 生成器 A/B（非 W-A 随机 100） | **8 翻转，全部 D_RELOC**（D_RELOC 抽样 8/16 = 50%），0 回退 |
| 回退验证（账本 OK 全量扫描） | **2,654 个 OK 函数全部无 FP 字面量 → 规则 0 触发面** |
| 规则合规 | 折叠 100/100 变体 0 违规；FP 99×0 + 1 件既有 4 条未变；探针 30/30 clean |
| 确定性 | 同输入双跑 sha256 一致 |
| 预期账本收益（批跑解禁后） | **≈ +1,250**（fold ~736 + FP ~240 + RELOC ~278）；当前账本 NG **3,942** → ~2,700 |

> 账本口径说明：W 系列普查的 3,746 行是 CW5 收尾前的 NG 快照；执行时实测账本
> NG 3,942 / OK 2,654 / CF 1,889（CW5 把 196 件 CF 转成 MISMATCH）。**交集核验：3,746 行
> 全部仍在当前 NG 账本中**（fold/fp/imm/reloc 逐桶 100% 命中 NG），因此下文所有翻转收益
> 都是对当前账本的**净增量**。

**一句话**：W-A 的 1,331 件里，与“常量拼写”无关；真正的机制是**载入折叠（load folding）**——
Hex-Rays 把 `fld ds:dbl_7E1700; fmul ds:dbl_7E1720` 渲染成 `0.0174532925199433 * 45.0`，
era 编译器再把字面量表达式整体折叠成立即数存储（`mov [x], imm64`），或把 `x / 60.0` 强度削减成倒数乘法。
把字面量换回 disassembly 里的 `dbl_XXXX` 符号即可逐字节复原。

---

## 1. 机制与证据

### 1.1 折叠机制（D_CONST_FOLD，736 件全部同一 detail）

样本 `0x403D50`（full_export 原文）：

```
// ---- IDA disasm ----
403d50: fld ds:dbl_7E1700      ; -> dbl_7E1700
403d56: fmul ds:dbl_7E1720     ; -> dbl_7E1720
403d5c: fstp dbl_87E260        ; -> dbl_87E260

// ---- Hex-Rays ----
dbl_87E260 = 0.0174532925199433 * 45.0; /*0x403d5c*/
```

- 生成器（现状）输出 `DataGlobal_87E260 = 0.0174532925199433 * 45.0;`
- era 编译器把常量表达式折叠 → `mov dword ptr [x], 0x54442d1a; mov dword ptr [x+4], 0x3fe921fb; ret`（21B）
- 原版：`fld [0x7e1700]; fmul [0x7e1720]; fstp [0x87e260]; ret`（19B）

**修复**：把两个字面量换回 disassembly 中的符号（exact bytes 实测：0x7E1700 = `39 9d 52 a2 46 df 91 3f` = 0.017453292519943295；0x7E1720 = 45.0），
并按 VC6 的求值顺序交换两个操作数：

```c
DataGlobal_87E260 = dbl_7E1720 * dbl_7E1700;   // 逐字节 MATCH（19B）
```

**为什么必须交换**（微观实测 `wa_micro.py`，era CL /O2）：

| 源码 | 目标码 | reloc 顺序 |
|---|---|---|
| `c = a * b` | `fld b; fmul a` | **右操作数先载入** |
| `c = a + b` | `fld b; fadd a` | 右操作数先载入 |
| `c = a / b` | `fld a; fdiv b` | 左操作数先载入（非交换） |
| `c = a * 45.0` | `fld a; fmul [常量池]` | 变量先载入 |
| `c = 45.0 * a` | `fld a; fmul [常量池]` | 变量先载入 |
| `ic = ia * ib` | `mov eax, [ib]; imul eax, [ia]` | 右先（整数乘） |
| `ic = ia + ib` | `mov eax, [ia]; mov ecx, [ib]; add ecx, eax` | **左先（整数加）** |

因而交换规则限定为：**两个操作数都是本次恢复的 FP 符号**且算子为 `*`/`+`。整数加绝不交换。
Hex-Rays 按指令序打印伪码（`fld` 在前 → 伪码左操作数），era 编译器 x87 先载右操作数 → 源码必须反向。

### 1.2 倒数乘法机制（D_CONST_FP，247/273 同一 detail `fdiv|fmul reciprocal`）

```
403d10: fld  ds:dbl_87E1A0     ; 变量
403d16: fdiv ds:dbl_7E16F8     ; .rdata 常量 60.0
403d1c: fstp dbl_87E280
```

Hex-Rays：`dbl_87E280 = dbl_87E1A0 / 60.0;`
MSVC6 对“除以字面常量”做强度削减 → `fmul [倒数常量池]`。原版是**除以内存常量**（`fdiv`）。
恢复 `dbl_7E16F8` 后：`DataGlobal_87E280 = DataGlobal_87E1A0 / dbl_7E16F8;` → `fld; fdiv; fstp` 逐字节 MATCH。

### 1.3 1.0 常量机制（D_RELOC 交叉覆盖，抽样 8/16）

```
6b50c0: fld ds:dbl_7E1718      ; .rdata 中的 1.0
6b50c6: fdiv dbl_B0B7E0
6b50cc: fstp dbl_B0B7C8
```

Hex-Rays：`dbl_B0B7C8 = 1.0 / dbl_B0B7E0;` —— 分子字面量 `1.0` 原来是 `dbl_7E1718`。
恢复后 `dbl_B0B7C8 = dbl_7E1718 / dbl_B0B7E0;` → MATCH。这类函数在普查中被归入 D_RELOC
（“sequence identical modulo reloc/addr”），因为我们的旧形态根本没有 reloc（字面量无重定位）。

### 1.4 值匹配必须容忍 Hex-Rays 的 16 位打印

`0.0174532925199433`（16 位有效数字）≠ 真实 double 0.017453292519943295 的位模式。
匹配规则（`wa_variants._fp_equal`）：① 字面量按 double 解析后位级相等；或 ② 用二进制值按
`%.16g / %.17g / %.15g` 重打印等于字面量文本；或 ③ 相对误差 ≤1e-12（float 1e-6）。
仅接受**类型为 double/float** 的数据符号（拒绝 4 字节整数符号位型巧合）。

---

## 2. 变体族与探针命中率（60 样本，frozen part 上下文）

探针 = `wa_probe.py`：复制产生该 MISMATCH 的原始 part 目录（含 include 树），只替换目标函数体；
每变体先过 `checker.py`（只允许不新增违规），`era_compile` → COFF 单函数切片 → `diffasm` 对拍。
未写账本、未跑 batch_run 主驱动。

| 族 | 变体 id | 语义 | n | 命中 | 结论 |
|---|---|---|---:|---:|---|
| **符号恢复** | `SYM` | 字面量 → 同语句内 disasm 载入的 `dbl_XXXX` | 34 | **17** | 除法/1.0 形态全中 |
| **符号恢复+交换** | `SYM_SWAP` | 上述 + 双 FP 符号 `*`/`+` 交换 | 14 | **13** | 折叠形态全中 |
| 单站点恢复 | `SYM_ONE_i[_SWAP]` | 只换第 i 个字面量 | 6 | 0 | 值不全 → 仍多一次常量池载入（合理失败） |
| FP 位级重拼写 | `FPB` | `0.0174532925199433` → `0.017453292519943295` | 1 | 0 | **证伪**：两种拼写解析成同一个 double，仍被折叠，不产生 load |
| bool→int 惯用法 | `BOOL_CAST/TERN/UCH/UNC` | `(E!=0)` ↔ `(bool)E` ↔ `(E?1:0)` | 9 | 0 | **证伪**（见 §6） |
| 立即数拼写 | `IMM_HEX/DEC/SHR/AND/SHL` | 十进制↔十六进制、除法↔移位等 | 9 | 0 | **证伪**：同值拼写是 codegen-neutral；D_IMM 首差实际是成员偏移/帧大小 |

分桶：

| 桶 | n | 探针命中 | 有效上下文 | 备注 |
|---|---:|---:|---:|---|
| D_CONST_FOLD | 20 | **13** | 13/13 = 100% | 7 件 part 快照本身已不能编译（stale context，见下） |
| D_CONST_FP | 20 | **17** | 17/19 = 89.5% | 2 件 NO_HIT 是 `unk_`（字节型）全局承载 double → W2_WIDTH |
| D_IMM | 20 | 0 | 0/19 | 7 件无可生成变体；其余首差为 `[ecx+0xc] vs [ecx+0x40]` / `esp,8 vs esp,0xc` 类 |

**stale context**：部分历史 part 目录的 unit 在当前 include 树/编译器下**原样就编译失败**
（例：`_addr_4E.cpp` 的 `((Math *)(v0 * ...))->RoundToInt()`，C2440）。探针为此加了
“基线原样编译”守卫，此类记 `SKIP_STALE_CONTEXT` 而不是归罪于变体。生成器 A/B 从源码重新生成，
不受此影响（fold 100/100 即证）。

---

## 3. 生成器反哺（`wa_const.restore_data_constants`）

### 3.1 实现

- 新文件 `tools/decomp_sys/wa_const.py`；`decompile.py` 在 `pass_globals` 之后插入 1 处调用（+8 行）。
- 只使用函数**自身**的 export disassembly（`ctx.ex.disasm_lines`）+ 链接镜像字节（`D:\RA2MD\gamemd.exe`）。
- 语句跨度限制：Hex-Rays 每条语句末尾有 `/*0xADDR*/`（该语句最后一条指令地址）。字面量只能匹配
  **同一语句跨度内**的载入符号 —— 防止“函数别处载入了 0.5，就把本语句真正的字面量 0.5 也换掉”。
- 只接受**载入**操作数：`fstp dbl_X` / `mov [dbl_X], eax` / `lea` 的目标槽被排除
  （否则未初始化 .data 的 0 值会匹配字面量 `0.0`）。
- 值匹配：`wa_variants._fp_equal`（§1.4），仅 double/float 符号。
- 交换：仅当两个操作数都是本 pass 恢复的 FP 符号且算子为 `*`/`+`（§1.1 微观实测）。
- 声明：写入 `ctx.used_globals[name]=double/float`；`pass_residual_idents` 亦会自动声明
  `dbl_/flt_` 前缀（`_CW5_IDA_DATA`），双保险。
- 环境开关 `DECOMP_NO_DATA_CONST=1` 关闭（A/B 用）。

### 3.2 A/B 验证（`wa_ab.py`：同一地址集，`batch_run.run_part` 全链跑两遍，off=开关禁用）

| cohort | n | off→on 翻转 | 回退 | 说明 |
|---|---:|---:|---:|---|
| 探针命中 30 件 | 30 | **30 MATCH** | 0 | 生成器复现探针的变体结果；30/30 clean、0 违规 |
| D_CONST_FOLD 随机 100 | 100 | **100 MATCH** | 0 | 100/100 违规 0→0 |
| D_CONST_FP 随机 100 | 100 | **88 MATCH** | 0 | 99 件 0→0 + 1 件既有 4 条不变 |
| D_IMM 随机 60 | 60 | 0 | 0 | 彻底证伪该桶与本机制相关 |
| 非 W-A 随机 100 | 100 | **8（全 D_RELOC）** | 0 | D_RELOC 抽样 8/16 = 50%；其余桶 0 |
| pilot 6 件 | 6 | 0 | 0 | 3 MATCH 保持、3 MISMATCH 保持 |
| **账本 OK 全量扫描** | **2,654** | — | **0 触发面** | OK 函数**没有一个**含 FP 字面量 |
| 确定性（30 件双跑） | 30 | sha256 一致 | — | 无随机源 |

**回归面论证**：pass 只在“语句跨度内存在 double/float 符号 + 语句内有 FP 字面量”时动作。
账本 2,654 个 OK 函数经全量扫描：**0 个**同时满足这两个条件 → 该 pass 对历史 OK 集合的
可触发面为空集（不是“抽样没坏”，而是“不可能触发”）。这与 CW4 的 100 件抽样回归互补。

---

## 4. 残余归因（88% 之外）

D_CONST_FP 100 抽样中的 12 件 MISMATCH：

| 类别 | 件数 | 例 | 归属 |
|---|---:|---|---|
| `unk_`（字节型）全局承载 double | ~6 | `fld qword [0x7e...]` vs `push ecx`；`fstp qword [unk]` vs `call` | **W2_WIDTH**（把 .data 全局按 double 宽度声明/使用） |
| 整数化指令选择 | 1 | `mov eax,[esp+4]` vs `fild [esp+4]` | 源形 cast（`(int)` vs 隐式）——非 W-A |
| 结构/求值序 | ~5 | `fld [esp+4]` 前多/少临时槽；`sub esp` 帧差 | R_STRUCTURAL / R_REGALLOC |

D_CONST_FOLD 100 抽样 **0 残余**（该桶 detail 100% 同一，机制完全同质）。

---

## 5. 预期账本收益与后续

- **D_CONST_FOLD 736 × ~100% = ~736**
- **D_CONST_FP 273 × 88% = ~240**
- **D_RELOC 555 × ~50% = ~278**（8/16 抽样，置信低于前两项；需全量批跑确认）
- 合计 **≈ +1,250 → 当前账本 NG 3,942 → ~2,700**（工单原估 +400-650 偏保守）。
  W 系列 3,746 行与当前 NG 账本交集 = 3,746（全部仍是 NG），故为净增量。

**执行要求**：等 CW5 释放批跑通道后，按正常 batch 通道全量重跑三桶（+D_RELOC），由
`batch_run.main` 写账本；本报告的所有数字均为 probe/A-B 结果，**账本未动**（遵守 probe 约定）。

---

## 6. 被证伪的假说（勿重跑）

1. **FP 字面量位级往返（FPB）**：把 `0.0174532925199433` 重拼成 17 位精确十进制，
   era strtod 解析为同一个 double → 依旧被折叠，不产生 `fld`。0/1（探针），机制上不可能命中。
2. **bool→int 惯用法（BOOL）**：对 `((x&1)!=0)+1` 及 15 种等价源形（`(bool)`、`?1:0`、
   `(unsigned char)`、`bool b=...`、`==1`、`!!`、`true+`、`BOOL` typedef 等）做微观编译（`wa_micro_bool.py`）：
   **没有一种**产生原版的 `and dl,1; neg dl; sbb edx,edx; neg edx; inc edx`（最接近的 `==1` 也是
   `and; dec cl; neg cl; sbb; add ecx,2`）。样本 0x401640 本身是 R_STRUCTURAL（另有 8 处结构差），
   即便 bool 形态对了也不会 MATCH。→ 该样本的取证价值仅在于说明“伪码≠源形”，不构成可反哺规则。
3. **立即数拼写（IMM）**：同值不同拼写（十进制/十六进制/移位/掩码）是 codegen-neutral；
   D_IMM 的 153 种 detail 里绝大多数是**成员偏移差**（`[ecx+0xc]` vs `[ecx+0x10]`）和
   **栈帧差**（`sub esp,8` vs `0xc`），不是常量形态。生成器 A/B 60 件 0 翻转。
4. **符号恢复但不交换**（`SYM` 在折叠样本上）：`fld [B]; fmul [A]` 顺序相反 → MISMATCH。
   交换是折叠族的必要组成，不是可选项。

---

## 7. 工件与文件

**新增工具**

| 文件 | 用途 |
|---|---|
| `tools/decomp_sys/wa_variants.py` | W-A 变体库（SYM/SYM_SWAP/FPB/BOOL/IMM/ISYM + `_fp_equal` + PE 常量读取） |
| `tools/decomp_sys/wa_const.py` | **生成器 pass**（语句跨度 + 载入符号 + 值匹配 + 交换） |
| `tools/decomp_sys/wa_probe.py` | 探针驱动（select/run/report；ledger 打桩） |
| `tools/decomp_sys/wa_ab.py` | 生成器 A/B 驱动（`batch_run.run_part` 全链，off=开关禁用，不写账本） |
| `tools/decomp_sys/wa_census_shapes.py` | 三桶 3,746 行 body 形态普查（报告 §2 的数据源） |
| `tools/decomp_sys/wa_micro.py` / `wa_micro_bool.py` | VC6 求值顺序 / bool 惯用法的微观编译证据 |

**修改**：`tools/decomp_sys/decompile.py`（+8 行：`import wa_const` + `run_function` 中
`pass_globals` 之后调用 `wa_const.restore_data_constants(ctx)`）。

**产物**（`.omo/agents/decomp_batch/wa_probe/`，gitignored）：
`wa_batch.json`（60 样本）、`report_fold.json` / `report_fp.json` / `report_imm.json`（探针）、
`ab_wa3.json` / `ab_fold100b.json` / `ab_fp100b.json` / `ab_imm60.json` / `ab_coll100c.json` /
`ab_pilot.json`（A/B）、`ab_*_off|on/`（两套完整单元产物）、`results.jsonl`、`collateral_addrs.txt` 等。

**未触碰**：`src/`、`tools/csp_export/minclass_solver.py`、账本 `.omo/codegen_match/status.json`、
CW5 的批跑目录/parts。
