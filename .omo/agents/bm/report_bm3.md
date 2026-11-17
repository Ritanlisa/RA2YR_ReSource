# BM 第三轮 —— post-BM2 新 MATCH（OK 3,906→5,953）的增量回填

日期：2026-11-17（接 BM2 `report_bm2.md`）
范围：`anchors/byte_match_types.json`（追加，不覆盖；首轮 1,170 + BM2 49 + BM3 839 = 2,058）。
求解器零改动（BM loader 既有通道）；`tools/decomp_sys/`、`injectFunctionTest/` 未触碰。
并发隔离：全程只读冻结快照 `.omo/agents/bm/status_snapshot_bm3.json`（账本正被 Track A 并行刷新）。

---

## 0. 结论摘要

| 项 | before（BM=1,219） | after（BM=2,058） | Δ |
|---|---|---|---|
| 覆盖率（unique / constrained） | **43,201 / 90,501 = 47.7%** | **44,114 / 91,233 = 48.4%** | unique **+913**、constrained +732 |
| forced / narrow / wide | 43,201 / 27,310 / 19,990 | 44,114 / 27,421 / 19,698 | wide −292 |
| K_min | 875 | 894 | +19 |
| empty_clusters | 7,206 | 7,235 | +29（22 基线宽簇 + 7 新簇；recovered 0） |
| conflicts / c1_gaps / unassigned | 0 / 0 / 0 | 0 / 0 / 0 | 0 |
| 新增 BM strict 证据 | — | **+839**（owner 349 / member 128 / sig 362；repair 后净数） | 135 dedupe + 75 conflict + 13 repair 剔除 |
| 确定性 | — | 双跑 8/8 产物 sha256 一致 | PASS |

- **未达 48.5% 目标的归因（+0.7pp vs +0.8pp，差 34 个 unique）**：852 条候选中 33 条被求解器
  候选索引过滤（类型 token 不在 2,234+539 候选名内，loader 保守跳过）、13 条 repair 剔除（见 §4）、
  75 条 G7 冲突剔除（见 §3）。新簇 987 中 unique 559 + 存活簇转化 367 = +926，减去 13 个基线
  unique 簇被吸收（§5）得净 +913。这是本轮池的诚实上限，未凑数。
- **与 BM2 教训对照**：BM2 轮 W-A 池 2.8% 类作用域占比 → 仅 +49 条；本轮池（cw8/csweep/r1harvest/
  ng_*/cf_r8* 等 C/D 层转化）类作用域占比 **40%（751/1,875）**，per-fact 边际收益 839→+913 unique。

---

## 1. 增量范围与管线

### 1.1 新 OK 地址集（全部从冻结快照计算）

```
python -c "clean = OK+clean+rule_violations==0+!this_as_id"
snapshot_bm3: clean pool 5,067 | snapshot_bm2: clean pool 3,191
grew since bm2: 1,876 | left pool: 0 | overlap collected: 0 | NEW scope: 1,876
```

G2（源 part_report 行复核 MATCH+clean+0 违规）：**1,875/1,876** 有可验证工件；
picked cpp defs 1,875。种群构成（按 part 目录）：cw8f1 610 / r1harvest 488 / csweep 362 /
ng_full 153 / cw8f2 83 / cf_r8* 92 / dsweep 18 / 其余零星。

交集预估（先跑，防 BM2 式稀疏陷阱）：**751/1,875 类作用域（40%）**、472 个函数含 `this->` 访问
（652 个成员名实例）、size min/median/max = 1/33/319B（W-A 轮为 19B 常数叶）——C/D 层
call-bearing 转化正是 BM2 §6 预测的 owner/member 有效供给。

### 1.2 门（与 s7_build.py / s35_bm2.py 逐字同构）

| 门 | 实测 |
|---|---|
| G1 clean（冻结快照） | 5,067 |
| G2 provenance 复核 | 1,875/1,876 |
| G3 vocab 2,221 / G3b proven 1,463 | owner-vocab 336 丢 / owner-phantom 4 丢 |
| G4 size≥5 | sig-small 24 丢 |
| G5 param used + 裸 int 族全剔 | param-int-family 1,916 丢 / param-vocab 35 / param-unused（并入 vocab 前统计） |
| G6 dedupe（对全部 60 anchor 族 + 前两轮 BM 行） | 135 丢 |
| G7 conflict | 75 丢（台账见 §3） |
| 追加不变量 | 新 ent 与前两轮 1,219 ent 交集 = 0（exit 2 硬校验）+ 前 1,219 行 deep-equal 断言 |

前置丢因全表：`owner-free 1,124`、`member-vfptr 302`、`member-type-external 99`、
`ret-returns-this 454`、`ret-int-family 387`、`member-array 1`、`owner-name-prefix 4`。

提取器：`.omo/agents/bm/s41_bm3.py`（s35_bm2.py 的增量变体；门逻辑逐字复制；
单位块地址键归一 8 位十六进制修复 part_report 与源内地址的无补零漂移）。
复现：`python .omo/agents/bm/s41_bm3.py` → `python .omo/agents/bm/s41_bm3_repair.py` →
`python tools/csp_export/minclass_solver.py --use-rs --dump-domains`。

---

## 2. 提取结果（repair 前 852 → repair 后 839）

| 通道 | 候选 | 最终 | 说明 |
|---|---|---|---|
| bm-owner `T:FN` | 407−(G6/G7 中剔) | **349** | cls_src: backfill 为主 + signals_cls + proto_this（name_prefix 4 丢） |
| bm-member `M:FN:this:0xOFF` | 250 | **128** | vfptr 302 / 类型外部 99 / 数组 1 丢；G6 135 / G7 5 剔 |
| bm-sig `RET/P` | 405 | **362** | 裸 int 族 2,303（param 1,916 + ret 387）丢；returns-this 454 丢 |
| 合计 | — | **839** | repair 13 条剔除后（§4） |

样例新证据：

```
T:544C80 CellClass / T:69E9F0 ObjectClass / T:49E4F0 CampaignClass   (bm-owner)
M:544C80:this:0x7C → int/unsigned int                                (bm-member, width-pinned)
RET:49E3B0 char / P:…                                                (bm-sig)
```

**求解器 loader 过滤 33 行**：`_load_type_family` 仅当行内至少一个类型 token 解析进候选索引
（`_name_ix2`，classes 2,234 + type vocab 539）才收录——2,058 行载入 2,028。与 SP/IT 族同款
保守跳过，不引入任何不健全行。首两轮 1,219 行恰好全可解析，本轮 33 行的类型拼写（多为
class_db 内但不在求解器候选并集内的类名）被跳过。

---

## 3. G7 冲突台账（75 条，全部裁定为正确剔除）

分布（via）：bm-sig 34 / bm-owner 36 / bm-member 5。模式归类：

| 模式 | 条数 | 裁定 |
|---|---|---|
| bm-sig `int*`/`void**`（生成器默认指针拼写）vs 既有更强二进制族（istream/bool/point2d） | 28 | 首轮 243/478 标量行被二进制族否证的同一现象；BM 行弃，既有族保留 |
| bm-owner 子类 vs 既有基类/ICF 折叠锚（`BlitPlainXlat/BlitTransXlat vs blitter`、`*TeamCommand vs commandclass`） | ~8 | AGENTS.md 记载的 ICF 折叠族（CommandClass 47 / Blitter 12）：既有基类锚是折叠安全选择，BM 的子类归属不可区分；弃 |
| bm-owner 专有模板实例 vs BM 泛型（`?$rc_ptr@v...` vs rc_ptr`、`?$vectorclass@h` vs intvector） | ~10 | 既有族更具体；弃 |
| bm-owner 命名变体/真分歧（`campaignscore vs campaignscoreclass`、`houseclass vs versionclass`、`technotypeclass vs infantrytypeclass` 等） | ~15 | 一律保守弃 BM 行、保留既有二进制族；其中 campaignscore 系与 §5 的 13 个基线 unique 簇吸收同源 |
| bm-member 宽度族 vs 既有钉死 | 5 | 弃 |

台账原文 = `meta.round3.conflict_excluded_ledger`（75 条逐条）。**无一条需要 repair**
（repair 意味改写既有族——MUST NOT 禁止且不必要）。

---

## 4. Repair 轮（13 条，可复现验证）

**现象**：6 个基线 forced `{unsigned char}` 成员簇被宽化为 `{Char, unsigned char}`
（forced→narrow），涉及 `M:4F3A90:this:0x8 / M:49E3B0:this:0x60 / M:544C80:this:0x2F4 /
M:43AE10:this:0x8 / M:49E4F0:this:0x60 / M:69E9F0:this:0xC`。

**机制**（实证链）：6 个宿主函数全部拿到 bm3 owner 钉（State/Movie/CampaignClass/
StaticButtonClass/CellClass/ObjectClass）→ receiver 型成员传播增强 → 成员簇合并带入
unsigned char 原语无法覆盖的观测跨度 → C1 覆盖约束松弛把类 `Char`（候选空间同时存在
`Char` 类与 `char` 原语，`_name_ix2.setdefault` 小写键首个命中）放回域。宽化模式全部严格
是基线域的超集（无矛盾、无信息丢失），但违反「既有簇域不得变宽」的硬验收。

**修复**：`.omo/agents/bm/s41_bm3_repair.py` 剔除这 6 个函数上的全部 13 条 bm3 行
（T:×6、P:×3、RET:×1、M:×3）；探针实测 6 簇全部回到 domain=1，且 unique 反而 +1
（44,113→44,114，因 6 个 forced 恢复）。账目记入 `meta.round3.repair_log`。

---

## 5. 零回归对账（before/after 同命令同 anchors，基线 = BM2 缓存态产物）

命令：`python tools/csp_export/minclass_solver.py --use-rs --dump-domains`
（before 用 `MINCLASS_NO_CACHE=1` 强制全量；基线产物存 `.omo/agents/bm/bm3_base_products/`）

```text
before (BM=1,219):
[BM] byte-match closing-witness types: 1219
K_min=875  K_upper=875  lower_bound=875  constrained=90501 free=119467 conflicts=0 c1_gaps=0 exact_conflicts=0 unassigned=0
[coverage] unique=43201 total=90501 pct=47.7%   forced=43201 narrow=27310 wide=19990
[conflict-resolve] round=1 empty_clusters=7206 drops=7206

after (BM=2,058; repair 后终态):
[BM] byte-match closing-witness types: 2028
K_min=894  K_upper=894  lower_bound=894  constrained=91233 free=118903 conflicts=0 c1_gaps=0 exact_conflicts=0 unassigned=0
[coverage] unique=44114 total=91233 pct=48.4%   forced=44114 narrow=27421 wide=19698
[conflict-resolve] round=1 empty_clusters=7235 drops=7235
```

| 对账项 | 值 | 判定 |
|---|---|---|
| 存活簇 90,249 | 收窄 482 / 不变 89,682 / 键级宽化 85 | 85 条全部为**键重命名伪影**（同键现指派另一等价类；same-root 真宽化 **0**——repair 后复核） |
| 键漂移背景 | 新簇 984 / 消失 252，`+984−252 = +732` = constrained 增量精确对账 | clusters.json 的 `dom_ents` 每簇截断 `[:6]` + 新证据改变 union-find 根选择 → 根键滚动；簇**内容**随合并迁移（非丢失） |
| conflict 台账 | 基线 7,206 dropped root **全部仍在 dropped**（recovered 0）；新增 dropped 29 = 基线宽簇 22（BuildingClass 20 / CreditsScreen 2，全部基线域 953-954 的未决簇，BM×C7 归因）+ 新簇 7 | 无任何既有判定被翻转 |
| 基线 forced（domain=1）簇 | 43,188/43,201 存活且赋值不变；**5 个代表类变更**（`R:40D300:ecx unsigned int→ObjectClass` 等） | 全部是 BM 字节匹配事实对弱原语默认值的**修正**（receiver 型实体拿到宿主函数的类钉）——升级非回退 |
| 基线 unique 簇消失 | 13（CampaignScoreClass/CampaignEndScoreClass EAX 流 10 + char[11] 1 + unsigned int 2） | 与 §3 campaignscore 冲突同源的重组织：并入大簇后超出 `[:6]` dump 截断，判定保留在合并宿主内 |
| 确定性 | 终态双跑 8 产物 sha256 一致 | PASS |

```
minclass_clusters.json           9a703312850f1d7b == 9a703312850f1d7b
minclass_result.json             b92bddb424f52fe6 == b92bddb424f52fe6
minclass_conflicts.json          8e3162a8f3d46f9d == 8e3162a8f3d46f9d
minclass_domains.json            a0d549be9888f216 == a0d549be9888f216
derived_layouts.json             853cb7bfd6cab714 == 853cb7bfd6cab714
c10_contradicted_entities.json   db9414399765b5c1 == db9414399765b5c1
minclass_conflict_resolution.json ca55c47a5d7bde5c == ca55c47a5d7bde5c
minclass_domain_contents.json    fa8e817e63903064 == fa8e817e63903064
```

---

## 6. 产物清单与日志

| 文件 | 变更 |
|---|---|
| `anchors/byte_match_types.json` | +839 evidence（1,219 → 2,058，追加式；`meta.round3` 台账 + repair_log；前 1,219 行 deep-equal 断言通过） |
| `anchors/minclass_*.json` ×8 / `derived_layouts.json` / `c10_contradicted_entities.json` | 求解器终态重跑产物（BM=2,058） |
| `.omo/agents/bm/s41_bm3.py` / `s41_bm3_repair.py` | 本轮提取器 + repair 脚本（force-add） |
| `.omo/agents/bm/report_bm3.md` | 本报告（force-add） |
| `.omo/agents/bm/status_snapshot_bm3.json` | 冻结账本快照（gitignore，防 torn read 凭证） |

日志：`bm3_base.log`（before 全量）、`bm3_extract.log`（提取）、`bm3_run1..3.log`（852 态三跑）、
`bm3_repair_probe.log`（修复探针）、`bm3_final_run1/2.log`（终态双跑）。

## 7. 下一步

- 本轮池已榨干：1,875 个新地址的门内收益全部收录（剔除均有台账）。
- 下一轮有效供给 = **新的字节 MATCH 种群**（账本 OK 5,953 之后的转化）；owner 通道供给看
  类作用域占比（本轮 40%），member 看 `this->` 访问率，sig 看非 int 族返回/参数。
- 33 条 loader 过滤行：若后续把 class_db 池外类并入求解器候选（universe 演进），这些行自动生效，无需重提。
- 遗留观察（非本故障）：`_name_ix2` 的 `Char`(类) vs `char`(原语) 小写键碰撞是潜伏口径问题
  ——本轮 6 例宽化即其表现形态之一；如需根治应在候选名空间区分两者（求解器侧改动，未动）。
