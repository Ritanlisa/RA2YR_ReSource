# gamemd.exe 游戏内逻辑完整流程

> 覆盖: 游戏开始准备 → 每帧游戏更新 → 全部子系统 → 战斗/生产/AI → 结束清理。所有函数/变量名均为 IDA 确认的命名。

---

## 1. 游戏开始 (MenuSelect State 16/17 → 进入游戏循环)

### 1.1 场景加载

```
MenuSelect → State 16/17:
  │
  ├── ScenarioClass::LoadNetworkConfig (&GameMode_Current) (0x6980C0)
  │     └─ 读取 [MultiPlayer] LAN/WOL 配置到 ScenarioClass 成员
  │
  ├── SuperWeapon Type READ_INI (从 CCINIClass_INI_Rules 重新加载)
  │
  ├── 按 GameMode 分支:
  │     ├─ Campaign (1/2): NullModem 初始化 → ModemHost/Guest::Dialog
  │     ├─ Internet (3): IPXInterfaceClass::Construct → WinsockInterface::Init
  │     │     → InitNetworkGameState → NetworkLobby::CreateGame
  │     ├─ Skirmish (4): Network::Init → RunWOLMainLoop
  │     └─ Skirmish2 (5): ShowSkirmishSetupScreen
  │
  ├── ScenarioClass::LoadScenarioAndStart (0x683AB0, 1011B)
  │     ├── [存档] CCFileClass::Open(savegame) → FileClass::Load
  │     │     ├─ 读 Rules 配置 (g_RulesInitConfig, g_MenuRandomSeed)
  │     │     ├─ 读 ScenarioClass 数据 (偏移 4692+: 场景名, 设置)
  │     │     └─ 读 g_GameModeOptions (184 字节)
  │     │
  │     ├── [新游戏] Scenario::Load(map_file)
  │     │     ├─ 地图 INI 解析: [Map] [Terrain] [Infantry] [Units] [Buildings]
  │     │     ├─ 地形生成 (Tile placement)
  │     │     ├─ 对象创建: 步兵/单位/建筑 → 各自 Constructor
  │     │     └─ 触发/小队/路径点 创建
  │     │
  │     └── AssignHouses (0x68745E 被 Spawner hook 替换)
  │           ├─ 玩家阵营/颜色/出生点 分配
  │           └─ AI 玩家配置 (HouseHandicaps, SpawnLocations)
  │
  ├── SessionClass::CreateConnections (&GameMode_Current) (0x697B70)
  │     └─ 建立网络连接 (战役=NullModem, 网络=IPX/UDP)
  │
  ├── Network::SetConnectionParams/TacticalClass::SetCameraPosition
  │     └─ 设置网络延迟参数 + 初始视角位置
  │
  ├── Mouse::SetCursor(19) + TacticalClass::BuildCommandBar(1)
  │     └─ 初始化鼠标 + 构建命令栏 UI
  │
  ├── MapClass::MarkForRedraw(0) + Event::Dispatch
  │     └─ 强制全图重绘 + 分派初始化事件
  │
  └── return 1 → 进入 MainGame 内层循环!
```

### 1.2 游戏开始全局变量

| 地址 | 变量 | 说明 |
|------|------|------|
| `0xA8B238` | `GameMode_Current` | 0=无, 1/2=战役, 3=互联网, 4=遭遇战, 5=Skirmish |
| `0xA8ED6B` | `ArmageddonMode` | 末日模式 (跳过菜单, 快速开始) |
| `0xA8D5F8` | `g_NetworkEventPending` | 网络事件标志位 |
| `0xA8EDA0` | `g_MainGameState` | 游戏内状态 (0=空闲, 1-9=各种UI) |
| `0xA8ED9C` | `g_GameActive` | 游戏激活 (=ScenarioClass[13730]) |
| `0x822CFC` | `g_GameLoopActive` | 游戏循环运行标志 |
| `0xA8DA84` | `Game_PlayerCount` | 玩家数量 |
| `0xA8DB30` | `g_EventDispatchState` | 事件分发状态 |
| `0xA8ED84` | `CurrentFrame` | 帧计数器 |

---

## 2. 每帧游戏循环 (MainGame 内层 do-while)

```
MainGame:
  do {
    if (GameFrameLoop() && GameFrameCheck()) break;
    MainGameFrame();
  } while (!GameFrameCheck());
```

### 2.1 GameFrameLoop (0x55D360) — 每帧主逻辑

```
GameFrameLoop (每帧调用)
  │
  ├── Dialog::MessageLoop
  │     └─ PeekMessage→Translate→DispatchMessage (消息泵)
  │
  ├── 帧计时:
  │     ├─ timeGetTime / Timer::GetTicks
  │     └─ Timer::EnableHighPrecision
  │
  ├── [非网络] ScenarioClass::ProcessIntroTimer
  │
  ├── Event::Dispatch (0x48D080) ← 核心事件系统
  │     ├── AudioVideo::Update (BINK/音频帧更新)
  │     ├── AsyncIO 处理 (异步文件 I/O 完成回调)
  │     ├── [网络] Network::Dispatch (网络包收发)
  │     ├── [战役/LAN] Stream::ReadPacket (事件解包)
  │     └── [互联网] 每秒 UI 刷新 (ppv + g_UIPointerTable)
  │
  ├── UpdateSuperWeapons (0x53A6C0) ← 超级武器系统
  │     ├── NukeFlash 状态机 (Active/Fading)
  │     ├── PsyDom::Update (心灵支配)
  │     ├── UpdateChronosphereEffect (超时空传送)
  │     ├── SW 充能追踪 (charged → 从队列移除)
  │     ├── LightningStorm 系统:
  │     │     ├── 持续时间倒数
  │     │     ├── 随机雷击 (LightningStorm::Strike)
  │     │     ├── EVA 语音公告
  │     │     └── 延迟启动 (LightningStorm_Deferment)
  │     └── 离子炮追踪 (IonCannon 队列)
  │
  ├── TacticalMap::Redraw (0x4F4480)
  │     └─ 见 RenderProcess.md §6
  │
  ├── SyncDelay::Start / Process (0x55E160/55DEE0)
  │     └─ 网络同步: 等待所有玩家帧数据
  │
  ├── InputManager_ProcessEvents (0x4F4320)
  │     └─ 键盘/鼠标输入→游戏命令
  │
  ├── FlushPlanningQueue / ExecutePlanningQueue
  │     └─ 路径规划: 单位移动路径计算
  │
  ├── MarkAllFootOccupancies (0x4D2370)
  │     └─ 标记所有 FootClass 对象占据的 Cell
  │
  ├── MapClass::UnselectAll_ClearLimboLaunchers
  │     └─ 取消选中 + 清理悬空发射器
  │
  ├── BuildingLoadQueue::FindObject
  │     └─ 建筑加载队列处理
  │
  ├── MapClass::MarkForRedraw
  │     └─ 标记脏 Cell 需要重绘
  │
  ├── ProcessAutoSave (0x551A30)
  │     └─ 自动存档检测 + 写入
  │
  ├── DrawHUD (0x55F1E0)
  │     └─ 见 RenderProcess.md §7
  │
  ├── IPXManagerClass::ProcessQueue
  │     └─ IPX 网络队列处理
  │
  ├── ProcessNetworkEvents (0x647260)
  │     └─ 网络事件包解析 + 分发
  │
  ├── Scenario::Update (0x55AFB0) ← 游戏世界更新入口
  │     └─ 见 §2.2
  │
  ├── RequestMapSnapshot / SyncFrameCounter
  │     └─ 网络: 地图快照 + 帧计数器同步
  │
  ├── CheckNetworkSync (0x55F690)
  │     └─ 网络同步状态检测
  │
  ├── ScriptAction::GetWaypointCoords
  │     └─ 路径点坐标查询
  │
  ├── Mouse::Update / Mouse::IsButtonDown
  │     └─ 鼠标状态更新
  │
  ├── DisplayClass::SetCoordVisible
  │     └─ 设置当前可见坐标范围
  │
  ├── Timer::DisableHighPrecision
  │
  ├── Network::GetSendCount
  │     └─ 获取待发送包数量
  │
  ├── PointerExpired::Process
  │     └─ 清理过期指针 (防止悬空引用)
  │
  └── SaveScenarioClassGame_AdjustMPSaveFileName
        └─ 多人存档文件名生成
```

### 2.2 Scenario::Update (0x55AFB0) — 游戏世界核心更新

```
Scenario::Update (调用自 GameFrameLoop)
  │
  ├── TeamClass::Update (0x6E53A0) ← 小队 AI
  │     ├─ 遍历所有小队
  │     ├─ TriggerClass::RegisterEvent (触发事件注册)
  │     ├─ 按小队类型:
  │     │     ├─ 0=直接创建: BuildingClass::ExecuteTriggers→TeamClass::AddToBuildQueue
  │     │     ├─ 1=等待满: 仅 ExecuteTriggers
  │     │     └─ 2=触发器式: 直接在 BuildQueue
  │     └─ 处理完成: AnnounceExpiredPointer→GarbageCollect
  │
  ├── MapClass::MarkForRedraw
  │     └─ 每帧至少一次重绘标记
  │
  ├── CellSystem::UpdateVisibility (0x578100) ← 视野/迷雾
  │     ├─ Pass 1: 清除 visibility 标记 (bit 0x20)
  │     └─ Pass 2: 更新 AdjacentPassableMask, 标记视野变化 Cell
  │
  ├── MapClass::ProcessVisibilityFlags (0x4ACAC0)
  │     └─ 可见性标志处理 (Shroud/Fog reveal)
  │
  ├── NukeFlash::IsActive / ProcessEffect
  │     └─ 核弹闪光效果状态检测 + 渲染
  │
  ├── ChronoScreen::IsActive + UpdateChronosphereEffect
  │     └─ 超时空传送屏幕效果
  │
  ├── PsyDom::IsActive + PsyDom::Update
  │     └─ 心灵支配效果
  │
  ├── MapClass::UpdateLightingPostProcess (0x4AE4C0)
  │     └─ 光照后处理 (闪电/核弹/时空 光照)
  │
  ├── UpdateAudioTriggers (0x722C40)
  │     └─ 音频触发事件 (EVA 语音 + 环境音效)
  │
  ├── ProcessSpeechEvents (0x7221B0)
  │     └─ 语音事件处理队列
  │
  ├── DispatchBuildingAudioEvents (0x438BF0)
  │     └─ 建筑音效事件分发 (建设/损坏/出售)
  │
  ├── ScenarioClass::UpdateScriptActions (0x54E4D0)
  │     └─ 地图脚本 Action 链逐帧执行
  │
  ├── ScenarioClass::ProcessAmbientEffects (0x55BB40)
  │     └─ 环境效果: 天气/粒子/背景音
  │
  ├── ProcessHarvesterLogic (0x5FF390)
  │     └─ 矿车 AI: 采矿→返回→卸载 循环
  │
  ├── UpdateCameoProduction (0x550150)
  │     └─ 侧边栏图标生产进度更新
  │
  ├── UpdateSuperWeapons (0x53A6C0)
  │     └─ 见上方 (也在此处独立调用)
  │
  ├── UpdateDeferredLightSurfaces (0x554D50)
  │     └─ 延迟光照表面合成
  │
  ├── LocomotionClass::UpdateAll (0x4C54A0)
  │     └─ 所有移动对象位置更新 (物理移动)
  │
  ├── ProcessIonCannonEffect (0x53D310)
  │     └─ 离子炮特效处理
  │
  ├── AirstrikeClass::UpdateAll (0x420E90)
  │     └─ 所有空袭飞行路径更新
  │
  ├── CrateClass::Update (0x56BBE0)
  │     └─ 宝箱系统: 生成/拾取/效果触发
  │
  ├── MapClass::GetScrollMode (0x4AEB10)
  │     └─ 地图卷屏模式检测 (自动跟随/手动)
  │
  ├── Tactical::SetTacticalPosition (0x6D6070)
  │     └─ 战术地图视角位置设置
  │
  └── MapClass::ProcessFogTransition (0x4ACBC0)
        └─ 战争迷雾透明度渐变过渡
```

---

## 3. 子系统详解

### 3.1 对象更新体系 (ObjectClass 层次)

```
每帧每个活跃对象调用:
  ObjectClass → TechnoClass → FootClass → {Building, Infantry, Unit, Aircraft}

  更新顺序:
    ┌─ Timer 检查 (delay_timer > 0 → skip)
    ├─ Mission 状态机 (MissionClass::Mission_XXX)
    ├─ PowerDrain (vtable[13]=PowerDrainUpdate)
    ├─ Update (vtable[9]=Update)
    │     ├─ 建筑: 电力计算 / C4炸弹 / 雷达更新
    │     ├─ 步兵: 部署/匍匐/Idle动画
    │     ├─ 单位: 炮塔旋转 / 运动更新
    │     └─ 飞行器: 飞行路径 / 降落/起飞
    ├─ 6 个 VFX 子系统:
    │     ├── Smoke 烟雾 (损坏/着火)
    │     ├── Spark 火花 (受损)
    │     ├── Particle 粒子 (尾部轨迹等)
    │     ├── Laser 激光 (瞄准/射击)
    │     ├── Wave 冲击波 (爆炸/范围效果)
    │     └── Anim 动画覆盖 (Buff/Debuff)
    └─ Radio 无线电通信 (请求/响应)
```

### 3.2 Mission 状态机

```
MissionClass (抽象基类):
  vtable[0]: QueueMission(Mission, Target)     ← 排队任务
  vtable[1]: NextMission()                      ← 获取下一个
  vtable[2]: ForceMission(Mission)              ← 强制切换
  vtable[3]: Mission_Revert()                   ← 恢复上一个

每个具体类有 Mission Thunks (vtable 中的 6B ret 跳转):
  BuildingClass  thunks: [11]=Mission_Construction, [12]=Mission_Guard
  InfantryClass  thunks: 多处
  UnitClass      thunks: 多处
  AircraftClass  thunks: Mission_Move, Mission_Attack, Mission_Retreat
```

**Mission 类型** (按 YRpp):
| Mission | 说明 | 适用类 |
|---------|------|--------|
| `Mission_Move` | 移动到目标 | FootClass |
| `Mission_Attack` | 攻击目标 | TechnoClass |
| `Mission_Guard` | 原地警戒 | Building/Infantry |
| `Mission_Construction` | 建造中 | Building |
| `Mission_Selling` | 出售中 | Building |
| `Mission_Repair` | 维修中 | Building |
| `Mission_Harvest` | 采矿 | Unit(矿车) |
| `Mission_Unload` | 卸载乘客 | Unit(运输) |
| `Mission_Deploy` | 部署/展开 | Unit(MCV) |
| `Mission_Enter` | 进入建筑 | Infantry |
| `Mission_Capture` | 占领建筑 | Infantry(工程师) |
| `Mission_Hunt` | 自动搜索敌人 | TechnoClass |

### 3.3 HouseClass AI (房屋级 AI)

```
HouseClass::Update (每帧, 每个 House)
  │
  ├── 资金更新: 收入(矿车/油井)→支出(生产/维修)→余额
  │
  ├── 电力系统:
  │     ├─ Power_Drain (所有建筑电力消耗累计)
  │     ├─ Power_Output (发电厂输出累计)
  │     ├─ 低电力状态: 生产减速 / 防御失效
  │     └─ PowerBoost (额外电力)
  │
  ├── 生产系统:
  │     ├─ Factory::Update (工厂进度条推进)
  │     ├─ 建造队列: 建筑/单位/步兵/飞机
  │     ├─ 资金检查 + 建造条件检查
  │     └─ 生产完成: CreateUnit 管线
  │
  ├── 侦察 AI:
  │     ├─ 雷达/间谍卫星: 地图可见性
  │     └─ 侦察单位路径规划
  │
  ├── 攻击 AI:
  │     ├─ 威胁评估 (Evaluate_Object)
  │     ├─ TeamClass::Update 触发
  │     ├─ Attack_Target 选择
  │     └─ SuperWeapon 目标选择
  │
  ├── 防御 AI:
  │     ├─ 基地防守单位部署
  │     └─ 维修/出售 受损建筑
  │
  └── 外交状态更新:
        ├─ 同盟/敌对/中立 更新
        └─ 视野共享计算
```

### 3.4 TriggerClass (触发系统)

```
TriggerClass 系统:
  ├── 事件类型:
  │     ├─ 时间事件 (游戏时间达到)
  │     ├─ 对象事件 (单位进入/离开区域, 被摧毁)
  │     ├─ 建筑事件 (被占领/被摧毁/建造完成)
  │     ├─ 资金事件 (资金 > 或 < 阈值)
  │     └─ 特殊事件 (援军到达, 定时器)
  │
  ├── 动作类型:
  │     ├─ 创建小队 (CreateTeam)
  │     ├─ 援军 (Reinforcement: 在路径点生成单位)
  │     ├─ 显示文字 (TextTrigger)
  │     ├─ 播放声音 (PlaySoundEffect / EVA)
  │     ├─ 改变外交 (SetAlliance)
  │     ├─ 开始/停止计时器
  │     └─ 胜利/失败条件判定
  │
  └── 触发状态: Disabled → Enabled → Active → Fired
```

### 3.5 战斗系统

```
ReceiveDamage (ObjectClass 虚函数)
  │
  ├── 弹头 vs 护甲 对照 (WarheadType::Verses[ArmorType])
  │     ├─ Verses = 0% → 免疫
  │     └─ Verses = 100% → 全额伤害
  │
  ├── 距离衰减 (弹头 Spread/Range)
  │
  ├── 特殊效果:
  │     ├─ 瘫痪 (EMP) — C4 逻辑
  │     ├─ 心灵控制 (PsyDom) — 转换阵营
  │     ├─ 时空抹除 (Chrono) — 对象删除
  │     └─ 基因突变 — 单位→Brute
  │
  ├── 伤害应用:
  │     ├─ this->Health -= damage
  │     ├─ 检查: Health <= 0 → Destroyed()
  │     └─ 中途: 触发 OnDamaged 事件
  │
  └── 被摧毁:
        ├─ Explosion 播放
        ├─ Debris 生成
        ├─ 乘客弹出 (FootClass::Destroyed)
        └─ 废墟/弹坑 生成
```

### 3.6 生产系统

```
CreateUnit 管线 (TechnoClass::CreateUnit, 10-section 管线):
  │
  ├── [1] Factory 准备: 工厂状态检查 / 资金扣除
  │
  ├── [2] 类型创建: UnitTypeClass/InfantryTypeClass::CreateOneOf
  │     └─ new UnitClass/InfantryClass()
  │
  ├── [3] 出口位置计算: BuildingClass::GetExitCoords
  │     └─ 建筑周围可通行 Cell 查找
  │
  ├── [4] 位置跟踪: ConstructionPositionTracker (6步坐标跟踪)
  │
  ├── [5] 部署准备: 弹坑/烟雾/光照效果
  │
  ├── [6] 实体放置: ObjectClass::Put 到地图 Cell
  │
  ├── [7] 动画播放: ProductionCompletionCallback
  │     ├─ 工厂开门/闪光动画
  │     ├─ EVA 语音 ("Unit ready")
  │     └─ 建造进度条消失
  │
  ├── [8] 碰撞检测: 出口是否被阻塞
  │
  ├── [9] 最终创建: CreateUnitOnCompletion
  │     └─ 地基偏移修正 / SW 特效 / 单元激活
  │
  └── [10] 单位就绪: Ready 状态 → Mission_Guard/Move
```

---

## 4. MainGameFrame (0x48C8B0) — 游戏内 9 状态状态机

```
MainGameFrame (每帧调用, g_MainGameState 驱动)
  │
  ├── PreFrameSetup (0x683EB0)
  │     ├── 音频混音器初始化
  │     ├── 游戏计时器管理 (ScenarioClass+1556)
  │     ├── AsyncIO::Read(1) → 异步 I/O 读取
  │     ├── Tooltip::Enable(0) → 禁用提示
  │     ├── Mouse::ReleaseCapture + SetCursor(0)
  │     ├── MapClass::MarkForRedraw(2)
  │     └── TacticalMap::Redraw
  │
  ├── WWMouseClass 输入处理 (vtable[40])
  │
  └── switch(g_MainGameState):

  ▌ State 1 — 打开游戏 UI
      InGameUI::Open → 侧边栏/命令栏/雷达 全部显示

  ▌ State 2 — 投降检测 + 帧事件
      ├── g_MenuStateFlags ≠ 0: Network::AddFrameEvent (网络同步)
      └── 否则: ShowConfirmDialog("TXT_SURRENDER")
            └─ 确认 → EventClass::AddEvent(投降) → g_GameLoopActive = 0

  ▌ State 3 — 网络事件分发
      ShowGameDialog(0xB6) → {继续/投降/重启} 分支

  ▌ State 4 — 热键设置
      ShowHotkeyOptionsDialog (模板 0xA3)

  ▌ State 5 — 过渡 → State 1

  ▌ State 6 — 音频设置
      ShowAudioSettingsDialog (模板 0xD6/0xB8)

  ▌ State 7 — WOL 大厅
      ShowWOLLobbyDialog (模板 0xCF)

  ▌ State 8 — 外交界面
      ShowDiplomacyDialog (模板 0x73)

  ▌ State 9 — 任务简报
      ScenarioClass::ShowMissionBriefing

  └── 末尾:
        PostFrameCleanup (0x683FB0)
          ├── MouseClass::GetPosition
          ├── 恢复游戏计时器
          ├── Tooltip::Enable(原状态)
          └── EndBufferMixer + AsyncIO::Read(0)
```

---

## 5. 游戏结束 / 清理

### 5.1 正常退出 (投降 → 回主菜单)

```
玩家投降:
  MainGameFrame → State 2 → ShowConfirmDialog → YES
    → EventClass::AddEvent(HouseClass_Player+48, 8)  ← 投降事件
    → Network::AddFrameEvent → g_GameLoopActive = 0

游戏循环退出:
  while (!GameFrameLoop() && !GameFrameCheck())
    MainGameFrame();
  // GameFrameCheck 检测到 g_GameLoopActive=0 → break

MainGame 清理:
  ├── LoadingScreen::InitResources (显示加载画面)
  ├── WTFMode::Shutdown
  ├── "Game loop finished. Average FPS = %d" + DumpNetworkStats
  │
  ├── ScreenSaver::Process
  │
  └── 按 GameMode 清理:
        ├── Campaign: CleanupCampaignResources
        │     └─ Stream::WriteBlock(EventManager, close_event, 111)
        │     └─ 等待对端响应 (最多30帧)
        ├── Internet: Network::ShutdownInterface
        │     └─ IPX/Winsock 关闭
        └── ScenarioClass::SaveMultiplayerSettings
              └─ 写入 RA2MD.INI [MultiPlayer]

  回到 MenuSelect → State 18 (主菜单)
```

### 5.2 胜利/失败判定

```
TriggerClass 动作:
  ├── "Win" Action:
  │     → g_GameActive = 0 → 显示胜利屏幕
  │     → ScoreScreen::LoadScoreFont / LoadCountryFlags
  │     → 统计: 单位损失/建筑损失/杀敌数/资金
  │
  └── "Lose" Action:
        → g_GameActive = 0 → 显示失败屏幕
```

### 5.3 网络断开

```
Network::Dispatch → 检测断开:
  ├── ConnectionClass::IsConnected → false
  ├── 弹出 "Connection Lost" 对话框
  └── g_GameLoopActive = 0 → 退出游戏循环
```

---

## 6. 全局变量 (游戏逻辑)

### 6.1 超级武器

| 地址 | 变量 | 说明 |
|------|------|------|
| `0xA9FABC` | `NukeFlash_Status` | 0=无, 1=闪光中, 2=消退 |
| `0x827FCC` | `NukeFlash_Duration` | 闪光持续时间 |
| `0x827FC8` | `NukeFlash_StartTime` | 闪光开始帧 |
| `0xA9FAB4` | `LightningStorm_Active` | 闪电风暴激活 |
| `0xA9FAD0` | `LightningStorm_TimeToEnd` | 风暴结束标志 |
| `0xA9FAB8` | `LightningStorm_Deferment` | 风暴延迟倒计时 |
| `0xA9F9CC` | `LightningStorm_Coords` | 风暴目标坐标 |
| `0xA9FACC` | `LightningStorm_Owner` | 风暴所属 House |
| `0xA9FA1C` | SW charge queue | 充能中SW队列 |
| `0xA9FA28` | SW charge count | 充能队列数量 |
| `0xA9FA64` | Storm target queue | 闪电风暴目标队列 |
| `0xA9FA70` | Storm target count | 风暴目标数量 |
| `0xA9F9D4` | IonCannon queue | 离子炮队列 |
| `0xA9F9E0` | IonCannon count | 离子炮数量 |

### 6.2 网络/事件

| 地址 | 变量 | 说明 |
|------|------|------|
| `0xA8EA70` | `g_EventManager` | 事件管理器 |
| `0xA8D5F8` | `g_NetworkEventPending` | 网络事件标志位 |
| `0xB052D0` | `g_NetworkEventQueue` | 网络事件队列 |
| `0x887628` | `g_NetworkInterface` | 网络接口对象 |
| `0xA8DBA0` | `g_Network_IsHosting` | 是否为主机 |
| `0xA8DB9C` | `g_NetworkHostState` | 主机网络状态 |
| `0xB04880` | `g_MPDebugFlag` | 多人调试标志 |
| `0xA8B8B4` | `g_MPDebugFlag2` | 多人调试标志2 |
| `0xA8B568` | `g_MaxMaxAhead` | 最大预读帧 |
| `0xA802C8` | `Networking_LastEventIndex` | 最后事件索引 |
| `0xA802D0` | `Networking_NextPacketIndex` | 下一包索引 |
| `0xA802D4` | `g_NetworkPacketIndex` | 网络包数据 |
| `0xA8E284` | `Network_LastPacketTime` | 最后包时间 |

### 6.3 游戏状态

| 地址 | 变量 | 说明 |
|------|------|------|
| `0xA8B230` | `ScenarioClass_Instance` | 场景实例 |
| `0x8871E0` | `RulesClass_Instance` | 规则实例 |
| `0xA83D4C` | `HouseClass_Player` | 玩家所属 House |
| `0xA8DAB4` | `g_GameFlags_Campaign` | 战役标志 |
| `0xA8DAB8` | `GameFlags_Campaign` | 战役位标志 |
| `0xA8B570` | `g_GameSessionFlags` | 游戏会话标志 |
| `0xA8B24C` | `g_GameTypeFlags` | 游戏类型标志 |
| `0xAC10C8` | `g_MenuStateFlags` | 菜单状态标志 |
| `0x8B41F8` | `g_GameInitState` | 游戏初始化状态 |
| `0xA8ED6B` | `ArmageddonMode` | 末日模式 |
| `0xA8E960` | `g_IntroMovieObject` | 过场动画控制 |

---

## 7. 本次新命名 (游戏内逻辑)

### 函数 (25+)

| 地址 | 名称 | 说明 |
|------|------|------|
| `0x578100` | `CellSystem::UpdateVisibility` | 视野/迷雾更新 |
| `0x53A6C0` | `UpdateSuperWeapons` | 超级武器充能+效果 |
| `0x53A120` | `NukeFlash::ProcessEffect` | 核弹闪光处理 |
| `0x554D50` | `UpdateDeferredLightSurfaces` | 延迟光照合成 |
| `0x55BB40` | `ScenarioClass::ProcessAmbientEffects` | 环境效果 |
| `0x54E4D0` | `ScenarioClass::UpdateScriptActions` | 脚本动作执行 |
| `0x550150` | `UpdateCameoProduction` | 侧边栏图标进度 |
| `0x5FF390` | `ProcessHarvesterLogic` | 矿车AI逻辑 |
| `0x53D310` | `ProcessIonCannonEffect` | 离子炮效果 |
| `0x420E90` | `AirstrikeClass::UpdateAll` | 空袭更新 |
| `0x4C54A0` | `LocomotionClass::UpdateAll` | 移动更新 |
| `0x4AEB10` | `MapClass::GetScrollMode` | 卷屏模式 |
| `0x6D6070` | `Tactical::SetTacticalPosition` | 战术视角 |
| `0x722C40` | `UpdateAudioTriggers` | 音频触发 |
| `0x7221B0` | `ProcessSpeechEvents` | 语音事件 |
| `0x4AE4C0` | `MapClass::UpdateLightingPostProcess` | 光照后处理 |
| `0x4ACBC0` | `MapClass::ProcessFogTransition` | 迷雾渐变 |
| `0x646590` | `Math::QuaternionSlerp` | 四元数球面插值 |
