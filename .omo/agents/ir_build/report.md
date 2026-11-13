# IR 值层旁挂 —— 收尾报告（40 件值层 NG 实测）

日期：2026-11-13
工具：`tools/decomp_sys/ir/{parser,bind,rewrite,probe}.py`
模式：probe 旁挂（不写账本、不改 `src/`、不改文本管线、不碰 `minclass_solver.py`）
工件：`.omo/agents/ir_build/probe/`（part_00 全套 cpp/obj/orig json）、`smoke/`、`selection.json`、`probe_run*.log`

---

## 0. 判决（先看这个）

**链通，但翻 MATCH 命中率 = 0/40。值层修正本身是对的（5/12 首差后移），但单条值修正不足以让整个函数逐字节相等。**

| 指标 | 实测 | 备注 |
|---|---|---|
| 选取 / 基线复跑 | 40 / 40 仍 NG | 按账本病理族配额确定性抽样（md5），另 36 备份共 76 件 |
| 解析率 | **40/40 = 100%** | 修 6 个 parser 假 cast bug 之前是 34/40 = 85% |
| 有 correctable 事实的函数 | **12/40 = 30%** | 站点级：789 站点中 correctable 28 = 3.5% |
| 实际进 IR 编译+对拍 | 12/12 全部编译成功 | 修掉 isolated-hpp 选取 bug 后 0 COMPILE_FAIL |
| **翻 MATCH** | **0/40 = 0%** | 95% 置信上界 = 3/40 ≈ 7.5%（rule of three） |
| 首差后移（值事实被修正） | **5/12 = 41.7%**（占 40 件 = 12.5%） | 首差变差 0 件 |

结论：**不要把它当“翻 MATCH 器”接主批跑**；作为**值层事实提取/修复 pre-pass** 局部接入（见 §8），并优先 W1/W4/结构层。
预测 +600~1,200 在本样本上无法复现，原因见 §7。

---

## 1. 冒烟（先冒烟再批量）

已知函数 `0x401000 AudioMixer::Init`（const_fold）独立 part 跑全链（`--out .omo/agents/ir_build/smoke`）：

```
baseline : MISMATCH  +30 lea ebx, [esi + 0x50]  ||  +30 lea ebx, [esi + 0x4d]
parse    : ok   bind: member confirmed 1 / correctable 1 / unknown 4, literal unknown 13
edit     : member_address  this->m050 -> ((char *)this + 0x50)
IR       : MISMATCH  +0 push ebx || +0 push esi   (ir_pathology=regalloc, orig 117B / ours 114B)
```

读法：值层把基线首差（成员布局漂移 `m050` 编译在 0x4D，二进制是 0x50）**修掉了**，首差随后移到 +0 的 push 顺序（寄存器分配）。这条同时证明了链可跑通、也预演了 40 件试验的主结论：**值事实修好 ≠ MATCH**。

其他冒烟覆盖：`0x4884a0`（+3 → +45）、`0x5228d0`（+0 → +6）等，见 §5。

---

## 2. 试验设计与选择

- 账本快照（probe 启动时）：19,078 条 = NG 9,374 / COMPILE_FAIL 4,476 / OK 5,161 / PENDING 67；
  其中值层病理标注（const_fold/extern_reloc/cc_mismatch/width_mismatch/ret_norm/signedness）= **2,017**（21.5% of NG）。
  ⚠️ 账本正被**另一个批跑进程并发写入**（实测 `status.json`/`results.jsonl` mtime 在本会话期间更新），本报告只读快照，未写账本。
- 选择：`select_addresses()` 按族配额（const_fold 12 / extern_reloc 8 / width_mismatch 8 / signedness 5 / ret_norm 4 / cc_mismatch 3 = 40）+ 每族 6 个备份 = 76 候选；按地址 md5 确定性排序。
- 冻结：账本被并发写入，抽样集合会漂移；最终测量用 `.omo/agents/ir_build/selection40.json`（40 件地址冻结）经 `--from-selection` 重放，报告所有数字出自该冻结集的 `probe_report.json`。
- 基线：40 件用当前 HEAD 文本管线重跑（`batch_run.run_part`，无账本写入）；**全部仍是 NG**（账本无陈旧件问题）。
- 注意：账本 pathology 是**首差症状**，不是根因。40 件的“新基线病理”分布已漂移为：
  const_fold 9 / extern_reloc 10 / ret_norm 5 / width_mismatch 7 / signedness 5 / cc_mismatch 2 / codegen_shape 1 / branch_polarity 1。

---

## 3. 解析率（实测）

| 阶段 | 结果 |
|---|---|
| 修 bug 前 | 34/40 = 85%（6 件 PARSE_FAIL） |
| 修 bug 后 | **40/40 = 100%** |

6 件失败全部是 parser 的**假 cast**（把括号表达式当类型转换）：

| 地址 | 报错 | 根因 |
|---|---|---|
| 0x4208E0 / 0x4F50F0 / 0x565060 | `expected type name got 'atexit'` | `_looks_like_cast` 把括号内**嵌套**的 `void` 当类型词（`(atexit((void(__cdecl*)(void))(f)))`） |
| 0x4C29E0 | `primary ')'` | 单 CamelCase 标识符 `(DataGlobal_8A0E8C)` 被当 cast |
| 0x50CAD0 | `primary ')'` | 同上（`(TechnoClass *)v9[135]` 的兄弟形态） |
| 0x63D540 | `expected type name got 'Memory__Alloc76'` | `(Memory__Alloc76())` 被当 cast（调用被包在括号里） |

修法：cast 扫描只看**顶层** token；且 cast 后必须跟“操作数起始”（强类型 cast 才允许 `& - * ++ --` 等前缀运算符开头，弱 `(CamelName)` 只允许 id/num/str/`(`）。

> 评估报告 S2 的 99.56% 全池解析率来自 `proto/parse.py`（更宽松的实现）；本次只测这 40 件。就本样本看，修后覆盖 100%。

扩展回归（避免只测 40 件）：NG 池 md5 取样 200 件 → 199 件有体，**198 件解析成功 = 99.5%**。唯一失败 `0x474B50` 是文本管线产出的非法声明 `char ((unsigned char *)(&(Buffer)))[64];`（声明区 artifact，属文本 pass 缺陷，parser 拒绝是正确的；本轮未改文本管线）。本会话还补了 `this->*((fnptr *)slot)[3]`（pointer-to-member 调用）语法支持——VectorClass 家族 3/3 解析通过。

---

## 4. 绑定率（实测）

40 件函数共 789 个可绑定站点（literal / member / index / global / cmp）：

| kind | confirmed | correctable | unknown | 合计 |
|---|---|---|---|---|
| literal | 47 (10.7%) | 0 | 391 (89.3%) | 438 |
| member | 61 (45.9%) | **17** (12.8%) | 55 (41.4%) | 133 |
| global | 38 (40.0%) | 5 (5.3%) | 52 (54.7%) | 95 |
| index | 25 (38.5%) | 3 (4.6%) | 37 (56.9%) | 65 |
| cmp | 0 | 3 (5.2%) | 55 (94.8%) | 58 |
| **合计** | **171 (21.7%)** | **28 (3.5%)** | **590 (74.8%)** | **789** |

函数级：**12/40（30%）**至少有一个 correctable 站点（member 5 件 / index 3 件 / global 3 件 / cmp 2 件，有重叠）。

与评估 S3（值位字面量可绑定 63.8%）差异的原因（口径不同，不是矛盾）：
- 本 binder 只认**证据共址**：字面量只与“带内存操作数的指令”的立即数做多重集匹配（强证据）；S3 是“同函数内剩余字面量 vs 剩余立即数”的**存在性**配对（宽松）。
- 74.6% unknown 里最大宗是 literal（375/420）：这些函数的常量以 `xor/inc/test/disp` 编码或不在内存操作数指令上，属评估 §3 已量化的“编码层信息缺失”天花板。

---

## 5. 修正率与翻 MATCH（核心结果）

12 件进入 IR 编译 + COFF 抽取 + diffasm；**0 件翻 MATCH**。逐件首差（orig 侧偏移，同一 orig 基准）：

| # | 地址 | 账本族 | 基线首差 | IR 首差 | Δ | IR 变换 | IR 后残留病理 |
|---|---|---|---|---|---|---|---|
| 1 | 0x4884A0 | const_fold | +3 `mov al,[esi+0x174]`/`[+0x178]` | +45 | **+42** | member_offset | branch_polarity（intra 目标差 6B） |
| 2 | 0x5D1E50 | extern_reloc | +0 `mov eax,[0x88730c]` | +0 | 0 | global_symbol | regalloc（eax vs ecx） |
| 3 | 0x431BC0 | width_mismatch | +8 `cmp dword [esi+30h]` | +11 | **+3** | member_width | branch_polarity |
| 4 | 0x7342D0 | width_mismatch | +19 | +23 | **+4** | index_member | width_mismatch（后续成员） |
| 5 | 0x484D60 | width_mismatch | +0 | +0 | 0 | index_member | width_mismatch（首差在编辑点之前） |
| 6 | 0x5228D0 | width_mismatch | +0 `[ecx+0x6c0]`/`[+0x6c4]` | +6 | **+6** | member_offset+index_member | width_mismatch |
| 7 | 0x63D540 | width_mismatch | +0 `movsx byte`/`word` | +7 | **+7** | member_width | branch_polarity |
| 8 | 0x750920 | signedness | +35 `jge`/`jae` | +35 | 0 | global_symbol | signedness（jge vs jae 未修；global_symbol 不动比较） |
| 9 | 0x65FDD0 | signedness | +10 `jle`/`jbe` | +10 | 0 | cmp_signed | branch_order（jcc 已同向，intra 目标差 4B） |
| 10 | 0x431D90 | ret_norm | +6 `mov eax,[esi+30h]`/`mov al` | +6 | 0 | member_width | codegen_shape（宽度已修，指令形态仍差） |
| 11 | 0x5D1E70 | ret_norm | +0 `mov al,[0x8a00a0]`/`mov eax,[0]` | +0 | 0 | global_symbol | 体首语句读的全局不同（0x8A00A0 vs 0x887310），编辑点在别处 |
| 12 | 0x623DA0 | cc_mismatch | +32 `jne` | +32 | 0 | cmp_signed | branch_polarity（intra 目标差） |

- **首差后移 5/12（41.7%）**，全部有明确证据链（布局 hint 漂移 / 成员链偏移 / 数组元素宽度 / `movsx` 符号性）。
- **首差变差 0 件**（本样本无回归）。
- 12/12 的残留首差都是**结构/类型/帧**层：regalloc、branch_polarity（intra 目标因代码尺寸差偏移）、width_mismatch（函数内还有第二个成员宽度问题）、eval_order。
- 关键含义：这些函数是**多病理共存**，值层只负责其中一条；MATCH 要求 100% 字节，任何一处结构差都会挡住。

---

## 6. 28 件 NO_EDITS 归因

| 类别 | 件数 | 含义 |
|---|---|---|
| confirmed-only | 15 | 体里的值事实与反汇编**已经一致**（符号/布局正确），首差另有原因（帧偏移/求值序/签名/reloc 键）——值层无事可做 |
| unknown-only | 10 | 站点存在但绑定不到证据（字面量被算术编码、基址寄存器不可追、栈/参数） |
| no sites | 3 | 没有任何值层站点（如 `ret 8`、纯参数直通） |

典型例证：
- **0x40C660 / 0x4106E0（extern_reloc）**：body 全局已正确声明为 `double` 且地址 confirmed；残留是 x87 **求值序**（orig `fmul A; fmul B` vs ours `fld B; ...`）——属 eval_order，不属值层。
- **0x77D8F0 / 0x536B10**：`mov ecx, imm` vs `mov ecx, [0]` 类——参数/返回值身份错（签名层），值层无事实可修。
- **0x5228D0 早期形态**：`this->Type->Deployer` 的**中间成员** `Type` 原先被 `_skip_as_subexpr` 跳过（不收集），导致 0x6C0 漂移不可见——本轮已修（见 §8 #6）。
- **0x543040**：`ret 8` vs `ret 4`——调用约定/参数个数（签名层）。
- **0x7BC7F0**：`[esp+0xc]` vs `[esp+0x10]`——栈帧/参数槽（frame 层）。

---

## 7. 与评估预测（+600~1,200）对照

| 项 | 评估报告 | 本轮实测 |
|---|---|---|
| 值层池 | 口径 B：3,131/8,841 = 35.4% | 账本口径值层标注 2,017（21.5% of 9,374 NG，快照），两者口径不同 |
| 现实收益 | +600~1,200（P1+P2 全程序，含 W-A 已收割 1,252 之外） | **0/40**（95% 上界 7.5%） |
| 解析 | 全池 99.56% | 40/40 = 100%（本样本） |
| 值位绑定 | 63.8%（宽松存在性） | 站点级 correctable 3.5%；函数级 30% 有可修正事实 |

差异解释（三条同时成立）：
1. **预测是“整套值层改造（P1+P2）在全池”的上限**，且明确扣除了 W-A 已收割的 1,252 件；本 sidecar 只实现了值事实修复，**与现有文本 pass 高度重叠**（W-A 常量、分支极性、T14/CW5 成员偏移）。
2. **抽样按“病理症状”而非“机制”**：40 件里 28 件（70%）根本没有值层可修正事实，这部分对应评估 §1 已警示的“pathology 是首差症状不是根因”。
3. **多病理共存**：12 件有值修正的函数里 5 件首差后移，但**没有一件**是“值层唯一差异”；预测隐含的“单点修复即翻 MATCH”只在本样本的 0 件上成立。

按 rule of three，0/40 的 95% 上界 ≈ 7.5%。即使乐观地把该比率外推到 cw8 值层池 3,131 件，上限也只有 ≈ 235 件，**达不到 +600**。要让值层收益兑现，前置条件是 W1（reloc 键）、W4（签名/类型）和结构层（branch/regalloc/frame）先到位。

---

## 8. 本轮对 `ir/` 的工程修复（审查结论）

前任代码接口齐全（`parse → bind → rewrite → compile → diffasm` 链能跑），但**从未端到端跑通过**，本轮实测暴露并修复 19 处缺陷；前 3 轮 probe（修复前/中/后）都是 0 flips，所以结论对修复不敏感。

**parser.py（4）**
1. `_looks_like_cast` 只扫描**顶层** token（嵌套 `void` 不再触发假 cast）。
2. cast 后必须跟“操作数起始”；弱 `(CamelName)` 形态不允许紧跟二元运算符。
3. 强 cast 允许 `& - * ++ --` 前缀操作数（修复 `(int)++v6` 回归）。
4. `this->*((fnptr *)slot)[3]` pointer-to-member 调用（VectorClass vtable 派发形态）。

**bind.py（7）**
5. `parse_hpp_layout`：声明了 `virtual` 的类在 offset 0 由编译器插入 vptr → 布局基址 +4（修掉整类成员系统性 -4 漂移）。
6. 类块终止按花括号深度判定（匿名 union 的 `};` 原先会被当成类结束，ObjectClass 成员表被截断成 12 个）。
7. 成员链 `this->A->B` 的中间成员也收集为站点（原先被跳过，链上的布局漂移不可见）。
8. 新增 **hint 偏移绑定相**（`// 0xNNN` 是 IDA 真值；计算布局是编译器真值），在 computed-layout 相之前执行，并带“同 class 无其它成员 computed 到该偏移”的唯一性守卫。
9. `_mark_member` 记录 asm 的 `role/width/mnemonic`，地址型 vs 值型按**反汇编**判定。
10. tier C（`g_*` → 绝对地址）只对无地址身份的拼写生效（`DataGlobal_/plate` 不再被“按序配对”成别的地址）。
11. tier F（符号性）只配对 `cmp`+jcc（`test` 会把源序配对打乱）。

**rewrite.py（5）**
12. `member_ptr_addr` / `member_address` 仅在 asm 确为 `lea`/addr 时启用（**声音性修复**：`mov/push [mem]` 是加载，不能再改写成取地址）。
13. 指针成员保留声明类型（`this->Type->Field` 不再退化成 `unsigned int*`）。
14. `movsx` 的宽度修复用有符号类型（`char/short/int`），避免 `movsx` 被 `xor` 形态替代。
15. 访问表达式加括号（`(*(T*)(...))`），修复 `->`/lvalue 优先级。
16. index 站点使用绑定后的 correctable 偏移（原实现忽略绑定结果）。

**probe.py（3）**
17. 每件函数增量落盘（`probe_report.partial.json`）。
18. **isolated-hpp 选取**：IR cpp 必须 include 基线实际用的 hpp（unit 失败时会退化为 `<unit>_<addr>.hpp`），否则结构布局被换成另一份 hpp 视图（曾导致 7/7 假 COMPILE_FAIL 与 0x431BC0 的 C2446）。
19. 账本容错读（并发批跑进程原地重写 `status.json`，读会撞上半截 JSON；重试 8×2s）。

---

## 9. 集成建议

**不建议（A）**：把 sidecar 当“翻 MATCH 器”接主批跑。0/40 + 95% 上界 7.5%，按每 part 20 件计期望 <1.5 件，且每件多一次 cl + COFF + diffasm，ROI 为负。

**建议（B，低风险）**：把 `parser + bind` 作为**只读事实提取器**接入工单生成：
- 成员布局漂移清单（hint vs computed layout）：本轮实测到 `CheckListClass.m174 0x178→0x174`、`InfantryClass.Type 0x6C4→0x6C0`、`AudioMixer.m050 0x4D→0x50` 等真实漂移，可直接喂给 hpp/布局修复（W4 相关）。
- 全局宽度/FP 证据（asm 8B FP 访问 vs hpp 4B 整数声明）→ W1/W4。
- `cmp`+`jcc` 符号性证据 → 结构层 pass 的输入。
这些都不需要写回文本，也不进账本。

**建议（C，若确要写回）**：白名单接入，只启用 **member_offset / member_width / index_member**（本轮 17+3 个 correctable 站点全部落在成员/下标，证据最强）；**禁用** `cmp_signed`（3 站点 0 收益，配对脆弱）、`global_symbol`（本样本 3 件 0 收益，且 verifier 键映射已覆盖）、`literal_value`（单点启发式）。接入点建议在 `decompile.run_function` 现有 pass 之后、以环境变量 `IR_VALUE_LAYER=1` 开关，进 part 前跑 checker 六规则 + 30 件历史 MATCH 回归；只允许“不新增违规”的编辑。

**顺序建议**：先 W1（reloc 符号键）与 W4（签名/类型），再结构层 branch/regalloc/frame；三条都到位后重跑本 40 件——届时 §5 的 5 件“首差后移”最有希望翻 MATCH。

---

## 10. 未做 / 诚实边界

- 未写 `status.json` / `results.jsonl`（并发批跑进程在写，见 §2 时间戳）；未改 `src/`、`tools/decomp_sys/decompile.py`、`passes.py`、`minclass_solver.py`。
- 40 件样本功效有限：0/40 只能给出 ≤7.5% 的上界；族级命中率（每族 3-12 件）不足以单独下结论。
- 解析率：40 件冻结集 40/40；扩样 200 件为 198/199 有体函数（99.5%），不是全池口径。
- “首差后移”是**值事实修复**的间接指标（orig 侧首差偏移），不等于语义验证；真正的语义验证仍是 diffasm 全函数 MATCH。
- probe 的 IR 编译使用与基线相同的 hpp/编译参数（修复 #18 之后）；修复前的 COMPILE_FAIL 数字不可用。
- 报告数字出自冻结集 `.omo/agents/ir_build/selection40.json` 的 `--from-selection` 重放；不带冻结集时，因并发批跑改账本，抽样集合会漂移。
- 测量期间工作区里的文本管线**正被另一个 Agent 修改**（`decompile.py` +4 行 / `passes.py` +228 行，Stage 3a `void*` 算术 pass，未提交）。本轮 probe 用的是该工作区状态；该 pass 自述“只改可编译性、字节等价”，但基线首差以实测为准。本报告未提交、未修改这两个文件。
