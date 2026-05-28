# RA2YR ReSource — 从 gamemd.exe 重建红色警戒2/尤里的复仇源码

## 项目目标

逆向工程完整的 `gamemd.exe`（Mental Omega v3.3.6）C++ 源码。目标文件是 32 位 Windows PE，由 MSVC 6.0 编译，约 7.6MB，基址 0x400000，含 19,059 个函数。原始构建来自 `D:\ra2mdpost\` 目录下的 72 个 `.CPP` 源文件。

当前输出为 header-only 的静态库 `gamemd_core`，使用 CMake + C++20 编译。长期目标是产出可直接替换的 `.dll` 或独立引擎。

---

## 三重参考源 - 协同定位

三种信息来源各有强弱，**三角交叉验证**是正确方法论。不要迷信任何一个单一来源。

| 来源 | 用于 | 不做 |
|------|------|------|
| **RA1 源码** (CnC_Red_Alert/CODE/) | **框架/架构**: 类继承链、虚函数模式、Mission 状态机、INI 读取流程、对象管理（TFixedIHeapClass/CCPtr）、TARGET 编解码、COORDINATE 数学 | **直接复制成员布局**: RA2 偏移不同、RA2 有 MI 导致布局变化 |
| **YRpp** (~150 头文件) | **成员偏移/虚函数索引**: 运行期实测，知道每个成员在对象中的精确位置、虚函数在 vtable 中的顺序 | **业务逻辑实现**: YRpp 是声明层，不含函数体 |
| **IDA Pro** (gamemd.exe MCP) | **二进制验证**: 构造函数字节级确认成员初始化顺序、调用图追踪函数实现、全局变量地址/类型确认 | **反编译伪代码**: Hex-Rays 输出有误（类型推断错误、结构体大小不准确、优化导致代码变形），仅作参考 |

### 工作方法

1. 用 **RA1 源码** 理解"代码长什么样"——类结构、构造函数写法、虚函数模式
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
| Ra2MD addon | None | Mental Omega extensions |

**What CAN be borrowed from RA1:**
- TARGET encoding (24-bit mantissa + 8-bit exponent) — identical
- Coord_Cell / Cell_Coord conversion math
- Mission state machine logic (Mission_Attack, Mission_Move, etc.)
- INI reading patterns (Read_INI virtual method, CCINIClass)
- Object type/instance dual-hierarchy design
- Flat fixed-heap memory model (TFixedIHeapClass)
- Radio message protocol (building ↔ unit communication)

**What CANNOT be borrowed from RA1:**
- Any member layout (RA2 offsets are different)
- COM interface code (nonexistent in RA1)
- Rendering (RA2 uses Voxel)
- Locomotion (RA2 uses COM ILocomotion, not DriveClass)
- Network layer (RA2 uses UDP/IP, RA1 used IPX/modem)

---

## IDA-Confirmed Class Hierarchy

### AbstractClass — The Root

Constructed at `0x410170`. Confirmed facts from IDA decompilation:

1. **4 vtable pointers** stored at `this[0]`, `this[1]`, `this[2]`, `this[3]`
2. RTTI strings in the binary confirm **two** base classes by name:
   - `INoticeSink`
   - `INoticeSource`
3. The remaining **two** base classes are **unconfirmed** by RTTI. The existing reconstruction assumes they are `IPersistStream` and `IRTTITypeInfo` (based on YRpp's observed vtable layout), but this is speculative and may change with further IDA analysis.
4. Constructor flow:
   - Sets `this[2]` to INoticeSink vtable, `this[3]` to INoticeSource vtable
   - Initializes `m_unknown_18=0`, `m_ref_count=0`, `m_dirty=false`
   - Preserves bits 3–7 of `m_abstract_flags` (flags & 0xF8)
   - Sets `m_unique_id = -1`
   - Overwrites all 4 vtable slots with the AbstractClass vtable (MSVC MI adjustment convention)

```cpp
// CONFIRMED: AbstractClass is multiply-inherited, has 4 vtable pointers
// CONFIRMED base classes: INoticeSink, INoticeSource
// RECONSTRUCTED base classes: IPersistStream, IRTTITypeInfo (from YRpp, not from RTTI strings)

// Current reconstruction in code:
class AbstractClass : public IPersistStream,    // RECONSTRUCTED
                      public IRTTITypeInfo,     // RECONSTRUCTED
                      public INoticeSink,        // CONFIRMED by RTTI
                      public INoticeSource       // CONFIRMED by RTTI
```

### ObjectClass → MissionClass → RadioClass → TechnoClass → FootClass

All constructors confirmed to chain through their parents:

| Constructor | Address | Size | Calls |
|-------------|---------|------|-------|
| AbstractClass::AbstractClass | 0x410170 | ~200 bytes | — |
| ObjectClass::ObjectClass | 0x5F3900 | ~500 bytes | sub_410170 (AbstractClass ctor) |
| MissionClass::MissionClass | (in hierarchy) | — | ObjectClass ctor |
| RadioClass::RadioClass | (in hierarchy) | — | MissionClass ctor |
| TechnoClass::TechnoClass | 0x6F2B40 | ~1600 bytes | RadioClass ctor, weapon/combat init |
| FootClass::FootClass | 0x4D31E0 | ~1000 bytes | TechnoClass ctor |

Note: The existing code splits into `ra2::game` (AbstractClass → FootClass chain) and `gamemd` (everything else — types, entities, houses, UI). This split is a **code organization choice**, not a binary requirement.

### BuildingClass — Separate Branch

BuildingClass inherits **directly from TechnoClass** (NOT through FootClass). Confirmed in both RA1 source and YRpp vtable layout. Buildings have no navigation, no movement, no pathfinding.

### HouseClass

Constructed at `0x4F54A0`, ~4KB. Calls AbstractClass ctor. Very large — initialized many subsystems (production, credits, power, teams, triggers).

### TemporalClass

Constructed at `0x71A4E0`. Calls AbstractClass ctor. Manages chrono-shift / time-freeze effects.

### Other Key Constructors (IDA-Confirmed)

| Constructor | Address | Size |
|-------------|---------|------|
| AnimClass::AnimClass | 0x421EA0 | 2162 bytes |
| AnimClass (simplified) | 0x422720 | (alternate entry) |
| TechnoClass::CreateUnit | 0x423AC0 | 4234 bytes (creates + initializes a Techno) |
| SuperWeapon::CreateUnits | 0x445F80 | 4160 bytes (superweapon delivery) |

---

## Confirmed Global Variables

| Name | Address | Type (from IDA) | Notes |
|------|---------|-----------------|-------|
| `CurrentFrame` | 0xA8ED84 | `int` (or `wchar_t*`) | Frame counter |
| `CurrentObjects` | 0xA8ECB8 | `DynamicVectorClass<ObjectClass*>` | Count at +0x10 (0xA8ECC8), Capacity at +0x08 (0xA8ECC0), Data ptr at +0x04 (0xA8ECBC) |
| `RuleConfig` | 0x8871E0 | Rules/Config object pointer | Global game rules |
| `Session` | 0xA83D4C | Session instance | Network session state |
| `rngState` | 0xA8B230 | Random state | RNG seed/state |
| MIX file list | 0xABEFD8 | — | MIX archive table |

### BuildingClass Vtable Addresses (from IDA)

BuildingClass constructor at 0x43B680 sets 4 vtable pointers:
- `vtable[0]` (primary) = `0x7E3EBC` (64+ entries)
- `vtable[1]` = `0x7E3EA0` (~32 entries, IPersistStream/IRTTITypeInfo)
- `vtable[2]` = `0x7E3E98` (~30 entries, INoticeSink)
- `vtable[3]` = `0x7E3E90` (~27 entries, INoticeSource)

Key BuildingClass-specific vtable entries (index → address):
| Vtable Index | Address | Function |
|-------------|---------|----------|
| [5] | 0x453E20 | BuildingClass factory/creation (870B, 45 BBs) |
| [24] | 0x710410 | Ptr clear-if-equal helper (77B) |
| [27] | 0x4513D0 | Animation state dispatch (48B) |
| [31] | 0x5F6C10 | Generic OR check: vtable[456] > -20 (19B) |
| [39] | 0x7010D0 | Unknown |
| [44] | 0x453840 | GetExitCoords — compute unit exit cell (550B) |
| [46] | 0x449410 | Building flag bitfield computation (46B) |

---

## Functions Named in IDA (Stage 14 Progress)

| IDA Name | Address | What It Does |
|----------|---------|-------------|
| `AnimClass_ctor` | 0x421EA0 | AnimClass full constructor |
| `ObjectClass_ctor` | 0x5F3900 | ObjectClass constructor |
| `FootClass_MovementAI` | 0x4DA530 | Movement update (smoke, dust, sound, state) |
| `BuildingClass_Draw` | 0x47F6A0 | Building rendering |
| `TechnoClass_SmokeUpdate` | 0x414BB0 | Damaged-building smoke animation |
| `TechnoClass_CreateUnit` | 0x423AC0 | Full Techno/Unit creation pipeline |
| `SuperWeapon_CreateUnits` | 0x445F80 | Superweapon delivery + EVA announcements |
| `RulesClass_LoadFromINI` | 0x66D530 | INI parser, largest function (18793 bytes, 392 strings) |
| `WinMain` | 0x6BB9A0 | Game entry point (10261 bytes, 171 callees) |
| `ObjectClass::Put` | 0x5F4520 | Add object to CurrentObjects array |
| `sub_453E20` | 0x453E20 | BuildingClass factory/creation pipeline (870B, 45 BBs) — calls BuildingClass ctor + subsystem registration |
| `sub_453840` | 0x453840 | BuildingClass GetExitCoords (550B) — computes unit exit position based on building type flags |
| `sub_449410` | 0x449410 | BuildingClass flag computation (46B) — bitfield from type flags + sub_5F6BD0 |
| `sub_710410` | 0x710410 | BuildingClass pointer clear-if-equal helper (77B) — nulls anim/tech ptrs if matching |

---

## Current Codebase Structure

```
D:\RA2YR_ReSource\
├── include\gamemd\          # 89 header files, 17 subdirectories
│   ├── fundamentals.hpp     # Base types (DWORD, BYTE, HRESULT, etc.)
│   ├── core\                # enums, math, memory, vector, interfaces, target, coordinate
│   ├── object\              # AbstractClass → ObjectClass → ... → FootClass
│   ├── type\                # Type system (AbstractTypeClass → ... → WarheadType)
│   ├── entity\              # Anim, Bullet, Particle, Overlay, Smudge, etc.
│   ├── structure\           # Infantry, Unit, Building, Aircraft
│   ├── house\               # House, HouseType, Side
│   ├── team\                # Team, Trigger, Script, Tag, Campaign
│   ├── system\              # Cell, Map, Scenario, Factory, FileSystem
│   ├── ui\                  # GScreen, Mouse, Sidebar, Tab
│   ├── network\             # Session, Connection, Winsock
│   ├── render\              # Display, Surface, Blitter, Voxel, SHP
│   ├── misc\                # Audio, SuperWeapon, Rules, Locomotion
│   └── wdt\                 # World Domination Tour
├── src\                     # 57 .cpp files, 13 subdirectories (mirrors include/)
│   ├── object\              # abstract.cpp, object.cpp, mission.cpp, etc.
│   ├── structure\           # infantry.cpp, unit.cpp, building.cpp
│   └── ...                  # (same subdirs as include/)
├── CnC_Red_Alert\           # RA1 open-source reference
│   ├── CODE\                # 277 .CPP + 237 .H (full RA1 engine)
│   └── ANALYSIS.md          # 931-line architecture analysis
├── YRpp\                    # DLL injection headers (~150 files)
├── CMakeLists.txt           # C++20, Win32 static library
└── MIX_Format.html          # MIX archive format reference
```

### Namespace Convention

```cpp
namespace ra2::game {  // Core hierarchy: AbstractClass→Object→Mission→Radio→Techno→Foot
    class AbstractClass : public IPersistStream, public IRTTITypeInfo, ... { ... };
    class ObjectClass : public AbstractClass { ... };
    // ...
}

namespace gamemd {      // Everything else: enums, types, entities, UI, render, network
    enum class AbstractType : int { Unit = 1, Aircraft = 2, ... };
    enum class AbstractFlags : unsigned { Techno = 0x1, Object = 0x2, Foot = 0x4 };
    class BuildingClass { ... };
    // ...
}
```

The `ra2::game` classes `using` declarations from `gamemd` for enums and utility types.

---

## 编译状态

| 指标 | 数值 |
|--------|-------|
| 可编译源文件 | 59 |
| clean build 剩余错误 | ~2444（系统性预设错误） |
| 增量编译错误 | ~405 |
| 已修复错误 | ~350+ |

### Root Cause Chain (Clean Build, ~2444 errors)

The clean build exposed a single cascading failure chain:

```
Missing forward declares in object.hpp (AnimClass, WarheadTypeClass, CellClass, RadioCommand, HealthStatus)
  → C2061 → virtual return type unknown
    → C3646 "unknown override specifier" on virtual functions
      → C2143/C4430/C2433/C2334/C2275 → mass cascade (~1900 errors)
Namespace collision (ra2::game vs gamemd: ObjectClass, TechnoClass, TechnoTypeClass)
  → C2039/C2874
Missing default constructors (MixFileClass, ObjectTypeClass, AbstractTypeClass)
  → C2512/C2600
Header/definition member name mismatches
  → C2065/C2614
```

**Top 3 fixes by impact:**
1. Add missing `using ::gamemd::*` in `object.hpp` for AnimClass, WarheadTypeClass, CellClass, RadioCommand, HealthStatus → fixes ~1900 cascade errors
2. Fix `building.hpp` to use `gamemd::TechnoTypeClass` instead of `ra2::game::TechnoTypeClass`
3. Add default constructors to MixFileClass, ObjectTypeClass, AbstractTypeClass

### 构建命令

```bash
cmake -B build -G "Visual Studio 17 2022" -A Win32
cmake --build build
```

---

## 已知成员偏移（YRpp通过 IDA确认）

### AbstractClass (sizeof = 0x18)
| Offset | Name | Type |
|--------|------|------|
| +0x00 | vtable[0] | `void*` |
| +0x04 | vtable[1] | `void*` |
| +0x08 | vtable[2] | `void*` |
| +0x0C | vtable[3] | `void*` |
| +0x10 | `m_abstract_flags` | `uint32_t` |
| +0x14 | `m_unknown_18` | `uint32_t` |

### ObjectClass (sizeof ≈ 0xD4 confirmed, extends AbstractClass)
| Offset | Name | Type |
|--------|------|------|
| +0x18 | `m_unknown_24` | `uint32_t` |
| +0x1C | `m_unknown_28` | `uint32_t` |
| +0x20 | `m_fall_rate` | `int32_t` |
| +0x24 | `m_next_object` | `ObjectClass*` |
| +0x28 | `m_attached_tag` | `TagClass*` |
| +0x2C | `m_attached_bomb` | `BombClass*` |
| +0x30 | AudioController | (2× 24-byte blocks) |
| +0x60 | `m_custom_sound` | `int32_t` |
| +0x64 | `m_bomb_visible` | `bool` |
| +0x68 | `m_health` | `int32_t` |
| +0x6C | `m_estimated_health` | `int32_t` |
| +0x70 | `m_is_on_map` | `bool` |
| +0x78 | `m_unknown_78` | `uint32_t` |
| +0x7C | `m_unknown_7C` | `uint32_t` |
| +0x80 | `m_needs_redraw` | `bool` |
| +0x81 | `m_in_limbo` | `bool` |
| +0x82 | `m_in_open_topped_transport` | `bool` |
| +0x83 | `m_is_selected` | `bool` |
| +0x84 | `m_has_parachute` | `bool` |
| +0x88 | `m_parachute` | `AnimClass*` |
| +0x8C | `m_on_bridge` | `bool` |
| +0x8D | `m_is_falling_down` | `bool` |
| +0x8E | `m_was_falling_down` | `bool` |
| +0x8F | `m_is_a_bomb` | `bool` |
| +0x90 | `m_is_alive` | `bool` |
| +0x94 | `m_last_layer` | `uint32_t` |
| +0x98 | `m_is_in_logic` | `bool` |
| +0x99 | `m_is_visible` | `bool` |
| +0x9C | `m_location` | `CoordStruct` |
| +0xA8 | `m_line_trailer` | `LineTrail*` |
| +0xD0 | (end, not all members listed) | |

**Note**: Member names above are a mix of YRpp-verified names and educated guesses. Offsets are from IDA decompilation of constructors. Some `m_unknown_*` members exist because the YRpp name for that offset has not been verified yet.

---

## Unknown Members Inventory (Phase 1 targets)

Total **~252** unknown members across 10 files:

| Priority | File | Count | Notes |
|----------|------|-------|-------|
| P0 | `object/techno.hpp` | 35 | Combat/weapon state, cloak timers, veterancy |
| P0 | `object/foot.hpp` | 41 | Navigation state, pathfinding, movement data |
| P1 | `system/cell.hpp` | 23 | Grid flags, occupation bits, fog-of-war state |
| P1 | `object/object.hpp` | 4 | Object flags word, timers |
| P2 | `house/house.hpp` | 52 | Production, AI state, diplomacy data |
| P2 | `system/radar.hpp` | 53 | Minimap rendering state (low priority) |
| P2 | `system/scenario.hpp` | 12 | Mission/waypoint config |
| P2 | `team/team.hpp` | 18 | Team member tracking, formation |
| P3 | `system/map.hpp` | 13 | Map cell array tracking |
| P3 | `object/abstract.hpp` | 1 | Single unknown after flags field |

**Files with zero unknowns**: `type/`, `entity/`, `misc/`, `ui/`, `network/`, `render/`, `core/`, `structure/`, `wdt/`

---

## Next Session Work Plan (ordered by dependency)

### Phase 1: IDA 重命名 unknown 成员
**目标**: 用 IDA Pro MCP 服务验证关键 unknown 成员的偏移和含义

| 优先级 | 文件 | unknown 数 | 方法 |
|--------|------|-----------|------|
| P0 | `object/techno.hpp` | 35 | IDA `read_struct` 在 TechnoClass 实例上，跟踪成员引用链 |
| P0 | `object/foot.hpp` | 41 | 同上，配合 `MovementAI` 函数分析 |
| P1 | `object/object.hpp` | 4 | 构造函数对比确认 |
| P1 | `system/cell.hpp` | 23 | 对比 RA1 成员列表推断 |
| P2 | `house/house.hpp` | 52 | 逐个 IDA 验证 |
| P2 | `system/radar.hpp` | 53 | 低优先级 — 渲染系统 |
| P2 | `system/scenario.hpp` | 12 | 配置文件关联 |
| P2 | `team/team.hpp` | 18 | 触发器系统 |
| P3 | `system/map.hpp` | 13 | 地图系统 |

**关键 IDA 命令**:
```python
# 读对象布局
ida-pro-mcp_read_struct --addr 0x... --struct TechnoClass
# 跟踪成员数据流
ida-pro-mcp_trace_data_flow --addr <member_addr> --direction forward
# 构造函数字节级确认
ida-pro-mcp_decompile --addr <ctor_addr>
```

### Phase 2: 构建完整类结构
**目标**: 确保每个类的成员列表完整且类型正确

- 用 Phase 1 重命名的成员填充 placeholder → 去除 `m_unknown_*` 前缀
- 对齐 RA1 命名约定（如 RA1 的 `m_health` = `Strength` → `m_strength`）
- 验证 sizeof 与 IDA 一致

### Phase 3: 根据 IDA 逻辑重写代码
**目标**: 用 IDA 伪代码填充剩余的函数实现

关键函数（按复杂度排序）:
| 函数 | IDA 地址 | 大小 | 优先级 |
|------|---------|------|--------|
| `ObjectClass::Put` | 0x5F4520 | ~500B | P0 |
| `FootClass::MovementAI` | 0x4DA530 | ~1000B | P0 |
| `TechnoClass_SmokeUpdate` | 0x414BB0 | ~300B | P1 |
| `BuildingClass_Draw` | 0x47F6A0 | ~2000B | P1 |
| `AnimClass_ctor` | 0x421EA0 | 2162B | P2 |
| `TechnoClass_CreateUnit` | 0x423AC0 | 4234B | P2 |
| `SuperWeapon_CreateUnits` | 0x445F80 | 4160B | P3 |
| `WinMain` | 0x6BB9A0 | 10261B | P3 |
| `RulesClass_LoadFromINI` | 0x66D530 | 18793B | P3 |

### Phase 4: 统一处理编译错误
**目标**: 从 clean build 的 ~2444 错误降到 0

执行顺序（按影响面排序）:
1. **修复 object.hpp 前向声明**（~1900 cascade errors）: 添加 `using ::gamemd::AnimClass;` 等 5 个类型的声明
2. **修复 namespace 冲突**（~10 errors）: `building.hpp` 中用 `gamemd::TechnoTypeClass` 替代 `ra2::game::TechnoTypeClass`
3. **添加默认构造函数**（~5 errors）: MixFileClass, ObjectTypeClass, AbstractTypeClass
4. **修复 .cpp 成员名不匹配**（~200 errors）: 逐个对齐 member 名称
5. **修复剩余 C2027 未定义类型**（~28 errors）: 确保 .cpp 包含正确的头文件

### Phase 5: 调试
**目标**: 编译通过后，连接原有 gamemd.exe 进行运行时验证

- 用 DLL injection (YRpp 方式) 测试函数替换
- 对比二进制输出、游戏行为

### 本会话已完成的架构对齐

| 项目 | 状态 |
|------|------|
| CellClass → 移除 AbstractClass 继承 | ✅ |
| HouseClass → 删除 5 个多余虚函数重写 | ✅ |
| AbstractClass → 纯虚函数改非纯虚默认实现 | ✅ |
| TARGET 系统移植 | ✅ |
| COORDINATE/CELL 数学工具库 | ✅ |
| Mission 状态机 28 种 stub | ✅ |
| TechnoClass 去虚拟化（18 个函数） | ✅ |
| ObjectClass::GetHealthPercentage() 补 virtual | ✅ |

---

## Working with IDA

The IDA Pro instance for `gamemd.exe` is accessible via MCP tools. Key commands:

```python
# Check connection
ida-pro-mcp_list_instances

# Decompile a function
ida-pro-mcp_decompile --addr 0x410170

# Analyze function with full context
ida-pro-mcp_analyze_function --addr 0x410170

# Search for strings
ida-pro-mcp_find_regex --pattern "Mission"

# List all functions matching a pattern
ida-pro-mcp_list_funcs --filter "*AnimClass*"

# Trace data flow from a global
ida-pro-mcp_trace_data_flow --addr 0xA8ED84 --direction forward
```

Current IDB: `C:\Program Files (x86)\Mental Omega\gamemd.exe.i64`

---

## 编码约定

1. 所有代码在 `namespace gamemd` 或 `namespace ra2::game`
2. `enum class` 用于枚举；`constexpr operator|` 用于位标志
3. 虚函数按照 YRpp vtable 顺序排列以保证 ABI 兼容
4. 纯虚函数 = `= 0`；非纯虚函数提供默认 stub 实现
5. 成员布局顺序保持，显式填充对齐
6. 不使用 `__declspec(novtable)` 或 YRpp 宏
7. C++20 特性：`noexcept`、`override`、`constexpr`、`= default`
8. 所有虚函数使用 `__stdcall` 调用约定（MSVC MI 要求）

---

## 可信度声明

- **已确认（CONFIRMED）**：AbstractClass 有 4 个 vtable 槽位。INoticeSink 和 INoticeSource 是 RTTI 确认的基类。AbstractClass 到 FootClass 的构造函数链已通过 IDA 验证。全局变量地址来自 IDA。
- **重建（RECONSTRUCTED）**：IPersistStream 和 IRTTITypeInfo 基类来自 YRpp 推测，未经 RTTI 字符串确认。部分成员名称和类型来自 YRpp，未经独立验证。ObjectClass 之外的 vtable 布局来自 YRpp 模式假设。
- **未验证（UNVERIFIED）**：头文件的逐字节二进制等效性尚未测试。当前编译目标是结构正确性，非二进制等效。

---

## 测试数据 (Mix 文件)

项目包含两套 Mix 文件用于后续测试 Mix 读取和系统文件解析：

| 来源 | 路径 | 文件数 | 说明 |
|------|------|--------|------|
| **RA2YR 原版** | `RA2YRMIX/` | 17 个 | ra2.mix, ra2md.mix, expandmd01.mix, ares.mix, langmd.mix, language.mix, theme*.mix, WDT.MIX 等 |
| **Mental Omega 3.3.6** | `MOMIX/` | 23 个 | expandmo04-99.mix, langmd.mix, language.mix 等。通过 Ares（DLL注入扩展RA2YR功能，非加密工具）加载。走的是原版 Mix 加载路径，但相比RA2YR原版加密了更多文件（更激进的混淆策略） |

**MO Mix 文件特点**：
- 通过 Ares（DLL注入扩展引擎功能，非加密工具）加载
- 走原版 Mix 文件加载路径，但与 RA2YR 原版相比加密了更多文件（更激进的混淆）
- `ra2.mix` + `ra2md.mix` + `thememo.mix` 可在 `C:\Program Files (x86)\Mental Omega\` 找到（不包含在项目仓库中）

**测试优先级**：先用 RA2YR 原版 Mix 验证基础 Mix 解析器，再用 MO Mix 测试更严格加密场景的兼容性。
