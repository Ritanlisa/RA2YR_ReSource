# RA2YR ReSource — 外部生态系统与参考源文档

## 1. 四重参考源 — 协同定位

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

---

## 2. 外部生态系统 (DLL 注入 / 模组平台 / 联机客户端)

RA2/YR 社区围绕 `gamemd.exe` 建立了一个 **DLL 注入生态系统**，通过 `Syringe.exe`（通用注入器）将扩展 DLL 加载到 `gamemd.exe` 进程的地址空间，在二进制层面修改游戏行为。以下是各组件及其关系：

### 架构图

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

### 组件总览表

| 组件 | 类型 | 语言 | 大小 | 钩子数 | '-SPAWN' | 许可证 | 状态 |
|------|------|------|------|--------|----------|--------|------|
| **gamemd.exe** | EXE (原版) | C++ | 7.6MB | 0 | 无 | 闭源 | 逆向中 |
| **xna-cncnet-client** | EXE (GUI) | C#/MonoGame | ~5MB | N/A | 生成 INI + 启动参数 | GPLv3 | 已克隆 |
| **Syringe** | EXE (注入器) | C++ | ~50KB | 框架 | 无 (通用注入器) | LGPLv3 | 已克隆 |
| **CnCNet-Spawner** | DLL (启动器) | C++ | ~300KB | ~120 | **有** (/SPAWN.INI) | GPLv3 | 已克隆 (yrpp-spawner) |
| **Ares 0.A** | DLL (模组) | C++ | ~500KB | 1187 | 无 | BSD-4 | 已克隆 |
| **Phobos** | DLL (模组) | C++ | ~1MB | 1642+ | 无 (仅配合 Spawner) | GPLv3 | 已克隆 |

---

## 3. xna-cncnet-client (CnCNet 客户端)

- 基于 MonoGame/XNA 的游戏大厅客户端（C#）
- 核心文件: `ClientGUI/GameProcessLogic.cs` — 启动游戏进程的逻辑
- 命令行格式: `gamemd.exe -SPAWN -CD.`（直接）或 `Syringe.exe "gamemd.exe" -SPAWN -CD.`（Syringe 路径）
- 启动前写入 3 个 INI 文件:
  - `spawn.ini` — 游戏设置 (Scenario, Side, Color, Players, Tunnel...)
  - `spawnmap.ini` — 地图数据 (地形, 触发, 规则)
  - `Saved Games/spawnSG.ini` — 存档恢复配置
- 支持模式: 单人遭遇战、战役、多人联机 (CnCNet 隧道)、局域网、存档加载
- 在线多人通过 CnCNet IRC 隧道进行 NAT 穿透

---

## 4. Syringe (DLL 注入器)

- 通用 DLL 注入框架，使用 **Windows Debugging API**（非 CreateRemoteThread）
- 流程: `CREATE_SUSPENDED` → 在目标进程分配共享代码块 → 解析 `.syhks00` PE 段 → INT3 断点 → 注入时执行 LoadLibrary → 跳板 JMP 钩子
- DLL 通过 `SyringeHandshake` 导出函数验证 EXE 兼容性 (CRC32 / 大小 / 时间戳)
- 命令行格式: `Syringe.exe "<exe name>" <arguments>`
- Phase 2 将被原生插件架构取代

---

## 5. Ares 0.A (模组平台)

- 编译为 `Ares.dll`，注入 1187 个钩子
- 命令行参数 (9 个): `-LOG`, `-CD`, `-NOLOGO`, `-TESTRUN`, `-STRICT`, `-LOG-EMP`, `-AI-CONTROL`, `-LOG-CSF`, `-EXCEPTION`
- **不含 -SPAWN 支持**
- 核心钩子地址:
  - `0x52F639` — 命令行解析
  - `0x7CD810` — ExeRun
  - `0x7CD8EF` — ExeTerminate
  - `0x52CAE9` — PostGameInit
- 旁路 Copy Protection:
  - `0x49F5C0` / `0x49F620` / `0x49F7A0` — always return TRUE
- 扩展系统: MassAction 分发器 + 22 个扩展类 (BuildingExt, TechnoExt, HouseExt...)
- 50+ 自定义超级武器 (ChronoSphere, DropPod, HunterSeeker, LightningStorm...)
- 工程结构: `Ares/src/Ares.cpp` (DllMain + SYRINGE_HANDSHAKE) + `Ext/` (钩子) + `Misc/` (子系统) + `UI/` (对话框)

---

## 6. Phobos (模组平台)

- 编译为 `Phobos.dll`，独立于 Ares 运行但设计为互补
- 命令行参数 (5 个): `-Icon`, `-b=<build>`, `-Inheritance`, `-Include`, `-ExceptionHandler`
- **不含 -SPAWN 支持**，但检测 CnCNet Spawner (通过 `SpawnerHelper` 检查 `0x4C7A14` 的 LJMP 钩子)
- 支持多版本 Ares (3.0 timestamp `0x5fc37ef6`, 3.0p1 `0x61daa114`)，通过二进制补丁修复 Ares 的 Bug
- 公开 Interop API (`src/Interop/`): AttachEffect, TechnoExt, BulletExt, EventExt
- 创新功能: 护盾系统 (ShieldClass), 激光轨迹, 附着效果, 自定义 Locomotion, Protocol Zero 兼容
- 存档时复制 `spawn.ini` → `spawnSG.ini`，模仿 XNA CnCNet Client 行为

---

## 7. CnCNet YRpp Spawner (yrpp-spawner)

- `-SPAWN` 的真正实现者，编译为 `CnCNet-Spawner.dll`
- 由 Syringe 注入到 gamemd.exe 中

### 启动流程 (所有地址偏移均为原版 gamemd.exe 二进制地址)

1. Hook `0x52F639` (ParseCommandLine): 检测 `-SPAWN` `-CD`
2. Hook `0x6BD7C5` (WinMain): 读 SPAWN.INI，应用 ~25 个动态补丁
3. CALL 替换 `0x48CDD3` + `0x48CFAA` → `Spawner::StartGame()` (跳过菜单)
4. CALL 替换 `0x68745E` + `0x68ACFF` → `Spawner::AssignHouses()` (自定义分配玩家)
5. LJMP 跳过签到动画 (`0x52CB50`)、Logo (`0x52C5E0`)

### spawn.ini 解析字段

**[Settings] — 游戏配置:**
- GameMode, Scenario, Seed, Bases, Credits, GameSpeed, AIPlayers
- IsSinglePlayer, LoadSaveGame, Protocol, FrameSendRate, MaxAhead
- Ra2Mode, QuickMatch, Tournament, WriteStatistics

**[Settings] / [Other1-7] — 每玩家配置:**
- Name, Side, Color, Ip, Port, IsSpectator

**[HouseCountries] / [HouseHandicaps] / [HouseColors] / [SpawnLocations]:**
- Multi1-8 (AI 玩家)

**[Tunnel] — NAT 穿透:**
- Ip, Port

**[Multi1_Alliances] ~ [Multi8_Alliances]:**
- HouseAllyOne-Eight

### 网络系统

- UDP 隧道代理 (`NetHack::SendTo`/`RecvFrom`，hook `0x7B3D75`/`0x7B3EEC`)
- Protocol 0 自定义延迟网码

### 支持模式

- Campaign, Skirmish, Multiplayer(LAN/Internet via Tunnel), QuickMatch, RA2 Mode

---

cnc-ddraw 集成详见 `docs/ddraw_integration.md`。

---

## 9. RA1 vs RA2: 关键差异

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

### What CAN be borrowed from RA1

- TARGET encoding (24-bit mantissa + 8-bit exponent) — identical
- Coord_Cell / Cell_Coord conversion math
- Mission state machine logic (Mission_Attack, Mission_Move, etc.)
- INI reading patterns (Read_INI virtual method, CCINIClass)
- Object type/instance dual-hierarchy design
- Flat fixed-heap memory model (TFixedIHeapClass)
- Radio message protocol (building ↔ unit communication)
- **MIX file reading logic** (extended format detection pattern)

### What CANNOT be borrowed from RA1

- Any member layout (RA2 offsets are different)
- COM interface code (nonexistent in RA1)
- Rendering (RA2 uses Voxel)
- Locomotion (RA2 uses COM ILocomotion, not DriveClass)
- Network layer (RA2 uses UDP/IP, RA1 used IPX/modem)
- MIX encryption: RA1 uses RSA+Blowfish (PKStraw), RA2 uses Westwood key source + Blowfish
