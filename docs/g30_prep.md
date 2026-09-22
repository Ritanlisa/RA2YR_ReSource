# G30 准备工作包（2026-09-21，G29 收尾时创建）

> 承接：mech_rebuild_plan.md「G29 翻译轮执行记录」+「G29.1/G29.2」。
> 基线：completed **12,680**，pending **3,927**（并行会话推进，接手先 `stats` 复核）。

## ✅ G30 执行结果（2026-09-21 会话，净增 +7 → completed 12,687）

- **缺口 A（e4 试点）**：11 件考虑、5 件 PASS（0x41c150/0x41b9e0/0x65b4b0/
  0x41c050/0x7ba320）、6 件顺延。判别规则本身 5/5 有效；顺延件全部卡
  **无声明全局**（MEMORY[0xADDR] 形态，E1 生成器盲区，#154）或词汇缺口
  （#152 门控 ptr-int 比较 / #153 C++ switch 提取）。判别定稿与顺延清单
  已沉淀 mech 计划「G30 执行记录」。
- **缺口 B（#150）已闭**：0x50D9C0/D0 receiver=owner(HouseClass*)，YRpp
  bool run 铁证 → HouseClass::IsTechInfiltrated/IsProductionInfiltrated，
  补锚 techInfiltrationFlags@356 / productionInfiltrationFlags@360，
  verify 双 PASS，issue resolved。
- **缺口 C（#151）已闭**：binary 反汇编实证 0x449A40=转发 thunk（槽
  136→槽 135）。裁决 0x4496B0=BuildingClass::CheckState1、0x449A40=
  BuildingClass::CheckState2（与已完成件 TechnoClass::CheckState1/2 同名
  体系），四方同步 + vtable_offsets 540/544 修复，issue resolved。
- **缺口 D 已裁决**：0x77F900 Game::ProcessIdle = 全局函数（38 个调用方
  全在 WOL/网络对话框循环，无 ECX receiver）；0x77D200=孤儿 jmp 别名，
  已正名 j_Game_ProcessIdle。翻译按全局函数形态走，无 receiver 归属问题。
- **缺口 E**：顺延不变。
- **新挂账**：#152（门控 ptr-int 比较词汇缺口，GetResourceID 族 4 件）、
  #153（验证器 C++ switch 词汇缺口，0x500910 实证）、#154（E1 生成器
  MEMORY[0x] 全局声明盲区 = class="" 池最大阻塞）。
- 收尾核对：reconcile dry = 0 phantom；signals 直数 12,687。

## ⚠️ 第 0 优先：缺口总账（G30 会话已修，本节留档）

> G30 会话已按本节执行序完成 A(试点)/B/C/D。E 顺延。下一会话入口 =
> 下方「G30 工作分解」第 1 项（harvest async 批量）+ 第 154 号缺口修复
> （E1 生成器补 MEMORY[0x] 全局声明 → 解锁 class="" 池主体）。

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

**G30 会话新增闭环（同口径复核过）**：

| 项 | 复核法 | G30 会话复核结果 |
|---|---|---|
| 缺口 A 试点 5 件（0x41c150/0x41b9e0/0x65b4b0/0x41c050/0x7ba320） | 逐件 `verify_function` | 5/5 PASS（复跑确认） |
| 缺口 B #150 两件 | `verify_function 0x50d9c0 / 0x50d9d0` + 四方名核对 | 双 PASS；signals/house.hpp/misc 独立块/audit 全一致 |
| 缺口 C #151 槽名 | signals/hpp/def 行/vtable_offsets/ida_function_db + audit | 全一致（见下方漂移补充修复） |
| 缺口 D 0x77D200 | signals 名 + mech 计划记录 | j_Game_ProcessIdle ✓ |
| 顺延件 pending 完整性（14 件） | 注解+pending 标记树内比对 | 14/14 完好，无半翻残留 |

## G30 工作分解（按优先级）

### 1. harvest_loop async 批量跑（G29.1 修复后的主吞吐通道）

- `harvest_loop` 已有 `async=true`（job 框架）+ 写体守卫（#146）+ 载体丢参守卫（#147）。
- pool ~340（dry_run 预览确认），分批 20-30 件/次，batch 间 `reconcile_accounts` 对账。
- 纪律：**同步模式 count>3 禁用**（30s 客户端超时 ≠ 服务器中止，#149 教训）。

### 2. e4 自由函数类形态试点（✅ G30 会话已做：5 PASS + 顺延记账，判别规则回写 mech 计划「G30 执行记录」）

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

### 3. 归属裁决（✅ G30 会话已全部裁决：0x77D200=全局函数无 receiver / #150=IsTechInfiltrated+IsProductionInfiltrated / #151=CheckState1+CheckState2）

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
[x] 缺口总账复核（第 0 优先节：已闭环表逐条一分钟复核）——G30 会话完成
[x] A1 补锚 + e4 类形态试点 + 通过率报告（缺口 A）——5 件 PASS + 顺延根因
    记账（#152/#153/#154）；试点规模 11 考虑（无阻塞件全过），未满 10 件
    纯 PASS 指标的原因 = 池内阻塞密度高，见「G30 执行结果」
[x] stats 复核基线——completed 12,687 直数 = stats 口径
[ ] harvest_loop async 批量 ≥2 波（每波后 reconcile=0）——未做，下一会话
    首项（前置 #154 修复可大幅扩池）
[x] #150/#151 归属裁决落地（缺口 B/C）——双 closed + 复核通过
[x] 收尾六件套——净增首行/reconcile=0/复验/提交(4671c0f2)/AGENTS 刷新/
    g31_prep 未建（改为 g30_prep 执行结果节承载）
```

## G30 核验轮三期：缺口 E 全项处理（2026-09-22，净增 +1 → completed 12,693）

- **E① q204@516/reloadTimer 重叠——已清偿**：q204@516(byte) 为真
  （IsDeployed 0x6EF9E0 读 `(_DWORD*)this+129`）；重叠源 = q202@514
  （csp 填充 int，跨 514-517，同时压 reloadTimer@508 尾与 q204 头）→
  已从 ml+mbn 删除（树内零引用）。WaveClass::Constructor 的 q204 为
  别类同名字段，无涉。
- **E② 1732 双义——已裁决**：232 处访问，Aircraft 侧 cast
  AircraftTypeClass* 作 Type、Unit 侧推断 UnitTypeClass* → 格 join =
  TechnoTypeClass*，即 techno 的 Type 指针 → member_set
  `type`@1732 (原 q6C4)。
- **E③ occupant@36——正名落地（附新证据）**：家族 11 类
  （ObjectClass+Techno/Foot/Unit/Infantry/Aircraft/Building+ParticleSystem/
  Terrain/BuildingLight/Tube）ml+mbn 正名 objectTypeFlags→occupant
  （Mission/Radio 非 Object 派生、@36 语义未证，保留旧名）。
  22 个已完成引用函数批验 21 PASS（0x401B00 经因果隔离实验证实为
  既有失败，与正名无关）。新证据：字段呈多义形态（指针 cast/清 0/
  SetMember09/==54 比较/queue 链）——occupant 仅覆盖指针侧语义。
- **E④ 0x464AC0——已闭环**：binary 铁证 = BuildingTypeClass 主表
  0x7E4570 槽 42(vt+168)（姊妹类共享基实现 0x716150）；addRef 误名废；
  PlaceAnywhere 字段 YRpp 权威已锚 @5891；翻译
  `PlaceAnywhere || ValidatePath(...)` verify PASS → completed。
  ValidatePath(0x716150) 签名扩 3 参，其假 stub `return true` 被
  trivial-stub-mismatch 守卫正确拦截转 pending（记账后续真翻）。
- **E⑤ SelectWeapon/三大件——前置全就位，尾包 #157**：target 参数
  已在 C++ 声明（G28 遗留半成品）；7 个虚槽锚二进制直读入
  vtable_offsets（GetOwningHouse:132/CanTargetHouse:744/SelectWeaponSlot:
  1016 等）；issue #157 记载剩余路径（WeaponStruct/HouseClass 成员面
  扩展 + wildcard-advisory 路线）。
- 收尾：12 件回归全 PASS；normalize 自检 18 全 PASS；reconcile=0。

## G30 核验轮补充修复（2026-09-22 复查）

### 核验轮二期：超时根治 + #152/#153/#154 全闭环（净增 +5 → completed 12,692）

1. **并行 verify 超时根治（双管）**：① 热点定位 = 每次 verify 全新进程重扫
   全部 hpp（vtable 头解析 3.8s + globals map 3.0s，真实验证仅 1.9s）→
   verify_execution_flow 加 hpp 指纹缓存（.omo/cache/verify_maps.json，
   path+mtime+size 键控，行为等价），单次 14s→6s、并行双调 4.4s（原 30s 超时）；
   ② async 通路本就存在（schema async 字段 → job_id → job_status），本会话
   实证 verify-3 全链可用。纪律：批内 verify 用 async 或缓存热态串行。
2. **#152 闭环（不改门控）**：GetResourceID 族 4 件 receiver 实为 RTTI 索引
   （0..7），改型自由函数 `int GetResourceID*CSF(int rtti)` 免 cast，4/4 PASS。
3. **#153 闭环（诊断修正）**：「switch 拍平」系 #156 双 def 行解析失败假象；
   C++ switch 提取本支持 case 边。剩余不对称 = `= &this->X` 伪 READ（IDA LEA
   零事件）→ efv_cpp_events 取址零事件词汇（三种无歧义形态）。0x500910 PASS。
   normalize 未动：其非 marker 序不变量自检曾逮住一版 READ-only 块消除方案
   并回退（自检防线有效）。
4. **#154 闭环（生成器 + 定向解锁）**：gen_e4_materialize E1 收集补
   MEMORY[0x] 与无索引 dword_/byte_ 等标签（gaddr 反查名 / DataGlobal_%X
   合成 / 前缀定型）；e4_globals.hpp 定向追加 12 条（B1D4A0-B8 音频主题池、
   8A3838 EMPulse、89E0F0-104 CaptureManager 池）。0x720940 的
   stru_830620.__pad_579C[N] 结构体成员式全局仍不在覆盖内（记留）。
5. **新账**：#156（replace_pseudocode 双 def 行，已修，重启生效）+
   #155（harvest FAIL 回滚不净，0x7C8992 已手工恢复；琐碎桶已干涸：
   ≤8 行 0 件、≤14 行 1 件——harvest 通道暂无吞吐对象）。
   服务器进程仍跑旧代码，**下次会话首件事 = 重启 mcp_translate_server**。

- **vtable_offsets.json 残余漂移**（G30 会话修复 540/544 时遗留）：
  Return450B/C 误挂 500/504 → 二进制主表 0x7E3EBC 直读归位 520/524
  （500/504 实为 OverrideMission_SyncLog/CheckOccupantState）；
  CheckMissionStatus 528 → 548（528 实为 0x44ACF0）。该文件为 gitignore
  本地元数据，随核验轮修正不入库。
- verify 串行纪律再确认：并行 verify_function 双调 30s 超时（服务端仍
  执行完毕），复验一律串行。
