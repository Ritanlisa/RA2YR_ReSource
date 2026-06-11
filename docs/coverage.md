# 子系统覆盖度详情

## 编译状态

| 指标 | 数值 |
|--------|-------|
| 可编译源文件 | 70 |
| 总头文件 | 103 |
| 总代码行数 | ~17,000 (headers ~10,500 + source ~6,500) |
| 编译错误 | **0** |
| 编译警告 | **0** |
| 已实现函数 | **~140** (~200+ stubs/empty) |
| TODO/FIXME 标记 | **~260** (source 210 + headers 50) |
| IDA 命名 | **~10,272 / 19,067 (53.9%)** — 含 7,576 `::` + 2,246 全局 + 450 其他 |
| JSON 数据库 | **functions.json (15MB)** — 19,067 函数元数据 (调用约定/参数/返回类型/分类) |
| MIX 格式支持 | RA2 加密 + 扩展无加密 + TD 传统 (全部验证) |
| EXE 骨架 | **WinMain + Win32窗口 + DirectDraw7初始化 + MIX文件加载 + SHP渲染 + 主菜单系统** |
| **Hook 框架** | **hook_dll.dll** — 页面级内存事务 + 栈劫持影子对拍 |
| **REVERSE 管道** | **gen_reverse_hooks.py** — 自动扫描→完成检查→依赖验证→生成钩子 |
| **已标记函数** | **~32** 个 REVERSE 标记 (39 个已完成) |
| **Headless 服务器** | **TCP :25400** — STATS/MEM/ELEMENTS/CLICKAT/QUIT 等 22 命令 |

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

| # | 类 | 文件 | 未知数 | 优先级 | 状态 |
|---|------|------|--------|--------|------|
| 1 | **TechnoClass** | `object/techno.hpp` | **35** | P0 | ✅ 已验证 |
| 2 | **FootClass** | `object/foot.hpp` | **41** | P0 | ✅ 已验证 |
| 3 | **BuildingClass** | `structure/building.hpp` | **17** | P0 | ✅ 已验证 |
| 4 | **ObjectClass** | `object/object.hpp` | **4** | P1 | ✅ 已验证 |
| 5 | **InfantryClass** | `structure/infantry.hpp` | **6** | P1 | ✅ 已验证 |
| 6 | **UnitClass** | `structure/unit.hpp` | **3** | P1 | ✅ 已验证 |
| 7 | **AircraftClass** | `structure/aircraft.hpp` | **8** | P1 | ✅ 已验证 |
| 8 | RadarClass | `system/radar.hpp` | 53 | P2 | ⏳ |
| 9 | HouseClass | `house/house.hpp` | 52 | P2 | ⏳ |
| 10 | CellClass | `system/cell.hpp` | 50 | P2 | ⏳ |
| 11 | Locomotion subs | `misc/locomotion.hpp` | 33 | P2 | ⏳ |
| 12 | Audio | `misc/audio.hpp` | 23 | P2 | ⏳ |
| 13 | ParticleClass | `entity/particle.hpp` | 22 | P2 | ⏳ |
| 14 | SidebarClass | `ui/sidebar.hpp` | 21 | P3 | ⏳ |
| 15 | DisplayClass | `render/display.hpp` | 19 | P3 | ⏳ |
| 16 | MapClass | `system/map.hpp` | 20 | P3 | ⏳ |
| 17 | SessionClass | `network/session.hpp` | 19 | P3 | ⏳ |
| 18 | TeamClass | `team/team.hpp` | 18 | P3 | ⏳ |
| 19 | 其他 (37 类) | 各文件 | ~110 | P4 | ⏳ |
| | **合计** | **55 类** | **~523** | | |

## RA2 Mission 系统关键发现

- BuildingClass/InfantryClass/UnitClass/AircraftClass 的 Mission_* 虚函数仅为简单 thunks (返回常量如 6/1824)
- 实际生产逻辑在 `CreateUnit` (由函数指针表调用), 不在 Mission 状态机中
- RA1 风格的状态机仅作参考实现, 不与二进制完全一致
- 每个类的 vtable[13] 是 PowerDrainUpdate (电力消耗), vtable[9] 是 Update (每帧更新)


