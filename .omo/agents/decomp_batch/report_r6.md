# DECOMP R6 报告 — C2440 类型层修复恢复：385 口径 19.5% → 33.0%

日期：2026-11-11
范围：`tools/decomp_sys/`（**未触碰 `src/`、未触碰 `minclass_solver.py`**，六规则无越狱）

---

## 0. 结论速览

| 项 | 结果 |
|---|---|
| 上任 diff 审查 | **完整但含 3 个真 bug**（§1），审查期样本验证全部暴露并修复 |
| 样本验证（5 C2440 纯败件） | **0/5 → 5/5 编译通过**（含 R5 手工追杀未果的 0x404700） |
| 310 残墙全量重跑 | **52/310 = 16.8% 新转化**（该集合原通过率 = 0%） |
| 385 全池口径 | **75 + 52 = 127/385 = 33.0%**（R5 = 19.5%，目标 ≥40% 未达，§5） |
| 回归验证 | **30/30 历史 MATCH 保持；R5-75 抽样 10/10 编译保持**（含修复期发现的 2 件回归，已治） |
| C2440 首错族 | **88 → 15**（wall310 口径）；类型层任务本体达成 |

**一句话**：类型注入（proto + 求解器域双源）方向正确且生效——C2440 作为首错基本清空；
但上任 diff 携带 3 个静默 bug（指数回溯挂死 / arrow 误判 / rhs 跨行吞语句），
不修则全量跑批挂死在 part 11 且带 2 件真回归。修掉后残墙是**供给面**（C2228/C2664/C2059），
不再是类型拼写面。

---

## 1. 上任未提交 diff 审查（步骤 1）

### 1.1 构成（git diff，共 +549/-4）

| 文件 | 增量 | 内容 |
|---|---|---|
| `decompile.py` | +126 | `_load_solver_domains`（读 `anchors/minclass_assignments.json` 262MB + `signed_default_ledger.json`，进程内缓存）；`_domain_answer`（域唯一→类型；signed 对→ledger/signed-default 政策）；`_solver_domain_params`（参数重定型：仅 forced/narrow 置信 + 仅 int 族现拼写 + 仅唯一类指针答案 + 体内指针使用证据 `_PTR_USE`）；接入 `derive_signature`；`pass_receiver_arith` / `pass_assign_harmonize2` 两个新 pass 挂链 |
| `passes.py` | +421 | BYTE1-3/WORD1 窄存储宏；CRT operator new/delete 外部声明 + `??` 修饰名注册表重试；`pass_receiver_arith`（裸 `this±K` 字节真值重拼）；`pass_assign_harmonize2`（类型环境 `_TypeEnv` + RHS 头定型 `_rhs_ptr_head` + 赋值点 C-cast 包装；litcast-strip / cls-cast / voidcast-rebind 特例） |
| `pseudo.py` | +4/-2 | `parse_decl` 保留全部星号（`RefCount **` 往返不掉星） |

**与任务简报的偏差**：简报说读 `minclass_domain_contents.json`——实现读的是
`minclass_assignments.json`（域唯一信息已被求解器折叠进 assignments），行为等价，判定完整。
数据依赖：assignments 为 gitignored 可再生 dump（262MB，防 LFS 塞车），ledger 已在库中。
`minclass_conflicts/result.json` 的改动是求解器 dump 模式副作用（清空 family_table，无消费方）
→ **已回退**，避免提交数据损失。

内部 API 逐项核对（`_this_scale`/`params_spelled`/`used_globals`/`used_callees`/
`function_by_name` 元组形态/views.scalars 形状/Site 字段）全部真实存在；py_compile 通过。

### 1.2 审查发现的 3 个真 bug（全修，各带验证）

| # | bug | 机制 | 症状 | 修复 |
|---|---|---|---|---|
| B1 | `pass_branch_polarity` 正则 `(?P<a>(?:[ ]+.*\n)+?)` 逐行歧义（`[ ]+` 与 `.*` 争空格）→ 失败路径指数回溯 | 上任 pseudo.py 星号保留改变了行形，0x6a5090 (SidebarClass::InitPositions) 触发 2^N | **part 11 挂死 >15 分钟**，两次跑批均卡死在此 | 原子组 `(?>[ ]+)` + `[^\n]` 限界（Python 3.11+）；单测：匹配形仍重写、非匹配形不挂（0.5s 完成） |
| B2 | `pass_receiver_arith` scale==1 分支 lookahead `(?=[+-]\s*\S)` 分不清减号与**箭头**：`this->m` 命中 "this 减某物" → `(char *)this ->m` = 对**成员读**做 cast | 全部 scale==1（proto `char *this`）函数的每个 `this->` 都被注入 | C2440 int→char*（Movie.cpp(18) 等）；R5-75 抽样 **2/10 回归** | lookahead 改 `(?=[+-]\s*(?![>=+-])\S)`；11 用例单测 + per-pass 探针确认 `this->u32_12` 不再被碰 |
| B3 | `_ASSIGN_SITE` 的 `rhs=[^;]+` **跨行吞语句**：if 条件里的内联赋值一路吃到下一条语句的 `;` | `v13 = *(...) != 0 )` + 下行 `v14 = v13);` 被整体包 cast | unknown.cpp(35) `bool→unsigned int *` C2440（0x56e7c0 回归） | rhs 改 `[^;\n]+`（发射体语句单行，限界安全） |

B2/B3 是**上任新 pass 首次上全量**（R5 从未跑过 harmonize2/receiver_arith）暴露的——
样本验证 + R5-75 抽样回归是捕获它们的唯一手段，证明「样本验证先行」纪律有效。

### 1.3 我的增量（R6b，样本驱动，同机制外科扩展）

| 扩展 | 触发样本 | 机制 |
|---|---|---|
| `&expr` 精确定性 | 0x404700 `char *v6 = &this->m0D8[136]`（原一律 void* → 永不触发） | `&this->m[i]` → 成员视图元素型；`&g` → 全局型 T*。包装 codegen 中性（同一条 lea/mov offset） |
| 指针比较重拼 `_CMP_PTR` | 0x405c00 `*((int **)this+3) == &DataGlobal_87E294`（C2446，赋值匹配器不碰比较） | 解引用 cast 基类型 vs 全局型不兼容 → `(T *)&g` 包边 |
| `*(cast*)ident` 赋值形 | 0x404700 line 43 `*(unsigned int *)v6 = (char *)(v3);`（lhs 备选不认 cast 后跟标识符） | lhs 备选加 `(?:\s*[A-Za-z_]\w*)?` |
| 类对象局部去标量化 | 0x405c00 `AudioFileClass v2;`（IDA esi 局部类型怪癖，用途纯标量 `*(_DWORD*)&v2+N`） | 用法集证明纯标量（decl/&v/`v =`/`v ==`/`= v` 且无成员/调用形态）→ decl 改 `unsigned int` |

---

## 2. 样本验证（步骤 2，编译输出实证）

5 件 = 账本 COMPILE_FAIL 且首错 C2440：0x4035f0 / 0x404700 / 0x4052f0 / 0x405c00 / 0x42d8f0。

| 轮 | 结果 | 编译输出（era cl 首错） |
|---|---|---|
| R5 终态（基线） | 0/5 | `error C2440: 'initializing' : cannot convert from 'int *' to 'char *'`（0x404700）等 |
| 上任 diff 原样 | 3/5 | 0x404700 残 `C2440 'int *' to 'char *'`@L40；0x405c00 残 `C2446 'unsigned int *' to 'int *'`@L16 |
| + R6b 扩展 | 5/5 | 全部进入 diffasm：MISMATCH（frame_sched/regalloc/codegen_shape）——**编译层清零** |

转化链例证（0x404700 AudioStream::SetupPlayback）：
`char * v6 = (char *)(&this->m0D8[136]);` ← 原 `char * v6 = &this->m0D8[136];`
`*(unsigned int *)v6 = (unsigned int)((char *)(v3));` ← 原 lhs 形不匹配 + ptr→int 未包。

---

## 3. 310 全量重跑（步骤 3）

机制照 R5：`run_wall310_r6.py`，每 part 20 件、逐 part commit。
**两次全量**：第一次（part00-15）跑完后发现 B2/B3 → 修复后**全量重跑**（本轮数字为准；
第一次的 16 个 checkpoint 留在历史供二分）。

| 口径 | R5 | R6 |
|---|---|---|
| wall310 内部 | 0/310（按构造） | **52/310 = 16.8%** |
| 385 全池 | 75/385 = 19.5% | **127/385 = 33.0%** |

残墙 258 件首错分布：C2228 43 / C2664 28 / C2059 27 / C2065 22 / C2109 21 / C2039 17 /
C2440 15 / C2227 12 / C2106 11 / C2036 11 / 长尾~51。
（C2440 88→15 = 类型层本体达成；C2664 24→28、C2065 19→22 = 上游解锁后**下游显形**，
供给面债，见 §6。）

52 件编译通过者病理：codegen_shape 22 / regalloc 18 / branch_polarity 4 / frame_sched 2 /
signedness 2 / const_fold·eval_order·extern_reloc·width_mismatch 各 1——与 R4/R5 形态层结论一致，
MATCH=0（形态层是下一战场，非本轮 scope）。

---

## 4. 零回归验证（步骤 4）

| 集 | 结果 |
|---|---|
| 历史 MATCH 随机 30（seed=20261111，359 池） | **30/30 MATCH 保持**（含两次全量重跑后复验） |
| R5-75（R5 编译通过/形态未中）随机 10（seed=6） | 修复前 8/10（B2 打穿 Movie/MapClass 两件）；**修复后 10/10 MISMATCH 保持编译** |

---

## 5. 与任务的偏差（必须声明）

1. **未达 ≥40%**（实测 33.0%）。C2440 类型层任务本体已清（首错 88→15），但残墙主力已是
   C2228（成员视图类型缺声明）与 C2664（callee 参数拼写）——**供给面**而非类型拼写面。
   逐函数追杀的净效率低于批量的教训（R5 §5.1）在此复现。
2. 全量重跑执行了**两遍**：第一遍暴露 B2/B3 后，为账本纯净整体重跑。
   额外 ~35 分钟，换来回归集全绿 + 账本与最终代码一致。
3. 上任遗留的无关未跟踪文件（sesson*.json、X116_DIFF.md、tools/data_match/w1/*.py、
   src/decomp_out/）**未纳入提交**——不属本轮 scope。

---

## 6. 下一轮建议（按 ROI）

1. **C2228 分桶工单**（43 件）：成员视图类型声明缺口——`.` 左侧非类/成员无型。
   大概率是 views 供给（hpp 合成）而非转换管线。
2. **C2664 分桶**（28 件）：callee 桩参数拒收实参形态。R5 F20/F21 已开先河
   （实参定型/pad 放宽），需按「桩声明形态 × 实参形态」分桶放量。
3. 形态层战场（52+75=127 件已编译 MISMATCH 对照集）照 R5 §6.2 建议——
   regalloc 18 + codegen_shape 22 是本轮新弹药。

## 7. 产物与复现

```
# 样本验证（37s 含 assignments 载入）
python tools/decomp_sys/batch_run.py 0x4035f0 0x404700 0x4052f0 0x405c00 0x42d8f0 --out <dir> --chunk 5

# 310 全量（每 part 一 commit）
python .omo/agents/decomp_batch/run_wall310_r6.py 0 15

# 回归 30 + R5-75 抽查（命令见本报告 git 历史）
```

| 产物 | 路径 |
|---|---|
| 本报告 | `.omo/agents/decomp_batch/report_r6.md` |
| 310 终判 | `.omo/agents/decomp_batch/r6_wall310_verdicts_final.json` |
| 批定义/回归批 | `.omo/agents/decomp_batch/r6_wall310_batch.json` / `r6_regress30_batch.json` / `r6_r75_sample10.json` |
| 逐 part 报告 | `.omo/decomp_batch/r6_wall310/p00..p15/part_00/part_report.json` |
| 回归终跑 | `.omo/decomp_batch/r6_regress30_final/` / `r6_r75check_final/` / `regress_fixprobe` |
| 样本演化 | `.omo/decomp_batch/r6_sample5{,b,c}/` |
| 账本 | `.omo/codegen_match/status.json`（随 part 提交） |

**未触碰**：`src/` 全部、`tools/csp_export/minclass_solver.py`、`anchors/minclass_assignments.json`
（gitignored 消费端）、六个类型越狱禁令无违（全部修复是 cast 包装/声明重拼，无 union/bit_cast/
memcpy/指针算术新增）。
