# RA2YR ReSource — 从 gamemd.exe 重建红色警戒2/尤里的复仇源码

## 项目目标

逆向工程完整的 `gamemd.exe` C++ 源码并重建为独立可执行文件。

目标文件是 32 位 Windows PE，由 MSVC 6.0 编译，约 7.6MB，基址 0x400000，含 19,059 个函数。

### 两阶段目标

| 阶段 | 目标 | 产出 |
|------|------|------|
| **Phase 1** (当前) | 完整逆向重建，功能对等原版 | 可直接替换的 Win32 EXE (`gamemd.exe`) |
| **Phase 2** (远期) | 现代化重构 | 跨平台现代游戏引擎 |

Phase 2 现代化方向：
- 现代渲染引擎 (替代 DirectDraw/D3D，支持高分辨率)
- 强化学习 AI Bot (替代原版规则AI)
- 现代模组系统 (原生插件架构，不再需要 DLL 注入/Syringe)
- 现代 3D 模型支持 (替代 Voxel/SHP)

当前构建输出: 静态库 `gamemd_core` + EXE `gamemd.exe`，使用 CMake + C++20 编译。

---

## 编译状态 (当前)

| 指标 | 数值 |
|--------|-------|
| 可编译源文件 | 64 |
| 总头文件 | 96 |
| 总代码行数 | ~13,500 (headers ~8,000 + source ~5,500) |
| 编译错误 | **0** |
| 编译警告 | **0** |
| 已实现函数 | **~120** (~200+ stubs/empty) |
| TODO/FIXME 标记 | **252** (source 205 + headers 47) |
| IDA 命名 | **129 函数 + 35 全局变量 + 3 struct 类型** |
| MIX 格式支持 | RA2 加密 + 扩展无加密 + TD 传统 (全部验证) |
| EXE 骨架 | **WinMain + Win32窗口 + DirectDraw7初始化 + 游戏循环** |

### 构建命令

```bash
cmake -B build -G "Visual Studio 17 2022" -A Win32
cmake --build build
```

---

## 四重参考源 - 协同定位

四种信息来源各有强弱，**三角交叉验证**是正确方法论。不要迷信任何一个单一来源。

| 来源 | 用于 | 不做 |
|------|------|------|
| **RA1 源码** (CnC_Red_Alert/CODE/) | **框架/架构**: 类继承链、虚函数模式、Mission 状态机、INI 读取流程、对象管理（TFixedIHeapClass/CCPtr）、TARGET 编解码、COORDINATE 数学、**MIX 读取逻辑** | **直接复制成员布局**: RA2 偏移不同、RA2 有 MI 导致布局变化 |
| **YRpp** (~150 头文件) | **成员偏移/虚函数索引**: 运行期实测，知道每个成员在对象中的精确位置、虚函数在 vtable 中的顺序 | **业务逻辑实现**: YRpp 是声明层，不含函数体 |
| **IDA Pro** (gamemd.exe MCP) | **二进制验证**: 构造函数字节级确认成员初始化顺序、调用图追踪函数实现、全局变量地址/类型确认 | **反编译伪代码**: Hex-Rays 输出有误（类型推断错误、结构体大小不准确、优化导致代码变形），仅作参考 |
| **cnc-ddraw** (./cnc-ddraw) | **渲染接口参考**: DirectDraw/DirectDrawSurface 接口实现、Blit/Lock/Unlock 调用模式、Surface 生命周期管理、窗口化/全屏切换逻辑。**调试验证阶段的运行时伴生 DLL**（EXE 调用标准 DirectDraw API，cnc-ddraw 作为 `ddraw.dll` 提供现代渲染后端） | **最终集成**: Phase 2 将被现代渲染引擎完全取代 |

### 工作方法

1. 用 **RA1 源码** 理解"代码长什么样"——类结构、构造函数写法、虚函数模式、MIX 读取逻辑
2. 用 **YRpp** 填入 RA2 实际的成员偏移和类型
3. 用 **IDA** 对关键函数进行二进制验证，修正 YRpp 的错误
4. 用 **cnc-ddraw** 理解 DirectDraw 接口调用模式，在调试阶段作为兼容层运行 EXE

### cnc-ddraw 在项目中的角色

```
Phase 1 (当前):
  gamemd.exe ──DirectDraw API──▶ ddraw.dll (cnc-ddraw) ──▶ OpenGL/D3D9/GDI ──▶ 屏幕
                                  ↑
                                  用于现代系统兼容运行

Phase 2 (远期):
  gamemd.exe ──▶ 现代渲染引擎 (Vulkan/D3D12) ──▶ 屏幕
                  ↑ cnc-ddraw 被完全取代
```

### RA1 vs. RA2: 关键差异

| Aspect | RA1 (CnC_Red_Alert) | RA2/YR (gamemd.exe) |
|--------|---------------------|---------------------|
| Compiler | Watcom C++ (DOS era) | MSVC 6.0 |
| Class hierarchy | Single-inheritance, one vtable per object | Multiple inheritance, **4 vtable pointers** at AbstractClass level |
| COM layer | None | 4 base interfaces (2 RTTI-confirmed, 2 reconstructed) |
| Rendering | 2D isometric SHP sprites | 3D Voxel + 2D SHP |
| Coordinate system | COORDINATE (32-bit, 2D leptons) | CoordStruct (X/Y/Z, any precision) |
| Movement | DriveClass track-based | ILocomotion COM interface |
| Vessels | Separate VesselClass | Merged into UnitClass with locomotion types |
| Fixed-point | `fixed` (16.16) | Floating-point `float` |
| Health | `short` (0–255) | `int` (wider range) |
| Sound | Miles Sound System | BINK/Miles |
| MIX encryption | RSA-wrapped Blowfish key (PKStraw) | Direct Blowfish key_source (Westwood algorithm) |

**What CAN be borrowed from RA1:**
- TARGET encoding (24-bit mantissa + 8-bit exponent) — identical
- Coord_Cell / Cell_Coord conversion math
- Mission state machine logic (Mission_Attack, Mission_Move, etc.)
- INI reading patterns (Read_INI virtual method, CCINIClass)
- Object type/instance dual-hierarchy design
- Flat fixed-heap memory model (TFixedIHeapClass)
- Radio message protocol (building ↔ unit communication)
- **MIX file reading logic** (extended format detection pattern)

**What CANNOT be borrowed from RA1:**
- Any member layout (RA2 offsets are different)
- COM interface code (nonexistent in RA1)
- Rendering (RA2 uses Voxel)
- Locomotion (RA2 uses COM ILocomotion, not DriveClass)
- Network layer (RA2 uses UDP/IP, RA1 used IPX/modem)
- MIX encryption: RA1 uses RSA+Blowfish (PKStraw), RA2 uses Westwood key source + Blowfish

---

## 函数实现覆盖 (当前状态)

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
```

### 类 Vtable 覆盖状态

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

### 关键 IDA 函数命名 (共129函数)

| IDA 名称 | 地址 | 大小 | 说明 |
|----------|------|------|------|
| ObjectClass_GetCoords | 0x5F65A0 | 33B | vtable[18], 坐标复制 |
| BuildingClass_MissionDispatch | 0x5B35E0 | 101B | vtable[122], 部署分发 |
| ProductionCompletionCallback | 0x424CE0 | 543B | 音频/发射动画/EVA |
| CreateUnitOnCompletion | 0x424F00 | 583B | 地基/SW/单元创建 |
| ConstructionPositionTracker | 0x425670 | 1688B | 6步位置跟踪 |
| TechnoClass_Update | 0x6F3F40 | — | 父更新, 6 VFX子系统 |
| FootClass_MovementAI | 0x4DA530 | 2520B | 7段移动, 138 BBs |
| AudioController_Start | 0x750D40 | — | 音频控制 |
| Coord_To_Cell | 0x565730 | — | 坐标→格子 |
| Cell_GetGroundHeight | 0x578080 | — | 地面高度 |
| Random_Range | 0x65C7E0 | — | 随机数 |
| UnitClass_Create | 0x6B4A50 | — | 单元创建 |
| Cell_IsWalkable | 0x6B5F80 | — | 可通行检查 |
| Power_TimerProcess | 0x4A1D50 | — | 电力计时 |
| Power_FlagProcess | 0x4A1CA0 | — | 电力标志 |
| **入口点/窗口系统 (新增)** | | | |
| WindowCreation_Init | 0x777C30 | ~500B | 窗口类注册+CreateWindowExA, 全屏/调试双模式 |
| WindowProc_Main | 0x7775C0 | 1213B | 主窗口过程, 81 BBs, WM_CREATE/DESTROY/PAINT |
| GameLoop_MessagePump | 0x53E770 | ~800B | 自定义PeekMessage/DispatchMessage, CritSec保护 |
| COM_RegisterClasses | 0x6BB390 | ~800B | COM class object 注册 (TypeLib/ProgID/InprocServer32) |
| CopyProtection_CheckLauncher | 0x49F5C0 | ~80B | 启动器Mutex检测 ("48BC11BD...") |
| CopyProtection_NotifyLauncher | 0x49F620 | ~250B | 启动器通知+等待响应, 自定义消息 0xBEEF |

---

## MIX 文件读取器 (Phase 3 完成)

### 通用格式检测算法 (RA1 MixFileClass 逻辑)

```
读取前2字节 = first_field
if first_field == 0 → 扩展格式 (RA2/MO)
    读取后2字节 = flags
    if flags & 0x0002 → Blowfish加密
        读取 key_source(80B) → Westwood密钥计算(56B) → Blowfish解密头+索引
    else → 无加密扩展格式(falls through to TD header)
else → TD传统格式 (rewind, 读取原始header)
```

### 已验证格式

| 格式 | 特征 | 测试文件 | 结果 |
|------|------|---------|------|
| RA2 加密 | first=0, flags=0x0003 | expandmd01.mix (33文件) | ✅ RULES.INI 确认 |
| RA2 校验 | first=0, flags=0x0001 | — | ✅ 支持 |
| 扩展无加密 | first=0, flags=0x0000 | expandmo04.mix (66文件) | ✅ 数据可读 |
| TD 传统 | first≠0 | test.mix | ✅ 端到端验证 |

### Blowfish 组件

| 组件 | 常量 | 状态 |
|------|------|------|
| BlowfishEngine | 18 P-array + 1024 S-boxes | ✅ Encipher/Decipher 回合验证 |
| Westwood 密钥计算 | RSA 模幂运算 + Barrett 约简 | ✅ Base64 公钥 "AihRvNo..." → 56B 密钥 |
| 头解密 | 8B 块 + reverse32 | ✅ 已验证 expandmd01/language/WDT |

### 扩展格式无加密 MIX 分析

- 前 4 字节 `0x00000000` (first=0, flags=0) 是 RA1 扩展格式，非特殊标记
- Offset 4 开始是标准 TD 格式 (count + body + index)
- 内部文件**未加密**——二进制游戏数据，结构清晰
- 扩展格式 zero-flags 被某些模组（如基于 Ares/Phobos DLL注入的项目）用于容器级混淆
- DLL 注入扩展走原版 Mix 加载路径，格式完全兼容

---

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

Key vtable entries (IDA identified):
| Vtable Index | Address | Function |
|-------------|---------|----------|
| [5] | 0x453E20 | BuildingClass factory/creation (870B) |
| [24] | 0x710410 | Ptr clear-if-equal helper (77B) |
| [44] | 0x453840 | GetExitCoords (550B) |
| [46] | 0x449410 | Building flag bitfield (46B) |

### Other Key Constructors

| Constructor | Address | Size |
|-------------|---------|------|
| AnimClass::AnimClass | 0x421EA0 | 2162B |
| TechnoClass::CreateUnit | 0x423AC0 | 4234B |
| SuperWeapon::CreateUnits | 0x445F80 | 4160B |

---

## Confirmed Global Variables (IDA 命名)

| IDA Name | Address | Type | Notes |
|----------|---------|------|-------|
| `CurrentFrame` | 0xA8ED84 | `int` | Frame counter |
| `RulesClass_Instance` | 0x8871E0 | RulesClass* | Global game rules |
| `BuildingTypeClass_Array` | 0xA83D84 | BuildingTypeClass*[] | Building type table |
| `HouseClass_Array` | 0xA8022C | HouseClass*[] | House instances |
| `HouseClass_Count` | 0xA80238 | int | House count |
| `FactoryClass_Array` | 0xA8EC1C | BuildingClass*[] | Factory buildings |
| `FactoryClass_Count` | 0xA8EC28 | int | Factory count |
| `MCV_DeployModeEnabled` | 0xA8EB7F | bool | MCV deploy toggle |
| `RandomState_Seed` | 0xA8B230 | int | RNG state |
| `Map_MaxHeight` | 0x89A1B4 | int | Max map height |
| `Map_CellHeight` | 0x89A1C0 | int | Cell height delta |
| `Map_InvalidCoord_X/Y/Z` | 0x89A178/7C/80 | int[3] | Invalid map coord |
| `Map_BottomRightCell` | 0xB0B788 | CellStruct | Map boundary |
| `Direction_X_Offsets` | 0x89F688 | int16[8] | X direction offsets |
| `BuildingClass_InstanceArray` | 0xB0F4EC | BuildingClass*[] | Build instances |
| `BuildingTypeClass_AnimTable` | 0xB054D4 | — | Anim lookup table |
| `BuildingLoadQueue_*` | 0xB0E840+ | queue | Load queue |
| **入口/窗口系统 (新增)** | | | |
| `WindowName` | 0x849F48 | char[] | 窗口类名 "Yuri's Revenge" |
| `g_hWnd` | 0xB73550 | HWND | 主窗口句柄 |
| `g_hInstance` | 0xB732F0 | HINSTANCE | 实例句柄, WinMain设置 |
| `g_hIcon` | 0xB7354C | HICON | 图标句柄 (IDI #0x5D) |
| `g_hCursor` | 0xB73548 | HCURSOR | 光标句柄 (IDC #0x68) |

---

## Master TODO (优先级排序)

### P0 — EXE 骨架 (已完成)

| # | 描述 | 文件 | 估算行数 | 状态 |
|---|------|------|----------|------|
| P0-1 | WinMain 入口点 + 命令行解析 | `app/main.cpp` | ~30 | ✅ |
| P0-2 | CMake 添加 add_executable 目标 + 链接 gamemd_core | `CMakeLists.txt` | ~15 | ✅ |
| P0-3 | Win32 窗口创建 + 消息循环 | `app/main.cpp` | ~50 | ✅ |
| P0-4 | 游戏主循环骨架 (Init→Update→Render→Shutdown) | `app/game_loop.cpp` | ~60 | ✅ |
| P0-5 | DirectDraw 7 初始化 (Primary Surface + Back Buffer + Clipper) | `app/ddraw_init.cpp` | ~100 | ✅ |

### P1 — 核心游戏管线 (阻塞级)

| # | 描述 | 文件 | IDA地址 | 估算行数 |
|---|------|------|---------|----------|
| P1-1 | CreateUnit deploy animation Section 7 (sub_425670 弹坑/烟雾/部署动画) | `techno.cpp:560-593` | 0x423C24 | ~200 |
| P1-2 | CreateUnit final unit creation Section 10 (BuildingClass_MissionDispatch + exit cell) | `techno.cpp:770-815` | 0x424938 | ~150 |
| P1-3 | ProductionCompletionCallback 完整实现 (音频+特殊建筑发射动画) | `techno.cpp:833-900` | 0x424CE0 | ~150 |
| P1-4 | CreateUnitOnCompletion 完整实现 (地基偏移/SW特效/单元创建) | `techno.cpp:913-969` | 0x424F00 | ~200 |
| P1-5 | ConstructionPositionTracker 完整实现 (6步坐标跟踪/角度计算) | `techno.cpp:984-1032` | 0x425670 | ~250 |
| P1-6 | CreateUnitAtCoordsStandard + Timed (候选过滤→UnitClass_Create) | `techno.cpp:1048-1090` | 0x6B59A0/6B5C90 | ~200 |
| P1-7 | BuildingClass_Mission_Construction 动画轮询+工厂协调 | `building.cpp:101-161` | — | ~50 |
| P1-8 | BuildingClass_Mission_Selling 动画+MCV undeploy+退款 | `building.cpp:168-235` | — | ~80 |
| P1-9 | FootClass::Destroyed 乘客弹出+爆炸动画+乘员生成 | `foot.cpp:338-370` | — | ~80 |
| P1-10 | BuildingClass::Place 建筑物放置最终化 | `building.cpp:490-523` | — | ~50 |

### P2 — IDA 翻译 (解锁子系统)

| # | 描述 | 文件 | IDA地址 | 估算行数 |
|---|------|------|---------|----------|
| P2-1 | MapClass 18个stub函数 (DamageArea, Pathfinding_Find, Reveal) | `map.cpp` | — | ~400 |
| P2-2 | SmokeUpdate 完整实现 (1540B, damage smoke/sink) | `techno.cpp:482-510` | 0x414BB0 | ~100 |
| P2-3 | BuildingClass::Update 完整实现 (电力/C4/雷达更新) | `building.cpp` | 0x442C40 | ~200 |
| P2-4 | BuildingClass::PowerDrainUpdate 完整实现 (16定时器+16标志) | `building.cpp` | 0x454260 | ~150 |
| P2-5 | BuildingClass_LoadFromStream 完整反序列化 | `building.cpp` | 0x453E20 | ~250 |
| P2-6 | TechnoClass::Update 完整父更新 (6 VFX子系统初始化) | `techno.cpp:1093+` | 0x6F3F40 | ~150 |
| P2-7 | VFX子系统链: sub_6AF1A0/sub_6B6C90/sub_4717D0/sub_6292B0/sub_71A4E0/sub_41D380 | `techno.cpp` | 多个 | ~300 |
| P2-8 | 部署特效: sub_489280(fire)/sub_48A620(smoke)/sub_6D2790(crater) | `techno.cpp` | 0x489280/48A620/6D2790 | ~150 |
| P2-9 | SelectAutoTarget 完整实现 (cell occupier迭代+Evaluate_Object评分) | `techno.cpp:283-362` | — | ~100 |
| P2-10 | vt_entry函数集 (240/244/248/292/456/488/436/108/132/D8/1E8/472) | 多个文件 | 多个 | varies |
| P2-11 | BuildingClass_Mission_Repair 修复合规逻辑 (金钱扣除+治疗) | `building.cpp:242-355` | — | ~60 |
| P2-12 | BuildingClass_Mission_Missile 核弹GPS动画+子弹发射 | `building.cpp:357-456` | — | ~100 |

### P3 — 系统完成

| # | 描述 | 文件 | 估算行数 |
|---|------|------|----------|
| P3-1 | ReceiveDamage 完整护甲计算 (弹头vs护甲类型) | `object.cpp:62-93` | ~50 |
| P3-2 | Audio系统 (VocClass/VoxClass ~15 stub方法) | `audio.cpp` | ~200 |
| P3-3 | TriggerClass 事件注册/动作触发/实例创建 | `trigger.cpp` | ~200 |
| P3-4 | TacticalClass 坐标转换/遮挡/绘制 (参考 cnc-ddraw) | `tactical.cpp` | ~200 |
| P3-5 | Surface/DSurface Blit/FillRect/Lock/Unlock/DrawSHP (参考 cnc-ddraw) | `surface.cpp` | ~200 |
| P3-6 | Cell occupancy (IsCellOccupied, MarkAllOccupationBits) | `object.cpp` | ~80 |
| P3-7 | Fire/SmokeUpdate/TakeDamage — 战斗子系统完善 | `techno.cpp` | ~100 |

### P4 — 架构完整性

| # | 描述 | 文件 | 估算行数 |
|---|------|------|----------|
| P4-1 | 成员文档化 — IDA验证所有 `unknown_*` 成员(34个跨4类) | structure headers | 调研 |
| P4-2 | 从YRpp补全HouseClass/RulesClass/SessionClass成员 | 8+ headers | varies |
| P4-3 | 网络子系统 (Winsock/IPX/UDP/Connection/Multiplayer) | 4 files | ~500 |
| P4-4 | UI子系统 (CommandClass 14子类/Sidebar/Mouse) | 6 files | ~500 |
| P4-5 | Entity子系统 (Anim/Bullet/Particle/Smudge/Overlay/Tiberium/Wave/Tube/Terrain) | 9 files | ~600 |
| P4-6 | Voxel渲染 (VoxelAnimClass) | voxel headers | ~300 |
| P4-7 | SuperWeapon静态方法 (LightningStorm/PsyDom/NukeFlash/ChronoScreenEffect) | `super_weapon.cpp` | ~200 |
| P4-8 | Tag/Team/Trigger系统 (持久化+动作链) | 3 files | ~500 |
| P4-9 | Far Future: Ares/Phobos扩展原生支持 | — | — |

### P5 — 现代化重构 (远期)

| # | 描述 | 估算 |
|---|------|------|
| P5-1 | 现代渲染引擎 (Vulkan/D3D12，替代 DirectDraw + cnc-ddraw) | 大型 |
| P5-2 | 高分辨率资产管线 (替代 SHP/Voxel) | 大型 |
| P5-3 | 原生模组系统 (插件架构，替代 Syringe DLL 注入) | 大型 |
| P5-4 | 强化学习 AI 框架 (替代规则AI) | 大型 |
| P5-5 | 跨平台移植 (Linux/macOS) | 中型 |
| P5-6 | 现代网络层 (替代 UDP/IPX) | 中型 |

### 统计

| 指标 | 数值 |
|------|------|
| 已实现函数 | ~120 |
| 存根/空实现 | ~200+ |
| TODO/FIXME标记 | 252 (src 205 + headers 47) |
| 未命名成员 | 34 (BuildingClass 17 + Infantry 6 + Unit 3 + Aircraft 8) |
| 待翻译IDA函数 | 20 sub_ + 12 vt_entry |
| 构建状态 | 0 errors, 0 warnings |

---

## 当前会话上下文 (快速恢复)

### IDA 命名摘要 (共129函数 + 35全局)

| 类别 | 示例 | 用途 |
|------|------|------|
| 生产管线 (8) | `ProductionCompletionCallback`, `CreateUnitOnCompletion`, `ConstructionPositionTracker` | CreateUnit 回调链 |
| 坐标/格子 (10) | `Coord_To_Cell`, `Cell_GetGroundHeight`, `Cell_IsWalkable`, `CellCoord_To_CellObj` | 位置计算 |
| 音频 (5) | `AudioController_Start`, `AudioController_StartAt`, `AudioController_Stop`, `AudioController_Init` | 工作音效 |
| 数学 (5) | `Math_RoundToInt`, `Math_Sqrt`, `Math_SinCos`, `Math_CalcAngle` | 坐标计算 |
| 电力 (5) | `Power_TimerProcess`, `Power_FlagProcess`, `BuildingClass_PowerDrainUpdate` | 电力系统 |
| 单元创建 (4) | `CreateUnitAtCoords_Timed`, `CreateUnitAtCoords_Standard`, `UnitClass_Create` | 最终产出 |
| ObjectClass vtable (5) | `ObjectClass_GetCoords`, `ObjectClass_HasC4`, `ObjectClass_SetPosition` | 基类方法 |
| BuildingClass vtable (8) | `BuildingClass_MissionDispatch`, `BuildingClass_OnObjectExpired`, `BuildingClass_TogglePrimaryFactory` | 建筑虚函数 |
| 入口点/窗口 (7) | `WinMain`, `WindowCreation_Init`, `WindowProc_Main`, `GameLoop_MessagePump`, `COM_RegisterClasses`, `CopyProtection_CheckLauncher`, `CopyProtection_NotifyLauncher` | 启动管线 |
| 全局变量 (35) | `RulesClass_Instance`, `CurrentFrame`, `MCV_DeployModeEnabled`, `BuildingTypeClass_Array`, `HouseClass_Array`, `g_hWnd`, `g_hInstance`, `WindowName` 等 | 全局状态 |

### IDA struct 类型 (3个)
- `BuildingClass_Full` — 已应用于 CreateUnit + 3 callbacks 的 `this` 参数
- `BuildingClass_Production` — 生产成员布局
- `BuildingTypeClass_Production` — 类型成员布局 (660→890偏移)

### 项目关键信息

- **命名空间**: `ra2::game` (核心层次) / `gamemd` (其他)
- **枚举跨命名空间**: 用 `static_cast<ra2::game::Mission>(static_cast<int>(gamemd::Mission::X))` 桥接
- **类定义 vs 前向声明**: 必须一致 (class/struct), 24 文件已修复
- **BuildingTypeClass**: 已有 ~270 成员，可直接使用 Type->Xxx
- **HouseClass**: `ra2::game` 仅前向声明, 不能用 `->` 访问成员
- **MIX 格式**: 前 2B=0 为扩展格式; flags 0x0002=加密; 算法来自 RA1 MixFileClass
- **MIX 文件名**: 仅存 hash ID, 不存原始名; 通过 `ComputeId()` 匹配
- **IDA 连接**: `127.0.0.1:13337`, i64 在 `C:\Program Files (x86)\Mental Omega\gamemd.exe.i64`
- **IDA 命名状态**: 129 个函数 + 35 个全局变量已重命名 (见上方命名清单)
- **Python**: 3.14.2 (`python` 或 `py`), Windows 上已就绪
- **渲染框架**: cnc-ddraw (`./cnc-ddraw`, by FunkyFr3sh) 是开源 DirectDraw 兼容层，Phase 1 调试阶段作为 `ddraw.dll` 兼容层运行 EXE，Phase 2 将被现代渲染引擎取代
- **EXE 入口**: `app/main.cpp` — WinMain 创建窗口 + 初始化 DirectDraw 7 + 游戏循环

### RA2 Mission 系统关键发现
- BuildingClass/InfantryClass/UnitClass/AircraftClass 的 Mission_* 虚函数仅为简单 thunks (返回常量如 6/1824)
- 实际生产逻辑在 `CreateUnit` (由函数指针表调用), 不在 Mission 状态机中
- RA1 风格的状态机仅作参考实现, 不与二进制完全一致
- 每个类的 vtable[13] 是 PowerDrainUpdate (电力消耗), vtable[9] 是 Update (每帧更新)

### 测试数据

| 目录 | 格式 | 已验证 |
|------|------|--------|
| RA2YRMIX/ | first=0, flags=0x0003 (加密) | expandmd01(33文件), language(6), WDT(126) |
| MOMIX/ | first=0, flags=0x0000 (无加密) | expandmo04(66), expandmo90(45) |

---

## 编码约定

1. `namespace gamemd` 或 `namespace ra2::game`
2. `enum class` + `constexpr operator|` for bit flags
3. 虚函数按 YRpp vtable 顺序，`__stdcall` 调用约定
4. C++20: `noexcept`、`override`、`constexpr`、`= default`
5. RA1 为结构参考，YRpp 为偏移参考，IDA 为二进制验证，cnc-ddraw 为渲染接口参考
6. 前向声明必须匹配实际定义 (class vs struct)
7. MIX 文件名仅存 hash ID，不保存原始文件名
8. DirectDraw 调用使用标准 Windows SDK 接口 (Phase 1)，搭配 cnc-ddraw 兼容层运行调试
