# G32-G42 阶段台账（重建版）

> 生成：2026-10-10，任务 T1（`.omo/plans/project-optimization.md` Wave 1）。
> 方法：仅从 git 提交 + `.omo` 状态产物重建（G32-G42 无 prep 文档）。所有数字标注证据等级：
> **实证** = 原始命令输出/文件计数直接可验；**推测** = 推断，已标注。
> 原始数据：`.omo/evidence/optimization/baseline/`（git_log_g32_g42.txt / phase_clusters.json / build_clean_run*.log）。

## 0. 分类规则（实证）

- 阶段归属 = 提交 subject 的第一个 `(Gnn)` 标签（`fix(G42.57az)` → G42）。
- 两种计数并存（两者都是实证，语义不同）：
  - **subject 计数**：`git log -E --grep='G3[2-9]|G4[0-2]'` 按 subject 首标签聚类（399 提交）。
  - **全文计数**：`git log --grep=Gnn`（匹配完整 message body，含历史引用，偏高）。
  - 差异例：G37 subject=1 / 全文=5（G42.31b 等提交 body 里引用了 "G37"）。本台账以 subject 计数为准。

## 1. 总表（G32-G42）

| 阶段 | 提交范围（首→末 tagged） | subject 数 | 日期 | 核心成果 | 关键产物 | 缺口/备注 |
|---|---|---|---|---|---|---|
| G32 | `9a56bf5a`→`b460565a` | 23 | 09-23→09-24 | 五步脚本化：run_all_steps + step1-5 独立脚本；成员改写清零冲刺（census 21,753→15,208）；越界成员条目清除 969 万（ml 186万→408K） | `tools/csp_export/run_all_steps.py`、step1-5、`sync_ida_cache` | span 边界词汇化后仍有波动文件（building/misc） |
| G33 | `6257a1b1`→`6e4ff8f6` | 7 | 09-26→09-27 | 收敛至 ~31K 错误平台（r54=31,009 平台；r64/r65=30,055 plateau） | `build_errs_r*.txt` 系列、converge_loop、verify 门优化 20h→21min | 平台期认定机械电池到极限 |
| G34 | `7ffd7d05`→`fd61ab57` | 16 | 09-27→09-28 | 数据质量门：classes.hpp 338MB→64MB、mtab OOB 204K→0、r57 基线恢复（r72=34,472）；CSP 返回类型求解+灌回 IDB；bool 进类型宇宙；r94=29,659 不动点 | `validate_canon_members.py`、`solve_return_types.py`、`reconcile_returns_from_defs.py`、`upgrade_instance_evidence.py` | 成员重类型化管线（42.5K 观测）转后续 |
| G35 | `d5e480cf`→`b7eb6dd4` | 6 | 09-28→09-29 | til 灌入 + this 类全量应用 + 成员形态体重生成；csp_canon/classes.hpp 升级 class+继承+布局精确转写；'?' 桶删除 | `.omo/step3_fresh_g35*.log` | — |
| G36 | `f1baaa6f`→`e18a0a74` | 5 | 09-29 | 三大编译错误族机械修复（asm 锚定 til 成员重写）；vtable 13,279 槽位签名全量 sig=csp；vtable-via-inheritance 试点（CDFileClass 四层 SLOT-PERFECT）；retn 裁决签名管线 | `fix_c20xx_*` 电池、`register_class_participation.py` | — |
| G37 | `07f25216` | 1 | 09-30 | 编译错误机械清偿首轮——修复器电池 v2 九件套 + 跨宇宙 C2011 根治 | 修复器电池 v2 | 后续 G42.31/33 提交 body 引用 G37 配方 |
| G38 | `ff112708`→`3c1c7114` | 3 | 09-30 | 残账清偿三连波：归属链贯通 + sync_symbols 基建修复 + retn 真值锚点；1,289 注解补齐；C2511 签名同步灭 C2671 | `.omo/retn_anchors.json`、`sync_symbols.py` | — |
| G39 | `0d0dd8b5`→`ee4929bc` | 5 | 09-30 | 验证器 vfptr 槽位伪影根除（0x4011B0 铁证）；Task-17 死存根大清扫（2,878 影子存根，completed 池 FAIL 4,678→2,282）；错译虚调用还原 + 裸虚调用词汇 | 验证器词汇 v2 | — |
| G40 | `173957ea`→`53d4fa17` | 5 | 09-30 | this 降级修复器质量事故闭环（80 错删参数全数回滚 + C==T 判别守卫）；诚实账目 167 个 C2597 return-0 桩 completed 误标重开；编译清零段 r19-r20（11,664→11,619） | `repair_demoted_this.py` | — |
| G41 | `cb56d29d`→`e2a57fb7` | 62 | 09-30→10-02 | exec-flow 家族清偿 + 验证器四词汇（车道宏/别名接收者/别名算术/cast 内联形）；全量 remat 8,567 def；三大语法族清除（C2059-namespace 1,643→0）；编译 r55=27,724；tu_errors_r2 census=31,045（10-01，实证） | `.omo/tu_errors_r*.json`（r2-r4） | ⚠️ plan 文档称 G41 证据=`.omo/w13a-d_*/report.md`——**错误**：w13a-d 自我标识为 G42.57 波（日期 10-06/07，见 §3） |
| **G42** | `ab79f127`→`b9e888e2` (HEAD) | **266** | 10-02→10-09 | 编译清偿战役 G42.1…G42.57：census 31,045（10-01）→7,884（10-03 g154）→…→W20-M 清债波 r24=9,860（10-08）；f276ca8f 全量 regen + 供给波后净态 build6=27,890（10-09，全量 MSBuild 口径，**已由 T1 两次 clean build 复现=27,890**） | `.omo/w13a-d…w20m*_report.md`（32 份）、`.omo/g57w*.py`（773 个修复器）、`.omo/archive_g57w20/`（41 脚本）、census_g*.log（11 份） | 见 §2-§4；口径分裂=两个不同测量的不同树状态（§5 裁决） |

## 2. G42 战役结构（实证，来自提交与 .omo 产物）

### 2.1 阶段弧线（probe census 口径，per-TU `error C` 计数、C1003 每 TU 截断 ~100）

| 快照 | 日期 | 总数（A+B+C 分片条目） | 阶段 |
|---|---|---|---|
| `tu_errors_r2.json` | 10-01 | **31,045** | G41 末 |
| `tu_errors_g115.json` | 10-02 01:05 | 24,953 | G42.1x |
| `tu_errors_g125.json` | 10-02 05:39 | 24,695 | G42.1x |
| `tu_errors_g137.json` | 10-02 15:11 | 22,601 | G42.1x |
| `tu_errors_g143.json` | 10-02 20:59 | 12,413 | G42.2x 大跃降 |
| `tu_errors_g154.json` | 10-03 18:31 | 7,884（848 TU 口径） | G42.3x |
| `tu_errors_c_g195.json` | 10-05 18:40 | 16,544（852 TU 口径） | G42.5x 供给回升 |
| `tu_errors_*.r15` | 10-07 15:07 | 13,601 | W13 起 |
| r17 | 10-07 20:45 | 12,517 | W15 |
| r18 | 10-08 00:39 | 12,200 | W16 |
| r20 | 10-08 05:45 | 11,049 | W18 |
| r23 | 10-08 14:07 | 9,966 | W20-M |
| **r24 = 当前 `tu_errors_{A,B,C}.json`** | 10-08 14:19 | **9,860** | W20-M 清债波（e32f5183 提交记录） |

- **实证**：r24=9,860 = `tu_errors_A.json`(7,818) + `_B.json`(40) + `_C.json`(2,002) 条目和，逐文件计数验证。
- **缺口**：e32f5183 声称战役基线 22,389（9,860+12,529）。该精确值的 census 快照**未在 `.omo` 定位到**（最接近 g137=22,601）；推测为 10-07 W13 起点时刻、略不同 TU 集的一次 census（未落盘该名）。

### 2.2 G42.57 四 Agent 并行波系统（W13-W20，10-06→10-09）

每波 4 Agent 并行，按 MSVC 错误码分领地；所有 src 改动经自写修复器（`.omo/g57w*.py`，UTF-8 newline=''、幂等 DRY 默认、--apply 落盘）；账本 = `tu_errors_{A,B,C}.json` 分片快照。32 份战报齐全（清单见 §4）。

| 波 | Agent-家族（战报数） | 代表成果 |
|---|---|---|
| W13 | A:C2039 / B:C2660+C2664 / C:C2065+C3861(gap2) / D:C2440+C2059（4 份） | A: 1,663→1,307（−356）；全错误（同 TU 集）10,063→9,612 |
| W14 | E1(无战报,仅产物) / E2:C2059 / E3:C2065+C3861 / E4:C2027+C2660（3 份） | E2: 1,033 错 8 子族 ≈245 修；E3: 1,433；E4: 1,634 |
| W15 | F1:C244x 1,695 / F2:C2355+C2352 833 / F3:C2660+C2664 1,585 / F4:截断 raw 重灌（4 份） | 多份"前任 quota 阵亡、账本复用"记录（F1/F2/F3） |
| W16 | G1:C244x+C2109 r18 1,960 / G2:C2352+C2352 / G3:C2039+C2027 / G4:C2065+C3861（4 份） | r18 census=12,200（实证） |
| W17 | H1:C2660/64/65 / H2:C2059+C2143 / H3:C2678+C3863 / H4:C2039+C2355+C2352（4 份） | H4 使用 IDA 在线批取证 |
| W18 | J1:C2660/64 重聚类+C2064+C7664 / J2:C2065+C3861 供给 / J3:C2100/C2296/C2597/C2562/C2661 / J4:W17 移交件（4 份） | — |
| W19 | K3:dot-q 放量 / K4:C2665 256+C2059/C2143（2 份） | **k1/k2 无战报**（缺口） |
| W20 | L1:C2664 遗产 / L2:naive 漂移复核+dot-q 38 / L3:gap2_defs 卫生 / L4:C2059/C2143 230 站+C2665 62 站 / M3:锚回填 / M4:misc_ext 残账 / M5:BulletTypeClass 68→0（7 份） | M 波转入清债轮 r1-r24 循环 |

### 2.3 收官转折（10-09，实证自提交）

- `f276ca8f` run_all_steps **全量重跑**：扁平化 til + typed lvar 快照重导 + **全库 body 重生成**（此前手工修复的 body 被覆盖重建）+ R1/R5 清理首遍。
- `7d23498d`/`f3d98c45`（G42.57ax）：step2_canon 产物 + 门控优化 + gamemd 幻影根除 + 双名宇宙收敛 + 成员供给机。
- `b9e888e2`（HEAD, G42.57az）：**"供给波净态 (=build6 27,890 基线) — arity 扩参波弃用记录"**。
- **实证**：`.omo/g57ax_build6.log`（10-09 20:44，25,849,328B）含 **27,890** 个 `error C` 行——HEAD 数字逐字对上；`g57ax_build10.log` 同字节数（同树复测一致）。`.omo/g57aw_build6.log`（aw 会话，早 3 小时）=34,270——同名 "build6" 跨会话编号复用，引用时必须带会话前缀。

## 3. 与计划文档的矛盾（必须显式记录）

| # | 矛盾 | 裁定 |
|---|---|---|
| 1 | plan 阶段表称 G41 证据 = `.omo/w13a-d_*/report.md` | **错误**。w13a-d 战报自我标识 "G42.57"、日期 10-06/07（G41 末次提交 10-02）。w13a-d 归 G42.57 W13 波。 |
| 2 | plan 阶段表 "G42 W14-W20 四 Agent 并行波" 首提交 `ab79f127`→HEAD=266 提交 | 正确（实证 266，subject 计数）。 |
| 3 | 旧文档（master_plan/coverage/G17-G31 prep）的 completed 12,687/pending 3,920 等 | **历史口径**。G32 起主口径=编译错误数（plan「现状实测」节已声明）。本台账不沿用。 |
| 4 | "G33 首个提交 6257a1b1 收敛至 ~31K 平台" | 正确，但注意 G33 subject 计数=7（全文 grep=10）；plan 的 G36-G37 首提交（f1baaa6f/07f25216）均实证吻合。 |

## 4. 波次战报清单（32 份，`.omo/w*_report.md`，实证）

w13a, w13b, w13c, w13d, w14e2, w14e3, w14e4, w15f1, w15f2, w15f3, w15f4, w16g1, w16g2, w16g3, w16g4, w17h1, w17h2, w17h3, w17h4, w18j1, w18j2, w18j3, w18j4, w19k3, w19k4, w20l1, w20l2, w20l3, w20l4, w20m3, w20m4, w20m5。

**缺口清单（不静默省略）**：
- `w14e1`：无战报，仅产物（`w14e1_*.json/txt` 12 个文件）。
- `w19k1`、`w19k2`：无战报无产物——k 序列从 k3 开始（推测：编号预留或会话失败无遗产；无证据可查）。
- `w20m1`、`w20m2`：无战报，仅 `w20m1_backup/`、`w20m2_backup/` 目录。
- `w20m6`…`w20m26`：26 个 `w20mN_backup/` 目录无对应战报（推测：M 清债轮 r-loop 的文件级 checkpoint，非独立 Agent 战报）。
- W15 F1/F2/F3 三份战报均记录"前任 Agent quota 阵亡、账本复用"——波次执行存在中断重发史。

## 5. 编译错误口径裁决（T1 实测）

**结论：r24=9,860 与 build6=27,890 不是矛盾，是两把不同的尺子量两个不同的树状态。两者均为实证，且 HEAD 的 27,890 已由本任务两次 clean build 精确复现。**

| 轴 | r24 = 9,860 | build6 = 27,890 |
|---|---|---|
| 测量仪器 | per-TU probe census（`.omo/tu_probe.bat`：`cl /Zs` 仅语法检查）逐 TU `error C\d+` 计数入 `tu_errors_{A,B,C}.json` | 全量 MSBuild 构建（`cmake --build build_win`）日志中 `error C\d+` 行出现次数（`g57ax_build6.log` 实测=27,890） |
| 工具链 | VS 18 cl（vcvars32 默认取最新 14.51→cl 19.51.36246；**推测**：vcvars 默认选最新工具集） | VS 2022 BuildTools v143（cl 19.44.35223）+ MSBuild 17.14.40 |
| 宏环境 | `/DGAMEMD_DEBUG`（探针固定加） | Release 配置无 GAMEMD_DEBUG（影响极小：仅 2 文件使用，实证 grep） |
| 树状态 | e32f5183（10-08 14:52，**f276ca8f 全量 regen 之前**） | b9e888e2（10-09，regen+供给波之后，两状态间 25 提交） |
| 每 TU 截断 | 有（C1003 100 错/TU 即停） | 有（同为 MSVC 编译器行为） |

- **T1 clean run #1**（2026-10-10 10:21:56→10:31，HEAD b9e888e2，worktree clean，Release，`--clean-first`，RA2_SKIP_GATES=1）：`error C` 出现次数 = **27,890**。原始日志 `.omo/evidence/optimization/baseline/build_clean_run1.log`（25,902,667B；run2 同字节数——两次 clean build 日志尺寸与错误计数完全一致）。
- **T1 clean run #2**：见 manifest `build_metric.clean_run2`（同命令重跑）。
- 含义：HEAD 提交消息的 build6=27,890 在当前树**可复现且已复现**；r24=9,860 是旧树（pre-regen）+探针口径的历史值。后续 T2/T11 一律以"全量 MSBuild 构建日志 `error C` 行计数"为编译错误主口径，注明 clean/incremental 与 commit。

### 口径注记（实证）
- `error C\d+` 行计数 ≠ 逻辑错误数：C2440 的 `with [...]` 续行、同错误多行重复均各计一次；每 TU C1003 截断使总数低于真实错误数。G33 时代 commit 数字（r77=29,946 等）与本口径逐字吻合（build_errs_r77.txt 实测 29,946），证明该口径自 G33 起连续一致。
- census_g*.log（11 份，10-03→10-05）为 probe census 时代的中间账，范围 7,884~16,544，与 §2.1 弧线一致。
