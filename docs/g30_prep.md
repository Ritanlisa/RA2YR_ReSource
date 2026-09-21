# G30 准备工作包（2026-09-21，G29 收尾时创建）

> 承接：mech_rebuild_plan.md「G29 翻译轮执行记录」+「G29.1/G29.2」。
> 基线：completed **12,680**，pending **3,927**（并行会话推进，接手先 `stats` 复核）。

## ⚠️ 第 0 优先：缺口总账（下次工作先修这里，2026-09-21 用户指令）

> 本节是全会话缺口的一页总账。开工先对照「已闭环」表复核（防重复劳动），
> 再按「开放缺口执行序」逐个修复。详细步骤见下方工作分解对应条目。

### 已闭环（复核确认，勿重复做）

| 缺口 | 闭环方式 | 一分钟复核法 |
|---|---|---|
| #146 harvest_loop 写体错位（44b770 体错写进 464ac0→幻影 completed） | G29.1 (84c50f46) 写体守卫 | `reconcile_accounts` dry = 0 phantom |
| #147 harvest_loop 载体丢参（597d40 dwNewLong 未声明） | G29.1 丢参守卫 | 实跑 1 件抽查载体签名含参 |
| #148 set_signature 把独立 `{` 行当定义行替换 | G29.1 闭环 | dry_run 看 old_def 是否含函数名 |
| #145 验证器 RET 合并词汇缺口 | 1bb979ec 容忍规则 + sticky-or 技巧（两件已收割，issue 已 resolve） | `verify_function 0x4578c0` PASS |
| classes.hpp + e4_globals.hpp 同 TU 双声明冲突（CRTGlobal/vt_* C2040/C2372） | G29.2 清偿 11,977 条重复声明 | 任一 e4 TU 单文件编译无 C2040/C2372 |
| #149 signals 并发损坏（30s 超时≠服务器中止，重入双写） | G29.1 原子写 + harvest async | 同步模式 count>3 禁用纪律 |
| subs_N 存根双通道抢占定位 | sweep_stubs 实跑 206 块/33K 行 + 定位器 e4 优先 | next_batch 取件 verify 定位到 e4 文件 |

### 开放缺口（按依赖序，编号供引用）

**缺口 A：e4 自由函数事件词汇（≈1,659 件 class="" 池 = 最大剩余桶）**
- 根因（实测确证）：`efv_cpp_events` 成员事件只认 **this-relative** 访问
  （free function class_name=None → member step skipped）；参数型 receiver
  `a1->X` 架构上零事件——**改签名无效，唯一解 = 类形态载体**。
- 前置 A1（锚点不足）：AudioStream 等类在 member_lookup/_member_by_name
  仅 4 锚 → 先 `member_set` 带证据补锚。
- 详见下方工作分解第 2 项（判别定稿：裸 int 参免类化直译 / 类型化指针首参
  `a1[N]` 才类化；生成器路径 > set_signature 挂类）。
- **验收：试点 10 件通过率 ≥70%，判定规则回写 mech 计划。**

**缺口 B：#150 归属错位（0x50d9c0/0x50d9d0）**
- canon 锚 cls=TechnoClass 错位，真 receiver = owner（HouseClass，读
  House@0x164/@0x168）；gap2 载体名 processExperienceGain/updateVeterancy
  不可信。详见工作分解第 3 项。
- **验收：两件 verify PASS + ml/mbn/signals/hpp 四方一致。**

**缺口 C：#151 vt 槽 136 名义冲突（0x449A40）**
- 三方名字矛盾（树内 GetOwnerHouse / vtable_offsets HasValidWeapon /
  0x4496B0 Mission 状态机）。YRpp vtable 顺序裁决后 rename_symbol 四方同步。
- **验收：audit_consistency 该槽 0 mismatch。**

**缺口 D：0x77D200 j_Game_ProcessIdle receiver 真型待定**
- jmp thunk 转发 Game::ProcessIdle(0x77F900)，Hex-Rays receiver 垃圾猜测；
  先定真型再归属，强翻引入 illegal-ptr-cast。

**缺口 E：老挂账顺延（非阻塞）**
- q204@516 reloadTimer 重叠；1732 双义；BuildingClass@36 occupant 改名
  （ObjectClass 全族影响面）；0x464AC0 归属 BuildingTypeClass + PlaceAnywhere；
  SelectWeapon(0x6f3330) target 参数补齐后攻三大件。

### 执行序

```
A1 补锚 → A 试点 10 件（通过后转下方第 1/2 项放量收割）→ B → C → D → E
```

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

### 3. 归属裁决（G29 新挂账）

- **0x77D200 j_Game_ProcessIdle**（G29 门控扫描发现的既有 stub 债，非新回归）：
  jmp thunk 转发 this 给 `Game::ProcessIdle`(0x77F900)，Hex-Rays receiver
  类型（SimpleWonlineDialogControl/CreateGameDialogControl cast）为垃圾猜测。
  需先定 receiver 真型（是否 Game*）→ set_signature 归属 + include Game_e4.hpp
  后再翻；强翻会引入 illegal-ptr-cast 或新增编译错误。
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
[ ] 缺口总账复核（第 0 优先节：已闭环表逐条一分钟复核）
[ ] A1 补锚 + e4 类形态试点 10 件 + 通过率报告（缺口 A）
[ ] stats 复核基线
[ ] harvest_loop async 批量 ≥2 波（每波后 reconcile=0）
[ ] #150/#151 归属裁决落地（缺口 B/C）
[ ] 收尾六件套
```
