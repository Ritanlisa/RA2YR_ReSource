# Rust 求解内核原型 —— 可行性验证报告

**日期**: 2026-11-09 · **代码**: `tools/solver_rs/`（Cargo + rayon）· **对照**: `tools/solver_rs/bench_py/ref_kernel.py`
**铁律遵守**: 未运行、未修改 `minclass_solver.py`；只消费其数据文件。

---

## 1. 求解器核心数据结构说明（读自 minclass_solver.py，7,808 行）

### 1.1 总体形态

求解器**不是**通用 CSP 引擎，而是一条「等值合并 → 簇域求交 → 集合覆盖」流水线：

```
build_universe ─→ 实体/观测收集 ─→ 族证据掩码构建(~60族) ─→ 等值合并(UF+守卫)
     ─→ 簇(连通分量) ─→ cluster_domains(域求交) ─→ greedy+improve(集合覆盖) ─→ K
```

没有 worklist/fixpoint 迭代——传播是**单遍语义**：族掩码在收集期单调求交
（`fam[f][eid] = fam[f].get(eid, FULL) & mask`），簇域在求解期一次性求交。
增量模式（`--incremental`）只是给 cluster_domains 加了 per-(root,family) memo，
不是迭代不动点。

### 1.2 核心数据结构（含行号）

| 结构 | 表示 | 位置 | 说明 |
|------|------|------|------|
| 类宇宙 | `names: list[str]`（n≈2,136 = class_db 1,597 类 + type_universe 539 类型词表），`FULL = (1<<n)-1` | L250-266 | 掩码 = Python 任意精度 int，每位一个候选类 |
| 实体 | 规范字符串键：`T:<fn>`(函数this) `P:<fn>:k`(参数) `R:<fn>:<reg>`(寄存器,连接点) `S:<fn>:+N`(栈槽) `M:<fn>:this:<off>`(成员链) `G:<addr>` `N:<site>`(new点) `RET:<fn>` `V:<addr>`(vtable槽,连接点) | `ent_id()` L887-921 | `ents: dict eid → {"obs": set[(off,width)], "raw": set}`；R:/V: 不进 ents 只当 UF 连接点 |
| 原始约束 | `raw_constraints.json` 1,368,150 条边 `{from,to,type,addr}`；类型分布：ASSIGN 549K / TYPE_SEED 265K(**求解器不消费**) / CALL_ARG 141.5K / MEMBER_ACCESS 87K / RETURN_TO 83.5K / CALL 66K / STACK_ACCESS 61.6K / CALL_VTABLE 35K / PTR_ARITH 43K / FUNC_PARAM 33K / RETURN 3.2K | L1288 | TYPE_SEED 在求解器中 0 处引用 |
| 并查集 | `class UF`：dict 路径压缩，`union` 最小串胜出（`if ra > rb: swap` → 根=字典序最小实体串） | L182-205 | 带守卫版 `un(a,b,channel)` L4712-4736：两侧根的 EXACT 类钉集合不相交 → **拒绝合并**（记冲突）；成功则 `root_exact[新根] = 并集` |
| 族证据 | `fam: dict[family][eid] → int掩码`（~60 族 C1..C26/MT/MR/...），构建模式统一为逐证据 `&= allowed_of(ci)`；`allowed_of(ci) = ci 及其后代闭包` 的位掩码 | L1878, L1359-1369 | EXACT 族（C4/C8 装表）走独立通道 `exact: dict eid → [(ci, src)]` |
| 簇 | `groups[uf.find(eid)].append(eid)`（ents 插入序遍历）；簇 = `{root, ents, obs(并集), exact(并集)}` | L4971-4985 | 簇序 = 根首触序；根串前缀（T:/R:/GS）决定接收者纪律 |
| 簇域 | `cluster_domains()` L5091-5227：`mf = ∩_{eid∈ents} fam[f].get(eid, FULL)`（逐族）→ `m = ∏ mf`；EXACT 单类 → 域=单点；EXACT 多类 → 冲突旗标；空域 → 非 FULL 族掩码之并兜底；T:/R:/GS 根与 `_CLASSMASK`（前 1,597 位）相交钳制（空交则族置 FULL、主域保留） | | |
| 集合覆盖 | `greedy()` L5229-5270：经典贪心 + 特异性 tie-break（单点域/EXACT 类的 support 加成）；`improve()` L5272-5340：对合并（40K 对预算）；`lower_bound()` L5342-5351：按域宽排序的不相交打包 | | 贪心迭代序 = Python dict 插入序，影响平局裁决 |

### 1.3 等值合并的守卫体系（合并 ≠ 无条件）

| 守卫 | 语义 | 核内实现 |
|------|------|---------|
| EXACT 冲突 | 两根 EXACT 钉不相交 → 拒绝 | ✅ 同构 |
| multi_caller_join | 参数槽被 >1 个不同来源实体写 → 非同一对象，拒绝 | ✅ 同构 |
| reg_flow_taint | 寄存器到达定义跨 call/控制流汇合 → 拒绝 | ✅ 同构（reg_links clean 标志） |
| global_unproven / member_chain_unproven | G:/M: 源需 singleton/member_types 链证明 | ⚠️ 核内无证明表 → 保守拒绝（语义同「无证明不合并」） |
| self_pin_incompatible | 两侧名字钉类无公共后代 → 拒绝 | ❌ 核内无名字钉通道 |

### 1.4 热点画像（为何 25-112 分钟）

1. **1.37M 边 × 多遍扫描**：~60 族构建各自至少一遍 raw 全扫（MEMBER_ACCESS 遍、CALL_ARG 遍、FUNC_PARAM 遍、cands 收集遍、edge_cnt 遍……），每边做 `ent_id` 字符串解析（split/regex/hex）——Python 字符串处理是最大开销之一。
2. **簇域求交**：43,502 簇 × ~60 族 × 簇内实体的 bigint AND——Python 2136 位 int 每次 AND 是堆操作。
3. **greedy/improve**：纯 Python 循环 + dict 迭代。

---

## 2. Rust 原型（tools/solver_rs/）

### 2.1 范围（忠实最小核）

**同构复刻**（算法与数据结构 1:1，含所有平局/迭代序语义）：
- `ent_id` 实体命名全部规则（含 `.member(`/`::param`/`.return`/`stack_+`/`offset `/数据段范围门控）
- 守卫并查集（EXACT 冲突守卫 + 字典序最小根 + root_exact 并集维护）
- 等值合并全部 6 通道：FUNC_PARAM / CALL_ARG(reg_def+direct+守卫链) / RET==this / C20 ecx==this / C17 洁净寄存器
- 实体收集序 = Python ents dict 插入序（决定簇序与贪心平局）
- 簇域：C1 尺寸下界掩码（`not sz or sz >= need`，含 size=0=未知语义）+ C4 EXACT 覆盖/冲突 + 接收者类域钳制（族空交→置 FULL）+ 空域回退
- greedy（插入序 counts 迭代 + support tie-break）+ lower_bound（稳定排序）
- 位掩码 = `Vec<u64>`（2,136 bit = 34 word），替代 Python bigint

**核内省略**（差异表）：
| 省略项 | 理由 | 影响 |
|--------|------|------|
| ~58 族证据（C2/C3/C5..C26/MT/MR/…） | 每族需 owner_of_fn/protos/identified/singleton 等额外锚表 | K 核=319 vs 全量求解器 K=775（族越少约束越松，K 越大——方向符合预期）；核目标是**机制验证+吞吐**，非复刻 K |
| G/M 源证明、self-pin 守卫 | 需 member_types/singleton/名字钉表 | 少量合并差异（核内保守拒绝） |
| C1 covers/width_conflict（--c1-covers 才启用） | 求解器默认口径也是关的（只用尺寸下界） | 与默认口径一致 |
| eff_size 证据抬升、proven universe 剔除、improve() | 次要路径 | 不影响机制结论 |

### 2.2 文件

```
tools/solver_rs/
├── Cargo.toml            # serde/serde_json/rayon，release: O3+thin-LTO
├── src/
│   ├── main.rs           # 阶段驱动 + 计时 + --json 对拍输出 + --threads/--prop
│   ├── universe.rs       # 类宇宙/alias/@剥离 resolve/布局尺寸
│   ├── entity.rs         # ent_id 规则 + 字符串驻留
│   ├── uf.rs             # 守卫并查集（按实体串比较的最小根）
│   ├── domain.rs         # u64[word] 位掩码（full/and/or/popcount/intersects）
│   └── kernel.rs         # 五阶段内核 + greedy/lower_bound + 传播微基准
├── bench_py/ref_kernel.py  # Python 参照（求解器同款数据结构的最小核）
└── run_bench.py            # 对拍+计时汇总（--runs N）
```

---

## 3. 基准数字（真实计时输出）

环境：i9-14900HX（32 逻辑核），rustc 1.92.0，Python 3.14.2 + orjson 3.11.9。
数据：真实 `raw_constraints.json`（124MB / 1,368,150 边）+ `minclass_binary_facts.json` + 5 个锚表。
`python run_bench.py --runs 3` 实测输出（min/mean/max 三跑稳定，下表取单次代表性值）：

```
== 对拍（Rust vs Python 参照，同数据同算法）==
PASS：全部指标一致
    （n_edges/n_ents=44505/c1_evidence=86985/c4_exact=1246/unions=33667/
     exact_rejects=2/全部 reject 计数/clusters=43502/constrained=12599/
     k_greedy=319/lower_bound=319/forced=pinned=319/dom_popcount_sum=18131987
     /传播 checksum=13418942 —— 逐项相等）

== 阶段计时（min/mean/max 秒，N=3）==
stage                   rust(s)               python(s)              speedup
universe                0.233                 0.089                     0.4x
load(124MB JSON)        1.216                 0.842                     0.7x
collect(intern+obs)     0.186                 1.707                     9.2x
c4_exact                0.001                 0.004                     3.8x
equality(UF+guards)     0.169                 1.114                     6.6x
clusters                0.013                 0.072                     5.7x
solve(domains+greedy)   0.701                 22.501                   32.1x
TOTAL(kernel)           2.520                 26.330                   10.5x

== 传播吞吐微基准（60 族 × 43,502 簇 × 每实体；稀疏约束模型 p=1/16）==
  rust  : propagate 5,280,420 ops in 0.009s (gen 0.810s)
  python: propagate 5,280,420 ops in 2.013s (gen 191.179s)
  传播循环 speedup = 231.7x   checksum rust=13418942 py=13418942
```

rayon 贡献拆分（`--threads 1` 实测）：
- 传播循环：1 线程 0.313s → 32 线程 0.009s = **35x 线性扩展**（checksum 不变）
- 内核整体：1 线程 2.728s → 32 线程 2.52s ≈ 1.08x（串行段主导：c1_size_mask 预计算+greedy 本质串行）

诚实的负结果：
- **load 0.7x**：orjson 解析 124MB 比 serde_json 快（orjson 是 Rust 写的+高度优化）。对策：换 `simd-json`（估计 2-4x）或按行分块并行解析；或让 Python 侧 orjson 解析后传数组给 Rust（PyO3 零拷贝不可行但批量转换可接受）。
- **universe 0.4x**：Rust 侧用 serde_json::Value 全量解析 15MB class_db。对策：只反序列化所需字段（names 键序 + size），估计 5x。

### 对全量求解器的外推（估算，非实测）

全量求解器 ≈ 60+ 族 × 每族一遍 raw 扫描（Python ~1.7s/遍 量级）+ 多次 solve() 重算簇域 + greedy ~20s + improve + 报告序列化。
按核实测比率：raw 扫描 9.2x、簇域求交 232x、greedy 32x → **全管线 Rust 化预估 100-300x**，
即 25-112 分钟 → **15-70 秒**（含 1.2s 装载）。最大不确定项：improve() 对搜索与报告 I/O。

---

## 4. PyO3 接口设计（10.5x+ 达标 → 设计如下，未实现绑定）

### 4.1 设计原则

1. **重活下沉、编排留 Python**：检查点/缓存/报告/CLI 全留 Python；Rust 只做「边扫描、求交、贪心」纯函数。
2. **掩码用 Python int 进出**（求解器代码里本来就是 bigint，避免双重表示）：PyO3 侧 `int → to_bytes(267,'little') → [u64;34]`，一次性转换按 (eid,fam) 摊销。
3. **无状态调用 + GIL 释放**：所有热入口 `py.allow_threads(...)`，rayon 在里面跑。
4. **对拍即验收**：每个下沉函数输出与 Python 参照逐项对拍（本报告的 run_bench 模式），fail-closed。

### 4.2 接口签名草案

```python
import minclass_kernels as mk   # maturin 构建，cdylib

# ---- ① 族证据集（一次性构建，跨多次 solve 复用）----
fs = mk.FamilySet(n_bits=2136, classmask_bits=1597)
fs.add_family("C2", {eid_str: mask_int, ...})     # dict[str, int] → 内部 Domain
fs.add_family("C1", ...)                          # 支持 exempt/unknown 集合后续打补丁

# ---- ② 等值合并（替代求解器 L4742-4957 的循环体）----
eq = mk.EqualityEngine(n_bits=2136)
eq.add_exact_pins({eid_str: ci, ...})             # root_exact 预注册
eq.union_many([(a_str, b_str, channel), ...])     # 批量守卫合并；返回 (unions, rejects)
clusters = eq.dump_clusters()                     # -> (roots: list[str], members: list[list[str]])

# ---- ③ 簇域求交（热路径：Python 2.0s → Rust 0.009s 的那个循环）----
out = fs.cluster_domains(
    clusters=clusters,                            # ② 的产物（或 Python 侧同构结构）
    obs={eid_str: [(off, w), ...], ...},          # C1 观测（Rust 侧算 need+尺寸下界）
    layout_sizes=[...],                           # 或者初始化时传入
    enabled=["C1", "C2", ...],
)
# -> list[dict]: {"root": str, "mask": int, "popcount": int,
#                 "exact_ci": int|None, "flags": [...], "fallback_used": bool}

# ---- ④ 集合覆盖（可选下沉；32x）----
chosen, assign = mk.greedy_set_cover(
    domains=[(root, mask_int), ...],
    support_extra=[ci, ...],                      # ALL_EXACT_CLASSES
)
```

### 4.3 落地路径（建议三阶段）

| 阶段 | 内容 | 预估工作量 | 预估收益 |
|------|------|-----------|---------|
| A | ③+④ 下沉（cluster_domains/greedy 为扩展） | 1 周（本原型已有实现，套 PyO3 壳） | solve 段 32x；对增量模式收益最大 |
| B | ①+② 下沉（族构建 raw 扫描下沉，逐族移植+对拍） | 2-3 周（每族 20-40 行 Rust + 锚表加载 + 对拍账） | 全管线 ~100x+ |
| C | improve/报告向量化、simd-json | 1 周 | 25-112min → 分钟级内 |

风险：
- **行为等价是硬门槛**：Python dict 迭代序/平局语义已被本原型证明可复刻（对拍 PASS），但 60 族全量移植时每族都要过对拍；
- orjson 已很快，Python 侧解析+传参开销可能吃掉部分收益（接口按批量数组传，避免逐条调用）；
- `allowed_of` 后代闭包依赖 lattice 层次数据，需一并下沉或预计算成掩码表传入。

---

## 5. 移植工作量估计

| 项 | 规模 | 说明 |
|----|------|------|
| 本原型（机制核） | ~1,500 行 Rust + ~430 行 Python 参照 | ✅ 已完成（含对拍） |
| 阶段 A（PyO3 壳 + domains/greedy） | ~300 行 | maturin 工程 + 掩码转换 + 回归对拍 |
| 阶段 B（60 族全量） | ~2,000-3,000 行 | 每族一遍 raw 扫描 + allowed_of 预计算表；大头是锚表装载与逐族对拍，不是算法 |
| 阶段 C（杂项） | ~500 行 | improve、simd-json、报告 |

结论：**可行性成立**。机制核 10.5x、传播循环 232x（其中语言 ~6x、并行 ~35x）、
贪心+域 32x，全部在同一数据集上与 Python 参照逐项对拍一致。
按阶段 A→B→C 渐进下沉，任何一步都可回退（Python 路径保留为对照实现）。

## 6. 复现

```bash
cd tools/solver_rs
cargo build --release
python run_bench.py D:/RA2YR_ReSource --runs 3      # 对拍+计时（本报告 §3 数字）
.\target\release\solver_rs.exe D:\RA2YR_ReSource --prop   # 单跑 Rust 含传播微基准
python bench_py/ref_kernel.py D:\RA2YR_ReSource --prop    # 单跑 Python 参照
```

原始计时数据：`.omo/agents/speed/bench_raw.json`（gitignored，本地保留）。
