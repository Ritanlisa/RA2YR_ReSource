# DECOMP R5 报告 — 编译墙攻坚：22 处修复，385 件重跑 3.4% → 19.5%

日期：2026-11-11
范围：`tools/decomp_sys/`（**未触碰 `src/`、未触碰 `minclass_solver.py`**）

---

## 0. 结论速览

| 项 | 结果 |
|---|---|
| 错误分布普查 | 385 件 COMPILE_FAIL 全量分类（§1），首错 top6 = C2440 52 / C2143 52 / C2228 40 / C2065 38 / C2059 35 / C2039 31 |
| 系统性根因 | **不止 3 类，定案 22 处**（§2），其中 4 个是**单一 bug 大族**：伪码 sweep 不消费参数、`_rebuild` 丢花括号、`_QUAL_CALL` 懒惰截断、多行 proto 泄漏 |
| 385 件重跑（编译层） | **3.4% → 19.5%（13 → 75 件编译通过）**；R4 基线 3.75% |
| 对拍顺带 | 75 件全 MISMATCH（0 MATCH）——形态层（regalloc 14 / frame_sched 12 / codegen_shape 24）= 下一战场，与 R4 §6 预测一致 |
| 回归验证 | **358/359 历史 MATCH 保持（0 回归）**；唯一翻转 0x4a3c00 经 stash 二分证实为 HEAD bbb34ab80 上的**先在回归**（账本陈旧件，非本轮引入） |
| 目标差距 | **未达 ≥50%**（诚实声明，§5）：剩余 310 件失败是**异质长尾**（最大族 C2440=88 件，且成因分散于逐函数的类型推断债），不是单点修复可扫 |

**一句话**：编译墙不是"壳供给不足"一层，而是**转换管线里四个静默文本损坏 bug + 若干类型拼写断层**的叠加；
修掉后 5 倍提升。剩余墙是逐函数的指针/整数类型推断债——需要类型层（不是文本层）的下一轮。

---

## 1. 错误分布普查（R4 的 385 件，按首错码 × 符号类别）

数据：`.omo/agents/decomp_batch/r5_census.{md,json}`（385 行 note 全量解析）。

| 首错码 | n | 类别分解 | 类别 n |
|---|---|---|---|
| C2440 | 52 | ptr↔int cast 31 / ptr→ptr 21 | 指针拼写不匹配 |
| C2143 | 52 | 语法（残留 IDA 记号）52 | 表达式被撕碎 |
| C2228 | 40 | 具名成员类型缺失 22 / pad 成员 18 | `.` 左侧非类 |
| C2065 | 38 | 局部 vN 24 / 全局具名 8 / 其他 6 | 声明位置/供给 |
| C2059 | 35 | `syntax error '?'` 35 | `stru_X.?[N]` 残留 |
| C2039 | 31 | body/hpp 视图分歧 31 | 成员表缺项 |
| C2664 | 24 | 参数转换 24 | 调用点类型 |
| C4234 | 22 | `__thiscall` 进 hpp 22 | 调用约定关键字 |
| C2109 | 15 | 非数组下标 15 | 数组视图缺失 |
| C2227 | 12 | `->` 左侧非类 12 | 成员指针类型 |
| 长尾 | ~64 | C2146/C2036/C2061/C2100/C2296/C2362/C2043… | — |

普查方式说明：note 截断于 200 字符且只含前 1-2 错，首错分布会低估下游错误；每修一族错误后移的现象在
R4 §2.3 已观察到，本轮以"逐 pass 快照探针"（`.omo/agents/decomp_batch/r5_pass_probe.py`）实锤到指令级。

## 2. 根因定案与修复（22 处，按族）

### 2.1 四个"单一 bug 大族"（文本损坏层）

| # | 根因 | 机制（实证） | 修复 | 转化验证 |
|---|---|---|---|---|
| F1 | `pass_macro_residual_sweep` 不消费参数 | `re.sub` 只替换匹配的 `LOWORD(` 片段，参数原文残留 → `((x)&0xFFFF)x)` 不平衡括号 → 后续 parse 全碎（C2143/C2059 87 件首错） | 手写平衡括号 span 拼接（passes.py） | 0x50df30：C2143 → 编译通过（MISMATCH） |
| F2 | `pseudo._rebuild` 丢 `{`/`}` 分隔符 | 重建 if 体时只回填 `;`——体内 do 块/嵌套 if 失去花括号 → 递归解析错位：空 do 体、`while(c){}` 孤儿、双 else（C2181/C2109/C2036 族） | `_rebuild` 回填**全部**分隔符（pseudo.py） | 0x4784f0：do-while 三族症状全消，错误行号从 27 → 96（深入 70 行） |
| F3 | `_QUAL_CALL` args 懒惰匹配停在第一个 `)` | 嵌套括号实参被截断 → 替换后残留 `)` 粘尾 → `(T*)(recv)->M()` 被优先级解析成对**调用结果**的 cast（C2440 AudioController*→int 族） | 平衡括号扫描重写 pass_callees 主循环 | 0x402330：C2440 → 编译通过（MISMATCH） |
| F4 | `pseudo.fetch` 多行 proto 泄漏进函数体 | 旧逻辑只在 body[0] 以 `)` 结尾时丢签名行；跨行签名整块漏进 body 当声明解析（INIClass 族 C2143 "before 'this'"） | 找首个独立 `{` 行，签名块整体丢弃 | 0x474b50：proto 垃圾声明消失 → 编译通过（MISMATCH, 207B vs 192B） |

### 2.2 声明/作用域层

| # | 根因 | 修复 | 转化验证 |
|---|---|---|---|
| F5 | `pass_scope_shrink` decl 只按**顶层**语句定位 | 嵌套分支内先用 → `int v4;` 落在用点之后（C2065 vN 24 件首错）。改为"任意深度最早提及"定位 | 0x6d5f60：`v4 undeclared` 消失 → 编译通过 |
| F6 | goto 跳过带初始化声明 → C2362 | 函数含 goto 时禁用 decl+init 合并（拆回声明+赋值，codegen 等价） | 0x475610 族编译通过 |
| F7 | 空孤儿 `else { }`（F2 的次生症状） | era_normalize 洗刷 `else {}` | 0x402330 C2181 消失 |

### 2.3 全局/结构体供给层

| # | 根因 | 修复 | 转化验证 |
|---|---|---|---|
| F8 | `stru_X.?[N]` / `stru_X.__pad_H[M]` 非法 C++（IDA 原生渲染未处理） | 新 pass_struct_globals：`((char *)stru_X)[N]` 重写 + `extern char stru_X[];`（reloc 键不变） | 0x50df30/0x44e3a0 的 `?[948]`/`__pad_58[416]` 全消 |
| F9 | `G->__pad_H[expr]` 全局指针成员形态 | 同上（char* 算术重写） | 0x4dc810 编译通过（planningPathIdx 族） |
| F10 | `stru_X.vfptrN` MI 虚表槽读取 | `((char **)stru_X)[N]` | IPXManagerClass 族 C2228 消 |
| F11 | 类名与全局变量名冲突（`class Stream` vs `extern void* Stream`） | 冲突时全局类型降级 `void *`，不产 fwd | BlitTrans 族 hpp C2143 消 |
| F12 | 类类型全局（`extern Stream * g_…`）无前向声明 | hpp 自动补 fwd | 同上 |

### 2.4 成员视图层

| # | 根因 | 修复 | 转化验证 |
|---|---|---|---|
| F13 | member_lookup 把继承成员挂在**派生类**（`inherited_from` 边未展开到基类表） | `member_offset_inherited` 两级回退：①inherited_from==cls ②全库同名偏移一致（无歧义）采信 | 0x4dc810：planningPathIdx/unknownShort524/528 全解析（AircraftClass 表回溯到 FootClass） |
| F14 | 局部指针成员访问（`v4->nextObject`）不产视图 → hpp 缺成员 | pass_member_shapes 收集局部指针声明，为 `base->mem` 记录目标类视图 | 0x44e3a0：nextObject 进 hpp |
| F15 | `m_H` 偏移编码名（m_C=0xC/m298=0x298）解析 miss | `_member_record_for` 偏移合成回退 | 模板实例类（_VectorClass__N 族）C2039 消 |
| F16 | 局部函数指针变量被当全局 callee 声明（`extern int v7(...)` 与局部声明冲突） | `^v\d+$` 跳过 | AudioController 族 hpp 语法错误消 |

### 2.5 签名/调用约定层

| # | 根因 | 修复 | 转化验证 |
|---|---|---|---|
| F17 | 函数指针类型拼写直接进声明（`int (__stdcall *)(int) Stop();` 非法） | spell_type 含 `(` → `void *` | VocClass/AudioFileClass 族 C2059 hpp 消 |
| F18 | `__thiscall` 关键字进 hpp 方法声明（VC6 C4234） | hpp 发射统一替换 `__stdcall` | 22 件首错族消 |
| F19 | proto 参数带 IDA 注释名（`size_t BufferCount`）/ `...` 进参数表 | derive_signature 剥尾词（非类型关键字）/ 跳过 varargs | TextRenderer::Printf 族 C2146 消 |
| F20 | 全局 callee extern 参数全 `int`，传 `this`/指针 → C2664 | 参数按实参形态定型（this/cast/arrow → `void*`；实参是本函数参数 → 继承其类型） | 0x41a9e0 TechnoClass::CanFireAtTarget 跨过 |
| F21 | 成员 callee 桩声明的 `char*` 参数拒收 `unsigned char*` 实参 | decl-only 桩参数放宽 `void *`（真函数声明不受影响） | 0x475610 SetString C2664 消 |
| F22 | 指针拼写赋值不匹配（ptr-local←标量全局/异型 ptr-local/ptr 视图成员←裸表达式） | pass_assign_harmonize：LHS 类型 C-cast 包装（4 字节移动，codegen 中性） | 0x433270/0x404700 族跨过 |

### 2.6 其他

- CRT 字符串族参数 `(char *)` 包装（strcpy 等 12 函数，变长参数族排除防误伤）
- return 表达式 blanket cast 到签名返回类型（`(RET)(expr)`——指针/整数 eax 语义等价）
- hpp 补 `#include <stdio.h>` / `<stdarg.h>`（sprintf/sscanf/va_list C2065）
- `_CAST_ASSIGN` 类型集扩全（unsigned int* 等 10 拼写）
- `abs16`/`abs64` 从 _CALL_KEYWORDS 移除（可 extern 声明）

## 3. 重跑结果（385 件，只到编译层 + 顺带对拍）

| 轮 | 编译通过 | 率 | 说明 |
|---|---|---|---|
| R4 基线 | 15/400 | 3.75% | 报告值 |
| R5 首轮重跑（F1-F22 前 6 修复） | 13/385 | 3.4% | 探针 5/5 过但全量未动——当时还有 F2/F3/F4 未修 |
| R5 mid60 抽样（解析器修复前） | 5/60 | 8.3% | |
| R5 mid60 抽样（`_rebuild` 修复后） | 10/60 | 16.7% | 单点翻倍——F2 是最大单一根因 |
| **R5 终轮全量 385** | **75/385** | **19.5%** | 310 件仍败 |

终轮 310 件失败首错分布：C2440 88 / C2228 30 / C2059 27 / C2664 25 / C2065 20 / C2109 17 / C2039 14 / C2106 14 / C2036 13 / 长尾~62。
（对照 §1 首轮：C2143 52→0、C4234 22→0、C2059 35→27、C2039 31→14——大单族清零或腰斩；C2440 52→88 是**下游错误显形**，原被上游语法错误遮蔽。）

75 件编译通过对拍全 MISMATCH：codegen_shape 24 / regalloc 14 / frame_sched 12 / branch_polarity 8 / const_fold 7 / branch_order 7 / extern_reloc 2 / cc_mismatch 1——与 R4 §2.4 中等函数形态层结论完全一致。

## 4. 回归验证

- 全量 359 件历史 MATCH 重跑：**358 MATCH / 1 MISMATCH**。
- 唯一翻转 0x4a3c00（CreditsScreen::Init，width_mismatch）：git stash 二分证实**裸 HEAD bbb34ab80 上同样 MISMATCH**——先在回归（R4 §4 已记 2 件账本陈旧），非本轮修复引入。
- 解析器（pseudo.py）改动风险最高，回归全绿证明 `_rebuild` 修复对已 MATCH 函数无损。

## 5. 与任务的偏差（必须声明）

1. **未达 ≥50%（实测 19.5%）**。原因不是修复无效（5.2× 提升、四个大族清零），而是：
   剩余 310 件的错误分布是**异质长尾**——最大族 C2440（88 件）的成因分散（局部指针推断、成员视图宽度、
   callee 返回类型、fn-ptr 局部……每处 ≤ 数件），**没有下一个单点根因可扫**。
   本轮探针实测：逐函数追杀 0x404700 从 C2039 → C2440(char*) → C2440(int*) → C2440(void*)——
   每修一处只过一件，净效率低于批量。
2. **错误分布普查发现根因数超过预期 3 类**：实际 22 处（§2），任务给的 4 个预期方向
   （嵌套类型/全局数组/方法声明/前向不完整）分别对应 F12/F8/F9/F21/F17 等，但**最大的四个根因
   全在转换管线的文本损坏层**（F1-F4），不在壳供给层——这是普查前未预见的。
3. 每类修复均有 ≥1 件探针转化验证（§2 表右列）；"抽样 5 件"对四个大族严格执行，
   对小族以 1-2 件代表性验证（偏差已注明）。

## 6. 下一轮建议（按 ROI）

1. **C2440 88 件分桶工单**：按「LHS 形态 × RHS 形态」分桶（ptr-local←cast / member-view←int / int←callee-ret…），
   每桶 10 件定根因——这是通往 50% 的唯一路径（需要类型层推理，不是文本层）。
2. **形态层战场开题**：75 件已编译 MISMATCH 是现成的「写法→帧序/regalloc」对照集（R4 §6.2 建议），
   frame_sched 12 + regalloc 14 件可先行。
3. do-while/`_rebuild` 修复后，`while (c) { }` 空循环体渲染缩进仍有毛刺（不影响编译，影响 diff 阅读）——
   与 hpp pilot 的 C2109（数组视图 17 件）同轮清。

## 7. 产物与复现

```
# 错误分布普查
python .omo/agents/decomp_batch/r5_census.py          # -> r5_census.{md,json}

# 逐 pass 快照探针（单函数文本演化）
python .omo/agents/decomp_batch/r5_pass_probe.py 0xADDR

# 回归 + 385 全量重跑（本轮实际执行序列）
python .omo/agents/decomp_batch/r5_full_validate.py

# 385 重跑（每 part 一 commit，20 个 checkpoint 已入 git log）
python .omo/agents/decomp_batch/run_wall385_r5.py 0 19
```

| 产物 | 路径 |
|---|---|
| 本报告 | `.omo/agents/decomp_batch/report_r5.md` |
| 普查数据 | `.omo/agents/decomp_batch/r5_census.{md,json}` + `r5_census_rows.json` |
| 385 批定义/终判 | `.omo/agents/decomp_batch/r5_wall385_batch.json` + `r5_wall385_verdicts_final.json` |
| 逐 part 报告 | `.omo/decomp_batch/r5_wall385/p00..p19/part_00/part_report.json` |
| 回归终跑 | `.omo/decomp_batch/r5_regression_final/` |
| 探针产物 | `.omo/decomp_batch/r5_probe0..15/` |
| 账本 | `.omo/codegen_match/status.json`（随 part 提交） |
| 流水 | `.omo/agents/decomp_batch/results.jsonl` |

**未触碰**：`src/` 全部、`tools/csp_export/minclass_solver.py`、`anchors/minclass_*.json`。
