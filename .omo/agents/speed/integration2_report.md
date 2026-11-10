# Rust 内核集成报告 第二波 —— minclass_solver `--use-rs`（2026-11-10）

任务：第一波（5a4fa2251，见 `integration_report.md`）之后继续下沉三大热点：
final_conflicts 冲突消解段、证据构建段（画像定位的 top 族）、dumps 写盘段。

**结论：完成。确定性产物端到端 SHA256 全等（含 283,638,100 B assignments，背靠背
纯 Python 对 ×2）；MC_RS_VERIFY 进程内对拍 3× solve 全 PASS + K4 逐簇对拍 PASS +
283MB assignments 写盘字节对拍 PASS；成对背靠背 273.0s → 91.1s（3.0×），其中
final_conflicts 122.8 → 18.9s（6.5×）、dumps 72.4 → 18.5s（3.9×）、
证据段 73.2 → 47.7s（1.5×）。**

---

## 1. 画像先行（行级归因；py-spy 在 3.14 上拿不到 main 行号 → sys.monitoring）

py-spy 0.4.2 对 Python 3.14 的 `main` 帧解析不出行号（raw/speedscope 均返回
line 0，96.1s 归因黑洞）。改用 `sys.monitoring` LINE 事件自写行级 profiler
（`.omo/agents/speed/wave2/lineprof.py`，只累计 minclass_solver.py 帧的行自耗时，
C 调用计入调用行）。1,196.4s 监控跑（≈10× 膨胀，比例为准）行级归因：

| 行区 | profiled | 占证据段 | 实时估算（107.9s 无负载基线） | 内容 |
|---|---|---|---|---|
| 4684-4690 | 409s | 44% | **≈31s** | **C19/SSA reused-slot 扫描：147 槽 × 1.38M raw 全扫** |
| 6144-6182 | 168s | 18% | ≈13s | C11 成员链 8 轮收窄不动点（22K 链 × 逐位类循环） |
| 4391-4502 | 73s | 8% | ≈6-9s | C18 族（_cov18 主环 + C18b + C18c×2 轮） |
| 7598-7634 | 69s | （final_conflicts 段） | ≈11s | 冲突消解 `_fmasks` 重算 + 台账 names 列表 |
| 7044-7048 | 39s | 4% | ≈3s | `_c10_base_dom` Python 预计算（rs 路径纯浪费，Rust fixpoint 内部已重算） |

对照第一波报告 §7 挂账："证据段 ~90s clean、dumps ~50s、C18 _cov18 79s 概念时间"。
据此定下沉范围（任务书口径：top 3-5 族，其余留 Python）：**SSA 扫描 + C18 三阶段 +
C11 不动点**（= 画像 top3，合计 ≈50s 实时）。

## 2. 本波下沉清单（全部 `--use-rs` 门控，缺省零行为变化）

```
tools/solver_rs/pyext/src/evidence.rs   新增   K3: ssa_workload / c18_phase(kind=0|1|2) / c11_fixpoint2
tools/solver_rs/pyext/src/resolve.rs    新增   K4: resolve_round_impl（PySolver 方法壳在 lib.rs）
tools/solver_rs/pyext/src/jsonout.rs    新增   K5: dump_assignments / dump_clusters / dump_derived
tools/solver_rs/pyext/src/lib.rs        +resolve_round 方法；solve() 增 need_dom_bits，
                                        dom_bits 由 Vec<Vec<u16>> 改打包 LE u16 blob+counts
                                        （不再物化 2700 万个 Python int）
tools/solver_rs/pyext/src/solver.rs     size_ok_read 改 pub（resolve 只读消费）
tools/csp_export/minclass_solver.py     +~300 行 rs 门控分派（详见下）
```

### K3 证据构建（evidence.rs）

- **`ssa_workload`**（4684 段）：Python 侧一次性预扫 raw 收集 CALL_ARG 三元组
  （from/addr/to），Rust 单遍按 `from` 桶化 + `faddrs` 二分 `fn_at` 匹配。每槽
  uses 保持 raw 序（与逐槽全扫逐项相等）。`.omo/ssa2/workload.json` SHA 全等。
- **`c18_phase`**：C18 main（含 -hits/gap/ci 元组仲裁排序、exact 冲突检查、
  `w != 0 → w else 4` 的 Python 真值语义）/ C18b（最小签名 + `not not allow` 门）/
  C18c（级联唯一覆盖）。签名表 `_sig18/_cls_big18` 的构建与逐轮重建留 Python
  （两路径共享同一代码），Rust 只吃列式数组；掩码/钉定按 ents 迭代序回放，
  fam["C18"]/exact 插入序与纯路径一致。各阶段计数（1064/7277/5506、113/2、[36,0]）
  与基线逐项相等。
- **`c11_fixpoint2`**：8 轮混沌收窄逐链 mk→ck 同址更新序复刻（mk 收窄对同链反向
  立即可见；`_dc` 按迭代起始值比较——与 Python 的 stale-read 语义逐位对齐）。
  `_dom11` 初始化留 Python（5.3s profiled，非热点），键序原样传回。
  steps=8233 与基线相等。

### K4 冲突消解（resolve.rs + Python 编排）

- **`PySolver.resolve_round(all_fams, conflicted)`**：逐空域簇重算各族掩码
  （C1 尺寸下界 + 逐实体 AND，**不做接收者钳制、不做逐族 _pfm**——与台账环口径
  一致）、总交、非 FULL 族的 popcount + 前 12 候选索引（all_fams 位置序）。
  丢弃判定（`not inter or not _pfm(inter)`）与台账 JSON 留 Python。
- **light/full 探针解拆分**：`_rs_call`/`_rs_unpack`。消解循环内探针
  `need_dom_bits=False` + light 解包（只重建 conflicted）；循环退出后以
  `need_dom_bits=True` 确定性重解一次出完整 res + blob stash（K-was 对照同样走
  light）。消除 2 次探针的 54MB 位表转换与 names 物化。
- **`_c10_base_dom` 预计算跳过**（rs 路径；K2 内核本来就自己算）。

### K5 写盘（jsonout.rs）

- **字节等价 stdlib `json.dump(ensure_ascii=False, indent=0)` 复刻**：转义表
  （`"`/`\`/控制字符 \u00xx 小写十六进制，≥0x20 原样 UTF-8）、分隔符（`,\n`/`: `）、
  空集合 `[]`/`{}`、嵌套逐行。三个 indent=0 巨件下沉：
  assignments（283MB）、clusters（10MB）、derived_layouts（140KB）。
- **consumers 直连**：solve 返回 `dom_bits_blob`（打包 LE u16 + counts），
  assignments 写盘直接消费 blob + names 表——**候选名不再物化为 Python 列表**
  （旧路径每次 solve 转 2700 万 PyLong + 写盘再查一遍 names）。
- domains/domain_contents（indent=None 走 C 编码器，本就快）、result/conflicts
  （indent=1 小文件）留 stdlib。多进程并行写不需要：巨件已 Rust 化后写盘段无单点。
- 其余 indent=1 台账（conflict_resolution 4.1MB 等）留 Python。

### 保真要点（踩坑实录）

1. **CRLF 陷阱（本波最大险情，端到端对拍当场抓获）**：纯路径经
   `io.open(path, "w")` 文本模式写盘——Windows 上 `\n` → `\r\n`（+13,087,048 B）。
   Rust 写 LF 首版产物比纯路径小 13MB，orjson 解析后内容树全等但字节不等。
   修复：`jsonout.rs` 按 `cfg!(windows)` 发平台换行；MC_RS_VERIFY 的进程内对拍
   同步加 `os.name == "nt"` 换行平移。教训：**"字节等价"契约必须把文本模式
   换行平移算进去**，`json.dumps` 字符串对拍不够。
2. **c1_mask 真值语义**：`w if w else 4` 对负宽度保持原值（-1 真值），K1 时代的
   `w > 0` 写法在 T: 观测域上等价（数据无负宽度），但 K4 台账环对所有前缀簇算
   C1——按 Python 真值逐字复刻（`w != 0`）。
3. **C18 掩码先于仲裁**：fam 掩码 = 全部命中类的并（仲裁前），exact 钉定 = 仲裁后
   唯一类——两路输出分离回放。
4. **blob 每槽都有**：dom_bits cap 1600——pop>1600 的槽在 blob 里仍有 1600 项，
   偏移推进必须无条件；assignments 的收录过滤用**真域宽**（dom_sizes），不是
   blob 计数。
5. **K4 verify 并行对拍**：MC_RS_VERIFY 下纯 Python `_fmasks` 照算，Rust K4 同轮
   重算逐簇对拍（inter/族集合/前 12 名单）——8,271 簇全等，fail-closed。

## 3. 对拍验证（MUST 门槛）

### 3.1 进程内（MC_RS_VERIFY=1，461s 跑，最终代码态）

```
[rs-verify] PASS: 212788 clusters mask/exci/flags 一致; constrained=106537 chosen=802 assign=106537 K=802
[rs-verify] PASS: 212788 clusters ... constrained=107282 ... K=802     ← 冲突 drop 后重解
[rs-verify] PASS: 212788 clusters ... constrained=107282 ... K=802     ← K-was（proven=FULL）
[conflict-resolve] round=1 empty_clusters=8271 drops=8271               ← K4 逐簇对拍全等（无 DIFF 即 PASS）
[rs] assignments dump verify OK (283638100 B)                           ← Rust 写盘 vs stdlib 全字节
```

### 3.2 端到端（同日同树，MINCLASS_NO_CACHE=1，全部旗标同第一波）

| 产物 | 纯 py vs --use-rs |
|---|---|
| minclass_assignments.json (283,638,100 B) | **IDENTICAL** |
| minclass_clusters / minclass_domains / minclass_domain_contents | **IDENTICAL** |
| minclass_result / minclass_conflicts / minclass_conflict_resolution / derived_layouts | **IDENTICAL** |
| .omo/ssa2/workload.json（K3 SSA 产物） | **IDENTICAL** |
| c10_contradicted_entities.json | 内容全等；仅 by_prefix 键序不同（见下） |

**c10 ledger 键序（沿第一波 §4.2 定性，本波补当日对照实验）**：rs-vs-py 差异模式
≡ **py-vs-py**。同日同树连跑两次纯 Python：by_prefix 键序
`['M','EAX','T','G','GS','S','P','RET']` vs `['M','G','T','P','S','EAX','RET','GS']`
——两次纯跑之间同样只有这一个文件不同、entities/by_prefix 内容逐项相等。机理：
`_empty_pfx` Counter 的首触序依赖 `_empty_ids` 迭代序（纯路径 set 哈希序受
PYTHONHASHSEED 影响；rs 路径 BTreeSet 槽序），文件里 entities 已 `sorted()` 所以
列表恒等。修复需改纯路径写序或钉种子——超出"不动纯 Python"纪律，维持挂账。

## 4. 计时（真实运行输出；成对背靠背为准）

| 跑 | 旗标 | [time] | 备注 |
|---|---|---|---|
| 纯 Python #1 | py | 344.4s | 有负载 |
| 纯 Python #2 | py | 273.0s | 与下者背靠背 |
| **--use-rs #3** | rs | **91.1s** | 与上者背靠背 → **3.0×** |
| --use-rs #1/#2 | rs | 87.7s / 96.1s | 同日常态波动 |
| 对拍验证跑 | rs+verify | 461.0s | 双跑×3 solve + K4/写盘对拍 |

分段（背靠背对 py#2 vs rs#3）：

| 段 | 纯 py | --use-rs | 倍率 |
|---|---|---|---|
| 证据+C10（c10_fixpoint） | 73.2s | 47.7s | 1.53× |
| final_conflicts | 122.8s | 18.9s | **6.5×** |
| assign | 2.3s | 3.6s | ~（噪声区间） |
| dumps | 72.4s | 18.5s | **3.9×** |
| **端到端** | **273.0s** | **91.1s** | **3.0×** |

相对第一波 rs 基线（107.9s 无负载）：→ 91.1s。Rust 内部：PySolver 构建 1.1s、
C10 fixpoint 6.6s（无负载态）。

## 5. 残余热点（下一波候选，非本轮）

1. **证据段剩余 ~40s Python**：画像后已弥散（~55 个族规则 + raw 多遍扫描 + UF +
   实体构建各 1-3s），无 >10s 单点。下一个量级收益需要"raw 一次列式装载 +
   多族共享扫描"的结构性改造，或逐族继续下沉（每族 20-40 行 Rust + 逐族对拍账）。
2. **dumps 段剩余 ~16s**：c1_strict/all_cov 诊断（~3s）、domain_contents C 编码
   （3.8MB）、conflict_resolution 台账 indent=1 纯编码器（4.1MB，~4s）+ 弥散构造
   循环。可将台账换 jsonout 风格 indent=1 Rust 写盘器（收益 ~4s）。
3. **C9 槽主扩展**（`allowed_of` 逐位展开，~2s）：allowed_of 按 ci 记忆化即可塌缩
   （纯 Python 侧改动，需裁决）。
4. c10_contradicted_entities.json 键序非确定性（沿第一波挂账）。

## 6. 构建与使用（不变）

```bash
cd tools/solver_rs/pyext
cargo build --release
copy target\release\minclass_rs.dll minclass_rs.pyd

python tools/csp_export/minclass_solver.py --prune-dead --allow-heuristics \
        --skip-family-table --dump-domains --use-rs      # Rust 内核（K1-K5）
# 去掉 --use-rs 即纯 Python（路径未动）；MC_RS_VERIFY=1 进程内双跑逐项对拍
```

## 7. 证据文件

- 行级画像：`.omo/agents/speed/wave2/lineprof_out.json`（sys.monitoring）+
  py-spy 采样 `base_rs_raw.txt`/`base_rs_speedscope.json`
- 跑日志：`wave2/{py_run,py_run2,rs_run1..3,rs_verify_run,rs_verify_run2}.txt`
- 纯路径产物备份（对拍基准）：`wave2/py_out/`
- 写盘器单测：`wave2/chk_jsonout.py`（三 schema 字节等价 stdlib+文本模式）
