# CW5 执行报告——调用点实参 / 壳供给 / 伪码残留三族修复与靶集重跑

日期：2026-11-12
性质：**修复 + 靶集全量重跑**。改动仅 `tools/decomp_sys/`；未碰 `src/`、未碰
`tools/csp_export/minclass_solver.py`、未豁免/弱化 `checker.py`。
输入：`report_cw5_prep.md` 定义的 442 件三族靶集（F7 212 + F10 133 + F8 97）。
账本：`.omo/codegen_match/status.json`；逐 part 产物：`.omo/decomp_batch/cw5_run2/`。

---

## 0. 结论速览

| 项 | 数值 |
|---|---:|
| CW5 靶集（F7 212 + F10 133 + F8 97） | **442** |
| 重跑前（三族全部 COMPILE_FAIL） | 0 / 442 |
| CW5-1/2/4 落地后（`4c69d8668`，探针） | 87 / 442 |
| + CW5-3（`cd684342d`，探针） | 119 / 442 |
| + CW5-5/6/7（`c3a2a16bb`，探针） | 145 / 442 |
| **最终（`cw5_run2` 账本重跑）** | **197 / 442 = 44.6%**（196 MISMATCH + **1 MATCH**） |
| 剩余 COMPILE_FAIL | 245 |
| 备弹上限（`report_cw5_prep.md` §0） | 243（55.0%）→ 达成 **81%** |
| 账本变化 | OK 2,653→**2,654**（+1）；NG 3,746→**3,942**（+196）；CF 2,086→**1,889**（−197） |
| 六规则红线（同 442 集） | 违规条目 **1,195→1,170**（−25）；违规函数 **190→185**（−5） |
| 零回归（30 件历史 MATCH） | **30/30 MATCH 保持** |
| 唯一新 MATCH | `0x628860`（A4 const-loss 族，`_VectorClass_...::Clear`） |

一句话：F7 的 A1/A2/A3/A5 四个机制与 F8 的 C5（GUID 常量）基本收口（A5 92%、
A2 69%、A3 63%、A1 55%）；F10 从"视图仲裁"改写为"壳供 + 偏移真值访问"后 B1/B3/B5
有实质转化但仍是最大残堆（B3/B9/B1 合计 71 件 CF）；余量集中在 C2440/C2664 长尾与
快照陈旧（`?`/asm/截断 12 件）。

---

## 1. 接手与提交链（恢复流程）

前任完成 `4c69d8668`（CW5-1/2/4）与 `cd684342d`（CW5-3）后，死于"重跑 + 报告"阶段，
且工作树留有未提交的 CW5-5/6/7 WIP。本轮按"先固化再验证"纪律处理：

| 提交 | 内容 |
|---|---|
| `4c69d8668` | CW5-1 stub 实参槽 / CW5-2 CRT 调用点表 / CW5-4 `const void*` 槽 / CW5-12 伪类 `class` 展开（前任） |
| `cd684342d` | CW5-3 间接 fn-ptr 调用实参（`__thiscall` cast 纳入）+ CRT `char*` 位置表（前任） |
| `c3a2a16bb` | CW5-5/6/7 WIP 原样固化（全局对象数组元素 / 成员层级查找 / 成员链+vfptr 偏移真值） |
| `b7261979c` | CW5-8 壳供给（registry 合并成员 + 继承链 + 名字交集）+ CW5-9/10/12 + CW5-1/2 加固 |
| `7952530b7` | `this->M_field_0xNN` 留在 this-member 通道（R3 红线修复） |
| `4a7165be6` | 解引用形实参判定（裸解引用=值；`*(T**)x` 保留指针性）+ `RegOpenKeyExA` 原型 |
| `cw5_p00..p22` × 2 轮 | 每 part 一次 commit（`cw5_run` = 中间轮 189；`cw5_run2` = 最终轮 197） |

> 说明：`cw5_run` 轮在 `7952530b7`/`4a7165be6` 之前执行（189 件），其 part 产物保留为
> 审计中间态；账本最终值以 `cw5_run2` 为准。

---

## 2. 修复清单（工单 → 状态）

| 工单 | 机制 | 状态 | 关键改动 |
|---|---|---|---|
| **CW5-1** | stub/registry callee 的调用点实参定型（指针↔int32 中性 cast） | ✅ | `pass_arg_harmonize`；`_callee_arg_types` 表；`this->M` 成员类型参与判定 |
| **CW5-2** | CRT/Win32 原型表 + 调用点 cast | ✅ 扩展 | `_CRT_CALL_TYPES`（含 `SetRect`/`OffsetRect`/`InflateRect`/`SetWindowPos`/`RegOpenKeyExA`）；先于 registry 记录；CRT 表覆盖 arg-form 放松 |
| **CW5-3** | 间接 fn-ptr 调用 cast 形参表 | ✅ | `pass_indirect_call_args`（`(**v)(...)` + `(FN)expr(...)`；`__thiscall`）+ `_FNPTR_DECL` 局部原型 |
| **CW5-4** | `const` 丢失 | ✅ | `const void *` 槽；member 通道保留 const/volatile |
| **CW5-5** | `g_X_Instance[i].M`（void* 全局数组） | ✅ | `pass_global_array_members`：stride = 最浅声明类 sizeof；元素访问改偏移真值 |
| **CW5-6** | 标量成员被当指针（`Owner->X`）/ `EXPR->vfptr` | ✅ 部分 | `pass_member_chain_reads` + `pass_arrow_vfptr`；vfptr 链/最终命名成员未覆盖 |
| **CW5-7** | 歧义成员名四级反查 | ✅ | 名内嵌偏移 / 最浅声明类 / 本函数反汇编位移 / `base+off` 绝对地址；`LOCAL.Class_field_0xNN`（CW5-7b） |
| **CW5-8** | **壳供给：壳生成器读 registry + 建模继承** | ✅ | `_cw5_unit_extra_members`（registry 合并成员 ∩ 本单元 body 名字）+ `class_layouts.parent` 链；`hpp_pilot` 以真实偏移渲染，类型不安全时用宽度载体 |
| **CW5-9** | 偏移名拼写统一 | 🟡 部分 | `u32_N`/`m_N`/`__pad_N` 名内嵌偏移进 CW5-7 通道；`u32_C` 类跨壳拼写未全收 |
| **CW5-10** | 七条 F8 小规则 | ✅ | `era_types.h`（`int32_t`/`WCHAR`/`__m64`/16 位寄存器名/`_CoreCrt...` 回调 typedef/`HKEY_*`）+ `pass_residual_idents`（`MEMORY[abs]`、模板 vftable、`__usercall`、`asc_/loc_/algn_` 数据名、GUID 常量、未声明 `g_*/s_*/p_*`、`_Vtable`、m64 切片、指针掩码合并） |
| **CW5-11** | 伪码参数/局部名映射（C9） | ❌ 未实现 | `aN` 越界、`i/in/jj` 等仍是 C2065 主残因（C9 4/20） |
| **CW5-12** | 伪类与同名函数碰撞 | ✅ | 幻影类（无 vtable/无槽/仅占位成员）被调用 → 声明 extern + 壳改名 `<Name>_Helper`；`class` 展开兜底 |

---

## 3. 方法与验收（事前定义 → 实测）

1. **样本验证（15 件）**：F7 C2664 × 5、F10 C2228 × 5、F8 C2065/C2059 × 5。
   基线 0/15 编译；最终 7/15 编译（F7 2/5、F10 3/5、F8 2/5），其余进入形态层或
   剩余长尾（如 `?` 快照 2 件按设计不可规则修复）。
2. **计数器验证**：`pass_residual_idents` / `pass_global_array_members` /
   `pass_member_chain_reads` / `pass_arg_harmonize` 均在 `ctx.sites` 记录命中
   （重跑 part 报告可见 `sites` 计数非 0；`?`/asm/截断件为 0 属快照证据已坏）。
3. **靶集全量重跑**：`run_cw5.py --run cw5_run2`，442 件分 23 part（20 件/part），
   **每 part 独立 commit**（part 目录 + part batch + `results.jsonl` + 账本 + timings）。
4. **零回归**：`r6_regress30_batch.json` 30 件历史 MATCH → **30/30 MATCH**；
   `r6_r75_sample10.json` 10 件编译保持 → 9 MISMATCH + 1 CF（见 §5，非 CW5 引入）。
5. **六规则红线**：同 442 集自检，
   违规条目 **1,195 → 1,170**、违规函数 **190 → 185**（`cw5_run2` 实测）。
   `this->M_field_0xNN` 一度被本地字段通道抢走导致 +170 条 R3，已改回 this-member
   通道（`7952530b7`）。
6. **验收口径**：本轮指标是**编译**（与 CW3 一致）；编译通过 ≠ 正确性，新编译件
   全部落在 MISMATCH 形态层（1 件 MATCH 除外），**不得**表述为"已验证正确"。

---

## 4. 结果

### 4.1 总账

| 轮次 | 编译 | CF | 备注 |
|---|---:|---:|---|
| 基线（CW3 末） | 0 | 442 | 三族全部 CF |
| `4c69d8668` 后（CW5-1/2/4） | 87 | 355 | 探针 `cw5_p1` |
| `cd684342d` 后（+CW5-3） | 119 | 323 | 探针 `cw5_p2` |
| `c3a2a16bb` 后（+CW5-5/6/7） | 145 | 297 | 探针 `cw5_p3` |
| **最终（`cw5_run2`）** | **197** | **245** | 196 MISMATCH + 1 MATCH |

### 4.2 按原首错族（CW3 口径）

| 原首错 | 转化/总数 | 转化率 |
|---|---:|---:|
| C2664（F7） | **135/212** | 63.7% |
| C2065（F8） | 26/83 | 31.3% |
| C2227（F10） | 13/44 | 29.5% |
| C2036（F10） | 7/33 | 21.2% |
| C2228（F10） | 11/31 | 35.5% |
| C2039（F10） | 2/25 | 8.0% |
| C2059（F8） | 3/14 | 21.4% |

### 4.3 按工单形态族（primary shape）

| 族 | 转化/总数 | 族 | 转化/总数 | 族 | 转化/总数 |
|---|---:|---|---:|---|---:|
| A1 stub 槽 | 46/83 | B3 成员 `->` 标量 | 8/36 | C8 未声明全局 | 5/17 |
| A2 CRT 调用点 | 38/55 | B1 全局数组元素 | 7/33 | C9 参数/局部名 | 4/20 |
| A3 间接 fn-ptr | 32/51 | B5 全局对象标量 | 10/25 | C4 宿主 typedef | 3/9 |
| A5 mangled delete | 12/13 | B2 `->vfptr` | 6/13 | C3 类型缺失 | 1/6 |
| A4 const 丢失 | 7/10 | B6 壳缺成员 | 2/4 | C6 嵌套模板 | 4/7 |
| C5 GUID 常量 | 8/9 | C11 伪类碰撞 | 3/6 | C2/C7/C10/C1/B9 | 1/31 |

（B9 16 件全部未转化 = 成员名在所有源中都不存在；C1 6 + C10 4 + C14 2 = 12 件属
快照证据已坏，按设计不改写。）

### 4.4 账本

| 状态 | 重跑前 | 重跑后 | Δ |
|---|---:|---:|---:|
| OK（字节 MATCH） | 2,653 | **2,654** | +1 |
| NG（编译过/字节不等） | 3,746 | **3,942** | +196 |
| COMPILE_FAIL | 2,086 | **1,889** | −197 |
| PENDING | 31 | 31 | 0 |
| 判定总数 | 8,516 | 8,516 | 0 |

---

## 5. 零回归与既有回归甄别

- **30 件历史 MATCH**（`r6_regress30_batch.json`）：**30/30 MATCH**（两轮复核一致）。
- **R5-75 编译保持 10 件**（`r6_r75_sample10.json`）：9 件 MISMATCH 保持编译；
  `0x402330 AudioController::UpdatePlayback` = COMPILE_FAIL。
  **甄别结论（二分实测）**：该 CF 与 CW5 无关，属 CW3 期回归——
  - `071caf559`（R6 末）：MISMATCH（编译通过）
  - `97baaf860`（NO_CLS 轮）：MISMATCH（编译通过）
  - `dcd4b0ec9`（audit remediation）：**COMPILE_FAIL**（`AudioController.hpp` 在 0x168
    新增 `char m168[1]` 元素视图后，`this->m168 = (char *)0` 变成 `char*→char[1]` C2440）
  - `1b382732e`（CW5 前）：COMPILE_FAIL
  即 CW5 的零回归口径（30 MATCH + 9/10 编译保持）成立；该项作为**既有缺陷**记录，
  建议后续在 audit 轮用"数组元素视图与标量赋值共存"规则单独修。

---

## 6. 剩余 245 件 CF 归因

按首错码（重跑后 `cw5_run2` 全量）：

| 首错 | 件 | 主要机制 | 可否继续机械修复 |
|---|---:|---|---|
| C2440 | 31 | 返回槽/`this` 外套 cast/B1 步长类型（`void*`↔`T*` 赋值） | 部分（需逐站点类型判定） |
| C2664 | 28 | 长尾：5× 间接 fn-ptr receiver 槽、`wcs*` 宽窄混用、`queueSendPacket`/`Assign` 等单点原型 | 部分（逐名补表/逐站点） |
| C2227 | 25 | `X->Y` 左侧仍非类：vfptr 链（`->vfptr.vfptr.X`）、B9 缺失成员 | 需逐件 IDA/类型证据 |
| C2039 | 25 | 成员名不存在：B9（16 件全未转化）、B8 拼写分裂（`u32_C`/`m000`/`MovieHandle`） | CW5-9 续做 + 名并集 |
| C2065 | 23 | C9 参数/局部名（`aN` 越界、`i/in/jj`、截断名 `MixFil`/`CellCl`） | CW5-11 未实现（主残因） |
| C2036 | 19 | `void*` 解引用/下标（B1 步长未知、`EXPR->vfptr.vfptr` 链） | 部分 |
| C2059 | 11 | `?` 占位（4）、asm token（6）、截断导出（2）→ 快照证据已坏 | **否**（需 IDA 重导出） |
| C2446 | 11 | 指针比较类型（`int*` vs `uint*`/`void**`） | 部分（逐站点 cast） |
| C2228 | 11 | 标量上 `.M`（全局/局部成员视图残项） | 部分 |
| C2296 | 8 | 伪码垃圾（`this = (this & ~0xFF)|...`、`char**` 参与位运算） | 逐形规则可行 |
| 其余 | 53 | C2109/C2673/C2562/C2660/C2143/C2100/C2297/C2044/C2653/… | 长尾 |

**结构性判断**：剩余件不再有单一根因。两类需要"证据侧"投入：
1. **快照重导出**（12 件：`?` / asm-body / `... [N chars total]`）——只能在 IDA
   在线 typed snapshot 重导后再生，不应写规则去伪翻译；
2. **名字/类型证据**（B9 16 件、C9 20 件、B8 5 件）——需 registry 名并集或参数名
   映射（CW5-11），属工具补全而非形态试错。

---

## 7. 复现与工件

```powershell
# 1) 单函数探针（不写账本）
python tools/decomp_sys/batch_run.py --batch <batch.json> --out <dir> --no-ledger

# 2) CW5 靶集全量重跑（每 part 一次 commit；--run cw5_run3 另起干净目录）
python tools/decomp_sys/run_cw5.py --run cw5_run2

# 3) 零回归
python .omo/decomp_batch/cw5_probe_all.py .omo/decomp_batch/cw5_regress40.json <outdir>
```

| 工件 | 内容 |
|---|---|
| `.omo/decomp_batch/cw5_targets.json` | 442 件靶集（family/shape/errfam） |
| `.omo/decomp_batch/cw5_run2/p00..p22/` | 最终轮逐 part 产物（cpp/hpp/obj/report/log） |
| `.omo/decomp_batch/cw5_run2/timings.jsonl` | 逐 part 耗时与 verdicts |
| `.omo/decomp_batch/cw5_p1..p9/` | 修复过程 no-ledger 探针（87→119→145→…→197） |
| `.omo/decomp_batch/cw5_base_p2probe/` | CW5 前基线（442/442 CF；违规 1,195/190） |
| `.omo/decomp_batch/cw5_sample15.json` | 三族样本（5/5/5） |
| `tools/decomp_sys/run_cw5.py` | 重跑驱动（分 part + 每 part commit + 断点续跑） |

---

## 8. 诚实声明与局限

1. **编译 ≠ 正确**。197 件里 196 件是 MISMATCH（形态层），只有 `0x628860` 字节 MATCH；
   本报告不声称任何新编译件"已正确"。
2. **备弹上限 243 未达**（197/243 = 81%）。未达原因已逐族定位：C9/CW5-11 未实现、
   B9 名字无源、12 件快照证据已坏、长尾 C2440/C2664 需逐站点类型证据——不是单点
   规则可再收的量。
3. **过程污染披露**：最终轮 `cw5_run2` 执行期间，另一并行会话在共享工作树写入了
   W-A（`wa_const`）未提交改动（`tools/decomp_sys/decompile.py` 的 import + 调用）。
   该改动未进入本报告任何提交；其编译判定与并行会话无关的证据是：本轮最后一次
   干净树探针（`cw5_p9`，14:19）与 `cw5_run2`（14:29–14:51）的 verdict 完全一致
   （197 = 196 MISMATCH + 1 MATCH，MATCH 同为 `0x628860`）。
4. **六规则口径**：违规计数来自 `checker.py`（R3/R4/R7）在 442 件上的自检总和；
   本轮为净下降（1,195→1,170），但 B 族偏移真值改写天然计入 R3，故残余违规集中在
   这些函数的其它站点；未通过豁免/弱化检查器来"清零"。
