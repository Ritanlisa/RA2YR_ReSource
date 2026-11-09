# solver_rs — minclass 求解器热路径 Rust 内核原型

为 `tools/csp_export/minclass_solver.py`（6,400+ 行 Python，全量 25-112 分钟）的
Rust 化做可行性验证。**本目录不运行也不修改求解器本身**，只消费其数据文件。

## 结论（2026-11-09，详见 `.omo/agents/speed/rust_report.md`）

- 机制核（等值合并 + 簇域传播 + 贪心）全指标对拍 PASS：**10.5x**
- 传播循环（60 族 × 43,502 簇）：**231.7x**（32 线程）/ 6.4x（单线程）
- solve 段（域+贪心）：**32.1x**；raw 边扫描：**9.2x**
- 负结果：serde_json 装载比 orjson 慢（0.7x）→ 换 simd-json

## 构建

```bash
cargo build --release
```

## 运行

```bash
# Rust 内核（阶段计时）
.\target\release\solver_rs.exe D:\RA2YR_ReSource --prop

# Python 参照（同算法，求解器同款数据结构：dict UF + bigint 掩码）
python bench_py\ref_kernel.py D:\RA2YR_ReSource --prop

# 对拍 + 计时汇总（本原型的验收口径：全部指标逐项相等才 PASS）
python run_bench.py D:\RA2YR_ReSource --runs 3
```

flags：`--json`（对拍输出）、`--threads N`（rayon 线程数）、`--prop`（60 族传播微基准）。

## 数据依赖（全部只读）

- `tools/type_infer/constraints/raw_constraints.json`（124MB，1,368,150 边）
- `anchors/minclass_binary_facts.json`（this_installs/alloc_sites/reg_links）
- `anchors/class_db.json` + `anchors/type_universe.json`（类宇宙 n=2,136）
- `anchors/class_name_align.json` + `anchors/mangled_alias.json`（alias 解析）
- `tools/class_layouts.json`（C1 尺寸下界）
- `anchors/ida_function_protos.json`（fn_at 地址表）
- `anchors/fn_returns_this.json` / `anchors/fn_takes_this.json`（RET==this / C20）

## 内核范围

同构复刻：ent_id 全规则、守卫并查集（EXACT 冲突 + 字典序最小根）、6 通道等值合并、
C1 尺寸下界域、C4 EXACT 覆盖、接收者类域钳制、空域回退、greedy（含平局/迭代序语义）、
lower_bound。省略（报告有差异表）：~58 其余族、G/M 证明、improve。
