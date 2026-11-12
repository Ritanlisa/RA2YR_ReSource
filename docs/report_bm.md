# BM 反馈通道 —— 字节匹配确认的类型回填求解器

**日期**：2026-11-12 · **产物**：`anchors/byte_match_types.json`（1,170 evidence / 3 通道）+ 求解器 `BM` 族接线
**生成器**：`.omo/agents/bm/s7_build.py`（提取 + 门控 + 去重 + 冲突台账）、`.omo/agents/bm/s27_repair.py`（冲突修复轮）、`.omo/agents/bm/s23_proven.py`（proven 宇宙镜像）
**局部工件**（`.omo/` 被 gitignore）：`.omo/agents/bm/` 下 s1–s31 脚本、`ablation.json`、`base2*.log`、`final_run3.log`、`bm_full.json`

---

## 0. 结论

- 反编译产线 **2,654 个字节级 MATCH 函数**中，经 clean 门（MATCH + 0 规则违规 + 非 this-as-id）筛出 **1,939** 条账本记录，其中 **1,804** 条能在 `.omo/decomp_batch/**` 找到对应的 MATCH+clean part 工件与生成 cpp。
- 从这些 cpp 提取 **1,589 条**候选类型事实（签名 / 成员宽度 / 类归属），经去重、冲突剔除、proven 宇宙门、`int` 族与 `return this` 两类不可证伪证据剔除后，落地 **1,170 条** strict 证据：
  - `bm-owner` 503（T:FN → 类归属，158 个不同类）
  - `bm-member` 543（M:FN:this:0xOFF → 宽度族，475 个函数）
  - `bm-sig` 124（P:FN:k / RET:FN → 签名类型）
- **覆盖率（同一份求解器与 anchors 状态的实测前后）**：`42,565 / 89,813 = 47.4%` → **`43,088 / 90,463 = 47.6%`**，unique 域 **+523**，受约束簇 **+650**，K_min 841 → 873，`empty_clusters` 保持 **7,206 不变**（零簇损失）、`conflicts=0`。
- 任务书写的 `43,057 / 85,710 = 50.2%` 是**旧快照口径**：solver 源码自 YVP 提交（`418734504`）起又演进了约 1,000 行，且 anchors 也变过；本报告一律用「今天、同一条命令、同一份 anchors 的 before/after」作对照。

---

## 1. 数据源与 clean 门

### 1.1 账本池（`.omo/codegen_match/status.json`，8,516 条判定）

| 口径 | 条数 |
|---|---|
| `status=OK`（diffasm 字节 MATCH） | 2,654 |
| `clean=true` 且 `rule_violations=0` 且 `this_as_id=false` | **1,939** |
| MATCH 但 `clean` 字段缺失（审计前老记录） | 472 |
| MATCH 但 `clean=false`（有规则违规） | 242 |
| MATCH 但 `this_as_id=true`（**161B 类过拟合**） | 1 |

### 1.2 逐条硬门

| 门 | 内容 | 淘汰 |
|---|---|---|
| **G1 clean** | 账本 `OK + clean=true + rule_violations=0 + this_as_id=false` | 714（含 161B 的 1 条 this-as-id） |
| **G2 工件复核** | 该地址必须存在 `part_report.json` 行且自身复记 `verdict=MATCH, clean=true, rule_violations=0`；取最新一条并读其 unit cpp | **135**（账本 OK 但后续 CW5 重跑把函数改坏、part 记录已是 MISMATCH/非 clean，账本未回写——这类地址的"最新 cpp"已不是字节匹配版本，不回填） |
| **G3 词表** | 每个类型串必须在求解器宇宙（`class_db` 1,597 + `universe_binary_classes` 124 + `type_universe` 539）里可解析 | 候选期逐 token 丢弃 |
| **G3b proven 宇宙** | `bm-owner` 的类必须落在求解器 `--proven-universe` 的 kept 集合内（否则叠加 `_pfm` 后掩码变空、簇被丢弃） | 4 |
| **G4 尺寸** | `bm-sig` 仅收 `orig_size ≥ 5`（≤4B 的 `retn`/`retn N` 桩，签名不受 codegen 约束） | 290 |
| **G5 参数使用** | 参数名必须在函数体里出现（否则其类型从未影响 codegen） | 9 |
| **G6 去重** | 与**全部** `anchors/*.json` 中既有 `ent/types` 证据求交：BM 类型集被已覆盖 → 丢弃 | **347** |
| **G7 冲突** | 同一 ent 与既有族证据**完全不相交** → 丢弃并记入文件内 `meta.conflict_excluded_ledger` | **33** |
| **G8 冲突修复轮** | 若某簇在 BM 进入后变空（对比冻结的 baseline 冲突台账 `8e03f027`），删除该簇里的 BM 事实并重跑，至多 3 轮 | **10** |

最终 `1,589 − 347 − 33 − 10 − 29(vocab 不可达) = 1,170`。

> `vocab 不可达`：`int*` 在 `type_universe` 里写作 `int *`，而 loader 的 `_norm_ty` 归一成 `int*` 后查名表必然 miss（既有 loader 的拼写不一致，非本通道引入）。这类行不发射，避免"文件里有、加载为 0"的静默账目差。

---

## 2. 三通道提取

| 通道 | 实体 | 语义 | 行数 | 覆盖 |
|---|---|---|---|---|
| `bm-owner` | `T:%X` | class-scoped 定义的 emitted 类（`cls_src=name_prefix` 排除） | 503 | 158 个类，ObjectClass 105 / TechnoClass 55 / MultiplayerGameMode 24 / FootClass 14 / AbstractClass 13 … |
| `bm-member` | `M:%X:this:0x%X` | 该 unit 自有 hpp 里 `this->NAME` 的**声明宽度**，按 IG 粒度族发射（普通 mov 只钉宽度不钉符号） | 543 | int 族 510 / char 族 26 / bool 6 / short 1；475 个函数 |
| `bm-sig` | `P:%X:k`、`RET:%X` | emitted 签名类型（裸 int 族与 `return this` 已剔除） | 124 | char 44 / void* 37 / unsigned int* 19 / unsigned char 8 / unsigned char* 7 / char* 6 / short 2 / double 1；116 个函数 |

实体拼写与 solver 完全同形（`T:%X` / `M:%X:this:0x%X` / `P:%X:k` / `RET:%X`），因此与 C1/C2/C9/C10/C11/C26 等既有族在同一实体上做 AND 掩码。

---

## 3. 覆盖率前后

命令（两者一致）：

```bash
python tools/csp_export/minclass_solver.py --use-rs --dump-domains
```

| 口径 | unique | total | pct | forced / narrow / wide | K_min | empty_clusters | conflicts |
|---|---|---|---|---|---|---|---|
| **before**（移除 BM 文件复跑，与缓存 `8e03f027` 逐键一致） | 42,565 | 89,813 | **47.4%** | 42,565 / 26,695 / 20,553 | 841 | 7,206 | 0 |
| **after**（BM 1,170 recs，载入 1,170） | **43,088** | **90,463** | **47.6%** | 43,088 / 27,297 / 20,078 | 873 | **7,206** | 0 |
| 差 | **+523** | +650 | +0.2pp | — | +32 | **0** | 0 |

域级迁移（before/after 共同 root 89,528 个；`minclass_domains.json` 逐键对比）：

| 迁移 | 数量 |
|---|---|
| wide(>8) → unique | **289** |
| narrow(2–8) → unique | **6** |
| wide → narrow | 80 |
| narrow → wide | 8 |
| unique → narrow | 26 |
| unique → wide | 44 |
| 其它（wide→wide / narrow→narrow） | 91 |

- **295 个既有簇被 BM 钉成唯一**（净 +225）；新增 root 935 个（多为 BM 新物化的 M/RET 实体）。
- **70 个原唯一簇失去唯一性**：机制是 C10 不动点状态漂移（`roots_neutralized` 34,259 → 34,308、`edges` 200,437 → 199,944），被中和的 root 掩码置 FULL 后域变宽——这是求解器的非局部性质，不是 BM 掩码把域放宽（BM 掩码只会收窄或空）。逐例可查：`EAX:782BB0:782BE1`（1→52，class 由 VocClassHeader 变 BuildingClass）。
- K_min +32 是**预期**：`bm-owner` 把 503 个 T: 实体钉到具体类，强制身份变多（更接近真实类数），不是坏信号。

### 通道消融（同一最终文件切片，各自完整跑）

| 变体 | 载入 | unique | total | pct | K_min | empty |
|---|---|---|---|---|---|---|
| baseline（无 BM） | 0 | 42,565 | 89,813 | 47.4% | 841 | 7,206 |
| owner only | 503 | 42,796 | 89,712 | 47.7% | 873 | 7,206 |
| owner + member | 1,046 | 42,825 | 90,275 | 47.4% | 873 | 7,206 |
| **full（owner+member+sig）** | **1,170** | **43,088** | **90,463** | **47.6%** | 873 | 7,206 |

> `member` 的净 unique 增量小（+29），因为它主要把已有 M 实体从"未知"收窄到宽度族（域 2 而非 1）；但它是**唯一真正被 codegen 钉死**的通道（见 §6），对下游类型消费价值高。`sig` 贡献 +263 unique。

---

## 4. 冲突审计

三层，全部在最终文件里可查：

1. **G7 静态冲突（33 条）**：BM 类型集与既有 anchors 证据完全不相交 → 不发射，条目落在 `meta.conflict_excluded_ledger`。
   - BM 侧类型分布：`bool` 15、`int/unsigned int` 8、`unsigned char` 2、`char` 2、类 2、其它 4。
   - 方向不唯一：`M:401940:this:0x18` BM=`int`族 vs 既有 `bool`，实况是 `mov eax,[ecx+18]` 的整 dword 读 —— **BM 更对**，既有 bool 证据更可疑；`M:521B20:this:0x6C4` BM=`int`族 vs 既有 `void*`，4 字节指针与 int 在宽度上不可区分 —— **BM 更弱**，剔除是对的。
2. **G8 冲突修复（10 条）**：BM 进入后使簇域变空（solver 台账新增的 drop）。逐条列在 `meta.repair_log`：
   - 6 条 owner：`R:65AD30:ecx`(TechnoClass vs C1/C2)、`R:53ECB0:ecx`(Waypoint vs C2/SS)、`R:4F4CB0/4F4C70:ecx`(String vs C2)、`R:680FF0:ecx`(GameState vs C1/C2/SS)、`R:6810C0:ecx`(ObjectClass vs C2)；
   - 4 条 sig：`P:4F4CB0/4F4C70:0`(char* vs C7)、`P:6E47C0/7ACB90:0`(void* vs C7)。
   - 修复后 `empty_clusters` 精确回到 baseline 7,206 —— **BM 不丢任何原本存活的簇**。
3. **求解器终态**：`conflicts=0 exact_conflicts=0 c1_gaps=0 unassigned=0`（before 亦为 0）。

---

## 5. 类型事实的证明强度（必须读）

| 通道 | 证明类别 | 为什么 |
|---|---|---|
| `bm-member`（543） | **width-pinned（强）** | 访问宽度直接决定指令形态（`mov al/[ecx+4]` vs `mov eax/[ecx+4]` vs `fld`）；字节全等 + hpp 声明类型 ⇒ 宽度被钉死。符号位不钉（沿用 IG 的 `char/unsigned char`、`short/unsigned short` 双候选语义）。 |
| `bm-owner`（503） | **ledger-attribution（中）** | **类名不参与 codegen**，字节全等并不"证明"类名。它证明的是"这套翻译（含类归属）能复现字节"，类归属本身来自账本 `cls_src`（backfill 395 / signals_cls 95 / proto_this 13）。已排除 `name_prefix`（纯名字派生）与方案外类（vocab/phantom 门）。与二进制族矛盾时按 §4 处理。 |
| `bm-sig`（124） | **codegen-consistent（中，仅限可分辨类型）** | 4 字节标量与任意 4 字节指针在 codegen 上不可区分（同槽/同寄存器），故**裸 int 族（int/unsigned int/long）全部不收**：实测 243/478 emitted 标量参数被二进制族直接否证（典型：`p0 - m004[0] >> 2` 的指针算术被 emit 成 `int p0`）。保留 char/short/double/bool/指针拼写，其位宽或寄存器类确实影响指令。 |

### 已证伪/已剔除、勿重跑

- **裸 int 族签名**：`ret-int-family 957 + param-int-family 496` 条被排除。若强行回填，243 条与既有二进制族冲突（int vs class），且 `P:FN:k` 收窄会产生大量错误唯一解。
- **`return ... this` 的返回类型**：403 条排除。emitted 类型是 cast 伪影（`String::CopyChecked` → `char*`，真返回是 `String*`），且求解器把这些函数的 `T:` 与 `RET:` 并进同一簇 → 类掩码 × char* 掩码 = 空（实测正是这 6 个簇死亡的来源）。
- **unique→wide 的 70 个簇**：不是 BM 掩码放宽，而是 C10 不动点中和集合改变；不要试图靠"再加证据"修。
- **账本未回写的 135 个 OK 地址**：part 工件已非 MATCH，不能用旧 cpp 回填（G2 挡）。

### 已知局限

- 成员通道受 **pilot hpp 覆盖率**限制：1,804 个 cpp 里有 558 个函数出现 `this->` 访问，共 **997 个 (函数, 成员名) 访问对**；其中 **903** 个能从 unit 自有 hpp 解析出"类型 + 偏移"（匿名 union 的多证据视图与 `[1]` element view 已并入解析），其余 94 个按 55 个 vfptr / 39 个类型不在宽度词表（结构体/更长数组等）剔除。
- 975 个 MATCH 函数是**自由函数**（无类归属），无 owner 证据；302 个 class-scoped 记录的类名不在求解器宇宙（模板折叠名 `_VectorClass_PAV...` 等），按 G3 丢弃。
- 22 个自由函数的 `_addr_XX` 伪类不会进入证据（`_` 前缀 + 不在 class_db）。

---

## 6. 接线（改动）

`tools/csp_export/minclass_solver.py`（+20/−1 行，零行为改动于既有族）：

1. `FAMILIES` 末尾追加 `"BM"`；
2. `FAMILY_DESC["BM"]` 记录语义/门控/台账位置；
3. S2 之后新增 loader 块：`census["BM"] = _load_type_family("anchors/byte_match_types.json", "BM")`（strict，不经 `--allow-heuristics`）。

`anchors/byte_match_types.json` 结构：`{meta:{semantics, gate, conflict_excluded_ledger, repair_log}, evidence:[{ent, types, via, tier, proof, fn, size, ...}]}`。

## 7. 复现

```bash
# 1) 提取（依赖 .omo/decomp_batch/** 的 part 工件与 hpp；.omo 未入库）
python .omo/agents/bm/s1_scan.py      # 账本/工件盘点
python .omo/agents/bm/s23_proven.py   # proven 宇宙镜像（求解器同口径）
python .omo/agents/bm/s7_build.py     # 生成 anchors/byte_match_types.json
python .omo/agents/bm/s28_intptr.py   # 去掉 vocab 不可达的 int*
# 2) 冲突修复轮（需要 baseline 冲突台账 .omo/solve_cache/strict/8e03f027.../）
MINCLASS_NO_CACHE=1 python .omo/agents/bm/s27_repair.py
# 3) 覆盖率
python tools/csp_export/minclass_solver.py --use-rs --dump-domains
# 4) 消融（可选）
MINCLASS_NO_CACHE=1 python .omo/agents/bm/s18_ablate.py
```

## 8. 文件清单

| 文件 | 说明 |
|---|---|
| `anchors/byte_match_types.json` | 新增，1,170 evidence（owner 503 / member 543 / sig 124）+ 43 条冲突台账 + 10 条修复日志 |
| `tools/csp_export/minclass_solver.py` | FAMILIES/FAMILY_DESC/loader 接线 |
| `docs/report_bm.md` | 本报告 |
| `.omo/agents/bm/*` | 生成器与全部实验日志/消融数据（gitignored） |
