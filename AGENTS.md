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
| 可编译源文件 | 70 |
| 总头文件 | 103 |
| 总代码行数 | ~17,000 (headers ~10,500 + source ~6,500) |
| 编译错误 | **0** |
| 编译警告 | **0** |
| 已实现函数 | **~140** (~200+ stubs/empty) |
| TODO/FIXME 标记 | **~260** (source 210 + headers 50) |
| IDA 命名 | **~7,209 `::` + ~1,518 VerbNounPhrase + 25+ struct 类型** |
| MIX 格式支持 | RA2 加密 + 扩展无加密 + TD 传统 (全部验证) |
| EXE 骨架 | **WinMain + Win32窗口 + DirectDraw7初始化 + MIX文件加载 + SHP渲染 + 主菜单系统** |

### 构建命令

```bash
# Windows (VS 2022, 32-bit)
cmake -B build_win -G "Visual Studio 17 2022" -A Win32
cmake --build build_win

# Linux (x86_64, 仅 gamemd_core 静态库, 代码验证)
cmake -B build_linux -G "Unix Makefiles"
cmake --build build_linux

# cnc-ddraw MinGW 交叉编译 (Linux 产出 ddraw.dll)
cd cnc-ddraw && make _WIN32_WINNT=0x0400
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

### 外部生态系统 (DLL 注入 / 模组平台 / 联机客户端)

RA2/YR 社区围绕 `gamemd.exe` 建立了一个 **DLL 注入生态系统**，通过 `Syringe.exe`（通用注入器）将扩展 DLL 加载到 `gamemd.exe` 进程的地址空间，在二进制层面修改游戏行为。以下是各组件及其关系：

```
xna-cncnet-client (C# UI, 游戏大厅, IRC 聊天, INI 生成)
  │  写入 spawn.ini + spawnmap.ini
  └──▶ Syringe.exe "gamemd.exe" -SPAWN -CD.
         │  CREATE_SUSPENDED + Debug API 注入
         ├──▶ CnCNet-Spawner.dll ─ 处理 -SPAWN / 读 spawn.ini / 跳过菜单
         ├──▶ Ares.dll (可选)     ─ 1187 hooks (新超武/阵营/UI/护甲)
         ├──▶ Phobos.dll (可选)   ─ 1642+ hooks (护盾/激光/附加效果/API)
         └──▶ 恢复 gamemd.exe 执行 → 游戏开始
```

| 组件 | 类型 | 语言 | 大小 | 钩子数 | '-SPAWN' | 许可证 | 状态 |
|------|------|------|------|--------|----------|--------|------|
| **gamemd.exe** | EXE (原版) | C++ | 7.6MB | 0 | 无 | 闭源 | 逆向中 |
| **xna-cncnet-client** | EXE (GUI) | C#/MonoGame | ~5MB | N/A | 生成 INI + 启动参数 | GPLv3 | 已克隆 |
| **Syringe** | EXE (注入器) | C++ | ~50KB | 框架 | 无 (通用注入器) | LGPLv3 | 已克隆 |
| **CnCNet-Spawner** | DLL (启动器) | C++ | ~300KB | ~120 | **有** (/SPAWN.INI) | GPLv3 | 已克隆 (yrpp-spawner) |
| **Ares 0.A** | DLL (模组) | C++ | ~500KB | 1187 | 无 | BSD-4 | 已克隆 |
| **Phobos** | DLL (模组) | C++ | ~1MB | 1642+ | 无 (仅配合 Spawner) | GPLv3 | 已克隆 |

#### xna-cncnet-client (CnCNet 客户端)

- 基于 MonoGame/XNA 的游戏大厅客户端（C#）
- 核心文件: `ClientGUI/GameProcessLogic.cs` — 启动游戏进程的逻辑
- 命令行格式: `gamemd.exe -SPAWN -CD.`（直接）或 `Syringe.exe "gamemd.exe" -SPAWN -CD.`（Syringe 路径）
- 启动前写入 3 个 INI 文件:
  - `spawn.ini` — 游戏设置 (Scenario, Side, Color, Players, Tunnel...)
  - `spawnmap.ini` — 地图数据 (地形, 触发, 规则)
  - `Saved Games/spawnSG.ini` — 存档恢复配置
- 支持模式: 单人遭遇战、战役、多人联机 (CnCNet 隧道)、局域网、存档加载
- 在线多人通过 CnCNet IRC 隧道进行 NAT 穿透

#### Syringe (DLL 注入器)

- 通用 DLL 注入框架，使用 **Windows Debugging API**（非 CreateRemoteThread）
- 流程: `CREATE_SUSPENDED` → 在目标进程分配共享代码块 → 解析 `.syhks00` PE 段 → INT3 断点 → 注入时执行 LoadLibrary → 跳板 JMP 钩子
- DLL 通过 `SyringeHandshake` 导出函数验证 EXE 兼容性 (CRC32 / 大小 / 时间戳)
- 命令行格式: `Syringe.exe "<exe name>" <arguments>`
- Phase 2 将被原生插件架构取代

#### Ares 0.A (模组平台)

- 编译为 `Ares.dll`，注入 1187 个钩子
- 命令行参数 (9 个): `-LOG`, `-CD`, `-NOLOGO`, `-TESTRUN`, `-STRICT`, `-LOG-EMP`, `-AI-CONTROL`, `-LOG-CSF`, `-EXCEPTION`
- **不含 -SPAWN 支持**
- 核心钩子地址: `0x52F639` (命令行), `0x7CD810` (ExeRun), `0x7CD8EF` (ExeTerminate), `0x52CAE9` (PostGameInit)
- 旁路 Copy Protection: `0x49F5C0` / `0x49F620` / `0x49F7A0` (always return TRUE)
- 扩展系统: MassAction 分发器 + 22 个扩展类 (BuildingExt, TechnoExt, HouseExt...)
- 50+ 自定义超级武器 (ChronoSphere, DropPod, HunterSeeker, LightningStorm...)
- 工程结构: `Ares/src/Ares.cpp` (DllMain + SYRINGE_HANDSHAKE) + `Ext/` (钩子) + `Misc/` (子系统) + `UI/` (对话框)

#### Phobos (模组平台)

- 编译为 `Phobos.dll`，独立于 Ares 运行但设计为互补
- 命令行参数 (5 个): `-Icon`, `-b=<build>`, `-Inheritance`, `-Include`, `-ExceptionHandler`
- **不含 -SPAWN 支持**，但检测 CnCNet Spawner (通过 `SpawnerHelper` 检查 `0x4C7A14` 的 LJMP 钩子)
- 支持多版本 Ares (3.0 timestamp `0x5fc37ef6`, 3.0p1 `0x61daa114`)，通过二进制补丁修复 Ares 的 Bug
- 公开 Interop API (`src/Interop/`): AttachEffect, TechnoExt, BulletExt, EventExt
- 创新功能: 护盾系统 (ShieldClass), 激光轨迹, 附着效果, 自定义 Locomotion, Protocol Zero 兼容
- 存档时复制 `spawn.ini` → `spawnSG.ini`，模仿 XNA CnCNet Client 行为

#### CnCNet YRpp Spawner (yrpp-spawner)

- `-SPAWN` 的真正实现者，编译为 `CnCNet-Spawner.dll`
- 由 Syringe 注入到 gamemd.exe 中
- 启动流程 (所有地址偏移均为原版 gamemd.exe 二进制地址):
  1. Hook `0x52F639` (CommandLine_Parse): 检测 `-SPAWN` `-CD`
  2. Hook `0x6BD7C5` (WinMain): 读 SPAWN.INI，应用 ~25 个动态补丁
  3. CALL 替换 `0x48CDD3` + `0x48CFAA` → `Spawner::StartGame()` (跳过菜单)
  4. CALL 替换 `0x68745E` + `0x68ACFF` → `Spawner::AssignHouses()` (自定义分配玩家)
  5. LJMP 跳过签到动画 (`0x52CB50`)、Logo (`0x52C5E0`)
- spawn.ini 解析字段:
  - `[Settings]`: GameMode, Scenario, Seed, Bases, Credits, GameSpeed, AIPlayers, IsSinglePlayer, LoadSaveGame, Protocol, FrameSendRate, MaxAhead, Ra2Mode, QuickMatch, Tournament, WriteStatistics...
  - `[Settings]`/`[Other1-7]`: Name, Side, Color, Ip, Port, IsSpectator (每个玩家)
  - `[HouseCountries]`/`[HouseHandicaps]`/`[HouseColors]`/`[SpawnLocations]`: Multi1-8 (AI 玩家)
  - `[Tunnel]`: Ip, Port (NAT 穿透)
  - `[Multi1_Alliances]`~`[Multi8_Alliances]`: HouseAllyOne-Eight
- 网络系统: UDP 隧道代理 (`NetHack::SendTo`/`RecvFrom`，hook `0x7B3D75`/`0x7B3EEC`), Protocol 0 自定义延迟网码
- 支持模式: Campaign, Skirmish, Multiplayer(LAN/Internet via Tunnel), QuickMatch, RA2 Mode

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
Surface             ✅ DSurface Blit/FillRect/Lock/Unlock (DirectDraw7 后端)
TextRenderer        ✅ GDI文字→DDraw表面 (16bpp RGB565)
Gadget              ✅ GadgetClass + TextButtonClass + LabelClass
Dialog              ✅ DialogClass (背景+按钮+鼠标事件)
MainMenu            ✅ 主菜单屏幕 (基本交互)
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

### 关键 IDA 函数命名 (共140函数)

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
| **入口点/窗口系统** | | | |
| WinMain | 0x6BB9A0 | 10261B | 主入口: 413 BBS, 40+ COM类注册, CopyProtection, 窗口创建 |
| CommandLine_Parse | 0x52F620 | 1531B | 命令行解析 (被 Ares/Phobos/Spawner hook) |
| Init_Game | 0x52BA60 | 4333B | 游戏初始化 (146 BBs, Scenario/Rules/MIX/Palettes/CD/INI) |
| Menu_Select | 0x52D9A0 | 4536B | 菜单/场景选择 (222 BBs, 19-case switch, INTRO视频) |
| Main_Game | 0x48CCC0 | 780B | 主游戏流程: Init→Menu→GameLoop→"Average FPS" |
| Main_Game_Frame | 0x48C8B0 | 978B | 每帧处理 (51 BBs, 9-case switch: 投降/回放/网络) |
| Init_Intro | 0x52CB50 | 44B | 开场动画播放 (Spawner 跳过) |
| WindowCreation_Init | 0x777C30 | ~500B | 窗口类注册+CreateWindowExA, 全屏/调试双模式 |
| WindowProc_Main | 0x7775C0 | 1213B | 主窗口过程, 81 BBs, WM_CREATE/DESTROY/PAINT |
| Game_Frame_Loop | 0x55D360 | 2940B | 游戏帧处理主循环 |
| Game_Frame_Check | 0x55CFD0 | 906B | 游戏帧条件检查 |
| Scenario_Load | 0x686B20 | 4532B | 场景加载 (含 AssignHouses 调用点 0x68745E) |
| Scenario_ReadINI | 0x689E90 | 3800B | 场景 INI 读取 (含 AssignHouses 调用点 0x68ACFF) |
| WinMain_Setup | 0x6BE1C0 | 2697B | WinMain 前置设置 (配置加载/NO-CD) |
| GameLoop_MessagePump | 0x53E770 | ~800B | 自定义PeekMessage/DispatchMessage, CritSec保护 |
| COM_RegisterClasses | 0x6BB390 | ~800B | COM class object 注册 (TypeLib/ProgID/InprocServer32) |
| CopyProtection_CheckLauncher | 0x49F5C0 | ~80B | 启动器Mutex检测 ("48BC11BD...") |
| CopyProtection_NotifyLauncher | 0x49F620 | ~250B | 启动器通知+等待响应, 自定义消息 0xBEEF |

---

## MIX 文件读取器 (Phase 3 完成)

### 内存支持的 MixFileClass

子 MIX 文件不再通过临时磁盘文件解析，而是直接在内存中存储完整数据：

```cpp
// 内存支持的构造函数：拥有数据缓冲区所有权
MixFileClass(const uint8_t* data, int dataSize, const char* name) noexcept;

// Extract/Peek 自动选择数据源：
//   MemoryData != nullptr → 从内存读取
//   MemoryData == nullptr → 从磁盘 FileName 读取 (传统顶层 MIX)
```

**关键设计点**:
- `MemoryData` / `MemoryDataSize`: 非空时从内存读取，避免删除临时文件后无法读取的 bug
- 析构函数 `~MixFileClass()`: 自动 `free(MemoryData)`
- `IsValid()`: 检查 `CountFiles > 0 && FileName != nullptr && Headers != nullptr`
- 顶层 MIX 文件（`*.mix` on disk）: `MemoryData = nullptr`, 通过 `fopen(fd.cFileName)` 读取
- 子 MIX 文件（从父 MIX 提取）: 直接传入内存数据，后续 Extract 从内存读取

### 子 MIX 验证规则 (防虚假识别)

由于随机数据可能以 `0x0000 0xNNNN` (flags bit1=1) 开头被误判为加密 MIX，添加严格验证：

| 检查 | 条件 | 目的 |
|------|------|------|
| 大小下限 | `sz >= 1000` | 子 MIX 至少 1KB |
| 文件数 | `1 < trial_cnt <= 65535` | 合理的文件数范围 |
| 数据适配 | `dataSize >= off + padded` | 加密头+索引必须完整包含在数据中 |
| 体积适配 | `FileSize <= dataSize - hdr_end` | 声明的主体必须适配剩余数据 |
| 平均大小 | `FileSize / CountFiles >= 200` | 每文件平均至少 200 字节（排除虚假巨型 Count） |
| Headers 分配 | `Headers != nullptr` | IsValid() 确认索引表已分配 |

### 加载顺序

```cpp
// 搜索顺序：从后往前（后加载的 MIX 优先级最高，可覆盖先加载的文件）
for (int i = pool.Count - 1; i >= 0; --i) {
    auto* mix = pool[i]; ...
}
```

顶层 MIX (`*.mix` 按 FindFirstFile 顺序) → 子 MIX (追加到最后，最高优先级)

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
| **入口/窗口系统** | | | |
| `WindowName` | 0x849F48 | char[] | 窗口类名 "Yuri's Revenge" |
| `g_hWnd` | 0xB73550 | HWND | 主窗口句柄 |
| `g_hInstance` | 0xB732F0 | HINSTANCE | 实例句柄, WinMain设置 |
| `g_hIcon` | 0xB7354C | HICON | 图标句柄 (IDI #0x5D) |
| `g_hCursor` | 0xB73548 | HCURSOR | 光标句柄 (IDC #0x68) |
| **启动参数** | | | |
| `CmdLine_NoCD` | 0x89E410 | bool | -CD 命令行标志 (跳过CD检测) |

---

## Master TODO (优先级排序)

### R0 — 菜单渲染管线 (最高优先级, 阻塞可演示性)

**目标**: 完整实现原版主菜单/多菜单/选项菜单等 UI，SHP 按钮 + 背景 + BINK 视频

**当前状态**: DDraw 初始化 ✅ / SHP 加载 ✅ / 调色板 ✅ / MIX 读取 ✅ / 色块按钮可交互 ／ 真实 SHP 按钮加载后未渲染

#### R0-1: DSurface SHP 渲染 — Blit/StretchBlt 正确实现

| # | 描述 | 文件 | 依赖 | 估算行 |
|---|------|------|------|--------|
| R0-1a | 正确实现 DSurface::Blt (标准 DirectDraw Blit) | `render/surface.cpp` | cnc-ddraw | ~50 |
| R0-1b | DSurface::FillRect 验证 (确认 cnc-ddraw 下行为) | `render/surface.cpp` | cnc-ddraw | ~10 |
| R0-1c | DrawSHP(frame, src_x, src_y, palette) — 调色板索引→16bpp/32bpp 转换 + 写像素 | `render/surface.cpp` | DSurface, Palette | ~50 |
| R0-1d | SHP 透明色支持 (key color=0 不绘制) | `render/surface.cpp` | DrawSHP | ~20 |
| R0-1e | SHP 多帧支持 (frame index → frame pixel data) | `render/surface.cpp` | ShpImage | ~30 |

**R0-1 验收**: 单帧 SHP 正常显示在 DDraw 表面上，颜色正确，透明区域正常。

#### R0-2: Dialog / Gadget 系统 — UI 事件分发

| # | 描述 | 文件 | 依赖 | 估算行 |
|---|------|------|------|--------|
| R0-2a | GadgetClass 基类完善: DrawMe/OnMouseEnter/OnMouseLeave/Action 虚函数链 | `ui/gadget.cpp` | — | ~100 |
| R0-2b | TextButtonClass SHP 渲染: LoadFromHash→帧0(普通)/帧1(悬停)/帧2(按下) | `ui/gadget.cpp` | R0-1 | ~80 |
| R0-2c | LabelClass 文字渲染: GDI→DDraw surface (已有 TextRenderer 基础) | `ui/gadget.cpp` | TextRenderer | ~50 |
| R0-2d | DialogClass 完善: AddGadget/RemoveGadget/DrawAll/DispatchMouse/DispatchKey | `ui/dialog.cpp` | GadgetClass | ~150 |
| R0-2e | Dialog_MessageLoop: PeekMessage→Translate→Dispatch + 空闲时 DrawAll (参考原版时序) | `ui/dialog.cpp` | Dialog 系统 | ~80 |

**R0-2 验收**: 多按钮对话框正确响应点击，SHP 按钮显示帧切换，文字标签可见。

#### R0-3: 主菜单 UI 资产 → 功能映射

| # | 描述 | 文件 | 依赖 | 估算行 |
|---|------|------|------|--------|
| R0-3a | 按 XCC 名称→CRC32 哈希查找加载所有主菜单 SHP: `button*.shp`, `tabs.shp`, `side2.shp`, `logo.shp`, `title.shp` | `src/core/menu_select.cpp` | R0-1, R0-2 | ~40 |
| R0-3b | 构建主菜单 Gadget 树: 5 个 TextButton + 1 个 Label(版本号) + 背景控件 | `src/core/menu_select.cpp` | R0-2 | ~60 |
| R0-3c | 按钮动作: Campaign→Campaign_Screen / Skirmish→(地图选择) / Multiplayer→Multiplayer_Screen / Options→Options_Screen / Exit→PostQuitMessage | `src/core/menu_select.cpp` | Dialog 系统 | ~40 |
| R0-3d | 背景渲染: 优先 BINK (ra2ts_l.bik), 回退到 loading screen SHP (ls800*.shp) | `src/core/menu_select.cpp` | R0-1 | ~30 |

**R0-3 验收**: 主菜单显示真实 SHP 按钮，各按钮点击后跳转到对应子屏幕（占位或已实现）。

#### R0-4: 子菜单屏幕 (Campaign/Skirmish/Multiplayer/Options)

| # | 描述 | 文件 | 依赖 | 估算行 |
|---|------|------|------|--------|
| R0-4a | Campaign_Screen: 阵营选择 SHP 按钮 + Start/Back (参考 IDA `Campaign_Screen` **0x60D380**) | `src/core/menu_select.cpp` | R0-2 | ~60 |
| R0-4b | Multiplayer_Screen: 网络模式选择 (参考 IDA `Multiplayer_Screen` **0x53F1F0**, 全局存储) | `src/core/menu_select.cpp` | R0-2 | ~60 |
| R0-4c | Options_Screen: 游戏设置对话框 (参考 IDA `Options_Screen_Dialog` **0x55FC80**, `Options_Screen_Save` **0x55FAA0**) | `src/core/menu_select.cpp` | R0-2 | ~50 |

**R0-4 验收**: 四级菜单可导航，返回按钮工作，状态机正确流转。

#### R0-5: BINK 视频解码/播放

| # | 描述 | 文件 | 依赖 | 估算行 |
|---|------|------|------|--------|
| R0-5a | SHP 加载屏幕显示 (降级方案: static ls800*.shp 作为菜单背景) | `src/core/menu_select.cpp` | R0-1 | ~30 |
| R0-5b | 调研 BINK 格式 + RAD Game Tools SDK 可行性 (原版用 BinkPlay.exe / binkw32.dll) | `src/render/bink.cpp` → 新建 | — | 调研 |
| R0-5c | BINK 视频帧解码→DDraw 表面 Blit (每帧 DMA→surface→Flip) | `src/render/bink.cpp` | DDraw | ~150 |
| R0-5d | INTRO 视频播放: `Menu_Select` case 0/1 (跳过 Logo/Intro 的 Spawner 钩子) | `src/core/menu_select.cpp` | R0-5c | ~50 |

**R0-5 验收**: 菜单背景显示 BINK 动画（或 SHP 静图降级），INTRO 视频可播放。

---

### R1 — 游戏内渲染管线

**目标**: 完整实现等距视图 (Tactical Map)、地形/建筑/单位/UI 渲染

**当前状态**: 仅头文件定义，无 .cpp 实现

#### R1-1: 等距投影 & 坐标系统

| # | 描述 | 文件 | IDA 地址 | 估算行 |
|---|------|------|----------|--------|
| R1-1a | Cell → Screen 坐标转换 (Lepton→Cell→Pixel) | `ui/tactical.cpp` | `Coord_To_Cell` 0x565730 | ~80 |
| R1-1b | Screen → Cell 坐标逆向 (鼠标点击→地图格) | `ui/tactical.cpp` | — | ~60 |
| R1-1c | 视口裁剪: 计算可见 cell 范围 (Camera X/Y/Z) | `ui/tactical.cpp` | — | ~80 |
| R1-1d | 地图滚动: 键盘/鼠标边界检测 + 平滑移动 | `ui/tactical.cpp` | — | ~60 |

**R1-1 验收**: 固定相机位置绘制地形的坐标转换正确，鼠标可检测地图格。

#### R1-2: 地形渲染 (Tactical Map Draw)

| # | 描述 | 文件 | IDA 地址 | 估算行 |
|---|------|------|----------|--------|
| R1-2a | 地形 Tile SHP 加载: TEM/TEMPERAT/Snow/Urban tileset | `ui/tactical.cpp` | — | ~100 |
| R1-2b | Isometric tile 绘制: z-order left→right, top→bottom | `ui/tactical.cpp` | — | ~120 |
| R1-2c | Tile 变体选择 (随机草地/悬崖边缘检测) | `ui/tactical.cpp` | — | ~100 |
| R1-2d | 地表覆盖层: Tiberium/Ore/Cliff/Road/Wall/River 覆盖 | `ui/tactical.cpp` | — | ~80 |

**R1-2 验收**: 等距地图可见，地形 tile 正确排列，无 z-order 错误。

#### R1-3: 对象渲染 (Buildings/Units/Infantry/Aircraft)

| # | 描述 | 文件 | IDA 地址 | 估算行 |
|---|------|------|----------|--------|
| R1-3a | ObjectClass::Draw (虚函数 [7]) — 基类 Draw 调度 | `core/object.cpp` | — | ~60 |
| R1-3b | BuildingClass::Draw: SHP 建筑动画 + buildup/active/damage 状态 | `core/building.cpp` | — | ~100 |
| R1-3c | TechnoClass::Draw: SHP 单位/步兵 8 方向选择 + 动画帧步进 | `core/techno.cpp` | — | ~100 |
| R1-3d | 对象 z-order 排序: 同 cell 内按 Occupier 列表排序 | `core/object.cpp` | — | ~50 |
| R1-3e | 选中的对象: 血条 + 选中框绘制 (SHP 覆盖) | `core/techno.cpp` | — | ~60 |

**R1-3 验收**: 至少一个建筑/单位/步兵在屏幕上正确渲染。

#### R1-4: 游戏内 UI 覆盖

| # | 描述 | 文件 | IDA 地址 | 估算行 |
|---|------|------|----------|--------|
| R1-4a | 侧边栏 (SidebarClass): 建筑/单位生产标签页 + 图标 + Ready 状态 | `ui/sidebar.cpp` | — | ~200 |
| R1-4b | 迷你雷达 (RadarClass): 地形预览 + 单位/建筑白点 | `ui/radar.cpp` | — | ~120 |
| R1-4c | 命令栏 (CommandClass): 移动/攻击/停止/部署/警戒 按钮 | `ui/command_class.cpp` | — | ~80 |
| R1-4d | 资源/电量/资金 文本显示: CreditDisplay / PowerBar | `ui/g_screen.cpp` | — | ~60 |
| R1-4e | Tab 选择 (TabClass): 多建筑/多单位切换 | `ui/tab.cpp` | — | ~60 |

**R1-4 验收**: 完整游戏 UI 覆盖层可见交互。

#### R1-5: 视觉效果后期

| # | 描述 | 文件 | IDA 地址 | 估算行 |
|---|------|------|----------|--------|
| R1-5a | 战争迷雾/黑幕 (FogOfWar): per-cell 可见性 + 灰/黑渐变覆盖 | `ui/tactical.cpp` | — | ~120 |
| R1-5b | 动画覆盖 (AnimClass): 爆炸/烟/火花 在 tactical 层之上 | `entity/anim.cpp` | — | ~100 |
| R1-5c | 动态光照: 核弹闪光/闪电风暴/Chrono 效果 | `ui/tactical.cpp` | `LightingStorm`/`NukeFlash` | ~100 |

**R1-5 验收**: 战争迷雾正确遮挡未探索区域，爆炸动画可见。

#### R1-6: Voxel 3D 模型渲染 (远期, 可选降级)

| # | 描述 | 文件 | 依赖 | 估算行 |
|---|------|------|------|--------|
| R1-6a | VXL 格式解析: Header(sections) + Body(voxel array) + Action frame offsets | `entity/voxel_anim.cpp` | — | ~150 |
| R1-6b | HVA 动画格式: Section 变换矩阵 + 帧动画数据 | `entity/voxel_anim.cpp` | VXL | ~100 |
| R1-6c | 软件 Voxel→2D 投影: 8 方向 ray-cast → 像素缓冲 → DDraw 表面 | `entity/voxel_anim.cpp` | DSurface | ~200 |
| R1-6d | **降级方案**: Voxel 对象用 SHP 占位 (从 expandmd01.mix 提取对应 SHP) | `entity/voxel_anim.cpp` | SHP | ~50 |

**R1-6 验收**: Voxel 模型可见（或 SHP 占位版），8 方向随旋转变化。

---

### P0 — EXE 骨架 (已完成 / 进行中)

| # | 描述 | 文件 | 估算行数 | 状态 |
|---|------|------|----------|------|
| P0-1 | WinMain 入口点 + 窗口创建 | `app/main.cpp` | ~20 | ✅ |
| P0-2 | DirectDraw 7 初始化 | `app/ddraw_init.cpp` | ~100 | ✅ |
| P0-3 | 命令行解析器 (`-SPAWN`, `-CD`, `-WINDOW`, `-LOG`) | `app/cmdline.cpp` | ~60 | ✅ (新增) |
| P0-4 | 游戏主流程路由 (Init→Menu/Spawn→GameLoop) | `app/game_loop.cpp` | ~100 | ✅ (新增) |
| P0-5 | InitGame 骨架 (匹配 Init_Game 流程) | `src/core/init_game.cpp` | ~80 | ✅ (新增) |
| P0-6 | MenuSelect 骨架 (19-case switch placeholder) | `src/core/menu_select.cpp` | ~60 | ✅ (新增) |
| P0-7 | SpawnINI 完整解析器 (Settings/Players/Houses/Tunnel) | `src/core/spawn_config.cpp` | ~200 | ✅ (新增) |
| P0-8 | SpawnMode 入口 (读 spawn.ini → 路由到游戏循环) | `src/core/spawn_mode.cpp` | ~100 | ✅ (新增) |
| P0-9 | xna-cncnet-client 生态文档 (Ares/Syringe/Phobos/yrpp-spawner) | `AGENTS.md` | ~150 | ✅ (新增) |

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

### P5 — 现代化重构 (远期/平台支撑)

| # | 描述 | 估算 |
|---|------|------|
| P5-1 | 现代渲染引擎 (Vulkan/D3D12，替代 DirectDraw + cnc-ddraw) | 大型 |
| P5-2 | 高分辨率资产管线 (替代 SHP/Voxel) | 大型 |
| P5-3 | 原生模组系统 (插件架构，替代 Syringe DLL 注入) | 大型 |
| P5-4 | 强化学习 AI 框架 (替代规则AI) | 大型 |
| P5-5 | 跨平台移植 (Linux/macOS) | 中型 |
| P5-6 | 现代网络层 (替代 UDP/IPX) | 中型 |
| P5-7 | Linux 下编译 gamemd_core 静态库 (平台兼容层 + 条件编译) | 小型 |
| P5-8 | cnc-ddraw MinGW 交叉编译 (Linux 产出 ddraw.dll) | 小型 |

#### P5-7: Linux 编译 gamemd_core 详情

**目标**: `cmake -B build_linux -G "Unix Makefiles" && cmake --build build_linux` 产出 `libgamemd_core.a`（x86_64 ELF），不改动 Windows 编译结果。仅用于代码验证/CI，不运行游戏。

**子步骤**:

| # | 描述 | 估算 |
|---|------|------|
| L1 | 创建 `include/gamemd/platform_compat.hpp` — 条件定义 Win32 类型别名（`DWORD`、`HWND`、`HRESULT`、`GUID` 等） | ~100 行 |
| L2 | 20 个 header 的 `#include <windows.h>` / `#include <ddraw.h>` 改为 `#ifdef _WIN32` 条件编译 | ~80 行 |
| L3 | `network/session.hpp` 和 `network/multiplayer.hpp` 中 packed struct 的 `wchar_t` → `char16_t`（Linux 下 `wchar_t` 是 4 字节） | ~10 行 |
| L4 | `CMakeLists.txt` 添加 Linux 分支（`target_compile_options` 移除 `-m32`，添加 `-Wno-attributes`） | ~20 行 |

**平台兼容层映射**:

| Windows 原语 | Linux 替代 | 说明 |
|---|---|---|
| `__stdcall` / `WINAPI` / `CALLBACK` | 空宏 `#define __stdcall` | x86_64 ABI 寄存器传参 |
| `DWORD` | `uint32_t` | struct 成员对齐 |
| `HWND`, `HINSTANCE` | `void*` | 窗口句柄（Linux 不创建真实窗口） |
| `LPSTR` | `char*` | |
| `WPARAM`, `LPARAM` | `uintptr_t` | |
| `LRESULT` | `intptr_t` | |
| `HRESULT` | `int32_t` | COM 返回值 |
| `ULONG` | `uint32_t` | AddRef/Release 返回 |
| `GUID` / `CLSID` / `IID` | 128-bit struct | COM 类 ID |
| `IStream` | 前向声明 + 虚函数声明 | 序列化接口（仅编译不运行） |
| `IDirectDrawSurface` | 前向声明 `struct IDirectDrawSurface;` | 渲染接口 |
| `S_OK` / `E_NOTIMPL` 等 | 常量 | COM HRESULT |
| `IID_IUnknown` / `IID_IPersistStream` | `extern const GUID` | |

**涉及文件**: `core/ddraw_init.hpp`, `core/game_loop.hpp`, `core/interfaces.hpp`, `ui/mouse.hpp`, `ui/g_screen.hpp`, `ui/command_class.hpp`, `ui/tool_tip.hpp`, `ui/message_list.hpp`, `ui/tab.hpp`, `ui/sidebar.hpp`, `misc/audio.hpp`, `misc/super_weapon.hpp`, `misc/rules.hpp`, `network/winsock.hpp`, `network/connection.hpp`, `network/session.hpp`, `network/multiplayer.hpp`, `render/surface.hpp`

#### P5-8: cnc-ddraw MinGW 交叉编译详情

**目标**: Linux 下用 `i686-w64-mingw32-gcc` 编译 cnc-ddraw 产出 `ddraw.dll`（32-bit Win32 PE），使用 cnc-ddraw 自带的 Makefile。

```bash
# 依赖安装
sudo apt install gcc-mingw-w64-i686

# 编译
cd cnc-ddraw
make _WIN32_WINNT=0x0400
# 产物: ddraw.dll
```

**用途**: Phase 1 调试阶段，Wine 下用此 ddraw.dll 作为 DirectDraw 兼容层运行 gamemd.exe。

### 统计

| 指标 | 数值 |
|------|------|
| 已实现函数 | ~140 |
| 存根/空实现 | ~200+ |
| TODO/FIXME标记 | 252 (src 205 + headers 47) |
| 未命名成员 | 34 (BuildingClass 17 + Infantry 6 + Unit 3 + Aircraft 8) |
| IDA 命名函数 | **8,727** (49.9% of 17,488) |
| IDA 类成员命名 | **7,209** (74.7% of 9,653) |
| IDA 全局函数命名 | **1,518** (19.4% of 7,835) |
| IDA 命名全局变量 | **2,633** (28.1% of 9,365) |
| 构建状态 | 0 errors, 0 warnings |

### 当前菜单渲染状态

| 组件 | 状态 | 备注 |
|------|------|------|
| DDraw 初始化 | ✅ | 2560x1600 全屏，cnc-ddraw 兼容层 |
| MIX 文件加载 | ✅ | 16顶层→17子MIX→33池，内存支持 |
| SHP 解码 | ✅ | TS格式(RLE3+Raw)，`ShpImage::LoadFromMemory` |
| 调色板 | ✅ | 768字节内容扫描匹配 |
| **BINK 视频** | ✅ | 左侧 BINK 区域, RGB565, 帧序已修正 |
| **BINK 音频** | ✅ | DirectSound + BinkSetSoundSystem + BinkSetVolume |
| **BINK 帧序** | ✅ | 修正为 DoFrame→Wait→CopyToBuffer→NextFrame (匹配 IDA 0x432E40) |
| **按钮 (Win32控件)** | ✅ | Win32 BUTTON 子窗口 (DiaglogEX 模板 0xE2), GDI 渲染 |
| 按钮 (SHP 素材) | ❌ | SHP 解析器返回错误尺寸 2x0 (头部 `0000 3400 2000 0200` 非标准) |
| Dialog/Gadget 系统 | ⚠️ | 子菜单 (Campaign/Options) 使用 DDraw Gadget 系统 |
| 主菜单 BINK 背景 | ✅ | `ra2ts_l.bik` 632×570 渲染到 BINK 区域 |

---

## 当前会话上下文 (快速恢复)

### IDA 命名摘要 (共345手工反编译 + 18音频全局 + 4音频函数)

| 类别 | 示例 | 用途 |
|------|------|------|
| 生产管线 (8) | `ProductionCompletionCallback`, `CreateUnitOnCompletion`, `ConstructionPositionTracker` | CreateUnit 回调链 |
| 坐标/格子 (10) | `Coord_To_Cell`, `Cell_GetGroundHeight`, `Cell_IsWalkable`, `CellCoord_To_CellObj` | 位置计算 |
| **BINK音频系统 (4)** | `Audio_IsSoundEnabled`, `Audio_GetDirectSound`, `BinkMovie_Pause`, `BinkMovie_AdjustSurfaceFormat` | DirectSound→BINK音频桥接 |
| 音频 (5) | `AudioController_Start`, `AudioController_StartAt`, `AudioController_Stop`, `AudioController_Init` | 工作音效 |
| 数学 (5) | `Math_RoundToInt`, `Math_Sqrt`, `Math_SinCos`, `Math_CalcAngle` | 坐标计算 |
| 电力 (5) | `Power_TimerProcess`, `Power_FlagProcess`, `BuildingClass_PowerDrainUpdate` | 电力系统 |
| 单元创建 (4) | `CreateUnitAtCoords_Timed`, `CreateUnitAtCoords_Standard`, `UnitClass_Create` | 最终产出 |
| ObjectClass vtable (5) | `ObjectClass_GetCoords`, `ObjectClass_HasC4`, `ObjectClass_SetPosition` | 基类方法 |
| BuildingClass vtable (8) | `BuildingClass_MissionDispatch`, `BuildingClass_OnObjectExpired`, `BuildingClass_TogglePrimaryFactory` | 建筑虚函数 |
| **Surface 类层次 (38)** | `DSurface_Blit`, `DSurface_Lock`, `DSurface_DrawLineZBuf`, `XSurface_WalkLine`, `BSurface_Lock` | DDraw表面绘制管线 |
| 入口点/窗口 (11) | `WinMain`, `CommandLine_Parse`, `Init_Game`, `Menu_Select`, `Main_Game`, `Main_Game_Frame`, `Game_Frame_Loop`, `Game_Frame_Check`, `Scenario_Load`, `Scenario_ReadINI`, `WinMain_Setup` | 启动管线, 游戏流程 |
| 对话框/菜单 (12) | `MainMenu_Screen`, `MainMenu_DlgProc`, `Dialog_Create`, `Dialog_Destroy`, `Dialog_Show`, `Dialog_SetParent`, `Dialog_BaseProc`, `Dialog_PumpMessages`, `Dialog_MessageLoop`, `Campaign_Screen`, `Multiplayer_Screen`, `Options_Screen_Dialog` | UI 对话框系统 |
| **系统工具 (6)** | `Screen_Capture`, `Random_Init`, `Network_Init`, `Timer_GetTicks`, `Resource_Find`, `Message_IsDialog` | 截图/RNG/网络/定时器/资源 |
| **菜单系统 (6)** | `Skirmish_Setup_Screen`, `Skirmish_Setup_DlgProc`, `Credits_Screen`, `Options_Screen_Save`, `Screensaver_Start`, `Dialog_Init` | Skirmish+Credits+屏保+对话框 |
| **DDraw 全局变量 (8)** | `g_lpDirectDraw7`, `g_DDraw_Initialized`, `g_ZBufferDescriptor`, `g_VisibleSurfaceDescriptor`, `g_BitShift_Red/Green/Blue+Mask` | DDraw 引擎状态 |
| **BINK 渲染管线 (13)** | `BinkMovie_RenderLoop`, `BinkMovie_InitFromFile`, `BinkMovie_RenderSingleFrame`, `BinkMovie_BlitToTarget`, `BinkMovie_CheckKeyframeTransition`, `BinkMovie_Pause`, `BinkMovie_AdjustSurfaceFormat` | BINK视频解码→表面渲染→Blit |
| **BINK 表面追踪 (3)** | `BinkMovie_CreateSurfaceTracker`, `BinkMovie_FreeSurfaceTracker`, `BinkMovie_ProcessKeyframe` | BSurface 关键帧过渡处理 |
| **BINK音频系统 (2)** | `Audio_IsSoundEnabled`, `Audio_GetDirectSound` | DirectSound→BINK SetSoundSystem 桥接 |
| **音频全局 (2)** | `g_Audio_Enabled`, `g_pDirectSound` | 音频启用标志 + DirectSound 对象指针 |
| **Locomotor GUID 表 (8)** | `g_CLSID_WalkLocomotion`, `g_CLSID_DriveLocomotion`, `g_CLSID_FlyLocomotion`, `g_CLSID_HoverLocomotion`, `g_CLSID_TunnelLocomotion`, `g_CLSID_DriveLocomotion2`, `g_CLSID_JumpjetLocomotion`, `g_CLSID_ShipLocomotion` | COM 移动类型 CLSID 表 @0x7E9A60 |
| **音频子系统 (4)** | `Audio::ProcessMixerOutput`, `Audio::UpdatePlaybackPosition`, `Audio::GetChannelStatus`, `Audio::FlushChannel` | 混音器输出 + 播放位置 + 通道管理 |
| **音频混音器 (18)** | `g_MixerBuffer{1-8}`, `g_MixerChannel_{SFX/Theme/Voice/Score/Misc/Stream/Ambient}`, `g_MixFile_AUDIO`, `g_AudioFileData`, `g_AudioInitialized` | 8 混音缓冲 + 6 通道 + AUDIO MIX 文件 |

### IDA struct 类型 (4个)
- `BuildingClass_Full` — 已应用于 CreateUnit + 3 callbacks 的 `this` 参数
- `BuildingClass_Production` — 生产成员布局
- `BuildingTypeClass_Production` — 类型成员布局 (660→890偏移)
- `WarheadTypeClass` (61成员), `BuildingTypeClass` (198), `TechnoTypeClass` (293) — YRpp 导入完成

### 项目关键信息

- **命名空间**: `ra2::game` (核心层次) / `gamemd` (其他)
- **枚举跨命名空间**: 用 `static_cast<ra2::game::Mission>(static_cast<int>(gamemd::Mission::X))` 桥接
- **类定义 vs 前向声明**: 必须一致 (class/struct), 24 文件已修复
- **BuildingTypeClass**: 已有 ~270 成员，可直接使用 Type->Xxx
- **HouseClass**: `ra2::game` 仅前向声明, 不能用 `->` 访问成员
- **MIX 格式**: 前 2B=0 为扩展格式; flags 0x0002=加密; 算法来自 RA1 MixFileClass
- **MIX 文件名**: 仅存 hash ID, 不存原始名; 通过 `ComputeId()` 匹配
- **IDA 连接**: `127.0.0.1:13337`, i64 在 `C:\Program Files (x86)\Mental Omega\gamemd.exe.i64`
- **IDA 命名状态**: 345 函数 + 64 全局变量 + 3 struct 类型 (见上方命名清单)
- **Python**: 3.14.2 (`python` 或 `py`), Windows 上已就绪
- **渲染框架**: cnc-ddraw (`./cnc-ddraw`, by FunkyFr3sh) — Phase 1 调试阶段作为 `ddraw.dll` 兼容层运行 EXE
- **EXE 入口**: `app/main.cpp` — WinMain 创建窗口 + 初始化 DirectDraw 7 + 游戏循环
- **启动管线架构**: WinMain → Init_Game → Menu_Select → GameLoop (原版) / WinMain → SpawnMode → GameLoop (SPAWN)
- **外部源码参考**: Ares 0.A (`./Ares`), Syringe (`./Syringe`), Phobos (`./Phobos`), CnCNet Spawner (`./yrpp-spawner`), xna-cncnet-client (`./xna-cncnet-client`)
- **游戏资源**: `RA2YR-FullFiles/*.mix` — CMake 构建后自动拷贝到 EXE 输出目录 (16 个 MIX 文件, ~180MB)
- **MIX Bootstrap**: `MixFileClass::Bootstrap()` 加载 expandmd01/ra2md/langmd/language/ra2 → `FileSystem::LoadFile()` 通过 hash ID 搜索并提取内部文件

### Surface 类层次 vtable 映射 (IDA 已确认)

```
Surface (抽象基类, vtable 0x7e2198, 38 entries)
 └─ XSurface (默认实现, vtable 0x7e2104, 继承大部分)
     ├─ BSurface (软件缓冲区, vtable 0x7e2070, 覆盖 Lock/GetBytesPerPixel/GetPitch)
     └─ DSurface (DirectDraw7, vtable 0x7e85d4, 覆盖 20项)
```

#### DSurface 成员偏移 (构造函数 0x4BA5A0 确认)
| 偏移 | 成员 | 说明 |
|------|------|------|
| +0x04 | Width | 继承自 Surface |
| +0x08 | Height | 继承自 Surface |
| +0x0C | LockCount | 继承自 XSurface |
| +0x10 | BytesPerPixel | DSurface 成员 |
| +0x14 | LockedBuffer | lpSurface 指针 |
| +0x18 | Allocated | bool |
| +0x19 | VRAMmed | bool |
| +0x1C | IDirectDrawSurface7* | DDraw 表面 |
| +0x20 | DDSURFACEDESC2* | DDraw 描述符 (0x6C bytes, 由构造函数 new) |

#### DSurface vtable (38 entries, 全部已命名)

| 索引 | 偏移 | 函数 | 大小 | 说明 |
|-----|------|------|------|------|
| [0] | 0x00 | scalar_dtor | — | 析构 |
| [1] | 0x04 | DSurface_BlitWhole | 23B | 委托 XSurface |
| [2] | 0x08 | DSurface_BlitPart | 75B | 裁剪后 Blit |
| [3] | 0x0C | DSurface_Blit | 1303B | **DirectDraw Blt** (offset20) |
| [4] | 0x10 | DSurface_FillRectEx | 526B | DDBLT_COLORFILL |
| [5] | 0x14 | DSurface_FillRect | 43B | → FillRectEx |
| [6] | 0x18 | XSurface_Fill | 51B | 继承 |
| [7] | 0x1C | DSurface_FillRectWithFlags | 711B | CPU alpha混合填充 |
| [8] | 0x20 | XSurface_DrawEllipseOutline | 1478B | 中点椭圆 |
| [9] | 0x24 | XSurface_SetPixel | 89B | |
| [10] | 0x28 | XSurface_GetPixel | 80B | |
| [11] | 0x2C | XSurface_DrawLineEx | 685B | Bresenham |
| [12] | 0x30 | XSurface_DrawLine | 48B | |
| [13] | 0x34 | DSurface_DrawLineZBuf | 2583B | **Z-Buffer直线** |
| [14] | 0x38 | DSurface_DrawLineModulated | 2735B | 读-改-写直线 |
| [15] | 0x3C | DSurface_DrawLineFaded | 6064B | 渐变直线 |
| [16] | 0x40 | DSurface_DrawLineZBufColored | 2754B | Z-Buffer着色 |
| [17] | 0x44 | XSurface_WalkLine | 511B | Bresenham遍历器 |
| [18] | 0x48 | XSurface_DrawDashedLine | 621B | 虚线模板 |
| [19] | 0x4C | DSurface_DrawDashedLineStipple | 1758B | DSurface虚线 |
| [20] | 0x50 | DSurface_DrawStippledRect | 1537B | 模板矩形 |
| [21] | 0x54 | XSurface_DrawRectEx | 158B | |
| [22] | 0x58 | XSurface_DrawRect | 43B | |
| [23] | 0x5C | DSurface_Lock | 315B | IDDS7::Lock (offset100) |
| [24] | 0x60 | DSurface_Unlock | 154B | IDDS7::Unlock (offset128) |
| [25] | 0x64 | DSurface_CanLock | 95B | 探测可锁性 |
| [26] | 0x68 | Surface_vt_entry_68 | 5B | 返回 true |
| [27] | 0x6C | Surface_IsLocked | 11B | LockCount > 0 |
| [28] | 0x70 | DSurface_GetBytesPerPixel | 4B | |
| [29] | 0x74 | DSurface_GetPitch | 7B | DDSURFACEDESC2.dwWidth |
| [30] | 0x78 | Surface_GetRect | 36B | |
| [31] | 0x7C | Surface_GetWidth | 4B | |
| [32] | 0x80 | Surface_GetHeight | 4B | |
| [33] | 0x84 | DSurface_IsDSurface | 3B | returns true |
| [34] | 0x88 | XSurface_PutPixel | 130B | 单像素写入+边界 |
| [35] | 0x8C | XSurface_GetPixelAtCoords | 119B | 单像素读取+边界 |
| [36] | 0x90 | DSurface_DrawGradientLine | 1499B | 渐变颜色线 |
| [37] | 0x94 | DSurface_CheckBltStatus | 17B | IDDS7::GetBltStatus |

#### IDirectDrawSurface7 vtable 确认使用
| DSurface 调用 | IDDS7 offset | 方法 |
|-------------|-------------|------|
| Blit [3] | 20 (vtable[5]) | **Blt** |
| FillRectEx [4] | 20 (vtable[5]) | Blt (DDBLT_COLORFILL) |
| CheckBltStatus [37] | 52 (vtable[13]) | **GetBltStatus** |
| 构造/GetPitch | 88 (vtable[22]) | **GetSurfaceDesc** |
| Lock [23] | 96 (vtable[24]) | **IsLost** |
| Lock [23] | 100 (vtable[25]) | **Lock** |
| Lock [23] | 108 (vtable[27]) | **Restore** |
| Unlock [24] | 128 (vtable[32]) | **Unlock** |

#### 新增 DDraw 全局变量
| 地址 | 名称 | 说明 |
|------|------|------|
| 0x8a0094 | `g_lpDirectDraw7` | IDirectDraw7 主对象 |
| 0x89F978 | `g_DDraw_Initialized` | DDraw 初始化完成 |
| 0xA8ED80 | `g_DDraw_Active` | DDraw 活动标志 |
| 0x8A0DEF | `g_DDraw_Force3D` | 强制 3D 表面 |
| 0x8205D4 | `g_DDraw_UseHWBlit` | 硬件 Blit 可用 |
| 0x887644 | `g_ZBufferDescriptor` | Z-Buffer 描述符 |
| 0x87E8A4 | `g_VisibleSurfaceDescriptor` | 可见表面描述符 |
| 0x8A0DD0-`0x8A0DE4` | `g_BitShift_Red/Green/Blue+Mask` | 16bpp RGB565 位移 |

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

---

## 跨项目参考：OpenRA / Yuris-Revenge / XCC Mixer

### OpenRA — MIX 文件系统 (C#)
- **`OpenRA.Mods.Cnc.FileSystem.MixLoader`** (`OpenRA/OpenRA.Mods.Cnc/FileSystem/MixFile.cs`)
  - 格式检测：前 2 字节 ≠ 0 → C&C/TD 格式；= 0 → 读 flags，bit1=Blowfish 加密 (RA/TS/RA2)
  - **双哈希索引**：对每个文件名计算 **Classic(TD/RA1)** 和 **CRC32(TS/RA2)** 两种哈希
  - `var bestIndex = crcIndex.Count > classicIndex.Count ? crcIndex : classicIndex;` — 自动选择匹配数更多的哈希算法
  - 嵌套 MIX 加载：`OpenPackage()` → `TryParsePackage()` 递归打开子 MIX
  - 文件名数据库：`XccGlobalDatabase` + `XccLocalDatabase` 映射 hash ID → 文件名

### OpenRA — 资产格式加载
- **SHP 加载器**：`ShpTDLoader`(TD格式) / `ShpTSLoader`(TS/RA2格式) / `ShpD2Loader`(Dune2)
  - RA2 使用 TS 格式 SHP：头 4B file_size + 2B width + 2B height + 2B frames
  - TD 格式 SHP：头 2B frames + 2B width + 2B height
- **调色板**：`PaletteFromFile` — 从 MIX 中按文件名加载 `.pal` 文件
  - YAML 配置：`temperat.pal`, `unitsno.pal`, `anim.pal`, `mousepal.pal` 等
- **文件系统**：`FileSystem.Mount()` — 虚拟文件系统，多 MIX 挂载，**后挂载优先**
  - TS 模式挂载列表：`cache.mix`, `conquer.mix`, `isotemp.mix`, `local.mix`, `sidec01.mix`, `sidec02.mix`, `sno.mix`, `snow.mix`, `sounds.mix`, `tem.mix`, `temperat.mix`, `speech01.mix`, `speech02.mix` 等

### Yuris-Revenge (基于 OpenRA 的 mod)
- 读取原游戏 MIX 文件运行，游戏逻辑有严重错误，但资产读取/渲染代码可参考
- 适用于理解 RA2/YR 的 MIX 文件层级和资产命名

### XCC Mixer — 文件名数据库
- **`xcc/data/ra2 mix description.txt`** (25,584 行) — 完整的 RA2 MIX 文件名列表
- 来源：XCC Mixer (Olaf van der Spek)，社区标准 MIX 工具
- 关键发现：
  - `ra2ts_l.bik` / `ra2ts_s.bik` — **主菜单背景是 BINK 视频，非 SHP**！
  - `ls640*.shp` / `ls800*.shp` — 各国家加载屏幕 SHP
  - `libtem.pal` / `liburb.pal` / `libsno.pal` 等 — 地形调色板
  - `urb.mix`, `generic.mix`, `cameo.mix`, `sidenc01.mix` 等 — 子 MIX 文件名

---

## MIX 文件系统架构总结

### 哈希算法
| 算法 | 项目 | 特点 |
|------|------|------|
| **Classic (TD/RA1)** | RA1, TD | XOR-rotate-left, 不足4字节补0 |
| **CRC32 (TS/RA2)** | RA2, TS | 标准 CRC32 + **TS风格填充**：余数字节=长度差，后补末4字节块末字符 |

**TS CRC32 填充规则** (OpenRA `PackageEntry.HashFilename`):
```cpp
// 长度不能整除4时：
// 1. 追加1字节：(len - lenRoundedDownToFour)
// 2. 如果还有剩余(padding>1)：重复 name[lenRoundedDownToFour] 字符
// 例: "LOCAL.MIX"(9字节) → "LOCAL.MIX" + \x01 + 'X' + 'X' → 12字节 → CRC32
int lenRounded = (len / 4) * 4;
int padding = (len % 4) ? (4 - len % 4) : 0;
crc ^= (uint8_t)(len - lenRounded);  // pad byte
for (int p = 1; p < padding; ++p)
    crc ^= toupper(name[lenRounded]);  // repeat last char
```

### MIX 层级结构
```
工作目录 (所有 .mix 文件自动加载)
├── expandmd01.mix    (33 文件) — YR 扩展数据 + 子MIX容器
├── ra2.mix           (21 文件) — RA2 核心容器
│   ├── temperat.mix  (237 文件) — 温带地形资产
│   ├── snow.mix      (377 文件) — 雪地地形资产
│   └── ... (其他19个未命名的子MIX容器)
├── ra2md.mix         (25 文件) — YR 核心容器
│   ├── isogenmd.mix  (82 文件)
│   └── ... (其他24个未命名的子MIX容器)
├── langmd.mix        (10 文件) — 语言数据
├── language.mix      (6 文件)  — 语言数据
├── multi.mix         (97 文件) — 多人游戏资产
├── multimd.mix      (173 文件) — YR多人资产
├── WDT.MIX          (126 文件) — 地形/调色板
├── MAPS*.mix              — 地图
├── MOVIES*.mix            — 过场动画(.bik)
├── THEME*.mix             — 游戏音乐(.aud)
└── ... (当前共加载16个顶层MIX，递归提取17子MIX → 33总池)
```

### 文件加载链 (IDA 逆向)
```
sub_5B40B0(filename, is_shp)                    // 文件加载器 (0x5B40B0)
  ├── _strupr(Str)                               // 大写
  ├── sub_4A1DE0(Str, len)                       // CRC32 哈希 (0x4A1DE0)
  │     └── 查表 dword_81F7B4 (256项CRC32表)
  ├── 哈希表缓存查找 (dword_ABF00C)
  ├── if is_shp || strstr(Str, ".SHP"):
  │     sub_69E430(buf, filename)                // SHP 加载器 (0x69E430)
  │       ├── sub_4739F0() → 路径解析
  │       └── sub_473B10() → 文件读取
  └── else:
        sub_4A3890()                              // 通用文件加载
```

### 菜单状态机架构 (IDA 逆向 — 完整 19-case switch)

```
Main_Game → Menu_Select (0x52D9A0, 4536B, 222 BBs)
  │
  ├─ case 18: MainMenu_Screen(3600 timeout) → 等待用户交互
  │   └─ MainMenu_DlgProc(0x531F60) → 设置 *WindowLongA[8] = state
  │
  ├─ case 5: Options_Screen_Dialog → Options_Screen_Save → 回到 18
  ├─ case 1: Campaign_Screen(1) → 回到主循环
  ├─ case 4: Campaign_Screen(1) [第二路径] → 回到主循环
  ├─ case 2: Skirmish [GameMode=4] → case 16
  ├─ case 3: Internet [GameMode=3] → case 16
  ├─ case 11: GameMode=5 (Skirmish) → case 16
  │
  ├─ case 6: 确认退出对话框 ("GUI:ExitAreYouSure") → 7(退出) / 18(取消)
  ├─ case 7: Exit — 清理→等待3秒→退出进程
  │
  ├─ case 8: 单人游戏开始 — Credits→场景选择→加载游戏 → case 16/17
  ├─ case 9: 过场动画/BINK播放 → Credits_Screen→Movie_Play → case 1
  ├─ case 13: Movie_Play(1,1,1,0) → Screen_Capture → case 4
  ├─ case 14: Campaign_Screen check + CD检测→可能播电影 → case 4
  ├─ case 15: CreditsPower_Display → case 4
  │
  ├─ case 16/17: 游戏已开始 (Scenario已加载) → 分发到游戏循环
  │   ├─ GameMode 0: 回到 18 (主菜单)
  │   ├─ GameMode 1/2: Campaign → 加载场景+触发
  │   ├─ GameMode 3: Internet → 网络设置+触发
  │   ├─ GameMode 4: Skirmish/LAN → 网络大厅/对战
  │   └─ GameMode 5: 遭遇战 → Skirmish_Setup_Screen(0x6AE2C0)
  │
  └─ case 10: 回到 case 1
```

### MainMenu_DlgProc 控件ID对照表

| DlgItem ID | 功能 | 状态设置 |
|------------|------|----------|
| 1667 (0x683) | Campaign 按钮 | state=1 |
| 1668 | Skirmish 按钮 | state=2 |
| 1400 (0x578) | Multiplayer/Internet 按钮 | state=3 |
| 1670 | 按钮4 (可能是Credits/Intro) | state=4 |
| 1372 (0x55C) | Options 按钮 | 直接调用 Options_Screen_Dialog |
| 1006 (0x3EE) | Exit 按钮 | PostQuitMessage |
| 1818 (0x71A) | BINK 背景播放器控件 | SendMessage 0x4E3→init, 0x4E4→set bg, 0x4F0→cleanup |
| 1821 (0x71D) | 版本信息文字标签 | 显示 "GUI:Version" |
| 1175 (0x497) | 版本查询事件 | swprintf→SendMessage 1821 |

### Options_Screen 控件ID对照表 (Options_Screen_Save @ 0x55FAA0)

| DlgItem ID | 类型 | 全局变量 | 功能 |
|------------|------|----------|------|
| 1323 | Radio Button | lParam (2-way) | 音效/音乐开关 → stru_87F7E8 |
| 1295 | Slider (0-4) | dword_A8EB64 | 游戏速度 |
| 1537 | Checkbox | byte_A8EB7E | 卷屏模式 |
| 1540 | Checkbox | MCV_DeployModeEnabled | MCV 自动部署 |
| 1538 | Checkbox | byte_A8EB80 | 其他开关 |
| 1322 | Slider | dword_A8EB70 | 6 - slider = 音量级数 |
| 1327 | Slider (×0.1) | sub_5FA4A0 → flt_A8EBA0 | 音效音量 (0.0-1.0) |
| 1330 | Slider (×0.1) | sub_5FA510 | 音乐音量 |
| 1334 | Slider (×0.1) | sub_5FA590 | 语音/通知音量 |

### BINK 渲染链 — 完整 IDA 逆向 (新增 11 函数, 已回写 IDA)

```
DlgItem 1818 子类化窗口过程 (WM_PAINT/WM_TIMER)
  └─ BinkMovie_RenderLoop(handle, surface, destX, destY)    @ 0x432E40
       ├─ BinkSetVolume (每帧音量同步)
       ├─ g_DDraw_Active ? BinkPause(handle, 0) : BinkPause(handle, 1)
       ├─ BinkDoFrame(handle) → 解码当前帧
       ├─ BinkMovie_CheckKeyframeTransition(handle+32, frameNum) @ 0x6C9C60
       │     → 返回 true 时调用 BinkMovie_AdjustSurfaceFormat @ 0x433330
       ├─ Surface::Lock(vtable[23]) → buf
       ├─ Surface::GetPitch(vtable[29]), GetHeight(vtable[32])
       ├─ BinkCopyToBuffer(handle, buf, pitch, h, destX, destY, flags)
       ├─ Surface::Unlock(vtable[24])
       ├─ BinkMovie_BlitToTarget(surface) @ 0x433270
       │     → 当前 BINK 帧已渲染到临时 surface, Blit 到最终屏幕位置
       │     → destX = this[4] + (targetW - srcW)/2 + rectLeft
       │     → destY = this[5] + targetH - srcH + rectTop
       └─ BinkNextFrame(handle)
```

**BINK 自定义消息** (发送到 DlgItem 1818):
| 消息 | wParam | lParam | 处理函数 | 功能 |
|------|--------|--------|----------|------|
| 0x4E3 (BINKM_INIT) | 1 | 0 | — | 创建 BinkMovieHandle + DDraw surface |
| 0x4E4 (BINKM_OPEN) | 0 | "Ra2ts_l" | BinkMovie_InitFromFile | 打开 BINK 文件, 设置表面格式 |
| 0x4F0 (BINKM_CLOSE) | 0 | 0 | BinkMovie_Close | 释放所有资源 |

### DIALOGEX 模板 0xE2 — 完整控件布局

**来源**: PE 资源段 .rsrc (文件偏移 0x486930), Python 解析 sz_Or_Ord DIALOGEX

Dialog: 533×369 对话框单位, MS Sans Serif 8pt, Style=0x40000040

| # | ID | 名称 | 类型 | 坐标 (x,y) | 尺寸 | 标题 |
|---|-----|------|------|------------|------|------|
| 0 | 1006 | **Exit** | BUTTON | (425,330) | 108×23 | GUI:ExitGame |
| 1 | 1667 | **Campaign** | BUTTON | (425,125) | 108×23 | GUI:SinglePlayer |
| 2 | 1668 | **Skirmish** | BUTTON | (425,152) | 108×23 | GUI:WWOnline |
| 3 | 1372 | **Options** | BUTTON | (425,233) | 108×23 | GUI:Options |
| 4 | 1400 | **Multiplayer** | BUTTON | (425,179) | 108×23 | GUI:Network |
| 5 | 1684 | GroupBox | STATIC | (425,1) | 108×10 | GUI:MainMenu |
| 6 | 1685 | StatusBar | STATIC | (2,355) | 303×12 | GUI:Blank |
| 7 | 1670 | **Movies** | BUTTON | (425,206) | 108×23 | GUI:MoviesAndCredits |
| 8 | 1818 | **BINK背景** | STATIC | (0,0) | 304×266 | (空) |
| 9 | 1820 | ??? | STATIC | (447,29) | 61×33 | (空) |
| 10 | 1821 | **Version** | STATIC | (425,357) | 108×10 | GUI:Blank |

关键布局: 6 按钮全部 x=425, 108×23, BINK (0,0) 304×266, 底部 StatusBar+Version

### Dialog 系统架构 (Win32 CreateDialogIndirectParamA 封装)

```
Dialog_Create(template_id, dlg_proc, lParam)
  ├── Resource_Find(template_id, type=5) → DLGTEMPLATE*
  ├── CreateDialogIndirectParamA(g_hInstance, template, g_hWnd, dlg_proc, lParam)
  │     启动模态对话框 (非真正模态—消息循环由调用方手动运行)
  └── 注册到内部跟踪数组 (dword_B72F50)

Dialog_BaseProc(hWnd, msg, wParam, lParam)
  ├── 默认对话框过程 — 56 基本块
  ├── 处理 WM_INITDIALOG / WM_COMMAND / WM_PAINT / WM_CTLCOLOR*
  └── 由各子对话框过程调用 (59 个调用方)

Dialog_Show(hWnd)    → ShowWindow(SW_SHOW) + SetWindowPos
Dialog_Destroy(hWnd) → DestroyWindow + 跟踪数组清理

Dialog_MessageLoop()
  ├── GameLoop_MessagePump(&Msg, 0, 0, 0, 0) — 自定义 PeekMessage
  ├── Message_IsDialog(&Msg) — 判断消息是否属于当前对话框
  ├── TranslateMessage + DispatchMessageA
  └── CopyProtection_NotifyLauncher hook

Dialog_PumpMessages() — 便捷封装 (27 调用方)
  ├── Dialog_MessageLoop()
  ├── if GameMode==0||5: Event_Dispatch()
  └── if in-game: sub_55CBF0()→Game_Frame_Loop()
```

### 菜单渲染架构 (IDA 逆向)
```
MainMenu_Screen (0x531CC0)
  ├── 创建对话框模板 0xE2 + DlgItem 1818 BINK背景控件
  ├── 屏幕宽度 > 800 → 居中偏移计算
  ├── DlgItem 1818: 宽屏模式用 ra2ts_l.bik / 窄屏用 ra2ts_s.bik
  ├── 发送 0x4E3 → 初始化 BINK 播放器
  ├── 发送 0x4E4 + "Ra2ts_l" / "Ra2ts_s" → 设置 BINK 文件
  ├── 循环: Dialog_PumpMessages() [timeout=3600 frames(60s)]
  │     ├── 若 bp[0xEA]->Screen_Capture 被触发 → Frame_Present 重绘
  │     └── 返回状态码 → Menu_Select 状态机
  └── WM_CLOSE: SendMessage(DlgItem 1818, 0x4F0) → 清理 BINK
```

### 过场动画处理 (case 9)
```
case 9 (INTRO/BINK):
  dword_A8E7AC++ → Credits_Screen() → dword_A8E7AC--
  sub_558740() → Movie/Cinematic 播放 ("RENEGADE.BIK" 等)
  sub_5587F0() → 检查返回状态
  sub_558790() → 清理
  若成功 → v56=1 (跳过intro) → 直接进游戏
  否则 → 回到 case 1 (Campaign菜单)
```

### Campaign_Screen 通用对话框架构 (0x60D380)

```
Campaign_Screen(template_id):
  ├── Dialog_Create(template_id) → ShowWindow → SetForegroundWindow
  ├── Timer_PumpMessages (注册定时器/screen saver延迟?)
  ├── 若参数=1: BINK_Background_Setup()
  ├── while dwNewLong==0:
  │     ├── Dialog_MessageLoop()
  │     ├── if GameMode==0||5||byte_A8D60E||dword_A8DAB4:
  │     │     Event_Dispatch()
  │     └── else if !sub_55CBF0 && Game_Frame_Loop(): break
  └── Dialog_Destroy → 返回 dwNewLong (下一状态)

注意：Campaign_Screen 是**通用对话框包装器**，被 4 个调用方复用——不仅是战役屏幕，
也作为 Skirmish 地图选择、多人模式设置等屏幕的模板。返回值决定下一步状态。

### CampaignMenu_DlgProc (0x52D640) — 战役菜单对话框过程

| DlgItem ID | 功能 | 状态设置 |
|------------|------|----------|
| 1673 (0x689) | Load Game 按钮 | state=9 |
| 1674 (0x68A) | New Game 按钮 | state=10 |
| 1672 (0x688) | Start Scenario 按钮 | state=8 |
| 1401 (0x579) | Skirmish 按钮 | state=11 |
| 1670 (0x686) | Back to Main Menu | state=18 |
| 1818 (0x71A) | BINK 背景播放器 | WM_CLOSE 时清理 (0x4F0) |
| 0x497 | 存档查询事件 | LoadOptions_Constructor→LoadOptions_Check→EnableWindow |

### Options_Screen 控件ID对照表 (Options_Screen_Save @ 0x55FAA0)

| DlgItem ID | 类型 | 全局变量 | 功能 |
|------------|------|----------|------|
| 1323 | Radio Button | lParam (2-way) | 音效/音乐开关 → stru_87F7E8 |
| 1295 | Slider (0-4) | dword_A8EB64 | 游戏速度 |
| 1537 | Checkbox | byte_A8EB7E | 卷屏模式 |
| 1540 | Checkbox | MCV_DeployModeEnabled | MCV 自动部署 |
| 1538 | Checkbox | byte_A8EB80 | 其他开关 |
| 1322 | Slider | dword_A8EB70 | 6 - slider = 音量级数 |
| 1327 | Slider (×0.1) | sub_5FA4A0 → flt_A8EBA0 | 音效音量 (0.0-1.0) |
| 1330 | Slider (×0.1) | sub_5FA510 | 音乐音量 |
| 1334 | Slider (×0.1) | sub_5FA590 | 语音/通知音量 |

### Dialog 系统架构 (Win32 CreateDialogIndirectParamA 封装)

```
Dialog_Create(template_id, dlg_proc, lParam)
  ├── Resource_Find(template_id, type=5) → DLGTEMPLATE*
  ├── CreateDialogIndirectParamA(g_hInstance, template, g_hWnd, dlg_proc, lParam)
  │     启动模态对话框 (非真正模态—消息循环由调用方手动运行)
  └── 注册到内部跟踪数组 (dword_B72F50)

Dialog_BaseProc(hWnd, msg, wParam, lParam)
  ├── 默认对话框过程 — 56 基本块
  ├── 处理 WM_INITDIALOG / WM_COMMAND / WM_PAINT / WM_CTLCOLOR*
  └── 由各子对话框过程调用 (59 个调用方)

Dialog_Show(hWnd)    → ShowWindow(SW_SHOW) + SetWindowPos
Dialog_Destroy(hWnd) → DestroyWindow + 跟踪数组清理

Dialog_MessageLoop()
  ├── GameLoop_MessagePump(&Msg, 0, 0, 0, 0) — 自定义 PeekMessage
  ├── Message_IsDialog(&Msg) — 判断消息是否属于当前对话框
  ├── TranslateMessage + DispatchMessageA
  └── CopyProtection_NotifyLauncher hook

Dialog_PumpMessages() — 便捷封装 (27 调用方)
  ├── Dialog_MessageLoop()
  ├── if GameMode==0||5: Event_Dispatch()
  └── if in-game: sub_55CBF0()→Game_Frame_Loop()
```

### 菜单渲染架构 (IDA 逆向)
```
MainMenu_Screen (0x531CC0)
  ├── 创建对话框模板 0xE2 + DlgItem 1818 BINK背景控件
  ├── 屏幕宽度 > 800 → 居中偏移计算
  ├── DlgItem 1818: 宽屏模式用 ra2ts_l.bik / 窄屏用 ra2ts_s.bik
  ├── 发送 0x4E3 → 初始化 BINK 播放器
  ├── 发送 0x4E4 + "Ra2ts_l" / "Ra2ts_s" → 设置 BINK 文件
  ├── 循环: Dialog_PumpMessages() [timeout=3600 frames(60s)]
  │     ├── 若 bp[0xEA]->Screen_Capture 被触发 → Frame_Present 重绘
  │     └── 返回状态码 → Menu_Select 状态机
  └── WM_CLOSE: SendMessage(DlgItem 1818, 0x4F0) → 清理 BINK
```

### 过场动画处理 (case 9)
```
case 9 (INTRO/BINK):
  dword_A8E7AC++ → Credits_Screen() → dword_A8E7AC--
  sub_558740() → Movie/Cinematic 播放 ("RENEGADE.BIK" 等)
  sub_5587F0() → 检查返回状态
  sub_558790() → 清理
  若成功 → v56=1 (跳过intro) → 直接进游戏
  否则 → 回到 case 1 (Campaign菜单)
```

### Campaign_Screen 通用对话框架构 (0x60D380)

```
Campaign_Screen(template_id):
  ├── Dialog_Create(template_id) → ShowWindow → SetForegroundWindow
  ├── Timer_PumpMessages (注册定时器/screen saver延迟?)
  ├── 若参数=1: BINK_Background_Setup()
  ├── while dwNewLong==0:
  │     ├── Dialog_MessageLoop()
  │     ├── if GameMode==0||5||byte_A8D60E||dword_A8DAB4:
  │     │     Event_Dispatch()
  │     └── else if !sub_55CBF0 && Game_Frame_Loop(): break
  └── Dialog_Destroy → 返回 dwNewLong (下一状态)

注意：Campaign_Screen 是**通用对话框包装器**，被 4 个调用方复用——不仅是战役屏幕，
也作为 Skirmish 地图选择、多人模式设置等屏幕的模板。返回值决定下一步状态。
```
Campaign_Screen(template_id):
  ├── Dialog_Create(template_id) → ShowWindow → SetForegroundWindow
  ├── sub_54F720 (注册定时器/screen saver延迟?)
  ├── 若参数=1: Screensaver_Start()
  ├── while dwNewLong==0:
  │     ├── Dialog_MessageLoop()
  │     ├── if GameMode==0||5||byte_A8D60E||dword_A8DAB4:
  │     │     Event_Dispatch()
  │     └── else if !sub_55CBF0 && Game_Frame_Loop(): break
  └── Dialog_Destroy → 返回 dwNewLong (下一状态)
```

注意：Campaign_Screen 是**通用对话框包装器**，被 4 个调用方复用——不仅是战役屏幕，
也作为 Skirmish 地图选择、多人模式设置等屏幕的模板。返回值决定下一步状态。

### 当前实现状态
| 组件 | 状态 | 备注 |
|------|------|------|
| MIX 文件加载 | ✅ 工作 | 16顶层 → 递归提取17子MIX → 33池 |
| Blowfish 解密 | ✅ 工作 | `ComputeBlowfishKey` 密钥推导 |
| 文件名→哈希映射 | ⚠️ 部分 | 尝试 CRC32(TS) + Classic 双哈希 |
| 哈希→文件名映射 | ❌ 无 | 需要 XCC 全局数据库 (25,584行) |
| 文件查找 (LoadFile) | ⚠️ 部分 | 遍历33个MIX的哈希索引 |
| SHP 解码 | ✅ 工作 | RLE3 + Raw 格式 |
| 调色板 | ✅ 工作 | 768字节内容扫描 |
| DDraw 渲染 | ✅ 工作 | 手动 Lock/Write/Unlock 已验证 |
| 主菜单 BINK 背景 | ❌ 待实现 | `ra2ts_l.bik` 是 BINK 视频 |
| 主菜单 SHP 按钮/UI | ❌ 待实现 | 需从 XCC 数据库定位文件名→哈希 |
| 过场动画 | ❌ 待实现 | `.bik` 文件在 MOVIES*.mix 中 |
| 游戏音乐 | ❌ 待实现 | `.aud` 格式 (Miles Sound System) |
| VXL/HVA 体素 | ❌ 待实现 | 仅头文件定义，无 .cpp |

---

## 逆向经验 (本会话新增, 2026-06-02)

### INI Key → 成员变量映射验证

**方法**: 反编译类的 READ_INI/ReadINI 函数，查找 `INIClass::GetString(ini, section, "KeyName", ..., this+OFFSET, ...)` 模式。

**WarheadTypeClass 示例** (@ 0x772080):
```
*(this + 0xA4) = ReadInt("Damage", *(this+0xA4));         // Damage
*(this + 0xCA) = ReadBool("MindControl", *(this+0xCA));    // MindControl
*(this + 0xD0) = ReadBool("IsLocomotor", *(this+0xD0));    // IsLocomotor
```
每个 INI key 对应一个成员偏移。如果成员在 IDA struct 中名为 `unknown_*`，说明 YRpp 也未能确定该 key。

**验证工具**: `tools/verify_yrpp_members.py` — 交叉验证 YRpp JSON 与 IDA struct 成员名。结果: 647/647 成员匹配 (4 个核心类)。

### COM GUID 表定位

RA2/YR 的移动系统使用 COM 架构，每种移动类型是注册在 Windows 中的 COM 类，由 128-bit CLSID 标识:

**定位方法**:
1. INI 中看到 GUID 字符串如 `{4A582746-9839-11d1-B709-00A024DDAFD1}`
2. 在 IDA 中用 `find_bytes` 搜索 GUID 的 16 字节二进制格式（注意 Windows GUID 是小端序: `46 27 58 4A 39 98 D1 11 ...`）
3. GUID 表位于 `.rdata` 段 (这里在 0x7E9A60)
4. 用 `xrefs_to` 查每个 GUID 的引用 → 确认对应类名

**GUID 表结构** (0x7E9A60, 8 个 CLSID):

| 地址 | GUID (首 4 字节 LE) | 对应 COM 类 | 引用函数 |
|------|---------------------|------------|----------|
| `0x7E9A60` | `4A582744` | WalkLocomotion | WinMain COM 注册 |
| `0x7E9A70` | `4A582745` | DriveLocomotion | WinMain |
| `0x7E9A80` | `4A582746` | FlyLocomotion | FlyLocomotionClass::ddtor |
| `0x7E9A90` | `4A582747` | HoverLocomotion | InfantryClass::CreateDeployLocomotor |
| `0x7E9AA0` | `55D141B8` | TunnelLocomotion | WinMain |
| `0x7E9AB0` | `2BEA74E1` | DriveLocomotion2 | — |
| `0x7E9AC0` | `92612C46` | JumpjetLocomotion | 10+ 函数 (核心移动) |
| `0x7E9AD0` | `B7B49766` | ShipLocomotion | WinMain |

**GUID 解析链**:
```
INI: Locomotor={4A582746-...}
  → CLSIDFromString("{4A582746-...}", &pclsid)    ← INIClass::ReadGUID_Overwrite @ 0x527920
  → 存入 ObjectTypeClass +844 (16B)
  → CreateInstanceCOM(&pclsid, ...)                 ← 创建 COM 对象
  → COMObject::SwapReference → 替换目标的 ILocomotion 接口
```

### Locomotor 类型推断方法

1. 找到 GUID 的 xrefs → 最多的代码引用数 = 最核心的类
2. `{92612C46-...}` 有 10+ xrefs (FootClass::CalculateApproachPath 等) → Jumpjet
3. `{4A582744-747}` 是连续编号 → Walk/Drive/Fly/Hover 基础类型
4. 调用 `CreateInstanceCOM(&GUID)` 的函数名含 "Locomotor" → 确认用途
5. WinMain 中的 xrefs → COM 类注册时遍历 GUID 表

### IsLocomotor 弹头效果追踪

**目标**: 理解为何 `Warhead.IsLocomotor=yes` + `Locomotor={GUID}` 对敌方单位的移动类型替换效果只在 Jumpjet GUID 时正常工作。

**方法**:
1. 查 WarheadTypeClass struct → IsLocomotor 在 +0xD0, Locomotor 在 +0xD1
2. 反编译 WarheadTypeClass::ReadINI → 确认 INI 读取 key 名
3. 搜索 GUID 的代码引用 (xrefs) → 找核心移动逻辑
4. Jumpjet GUID 被 10+ 函数引用 (FootClass::CalculateApproachPath, InfantryClass::AssignDestination, Mission::ProcessUnitMissionAI…) → 说明引擎代码中有多处 Jumpjet 特判
5. 其他 GUID 仅在 WinMain 注册和自身 ddtor 中出现 → 缺少"临时替换后恢复"的完整生命周期

**结论**: Jumpjet 是唯一在核心移动/任务/AI 代码中有 `if (locomotor CLSID == JumpjetGUID)` 分支检查的移动类型。其他类型缺少这种代码路径，导致 ILocomotion 接口被替换后无法正确恢复。

## 经验教训 (跨项目通用)

### 逆向工程核心原则
- **逆向优先，莫自作主张**: 逆向工程的核心目标是**复现原版行为**，而非按个人理解重新设计。应通过 IDA 反编译理解原函数的调用约定/控制流/数据依赖，再逐函数忠实翻译为 C++。自行编写简化版或替代逻辑会导致与原版行为偏离、后续对接时产生大量废代码。
- **函数重命名后即时同步**: 从 IDA 反编译理解函数功能后，应立即用 `rename` 工具回写 IDA 并 `idb_save` 持久化。后续反编译输出会自动使用已命名函数，可读性指数级提升。
- **避免地址编号命名**: 代码中不应使用 `Sub_48D080` 这类 IDA 自动编号命名。应根据功能命名（如 `Event_Dispatch`）并同步回 IDA，使二进制 → 源码双向可读。

### 数据结构与兼容性
- **大型常量表**: 避免手动录入大量常量（如加密算法的 S-box）。应编写脚本从可信来源提取并生成代码文件。
- **增量验证不可省**: 加密/压缩/序列化等复杂算法必须逐段端到端验证（引擎核心→密钥计算→完整解密），否则难以定位错误。

### IDA 批量改名方法论 (2026-06-02 总结)

#### 成员函数判断标准（可靠性排序）

| 方法 | 置信度 | 原理 |
|------|--------|------|
| vtable 中出现 | **100%** | MSVC 虚函数表条目必定是虚成员函数 |
| `__thiscall` 调用约定 | **~95%** | MSVC 成员函数使用 thiscall (this→ECX, callee清栈) |
| 构造/析构模式 (`mov [ecx], vtable_ptr` + `ret this`) | **>99%** | 构造函数特有模式 |
| 旧 `.i64` `ClassName_MethodName` 命名 | **不可靠** | 仅是模块组织方式（如 `AudioMixer_Init`），不等同于类成员 |

#### 批量改名管线

```
Phase 1: Vtable 扫描
  ├─ 扫描 .rdata 段所有 → .text 的函数指针 dword
  ├─ 按连续性分组为 vtables (gap ≤ 16 bytes)
  ├─ 已命名(含::)函数多数投票确定 vtable 所属类
  ├─ 可疑大 vtable (>100条) 需检测子划分
  ├─ 未命名 → ClassName::sub_XXXXXX
  └─ 缺:: → ClassName::ExistingName

Phase 2: Thiscall 批量检测
  ├─ 找出非vtable、不含::、但名中嵌入类名的函数
  ├─ tif.dstr() 检查原型字符串是否含 __thiscall
  └─ thiscall → 确认成员, 取最长类名匹配改名

Phase 3: 旧 .i64 交叉验证
  ├─ 提取旧 .i64 所有地址→(类名,方法名) 映射
  ├─ 注意: 旧命名 ClassName_MethodName 不保证是成员
  ├─ 仅当目标地址在 vtable 或 thiscall 确认后才改为 ::
  └─ 旧 .i64 可能有新 .i64 未记录的类名（从 _ 格式提取）

Phase 4: 清理
  ├─ 双重前缀: ClassName::ClassName_Method → ClassName::Method
  ├─ j_ 跳转: WrongClass::j_RealClass_Method → RealClass::Method
  ├─ loc_/__RTC_ 在 vtable 中 → sub_ 格式
  └─ nullsub 永远不应有 :: 前缀
```

#### 常见改名错误及修复

| 错误 | 错误示例 | 正确结果 |
|------|----------|----------|
| 双重类名前缀 | `VectorClass::VectorClass_vt00` | `VectorClass::vt00` |
| j_ 跳转丢失类名 | `MouseClass::j_SidebarClass_InitButtons` | `SidebarClass::InitButtons` |
| loc_ 在 vtable | `AbstractClass::loc_45FE50` | `AbstractClass::sub_45FE50` |
| 短词类名贪婪匹配 | `Control::InitAudioController` | `AudioController::Init` |
| nullsub 被加前缀 | `nullsub::2` | `nullsub_2` |

#### 类名提取规则

从 `VerbNounClassName` 格式函数名提取类名时必须:
1. 取**最长匹配**且有意义的类名（优先前缀或后缀位置）
2. 短通用词（Control/Count/File/Stream/Buffer/nullsub）不应优先于长专用词（AudioController/RefCount/AudioStream）
3. 先用已有 `::` 命名的函数构建已知类字典，找不到时从 `_` 格式名补充

#### Thiscall 检测方法

```python
# IDA 9.2: 无 FUNC_THISCALL 标志位, 需用 tinfo_t.dstr()
tif = ida_typeinf.tinfo_t()
if ida_nalt.get_tinfo(tif, ea):
    proto = tif.dstr()  # e.g. "int __thiscall(int *this)"
    is_thiscall = "__thiscall" in proto
```

#### IDA Python 踩坑

- `xrefblk_t` 非 `xrefblt_t` (类名不同)
- `ida_funcs` 无 `FUNC_THISCALL` 标志
- `tinfo_t.get_cc()` 不存在, 用 `dstr()` 解析
- `func_type_data_t.cc` 属性不可用
- `py_eval` 对大脚本有限制，大操作写 `.py` 文件后用 `py_exec_file` 执行

### BINK SDK 踩坑总结 (项目特定)

| # | 问题 | 表现 | 根因 | 修复 |
|---|------|------|------|------|
| 1 | BINK 画面模糊/低分辨率 | 视频呈现方块像素 | `_BinkNextFrame` 在 `_BinkCopyToBuffer` 之前调用，复制到用户缓冲区时已失效 | NextFrame 必须在 CopyToBuffer 之后（SDK 顺序: DoFrame→CopyToBuffer→NextFrame） |
| 2 | BINK 完全不可见 | 黑屏 | `_BinkWait` 在 AdvanceFrame 和 RenderFrameRaw 中双重调用，破坏 BINK 帧时序 | 仅在 RenderFrameRaw 的 CopyToBuffer 前调用一次 BinkWait |
| 3 | BINK 不可见（第二个原因） | 表面 Lock 失败/超时 | cnc-ddraw 翻转链后缓冲不支持 `Lock()` | 渲染到独立离屏表面(DDSCAPS_SYSTEMMEMORY)，Lock→渲染→Unlock，再双Lock→memcpy→Flip |
| 4 | BINK 无声 | 无音频 | `BinkSetSoundSystem` 传入 `BinkOpenDirectSound` + param=0 可能阻塞 | 需正确实现 DirectSound 初始化后才调用 |
| 5 | 按钮不可见 | UI 不显示 | Win32 对话框 `WS_EX_TOPMOST` 覆盖 DDraw 渲染 | 对话框必须作为 DDraw 窗口的**子窗口**（非 POPUP） |
| 6 | 对话框创建失败 | error 1407 | cnc-ddraw fullscreen 下 `CreateDialogIndirectParamA` 找不到窗口类 | 需要 comctl32 链接 + `InitCommonControls()` |
| 7 | cnc-ddraw 模糊 | BINK 像素模糊 | ddraw.ini 默认 `d3d9_filter=2` (双三次过滤) + bilinear shader | 改为 `d3d9_filter=0` (最近邻) + 注释 shader |
| 8 | SHP 按钮加载失败 | 尺寸 2x0 | button00.shp 头部 `0000 3400 2000 0200` 非标准 TS/TD 格式 | 待修复 SHP 解析器 |

### 主菜单完全还原计划 (R0 — 最高优先级)

**当前状态**: BINK 背景 ✅ / 按钮色块 ✅ / 布局 0xE2 ✅ / SHP 按钮 ❌ / 对话框系统 ⚠️

#### R0-6: 主菜单渲染完整性

| # | 描述 | 依赖 | 估算行 | 状态 |
|---|------|------|--------|------|
| R0-6a | 修复 SHP 按钮加载 (button00-04.shp 非标准头部) | SHP 解析器 | ~50 | ❌ |
| R0-6b | SHP 按钮帧渲染 (普通/悬停/按下 3 帧切换) | R0-6a | ~60 | ❌ |
| R0-6c | 版本号文字 (DlgItem 1821, "GUI:Version") | 字体渲染 | ~20 | ❌ |
| R0-6d | BINK 音频 (BinkSetSoundSystem + DirectSound) | DirectSound | ~80 | ❌ |
| R0-6e | 主菜单 BINK 循环播放 (BinkWait 时序修复) | BINK SDK | 已完成 | ✅ |
| R0-6f | Dialog/Gadget 系统对接 (WM_COMMAND→MenuState) | 对话框 | ~50 | ⚠️ |
| R0-6g | Campaign/Options/Multiplayer 子菜单 SHP 背景 | MIX资产 | ~100 | ❌ |

## 编码约定

1. `namespace gamemd` 或 `namespace ra2::game`
2. `enum class` + `constexpr operator|` for bit flags
3. 虚函数按 YRpp vtable 顺序，`__stdcall__` 调用约定
4. C++20: `noexcept`、`override`、`constexpr`、`= default`
5. RA1 为结构参考，YRpp 为偏移参考，IDA 为二进制验证，cnc-ddraw 为渲染接口参考
6. 前向声明必须匹配实际定义 (class vs struct)
7. MIX 文件名仅存 hash ID，不保存原始文件名
8. DirectDraw 调用使用标准 Windows SDK 接口 (Phase 1)，搭配 cnc-ddraw 兼容层运行调试

### IDA 函数命名规范 — 成员 vs 全局判定

**核心认知**: **vtable 只覆盖虚函数**。非虚成员函数（构造/析构/普通方法/静态方法）不在 vtable 中，但仍是类成员。不能仅凭"不在 vtable"就判为全局函数。

#### 成员函数判定方法（按可靠性排序）

| 判定方法 | 置信度 | 覆盖范围 | 检测方式 |
|----------|--------|----------|----------|
| **vtable 中出现** | 100% | 仅虚成员函数 | 扫描 `.rdata` 段，函数指针出现在连续 vtable 块中 |
| **`__thiscall` 调用约定** | ~95% | 虚 + 非虚成员函数 | `tif.dstr()` 返回字符串含 `__thiscall` |
| **构造/析构模式** | >99% | 构造/析构函数 | 代码模式：`mov [ecx], vtable_ptr` + `ret this` |
| **旧 `.i64` 命名 `ClassName_MethodName`** | 不可靠 | — | 仅作参考，需 vtable 或 thiscall 验证 |
| **`__stdcall` / `__cdecl`** | ~90% 为全局 | 全局函数或静态成员 | 静态成员函数也用 `__stdcall`，无法与全局函数区分 |

**关键陷阱**:
- ❌ **"不在 vtable = 全局函数"** — 最危险的误解。非虚成员函数不在 vtable 中但 `__thiscall` 调用约定清晰可辨
- ❌ **"旧命名 `ClassName_MethodName` = 成员函数"** — MSVC 时代常用 `ModuleName_FunctionName` 做模块组织（如 `AudioMixer_Init`），并非类成员声明
- ❌ **"Vtable 条目 = 该类的所有成员函数"** — vtable 只含虚函数，不包括构造/析构/非虚方法/静态方法

#### 命名格式

| 函数类型 | 格式 | 示例 |
|----------|------|------|
| **成员函数**（虚/非虚/构造/析构） | `ClassName::Method` | `BulletClass::FlightUpdate`, `AudioController::Init` |
| **全局函数** | `VerbNounPhrase` (PascalCase 动宾结构) | `DistributeRandomMapTerrain`, `ComputeBlowfishKey` |
| **未命名 vtable 条目** | `ClassName::sub_XXXXXX` | `BuildingClass::sub_45A3C0` |
| **静态成员函数**（暂无法区分） | 保守用 `VerbNounPhrase` | — |

**禁止事项**:
- ❌ 全局函数用 `ClassName_Method` 格式 — 与 `ClassName::Method` 混淆
- ❌ 全局函数名含下划线 `_` — 应使用 PascalCase
- ❌ `nullsub` 被加 `::` 前缀 — nullsub 不是类名
- ✅ `ClassName::ClassName_Method` 双重前缀 → 修复为 `ClassName::Method`
- ✅ `WrongClass::j_RealClass_Method` → 修复为 `RealClass::Method`

**批量分类流程** (每次对新批次函数命名前执行):
1. **Vtable 扫描**: 扫描 `.rdata` → 分组连续函数指针为 vtable → 用已有 `::` 命名多数投票确定 vtable 所属类 → 未命名条目赋 `ClassName::sub_XXXXXX`
2. **Thiscall 检测**: 非 vtable、非 `::` 的函数 → `tif.dstr()` 检查 `__thiscall` → 确认成员 → 从函数名提取最长匹配的类名 → `ClassName::Method`
3. **旧 DB 交叉验证**: 利用旧 `.i64` 的地址→命名映射，但必须经 vtable 或 thiscall 验证后才转换为 `::` 格式
4. **清理**: 修复双重前缀、`j_` 跳转、`loc_`/`__RTC_` 等错误格式

## 下一步 (Next Steps)

### 当前计划 (2026-06-01 更新)

| 步骤 | 状态 | 详情 |
|------|------|------|
| 1. Vtable 识别/类映射 | ✅ | 1,084 vtables, 934 RTTI 类名 |
| 2. Struct 类型声明 | ✅ | YRpp 导入 25+ 核心类 (RulesClass 722/BuildingTypeClass 185/TechnoTypeClass 290 等) |
| 3. 函数签名更新 | ✅ | Building/Rules/Techno 等方法 this 指针类型已应用 |
| 4. 逆向未命名成员函数 | 🔄 | ~345 函数已手工反编译并命名 |
| 4.5 全局变量重命名 | ✅ | ≥20 xrefs: 336 个全部命名+深度验证, ≥30: 157, 20-29: 179 |
| 4.6 INI 读取函数命名 | ✅ | 281/281 (100%) |
| 4.7 音频子系统命名 | ✅ | 4 sub_ 命名 + 18 全局变量 |
| 5. 类成员变量逆向 | ⏳ | 待开始 |
| 6. 完成 3+ xref pool | ✅ | 3,201/3,230 (99.1%) |

### 当前会话成果 (2026-06-03)
- **音频子系统完整逆向**: 4 个剩余 `Audio::sub_*` 全部命名, 18 个混音器全局变量命名
- **Audio.md 完成**: 覆盖初始化→WAV/AUD→Miles→EVA→Theme→BINK 音频全管线
- **INI 读取函数**: 281/281 (100%) callers of INIClass::GetString/ReadBool/ReadInt/ReadGUID 全部命名
- **`callsYRpp_*` 消除**: 266 → 0, 四阶段自动+手工验证
- **统计数据结构化**: 大小×xref 二维交叉表, 3 个维度 (全部/成员/全局), 2 的幂分级
- **IDA 保存**: 累计命名 ~8,727 函数 + ~2,633 全局变量

### 当前会话成果 (2026-06-01)
- YRpp struct 批量导入: 25+ 核心类含 1500+ 字段映射到 IDA
- 全局变量重命名: ~390 高引用变量, 类型/宽度修复 (深度验证准确率 ~95%)
- 函数命名: ~240 (BuildingClass::Draw/ProcessSpreadEffect/TeamClass::Update/InfantryClass::Draw 等)
- 全局变量检查: 17 "State"→对象, 4 "Pool"→Manager 修正
- 反编译质量: `BuildingClass *this` 替代原始指针, `this->AmmoCrateDamage` 替代 `*(this+0x0C)`
- 总计: ~8,470/19,064 函数 + ~390 全局 + 25 struct 类型, 构建 0 errors

### 当前会话成果 (2026-06-03 第二批) — 类成员变量逆向
- **AudioController sizeof 修复**: 7→5 dwords (0x1C→0x14 bytes), 构造函数确认 gap 0x3C→0x50
  - 影响: ObjectClass, TechnoClass (m_audio3/4/5/6), FootClass, BuildingClass 等所有包含 AudioController 的类
- **ObjectClass 布局验证**: 全部字段 offset 与构造函数一致 (0x5F3900)
- **TechnoClass AudioController 级联验证**: m_audio3@0x488, m_audio4@0x4A4, m_audio5@0x4C0, m_audio6@0x4DC — 全部正确
- **FootClass 布局验证**: 构造函数 (0x4D31E0) 字段初始化序列与 header 一致
- **Unknown Field Inventory**: 523 个 `unknown_*` 成员分布在 55 类中, 编制完整清单
- **验证工具**: `tools/verify_layout.py` — 可复用 IDA 构造函数→header 交叉验证脚本

### 类成员变量 — 完整 Inventory

| # | 类 | 文件 | 未知数 | 优先级 | 状态 |
|---|------|------|--------|--------|------|
| 1 | **TechnoClass** | `object/techno.hpp` | **35** | P0 | ⏳ |
| 2 | **FootClass** | `object/foot.hpp` | **41** | P0 | ⏳ |
| 3 | **BuildingClass** | `structure/building.hpp` | **17** | P0 | ⏳ |
| 4 | **ObjectClass** | `object/object.hpp` | **4** | P1 | ✅ 已验证 |
| 5 | **InfantryClass** | `structure/infantry.hpp` | **6** | P1 | ⏳ |
| 6 | **UnitClass** | `structure/unit.hpp` | **3** | P1 | ⏳ |
| 7 | **AircraftClass** | `structure/aircraft.hpp` | **8** | P1 | ⏳ |
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

### 成员变量逆向 — 方法论

**方法**: 构造函数→header 交叉验证 + YRpp 交叉引用 + IDA 字段访问追踪

1. **构造函数验证** (最高置信度): 检查构造函数中 `mov [esi+OFFSET], value` 序列与 header 字段布局是否一致
2. **YRpp 交叉引用** (高置信度): YRpp 运行时分析已命名绝大部分字段 (匹配率 ~97.7%), 仅 15 个内部计算字段未确定
3. **IDA 字段访问追踪** (中等置信度): 搜索特定 offset 的读写指令, 分析调用上下文推断用途
4. **AudioController sizeof 陷阱**: 原以为是 7 dwords (28B), 构造函数确认 5 dwords (20B = 0x14). 使用 `tools/verify_layout.py` 脚本验证所有包含 AudioController 的类.

### 待完成 (按优先级)
1. 继续 vtable 成员函数逆向 (剩余 ~2,444 `::sub_` 未命名)
2. 类成员变量逆向: BuildingClass(17) → InfantryClass(6) → UnitClass(3) → AircraftClass(8)
3. 10-19 xrefs 全局变量 (~180 个)
4. 后续 R1: 游戏内等距视图渲染

---

## BINK + 主菜单踩坑全记录 (2026-05-31)

### 工作基线: commit `20baad6`

这是已知 BINK 视频质量和播放速度正常（但无循环）的提交。其 BINK 管线为：

```cpp
// AdvanceFrame (20baad6) — 已验证画质+帧率正常
bool BinkMovieHandle::AdvanceFrame() {
    if (!m_playing) return false;
    if (m_bink_handle) {
        if (m_throttle_counter++ % 4 != 0) return true;  // 计数器节流, 返回 true
        int doFrameResult = s_BinkDoFrame(m_bink_handle);
        if (doFrameResult < 0) {  // 循环检测 (未生效, 因为 BinkDoFrame 不返回负值)
            s_BinkGoto(m_bink_handle, 0, 0); m_current_frame = 0; m_throttle_counter = 0;
            doFrameResult = s_BinkDoFrame(m_bink_handle);  // ← 关键: Goto后必须再 DoFrame
            if (doFrameResult < 0) { m_playing = false; return false; }
        }
        s_BinkWait(m_bink_handle);   // 解压同步
        s_BinkNextFrame(m_bink_handle);  // 推进帧 (注意: 在 CopyToBuffer 之前)
        ++m_current_frame;
        return true;  // 始终返回 true (不门控渲染)
    }
    // ... 软件回退 ...
}

// RenderFrameRaw (20baad6)
void BinkMovieHandle::RenderFrameRaw(buf, pitch, h, dx, dy) {
    if (!locked_buffer || !m_playing) return;
    if (m_bink_handle && s_BinkCopyToBuffer) {
        s_BinkWait(m_bink_handle);   // 再次同步
        s_BinkCopyToBuffer(m_bink_handle, buf, pitch, h, dx, dy, m_surface_flags);
    }
}

// 主菜单循环 (20baad6)
movie->AdvanceFrame();  // 返回值存在 bikAdvanced 但未使用
Lock → RenderFrameRaw → Unlock → Flip  // 每帧都渲染，不受门控
```

**关键特征**: 计数器节流每4帧推进一次，但每帧都调用 RenderFrameRaw（CopyToBuffer 复制同一帧）。AdvanceFrame 始终返回 true（即便油门跳过也不返回 false），因此主循环不门控渲染。

### BINK 踩坑详细记录

| # | 修改尝试 | 结果 | 失败原因 |
|---|---------|------|---------|
| **B1** | 修复 NextFrame 顺序: DoFrame→CopyToBuffer→NextFrame | 画面模糊 | CopyToBuffer 后无 BinkWait 同步 |
| **B2** | AdvanceFrame 返回 false 时跳过渲染(门控) | 黑屏 | 首帧被跳过, 屏幕无初始化内容 |
| **B3** | BinkWait 放在 AdvanceFrame 开头做节速 + 门控 | 黑屏 | 首帧 BinkWait 可能返回非零; 门控导致首帧不渲染 |
| **B4** | BinkWait 放在 AdvanceFrame 末尾(NextFrame 之后) | UI 冻结 | BinkWait 内部 Sleep(1) 阻塞主循环, 消息泵无法运行 |
| **B5** | 把 DoFrame 移到 RenderFrameRaw, AdvanceFrame 只管节流 | 帧率异常 | 改变了 BINK SDK 调用时序, 内部状态混乱 |
| **B6** | m_frame_decoded 门控: AdvanceFrame 标记,RenderFrameRaw 检查 | 复杂且 buggy | AdvanceFrame 返回 false(跳过)后 m_frame_decoded 状态不一致 |
| **B7** | BinkWait 双重调用 + 无节流 | 帧率太快 | BinkWait 只做解压同步,不做显示节速(需 NextFrame 后调用体积算才生效) |
| **B8** | 计数器节流 + BinkWait 双重(先门控再解压) | 帧率太快 | 同上, BinkWait 位置不对 |
| **B9** | 纯 BinkWait 放在 DoFrame 前门控(去除计数器) | 帧率不对 | BinkWait 内部时序计算可能未正确初始化(*(handle+512)字段问题) |
| **B10** | BinkGoto 之后缺失 DoFrame 调用 | 循环后画面花屏 | BinkGoto 内部 seek 后需 DoFrame 解码第0帧, 否则 CopyToBuffer 拷贝垃圾数据 |

### BINK 循环检测

| 尝试 | 检测方式 | 结果 |
|------|---------|------|
| C1 | `doFrameResult < 0` | 不触发 (BinkDoFrame 返回 0 或正值, 从不负) |
| C2 | `doFrameResult == 0` | 立即触发 (正常帧也返回 0, 判断方向反了) |
| C3 | `doFrameResult != 0` | 已实现但未测试能否正确触发 |
| C4 | `*(handle+12) >= *(handle+8)` (BINK 内部计数器) | 未充分测试 (偏移可能不对) |

### 主菜单渲染踩坑

| # | 修改尝试 | 结果 | 失败原因 |
|---|---------|------|---------|
| **M1** | Win32 GDI 按钮 + cnc-ddraw 默认配置 | 按钮不可见 | cnc-ddraw `nonexclusive=false` 下 OpenGL 渲染覆盖 GDI 子窗口 |
| **M2** | 纯 DDraw 手工渲染按钮(彩色矩形+位图字体) | 按钮可见但用户不满意 | 用户要原游戏素材(button*.shp) |
| **M3** | DDraw 手工渲染 + SHP 按钮加载 | SHP 加载失败 | button*.shp 非标准格式, 新老解析器均无法解析 |
| **M4** | Win32 dialog + GDI 按钮 + `nonexclusive=true` | 按钮可见但闪烁 | DDraw Flip 和 GDI WM_PAINT 时序不同步 |
| **M5** | BS_OWNERDRAW 自定义绘制按钮 | 不可见 | GDI 在 cnc-ddraw 表面上渲染有问题 |
| **M6** | WM_COMMAND 路由(BN_CLICKED) | 点击无反应 | 可能是 IsDialogMessageA 拦截或对话框窗口过程未正确子类化 |
| **M7** | WM_LBUTTONDOWN 手动命中检测 | 未充分测试 | 刚实现, 用户报告仍无效 |
| **M8** | IsDialogMessageA 用于键盘导航 | 无效果 | 可能与对话框类不匹配 |

### SHP 按钮素材

- 哈希 ID: button00=0x0D2B157D, button01=0x304B3CCD, button02=0x77EB461D, button03=0x4A8B6FAD, button04=0xF8ABB3BD
- **确认存在于 MIX**: sub:0x5B0D6FBD, 每文件 3384 字节
- **原版 gamemd.exe 中零引用**: IDA 搜索 `0x0D2B157D` 等无结果 → 原版主菜单不使用 button*.shp
- **原版使用标准 Win32 GDI BUTTON 控件** + CSF 字符串表 (如 "GUI:SinglePlayer")
- **格式问题**: 头部 `0000 3400 2000 0200` 既不是标准 TS 也不是 TD 格式
- 前2字节 0x0000 => TS格式标记, 但 `3400 = 52`(可能是width), `2000 = 32`(可能是height), `0200 = 2`(可能是frames)

### cnc-ddraw 兼容性

- `nonexclusive=true` 是让 GDI 子窗口能叠加到 DDraw 表面的**必要条件** (cnc-ddraw 用 OpenGL/D3D9 渲染,默认覆盖所有 GDI)
- 这不是修改游戏逻辑, 是配置软件渲染器模拟真实 DirectDraw 硬件行为
- `d3d9_filter=0` 消除 bilinear 过滤造成的 BINK 模糊
- `maxfps=60` 在 `nonexclusive=true` 下可能不生效 (Flip 不阻塞)

### CMake / Git 构建

- `file(GLOB_RECURSE)` 在 cmake 配置时展开, 切换分支后需重 run `cmake -B build_win ...`
- Post-build `copy_directory` 在目标已存在且文件被锁时失败 (不影响编译结果, 仅影响资源复制)
- `src/entity/voxel.cpp` 在 commit `88c70de` 添加, checkout 较早 commit 需重 configure

### binkw32.dll IDA 分析关键发现 (port 13338)

- `_BinkWait@4` (0x1000A3C0): 返回 0=帧就绪, 1=未到显示时间; 内部调用 `Sleep(1)` 做微等待
  - 初始化检查: `*(handle+528)==0` → `sub_10009B90` 初始化计时
  - 节速计算: `v4 = *(handle+24) * (1000***(handle+512) - 1000***(handle+532)) / *(handle+20)`
  - Ready条件: `currentTime - lastFlipTime >= v4`
- `_BinkDoFrame@4` (0x10009BC0): 返回 0=成功或已解码, 非0=错误或已结束
  - 入口检查: `*(handle+0x280) == *(handle+0x0C)` → 已解码则返回0
  - 错误状态: `*(handle+0x1C)` 置位则返回 1
- `_BinkGoto@12` (0x1000A220): flag=1 快速seek, 内部 DoFrame+NextFrame 循环到目标帧
- `_BinkNextFrame@4` (0x1000A0C0): 推进帧计数, 调用 `sub_1000A110`(音频) + `sub_10008AF0`(设定帧)
- `_BinkSetVolume@8`: 音量=Math_RoundToInt(float*32768), 手柄+4=音量值

### gamemd.exe IDA 关键函数 (port 13337)

- `BinkMovie_InitFromFile` (0x432750): BinkOpen→SetSoundSystem→SetVolume→CreateSurfaceTracker→SetPosition
- `BinkMovie_RenderLoop` (0x432E40): DoFrame→Lock→CopyToBuffer→Unlock→BlitToTarget→NextFrame→Wait
- `BinkMovie_Play` (0x432C70): 主循环 `while(current<total && current>=loopStart)` {pump→RenderLoop}
- `MainMenu_Screen` (0x531CC0): Dialog_Create(0xE2)→Dialog_SetParent→Dialog_PumpMessages 循环
- `MainMenu_DlgProc` (0x531F60): WM_COMMAND(button ID→state), WM_CLOSE(BINK cleanup)
- `sub_432BD0`: BinkGoto(handle, frame, 1) 封装 (flag=1 快速 seek)
- `Audio_IsSoundEnabled` (0x407000): 检查 `g_Audio_Enabled`
- `Audio_GetDirectSound` (0x40A7A0): 返回 `g_pDirectSound`
- `BinkMovie_Pause` (0x432C30): BinkPause 调用

### IDA 命名 (~8,727 函数 + ~2,633 全局变量 + 25+ struct 类型, 已保存 .i64)

### 当前会话新增命名 (2026-06-03)
- 4 音频函数: `Audio::ProcessMixerOutput`, `Audio::UpdatePlaybackPosition`, `Audio::GetChannelStatus`, `Audio::FlushChannel`
- 18 音频全局: `g_MixerBuffer{1-8}`, `g_MixerChannel_{SFX/Theme/Voice/Score/Misc/Stream/Ambient}`, `g_MixFile_AUDIO`, `g_AudioFileData`, `g_AudioInitialized`

### 正确的前进方向

1. **BINK 管线**: 保持 20baad6 的 AdvanceFrame + RenderFrameRaw 结构不动。**只修复循环检测**：需确认 `doFrameResult != 0` 或 `BinkWait 返回非零且帧计数到末尾` 哪个正确触发。当前代码(HEAD=828ffbc)已改为 `doFrameResult != 0` 但未充分测试。
2. **主菜单按钮**: 原版用 GDI + DIALOGEX 模板 0xE2。按钮素材不是 SHP，是 Windows 标准控件 + CSF 字符串。cnc-ddraw 需 `nonexclusive=true` 才能显示 GDI 子窗口。
3. **SHP 素材**: button*.shp 虽存在于 MIX，但原版主菜单不使用（可能用于游戏内 UI）。需修复 SHP 解析器支持其非标准格式。
4. **构建**: 切换分支后务必 `cmake -B build_win -G "Visual Studio 17 2022" -A Win32` 重配置。
5. **渲染架构**: 原版整个主菜单由 `Dialog_PumpMessages` 驱动，BINK 在 DlgItem 1818 的 subclass 内部渲染，按钮由 GDI 渲染。在 cnc-ddraw 下完全复现此架构需要 `nonexclusive=true`。

---

## YRpp vt_entry 偏移映射 (2026-06-02 破解)

### 公式

```
vt_entry_XXX → index = XXX / 4 → vtable[0] + XXX → 读取函数指针 → 重命名为 ClassName::MethodName
```

### 关键发现

1. **vtable[0] 实际大小远超预期**: BuildingClass 主 vtable 有 **322** 条目 (之前误认为 100)，是从 AbstractClass 开始的完整累积表
2. **所有 MI 游戏类共享同一 vtable[0] = 0x7E3EBC**: BuildingClass/TechnoClass/FootClass/ObjectClass/MissionClass 等共用 MSVC 的完整 vtable 块
3. **简单继承类各有独立 vtable**: XSurface(0x7E2104), DisplayClass(0x7E6114), ObjectTypeClass(0x7E2868), MPBattleClass(0x813F60) 等

### 验证（BuildingClass 7 个 vt_entries）

| vt_entry | 索引 | 函数 |
|----------|------|------|
| 0x490 | 292 | BuildingClass::EvacuateFootprintCells |
| 0x4D4 | 309 | BuildingClass::ValidateFoundation |
| 0x4D8 | 310 | BuildingClass::DistanceToTarget |
| 0x4E4 | 313 | BuildingClass::DrawPlacementPreview |
| 0x4E8 | 314 | BuildingClass::GetTurretAngle |
| 0x4EC | 315 | BuildingClass::ProcessDemolish |
| 0x504 | 321 | BuildingClass::StubReturn0 |

### Phase 3 脚本

`tools/apply_yrpp_vt_entries.py` — 155/174 条目已成功重命名为 `ClassName::MethodName` 格式。19 个被跳过（小型类的 vtable 地址未发现），4 个 FootClass 条目越界（可能引用 vtable[1-3]）。

### 模板容器类 _vtNN

已全部消除 3,436 → 0。按 vtable 索引模式批量重命名（Add/Remove/QueryInterface/AddRef/Release/ddtor）。

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
| MPBattleClass | 0x813F60 | — | .data 段
