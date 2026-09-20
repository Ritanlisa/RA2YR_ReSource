# G28 准备工作包（2026-09-20，G27 收尾时创建）

> 承接：docs/mech_rebuild_plan.md「第 6 步 RA2MCP 阶段执行记录（G27 第二轮）」。
> 基线：completed **12,657**（诚实口径；并行会话在同步推进，接手时先 `stats`
> 复核），pending **3,950**。

## G27 会话教训（先读）

1. **CFG 雕形是逐件成本主体**：13 件净增中，7 件一次过、6 件经 1-3 轮
   `verify --verbose` 转储对拍迭代。秘籍七条已沉淀进 mech_rebuild_plan.md
   「G27 新增机制结论」——先读再开工，能省一半迭代。
2. **验证器 canon = ida_cache 快照**，live 反编译仅作语义参考；CSE 会消除
   IDA 侧块/事件（CalcDrawPos 全局地址不同、GetFireError CanOccupyFire 无块）。
3. **并行会话实况**：用户多会话并行，git 基线与 stats 中途会动；提交前
   `git log --oneline -5` 复核，统计口径注明时点。
4. RA2MCP 已带 reopen（translated/completed → pending）；replace_body 拒绝
   已替换函数时先 reopen。

## G28 工作分解（按优先级）

### 1. 挂起件收割（首批热身）

- IsFootprintBlocked (0x4578c0)：体已替换、verify 差 2 块。改法：for 循环
  换 IDA 的 while(true)+显式 row++/col++ 语句块（增量语句独立成块），或
  `--verbose` 对着 14 块转储逐块复刻。
- G27 语义发现定谳（见 mech 计划 G27 节挂账表）：q534/q6E9/Tiberium 数组
  全局名/1732 双义/0xA8B230 typed-extern 升级。

### 2. 琐碎桶快攻（吞吐主通道）

`.omo/fleet_index.json` 分布（G26 实测）：≤10 行 552 / 11-30 行 726。
琐碎桶多为单 return/单条件——配合「雕形秘籍」可 2-4 件/轮 get_context 批量。
**纪律：日志首行净增 completed；<15 归因。**

### 3. hpp 声明裁决（G27 挂起项 1 收口）

- q204@516：落在 reloadTimer(12B@508-519) 的 TimeLeft 内——裁决二选一：
  (a) 修 math.hpp TimerStruct 布局（须 ctor 证据）；
  (b) 已译代码 q204 访问改写为 reloadTimer 字段表达式。
- 1732 双义：UnitTypeClass*(q6C0/q6C4 链) vs mission-int(IsEnteringOrCapturing)
  ——按 vtable 槽位证据裁决 this 真实类，可能改函数 this 类归属。
- 0xA8B230 g_ScenarioClass_Instance：globals_*.hpp 各处 extern 类型不一
  （void*/int）——统一为 ScenarioClass* 解锁新码的干净成员访问（旧码 C-cast
  不受影响）。

### 4. 收割机理审计 + 签名缺口补锚（承 G27 未动项）

- g25_pending_reverify 重启前先定界 bodyless PASS 机理（G27 未动）。
- downgrade 4,875 + no-cls 2,256 经 `python -m tools.type_infer.incremental`
  补锚（G27 未动）。

## 快速验收清单

```
[ ] stats 复核基线（并行会话漂移）
[ ] IsFootprintBlocked 收割 + G27 挂账 5 项定谳
[ ] 琐碎桶 ≥3 波，日志首行净增 completed
[ ] hpp 声明两项裁决落地（q204 / 1732）
[ ] 收尾六件套（净增首行 / 抽样回归 / 对账 / 提交 / tag 重锚评估 / AGENTS 刷新）
```
