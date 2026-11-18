# CSP 轨道 BM5 收割轮 —— 新 clean-OK（5,573→6,103）严格回填 + 求解器实测

日期：2026-11-18　｜　轨道：CSP（min-class solver）　｜　状态：**已实施 + 求解器双跑实测 + 确定性 9/9**

> 本轮独立于 DECOMP 轨道：未触碰 `tools/decomp_sys/*`、`src/*`、`.omo/codegen_match/*`、
> `injectFunctionTest/*`；未跑 `batch_run.py`；求解器/族语义/门零改动；`anchors/minclass_*`
> 全部由求解器自身再生（未手改）。

---

## 0. 结论摘要

| 项 | before | after | Δ |
|---|---|---|---|
| BM 证据行（`anchors/byte_match_types.json`） | 2,092 | **2,680** | **+588**（owner 377 / member 117 / sig 94） |
| 覆盖率 gate-off（`--use-rs` 无仲裁） | **46,999 / 93,818 = 50.0959%** | **47,264 / 93,804 = 50.3859%** | unique **+265**、total −14、pct **+0.2900pp** |
| 覆盖率 gate-on（`--arbitrate-mr-over-ig`） | **47,590 / 94,422 = 50.4014%** | **47,855 / 94,408 = 50.6896%** | unique **+265**、total −14、pct **+0.2882pp** |
| K_min | 897 | 906 | +9 |
| conflicts（`minclass_result.json`） | 0 | **0** | 0 |
| 冲突消解台账条目 | 4,381 | **4,381** | 0（原始 apply 曾 4,387，repair 剔除 6 行后归零） |
| 确定性 | — | **9/9 产物 sha256 全等** | assignments sha256 `2e60b9b1…35eceaf` |

- 本轮池 = 新 clean-OK **559** 地址（不是 6,547：OK 池中 443 条 `clean!=true` + 1 条 `this_as_id`
  被 G1 门排除，实际 clean 池 **6,103**）。559 地址全部溯源复核（G2 559/559），产出
  594 条候选行（1.06 行/地址，远高于 BM4 的 0.067）。
- **repair 6 行**：首次 apply 后求解器冲突消解台账新增 6 条 BM vs C1/C2/C7/SS 空交簇；
  按任务书「冲突出现即剔除肇事行」纪律，按函数粒度剔除 6 行（4 个函数），台账回到 4,381、
  conflicts 保持 0，unique 零损失（47,855 不变）。
- 诚实代价：**79 个既有 unique 簇失去唯一性**（审计：**0/79** 的最终簇含已应用 BM5 实体 →
  全局 cover/C10 再平衡的间接副作用，非逐行可归因），6 个 unique 簇答案改变（2 个由
  bm-owner、4 个 `bool→char` 由 bm-sig/IG 交域）。净增 +265（= 新 unique 344 − 吸收 79）。

---

## 1. 增量范围与漏斗

### 1.1 冻结快照（并发隔离）

```
python -c "raw=open('.omo/codegen_match/status.json','rb').read(); open('.omo/agents/csp/status_snapshot_bm5.json','wb').write(raw)"
  → 5,922,884 bytes, sha256 b31623ebc7f395a898d810c9bd95256efaf2cd534f868c0947938a675b089578
  status 构成：OK 6,547 / NG 9,111 / CF 3,038 / PENDING 95 / EXTERNAL_THUNK 303
```

scope 定义（与 s44_bm4.py 逐字同构）：

```
G1 clean 门 = status==OK + clean==true + rule_violations==0 + !this_as_id
  bm5 快照 clean 池        6,103   （OK 6,547 − clean!=true 443 − this_as_id 1）
  bm4 快照 clean 池        5,573
  grew since bm4             559
  left clean pool             29   （26 条 rounds1-4 已收割；3 条从账本整条消失：0x45A990/0x69E9F0/0x7C8F46）
  overlap with collected       0
  NEW scope                  559
  prior zero-yield 未重扫   4,110   （bm4 时代 clean 但历史上 0 行的地址，本轮不重扫，如实记账）
```

### 1.2 G2 溯源复核

扫描根 = `.omo/**/part_report.json`（BM4 轮修复后的口径），门语义不变
（`verdict==MATCH && clean && rule_violations==0`，取 mtime 最新 part）：

```
G2: 559 / 559 有可复核的 pipeline 书面工件
picked cpp defs: 559
```

### 1.3 种群特征（与 BM4 的对照）

| 指标 | BM4 轮（506 addr） | **BM5 轮（559 addr）** |
|---|---|---|
| 类作用域占比 | 5.5%（28/506） | **83.7%（468/559）** |
| size min/median/max | 39/39/49 B | **1/6/103 B** |
| 主种群 | `__int64 __cdecl` 自由叶子 | **微型类成员（getter/setter 型）+ r1/ab_hpp 重生成波** |
| 每地址产出 | 0.067 行 | **1.06 行**（15.9×） |
| 账本 note 族 | `decomp_batch r2` 全量 | **note 全空（559/559）**——该波写入不带 note；溯源以 part_report 为准 |

来源 part 目录集中在 `.omo/agents/r1/ab_hpp/full_setB/part_*`（逐行 `part` 字段可查）。

### 1.4 漏斗

| 阶段 | 数量 |
|---|---|
| picked cpp defs | 559 |
| candidate recs | **700**（owner 439 / member 158 / param 68 / ret 35） |
| G6 dedupe（既有族已覆盖，逐条台账见 candidates） | −45（owner 23 / member 22） |
| G7 conflict（与既有族域不相交，逐条台账见 candidates） | −61（owner 37 / member 19 / sig 5） |
| internal conflict | −0 |
| **final（纯净提取集）** | **594** |
| repair（冲突台账新增条目肇事行） | −6 |
| **applied（写入 evidence）** | **588** |
| 求解器 loader 实际收录 | **584**（4 行 token 不在求解器候选索引，与 30 条历史 skip 同款保守过滤） |
| 应用行覆盖的地址数 | 447 / 559（112 个地址产出 0 行：owner-free 91 + 其余单通道丢弃） |

### 1.5 前置丢弃全表（pre-gate drops）

```
owner-free 91            ← 自由函数（无类作用域），与 BM4 池相反
member-vfptr 102         ← 偏移 0 / vfptr* 成员
ret-int-family 260       ← 裸 int 族（4B 标量与指针 codegen 不可区分，既定剔除）
param-int-family 218
ret-returns-this 182     ← 返回 this 的 cast 伪影
sig-small 69             ← size<5B
owner-vocab 26 / param-vocab 24 / member-type-external 10
member-array 2 / member-nodecl 1 / owner-phantom 2 / owner-name-prefix 1 / ret-vocab 1
```

---

## 2. 门与冲突裁定

### 2.1 门（G1–G7，与 s7/s35/s41/s44 逐字同构，零放宽）

G1 冻结快照 clean 门 → G2 part_report 行复核（MATCH+clean+0 违规，全树 `.omo/**`）→
G3 vocab（2,221 token：class_db ∪ universe_binary ∪ type_universe）→ G3b proven universe
（1,463 类，bm-owner 幻影剔除）→ G4 size≥5 → G5 param 实际使用 + 裸 int 族全剔 →
G6 dedupe（对全部 59 个含 `ent` 的 anchor 族 + rounds1-4 BM 行）→ G7 conflict（域不相交剔除）→
追加不变量（新 ent 与 2,092 条旧 ent 交集 = 0，硬校验）。

### 2.2 G7 冲突台账（61 条，全部正确剔除）

| 模式 | 条数 | 例 |
|---|---|---|
| bm-owner 友好名 vs 既有 mangled 模板名（语义同族、拼写不相交） | 37 | `TechnoTypeVector` vs `?$vectorclass@pbvtechnotypeclass@@`；`ObjectVector` vs `?$vectorclass@pavobjectclass@@`；`LoadScreen` vs `?$vectorclass@paubuttonfadeeffect@@` |
| bm-member int 族 vs bool/void*/数组真值 | 19 | `int` vs `bool`（6）、vs `void*`（3）、vs `int[N]`（3） |
| bm-sig 返值宽/符号冲突 | 5 | `char` vs `int`（2）、`bool` vs `int`（1） |

逐条台账（ent / bm_types / existing_types / via / fn）= `.omo/agents/csp/bm5_candidates.json`
的 `conflict_dropped` 字段。**未做任何「看起来同义就放行」的手工合并**——mangled/友好名的
等价判定属规则级问题，不在本轮处理。

### 2.3 repair：apply 后新增冲突消解条目 → 剔除 6 行

首次 apply（594 行）后求解器 `minclass_conflict_resolution.json` 4,381 → **4,387**
（+6 条空交簇，全部 BM 参与）：

| cluster | BM 行 | BM 域 | 冲突族 |
|---|---|---|---|
| `R:474B20:ecx` | `T:474B20` | HouseClass | C2 |
| `P:474B20:0` | `P:474B20:0` | unsigned char* | C7 |
| `P:474B20:1` | `P:474B20:1` | char* | C7 |
| `R:4A2350:ecx` | `T:4A2350` | TabClass | C1/C2/SS |
| `P:4739F0:0` | `P:4739F0:0` | char* | C7 |
| `P:473A30:0` | `P:473A30:0` | char** | C7 |

按任务书纪律「冲突出现 → 不应用肇事行、记录并剔除」，按**函数粒度**剔除 6 行
（BM3 repair 惯例；4 个函数 0x474B20 / 0x4A2350 / 0x4739F0 / 0x473A30）：

```
repair 后：evidence 594→588 行；冲突消解台账 4,381（= before）；
          unresolved conflicts 0；unique 不变（47,855），total +12（94,396→94,408，pct −0.0064pp）。
```

repair 台账 = `meta.round5.repair_log` + candidates 的 `repair` 块。

---

## 3. 应用行与 provenance（抽样）

每行带 `src:"bm5"`、`unit`、`part`（part_report 路径）、`proof`（渠道强度分级）。
实测抽样（签名取自源 unit 的 fn 块，逐字对照）：

```
T:401170  ObjectClass          ← int ObjectClass::ClearFlags2()     (bm-owner, cls_src=backfill)
M:401170:this:0x50 int         ← member customSound_controller, decl_ty=int (bm-member, width-pinned)
P:407080:0 unsigned int*       ← int __fastcall j_Mixer_RequestBuffer(unsigned int* p0, int p1)
                                                                     (bm-sig, codegen-consistent)
```

渠道强度（沿用 BM3 分级，未改）：
- `bm-member` = width-pinned（强，普通 mov 钉宽度不钉符号）
- `bm-owner` = ledger-attribution（中，类名不参与 codegen，ledger 归属）
- `bm-sig` = codegen-consistent（中，裸 int 族全剔 + returns-this 剔除）

---

## 4. 求解器实测（before / after）

### 4.1 命令（与既往驱动一致，`MINCLASS_NO_CACHE=1` 强制全量）

```bash
# gate-off
python tools/csp_export/minclass_solver.py --use-rs --dump-domains
# gate-on
python tools/csp_export/minclass_solver.py --use-rs --dump-domains --arbitrate-mr-over-ig
# 环境：MINCLASS_NO_CACHE=1（[cache] disabled 出现在每份日志）
```

驱动 = `.omo/agents/csp/run_solver.py <label> [--arb]`（每次运行快照 9 个产物 + 日志 + summary.json
到 `.omo/agents/csp/<label>/`）。

### 4.2 运行表

| run | unique | constrained | pct | K_min | conflicts |
|---|---|---|---|---|---|
| BEFORE gate-off | 46,999 | 93,818 | 50.0959% | 897 | 0 |
| BEFORE gate-on | 47,590 | 94,422 | 50.4014% | 897 | 0 |
| post-apply gate-off（raw 594） | 47,264 | 93,792 | 50.3924% | 906 | 0 |
| post-apply gate-on r1（raw 594） | 47,855 | 94,396 | 50.6960% | 906 | 0 |
| **FINAL gate-off（588）** | **47,264** | **93,804** | **50.3859%** | 906 | 0 |
| **FINAL gate-on r1（588）** | **47,855** | **94,408** | **50.6896%** | 906 | 0 |
| **FINAL gate-on r2（588）** | **47,855** | **94,408** | **50.6896%** | 906 | 0 |

- before 两个数字与任务书给定基线**逐位复现**（46,999/93,818 与 47,590/94,422），口径一致。
- gate-off / gate-on 之差 = `--arbitrate-mr-over-ig`（+591 unique / +604 clusters），非 proven-universe。

### 4.3 判决与附加指标

```
FINAL gate-on: [conflicts] unresolved=0 resolved=4381
               [conflict-resolve] round=1 empty_clusters=4046 drops=3107 arbitrated=939
                                  round=2 empty_clusters=335 drops=335
               [arbitrate] assignments materialized +604 recovered (of 939 arbitrated)
               [BM] 收录 2,646 / 2,680 行（34 行 loader 候选索引过滤 = 30 历史 + 4 新增）
               c1_gaps=0 exact_conflicts=0 unassigned=0
```

---

## 5. 确定性

同一命令（gate-on，`MINCLASS_NO_CACHE=1`）连续两次全量运行，9 个产物逐字节比对：

```
minclass_result.json / minclass_assignments.json / minclass_clusters.json /
minclass_domains.json / minclass_domain_contents.json / minclass_conflicts.json /
minclass_conflict_resolution.json / derived_layouts.json / c10_contradicted_entities.json
→ 9/9 IDENTICAL
assignments sha256 = 2e60b9b135f50a8c9200b731aa91d06f471670109565866bb6d4cd87935eceaf
（r1 = r2；运行耗时 81.9s / 95.5s，产物不含时间戳）
```

---

## 6. 变更审计（churn，gate-on before → FINAL）

| 项 | 数量 | 归因 |
|---|---|---|
| 新 unique | **344** | 新证据直接收窄 |
| 失去 unique（absorbed） | **79** | **0/79** 的最终簇含已应用 BM5 实体 → 全局 cover/C10 再平衡的间接副作用（K_min 897→906、chosen 类 ±、`roots_neutralized` 33,696→33,879），非逐行可归因；不逐行剔除（剔除=按指标挑数据） |
| unique 但答案改变 | **6** | 2 个可归因 bm-owner：`Property→Field`（T:434110，ledger cls_src=signals_cls）、`VocClassHeader→ObjectClass`（T:7ACBD0，backfill）；4 个 `bool→char`（`M/RET:7BD2B0`、2 个 EAX；RET 有 bm-sig `char` 行，其余经簇合并/交域） |

- `bool→char` 说明：既有 bm-member 的 1B 家族 = {char, unsigned char}（不含 bool，BM 第一轮
  定下的语义），bm-sig 的 `char` 与 IG（IG-fix 后 u8 含 bool）交域后落到 char。1B 的
  bool/char 在 codegen 上宽度不可分——这是**既有权衡**，本轮不新开规则修改。
- 净增验证：344 − 79 = **+265** ✓（与求解器 unique 差值一致）。

---

## 7. 工件与复现

| 文件 | 内容 |
|---|---|
| `anchors/byte_match_types.json` | **2,092 → 2,680** 行；前 2,092 行逐字节不变（`rr(rows)` 子串断言 + `git show HEAD` 前缀 deep-equal 双重验证）；`meta.round5`（scope/population/gate/冲突台账/repair_log） |
| `.omo/agents/csp/bm5_candidates.json` | 594 条 final 候选（含 unit/part/provenance）+ `dedupe_dropped` 45 + `conflict_dropped` 61 + `record_drops` 30 + `repair` 6 |
| `.omo/agents/csp/report_next.md` | 本报告 |
| `.omo/agents/csp/s_bm5_extract.py` | G1–G7 提取器（s44_bm4.py 逐字同构 + candidates 输出） |
| `.omo/agents/csp/s_bm5_apply.py` | append-only 写入 + 前缀字节保持断言 + meta.round5 |
| `.omo/agents/csp/s_bm5_repair.py` | 6 行 repair + repair_log |
| `.omo/agents/csp/run_solver.py` | 求解器驱动（快照 9 产物 + sha256 + summary） |
| `.omo/agents/csp/s_compare.py` / `s_churn_audit.py` / `s_final.py` | before/after 对账、churn 归因、终数汇总 |
| `.omo/agents/csp/{before,after,after_repair}_*/` | 7 次运行的 9 产物快照 + run.log + summary.json（本地，含 235MB assignments，不入库） |

复现序：

```bash
python .omo/agents/csp/s_bm5_extract.py
python .omo/agents/csp/s_bm5_apply.py
python .omo/agents/csp/run_solver.py after_gateon_r1 --arb
python .omo/agents/csp/s_bm5_repair.py
python .omo/agents/csp/run_solver.py after_repair_gateon_r1 --arb
python .omo/agents/csp/run_solver.py after_repair_gateon_r2 --arb
python .omo/agents/csp/s_final.py
```

---

## 8. 遗留与下一步

1. **loader 过滤 4 行**（588→584）：token 不在求解器候选索引（class_db 有、universe 无）。
   与历史 30 行同款保守跳过，不引入不健全行；若后续要求 100% 收录，需扩充
   `type_universe`（规则级，单独验证）。
2. **79 个 absorbed unique**：全局 cover/C10 再平衡的副作用。若要把「新增证据不损失既有
   unique」做成硬约束，属求解器调度层（cover 稳定性）议题，不是本轮数据门可解。
3. **friendly/mangled 同名对**（37 条 G7）：`TechnoTypeVector` vs `?$vectorclass@…`。
   若确认等价，需要一条规则级别名归一（并全量重跑），不能手工放行。
4. 未重扫 4,110 个历史零产地址 + 3 个已从账本消失的地址；账本继续增长时可作下一轮
   scope 的对照基线。
