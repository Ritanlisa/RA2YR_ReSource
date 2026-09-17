# 子系统覆盖度详情

> ⚠ 本文档的子系统细节（vtable 解码、类覆盖清单）为早期考证快照，仍然有效；
> **当前总体进度以 `AGENTS.md` 状态表和 `docs/roadmap_post_csp.md` 执行日志为权威**
> （2026-09-16 **G16 终态口径**：MCP completed **11,892** / pending **4,719**——**诚实口径**，
> 全 CFG 验证；G16 = #108/#109 vtable 槽双闭环 + TechnoClass 双区段重建 + BulletType INI 全表 +
> 手动 H5×3。**G16 末全池 exec-flow 回归：11,891/11,892 PASS**，唯一 FAIL =
> BulletTypeClass::GetWarhead（ml 旧大写条目残留，G17 P0 修复，见 docs/g17_prep.md））。

## 翻译总进度（G16 终态 + 体检，2026-09-16）

| 指标 | 数值 |
|--------|-------|
| MCP completed | **11,892**（诚实口径：G15 末 11,888 + G16 手动 H5×3 + 舰队 building×1，全 CFG 验证） |
| MCP pending | **4,719**（构成：too-long/goto H5 主体 ~2,365 + gap2 系统性 ~1,043（#50/#55 等生成器层裁决）+ e4 全局命名阻塞 ~390（#67-#71）+ building.cpp 70（#4/#17/#23）+ FAIL-recycle 255 等，见 roadmap「Phase H」+ G16 日志） |
| 全池 exec-flow 回归 | **11,891 PASS / 1 FAIL**（2026-09-16 首次全量复跑，46 分钟，`.omo/pool_verify_results.json`；FAIL=0x46C820 GetWarhead，定因 member_lookup BulletTypeClass 旧大写三件套 Color@60/Trailer@64/ROT@68 残留与 G16 真值 724/728/732 并存——P0 顺带清理） |
| marker&completed 矛盾 | **0**（G13 readiness 全检 READY 持续维持：无幽灵完成/无双 def/tag 同步） |
| src 函数体覆盖 | ~17,880 / 19,133（93.5%；未翻译函数以 IDA 原始反编译活代码块占位，裁决 v2） |
| 偏移→OO 重写 | rewritten 4,468 / unmapped 5,610（G14 修正版 refresh 口径，分母随已译体退出波动） |
| vtable_offsets | 398+ 类（G14 +11 真新增槽位：ObjectClass@124 IsAboveScreenMargin 二进制定案、InfantryClass@1156 ValidatePlacement、AircraftClass@684 等） |
| member_lookup | 1,651 类（G14 +118 g14 项修正版：YRpp 声明序+til 锚定；43 误位项已移除；漂移族账本 .omo/g14_drift_ledger.txt 33 类诚实剔除） |
| signals.globals | 13,453+ 地址（G14 DataGlobal +14+7：IQ/GameSettings/WOL 键表 blob 头族 + -1 哨兵族 + EVA/音频 blob） |
| HASH_TYPE_MAP | 12 条（G13 定案维持；hash-type 类全部清零） |
| YRpp submodule | **已修复**（gitlink + 浅克隆，headers 在 YRpp/ 根——A1 三源证据腿就位） |

## 编译状态

| 指标 | 数值 |
|--------|-------|
| 可编译源文件 | ~265（~175 .hpp + ~135 .cpp，另 src/e4 桶 565 + src/_gap2 等） |
| 编译错误 | **0**（基线裁决 v2：未翻译伪码块以 IDA 原码活代码占位） |
| gamemd.exe | 产出 `build_win/Debug/gamemd.exe`（/FORCE:UNRESOLVED 容忍 682 历史未解析 stub 债） |
| IDA 命名 | **13,437 / 19,067 (70.5%)** — 822 sub_* 已自动命名 (Task 19) |
| IDA 类 header | **1,120 / 1,120 (100%)** — 所有类成员变量已解析，0 unknown_, 0 sub_* |
| JSON 数据库 | **functions.json (15MB)** — 19,067 函数元数据；**signals.json** = 权威函数元数据（completed/globals/_by_name） |
| MIX 格式支持 | RA2 加密 + 扩展无加密 + TD 传统 (全部验证) |
| EXE 骨架 | **WinMain + Win32窗口 + DirectDraw7初始化 + MIX文件加载 + SHP渲染 + 主菜单系统** |
| **Hook 框架** | **hook_dll.dll** — 页面级内存事务 + 栈劫持影子对拍 |
| **REVERSE 管道** | **gen_reverse_hooks.py** — 自动扫描→完成检查→依赖验证→生成钩子 |
| **已标记函数** | **~32** 个 REVERSE 标记 (2 Inject 活跃, 39 None) |
| **Headless 服务器** | **TCP :25400** — STATS/MEM/ELEMENTS/CLICKAT/QUIT 等 22 命令 |
| **ra2-translate MCP** | 22 工具全流程（见 docs/mcp_tools.md）；HTTP 127.0.0.1:13399 + stdio |

## 函数实现覆盖

```
AbstractClass/Core  ✅ 26 COM + 14 engine virtuals
ObjectClass         ✅ ~28 函数 (Put/Remove/Destroy/Damage/Selection/Sell/Flash etc.)
MissionClass        ✅ QueueMission/NextMission/ForceMission/Mission_Revert
RadioClass          ✅ SendToFirstLink/SendCommand/SendCommandWithData/SendToEachLink
TechnoClass         ✅ Update文档化 + CreateUnit 10-section pipeline + ~26函数
FootClass           ✅ MovementAI (7-section), Mission×4, Destroyed, MoveTo, StopMoving
BuildingClass       ✅ Vtable全覆盖(19/19), Mission×4(RA1参考), Place, GetExitCoords
InfantryClass       ✅ Constructor + 3 Mission + Vtable关键解码(Load/Update/PowerDrain)
UnitClass           ✅ Constructor + 3 Mission + Vtable关键解码(Load/Update/PowerDrain)
AircraftClass       ✅ Constructor + 5 Mission + Vtable关键解码(Load/Update)
System              ✅ MIX reader (3 format verified), blowfish engine, Westwood key
Entry Point         ✅ WinMain + Win32窗口 + DirectDraw7 Init + 游戏循环骨架
Surface             ✅ DSurface Blit/FillRect/Lock/Unlock (DirectDraw7 后端)
TextRenderer        ✅ GDI文字→DDraw表面 (16bpp RGB565)
Gadget              ✅ GadgetClass + TextButtonClass + LabelClass
Dialog              ✅ DialogClass (背景+按钮+鼠标事件)
MainMenu            ✅ 主菜单屏幕 (基本交互)
```

## 类 Vtable 覆盖状态

| 类 | Load[5] | Update[9] | PowerDrain[13] | Mission thunks | 其他 |
|-----|---------|-----------|-----------------|-----------------|------|
| BuildingClass | ✅ 文档 | ✅ 文档 | ✅ 文档 | ✅ (6B each) | GetExitCoords,TogglePrimaryFactory,OnObjectExpired |
| InfantryClass | ✅ 命名 | ✅ 命名 | ✅ 文档 | ✅ | — |
| UnitClass | ✅ 命名 | ✅ 命名 | ✅ 文档 | ✅ | — |
| AircraftClass | ✅ 命名 | ✅ 文档 | 委托Building | ✅ | TechnoClass_Update→Building |

### BuildingClass Vtable [3] (0x7E3EBC) 全解码

| Idx | 函数 | 大小 | 状态 |
|-----|------|------|------|
| [5] | BuildingClass_LoadFromStream | 870B | 7步结构 |
| [6] | BuildingClass_Size/GetSizeMax | 187B | COM |
| [9] | BuildingClass_Update | 327B | 4段电力 |
| [10] | BuildingClass_OnObjectExpired | 536B | 指针清理 |
| [11] | Mission_Construction thunk | 6B | ret 6 |
| [12] | Mission_Guard thunk | 6B | ret 1824 |
| [13] | BuildingClass_PowerDrainUpdate | 571B | 16定时器+16标志 |
| [18] | BuildingClass_GetExitCoords | 84B | ✅ 已实现 |
| [19] | BuildingClass_TogglePrimaryFactory | 121B | 出口坐标 |

## IDA-Confirmed Class Hierarchy

### AbstractClass — The Root

Constructed at `0x410170`. 4 vtable pointers, 2 RTTI-confirmed base classes.

### ObjectClass → FootClass Constructor Chain

| Constructor | Address | Size |
|-------------|---------|------|
| AbstractClass::AbstractClass | 0x410170 | ~200B |
| ObjectClass::ObjectClass | 0x5F3900 | ~500B |
| TechnoClass::TechnoClass | 0x6F2B40 | ~1600B |
| FootClass::FootClass | 0x4D31E0 | ~1000B |

### BuildingClass (Direct TechnoClass inheritance)

BuildingClass constructor at 0x43B680. 4 vtable pointers:
- `vtable[0]` = `0x7E3EBC`, `vtable[1]` = `0x7E3EA0`, `vtable[2]` = `0x7E3E98`, `vtable[3]` = `0x7E3E90`

### Other Key Constructors

| Constructor | Address | Size |
|-------------|---------|------|
| AnimClass::AnimClass | 0x421EA0 | 2162B |
| TechnoClass::CreateUnit | 0x423AC0 | 4234B |
| SuperWeapon::CreateUnits | 0x445F80 | 4160B |

## YRpp vt_entry 偏移映射

### 公式

```
vt_entry_XXX → index = XXX / 4 → vtable[0] + XXX → 读取函数指针 → 重命名为 ClassName::MethodName
```

### 关键发现

1. **vtable[0] 实际大小远超预期**: BuildingClass 主 vtable 有 **322** 条目 (之前误认为 100)，是从 AbstractClass 开始的完整累积表
2. **所有 MI 游戏类共享同一 vtable[0] = 0x7E3EBC**: BuildingClass/TechnoClass/FootClass/ObjectClass/MissionClass 等共用 MSVC 的完整 vtable 块
3. **简单继承类各有独立 vtable**: XSurface(0x7E2104), DisplayClass(0x7E6114), ObjectTypeClass(0x7E2868), MPBattleClass(0x813F60) 等

### 核心类 vtable 地址

| 类 | vtable[0] | 条目数 | 备注 |
|-----|-----------|--------|------|
| BuildingClass | 0x7E3EBC | 322 | 完整累积 vtable (MI 共享) |
| InfantryClass | 0x7EB058 | 343 | |
| UnitClass | 0x7F32FC | 122 | |
| DisplayClass | 0x7E6114 | — | 简单继承 |
| XSurface | 0x7E2104 | 38 | 简单继承 |
| ObjectTypeClass | 0x7E2868 | — | 简单继承 (共享) |
| TechnoTypeClass | 0x7E2868 | — | 与 ObjectTypeClass 共享 |
| MPBattleClass | 0x813F60 | — | .data 段 |

## 类成员变量 Inventory

**状态：全部完成。** 1,120 个 IDA 类的所有成员变量已解析并生成 C++ header，0 unknown_ 残留，0 sub_* 匿名占位符。

| # | 类 | 文件 | 状态 |
|---|------|------|------|
| 1 | **TechnoClass** | `object/techno.hpp` | ✅ 已完成 |
| 2 | **FootClass** | `object/foot.hpp` | ✅ 已完成 |
| 3 | **BuildingClass** | `structure/building.hpp` | ✅ 已完成 |
| 4 | **ObjectClass** | `object/object.hpp` | ✅ 已完成 |
| 5 | **InfantryClass** | `structure/infantry.hpp` | ✅ 已完成 |
| 6 | **UnitClass** | `structure/unit.hpp` | ✅ 已完成 |
| 7 | **AircraftClass** | `structure/aircraft.hpp` | ✅ 已完成 |
| 8 | HouseClass | `house/house.hpp` | ✅ 已完成 |
| 9 | CellClass | `system/cell.hpp` | ✅ 已完成 |
| 10 | RadarClass | `system/radar.hpp` | ✅ 已完成 |
| 11 | 其他 (1,110 类) | 各文件 | ✅ 已完成 |
| | **合计** | **1,120 类** | **100%** |

## RA2 Mission 系统关键发现

- BuildingClass/InfantryClass/UnitClass/AircraftClass 的 Mission_* 虚函数仅为简单 thunks (返回常量如 6/1824)
- 实际生产逻辑在 `CreateUnit` (由函数指针表调用), 不在 Mission 状态机中
- RA1 风格的状态机仅作参考实现, 不与二进制完全一致
- 每个类的 vtable[13] 是 PowerDrainUpdate (电力消耗), vtable[9] 是 Update (每帧更新)


