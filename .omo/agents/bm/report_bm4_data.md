# BM 第四轮（数据准备）—— post-BM3 新 MATCH（clean 池 5,067→5,573）的增量回填

日期：2026-11-18。执行 = `.omo/agents/bm/s44_bm4.py`（s41_bm3.py 的增量变体，门逻辑逐字同构）；
静态验证 = `.omo/agents/bm/s44_bm4_validate.py`（只读，**本轮禁跑求解器**，无覆盖率实测）。
求解器零改动；`tools/decomp_sys/**`、`tools/csp_export/**`、`injectFunctionTest/` 未触碰。
并发隔离：全程只读冻结快照 `.omo/agents/bm/status_snapshot_bm4.json`（账本正被 DECOMP 队友并行刷新）。

> 命名说明：`report_bm4.md` 已被 Track B 调查报告（B1 验证 + B2/B3 调查）占用，
> 本轮数据回填报告按任务书落在 `report_bm4_data.md`。

---

## 0. 结论摘要

| 项 | 值 |
|---|---|
| BM 证据行 | 2,058 → **2,092**（追加 **+34**；前 2,058 行 deep-equal 断言通过） |
| 通道分布 | bm-owner **18**（ledger-attribution）/ bm-member **5**（width-pinned）/ bm-sig **11**（codegen-consistent；RET 1 + P 10） |
| 增量范围 | 新 clean-OK 地址 **506**（G2 溯源复核 **506/506**） |
| 冲突 / 内部冲突 | **0 / 0**（G7 台账空——本轮无需 repair 轮） |
| 去重剔除 | 4（既有族已覆盖） |
| 覆盖率 | **未测**（任务书禁跑求解器；loader 将在下次求解器运行时自动收录 34 行） |

**这是本轮池的诚实上限，未凑数。** 种群结构性稀疏的直接证据见 §2。

---

## 1. 增量范围

```
G1（冻结快照 clean 门 = OK + clean + rule_violations==0 + !this_as_id）:
  bm4 snapshot clean pool 5,573 | bm3-time 5,067
  grew 506 | left pool 0 | overlap with rounds1-3 collected 0 | NEW scope 506
G2（part_report 行复核 MATCH+clean+0rv，取最新 part）: 506/506 ✓（见 §4 的扫描根修复）
picked cpp defs: 506
```

账本 note 族构成：**506/506 全部 `decomp_batch r2: MATCH`**（okctl 再核对波登记）。

### G2 扫描根修复（本轮唯一偏离 s41 之处，门语义未动）

s41 的 G2 只扫 `.omo/decomp_batch/**/part_report.json`——首轮跑出 **21/506** 溯源覆盖。
排查实证（addr 0x4010a0 全仓定位）：r2 波的 part 工件在 **`.omo/agents/r1/*okctl*/`**
（okctl / r9a_fin_h2 / r9a_full_ngcf* 族，26 处 MATCH+clean+0rv 记录），在旧扫描根之外。
`s44_bm4.py` 的 glob 扩为 **`.omo/**/part_report.json`** 后 506/506 全覆盖。
**G2 门本身逐字未变**（verdict==MATCH && clean && rule_violations==0，取 mtime 最新 part）；
这不是放宽，是溯源可见性修复。扩展扫描不影响既有轮（rounds 1-3 地址已从 scope 排除）。

---

## 2. 种群特征：r2/okctl 波 = `__int64` 自由函数叶子（证据密度显著低于 BM3）

任务书预期「+487 FP 族、median 33B、类作用域 40%、密度高于 BM3 常数叶」——**实测相反**，
该预期描述的是 BM3 轮的池（cw8/csweep/r1harvest 等 C/D 层转化），不是本轮的 r2 波：

| 指标 | BM3 轮（1,875 addr） | **BM4 轮（506 addr）** |
|---|---|---|
| 类作用域占比 | **40%**（751/1,875） | **5.5%**（28/506） |
| size min/median/max | 1 / 33 / 319B | 39 / 39 / 49B（窄带） |
| 主种群形态 | C/D 层 call-bearing | **`__int64 __cdecl sub_XXXXXX` 自由叶子**（返回类型普查压倒性 `__int64`） |
| owner-free 丢弃 | 1,124 | **484**（95.7%） |
| 最终行 / 每地址产出 | 839 / 0.447 行每地址 | **34 / 0.067 行每地址**（6.7× 稀疏） |

`__int64` 不在 vocab（type_universe）→ ret-vocab 丢弃 486；与裸 int 族同理
（4B/8B 标量 vs 任意指针不可区分，首轮 243/478 标量行被二进制族否证的同一判据），
**不需要也不应该**为它放宽门。pre-gate 丢弃全表：

```
owner-free 484 | owner-vocab 3
ret-vocab 486 | ret-int-family 4 | ret-returns-this 13
param-int-family 12 | param-vocab 1
member-type-external 3 | member-vfptr 2
```

---

## 3. 提取结果（34 行）

| 通道 | 候选 | 最终 | 说明 |
|---|---|---|---|
| bm-owner `T:FN` | 19 | **18** | 13 个类：BuildingClass 2 / MPBattleClass 2 / ObjectClass / SuperClass / TagClass / TagTypeClass / TeamClass / TechnoClass / TechnoTypeClass / TerrainClass / TiberiumClass / ToolTipManager / VectorClass_UDirtyAreaStruct（G6 去重剔 1） |
| bm-member `M:FN:this:0xOFF` | 8 | **5** | width-pinned；type-external 3 / vfptr 2 / G6 去重 3 剔 |
| bm-sig `RET/P` | 11 | **11** | RET 1 + P 10；裸 int 族 12 + returns-this 13 剔（BM3 判据原样） |
| 合计 | 38 | **34** | 冲突 0 → **无 repair 轮**（BM3 的 13 条 repair 教训本轮未触发） |

样例新行：

```
T:485010 BuildingClass            (bm-owner, ledger-attribution)
M:485010:this:0x3C → int/unsigned int   (bm-member, width-pinned, member=ambientSoundController)
T:5CAD90 MPBattleClass            (bm-owner)
```

通道强度分级照旧：bm-member = width-pinned（强，指令宽度钉死）；bm-owner = ledger-attribution（中）；
bm-sig = codegen-consistent（中，裸 int 族全剔 + return-this cast 伪影剔除）。

---

## 4. 静态验证（`s44_bm4_validate.py`，禁求解器，全 PASS）

| 项 | 判定 |
|---|---|
| V1 前 2,058 行与 git HEAD deep-equal | PASS |
| V2 新行分布 + strict tier + 规范 proof 标签 | PASS（34 = owner 18 / member 5 / sig 11） |
| V3 新 fn 集（18）∩ rounds1-3 fn 集（1,442）= ∅；新 ent 集（34）∩ 旧 ent 集（2,058）= ∅ | PASS |
| V4 全部 18 个新 fn 在 bm4 冻结 clean 池 + part_report MATCH+clean+0rv 溯源复核 | PASS |
| V5 meta.round4 台账 + evidence_total=2,092 + gate.final=34 | PASS |
| bm-sig 裸 int 族零泄漏 / bm-owner 全在 proven 宇宙（1,463） | PASS |

确定性说明：本轮不重跑提取器（追加式脚本按设计不可重入）；求解器侧无覆盖率/双跑实测
（任务书禁令）。34 行对 loader 的效果由下一次求解器运行自然体现——若沿 BM3 §2 先例，
33 条 loader 过滤现象（类型 token 不在候选索引）同样可能出现在本轮行上，属既有保守跳过。

---

## 5. 工件与提交

| 文件 | 变更 |
|---|---|
| `anchors/byte_match_types.json` | +34 evidence（2,058 → 2,092，追加式；`meta.round4` 台账） |
| `.omo/agents/bm/s44_bm4.py` | 本轮提取器（G2 扫描根修复见 §1；其余门逻辑逐字同构 s41_bm3.py） |
| `.omo/agents/bm/s44_bm4_validate.py` | 静态验证脚本（只读） |
| `.omo/agents/bm/status_snapshot_bm4.json` | 冻结账本快照（gitignore，torn-read 防护凭证） |
| `.omo/agents/bm/report_bm4_data.md` | 本报告 |
| 日志 | `bm4_extract.log`（提取全程）/ `bm4_validate.log`（验证全程） |

## 6. 下一步

- 本轮池已榨干：506 个新地址的门内收益全部收录（丢弃均有台账/结构性归因）。
- 下一轮有效供给 = 新的字节 MATCH 种群且需类作用域占比回升（owner 通道看类作用域、
  member 看 `this->` 访问率、sig 看非 int 族返回/参数）——r2 式 `__int64` 自由叶波
  对 BM 的边际贡献已探明为 ~0.07 行/地址，同类波再放量时收益预期可直接按此折算。
- B2 裁决（loader 33 行过滤 = `int*`/`void**` 默认拼写，勿解锁）继续有效。
