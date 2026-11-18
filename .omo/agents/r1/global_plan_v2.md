# 全局方案（实验验证版 v2，2026-11-15）

> 在 v1 基础上用 V 系列实验校正数字。脚本 = `.omo/agents/r1/{v3_proto,v3b_proto,v4_depth,v4_curve,f2_precise}.py`。

## 一、V 系列实验结果（相对 v1 的关键修正）

| 实验 | 测量 | 结果 | 对 v1 的修正 |
|---|---|---|---|
| V3（后段 12 单元） | 476 函数拆分编译 | clean **2.5%**，MATCH 0 | — |
| V3b（分层 10 单元） | 396 函数 | clean **2.5%**，MATCH 10% of clean | **v1 的 10.7%/75% 是早段样本偏差，下修 4-7 倍** |
| **V4（深度，14 单元）** | 556 个 CF 函数逐函数错误码 | **中位=1 码；40.8% 单码；72.8% ≤3 码** | **决定性：单元级 21 码是"最差文件"聚合，函数级是浅问题** |
| V4 覆盖曲线 | 贪心族覆盖 | top4 族→31.7% clean；top10→50.3%；top12→57.8% | **给出可执行转化曲线** |
| F2 精细撞名 | 3 单元 | 1/3 单元转化 1 文件；1 码消失 | 撞名只是 ~12 族之一，非银弹 |
| 编译成本 | 872 TU 实测 | 0.04-0.05s/失败 TU；clean ~0.5s；全池 19K TU 在 6-8 并发下约 20-40 分钟 | 成本可行 |

**函数级单码 TOP**：C2440 54 / C2664 36 / C2039 32 / C2065 23 / C2660 17 / C2228 17

## 二、验证后的全局方案（F1-F4）

### F1 判定粒度切换（地基，先做）
- 按 `// GENERATED` 切函数 TU 编译判定；批次报告同时产出**逐函数错误清单**（新 census 入口）
- 实测即时收益：CF 3,184 → ~3,104（−80，2.5%）；新 MATCH +8~+60（MATCH 率 10-75% 区间）
- 零回归（E4 40/40）；成本 20-40 分钟/全池
- **核心价值：F3 每一条族规则的转化从"单元全有全无"变为"逐函数线性累进"**

### F3 族覆盖引擎（主引擎，用 V4 覆盖曲线排序）
按 V4 曲线贪心序推进（每族 = 1-4 条规则，历史已建成 15 条 R8 系）：
```
C2440（含上下文分解）   → 单码 54 函数 + 部分多码，预计净转化 150-300
C2065（供给+级联）      → 87 累计
C2664（调用点协调）     → 130 累计（历史净负区，函数级下重新评估）
C2039（成员/方法供给）  → 173 累计
C2227/C2228 receiver    → 189/274 累计
C2446 多级指针          → 236 累计
C2100/C2109/C2036（已清）→ 211 累计
C2059/C2040 语法/间接级联 → 238 累计
C2660/C2064 调用形态     → 300/315 累计
```
每族门：A/B 样本 → 全池复判（函数级）→ 零 OK 回归 → commit。

### F2 撞名供给（并入 F3 队列，作为 C2059/C2143 子族）
- 精细改名（白名单式，避开 include/类名/限定名）；实测 1/3 单元小收益，作为补齐项。

### F4 NG 侧字节收割（并行轨道，池 9,823）
- R1/CW8/W-A 先例（+488/+799/+1,252）；与 F1-F3 不冲突。

## 三、意外预案（v2）

| # | 意外 | 概率 | 后备 | 类别 |
|---|---|---|---|---|
| 1 | F1 全池扫 OK 回归 | 低 | OK 函数回退文件级判定兜底 | 修补 |
| 2 | 函数级 MATCH 率低端（10%）→ 新 MATCH 仅 +8 | 中 | F1 收益按低端记账；主收益由 F3 族曲线承担（50% clean = 1,600 函数） | 修补 |
| 3 | 某族"修完"但曲线不达预期（如 C2664 调用点） | 中 | 该族降级为长尾，曲线用实测重排；不阻塞其他族 | 重新调研 |
| 4 | 函数块切分引入宏态/静态依赖问题 | 低 | 每块自动补 include；异常块回退文件级 | 修补 |
| 5 | 19K TU 全池扫超时 | 中 | 每 2,000 函数一 commit 分块；resume 已有 | 修补 |

## 四、可检验推论（F1 上线后首轮）

1. CF 减少 60-120（2.5% 档）；OK 增加 8-60；零 OK 回归。
2. 逐函数错误清单产出后，单码函数数应 ≈ 40% × CF 剩余（V4 外推）。
3. 反例信号：F1 后 CF 减少 <40 → 拆分口径有系统性偏差（如块切分吞掉函数体），立即回退重查。

## 五、结论

- **可行**：F1 成本低、零回归、作为地基成立；**主引擎是 F3 族覆盖**，其曲线由 V4 实测支撑（top10 族 → 50% 函数变干净）。
- v1 的"单步 +256 OK"下修为"F1 即时 +8~+60；F3 长程 ~1,600 函数可编译（50%）"。
- 最大不确定性 = 各族规则的实现成本与覆盖完备度；已建成 15 条规则证明节奏（每轮 1-3 条）。


## 6. 执行修正（F1 实测：已存在，无需实施）

执行时发现：**batch_run 已有函数级隔离回退**——单元编译失败时逐函数生成 iso cpp/hpp 单独编译，
账本 CF = iso 也失败。因此：

- "粒度切换"已无实施对象（v1 的 F1 作废）；
- V3/V3b 的 2.5% clean 就是当前真实函数级干净率；
- 唯一残余小改进：iso 使用单元 hpp 而非 per-function hpp，实测仅 +17 函数（0.5%，可忽略）。

## 7. 全池逐函数完整普查（新权威数据）

`full_split_census.json`：6,590 函数（每 part 全单元复制，去重后恰 3,184 = 账本 CF 全集）

```
CF 去重深度分布: {0:17, 1:1383, 2:691, 3:431, 4:216, 5:138, ...}
单码率 43.4% | ≤3 码 78.9%
单码 TOP: C2440 322 / C2664 239 / C2065 96 / C2039 95 / C2660 94 / C2227 87 / C2228 77
```

去重贪心覆盖曲线：
```
top1 C2440 → 10.2% | top3 → 23.2% | top6 → 31.6% | top11 → 50.8% | top14 → 59.6%
```

## 8. C2440 形状分解（首错口径）

```
void*→uint 56 | void*→int 34 | void*→char* 26 | char**→const char** 23
const int→int[1] 19 | uint→void* 17 | AbstractClass*→uint 17 | void*→void** 13
void*→uchar 12 | cast void→int 11 | int→AbstractClass* 11 | uint→char* 11
```

## 9. 第一族执行记录（R8q/R8r，commit 65dd5188d）

- 实现：void*-RHS 跨成员/索引成员/声明初始化/return 上下文按声明类型重拼 + 比较协调器成员链分类
- 实测：CF 3,197→3,186（−11）、OK 5,716→5,717（+1）、零回归
- 观察：目标族函数多为 2-3 码深度，单族修复只推进不转化 → 需按曲线继续叠加后续族


## 10. 第二族执行（R8s，C2664）+ R8t 证伪

### R8s（commit df7492623 + 接线 fe32479b5）
- 实参协调到声明参数类型：registry 原型 + VC6 CRT 原型表（wcs*/str*/mem*/sprintf/atexit）
- 已带错误 cast 的实参重包；未知形态实参对指针参数仍加 cast
- **A/B 239 单码 C2664 → 42 转化；全池 CF 3,186→3,146（−40）、OK +4、零回归**

### R8t 证伪（唯一 owner 反查）
- 假设：成员名 → registry 唯一声明类 → receiver cast
- 实测：`uniqueId` **61 个 owner**、`vfptr` 158、`Items` 149、`Selectable` 15、`m_3` **0 owner**
- **规则几乎无覆盖，已回滚**。C2227/C2228 的正确解法 = 混合折叠
  （`(*(T*)(EXPR)).M`：基类型可解析时按 基类型成员偏移 折叠为字节偏移访问）——下一轮实现。

### C2065 分解（310 首错）
- 名字异质：单字母碎片 25+（疑似声明丢弃）、LPCH 13（typedef 供给）、模板类名 8、NAN 3
- 无单一主导形状 → 暂缓，需先查"声明丢弃"机制

### 当前首错分布（R8s 后）
C2440 604 | C2065 310 | C2664 196 | C2039 195 | C2228 190 | C2446 172 | C2227 132 | C2100 111 | C2660 100


## 11. NG 全池刷新（2026-11-15，收尾轮）

### 结果
```
刷新前: OK 5,722 | NG 9,930 | CF 3,072 | PENDING 78 | THUNK 276
刷新后: OK 5,953 | NG 9,423 | CF 3,315 | PENDING 84 | THUNK 303
净效应: OK +231（陈旧账本恢复）、CF +243（规则回归）、NG −507
```

### 关键教训（门禁升级，强制）
**规则验证只跑 CF 池是不够的** —— R8q/R8s/R8u/R8v 等规则把 243 个原本可编译的 NG 函数改成了编译失败。
其中 526 件在代码修复后恢复（C2064 乘法星被吃 = R8p 守卫索引错位，已自愈/修复），
**剩余 255 件为真实回归债**：
```
C2664 116 | C2440 49 | C2446 19 | C2106 18 | C2036 14 | C2143 10 | C2109 6 | C2227 5
```
新门禁（下一轮起强制）：**每条规则 A/B 必须包含 "现有 NG 函数回归样本"（≥40 件，编译必须保持通过）**，
再叠加全池 CF 复判。

### R8p 乘法星 bug（重要）
`pass_r8p_void_subscript` 的 deref 守卫用 `text` 前缀切片，但匹配位置属于 `_R8P_SUB` 预处理后的字符串
（长度已变）→ 守卫错位 → `v10 * v9` 的乘法星被当解引用吃掉。多次对照后当前未复现（疑似旧态），
**下一轮需加单元测试锁定**：`v11 = v10 * v9;` 必须原样保留。

## 14. CF 长尾收割 + 收尾轮（2026-11-18，R10b + 全 NG 刷新）

### 基线（本轮开始）
OK 6,475 / NG 9,098 / CF 3,111 / PENDING 93 / THUNK 303（吞吐实测 146s/全 CF 池，0.93s/part）

### 第一轮全 CF 池复判（普查，基线含前任 live-but-uncommitted R10a/R9e）
CF 3,111 -> 3,062 + 49 转 NG（可编译但 MISMATCH）；首错分布（函数级）：
C2440 720 | C2065 222 | C2039 173 | C2664 168 | C2446 151 | C2228 150 | C2660 125 | C2059 119 | C2227 114 | C2143 112 | C2100 99

### C2440 形状分解（首错口径）
unsigned int*->unsigned int 223 | void*->uint 39 | int*->int 37 | void->int 22 | char*->uint 21 | uchar*->uchar 21 | void*->uchar 20 | uint->InfantryTypeClass* 19 | void*->int 18 | ushort*->ushort 17 | char**->const char** 16 | int[1]->int 15 | ...
=> 主导族 = 指针 RHS 包装到标量 store：*(T*)E = (T2*)(x)（300 首错函数 + 145 邻近形状）

### R10b：R10a 标量 store LHS 类型解析修复（commit 0fa4a5123）
**根因三件**（全部在 R10a = 前任未提交的 unit-level assignment harmonizer）：
1. _r10a_scan_sites 回走扫描：括号字符处理后落穿到 d==0 的非法字符检查 —— ( 在把 d 减到 0 后自身（不在合法集）触发 break，**解引用星号被静默丢弃**（*(T*)E = x 切成 (T*)E）→ lhs_ty 判成指针 LHS → R10a 给标量 store 的 RHS 包 (T*)(x) → C2440 家族。
2. _R10A_CAST_DEREF 只认带外括号的 (*(T*)E) 拼写；裸 *(T*)E 与 *((T*)E + N)（元素 store）不匹配，落到 _R10A_CAST_STORE 返回指针类型。
3. plain-IDENT 臂无视下标：v[i] 元素 store 返回完整指针拼写（T* 而非元素 T）。

**A/B**（445 目标集干跑）：407 越过该族（38 残留 = 数组元素 init v8[282]=(uchar*)(0) 族的另一供给路径 + 窄类型守卫预期内），12 全编译。
**门**：NG 回归 48/48 保持可编译；OK 对照 20/20 全 MATCH。
**全 CF 池**（带账本）：CF 3,062→3,042（−20 全转 NG=可编译 MISMATCH），OK 零损失。
**OK 净增 +0**——20 个新可编译函数全部 MISMATCH（深层 codegen 形态在后面）。

### 隔离实验（重要方法教训）
8 件破例样本 chunk=4 对照显示「4 件恢复」→ **假象**：chunk 改变 part 分组 → R10a 的 unit-merged views 变化 → 成员类型判定变化。
用 x_023 同 part 分组 + 仅回退 walk-fix 重跑：0x41d6f0 仍 CF → R10b 无罪。
**教训：NG 回归对照必须在同 part 分组下做，chunk 尺寸本身就是变量。**

### (B) 全 NG 池刷新（9,167 件，181s）
OK 6,475→**6,476**（+1 陈旧回收——+231 时代的井已干：r9a 全量重判后 verdicts stable）
NG 9,167→8,915；CF 3,042→**3,293**（+251 NG→CF 回归）
**251 归因**（非 R10b，见上隔离）＝前任 R10a 成员类型权威债：
- R10a CHAIN 臂用 _r10a_cls_members（view-role 合并 + _is_placeholder 过滤）判 this->M 类型，与 hpp 写出器（_reg_member_decl/entries_of）的声明拼写不一致 → 包装方向与编译器看到的声明相反 → C2440。
- 两子形：(a) 标量包装打到指针成员 store（hpp void* / 表 uint，~17）；(b) 标量成员收指针 cast RHS 时表缺失/R8m-view 分歧（~200）。
- 工单（251 地址 + 族计数 + 修复方向「hpp 写出器拼写为唯一权威」）= .omo/agents/r1/ngcf_251_workorder.json
- 与 §11 的 255 回归债同模式（规则推进 CF 的代价），非新病理。

### 规则环 2 评估（未实施，理由）
- C2065 PVOID 19 件中 15 件 = CRT EH 内部（__global_unwind2）——AGENTS.md 已裁定 CRT 版本差异移出形态战场。
- C2065 v5/v42/v11/result（声明丢弃，31 首错）：机制 = unit 大文件中单函数局部声明被丢（R9c scope 债同族），需深挖 scope 分析，超本轮预算。
- 251 修复（hpp 权威化）= 最高价值工单但触碰 R10a 核心，需用户知悉前任 live-but-uncommitted 设计后再动。

### 本轮净账
| 项 | 前 | 后 |
|---|---|---|
| OK | 6,475 | 6,476（+1）|
| NG | 9,098 | 8,915 |
| CF | 3,111 | 3,293（−20 编译增益 + 251 R10a 债 + 20 复判收敛）|
- OK 净增 +1，未达 ≥30 目标线——归因：①R10b 的 20 个新编译全部 MISMATCH（形态层后续）；②陈旧回收井干（+1）；③R10a 债暴露 −251 NG（不伤 OK）。
- commits：0efb1a6ea（前任 WIP 固化 diffasm/batch_run）、0fa4a5123（R10b + 前任 passes.py WIP 固化 R9e/R10a）、8d459d139（phase-B 账本）——全部已 push。

---

## §15 规则轮：`pass_return_this_artifact`（offset-0 返回 artifact，+114 OK / 0 损失）

日期 2026-11-18（接 §14 之后，HEAD `9601d3ae5`）

### 发现链
1. `0x720210`（`checkAmmunition`）隔离 A/B 证实与 hpp 对齐 fix 无关：orig `mov eax, esi`（返回 `this`）
   vs ours `mov eax,[esi]`（载入 `this->vtable1`）。
2. 伪码快照真值：`return this->__pad_0;` —— Hex-Rays 把 `return this` **保真性失真**成
   offset-0（vtable 槽）成员载入。
3. NG 池形态扫描：`return ...this->vtable1` 共 **42 文件 / 61 核心形态 + 12 双 cast 变体**
   （QueryInterface / ScalarDtor / Constructor / checkAmmunition / Construct / DestroyPipe 族）——
   族级根因，非个例。

### 实现（规则级）
- `passes.pass_return_this_artifact`：cls + `views.scalars[cls][0]` 成员名 + 函数自身 disasm
  三重证据。**严格门**：每一条返回路径的最后一条 EAX 写指令必须是
  `mov eax, <receiver 别名>`（别名 = `{ecx} ∪ {R | mov R, ecx}`），任一不合格（载入/常数）
  → 整函数跳过（真返回 vptr 的函数不触发）。
- 接线：`decompile.py` `pass_era_normalize` 之后（最终文本权威位）。

### 门禁与实测
| 门 | 结果 |
|---|---|
| 单点 0x720210 | MISMATCH → MATCH |
| OK 对照 20 | 20/20 MATCH |
| NG 回归 40 | 40/40 可编译、0 CF |
| **规范全池 A/B（同批单同序 955 parts）** | OFF OK 6,430 → ON **6,544：+114 / lost 0** |
| 确定性 | ON v1/v2 两次全池账本逐项一致 |

### 方法论事故（本轮最大教训）
- 首轮以工作区账本（OK 6,476，来自 `ng_hpp` **NG 池重判**口径）为基线，全池 ON 跑出
  "45 OK 损失 + 1 OK→PENDING" 假警报。
- 8 样本探针：6-7 个损失地址的生成体**无本规则改写**（差异为偏移/shape/全局指针），
  证明与规则无关。
- 真因：**part 组成不同 → iso hpp 视图合并不同 → 同一函数判定漂移**；跨口径账本不可相减。
- 修正：规则 OFF 跑规范全池作基线（955 parts 同序），再 ON 复现 → 真效果 +114/0。
- **纪律**：①任何规则 A/B 必须同批单同序两侧各跑规范全池；②用工作区账本当基线前先核对
  产出目录/part 数是否规范全池；③损失归因先做"改写存在性"探针再谈因果。

### 账本终态（规则 ON，规范全池）
| OK | NG | COMPILE_FAIL | PENDING | THUNK |
|---|---|---|---|---|
| **6,544** | 9,114 | 3,038 | 95 | 303 |

### 未处理残余（记录不扩面）
1. `((INIClass *)(this->vtable1))->SetString(...)` 8+4 处 —— 经 vptr 成员调方法的 MI artifact 族，另立规则。
2. `0x7656d0` `[ecx+4]` vs `[ecx]` 偏移 artifact —— 成员偏移解析族，另立规则。
3. 本规则别名追踪为文本级（不处理寄存器覆盖/call clobber）——本池 0 误触发；未来若触发面
   变化，升级为保守失效追踪。

### 工件
报告 = `.omo/agents/r1/report_return_this.md`；A/B 产出 = `.omo/agents/r1/ab_hpp/{full_ruleOFF,full_ruleON_v2}`；
账本快照 = `ab_hpp/status_rule{OFF_canonical,ON_v1}.json`。

---

## §16 byte-carrier (m_N[K]) 负结果（已回退，勿重跑）

日期 2026-11-18（§15 之后）。目标族：`&this->m_1[3]`（IDA til 名字内编码字节偏移）。

**实证**：`0x5ae6f0 Matrix3D::Constructor` 伪码 `*(_DWORD *)&this->m_1[3]` → 反汇编
`mov [esi+4]`；`&m_5[3]`→`[esi+8]`；`&m_9[3]`→`[esi+0xC]`。⇒ `m_N[K]` = BYTE N+K；
member_lookup 的 `size` 默认 4 被误当真实跨度 → union 吞并（`[ecx]` vs `[ecx+4]`）
+ 常量索引折叠（`this->m_1[0]`）+ this_ptr_math 丢 +3。

**尝试**：`ClassView.byte_carriers` 使用证据标记 + `pass_member_shapes` `_bc` 分支
（1B 载体 + abs_off `elem-restore` 视图）+ `hpp_pilot._view_span` span=1 + `merge_views`
传递 + receiver 位置 this-artifact 扩展 + disasm `; this` 注释剥离。

**实测（canonical full pool 955 parts，同批单同序）**：OK 6,544 → **6,541**
（**gained 0 / LOST 3**：0x7b48d0 String::Assign_Alt、0x7b4da0 String::Concat2、
0x7b5360 ObjectClass::sub_7B5360）→ **净负，全部回退**（账本快照恢复，冒烟 0x720210 MATCH）。

**残余**：Matrix3D 布局已对但仍有常量 hoist 调度差（orig `mov ecx,0x3f800000` 提前）=
codegen_shape，非本族可解。重启该族前置：this_ptr_math 与 member_shapes 共享同一
字节载体判定；3 个损失先做改写存在性探针归因再拆规则。

**当前账本（不变）**：OK **6,544** / NG 9,114 / CF 3,038 / PENDING 95 / THUNK 303。

---

## §17 Set B：receiver 伪影修正 + r8o 视图偏移权威（+3 OK / 0 损失）

日期 2026-11-18（§16 之后）。

### 归因探针（3 个 §16 回退损失）
对 0x7b48d0 / 0x7b4da0 / 0x7b5360 做 attempt-vs-baseline 生成体 diff：
差异全部是 `__3_YAXPAX_Z((void *)(this->m000))` → `(void *)this` —— 即 receiver 正则
把**调用的右括号**误当 receiver 外层括号（`__3_YAXPAX_Z((void*)(this->m000))` 整段匹配）。
与 byte-carrier 无关。修正 = receiver 正则追加 `(?=\s*->\s*\w+\s*\()` 前瞻（必须真是方法调用）。

### 第二处真凶：r8o 名称编码偏移 vs 视图偏移
0x536260 `CenterTeamCommand::Do`：`pass_r8o_shell_mismatch` 用**名字内编码偏移**
（`CenterTeamCommand_field_00` → 0x00）发射 `(char*)(this) + 0x0`，而 hpp 实际把该
数组成员声明在 **0x4**（`&this->m_1[3]` 解析到 +4）。二进制读 `[ecx+4]`，我们读 `[ecx]`。
修正 = r8o 发射前查 `ctx.views.arrays/scalars`，同名视图存在时**用视图偏移**。

### 规则集（单提交）
1. `pass_return_this_artifact` 扩展 receiver 位置（带 `->` 前瞻）
2. disasm 行 `; this` 注释剥离（`insns` 解析）
3. `pass_r8o_shell_mismatch` 视图偏移权威（`_view_off`）

### 门禁与实测
| 门 | 结果 |
|---|---|
| 单点 | 0x536080/0x536170/0x536260 + 3 个前损失 全部 MATCH |
| OK 对照 20 | 20/20 MATCH |
| NG 回归 40 | 40/40 可编译，CF=0 |
| **canonical 全池 A/B（同批单同序 955 parts）** | OK 6,544 → **6,547：gained 3 / LOST 0** |

收益：`0x536080 SelectTeamCommand::Do`、`0x536170 AddTeamCommand::Do`、
`0x536260 CenterTeamCommand::Do`（同族：命令类 Do 方法的 receiver 偏移）。

### 账本终态
OK **6,547** / NG 9,111 / COMPILE_FAIL 3,038 / PENDING 95 / THUNK 303（OK 34.33%）。
