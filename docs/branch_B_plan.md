# 分支乙计划：语义·考古·核心线（Branch B）

> 版本：2026-09-19 v1。**本文件自洽**——乙线执行者只需本文件 + AGENTS.md。
> 终止条件：乙名下全部桶 pending 归零（贡献 7,267 总量中的 ≈2,500+）。
> 姊妹分支：甲线（docs/branch_A_plan.md，词汇·批量·解锁线）——互不干扰契约见 §3。

## 0. 使命与总量

核心游戏类的语义翻译与布局考古。分摊量 ≈2,500+ 函数：

| 桶 | 数量 | 主阻塞因 |
|---|---|---|
| object/techno | 272 | too-long + 词汇 |
| structure/building | 232 | 布局争议 + too-long |
| object/foot | 104 | 词汇 + too-long |
| house/entity/team/system/ui/network 手写类文件 | ~470 | 混合 |
| object/structure 语义主体（too-long/goto 分散） | ~1,400 | 深语义 |
| 布局争议 + 误归属 | ~170 | 裁决（已定谳待执行） |

## 1. 文件所有权（独占写权——甲线不得写）

- `src/structure/**`（手写类文件：infantry/building/unit/aircraft.cpp 等）
- `src/object/**`（techno/foot/abstract.cpp 等手写文件）
- `src/type/**`、`src/house/**`、`src/entity/**`、
  `src/ui/**`/`src/system/**`/`src/team/**`/`src/network/**`（手写类文件；
  各目录的 `gap2_defs.cpp` 归甲）
- `docs/g16_vtable_audit_queue.md`、布局证据文档

**IDA 资源**：主实例 127.0.0.1:13337（live 反编译/til/四方 rename/写图）。
**读**甲线文件合法（写禁止）。

## 2. 共享资源协议

- `signals.json` / `tools/member_lookup.json`：改动**只写暂存**
  `.omo/branch_b_signals.json`；同步点一次性应用；应用窗口内甲不得写。
- commit 前缀 `[乙]`；tag 重锚在同步点。
- 跨分支阻塞打 `【需甲】` 标签（如验证器词汇缺口）。
- 类布局 key 冲突时**乙优先**（布局权威在乙）。

## 3. 阶段 B1-B7

### B1 — DTOR×2 完成（≈0.5 会话）
- 已完成：InfantryTypeClass::DTOR ✓（净增 +1）。
- 剩余：TechnoTypeClass::DTOR(0x711ae0)——前置 = ml 33 成员名（11 TypeList
  嵌入 × Items/Capacity/FlagByte @1244/1248/1253、1216/1220/1225、1188/1192/1197、
  1160/1164/1169、1132/1136/1141、1104/1108/1113、1076/1080/1085、1048/1052/1057、
  1004/1008/1013、820/824/829、792/796/801）；基座名已有（1240=VoiceFeedback/
  1268=MoveSound/1296=DieSound/1476=DebrisAnims/1592=Prerequisite/
  1620=PrerequisiteOverride/1836=Explosion/1864=DestroyAnim/1912=
  DamageParticleSystems/1940=DestroyParticleSystems）；无名基座用
  `类型+序号` 结构名。hpp 字段追加 + g_AbstractClassArray/g_TechnoTypes 静默
  对称（已定谳）。词汇：do-while→for 镜像 + cache 归一 + OperatorDelete（甲已铺）。
- 验收：0x711ae0 completed。

### B2 — TypeList 嵌入语义命名轮 + TechnoTypeClass 尾区四源重建（≈1-2 会话）
- 33 字段语义精化：0x710af0 实为 ctor 误名——真 INI reader 需 xref 定位后
  G16 INI 考古法提键名 → 四源（ml+mbn+class_layouts+t14 --apply+idb_save）。
- 解锁：TechnoType 族 788-1940 区全部函数。
- 验收：尾区 0 无名；A1 复跑收敛。

### B3 — P3 vtable 审计批量（≈3-5 会话）
- rtti_hierarchy 扩 108 表；TeleportLocomotionClass 362 槽个案；
  0x6FC0B0 GetFireError 族续查；每会话 5-10 表。
- 验收：核心表队列清零；产出供 B4。

### B4 — 核心类语义翻译（≈8-12 会话，~800）
- 桶序：techno 272 → building 232 → foot 104 → house/entity/team/system/ui/
  network 手写 ~470。范式：get_context → raw cast 对称 → 语义虚调用 →
  CFG 镜像 → verify → mark_completed；吃甲 A2/A3 解锁。
- 验收：桶归零。

### B5 — 布局争议裁决执行（≈1 会话）
- D1-4/5 定谳落地：#21 继承建模、#22 子对象建模、#77 现场复核、
  #125 FloatArray ctor 写图仲裁、#25/#59 转 H7。
- 验收：#21/#22/#77/#125 resolve。

### B6 — 语义主体（too-long/goto ~2,365，≈15-25 会话）
- goto 族按 #127 桶政策 + 特批形态；too-long 舰队化+手动混合；词汇前置
  逐桶清（甲供）。乙的最大长尾。
- 验收：δ 段时 ≤200。

### B7 — δ 收尾（≈2 会话）
- 残余散布 + 命名一致性收敛（85/16 → 基线）+ M4 口径核对 + 全池终验。

## 4. 汇合点与门

- β 门：B1/B5 完成（DTOR×2 + 裁决落地）
- γ 门：B3/B4 完成（vtable + 核心类）
- δ 门：B6 主体 ≤200
- ε 门：B7 终验 → D1-D4 功能对等支持

## 5. 风险

- 布局考古深坑（#122 式）：ctor 写图终审法 + 四源同步纪律 + A1 复跑闸。
- 语义主体吞吐：甲 A6 提前支援散布桶；里程碑门重估。
- 主 IDA 单实例排队：live 操作批量打包（每次会话一次性拉取多函数）。
