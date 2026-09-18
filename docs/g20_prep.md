# G20 准备工作包（2026-09-18，G19 执行后备齐）

> 当前态：completed **11,699** / pending **4,819**（marker 口径）；HEAD `7d2cf6c9`；
> tag 同步；readiness READY。**G19 已清**：W0（全池 11,695 ALL PASS 复验 + 增量并入
> + infantry.cpp 2 注解补齐）/ L1 #122 中区真值表四源重建（ctor 写图 + YRpp 锚 +
> Passengers{count,head}@276 + ProgressTimer 28B 证据收敛，**A1 -12 全消**，til×7）/
> L2 #121 JumpJet@3476 + Crashable@3477 INI 直证定谳 / P2 H5×4（CanMoveFreely /
> FindPathToBuilding / CanAttackTarget / PowerDrainUpdate=checksum 序列化）。
> **AGENTS 状态表/接手指引本轮已刷新至 11,699 + g20_prep 口径。**
> 本文件是下一会话的**可执行准备材料**（git 跟踪）。

## 使用前提（沿用）

1. IDA 连接非持久：操作前当场探测 `curl -m 5 http://127.0.0.1:13337/`。
2. RA2-MCP 不热加载：改验证器/MCP 服务需重启（13399）。
3. 守卫口径：verify = 文本 CFG 双射 + trivial-stub-mismatch 守卫，不含可编译性保证。

---

## W0 — 开场

1. **AGENTS 状态表/接手指引本轮已刷**（11,699 + G20 口径）——核对无遗留即可。
2. **全池复跑确认 11,699 全绿维持**（G19 新增 4 未进池基线）：
   `python .omo/pool_verify_all.py --workers 6`；预期 ALL PASS。
3. 开场五检。

## 遗留清偿（G19 移交）

### L3 — #114 两型词汇缺口（address-of / 下标全局读）

- 验证器词汇缺口两型：`&全局` 形态与 `全局[i]` 下标形态的事件对称表达。
- 既定教训在案（#72）：全局索引读必须用退化指针形态 `*(DataGlobal_X + i)`。
- 处置：逐形态补词汇 → 全池 dry 统计误伤面 → 试点推广；不自行扩验证器，
  动 `verify_execution_flow.py` 前先向用户提交方案。

### L4 — #118 三例人工对照

- 0x401190（纯算术+参数接收者读 a1+44）/ 0x4DBA50（局部 v2 虚调用派发）/
  0x659470（写经局部 v2=this+32）——逐例 live 反编译三选一。
- 检测通道研究（算术指纹/参数接收者成员读）立项待用户裁决。

## P2 — H5 续波（fresh 16，MCP 2026-09-18 扫描）

| 地址 | 行数 | 备注 |
|---|---|---|
| 0x51dff0 | 50 | 最小可入手 |
| 0x522d50 | 54 | |
| 0x5239d0 | 56 | |
| 0x522340 | 65 | |
| 0x5200b0 | 75 | too-long |
| 0x418e20 | 95 | **先核归属**（0x418 地址段，Aircraft 桶嫌疑） |
| 0x51e140 | 100 | too-long |
| 0x51dbd0 | 107 | too-long |
| 0x51c8b0 | 114 | too-long |
| 0x521320 | 125 | too-long |
| 0x736579 | 160 | **先修块地址**（中游地址疑注解错位） |
| 0x51d6f0 | 185 | ProcessDeployAction 主入口 |
| 0x514310 | 339 | too-long |
| 0x51bf90 | 359 | too-long |
| 0x51f3e0 | 46 | |
| 0x51f6e0 | 53 | ProcessIvanBomb 坏块手工重建候选（G15 同型） |

范式（G16-G19 成熟）：`get_context` → raw cast 双侧零事件对称 → 语义虚调用 →
CFG 镜像 → verify → mark_completed。舰队波仅在新词汇落地后直驱。

## 承接批次（材料：docs/g18_prep.md 扩容节 + g19_prep 承接表）

| 批次 | 量级 | 产出 | 备注 |
|---|---|---|---|
| **E1 全局命名轮** | 1-2 会话 | ~351 函数解锁（#67-#71 五区） | DataGlobal 批产范式；e4_globals.hpp 走生成器侧 |
| **W0b gap2 重生成** | 1.5-2.5 会话 | ~300-550 回收 | **开工先向用户提交 (a)/(b) 裁决包**（`fleet_B_inventory3.json`） |
| **P3 vtable 批量** | 2-4.5 会话 | 词汇+误归属清偿 | TeleportLocomotionClass 362 槽个案优先；rtti_hierarchy 扩 108 表（0.5 会话）前置 |
| H6 ternary | 1 会话 | +60-120 | 每形态 20 块试点 PASS≥60% 推广 |
| H7 A2 owner 考古 | 1 会话 | 间接解锁 | G9 离线考古链 |
| H3r 机械 Fry | 1 会话 | +60-100 | free-this 46 / IDA-ism 24 / broken-arrow 31 重盘 |
| A1 复跑 | 0.25 会话 | 追加命名 | G19 后 -12 全消，再跑看新增 agree/REJ |

## 小项清偿（残余，G18/G19 移交）

1. stats pending 口径差诊断（marker 4,819 vs 活口径；AGENTS 旧池常数已弃用）。
2. 扫描器 v2 对齐：`.omo/audit_completed_bodies.py` undeclared_params 109 vs
   #120 审计器"归零"差异精算。
3. e4 括号非零 delta ×8 确认（G16 遗留伪码噪声，维持豁免记账）。
4. 无裸注解 2 例已全清（0x41C010 G18 + 0x4598A0 G19）✅。

## 工作量总账（G20 展望）

| 批次 | 量级 |
|---|---|
| W0 开场（池复跑确认） | 0.25 会话 |
| L3/L4 词汇缺口与三例 | 0.5-1 会话 |
| P2 H5 续波（16 队列） | 1.5-2.5 会话 |
| E1 / W0b / P3 / H6 / H7 / H3r / A1 | 6-10 会话 |
| 小项清偿 | 0.5 会话 |

**合计 ≈ 9-14 会话**；排序 = **W0 → L3/L4 → P2 主体 → E1/W0b（W0b 等裁决）→
P3 → 并行填充**。

## 快速验收清单（G20 开工顺序）

```
[ ] curl :13337 探测
[ ] 开场五检
[ ] W0 全池复跑确认 11,699 全绿维持
[ ] L4 #118 三例人工对照（三选一，逐例记账）
[ ] L3 #114 词汇缺口（方案先报用户再动验证器）
[ ] P2 H5 波 ×3-5（0x51dff0 → 0x522d50 → 0x5239d0 → 0x522340）
[ ] E1 全局命名轮（或 W0b 裁决包提交，视用户在场与否）
[ ] P3 vtable 批量（时间富余）
[ ] 小项清偿（时间富余）
[ ] 收尾六件套 + 新增 completed 全验 + 提交 + tag 重锚
```
