# G30 准备工作包（2026-09-21，G29 收尾时创建）

> 承接：mech_rebuild_plan.md「G29 翻译轮执行记录」+「G29.1/G29.2」。
> 基线：completed **12,680**，pending **3,927**（并行会话推进，接手先 `stats` 复核）。

## G30 工作分解（按优先级）

### 1. harvest_loop async 批量跑（G29.1 修复后的主吞吐通道）

- `harvest_loop` 已有 `async=true`（job 框架）+ 写体守卫（#146）+ 载体丢参守卫（#147）。
- pool ~340（dry_run 预览确认），分批 20-30 件/次，batch 间 `reconcile_accounts` 对账。
- 纪律：**同步模式 count>3 禁用**（30s 客户端超时 ≠ 服务器中止，#149 教训）。

### 2. e4 自由函数类形态试点（重启，修正对象选择）

- g29_prep 原前提（addr40 有 5 行件）已证伪：addr40 class="" 最小 56 行。
- 正确试点对象：`list_pending` 里 `class=""` 且 `pseudocode_lines<=30` 的件
  （top_classes 显示 class="" 池 1,659 件，是最大剩余桶）。
- **捷径（mech 计划「G30 收尾附录」）**：伪码参数为裸 int 的件（`int i` +
  `*(int *)(i+48)` 形态）**免类化直译**即可 0 事件对称（先例 addr75
  sub_751080）；仅类型化指针首参 + `a1[N]` 常量下标件才走类形态。
  首批命名已预研：0x406EC0=PumpMovieAudioQueue / 0x406F40=PumpAudioQueue；
  已完成件 0x751080 可改名 DecrementAudioQueueCountdowners。
- 缺口件前置：AudioStream 在 member_lookup/_member_by_name 仅 4 锚，
  类形态翻译前先 `member_set` 补锚（canon classes.hpp 只是编译载体，
  不参与事件判定）。
- 路径优先级：**生成器路径**（gen_e4_materialize 产出 E4Recv 类声明；G29.2 已
  铺平 classes.hpp + e4_globals.hpp 同 TU 编译 0 error）> set_signature 挂类。
- 试点 10 件 → 通过率报告 → 批量判定写入 mech 计划。

### 3. 归属裁决两件（G29 新挂账）

- **#150** 0x50d9c0/0x50d9d0：canon cls=TechnoClass 错位，真 receiver = owner
  （HouseClass）。需 HouseClass@356/360 补锚（member_set 带证据）+ set_signature
  归属改名 + 语义命名（DrawPips 门控 veterancy pip）。
- **#151** 0x449A40 vt 槽 136：thunk→槽 135(0x4496B0)。三方名字矛盾
  （树内 GetOwnerHouse / vtable_offsets HasValidWeapon / 0x4496B0 Mission 状态机）。
  用 YRpp vtable 顺序定槽 135/136 基类虚方法名，然后 rename_symbol 四方同步。

### 4. G27/G28 老挂账（顺延）

- q204@516 reloadTimer 重叠；1732 双义；BuildingClass@36 occupant 改名
  （ObjectClass 全族影响面）；0x464AC0 归属 BuildingTypeClass + PlaceAnywhere；
  SelectWeapon target 参数补齐后攻三大件（132/216/223 行）。

### 5. 收尾六件套

- 净增首行 / reconcile 对账 / 抽样回归 / 提交 / AGENTS 刷新 / g31_prep。

## 快速验收清单

```
[ ] stats 复核基线
[ ] harvest_loop async 批量 ≥2 波（每波后 reconcile=0）
[ ] e4 类形态试点 10 件 + 通过率报告
[ ] #150/#151 归属裁决落地
[ ] 收尾六件套
```
