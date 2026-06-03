# gamemd.exe COM 体系架构

> 所有数据来源: IDA Pro 9.2 逆向分析  
> 统计: 77 个 COM 注册类, 18 个 GUID, 10 个接口, 14 种移动类型

---

## 一、COM 基础设施

RA2/YR 使用 MSVC 的 COM 框架来管理游戏对象生命周期和组件通信。核心组件：

| 组件 | 地址 | 说明 |
|------|------|------|
| `COMClassFactory::Register` | 0x6BEDB0 | 向 Windows 注册表注册 COM 类对象 |
| `COMClassFactory::CreateInstance` | 0x6C0AC0 | 通过 CLSID 创建 COM 对象实例 |
| `RegisterClassesCOM` | 0x6BB390 | WinMain 调用，批量注册所有 77 个 COM 类 |
| `COM_SafeRelease` | 0x6C61C0 | 安全调用 `vtable[8]` (Release) |

---

## 二、COM 接口 (IID/GUID)

### 2.1 标准 COM 接口

| 接口 | IID | 地址 | 说明 |
|------|-----|------|------|
| **IUnknown** | `{00000000-0000-0000-C000-000000000046}` | 0x7F7C90 | 所有 COM 对象基接口 |
| **IPersist** | `{0000010C-0000-0000-C000-000000000046}` | 0x7F7C70 | 序列化基接口 |
| **IPersistStream** | `{00000109-0000-0000-C000-000000000046}` | 0x7F7C80 | 流式序列化接口 |

### 2.2 游戏自定义接口

| 接口 | IID | 地址 | 实现者 |
|------|-----|------|--------|
| **IRTTITypeInfo** | `{170DAC82-12E4-11D2-8175-006008055BB5}` | 0x7E9AE0 | AbstactClass (所有游戏对象) |
| **ILocomotion** | `{070F3290-9841-11D1-B709-00A024DDAFD1}` | 0x7ED358 | LocomotionClass (移动系统) |
| **IPublicHouse** | `{CAACF210-86E3-11D1-B706-00A024DDAFD1}` | 0x7E9B00 | HouseClass |
| **IHouse** | `{941582E0-86DA-11D1-B706-00A024DDAFD1}` | 0x7EA768 | HouseClass |
| **IPiggyback** | `{92FEA800-A184-11D1-B70A-00A024DDAFD1}` | 0x7E9B10 | 乘客搭载系统 |
| **ISwizzle** | `{5FF0CA70-8B12-11D1-B708-00A024DDAFD1}` | 0x7E9B20 | 图形数据操作 |
| **IFlyControl** | `{820F501C-4F39-11D2-9B70-00104B972FE8}` | 0x7E9B40 | 飞行控制 |

---

## 三、COM 类注册 (TClassFactory)

每个游戏类通过 `TClassFactory<T>` 模板注册为 COM 对象。工厂位于 `.rdata` 段 0x7F3768-0x7F3E88，每个占用 0x18 字节。

### TClassFactory vtable 布局

```
[0] CreateInstance → COMClassFactory::CreateInstance (通用)
[1] AddRef        → 类特定实现
[2] GetClassName  → 返回类名字符串
[3] GetClassIdentifier → 对 Type 类返回 GetClassID, 实例类返回 ddtor
[4] GetSize       → 返回类大小
```

### 3.1 实体实例类 (19)

| # | 工厂地址 | 类 | Constructor | sizeof |
|---|---------|-----|-------------|--------|
| 1 | 0x6BFD50 | **SideClass** | 0x6BFD40 | 阵营管理 |
| 2 | 0x6BEE40 | **CStreamClass** | 0x6BEE40 | IO 流 |
| 3 | 0x6BEFC0 | **WaveClass** | 0x6BEFC0 | 波纹效果 |
| 4 | 0x6C0150 | **TubeClass** | (RTTI 注册) | 管道/传送带 |
| 5 | 0x6BF8D0 | **CellClass** | 0x6BF8C0 | 地图单元格 |
| 6 | 0x6BFA50 | **EMPulseClass** | 0x6BFA40 | EMP 脉冲 |
| 7 | 0x6BFBD0 | **LightSourceClass** | 0x6BFBC0 | 光源 |
| 8 | 0x6C0350 | **BuildingLightClass** | 0x6C0340 | 建筑灯光 |
| 9 | 0x6BFED0 | **TiberiumClass** | 0x6BFEC0 | 矿石/资源 |
| 10 | 0x6C0550 | **TemporalClass** | 0x6C0540 | 时空效果 |
| 11 | 0x6C06D0 | **AirstrikeClass** | 0x6C06C0 | 空袭 |
| 12 | 0x6C0850 | **SpawnManagerClass** | 0x6C0840 | 生成管理 |
| 13 | 0x6C09D0 | **SlaveManagerClass** | 0x6C09C0 | 奴隶管理 |
| 14 | 0x6C0B50 | **CaptureManagerClass** | 0x6C0B40 | 占领管理 |
| 15 | 0x6C0CD0 | **DiskLaserClass** | 0x6C0CC0 | 激光效果 |
| 16 | 0x6C0E50 | **ParasiteClass** | 0x6C0E40 | 寄生单位 |
| 17 | 0x6C0FD0 | **BombClass** | 0x6C0FC0 | 炸弹 |
| 18 | 0x6C1150 | **RadSiteClass** | 0x6C1140 | 辐射区 |
| 19 | 0x6C12D0 | **TEventClass** | 0x6C12C0 | 事件 |

### 3.2 核心游戏对象类 (6)

| # | 工厂地址 | 类 | Constructor |
|---|---------|-----|-------------|
| 20 | 0x6C3350 | **UnitClass** | 0x6C3340 |
| 21 | 0x6C34D0 | **BuildingClass** | 0x6C34C0 |
| 22 | 0x6C3650 | **AircraftClass** | 0x6C3640 |
| 23 | 0x6C37D0 | **InfantryClass** | 0x6C37C0 |
| 24 | 0x6C3950 | **AnimClass** | 0x6C3940 |
| 25 | 0x6C3DD0 | **HouseClass** | 0x6C3DC0 |

### 3.3 容器/辅助类 (6)

| # | 工厂地址 | 类 | Constructor |
|---|---------|-----|-------------|
| 26 | 0x6C0450 | **WaypointPathClass** | 0x6C0440 |
| 27 | 0x6C01D0 | **CampaignClass** | 0x6C01C0 |
| 28 | 0x6C4FD0 | **BulletClass** | 0x6C4FC0 |
| 29 | 0x6C5150 | **FactoryClass** | 0x6C5140 |
| 30 | 0x6C55D0 | **ParticleClass** | 0x6C55C0 |
| 31 | 0x6C58D0 | **ParticleSystemClass** | 0x6C58C0 |
| 32 | 0x6C6050 | **AlphaShapeClass** | 0x6C6040 |
| 33 | 0x6C5D50 | **NeuronClass** | 0x6C5D40 |
| 34 | 0x6C5ED0 | **FoggedObjectClass** | 0x6C5EC0 |
| 35 | 0x6C14D0 | **VoxelAnimClass** | 0x6C14C0 |
| 36 | 0x7F37F8 | **Tactical** | (RTTI 注册) |

### 3.4 类型类 (Type) — 带 GetClassIdentifier (22)

这些类实现 `vtable[3] = GetClassIdentifier` 而非 `ddtor`，用于对象类型系统。

| # | 工厂地址 | 类 | Constructor |
|---|---------|-----|-------------|
| 37 | 0x6C1350 | **VoxelAnimTypeClass** | 0x6C1340 |
| 38 | 0x6C1850 | **TActionClass** | 0x6C1840 |
| 39 | 0x6C19D0 | **TriggerClass** | 0x6C19C0 |
| 40 | 0x6C1B50 | **TriggerTypeClass** | 0x6C1B50 |
| 41 | 0x6C1CD0 | **ScriptClass** | 0x6C1CC0 |
| 42 | 0x6C1E50 | **ScriptTypeClass** | 0x6C1E50 |
| 43 | 0x6C1FD0 | **TagClass** | 0x6C1FC0 |
| 44 | 0x6C2150 | **TagTypeClass** | 0x6C2150 |
| 45 | 0x6C22D0 | **TeamClass** | 0x6C22C0 |
| 46 | 0x6C2450 | **TeamTypeClass** | 0x6C2450 |
| 47 | 0x6C25D0 | **TaskForceClass** | 0x6C25C0 |
| 48 | 0x6C2750 | **UnitTypeClass** | 0x6C2740 |
| 49 | 0x6C28D0 | **BuildingTypeClass** | 0x6C28C0 |
| 50 | 0x6C2A50 | **AircraftTypeClass** | 0x6C2A40 |
| 51 | 0x6C2BD0 | **InfantryTypeClass** | 0x6C2BC0 |
| 52 | 0x6C2D50 | **BulletTypeClass** | 0x6C2D40 |
| 53 | 0x6C2ED0 | **IsometricTileTypeClass** | 0x6C2EC0 |
| 54 | 0x6C3050 | **OverlayTypeClass** | 0x6C3040 |
| 55 | 0x6C31D0 | **SmudgeTypeClass** | 0x6C31C0 |
| 56 | 0x6C3AD0 | **AnimTypeClass** | 0x6C3AC0 |
| 57 | 0x6C3C50 | **HouseTypeClass** | 0x6C3C40 |
| 58 | 0x6C4B50 | **TerrainClass** | 0x6C4B50 |
| 59 | 0x6C52D0 | **WarheadTypeClass** | 0x6C52C0 |
| 60 | 0x6C5450 | **WeaponTypeClass** | 0x6C5440 |
| 61 | 0x6C5750 | **ParticleTypeClass** | 0x6C5740 |
| 62 | 0x6C5A50 | **ParticleSystemTypeClass** | 0x6C5A40 |
| 63 | 0x6C5BD0 | **AITriggerTypeClass** | 0x6C5BC0 |
| 64 | 0x6C1370 | **SuperWeaponTypeClass** | 0x6C1370 |

---

## 四、Locomotion (移动系统) COM 接口

移动系统是 gamemd.exe 中最复杂的 COM 子系统。每种移动类型是一个独立的 COM 类，通过 CLSID 创建。

### 4.1 CLSID 表 (0x7E9A60)

| 地址 | 名称 | CLSID | 引用数 |
|------|------|-------|--------|
| 0x7E9A60 | **WalkLocomotion** | `{4A582744-9839-11D1-B709-00A024DDAFD1}` | 基础 |
| 0x7E9A70 | **DriveLocomotion** | `{4A582745-9839-11D1-B709-00A024DDAFD1}` | 基础 |
| 0x7E9A80 | **FlyLocomotion** | `{4A582746-9839-11D1-B709-00A024DDAFD1}` | 2 |
| 0x7E9A90 | **HoverLocomotion** | `{4A582747-9839-11D1-B709-00A024DDAFD1}` | 基础 |
| 0x7E9AA0 | **TunnelLocomotion** | `{55D141B8-DB94-11D1-AC98-006008055BB5}` | 基础 |
| 0x7E9AB0 | **DriveLocomotion2** | `{2BEA74E1-7CCA-11D3-BE14-00104B62A16C}` | 1 |
| 0x7E9AC0 | **JumpjetLocomotion** | `{92612C46-F71F-11D1-AC9F-006008055BB5}` | **10+** (核心) |
| 0x7E9AD0 | **ShipLocomotion** | `{B7B49766-E576-11D3-9BD9-00104B972FE8}` | 基础 |

> 注: 4A582744-4A582747 是连续 GUID 序列 (Walk→Hover)。  
> JumpjetLocomotion 有 10+ xrefs — 唯一在核心移动/AI 代码中有 `if (locomotor CLSID == JumpjetGUID)` 分支检查的类型。

### 4.2 所有注册的移动类型 (14 个 TClassFactory)

| # | 工厂 | 类 | CLSID |
|---|------|-----|-------|
| 65 | 0x6C46D0 | WalkLocomotionClass | {4A582744-9839-11D1-B709-00A024DDAFD1} |
| 66 | 0x6C3F50 | DriveLocomotionClass | {4A582745-9839-11D1-B709-00A024DDAFD1} |
| 67 | 0x6C49D0 | FlyLocomotionClass | {4A582746-9839-11D1-B709-00A024DDAFD1} |
| 68 | 0x6C4250 | HoverLocomotionClass | {4A582747-9839-11D1-B709-00A024DDAFD1} |
| 69 | 0x6C4550 | TunnelLocomotionClass | {55D141B8-DB94-11D1-AC98-006008055BB5} |
| 70 | 0x6C40D0 | JumpjetLocomotionClass | {92612C46-F71F-11D1-AC9F-006008055BB5} (10+ xrefs) |
| 71 | 0x6C4E50 | ShipLocomotionClass | {B7B49766-E576-11D3-9BD9-00104B972FE8} |
| 72 | 0x6C43D0 | RocketLocomotionClass | (非 GUID 注册) |
| 73 | 0x6C4850 | DropPodLocomotionClass | (非 GUID 注册) |
| 74 | 0x6C4B50 | TeleportLocomotionClass | (非 GUID 注册) |
| 75 | 0x6C4CD0 | MechLocomotionClass | (非 GUID 注册) |
| — | — | DriveLocomotion2 | {2BEA74E1...} (有 CLSID，无 TClassFactory) |

### 4.3 移动类型创建链

```
INIClass::ReadGUID_Overwrite (0x527920)
  → StringFromCLSID → 解析 INI 中的 GUID 字符串
  → 存入 ObjectTypeClass::Locomotor (+0x844, 16B)

UnitClass::Create 等调用:
  → CLSIDFromString(&guid) → 获取 pCLSID
  → COMClassFactory::CreateInstance(&pCLSID) → 创建 COM 移动对象
  → COMObject::SwapReference → 替换 FootClass 的 ILocomotion 接口
```

### 4.4 移动类型类层次

```
ILocomotion (COM 接口, IID @ 0x7ED358)
  └─ LocomotionClass (抽象基类)
       ├─ WalkLocomotionClass
       ├─ DriveLocomotionClass
       ├─ FlyLocomotionClass
       ├─ HoverLocomotionClass
       ├─ TunnelLocomotionClass
       ├─ JumpjetLocomotionClass    ← 最复杂，10+ 引用
       ├─ ShipLocomotionClass
       ├─ RocketLocomotionClass
       ├─ DropPodLocomotionClass
       ├─ TeleportLocomotionClass
       └─ MechLocomotionClass
```

---

## 五、Type 类 vs Instance 类的 COM 差异

| 属性 | Type 类 (Type Class) | Instance 类 (Instance) |
|------|---------------------|------------------------|
| TClassFactory vtable[3] | `GetClassIdentifier` (返回自身 CLSID) | `ddtor` (析构) |
| 用途 | 对象原型/模板数据 | 运行时游戏对象 |
| 数量 | 28 | 37 |
| COM 创建 | 通过 IClassFactory 查找 | 通过 CLSIDFromString |

---

## 六、COM 注册流程

```
WinMain
  → OleInitialize
  → RegisterClassesCOM (0x6BB390)
       ├── 遍历 77 个 TClassFactory vtables
       ├── COMClassFactory::Register (0x6BEDB0)
       │    ├── RegisterClassObject → Windows 注册表
       │    │   写入 HKCR\CLSID\{...}
       │    │   ProgID、InprocServer32、TypeLib
       │    └── 每个类注册到 COM 运行时
       └── 完成后程序可以 CoCreateInstance
```

---

## 七、GUID 速查表

### 接口 IID

| 名称 | GUID | 地址 |
|------|------|------|
| IID_IUnknown | `{00000000-0000-0000-C000-000000000046}` | 0x7F7C90 |
| IID_IPersist | `{0000010C-0000-0000-C000-000000000046}` | 0x7F7C70 |
| IID_IPersistStream | `{00000109-0000-0000-C000-000000000046}` | 0x7F7C80 |
| IID_IRTTITypeInfo | `{170DAC82-12E4-11D2-8175-006008055BB5}` | 0x7E9AE0 |
| IID_ILocomotion | `{070F3290-9841-11D1-B709-00A024DDAFD1}` | 0x7ED358 |
| IID_IPublicHouse | `{CAACF210-86E3-11D1-B706-00A024DDAFD1}` | 0x7E9B00 |
| IID_IHouse | `{941582E0-86DA-11D1-B706-00A024DDAFD1}` | 0x7EA768 |
| IID_IPiggyback | `{92FEA800-A184-11D1-B70A-00A024DDAFD1}` | 0x7E9B10 |
| IID_ISwizzle | `{5FF0CA70-8B12-11D1-B708-00A024DDAFD1}` | 0x7E9B20 |
| IID_IFlyControl | `{820F501C-4F39-11D2-9B70-00104B972FE8}` | 0x7E9B40 |

### 移动 CLSID

| 名称 | CLSID |
|------|-------|
| CLSID_WalkLocomotion | `{4A582744-9839-11D1-B709-00A024DDAFD1}` |
| CLSID_DriveLocomotion | `{4A582745-9839-11D1-B709-00A024DDAFD1}` |
| CLSID_FlyLocomotion | `{4A582746-9839-11D1-B709-00A024DDAFD1}` |
| CLSID_HoverLocomotion | `{4A582747-9839-11D1-B709-00A024DDAFD1}` |
| CLSID_TunnelLocomotion | `{55D141B8-DB94-11D1-AC98-006008055BB5}` |
| CLSID_DriveLocomotion2 | `{2BEA74E1-7CCA-11D3-BE14-00104B62A16C}` |
| CLSID_JumpjetLocomotion | `{92612C46-F71F-11D1-AC9F-006008055BB5}` |
| CLSID_ShipLocomotion | `{B7B49766-E576-11D3-9BD9-00104B972FE8}` |

---

## 八、AbstractClass 的 COM 接口继承

```cpp
class AbstractClass : public IPersistStream,    // {00000109-...}
                      public IRTTITypeInfo,      // {170DAC82-...}
                      public INoticeSink,        // (无 IID，内部接口)
                      public INoticeSource       // (无 IID，内部接口)
{
    // 4 个 vtable 指针 (MI 结果)
    // vtable[0]: IPersistStream + IRTTITypeInfo + INoticeSink + INoticeSource + 自定义
    // vtable[1-3]: 子类的额外接口
};
```

> 所有游戏对象 (ObjectClass → TechnoClass → BuildingClass/UnitClass/...) 均继承该 COM 层。
