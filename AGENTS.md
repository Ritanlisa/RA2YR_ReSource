# RA2YR ReSource — 从 gamemd.exe 重建红色警戒2/尤里的复仇源码

## 项目目标

逆向工程完整的 `gamemd.exe`（Mental Omega v3.3.6）C++ 源码。目标文件是 32 位 Windows PE，由 MSVC 6.0 编译，约 7.6MB，基址 0x400000，含 19,059 个函数。原始构建来自 `D:\ra2mdpost\` 目录下的 72 个 `.CPP` 源文件。

当前输出为 header-only 的静态库 `gamemd_core`，使用 CMake + C++20 编译。长期目标是产出可直接替换的 `.dll` 或独立引擎。

---

## 编译状态 (当前)

| 指标 | 数值 |
|--------|-------|
| 可编译源文件 | 59 |
| 编译错误 | **0** |
| 编译警告 | **0** (已修复 72 C4099 + 1 C4018 + 8 C4819) |
| 已实现函数 | **~120** |
| MIX 格式支持 | RA2 加密 + MO + TD (全部验证) |

### 构建命令

```bash
cmake -B build -G "Visual Studio 17 2022" -A Win32
cmake --build build
```

---

## 三重参考源 - 协同定位

三种信息来源各有强弱，**三角交叉验证**是正确方法论。不要迷信任何一个单一来源。

| 来源 | 用于 | 不做 |
|------|------|------|
| **RA1 源码** (CnC_Red_Alert/CODE/) | **框架/架构**: 类继承链、虚函数模式、Mission 状态机、INI 读取流程、对象管理（TFixedIHeapClass/CCPtr）、TARGET 编解码、COORDINATE 数学、**MIX 读取逻辑** | **直接复制成员布局**: RA2 偏移不同、RA2 有 MI 导致布局变化 |
| **YRpp** (~150 头文件) | **成员偏移/虚函数索引**: 运行期实测，知道每个成员在对象中的精确位置、虚函数在 vtable 中的顺序 | **业务逻辑实现**: YRpp 是声明层，不含函数体 |
| **IDA Pro** (gamemd.exe MCP) | **二进制验证**: 构造函数字节级确认成员初始化顺序、调用图追踪函数实现、全局变量地址/类型确认 | **反编译伪代码**: Hex-Rays 输出有误（类型推断错误、结构体大小不准确、优化导致代码变形），仅作参考 |

### 工作方法

1. 用 **RA1 源码** 理解"代码长什么样"——类结构、构造函数写法、虚函数模式、MIX 读取逻辑
2. 用 **YRpp** 填入 RA2 实际的成员偏移和类型
3. 用 **IDA** 对关键函数进行二进制验证，修正 YRpp 的错误

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
TechnoClass         ✅ ~26 函数 (Fire/GetFireError/Cloak/Guard/CreateUnit骨架/CanDeploy etc.)
FootClass           ✅ ~14 函数 (MovementAI/Mission×4/Destroyed/MoveTo/StopMoving)
BuildingClass       ✅ Mission×4 + Place + Mission_Missile + ExitObject + Type成员集成
InfantryClass       ✅ Mission_Enter/ParaDrop×2 (RA1 无线电协调)
UnitClass           ✅ Mission_Harvest(5状态)/Unload (RA1 采集状态机)
AircraftClass       ✅ Mission×5 (RA1 7状态攻击/降落/卸载/猎杀/撤退)
System              ✅ MIX reader (RA2加密+MO+TD, blowfish引擎, Westwood密钥计算)
```

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
| MO 无加密 | first=0, flags=0x0000 | expandmo04.mix (66文件) | ✅ 数据可读 |
| TD 传统 | first≠0 | test.mix | ✅ 端到端验证 |

### Blowfish 组件

| 组件 | 常量 | 状态 |
|------|------|------|
| BlowfishEngine | 18 P-array + 1024 S-boxes | ✅ Encipher/Decipher 回合验证 |
| Westwood 密钥计算 | RSA 模幂运算 + Barrett 约简 | ✅ Base64 公钥 "AihRvNo..." → 56B 密钥 |
| 头解密 | 8B 块 + reverse32 | ✅ 已验证 expandmd01/language/WDT |

### MO MIX 分析结论

- 前 4 字节 `0x00000000` (first=0, flags=0) 是 RA1 扩展格式，非特殊标记
- Offset 4 开始是标准 TD 格式 (count + body + index)
- 内部文件**未加密**——二进制游戏数据，结构清晰
- MO 的"混淆"体现在容器级（扩展格式 zero-flags），非逐文件加密
- Ares DLL 注入扩展引擎功能，走原版 Mix 加载路径，格式完全兼容

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

## Confirmed Global Variables

| Name | Address | Type | Notes |
|------|---------|------|-------|
| `CurrentFrame` | 0xA8ED84 | `int` | Frame counter |
| `CurrentObjects` | 0xA8ECB8 | `DynamicVectorClass<ObjectClass*>` | |
| `RuleConfig` | 0x8871E0 | Rules/Config pointer | Global game rules |
| `Session` | 0xA83D4C | Session instance | Network session state |
| `rngState` | 0xA8B230 | Random state | RNG seed/state |

---

## Functions Named in IDA

| IDA Name | Address | Size | Description |
|----------|---------|------|-------------|
| `ObjectClass_ctor` | 0x5F3900 | 500B | ObjectClass constructor |
| `FootClass_MovementAI` | 0x4DA530 | 2520B | Movement update |
| `TechnoClass_SmokeUpdate` | 0x414BB0 | 1540B | Smoke animation |
| `TechnoClass_CreateUnit` | 0x423AC0 | 4234B | Unit construction pipeline |
| `ObjectClass::Put` | 0x5F4520 | 500B | Add to CurrentObjects |
| `sub_453E20` | 0x453E20 | 870B | BuildingClass factory |
| `sub_424CE0` | 0x424CE0 | 543B | CreateUnit production completion |
| `sub_424F00` | 0x424F00 | 583B | Building placement |
| `RulesClass_LoadFromINI` | 0x66D530 | 18793B | INI parser (largest) |
| `WinMain` | 0x6BB9A0 | 10261B | Game entry point |

---

## Current Codebase Structure

```
D:\RA2YR_ReSource\
├── include\gamemd\          # 89 header files, 17 subdirectories
│   ├── core\                # enums, math, memory, vector, target, coordinate
│   ├── object\              # AbstractClass → ObjectClass → ... → FootClass
│   ├── type\                # BuildingTypeClass (~270 members), TechnoTypeClass, etc.
│   ├── structure\           # Infrastructure/Unit/Building/Aircraft
│   ├── system\              # Cell, Map, MIX file, Factory, FileSystem
│   └── ...                  # entity, house, team, ui, network, render, misc, wdt
├── src\                     # 59 .cpp files, 13 subdirectories
│   ├── object\              # abstract, object, mission, radio, techno, foot
│   ├── structure\           # building, infantry, unit, aircraft
│   ├── system\              # mix_file (完整MIX读取器), mix_blowfish (Blowfish+Westwood密钥)
│   └── ...
├── CnC_Red_Alert\           # RA1 open-source reference (277 .CPP + 237 .H)
├── YRpp\                    # DLL injection headers (~150 files)
├── RA2YRMIX\                # 17 original RA2YR MIX test files
├── MOMIX\                   # 23 Mental Omega MIX test files
└── CMakeLists.txt           # C++20, Win32, /utf-8, /FS
```

---

## Next Session Work Plan

### P0: CreateUnit 完整翻译
- IDA 0x423AC0, 4234B 已反编译
- 骨架已在 techno.cpp 中
- 需映射 byte 偏移到成员名

### P0: BuildingClass 工厂翻译 (sub_453E20)
- IDA 0x453E20, 870B 已识别
- 调用 sub_43B680 构造器 + 全局数组注册

### P1: IDA 函数反编译与实现
- 更多 BuildingClass vtable 函数
- 生产完成回调完善 (sub_424CE0/sub_424F00)

### P2: 动态调试验证
- DLL injection (YRpp 方式) 测试函数替换

### P3: Mix 读取器的 Blowfish 流水线修复
- ComputeBlowfishKey placeholder → 导致高优先级报错
- 需要：完整 Westwood key calculation 实现

---

## 测试数据 (Mix 文件)

| 来源 | 路径 | 文件数 | 格式 | 状态 |
|------|------|--------|------|------|
| **RA2YR 原版** | `RA2YRMIX/` | 17 | RA2 加密 (first=0, flags=0x0003) | ✅ 解密验证通过 |
| **Mental Omega 3.3.6** | `MOMIX/` | 23 | 扩展格式 (first=0, flags=0x0000) | ✅ 解析验证通过 |

### 已验证文件
- `expandmd01.mix`: 33 files, RULES.INI text confirmed
- `language.mix`: 6 files
- `WDT.MIX`: 126 files
- `expandmo04.mix`: 66 files, binary data readable
- `expandmo90.mix`: 45 files, same IDs as expandmo41 (shared resources)

---

## 编码约定

1. `namespace gamemd` 或 `namespace ra2::game`
2. `enum class` + `constexpr operator|` for bit flags
3. 虚函数按 YRpp vtable 顺序，`__stdcall` 调用约定
4. C++20: `noexcept`、`override`、`constexpr`、`= default`
5. RA1 为结构参考，YRpp 为偏移参考，IDA 为二进制验证
6. 前向声明必须匹配实际定义 (class vs struct)
7. MIX 文件名仅存 hash ID，不保存原始文件名
