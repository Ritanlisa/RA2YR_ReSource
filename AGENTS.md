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
| IDA 命名 | **140 函数 + 36 全局变量 + 3 struct 类型** |
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
| R0-4a | Campaign_Screen: 阵营选择 SHP 按钮 + Start/Back (参考 IDA `Campaign_Screen` 0x52E0E0) | `src/core/menu_select.cpp` | R0-2 | ~60 |
| R0-4b | Multiplayer_Screen: 网络模式选择 (参考 IDA `Multiplayer_Screen` 0x52F0A0) | `src/core/menu_select.cpp` | R0-2 | ~60 |
| R0-4c | Options_Screen: 游戏设置对话框 (参考 IDA `Options_Screen` 0x530D40) | `src/core/menu_select.cpp` | R0-2 | ~50 |

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
| IDA 命名函数 | **201** (新增 61: Surface vtable 38 + helpers 23) |
| IDA 命名全局变量 | **44** (新增 8: DDraw + Surface globals) |
| 构建状态 | 0 errors, 0 warnings |

### 当前菜单渲染状态

| 组件 | 状态 | 备注 |
|------|------|------|
| DDraw 初始化 | ✅ | 2560x1600 全屏，cnc-ddraw 兼容层 |
| MIX 文件加载 | ✅ | 16顶层→17子MIX→33池，内存支持 |
| SHP 解码 | ✅ | TS格式(RLE3+Raw)，`ShpImage::LoadFromMemory` |
| 调色板 | ✅ | 768字节内容扫描匹配 |
| SHP 渲染到表面 | ❌ | DrawSHP未实现（仅手动像素写入） |
| 按钮 SHP 加载 | ✅ | `LoadByHash(0x0D2B157D)`→button00.shp 3384B |
| 色块按钮交互 | ✅ | 绿色/蓝色方框，ESC退出 |
| Dialog/Gadget 系统 | ⚠️ | 头文件已定义，未启用 |
| 主菜单背景 | ❌ | BINK(ra2ts_l.bik)未解码，SHP背景未渲染 |

---

## 当前会话上下文 (快速恢复)

### IDA 命名摘要 (共201函数 + 44全局)

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
| **Surface 类层次 (38)** | `DSurface_Blit`, `DSurface_Lock`, `DSurface_DrawLineZBuf`, `XSurface_WalkLine`, `BSurface_Lock` | DDraw表面绘制管线 |
| 入口点/窗口 (11) | `WinMain`, `CommandLine_Parse`, `Init_Game`, `Menu_Select`, `Main_Game`, `Main_Game_Frame`, `Game_Frame_Loop`, `Game_Frame_Check`, `Scenario_Load`, `Scenario_ReadINI`, `WinMain_Setup` | 启动管线, 游戏流程 |
| 对话框/菜单 (12) | `MainMenu_Screen`, `MainMenu_DlgProc`, `Dialog_Create`, `Dialog_Destroy`, `Dialog_Show`, `Dialog_SetParent`, `Dialog_BaseProc`, `Dialog_PumpMessages`, `Dialog_MessageLoop`, `Campaign_Screen`, `Multiplayer_Screen`, `Options_Screen` | UI 对话框系统 |
| **DDraw 全局变量 (8)** | `g_lpDirectDraw7`, `g_DDraw_Initialized`, `g_ZBufferDescriptor`, `g_VisibleSurfaceDescriptor`, `g_BitShift_Red/Green/Blue+Mask` | DDraw 引擎状态 |

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
- **IDA 命名状态**: 201 函数 + 44 全局变量 + 3 struct 类型 (见上方命名清单)
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

### 主菜单渲染架构 (IDA 逆向)
```
MainMenu_Screen (0x531CC0)
  ├── 创建对话框 0xE2 + DlgItem 1818 背景控件
  ├── SendMessage(DlgItem, 0x4E3, 1, 0)         // 初始化 BINK/SHP 播放器
  ├── SendMessage(DlgItem, 0x4E4, 0, "Ra2ts_l") // 设置背景: ra2ts_l.bik (BINK视频)
  ├── 循环: Dialog_PumpMessages()
  │     ├── Dialog_MessageLoop()     // PeekMessage → Translate → Dispatch
  │     └── Event_Dispatch()         // AudioVideo_Update + 网络/游戏更新
  └── WM_CLOSE: SendMessage(DlgItem, 0x4F0)     // 清理

MainMenu_DlgProc (0x531F60)
  ├── WM_COMMAND:
  │     ├── 0x683 (1667) → MenuState::Campaign
  │     ├── 1668        → MenuState::Skirmish
  │     ├── 0x578 (1400) → MenuState::Multiplayer
  │     ├── 0x55C (1372) → MenuState::Options
  │     └── 0x3EE (1006) → MenuState::Exit
  └── 0x497 (1175) → 版本信息显示
```

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

## 经验教训 (跨项目通用)

### 逆向工程核心原则
- **逆向优先，莫自作主张**: 逆向工程的核心目标是**复现原版行为**，而非按个人理解重新设计。应通过 IDA 反编译理解原函数的调用约定/控制流/数据依赖，再逐函数忠实翻译为 C++。自行编写简化版或替代逻辑会导致与原版行为偏离、后续对接时产生大量废代码。
- **函数重命名后即时同步**: 从 IDA 反编译理解函数功能后，应立即用 `rename` 工具回写 IDA 并 `idb_save` 持久化。后续反编译输出会自动使用已命名函数，可读性指数级提升。
- **避免地址编号命名**: 代码中不应使用 `Sub_48D080` 这类 IDA 自动编号命名。应根据功能命名（如 `Event_Dispatch`）并同步回 IDA，使二进制 → 源码双向可读。

### 数据结构与兼容性
- **大型常量表**: 避免手动录入大量常量（如加密算法的 S-box）。应编写脚本从可信来源提取并生成代码文件。
- **增量验证不可省**: 加密/压缩/序列化等复杂算法必须逐段端到端验证（引擎核心→密钥计算→完整解密），否则难以定位错误。

## 编码约定

1. `namespace gamemd` 或 `namespace ra2::game`
2. `enum class` + `constexpr operator|` for bit flags
3. 虚函数按 YRpp vtable 顺序，`__stdcall__` 调用约定
4. C++20: `noexcept`、`override`、`constexpr`、`= default`
5. RA1 为结构参考，YRpp 为偏移参考，IDA 为二进制验证，cnc-ddraw 为渲染接口参考
6. 前向声明必须匹配实际定义 (class vs struct)
7. MIX 文件名仅存 hash ID，不保存原始文件名
8. DirectDraw 调用使用标准 Windows SDK 接口 (Phase 1)，搭配 cnc-ddraw 兼容层运行调试

## 下一步 (Next Steps)

1. **R0-1: DSurface SHP 渲染** — 实现 Blit/DrawSHP 将 SHP 按钮帧绘制到 DDraw 表面
2. **R0-2: Dialog/Gadget 系统** — 启用完整的 Dialog 消息循环替代手动 PeekMessage 循环
3. **R0-3: 主菜单 SHP 按钮** — 替换色块为真实的 button00.shp 等 SHP
4. **R0-5: BINK/LoadingScreen** — 调研 BINK SDK 或实现 SHP 静图背景降级
5. 后续 R1: 游戏内等距视图渲染
