# G29 准备工作包（2026-09-21，G28 收尾时创建）

> 承接：docs/mech_rebuild_plan.md「第 6 步 RA2MCP 阶段执行记录（G28 第三轮）」。
> 基线：completed **12,662**（G28 末净增 +5；并行会话同步推进，接手先
> `stats` 复核），pending **3,946**。

## G28 会话教训（先读）

1. **e4 自由函数族事件词汇缺口是当前最大收割阻塞**（约 2,900 件
   class="" 的 5-30 行件）：`a1[N]` 不产 READ(member,N) 事件。解法见
   mech 计划 G28 节结论 6——先做 10 件试点（E4Recv 最小类声明 vs 签名
   改 Class* 型参），定一种后批量。
2. **subs_N.cpp 存根清扫是 e4 收割前置**（G28 结论 1）：按 next_batch
   批次把同地址存根清掉（注释不带 0xADDR 样式），否则 by-name/by_addr
   双通道抢占。
3. 大件（SelectWeapon 族）单件成本 = 琐碎件 10 倍以上；G28 五件全为
   ≤100 行件。**吞吐策略：优先 ≤30 行类形态件。**

## G29 工作分解（按优先级）

### 1. e4 自由函数词汇解锁试点（吞吐主通道解锁）

- 取 addr40_e4.cpp 前 10 件 class="" 5 行件。
- 方案 A：E4Recv_XXX 最小 hpp 扩类（照 0x46D350 模式）。
- 方案 B：cpp 签名参数改 `ObjectClass* a1` + `a1->member`（门控允许改签名，
  但注意 e4 hpp 无声明孤函数才能这样改）。
- 试点后统计通过率，定稿写入 mech 计划。

### 2. 存根清扫批（配合 1）

- `list_pending` 的批次地址 → grep src/core/subs_*.cpp 同地址存根 →
  删除（保留不带 0xADDR 的占位注释）。
- 一次性脚本化：`.omo/g29_stub_sweep.py`（按 functions.json 地址对账）。

### 3. 验证器 RET 合并词汇（解锁 #145 族）

- efv_normalize.py 增加「同返回值 RET 合并」canonical 规则（RET 块按
  presence 比较，已是 SET 语义——合并同 signature 终结块的入边）。
- 获用户批准后实施（验证器是 REVERSE 管道保护文件的旁系，改前说明）。
- 解锁：IsFootprintBlocked + CheckOverlapWithOthers（goto 译法可回填）。

### 4. G27/G28 挂账裁决（顺延项）

- q204@516 reloadTimer 重叠裁决；1732 双义裁决。
- BuildingClass@36 objectTypeFlags→occupant 改名（ObjectClass 全族影响面，
  rename_symbol 四方同步）。
- 0x464AC0 归属 BuildingTypeClass + PlaceAnywhere 定谳落地。
- SelectWeapon target 参数补齐后攻三大件。

### 5. 收尾六件套

- 净增首行 / 抽样回归 / 对账（marker&completed 对齐）/ 提交 / AGENTS 刷新 /
  g30_prep。

## 快速验收清单

```
[ ] stats 复核基线（并行会话漂移）
[ ] e4 自由函数试点 10 件，通过率报告，词汇定稿
[ ] 存根清扫脚本落地 + 批量清扫
[ ] RET 合并词汇裁决（如获批则 #145 两件收割）
[ ] 挂账裁决 ≥2 项落地
[ ] 收尾六件套
```
