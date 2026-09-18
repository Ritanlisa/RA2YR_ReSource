# G19 准备工作包（2026-09-18，G18 执行后备齐）

> 当前态：completed **11,695** / pending **4,915**（活口径：marker 块 4,823）；
> HEAD `84b2c5b1`；**全池 11,691/11,691 ALL PASS（G18 W0a 清零后重锚，G15 以来首次
> 全绿）+ G18 新增 4 全验**。G18 已清：W0a 名字错位 / EV T14X 重提取（约束 1.21M /
> TOP=0）/ 词汇前置（g_Tubes、slot196=IsDisguised、slot1064、waterState、InfantryClass
> mbn 镜像手术）/ H5×5 / P1b RadioClass 尾界 240。
> 工作树有 2 个文档增量未提交（g18_prep 验收记录 + roadmap）——G19 首批提交并入。
> 本文件是下一会话的**可执行准备材料**（git 跟踪）。

## 使用前提（沿用）

1. IDA 连接非持久：操作前当场探测 `curl -m 5 http://127.0.0.1:13337/`。
2. RA2-MCP 不热加载：改验证器/MCP 服务需重启（13399）。
3. 守卫口径：verify = 文本 CFG 双射 + trivial-stub-mismatch 守卫，不含可编译性保证。

---

## W0 — 开场（半小时级）

1. **工作树增量并入提交**：`docs/g18_prep.md`（验收记录 + 扩容批次）+
   `docs/roadmap_post_csp.md`（G18 准备轮三段 + 验收记录）——与 G19 首批产出一起提交。
2. **全池复跑确认全绿维持**（11,695，G18 新增 4 尚未进池基线）：
   `python .omo/pool_verify_all.py --workers 6`；预期 ALL PASS，任何 FAIL 逐条定因。
3. 开场五检（readiness / annotations_audit / consistency / git / IDA 探测）。

## 遗留清偿（G18 移交，最高优先——直接解锁主线）

### L1 — #122 TechnoClass 中区 228-256 双 offset 喷涂重建（P1b 续篇）

- 现状：`flashing@228 int[2]` AND `flashing@240 FlashData`、`animation@236` AND
  `@248`、`passengers@244` AND ... **双重定义共存**（G15 漂移族残余）；连带
  **UnitClass 152 处 mbn 漂移**。
- 范式（三连验证）：ctor 写图终审法（G16 TechnoClass 0x6F2B40 / G18 RadioClass
  0x65A750 同款）→ 真值表 → 四源重建（ml 镜像 + signals._member_by_name +
  class_layouts + `t14_structs.py --only TechnoClass --apply` + **idb_save**）→
  UnitClass 152 处镜像跟随 + `g14_a1_yrpp.py` 复跑看漂移收敛。
- 收益：清掉最大活漂移债；中区函数翻译解锁。

### L2 — #121 TechnoType@0xD94(3476) 无名 bool（证据已采集）

- G18 已取证：ReadINI 0x711601 defaults 块写 `[esi+D94]`……命名四源落地即
  **解锁 0x51F330 FindPathToBuilding（34 行，H5 队列内）**。

### L3 — #114 两型词汇缺口（address-of / 下标全局读）+ L4 — #118 三例

- #118：0x401190 / 0x4DBA50 / 0x659470 人工 IDA 对照三选一（真翻保留记理由 /
  复位重翻 / 转桶）；检测通道研究（算术指纹/参数接收者读）立项待裁决，不自行扩验证器。

## P2 — H5 续波（fresh 20，MCP 2026-09-18 扫描）

| 地址 | 行数 | 备注 |
|---|---|---|
| 0x51f330 | 34 | **#121 命名即解锁**（FindPathToBuilding） |
| 0x5227f0 | 30 | |
| 0x5216d0 | 32 | |
| 0x521c90 | 35 | |
| 0x51dff0 | 50 | |
| 0x51f3e0 | 46 | |
| 0x51f6e0 | 53 | ProcessIvanBomb 坏块手工重建候选 |
| 0x522d50 | 54 | |
| 0x5239d0 | 56 | |
| 0x522340 | 65 | |
| 0x5200b0 | 75 | too-long |
| 0x418e20 | 95 | **先核归属**（0x418 地址段） |
| 0x51e140 | 100 | too-long |
| 0x51dbd0 | 107 | too-long |
| 0x51c8b0 | 114 | too-long |
| 0x521320 | 125 | too-long |
| 0x736579 | 160 | **先修块地址**（中游地址疑注解错位） |
| 0x51d6f0 | 185 | ProcessDeployAction 主入口 |
| 0x514310 | 339 | too-long |
| 0x51bf90 | 359 | too-long |

范式（G16-G18 成熟）：`get_context` → 未名偏移 raw cast 双侧零事件对称 → 语义虚调用
（vfptr 只认 `this->Method()`，槽词汇缺时二进制直读 vtable 定谳）→ CFG 镜像 →
verify → mark_completed。舰队波仅在新词汇落地后直驱。

## 承接批次（G18 扩容未消费部分，材料在 docs/g18_prep.md 扩容节）

| 批次 | 量级 | 产出 | 备注 |
|---|---|---|---|
| **E1 全局命名轮** | 1-2 会话 | ~351 函数解锁（#67-#71 五区） | DataGlobal 批产范式；e4_globals.hpp 走生成器侧 |
| **W0b gap2 重生成** | 1.5-2.5 会话 | ~300-550 回收 | **开工先向用户提交 (a)/(b) 裁决包**（`fleet_B_inventory3.json`） |
| **P3 vtable 批量** | 2-4.5 会话 | 词汇+误归属清偿 | TeleportLocomotionClass 362 槽个案优先；rtti_hierarchy 扩 108 表（0.5 会话）前置 |
| H6 ternary | 1 会话 | +60-120 | 每形态 20 块试点 PASS≥60% 推广 |
| H7 A2 owner 考古 | 1 会话 | 间接解锁 | G9 离线考古链 |
| H3r 机械 Fry | 1 会话 | +60-100 | free-this 46 / IDA-ism 24 / broken-arrow 31 重盘 |

## 小项清偿（残余）

1. stats pending 口径差 93 诊断（marker 扫描 4,823 vs 活口径 4,915）。
2. 扫描器 v2 对齐：`.omo/audit_completed_bodies.py` 的 undeclared_params 109
   vs #120 审计器"归零"差异精算（疑多行签名/E4Recv 形态）。
3. e4 括号非零 delta ×8 确认（G16 遗留伪码噪声，维持豁免记账）。
4. 无裸注解余量：0x4598A0（0x41C010 已于 G18 真翻 ✓）。

## 工作量总账（G19 展望）

| 批次 | 量级 |
|---|---|
| W0 开场（增量提交 + 池复跑） | 0.5 会话 |
| L1 #122 中区重建（含 UnitClass 152 处镜像） | 1-1.5 会话 |
| L2 #121 命名 + L3/L4 词汇缺口与三例 | 0.5-1 会话 |
| P2 H5 续波（20 队列） | 2-3 会话 |
| E1 / W0b / P3 / H6 / H7 / H3r | 6-10 会话 |
| 小项清偿 | 0.5 会话 |

**合计 ≈ 10-16 会话**；排序 = **W0 → L1/L2（解锁 H5 队列 + 清最大漂移债）→
P2 主体 → E1/W0b（W0b 等裁决）→ P3 → 并行填充**。

## 快速验收清单（G19 开工顺序）

```
[ ] curl :13337 探测
[ ] 开场五检
[ ] W0 工作树增量并入提交 + 全池复跑确认 11,695 全绿
[ ] L1 #122 TechnoClass 中区 228-256 重建（ctor 写图 → 四源 → UnitClass 镜像 → A1 复跑）
[ ] L2 #121 命名落地 → 0x51f330 解锁
[ ] P2 H5 波 ×3-5（0x51f330 → 0x5227f0 → 0x5216d0 → 0x521c90）
[ ] E1 全局命名轮（或 W0b 裁决包提交，视用户在场与否）
[ ] P3 vtable 批量（时间富余）
[ ] 小项清偿（时间富余）
[ ] 收尾六件套 + 新增 completed 全验 + 提交 + tag 重锚
```
