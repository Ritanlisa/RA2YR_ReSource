# BM 第二轮 —— W-A 收割 1,252 个新 MATCH 的增量回填

日期：2026-11-12 晚（接 W-A 收割 `9437b23be` / BM 首轮 `79e34af1b`）
范围：`anchors/byte_match_types.json`（追加，不覆盖）、求解器 BM 族接线不变（`tools/csp_export/minclass_solver.py` 仅更新计数注释）
禁止项遵守：未触碰 `src/`；未重复首轮条目（追加前硬校验：新行 ent 与首轮 1,170 ent 交集 = 0）。

---

## 0. 结论摘要

| 项 | before（BM=1,170） | after（BM=1,219） | Δ |
|---|---|---|---|
| 覆盖率（unique / constrained） | **43,088 / 90,463 = 47.6%** | **43,201 / 90,501 = 47.7%** | unique **+113**、constrained +38 |
| forced / narrow / wide | 43,088 / 27,297 / 20,078 | 43,201 / 27,310 / 19,990 | **wide −88** |
| K_min | 873 | 875 | +2 |
| empty_clusters | 7,206 | 7,206 | **0（零簇损失）** |
| conflicts / c1_gaps / unassigned | 0 / 0 / 0 | 0 / 0 / 0 | 0 |
| 新增 BM strict 证据 | — | **+49**（owner 35 / member 8 / sig 6） | 1 dedupe + 3 conflict 剔除 |

- **冲突检查**：`minclass_conflict_resolution.json` 的 7,206 个 dropped root **集合不变**（newly dropped=0、recovered=0、BM-blamed=0）→ 无需 repair 轮。
- **零回归**：88 个既有簇域收窄、0 个变宽、0 个丢失；**历史已判定（domain=1）簇的类赋值 0 改动**；77 个“类代表变化”全部是宽域（56–1,695）→ 唯一域的代表性变更（非回退）。
- **确定性**：同一输入连续两次全量 solve，7 个产物 sha256 完全一致（clusters/result/conflicts/domains/derived_layouts/c10/conflict_resolution）。
- **收益口径**：任务书预期 +700~900 条，实测 **+49**。这是 W-A 池的结构性上限，不是管线损失（见 §2.2）：1,252 个新 OK 中 **1,217 个是自由函数**（无类作用域）、median 19B、签名几乎全是 `void`/裸 `int` 族、无 `this->` 成员访问。首轮 W-A 报告预登记的提示正是「owner ≤35 / member ≤15 / sig ≈0」，实测 35 / 8 / 6 与之一致。

---

## 1. 增量范围与管线

### 1.1 新 OK 地址集的确定

- W-A 收割工件：`.omo/decomp_batch/wa_run/p00..p78`，79 个 `part_report.json`，1,564 行 = **MATCH 1,252 + MISMATCH 312**；MATCH 全部 `clean=true / rule_violations=0 / this_as_id=false`。
- 账本快照（防并发 torn read：CW6 会话正在刷新 `.omo/codegen_match/status.json`，本任务读冻结快照 `.omo/agents/bm/status_snapshot_bm2.json`）：8,516 判定，clean 门池 **3,191 = 首轮 1,939 + W-A 1,252**。
- 增量交集：`wa_match ∩ clean_pool = 1,252/1,252`；`∩ 首轮已收录 fn（890 个地址）= 0` → **NEW = 1,252**。
- 并发隔离核验：CW6 目标 947 条与 W-A 地址集交集 = 0，互不污染。

### 1.2 门（与首轮 s7_build.py 完全同构）

| 门 | 内容 | 二轮实测 |
|---|---|---|
| G1 clean | 账本 `status=OK + clean + rule_violations=0 + this_as_id=false` | 池 1,939→3,191 |
| G2 provenance | 源 `part_report` 行自身复核 MATCH/clean/0 违规 | 1,252/1,252 |
| G3 vocab | 类型 token 必须在 solver universe（class_db + binary classes + type_universe, 2,221） | 0 个 owner-vocab 丢 |
| G3b proven | bm-owner 类必须在 proven universe（1,463） | 0 个 phantom 丢 |
| G4 sig size | bm-sig 仅 `orig_size≥5` | 7 个 sig-small 丢 |
| G5 param use | 参数必须在函数体被引用 | 9 个 param-int-family + 其余签名门见下 |
| G6/G7 dedupe/conflict | 对全部 60 个 anchor 族（含首轮 BM 行）做覆盖/冲突检查 | 1 dedupe / 3 conflict |
| 追加不变量 | 新 ent 与首轮 1,170 ent 交集必须为空（否则 exit 2） | 0 重复 |

首轮 1,170 行 **前缀逐字段相等**（`old_evidence == new_evidence[:1170]` 为 True），仅追加 49 行（`src="bm2"`）。

### 1.3 产物

- `anchors/byte_match_types.json`：1,170 → **1,219** evidence（327,463 B）；`meta.round2` 记录 scope/gate/conflict ledger；首轮 meta 字段全部保留。
- 提取器：`.omo/agents/bm/s35_bm2.py`（s7_build.py 的增量变体；门逻辑逐字复制）。
- 复现：`python .omo/agents/bm/s35_bm2.py` → `python tools/csp_export/minclass_solver.py --use-rs --dump-domains`。

---

## 2. 提取结果

### 2.1 通道

| 通道 | 候选 | 最终 | 说明 |
|---|---|---|---|
| bm-owner `T:FN` | 35 | **35** | 仅 35/1,252 个函数是类作用域定义（cls_src: backfill 32 / signals_cls 1 / proto_this 2；无 name_prefix） |
| bm-member `M:FN:this:0xOFF` | 9 | **8** | 3 member-array、3 vfptr 丢；1 条被既有族覆盖（dedupe） |
| bm-sig `RET/P` | 9 | **6** | 3 条 `bool` 与既有 `int/unsigned int` 族不相交（G7 冲突剔除）；无 param 行（9 个参数全是裸 int 族） |
| 合计 | 53 | **49** | |

前置丢因：`owner-free 1,217`（绝对主因）、`sig-small 7`、`ret-int-family 6`、`ret-returns-this 2`、`param-int-family 9`、`member-array 3`、`member-vfptr 3`。

G7 冲突台账（3 条，全部同型——首轮已有同型先例）：

```
RET:4865B0  bm=bool  existing=int/unsigned int
RET:486650  bm=bool  existing=int/unsigned int
RET:486670  bm=bool  existing=int/unsigned int
```

样例新证据：

```
0x0041BFF0  bm-owner  TechnoClass      (5B, cls_src=backfill)
0x0041C070  bm-owner  FootClass         (7B, cls_src=backfill)
0x0041BFF0  bm-sig    unsigned char     (5B)
0x00486320  bm-member this+0x.. → char/unsigned char   (IG 宽度族)
```

### 2.2 为什么只有 49 条（结构性上限，非管线问题）

W-A 收割的种群是**折叠常量叶子**，其声明类型在 codegen 上不可见：

| 统计 | 值 |
|---|---|
| size min / median / max | 4 / **19** / 31 B |
| 类作用域函数 | **35 / 1,252**（1,217 个自由函数 → bm-owner/member 不可用） |
| name_placeholder | 1,220 / 1,252 |
| 参数 | 有参者全部落到裸 `int` 族（4B 标量与任意 4B 指针在 codegen 不可区分，首轮已证伪该通道） |
| 返回 | 大多 `void`；非 void 的非 int 族仅 9 条，其中 3 条与既有族冲突 |

首轮 1,170 条来自 1,804 个“有实体实现”的 MATCH 工件（含大量类方法/成员访问）；W-A 增量池与之不同质，故不能用首轮的 per-fact 产出外推。实际 per-fact 边际收益反而更高：**49 条 → +113 unique（2.3 unique/fact，首轮 523/1,170 = 0.45）**——因为 bm-owner 的 `T:` 事实落在 C10 等价类枢纽上，AND 掩码经 fixpoint 传播可一次锁死大量 EAX/GS 兄弟实体（最大单例 1,695→1）。

---

## 3. 覆盖率前后（同命令、同 anchors 状态的实测）

命令：`python tools/csp_export/minclass_solver.py --use-rs --dump-domains`

```text
before (BM=1,170):
[BM] byte-match closing-witness types: 1170
K_min=873  K_upper(=K+conflicts)=873  lower_bound=873  constrained=90463 free=119488 conflicts=0 c1_gaps=0 exact_conflicts=0 unassigned=0
[coverage] unique=43088 total=90463 pct=47.6%   forced=43088 narrow=27297 wide=20078
[conflict-resolve] round=1 empty_clusters=7206 drops=7206

after (BM=1,219):
[BM] byte-match closing-witness types: 1219
K_min=875  K_upper(=K+conflicts)=875  lower_bound=875  constrained=90501 free=119467 conflicts=0 c1_gaps=0 exact_conflicts=0 unassigned=0
[coverage] unique=43201 total=90501 pct=47.7%   forced=43201 narrow=27310 wide=19990
[conflict-resolve] round=1 empty_clusters=7206 drops=7206
```

簇级对账（baseline cache vs 当前 `anchors/minclass_clusters.json`）：

| 指标 | 值 |
|---|---|
| 既有簇 | 90,463（全部保留，gone=0） |
| 新簇 | 38（35 unique + 3 narrow） |
| 既有簇新判定 | **+78**（43,088→43,166）；其中 77 个是宽域→唯一域，1 个是唯一域但代表类未变 |
| 域收窄 | **88**；变宽 0；不变 90,375 |
| 历史已判定簇类改动 | **0** |
| wide（>8） | 20,078 → **19,990（−88）** |

最大收窄（domain → 1）：

```
EAX:628B00:628B3C 994→1   EAX:628B00:628B76 994→1
EAX:628BB0:628BFA 994→1   EAX:628BB0:628C2C 994→1
EAX:628ED0:628F0C 994→1   EAX:628ED0:628F4D 994→1
EAX:4F4C20:4F4C25 1384→1  GS:2:1:0x6288F0 1384→1
GS:2:1:0x628BB0 1384→1    P:6288F0:1 1384→1
P:628BB0:1 1384→1         T:4BBC90 1695→1
```

---

## 4. 冲突检查 / 零回归 / 确定性

1. **冲突台账集合不变**：`minclass_conflict_resolution.json` 7,206 roots = baseline 7,206 roots（交集 7,206；newly dropped **0**；recovered **0**；其中 BM 被归因的 **0**）→ repair 轮不触发，`meta.round2.gate.conflict_repair_dropped=0`。
2. **历史判定不动**：对 baseline 中 domain=1 的簇，after 的类赋值 0 改动（宽域代表类的 77 处变化不是判定，是同一簇域收敛后的自然代表）。
3. **确定性双跑**：两次全量 solve（run1/run2）产物逐字节一致（sha256 前 16 位）：

```
minclass_clusters.json           7d6c717ff80bd4db == 7d6c717ff80bd4db
minclass_result.json             be2e667e6fb19ded == be2e667e6fb19ded
minclass_conflicts.json          e658b12b437de3c0 == e658b12b437de3c0
minclass_domains.json            7ad693878851183b == 7ad693878851183b
derived_layouts.json             853cb7bfd6cab714 == 853cb7bfd6cab714
c10_contradicted_entities.json   b10d870a5ce82e6c == b10d870a5ce82e6c
minclass_conflict_resolution.json 7fc82fd0b367b60f == 7fc82fd0b367b60f
```

4. **口径**：任务书的 before 基线 `43,595 / 50.4%` 与 `43,057/85,710=50.2%` 同属**旧快照口径**（首轮报告 §3 已记录该差异：solver 与 anchors 自该快照后已演进）。本报告与首轮一致，一律使用「今天、同一条命令、同一份 anchors 的 before/after」：**43,088/90,463=47.6% → 43,201/90,501=47.7%**。HEAD 上 before 与 `docs/report_bm.md` §3、AGENTS.md 记载完全一致，可复现。

---

## 5. 产物清单

| 文件 | 变更 |
|---|---|
| `anchors/byte_match_types.json` | +49 evidence（1,170 → 1,219），追加式；`meta.round2` 台账 |
| `anchors/minclass_clusters.json` / `minclass_result.json` / `minclass_domains.json` / `minclass_domain_contents.json` / `minclass_conflict_resolution.json` / `minclass_conflicts.json` / `derived_layouts.json` / `c10_contradicted_entities.json` | 求解器重跑产物（BM=1,219） |
| `tools/csp_export/minclass_solver.py` | 仅更新 BM 计数注释（1,170→1,219、1,219 拆分；无行为变更） |
| `.omo/agents/bm/s35_bm2.py` | 新增增量提取器（.omo 默认 gitignore，本提交 force-add） |
| `.omo/agents/speed/report_bm2.md` | 本报告（force-add） |
| `AGENTS.md` | BM 条目追加第二轮实测结果 |

日志：`.omo/agents/bm/bm2_base.log`（before）、`bm2_run1.log` / `bm2_run2.log`（after 双跑）、`bm2_extract.log`（提取）。

## 6. 下一步（证据面已接近本池上限）

- W-A 池已榨干：49/53 候选全部收录（其余 4 条为 dedupe/conflict 的正确剔除），再跑同池不会新增。
- 若要继续扩大 BM 证据面，必须是**新的字节 MATCH 种群**：CW5/CW6 编译墙转化（call-bearing / 类作用域函数）才是 owner/member 通道的有效供给；Tier 上限判断：owner 通道每次约 **2.8%** 的类作用域占比（35/1,252），member 需 `this->` 访问，sig 需非 int 族返回/参数。
