# gamemd.exe 类体系全览

> 数据来源: IDA Pro 9.2 vtable + 构造函数逆向分析  
> 统计: 289 个带 vtable 的类, 77 个 COM 注册类, 14 种移动类型

---

## 一、核心对象继承链

所有游戏对象均继承自 `AbstractClass`，通过 4 重 MI (Multiple Inheritance) 实现 COM 接口。

```
AbstractClass (4 vtables @ 0x7E1F24/2C/34/50)
├── 实现: IPersistStream, IRTTITypeInfo, INoticeSink, INoticeSource
│
├─ ObjectClass (4 vtables @ 0x7EF034/3C/44/60) — sizeof 0xC9
│   │ 添加: 坐标、位置、血量、视野、渲染标记
│   │
│   ├─ MissionClass (4 vtables @ 0x7EDC94/9C/A4/C0) — 状态机
│   │   │  Mission_Attack/Move/Guard/Hunt/Retreat/...
│   │   │
│   │   └─ RadioClass (4 vtables @ 0x7F04DC/E4/EC/08) — 通信
│   │       │  SendCommand, ReceiveCommand, SendToEachLink
│   │       │
│   │       └─ TechnoClass (3 vtables @ 0x7F493C/44/60) — 所有可操控单位基类
│   │           │  武器、弹药、隐形、升级、乘客、部署、C4...
│   │           │  sizeof ~0x504 (1284B)
│   │           │
│   │           ├─ FootClass (4 vtables @ 0x7E8C68/70/78/94) — 可移动单位
│   │           │   │  Speed, Destination, Locomotor, Pathfinding
│   │           │   │  sizeof ~0x6BC (1724B)
│   │           │   │
│   │           │   ├─ UnitClass (3 vtables @ 0x7F5C4C/54/70) — 坦克/车辆
│   │           │   │   sizeof ~0x6D4 (1748B)
│   │           │   │
│   │           │   ├─ InfantryClass (3 vtables @ 0x7EB034/3C/58) — 步兵
│   │           │   │   sizeof ~0x6E8 (1768B)
│   │           │   │
│   │           │   └─ AircraftClass (5 vtables @ 0x7E2250+)
│   │           │       sizeof ~0x6D5 (1749B)
│   │           │
│   │           └─ BuildingClass — 建筑 (直接继承 TechnoClass)
│   │               │  Factory, Power, Gap, Sensor
│   │               │  sizeof ~0x704 (1796B)
│   │               │
│   │               (vtable @ 0x7E3EBC) — 322 条目 (完整累积 vtable)
│   │
│   ├─ AnimClass (3 vtables @ 0x7E3330/38/54) — 动画/特效
│   │   sizeof 2162B
│   │
│   ├─ BulletClass (4 vtables @ 0x7E46B8+) — 子弹/弹道
│   │
│   ├─ ParticleClass (4 vtables @ 0x7EF928+) — 粒子
│   │   sizeof 1343B
│   │
│   ├─ ParticleSystemClass (3 vtables @ 0x7EFB78+) — 粒子系统
│   │   sizeof 705B
│   │
│   ├─ VoxelAnimClass (4 vtables @ 0x7F62EC+) — 体素动画
│   │   sizeof 332B
│   │
│   ├─ WaveClass (3 vtables @ 0x7F6BD0+) — 冲击波
│   │   sizeof 645B
│   │
│   └─ (其他 ObjectClass 子类)
│
├─ OverlayClass (4 vtables @ 0x7EF3A8+) — 地表覆盖物
├─ SmudgeClass (4 vtables @ 0x7F32D0+) — 弹坑/痕迹
├─ TerrainClass (3 vtables @ 0x7F521C+) — 地形对象
│   sizeof 593B
├─ TiberiumClass (4 vtables @ 0x7F56FC+) — 矿石/资源
├─ CellClass (4 vtables @ 0x7E4EC0+) — 地图单元格
│   sizeof 440B
├─ FoggedObjectClass (4 vtables @ 0x7E8B0C+) — 战争迷雾对象
│   sizeof 1150B
└─ AlphaShapeClass (4 vtables @ 0x7E3278+) — 透明度形状
    sizeof 351B
```

### 1.1 关键 vtable 条目

| 虚函数 | 说明 | 实现层次 |
|--------|------|----------|
| `WhatAmI()` | 返回 AbstractType 枚举 | AbstractClass |
| `GetCoords()` | 获取世界坐标 | ObjectClass |
| `Update()` | 每帧更新 | ObjectClass+ |
| `Draw()` | 渲染对象 | ObjectClass+ |
| `ReceiveDamage()` | 接收伤害 | ObjectClass |
| `Select()`/`Deselect()` | 选中/取消选中 | ObjectClass |
| `Mission_*` | 任务状态机 (~20 个) | MissionClass |
| `Fire()` | 开火 | TechnoClass |
| `SetDestination()` | 设置移动目标 | FootClass |
| `GetWeapon()` | 获取武器 | TechnoClass |
| `CanDeploySlashUnload()` | 能否部署 | TechnoClass |

---

## 二、Type 类继承链 (对象类型/原型数据)

所有 Type 类继承自 `ObjectTypeClass`，存储 INI 配置数据。

```
ObjectTypeClass (4 vtables @ 0x7EF2AC/B4/BC/D8) — sizeof 0xDA
│
├─ TechnoTypeClass (4 vtables @ 0x7F4EAC+) — 可操控单位类型
│   │  Cost, Strength, Sight, Speed, Weapons...
│   │  sizeof ~0xCC8 (3272B)
│   │
│   ├─ UnitTypeClass (4 vtables @ 0x7F61EC+)
│   ├─ InfantryTypeClass (4 vtables @ 0x7EB5E4+) — sizeof 729B
│   ├─ AircraftTypeClass (4 vtables @ 0x7E283C+)
│   └─ BuildingTypeClass (4 vtables @ 0x7E4544+) — sizeof 484B
│
├─ AnimTypeClass (4 vtables @ 0x7E35DC+) — sizeof 800B
├─ BulletTypeClass (4 vtables @ 0x7E491C+) — sizeof 542B
├─ WarheadTypeClass (4 vtables @ 0x7F6B04+) — sizeof 752B
├─ WeaponTypeClass (4 vtables @ 0x7F738C+) — sizeof 641B
├─ ParticleTypeClass (4 vtables @ 0x7F015C+)
├─ ParticleSystemTypeClass (4 vtables @ 0x7F007C+)
├─ OverlayTypeClass (4 vtables @ 0x7EF5D4+) — sizeof 380B
├─ SmudgeTypeClass (4 vtables @ 0x7F34FC+)
├─ TerrainTypeClass (4 vtables @ 0x7F542C+) — sizeof 573B
├─ IsometricTileTypeClass (4 vtables @ 0x7ECC1C+)
├─ HouseTypeClass (4 vtables @ 0x7EAB2C+)
├─ SuperWeaponTypeClass (4 vtables @ 0x7F4064+) — sizeof 600B
├─ VoxelAnimTypeClass (4 vtables @ 0x7F651C+) — sizeof 483B
├─ ScriptTypeClass (4 vtables @ 0x7F0FDC+) — sizeof 191B
├─ TriggerTypeClass (4 vtables @ 0x7F58D8+) — sizeof 374B
├─ TeamTypeClass (4 vtables @ 0x7F47A4+) — sizeof 339B
├─ TagTypeClass (4 vtables @ 0x7F4598+) — sizeof 314B
└─ AITriggerTypeClass (4 vtables)
```

---

## 三、Locomotion (移动系统) 类层次

```
LocomotionClass (2 vtables @ 0x7EADF4/0x7EAEC0)
│  实现 ILocomotion 接口 (IID @ 0x7ED358)
│  sizeof 0x15
│
├─ DriveLocomotionClass (2 vtables @ 0x7E7EB0/0x7E7F7C)
│   ├─ RocketLocomotionClass (2 vtables @ 0x7F0B1C/0x7F0BE8)
│   └─ ShipLocomotionClass (2 vtables @ 0x7F2D8C/0x7F2E58)
│
├─ WalkLocomotionClass (3 vtables @ 0x7F69D4/0x7F69F8/0x7F6AC4)
│   └─ Infantry/一般单位步行
│
├─ FlyLocomotionClass (2 vtables @ 0x7E89F4/0x7E8AC0)
│   └─ 飞行器移动
│
├─ HoverLocomotionClass (2 vtables @ 0x7EACFC/0x7EADC8)
│   └─ 悬浮单位
│
├─ JumpjetLocomotionClass (3 vtables @ 0x7ECD44/0x7ECD68/0x7ECE34)
│   └─ 跳跃喷气 ★ 最多代码引用 (10+)
│
├─ TunnelLocomotionClass (2 vtables @ 0x7F5A24/0x7F5AF0)
│   └─ 钻地移动
│
├─ TeleportLocomotionClass (3 vtables @ 0x7F4FDC/0x7F5000/0x7F50CC)
│   └─ 超时空传送
│
├─ MechLocomotionClass (2 vtables @ 0x7EDB6C/0x7EDC38)
│   └─ 机甲步态
│
└─ DropPodLocomotionClass (3 vtables @ 0x7E8254/0x7E8278/0x7E8344)
    └─ 空降舱
```

### 3.1 CLSID 注册 (含 GUID)

| 移动类型 | vtable[0] | CLSID 地址 | GUID |
|----------|-----------|------------|------|
| WalkLocomotion | 0x7F69D4 | 0x7E9A60 | {4A582744-9839-11D1-B709-00A024DDAFD1} |
| DriveLocomotion | 0x7E7EB0 | 0x7E9A70 | {4A582745-...} |
| FlyLocomotion | 0x7E89F4 | 0x7E9A80 | {4A582746-...} |
| HoverLocomotion | 0x7EACFC | 0x7E9A90 | {4A582747-...} |
| TunnelLocomotion | 0x7F5A24 | 0x7E9AA0 | {55D141B8-DB94-11D1-AC98-006008055BB5} |
| DriveLocomotion2 | — | 0x7E9AB0 | {2BEA74E1-7CCA-11D3-BE14-00104B62A16C} |
| JumpjetLocomotion | 0x7ECD44 | 0x7E9AC0 | {92612C46-F71F-11D1-AC9F-006008055BB5} |
| ShipLocomotion | 0x7F2D8C | 0x7E9AD0 | {B7B49766-E576-11D3-9BD9-00104B972FE8} |

---

## 四、实体/辅助类

### 4.1 Script/Trigger/Team 系统

```
ScriptClass (4 vtables @ 0x7F0F4C+) — sizeof 148B
│  脚本动作序列

ScriptTypeClass (4 vtables @ 0x7F0FDC+) — sizeof 191B
│  脚本类型模板

TActionClass (4 vtables @ 0x7F4410+) — sizeof 379B
│  脚本动作

TEventClass (4 vtables @ 0x7F554C+)
│  脚本事件

TriggerClass (4 vtables @ 0x7F582C+) — sizeof 403B
│  地图触发器

TriggerTypeClass (4 vtables @ 0x7F58D8+) — sizeof 374B
│  触发器类型

TeamClass (4 vtables @ 0x7F4704+)
│  队伍

TeamTypeClass (4 vtables @ 0x7F47A4+) — sizeof 339B
│  队伍类型

TaskForceClass (4 vtables @ 0x7F4654+) — sizeof 194B
│  特遣部队

TagClass (4 vtables @ 0x7F44B4+)
│  标签

TagTypeClass (4 vtables @ 0x7F4598+) — sizeof 314B
│  标签类型
```

### 4.2 特效/辅助

```
TemporalClass (4 vtables @ 0x7F5154+) — sizeof 138B — 时空效果
AirstrikeClass (4 vtables @ 0x7E297C+) — 空袭
BombClass (4 vtables @ 0x7E3CE4+) — 炸弹
ParasiteClass (4 vtables @ 0x7EF864+) — sizeof 145B — 寄生
EMPulseClass (4 vtables @ 0x7E877C+) — EMP 脉冲
RadSiteClass (4 vtables @ 0x7F07E4+) — sizeof 186B — 辐射区
DiskLaserClass (4 vtables @ 0x7E5F8C+) — 激光
LightSourceClass (4 vtables @ 0x7ECFFC+) — sizeof 194B — 光源
BuildingLightClass (4 vtables @ 0x7E3AA4+) — 建筑灯光
NeuronClass (4 vtables @ 0x7E3DC4+) — 神经元/AI

SuperClass (4 vtables @ 0x7F3FBC+) — sizeof 199B — 超武实例
SuperWeaponTypeClass (4 vtables @ 0x7F4064+) — sizeof 600B — 超武类型

TubeClass (4 vtables @ 0x7F5984+) — sizeof 246B — 管道/传送带

CaptureManagerClass — 占领管理
SpawnManagerClass (4 vtables @ 0x7F3624+) — sizeof 516B — 生成管理
SlaveManagerClass (4 vtables @ 0x7F319C+) — sizeof 440B — 奴隶管理

FactoryClass (4 vtables @ 0x7E88A4+) — 生产工厂逻辑
```

---

## 五、UI 类层次

```
DisplayClass (1 vtable @ 0x7E6114) — 主显示/渲染管理
│  子类化 DDRAW 窗口, 管理后台缓冲, Blit, Scroll

MouseClass (2 vtables @ 0x7E195C/0x7E1964) — sizeof 408B
│  鼠标输入, 点击检测, 拖拽

WWMouseClass (1 vtable) — Win32 鼠标封装

SidebarClass (1 vtable @ 0x7F3058) — 侧边栏建造面板
│  生产队列, 选项卡, Cameo 图标

TabClass (2 vtables) — 选项卡切换

RadarClass (1 vtable @ 0x7F0344) — sizeof 670B — 迷你雷达

PowerClass (1 vtable) — 电力条

CommandClass (1 vtable) — 命令面板 (移动/攻击/停止等)

GadgetClass (1 vtable) — 抽象 UI 控件
├─ TextButtonClass (1 vtable)
├─ TextLabelClass (1 vtable)
├─ ShapeButtonClass (1 vtable)
├─ ToggleClass (1 vtable)
├─ SliderClass (1 vtable)
├─ GaugeClass (1 vtable)
├─ TriColorGaugeClass (1 vtable)
├─ EditClass (1 vtable)
├─ DropListClass (1 vtable)
├─ StaticButtonClass (1 vtable)
└─ CheckListClass (1 vtable)

ControlClass (1 vtable) — 通用控件基类

ToolTipManager (1 vtable) — 悬浮提示

ScoreClass 系列:
  ScoreAnimClass, ScoreBigFontClass, ScoreFontClass,
  ScoreFullFontClass, ScorePrintClass, ScoreTimeClass,
  CampaignScoreClass, CampaignEndScoreClass

LoadOptionsClass, LoadProgressMgr — 加载管理
ProgressScreenClass — 进度条画面
```

---

## 六、菜单/电影系统

```
GraphicMenu (1 vtable) — 菜单基类
├─ GraphicMenuItem (1 vtable)
├─ GraphicMenuAnimItem (1 vtable)
├─ GraphicMenuImageItem (1 vtable)
└─ GraphicMenuShortcutItem (1 vtable)

MSAnim (1 vtable) — 菜单动画基类
├─ MSShapeAnim (1 vtable) — SHP 动画
├─ MSBinkAnim (1 vtable) — BINK 动画
├─ MSBitPrintAnim (1 vtable) — 位图文字
├─ MSFadeAnim (1 vtable) — 淡入淡出
├─ MSFrameAnim (1 vtable) — 帧动画
├─ MSOverlayAnim (1 vtable) — 叠加动画
├─ MSPCXAnim (1 vtable) — PCX 图像
├─ MSPrintAnim (1 vtable) — 文字动画
├─ MSVQAnim (1 vtable) — VQ 视频
├─ MSFont (1 vtable) — 字体
└─ MSEngine (1 vtable) — 动画引擎

MovieHandle (1 vtable) — 电影抽象
├─ VQMovieHandle (1 vtable) — VQ 格式
└─ BinkMovieHandle (1 vtable) — BINK 格式

CounterClass (1 vtable) — 计数器
Animate (1 vtable) — 动画时间线
AnimFile (1 vtable) — 动画文件
```

---

## 七、文件/IO 类层次

```
FileClass (1 vtable) — 文件抽象
├─ RawFileClass (1 vtable) — 原始文件
├─ CCFileClass (1 vtable) — 缓存文件
├─ RAMFileClass (1 vtable) — 内存文件
├─ BufferIOFileClass (1 vtable) — 缓冲IO
└─ MixFileClass (1 vtable) — MIX 容器

Straw (1 vtable) — 数据读取抽象 (Pipe & Filter)
├─ FileStraw (1 vtable)
├─ BufferStraw (1 vtable)
├─ CacheStraw (1 vtable)
├─ RandomStraw (1 vtable)
├─ BlowStraw (1 vtable) — Blowfish 解密
├─ LCWStraw (1 vtable) — LCW 解压缩
├─ LZOStraw (1 vtable) — LZO 解压缩
├─ PKStraw (1 vtable) — PKWare 解压缩
└─ SHAPipe/SHAStraw (1 vtable) — SHA 哈希

Pipe (1 vtable) — 数据写入抽象
├─ FilePipe (1 vtable)
├─ BufferPipe (1 vtable)
├─ BlowPipe (1 vtable)
├─ LCWPipe (1 vtable)
├─ LZOPipe (1 vtable)
└─ PKPipe (1 vtable)

Base64Pipe/Base64Straw — Base64 编解码
CStreamClass (2 vtables @ 0x7E5D94/0x7E5DAC) — COM 流
```

---

## 八、网络/多人类层次

```
CommBufferClass (1 vtable) — 通信缓冲

ConnectionClass (1 vtable) — 连接抽象
├─ NullModemConnClass (1 vtable) — 空调制解调器

IPXInterfaceClass (1 vtable) — IPX 协议

UDPInterfaceClass (1 vtable) — UDP 协议

WinsockInterfaceClass (1 vtable) — WinSock 包装

WinModemClass (1 vtable) — 调制解调器

NullModemClass (1 vtable) — 空调成对

ConnManClass (1 vtable) — 连接管理

IPXGlobalConnClass (1 vtable) — IPX 全局连接

IPXConnClass (1 vtable) — IPX 单连接

IPXManagerClass (1 vtable) — IPX 管理器

Dial8Class (1 vtable) — 拨号

WebBrowser (1 vtable) — 嵌入式浏览器 (WOL)

Multiplayer* 系列:
  MultiplayerBattle (1 vtable) — 对战
  MultiplayerSiege (1 vtable) — 攻城
  MultiplayerManBattle (1 vtable)
  FreeForAll (1 vtable)
  UnholyAlliance (1 vtable)
  MPCooperative (1 vtable)
  Megawealth (1 vtable)
  MultiplayerGameMode (1 vtable)
  MultiplayerTeam (1 vtable)
  MultiplayerSiegeAttackerTeam (1 vtable)
  MultiplayerSiegeDefenderTeam (1 vtable)
  MultiplayerObserverTeam (1 vtable)
  MultiplayerBattleTeam (1 vtable)
```

---

## 九、系统/基础设施类

```
MapClass (1 vtable) — 地图管理 (路径查找, 地形, 触发)

MapSeedClass (1 vtable) — 地图种子

HouseTypeClass (4 vtables @ 0x7EAB2C+) — 阵营类型

HouseClass (7 vtables @ 0x7EA7F4/0C/34/74...) — sizeof 769B
│  阵营实例 (最多 vtable 数量: 7)

SideClass (4 vtables @ 0x7F2E94+) — sizeof 192B — 阵营设置

SidebarClass (1 vtable @ 0x7F3058) — 侧边栏

Tactical (4 vtables @ 0x7F431C+) — 战术地图

ConvertClass (1 vtable) — 颜色转换
  └─ LightConvertClass (1 vtable) — 光照/地形转换

VersionClass (1 vtable) — 版本管理

WDTState (1 vtable) — WDT 状态

CarryoverClass (1 vtable) — 关卡继承

CampaignClass (4 vtables @ 0x7E49FC+) — 战役数据

WaypointPathClass (4 vtables @ 0x7F6E44+) — sizeof 175B — 路径点

ColorListClass (1 vtable) — 调色板

PixelFXClass (1 vtable) — 像素特效

SwizzleManagerClass (1 vtable) — 图形转换

TiberianSunClassFactory (1 vtable) — TS 兼容工厂

PlayerProfile (1 vtable) — 玩家配置

ConnectionPointClass (1 vtable) — COM 连接点

EnumConnectionsClass/EnumConnectionPointsClass — 枚举
```

---

## 十、模板容器类

```
GenericList (1 vtable) — 通用链表
GenericNode (1 vtable) — 通用链表节点

ListClass (1 vtable) — 数组列表

LogicClass (1 vtable) — 逻辑触发

BrainClass (1 vtable) — AI 大脑

Blitter (1 vtable) — 位块传输基类
  └─ RLEBlitter (1 vtable) — RLE 压缩 Blitter

ReferenceCounted (1 vtable) — COM 引用计数基类
```

---

## 十一、类型枚举 (AbstractType)

```
AbstractType (由 WhatAmI() 返回):
  0x00: Unit         1x00: UnitType
  0x01: Infantry     1x01: InfantryType
  0x02: Aircraft     1x02: AircraftType
  0x03: Building     1x03: BuildingType
  0x04: Anim         1x04: AnimType
  0x05: Bullet       1x05: BulletType
  0x06: Particle     1x06: ParticleType
  0x07: Wave         1x07: HouseType
  0x08: Terrain      1x08: OverlayType
  0x09: Overlay      1x09: SmudgeType
  0x0A: Smudge       1x0A: ParticleSystemType
  0x0B: FoggedObject 1x0B: SuperWeaponType
  0x0C: AlphaShape   1x0C: WarheadType
  0x0D: House        1x0D: WeaponType
  0x0E: Tag          1x0E: ScriptType
  0x0F: Team         1x0F: TriggerType
  0x10: Trigger      1x10: TeamType
  0x11: TaskForce    1x11: TagType
  0x12: Script       1x12: TaskForceType
  0x13: TAction      1x13: VoxelAnimType
  0x14: TEvent       1x14: TerrainType
  0x15: Campagn      1x15: AITriggerType
  0x16: Side         1x16: CampaignType
  0x17: Empulse      1x17: TubeType
  0x18: Cell         1x18: AirstrikeType
  0x19: Bomb         1x19: —
  ...                 ...
```

---

## 十二、vtable 数量统计

| vtable 数 | 类数 | 代表 |
|-----------|------|------|
| **7** | 1 | HouseClass (最多 MI 接口) |
| **5** | 1 | AircraftClass |
| **4** | 78 | 大部分核心类 (多 MI) |
| **3** | 17 | TechnoClass, AnimClass, VoxelAnim 等 |
| **2** | 14 | Locomotion 子类, MouseClass 等 |
| **1** | 178 | 简单继承类 (UI, IO, 网络) |
| **总计** | **289** | |

---

## 十三、类大小排行 (Top 20)

| 类 | sizeof | 说明 |
|-----|--------|------|
| AnimClass | 2162B | 动画 (最多帧数据) |
| HouseClass | 769B | 阵营 (7 vtables) |
| FoggedObjectClass | 1150B | 战争迷雾 |
| UnitClass | ~1748B | 坦克/车辆 |
| InfantryClass | ~1768B | 步兵 |
| AircraftClass | ~1749B | 飞行器 |
| BuildingClass | ~1796B | 建筑 |
| FootClass | ~1724B | 可移动单位 |
| ParticleClass | 1343B | 粒子 |
| TechnoClass | ~1284B | 可操控单位 |
| ParticleSystemClass | 705B | 粒子系统 |
| RadarClass | 670B | 迷你雷达 |
| TechnoTypeClass | ~3272B | 单位类型 |
| WaveClass | 645B | 冲击波 |
| WarheadTypeClass | 752B | 弹头类型 |
| WeaponTypeClass | 641B | 武器类型 |
| InfantryTypeClass | 729B | 步兵类型 |
| AnimTypeClass | 800B | 动画类型 |
| SuperWeaponTypeClass | 600B | 超武类型 |
| TerrainClass | 593B | 地形对象 |
