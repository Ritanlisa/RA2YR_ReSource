# Rust 内核集成报告 —— minclass_solver `--use-rs`（2026-11-10）

任务：把 `tools/solver_rs/` 原型接入真求解器（PyO3 扩展，Python 保持编排），全量求解压到分钟级。
前置：`.omo/agents/speed/rust_report.md`（可行性验证，传播 231.7×）。

**结论：完成。对拍逐字节一致（全部确定性产物 SHA256 相等，含 283MB assignments）；进程内逐项对拍 3× PASS（212,788 簇 × 掩码/exact/flags 全等 + chosen/assign/K/LB 全等）；端到端 793.5s → 295.5s（同环境背靠背对，2.7×），solve 段 360.1s → 44.4s（8.1×）。**

---

## 1. 实测画像先行（集成前拿到的真实分段）

基线全量跑（`--prune-dead --allow-heuristics --skip-family-table`，MINCLASS_NO_CACHE=1）：

```
[time] 353.6s
[perf] universe 0.5 | load_data 2.0 | c10_fixpoint 90.5 | final_conflicts 183.0 | assign 3.7 | dumps 73.9
K_min=802 conflicts=0 constrained=107282
```

cProfile 全量画像（1,785s 概念时间，比例为准）：

| 段 | cum | 说明 |
|---|---|---|
| solve ×3 | 918s (51%) | 冲突循环 2 次 + K-was 对照 1 次 |
| ├ solve 自身统计 | ~260s | dom_names/dom_sizes/dom_ents 推导（range(n) 逐位测试） |
| ├ improve | 247s | 2换1 局部改进（80M 排序 lambda 调用） |
| ├ greedy | 219s | cover_of 构建 + counts 贪心 |
| └ cluster_domains | 179s | 212,788 簇 × 70 族 × 簇内实体掩码求交 |
| _c10_base_dom ×5 + _c10_propagate ×3 + anc/desc_union | ~170s | C10 不动点 + 中和器轮 |
| _cov18（C18 证据） | 79s | 证据段内部热点 |
| 其余证据构建（~60 族规则） | ~150s | 本轮未下沉 |

## 2. 架构（与 rust_report §4 草案一致：重活下沉、编排留 Python）

```
tools/solver_rs/pyext/            ← 新增 PyO3 crate（cdylib → minclass_rs.pyd）
├── Cargo.toml                    pyo3 0.27 + rayon，release: O3+thin-LTO
├── src/domain.rs                 Vec<u64> 位图（2063 bit = 33 word，搬运自原型）
├── src/solver.rs                 K1: cluster_domains + greedy + improve + lower_bound + solve 统计
├── src/c10.rs                    K2: _c10_base_dom + _c10_propagate + 中和器复合（14 轮外循环）
└── src/lib.rs                    PySolver：new/solve/c10_fixpoint/add_family_entries

tools/csp_export/minclass_solver.py   ← +~200 行增量接线（缺省路径零行为变化）
```

- **K1 `solve()`**：`--use-rs` 时 dispatch 到 `_rs_solve`。Python 一次性把 fam/clusters/exact/
  eff_size/intervals/dense/anc/desc/ents 打包进 PySolver（2063 类 / 212,788 簇 / 118,998 族掩码，
  2.5-2.9s）；每次 solve 只传 enabled/_proven_cell[0]/_unknown_roots/max_pairs。掩码跨界走
  `int.to_bytes(nb,'little')` ↔ bytes（rust_report §4.1 预案）。C10 写回 fam["C10"] 后经
  `add_family_entries` 增量注入（构建时 C10 族为空，C10 内核 base_dom 本就跳过 C10——两不相扰）。
- **K2 C10 不动点**：整体下沉（base_dom + ≤12 轮混沌传播 + ≤14 轮中和器：dead_j 优先、本地互斥根
  witness、边过滤重传播），返回最终边序/域表/空域实体/统计；fam["C10"] 写回仍走 Python 原码。
- **保留 Python**：证据构建（~60 族规则 + raw 扫描）、冲突消解编排（_fmasks 重算/drop 决策）、
  most-specific 赋值、全部 dump 写盘（stdlib json.dump，产物字节流不变）、检查点/缓存。
- **旗标**：`--use-rs` sys.argv 探测（沿 `--incremental`/`--skip-family-table` 先例，**不进缓存键**，
  vars(args) 不变）；守卫自动回退纯 Python：`--c1-covers`/`--strict-c1`（C1 covers 语义未下沉）、
  `--incremental`、MC_DBG_ROOT/MC_ROOT_DIAG/MC_CA_ANALYZE、扩展加载失败。**纯 Python 路径原样保留。**

## 3. 保真技术要点（为什么敢说逐字节一致）

1. **顺序敏感点逐一复刻**：簇序/簇内实体序 = 传入结构顺序；greedy counts 迭代序 = 类首现序
  （位升枚举 × 簇序），平局裁决 `c > bestn or (c == bestn and c > 0 and support > bestsup)` 逐字复刻；
  improve 的稳定排序（chosen 序 tie-break）；lower_bound 稳定排序。
2. **improve 的 excl 顺序无关性证明**：CPython set 迭代序不可复刻，但 improve 最终 `inter` =
  全部 excl 域的 AND（非空时与顺序无关；早退只在 AND=0 时发生，结果同为 0）——结局可证顺序无关。
  掩码代数（AND/OR）交换律同理。
3. **flags 内容只在 conflicted 簇重建**（Python 侧镜像 cluster_domains）——成功路径 conflicted
  恒空（非空即 FATAL exit(2)，不落盘），width_conflict 列表的 set 序问题被完全绕开。
4. **C1 只下沉默认口径**（c1_ok_mask == FULL ⇒ 尺寸下界 only）；`--c1-covers`/`--strict-c1` 直接回退。
5. **greedy 计数器语义修正一轮**：`diag_flagged = sum(d[4] and d not in conflicted)`——Rust 首版
  漏了 `not in conflicted`，对拍当场抓获（12,700 vs 4,429，差值恰为 8,271 空域簇），修正后全绿。
   —— 这正是对拍纪律的价值。

## 4. 对拍验证（MUST 门槛）

### 4.1 进程内逐项对拍（MC_RS_VERIFY=1，每次 solve 双跑）

```
[rs-verify] PASS: 212788 clusters mask/exci/flags 一致; constrained=106537 chosen=802 assign=106537 K=802
[rs-verify] PASS: 212788 clusters ... constrained=107282 ... K=802     ← 冲突 drop 后重解
[rs-verify] PASS: 212788 clusters ... constrained=107282 ... K=802     ← K-was（proven=FULL）
```
逐簇比较：域掩码（int 相等）、exact_ci、flags 键集、结构项（constrained 序/mask、chosen 序、assign、
k/k_greedy/LB/merges/pinned/forced/bad_cover/c1_gaps/n_conflicts/free/diag_flagged）。fail-closed：差异即 exit(2)。
C10 内核对账：steps=367,503、edges=194,190、constrained=60,559、roots_neutralized=33,584、
cascades_saved=35,459——与纯 Python 基线**逐项相等**。

### 4.2 端到端产物逐字节对拍（--dump-domains 全产物集）

纯 Python 与 --use-rs 各跑全量，11 个产物 SHA256 对比：

| 产物 | 结果 |
|---|---|
| minclass_assignments.json (283,638,100 B) | **IDENTICAL** |
| minclass_clusters.json / minclass_domains.json / minclass_domain_contents.json | **IDENTICAL** |
| minclass_result.json / minclass_conflicts.json / minclass_conflict_resolution.json / derived_layouts.json | **IDENTICAL** |
| .omo/yr1/flowgraph.json / ent_universe.json | **IDENTICAL** |
| c10_contradicted_entities.json | 内容全等（entities 列表逐项相等、by_prefix 计数相等）；仅 by_prefix **键序**不同 |

c10 ledger 键序的定性（非 rs 偏差，是求解器既有非确定性）：`_empty_pfx` Counter 的键序来自
CPython **set 迭代序**（受 PYTHONHASHSEED 影响）。实证：仓库 HEAD 版本（历史纯 Python 跑）键序
`['S','M','RET','G','P','T','GS','EAX']` vs 本次纯 Python 跑 `['T','M','P','S','G','RET','GS','EAX']`；
又跑两次纯 Python A/B——**同样只有这一个文件不同**。即 rs-vs-py 的差异模式 ≡ py-vs-py 的差异模式。
（修复它需要改纯 Python 路径的写序或钉 PYTHONHASHSEED，超出"不动纯 Python 路径"纪律，挂账见 §7。）

## 5. 计时（真实运行输出；本机有并行会话负载，成对背靠背对比为准）

| 跑 | 旗标 | 环境 | [time] |
|---|---|---|---|
| 基线画像 | py，无 --dump-domains | 有负载 | 353.6s |
| 纯 Python #1 | py + dd | 负载 | 772.8s |
| **--use-rs #1**（C10 优化前） | rs + dd | 负载 | 301.4s |
| 纯 Python #2 | py + dd | 负载 | 793.5s |
| **--use-rs #2** | rs + dd | 负载 | 295.5s |
| **--use-rs #3**（C10 传播优化后） | rs + dd | 负载 | **290.3s** |
| 对拍验证跑（双跑×3 solve） | rs+verify | 负载 | 850.8s |

- **同环境成对**：793.5s vs 295.5s = **2.68×**（772.8 vs 301.4 = 2.57×）。
- **分段**（成对跑）：final_conflicts 360.1 → 44.4s（**8.1×**，3 次 solve 全走 Rust）；
  C10 内核 Python（~60-100s，profile 估）→ Rust 13.0-13.4s（含 per-slot 联合缓存 + 无分配子集判定，
  steps 不变）；PySolver 构建 2.5-2.9s。
- 相对任务书 "~500s 基线"（= 旧画像 6734.6s − 族循环 6229.2s 的外推）：今日 rs 全量（含全部 dump
  产物写出）290-302s ≈ **5 分钟**，达"分钟级"目标。无负载环境估算 ≈ 240s（证据段 ~90s 为主导）。

## 6. 构建与使用

```bash
cd tools/solver_rs/pyext
cargo build --release
copy target\release\minclass_rs.dll minclass_rs.pyd      # 或 bash: cp

python tools/csp_export/minclass_solver.py --prune-dead --allow-heuristics \
        --skip-family-table --dump-domains --use-rs      # Rust 内核
# 去掉 --use-rs 即纯 Python（路径未动）
# MC_RS_VERIFY=1 环境变量：进程内双跑逐项对拍（fail-closed）
```

## 7. 后续（挂账，非本轮）

1. **证据段下沉**（~90s clean / ~170s loaded，现为最大段）：~60 族规则 + raw 扫描移植，
   rust_report 估 2-3 周——本轮按风险纪律未动（每族 20-40 行 Rust + 逐族对拍账）。
2. c10_contradicted_entities.json 键序非确定性：纯 Python 侧固有（PYTHONHASHSEED），
   如需跨进程字节可复现，需钉哈希种子或规范化写序（改写序会动纯 Python 产物字节，需用户裁决）。
3. dumps 段（~50s loaded）为 stdlib json.dump 字节契约所限，未动。
4. C18 `_cov18` 热点（profile ~79s 概念时间）可单独下沉（证据段内最大单点）。

## 8. 改动清单

```
tools/solver_rs/pyext/            新增    PyO3 扩展 crate（domain/solver/c10/lib + Cargo.toml/build.rs）
tools/solver_rs/.gitignore        +3      pyext/target、pyext/*.pyd、pyext/__pycache__
tools/csp_export/minclass_solver.py  +~200 行  --use-rs 探测/守卫、_rs_solve/_rs_verify_compare/solve dispatch、
                                           [rs-build] 打包、C10 下沉拼接、add_family_entries 注入
.omo/agents/speed/integration_report.md  本报告
```
