# gamemd.exe 完整执行流程

> 从 `WinMain` 入口到游戏主循环, 覆盖所有必经路径。函数名/变量名均为 IDA 确认的命名。

---

## 总览

```
WinMain
  ├─ 复制保护 + 命令行解析
  ├─ WinMainSetup (配置/COM/窗口/DDraw/音频)
  └─ MainGame ──────────────────────────────────────┐
       ├─ InitGame (一次性初始化)                      │
       └─ 主循环:                                     │
            while (MenuSelect())                      │
              ├─ 返回 0 → 退出进程                     │
              └─ 返回 1 → 进入游戏循环 ─────────────┐  │
                   while (!GameFrameLoop()           │  │
                     && !GameFrameCheck())           │  │
                     MainGameFrame()  ← 内层帧循环   │  │
                                                    │  │
                   退出: "Average FPS" + 清理         │  │
                   回到 MenuSelect                   │  │
```

---

## 1. WinMain (0x6BB9A0, 10261B, 413BBs)

### 1.1 复制保护

| 步骤 | 函数/操作 | 说明 |
|------|----------|------|
| 1 | `CopyProtection::CheckLauncher` (0x49F5C0) | 检测 Launcher mutex, 不存在则退出 |
| 2 | `CreateMutexA("29e3bb2a-...")` | AppMutex — 防止多开 |
| 3 | `CreateMutexA("01AF9993-...")` | AutoPlayMutex — 等待光盘自动播放 |
| 4 | 若已运行: `FindWindowA`→`SetForegroundWindow`→`WaitForSingleObject` | 切换到已有实例, 等待 3 秒 |

### 1.2 命令行解析 — `ParseCommandLine` (0x52F620, 1531B)

支持参数及其全局变量:

| 参数 | 全局变量 | 效果 |
|------|---------|------|
| `-JABBER` | → `RestartNetworkSession(1)` | 重新初始化网络 |
| `-STR` / `-NOSTR` | → `ToggleNetworkSession(0/1)` | 开关网络 |
| `-NOAUDIO` | `g_Audio_MixerEnabled` = 0 | 禁用音频 |
| `-NOINTRO` (hash检测) | `g_IntroMovieObject` \|= 4 | 跳过开场动画 |
| `-CD.` | `byte_89E3A0`=1; `Game::FindGameDirectoryCD` | 指定游戏目录 |
| `-DESTNET=x.x.x.x` | `dword_A8D600/4/8` | 指定目标IP |
| `-SOCKET` | `Network::GetField` | 网络端口 |
| `-SPEEDCONTROL` | `byte_A8EDDC` = 1 | 速度控制 |
| `-WIN` | `g_DDraw_Initialized` = 1 | 窗口模式 |
| `-480` / `-16` | `g_CommandLineParam` | 分辨率模式 |
| `-%dX%d` | `g_CommandLineFlags/Param` | 自定义分辨率 |

> **注意**: 原版 `gamemd.exe` 的 `ParseCommandLine` **不处理 `-SPAWN`** (由注入的 spawner.dll 通过 hook 0x52F639 处理)。

### 1.3 WinMainSetup — 配置/初始化管线

```
WinMain (+1163~+9921)
  ├── CopyProtection
  ├── ParseCommandLine
  ├── COM 注册: RegisterClassesCOM (0x6BB390) + ~80 个 COM 类工厂
  ├── 配置: RA2MD.INI (Video/Screen/Network)
  ├── 加密密钥: Init_Keys (PublicKey "AihRvNoIbTn85...")
  ├── 语言: LANGMD.MIX→LANGUAGE.MIX→CSF
  ├── InitWindowCreation (0x777C30) → 窗口类 + CreateWindowExA
  ├── InitializeAudioStreaming (0x53DE00)
  ├── InitializeDDraw (0x4A42F0) ×3 → DirectDraw7 全屏
  ├── DSurface::CreatePrimary (0x4BA770)
  ├── MouseClass::Construct (0x7B8730)
  ├── Performance::Profile (0x5355D0)
  ├── ReadRegistryOptionsWOL (0x5175F0)
  └── MainGame (0x48CCC0)  ← 进入主循环
```

---

## 2. InitGame (0x52BA60, 4333B, 146BBs)

完整的一次性初始化管线:

```
InitGame
  │
  ├── ScenarioClass 构造 (0x3740 B)
  ├── RulesClass 构造 (0x18C0 B)
  │
  ├── MixFileClass::Bootstrap (0x5301A0)
  │     ├── 加载 16 个顶层 *.mix (按 FindFirstFile)
  │     ├── 递归提取 17 个子 MIX (expandmd01 等)
  │     └── 验证: Blowfish 解密 / 无加密扩展 / TD 传统
  │
  ├── BitTextClass::LoadFont (0x434AD0) — GAME.FNT
  ├── LoadMouseClassResources (0x72AA40)
  ├── InitializeAudioSubsystem (0x406B10)
  │
  ├── 调色板加载 (9个):
  │     ├── UNITSNO.PAL → byte_886380
  │     ├── TEMPERAT.PAL → FileSystem_TEMPERAT_PAL (0x885780)
  │     ├── WAYPOINT.PAL → byte_885180
  │     ├── voxels.vpl → VoxelPaletteClass::LoadFromFile (0x753B70)
  │     ├── ANIM.PAL → FileSystem_ANIM_PAL
  │     ├── PALETTE.PAL → FileSystem_THEATER_PAL
  │     ├── CAMEO.PAL → FileSystem_CAMEO_PAL
  │     ├── MOUSEPAL.PAL → FileSystem_MOUSE_PAL
  │     └── GRFXTXT.PAL → FileSystem_GRFXTXT_Convert
  │     每个: 6Bit→16Bit 转换 + ConvertClass::Construct
  │
  ├── Mouse SHP: MOUSE.SHA → dword_B0BCF0
  │
  ├── CD 检测 (或 `-CD` 跳过):
  │     ├── CD::Force_CD_Available
  │     ├── Game::FindGameDirectoryCD → 扫描盘符
  │     └── 失败: Dialog::ShowMessageBox ("TXT_CD_DIALOG_1")
  │
  ├── MixFile::LoadAll (0x530460) — 二级 MIX 递归
  │     └── LoadExpansionMixFiles (0x530000) — ECACHE*.MIX + ELOCAL*.MIX
  │
  ├── Movie::Play (0x5BED40) — 过场动画
  ├── ShowLoadingScreen (0x5312A0)
  ├── Credits::Screen (0x52CB90)
  │
  ├── GameSettings::Read (0x5FA620) → g_GameModeOptions
  ├── AnimSystem::Init (0x75A790) + ResetAnimSystem
  │
  ├── TacticalMapClass::Construct (0x6D1C20) — 0xE18 B
  │
  ├── INI 加载:
  │     ├── SOUNDMD.INI → Audio::LoadSoundINI (0x7513F0)
  │     ├── EVAMD.INI → LoadINIEVA (0x7531A0) + InitFromINIEVA
  │     └── THEMEMD.INI → ThemeClass::InitializeThemes (0x720590)
  │
  ├── BulkData::Initialize (0x531680)
  ├── Rules::Initialize (0x52CD70)
  │     ├── RulesClass::LoadBuildingTypes (0x672660) — [BuildingTypes]→FindOrCreate
  │     └── RulesClass::LoadAnimTypes (0x6728B0) — [Animations]→FindOrCreate
  │
  ├── SuperWeapon READ_INI → g_SuperWeaponTypeCount
  ├── Anim READ_INI → g_AnimTypeCount
  ├── Building READ_INI → g_BuildingTypeCount2
  ├── Trigger READ_INI → g_TriggerClassCount
  │
  ├── Audio::Callback 同步等待 (0x4093B0)
  ├── PlayIntroSequence (0x52CB50) — 开场 logo (Spawner hook 跳过)
  │
  ├── InitRandomSeed (0x52FC20)
  ├── InitCommands (0x532150) — 7KB, 大量初始化
  └── CompleteGameInit (0x5D7CE0)
```

### InitGame 关键全局变量

| 地址 | 变量 | 类型 |
|------|------|------|
| `0xA8B230` | `ScenarioClass_Instance` | ScenarioClass* |
| `0x8871E0` | `RulesClass_Instance` | RulesClass* |
| `0x885780` | `FileSystem_TEMPERAT_PAL` | byte[768] |
| `0x8876B8` | `FileSystem_x_PAL` | ConvertClass* |
| `0x8876C0` | `FileSystem_ANIM_PAL` | ConvertClass* |
| `0x8876C4` | `FileSystem_THEATER_PAL` | ConvertClass* |
| `0x8876B4` | `FileSystem_UNITx_PAL` | ConvertClass* |
| `0x8876B0` | `FileSystem_CAMEO_PAL` | ConvertClass* |
| `0x8876C8` | `FileSystem_MOUSE_PAL` | ConvertClass* |
| `0xA8F790` | `FileSystem_GRFXTXT_PAL` | byte[768] |
| `0xA8F798` | `FileSystem_GRFXTXT_Convert` | ConvertClass* |
| `0x8870C0` | `CCINIClass_INI_RA2MD` | CCINIClass (RA2MD.INI) |
| `0x887048` | `CCINIClass_INI_Rules` | CCINIClass (RULES.INI) |
| `0x887180` | `CCINIClass_INI_Art` | CCINIClass (ART.INI) |
| `0xA83C9C` | `g_SuperWeaponTypeCount` | int[] |
| `0x8B4154` | `g_AnimTypeCount` | int[] |
| `0xA83D10` | `g_BuildingTypeClass_Count` | int |
| `0xA83C78` | `g_TriggerClassCount` | int |
| `0x89C4B8` | `g_GameFontObject` | BitTextClass* |
| `0xB0BCF0` | `g_MouseSHP` | void* (MOUSE.SHA) |

---

## 3. MainGame (0x48CCC0, 780B, 51BBs)

```
MainGame
  ├── InitGame() → 失败: MessageBox "TXT_INITGAME_FAILED"
  │
  ├── 设置异常处理 (g_ExceptionReturnStack/Addr/Frame)
  │
  └── for (state = MenuSelect(g_MenuReturnState); state; state = MenuSelect(g_MenuReturnState))
        │
        ├── IKnowWhatImDoing = 0
        ├── FadePalette(0)
        ├── Timer::PumpMessages(g_BinkMoviePlayer)
        │
        ├── [Network] 检测 g_NetworkEventPending & 2 → 重置鼠标
        │
        ├── [Skirmish] GameMode_Current == 4:
        │     └── InitSkirmishSettings → g_SkirmishSettings = timeGetTime
        │
        ├── Tooltip::Enable (g_TacticalRender 存在时)
        │
        ├── g_MainGameState = 0; g_GameActive = ScenarioClass[13730]
        │
        ├── WTFMode::Init(&GameMode_Current)
        │
        ├── ╔══ 游戏内层循环 ══════════════════════════════╗
        │   ║ do {                                         ║
        │   ║   if (GameFrameLoop() && GameFrameCheck())    ║
        │   ║     break;                                    ║
        │   ║   MainGameFrame();                            ║
        │   ║ } while (!GameFrameCheck());                  ║
        │   ╚══════════════════════════════════════════════╝
        │
        ├── LoadingScreen::InitResources
        ├── WTFMode::Shutdown
        ├── "Game loop finished. Average FPS = %d" + DumpNetworkStats
        │
        ├── ScreenSaver::Process
        │
        └── 按 GameMode 清理:
              ├── Campaign (1/2): CleanupCampaignResources
              ├── Internet (3): Network::ShutdownInterface
              └── 清理后: CleanupGameSession
```

---

## 4. MenuSelect (0x52D9A0, 4536B, 222BBs) — 19 状态状态机

```
MenuSelect 入口:
  ├── ThemeClass::Play("INTRO")
  ├── 重置全局: HouseClass_Player=0, CurrentFrame=0, 网络索引=0 等
  └── while(true):
        ├── 网络关闭: if(g_NetworkInterface) → Release + Network::Init
        │
        └── switch(state):

  ▌ State 18 — 主菜单
  │   MainMenu::Screen(3600) ← 60秒超时
  │   ├── BINK: ra2ts_l.bik / ra2ts_s.bik (DlgItem 1818)
  │   └── 6按钮 → WM_COMMAND → g_MenuReturnState
  │       Campaign(1667)→1, Skirmish(1668)→2, Network(1400)→3,
  │       Credits(1670)→4, Options(1372)→5, Exit(1006)→退出
  │
  ▌ State 1 — 战役菜单
  │   Campaign::Screen(1) → 通用对话框包装器
  │   ├── NewGame/LoadGame/Scenario/Skirmish/Back 按钮
  │   ├── BINK 背景
  │   └── 返回下一状态 (8=NGC, 9=Load, 10=Scenario, 11=Skirmish, 18=Back)
  │
  ▌ State 2 — 遭遇战设置
  │   GameMode_Current = 4
  │   Multiplayer::Screen(2)
  │   → State 16 (游戏启动)
  │
  ▌ State 3 — 互联网对战
  │   GameMode_Current = 3
  │   Multiplayer::Screen(1)
  │   → State 16
  │
  ▌ State 4 — 战役第二路径 (+ CD 检测)
  │   Campaign::Screen(1) → CD检查 → 可选播放影片
  │
  ▌ State 5 — 游戏选项
  │   Options::Screen_Dialog
  │   ├── 速度/音量/卷屏/MCV部署/其他
  │   └── 保存到 RA2MD.INI [Options]
  │
  ▌ State 6 — 确认退出
  │   Dialog::ShowMessageBox("GUI:ExitAreYouSure")
  │   ├── YES → ScenarioClass::SaveGameOptions → State 7 (退出)
  │   └── NO  → 回 State 18
  │
  ▌ State 7 — 退出进程
  │   Theme::Stop(1) → 等待 ~3s → FadePalette(0) → return 0
  │
  ▌ State 8 — 新游戏
  │   Credits::Screen → 加载对话框 → 场景选择:
  │     ├── ScenarioClass::LoadNetworkConfig (联网参数)
  │     ├── LoadScenarioAndStart
  │     └── 连接建立 → 游戏开始 (return 1)
  │
  ▌ State 9 — 读存档
  │   Credits::Screen → LoadOptions → 直接进入游戏
  │
  ▌ State 10 — 回到 State 1
  │   v8 = 1
  │
  ▌ State 11 — Skirmish Mode 5
  │   GameMode_Current = 5 → State 16
  │
  ▌ State 13 — 播放影片
  │   Movie::Play → Screen::Capture → State 4
  │
  ▌ State 14 — 战役+CD检测
  │   Campaign::Screen → CD::Available → Movie::Play
  │
  ▌ State 15 — 制作人名单
  │   CreditsPower::Display → Theme::QueueSong → State 4
  │
  ▌ State 16/17 — 游戏启动 (加载场景+进入游戏循环)
  │   ├── ScenarioClass::LoadNetworkConfig (&GameMode_Current)
  │   ├── SuperWeaponType READ_INI
  │   │
  │   ├── 按 GameMode 路由:
  │   │   ├─ 0: 回 State 18
  │   │   ├─ 1/2 (战役): NullModemClass→Modem(Host/Guest)::Dialog
  │   │   ├─ 3 (互联网): IPXInterface→WinsockInterface→WOL大厅
  │   │   ├─ 4 (遭遇战): Network::Init→RunWOLMainLoop
  │   │   └─ 5 (Skirmish): ShowSkirmishSetupScreen
  │   │
  │   ├── SessionClass::CreateConnections
  │   ├── Network::SetConnectionParams / TacticalClass::SetCameraPosition
  │   ├── Mouse::SetCursor(19) + TacticalClass::BuildCommandBar(1)
  │   ├── MapClass::MarkForRedraw(0)
  │   └── return 1  ← 进入 MainGameFrame!
```

---

## 5. GameFrameLoop (0x55D360, 2940B) — 每帧主循环

```
GameFrameLoop (每帧调用一次)
  │
  ├── Dialog::MessageLoop
  │     └── 自定义 PeekMessage→Translate→DispatchMessage
  │
  ├── 帧计时: timeGetTime / Timer::GetTicks
  ├── Timer::EnableHighPrecision (开始高精度计时)
  │
  ├──[16位模式] ScenarioClass::ProcessIntroTimer
  │
  ├── Event::Dispatch (事件分发)
  │
  ├── UpdateChronosphereEffect (0x53B560) — 超时空特效
  ├── TacticalMap::Redraw (0x4F4480) — 战术地图绘制
  │
  ├── SyncDelay::Start (0x55E160) — 网络同步开始
  ├── InputManager_ProcessEvents (0x4F4320) — 输入处理
  │
  ├── FlushPlanningQueue (0x637550) — 路径规划队列
  ├── ExecutePlanningQueue (0x637270) — 执行路径规划
  ├── MarkAllFootOccupancies (0x4D2370) — 标记单位占据格子
  │
  ├── MapClass::UnselectAll_ClearLimboLaunchers (0x48DC90)
  ├── BuildingLoadQueue::FindObject (0x6E6FF0)
  ├── MapClass::MarkForRedraw (0x4F42F0)
  ├── ProcessAutoSave (0x551A30) — 自动存档
  │
  ├── DrawHUD (0x55F1E0) — HUD 界面绘制
  │
  ├── SyncDelay::Process (0x55DEE0) — 网络同步处理
  │
  ├── IPXManagerClass::ProcessQueue (0x542520) — IPX 队列
  ├── ProcessNetworkEvents (0x647260) — 网络事件
  │
  ├── Scenario::Update (0x55AFB0) — 场景更新
  │     ├── 所有 ObjectClass 逐帧 Update
  │     ├── HouseClass AI 处理
  │     └── Trigger 事件检测
  │
  ├── RequestMapSnapshot (0x6D6170) — 地图快照 (网络)
  ├── SyncFrameCounter (0x5D4430) — 帧计数器同步
  │
  ├── CheckNetworkSync (0x55F690) — 网络同步检查
  ├── ScriptAction::GetWaypointCoords (0x6E6AB0) — 路径点坐标
  │
  ├── Mouse::Update (0x684290) — 鼠标状态更新
  ├── Mouse::IsButtonDown (0x54F5C0) — 按钮状态
  │
  ├── DisplayClass::SetCoordVisible (0x4A9840) — 可见坐标
  │
  ├── Timer::DisableHighPrecision (结束高精度计时)
  ├── Network::GetSendCount (0x540F90) — 发送计数
  │
  ├── PointerExpired::Process (0x725C70) — 过期指针清理
  │
  ├── SaveScenarioClassGame_AdjustMPSaveFileName — 多人存档文件名
  └── Random::Range (0x65C7E0) — 随机数
```

---

## 6. MainGameFrame (0x48C8B0, 978B, 51BBs) — 游戏内 9 状态状态机

```
MainGameFrame (每帧调用, 内嵌在 MainGame 的 do-while 中)
  │
  ├── if (!g_MainGameState) return
  │
  ├── if (GameMode_Current && !g_GameLoopActive)
  │     └── 检查玩家状态 (HouseClass_Player + 501~504):
  │          全部假 → g_MainGameState = 0 (退出游戏)
  │          +501 真 → g_GameLoopActive = 1 (开始游戏)
  │
  ├── PreFrameSetup (0x683EB0)
  │     ├── 音频混音器初始化
  │     ├── 游戏计时器 (ScenarioClass +1556) — 暂停/恢复
  │     ├── AsyncIO::Read(1)
  │     ├── Tooltip::Enable(0) — 禁用提示
  │     ├── Mouse::ReleaseCapture + Mouse::SetCursor(0)
  │     ├── MapClass::MarkForRedraw(2)
  │     └── TacticalMap::Redraw
  │
  ├── WWMouseClass 输入处理 (vtable[40]) — 处理鼠标事件队列
  │
  └── switch(g_MainGameState):

  ▌ State 1 — 打开游戏 UI
  │   InGameUI::Open (0x4F10E0)
  │
  ▌ State 2 — 投降检测
  │   g_MenuStateFlags 非零:
  │     → Network::AddFrameEvent (0x6471A0)
  │   否则:
  │     → ShowConfirmDialog("TXT_SURRENDER") → 用户确认
  │     → EventClass::AddEvent(PlayerHouse+48, 8) — 投降事件
  │     → 存入网络包队列 (g_NetworkPacketIndex)
  │     → g_GameLoopActive = 0
  │
  ▌ State 3 — 网络事件分发
  │   switch(ShowGameDialog(0xB6)):
  │     ├─ 2: Network::AddFrameEvent (继续)
  │     ├─ 3: 投降事件 → g_GameLoopActive=0
  │     ├─ 4: 投降事件 (不停止循环)
  │     └─ 5: byte_8B41C0 = 1 (重启标志)
  │
  ▌ State 4 — 热键选项
  │   ShowHotkeyOptionsDialog (模板 0xA3)
  │   → g_MainGameState = 5
  │
  ▌ State 5 — 过渡状态
  │   → g_MainGameState = 1
  │
  ▌ State 6 — 音频设置
  │   ShowAudioSettingsDialog (模板 0xD6/0xB8)
  │   → g_MainGameState = 5
  │
  ▌ State 7 — WOL 大厅
  │   ShowWOLLobbyDialog (模板 0xCF)
  │
  ▌ State 8 — 外交界面
  │   ShowDiplomacyDialog (模板 0x73)
  │
  ▌ State 9 — 任务简报
  │   ScenarioClass::ShowMissionBriefing (0x65F520)
  │
  └── 全部: g_MainGameState = 0 (重置)
      UpdateWindow(g_hWnd)
      PostFrameCleanup (0x683FB0)
        ├── MouseClass::GetPosition
        ├── 恢复游戏计时器
        ├── Tooltip::Enable (恢复原状态)
        ├── EndBufferMixer + AsyncIO::Read(0)
        └── WTFMode::Init
```

---

## 7. 关键函数命名索引

### 入口/初始化

| 地址 | 名称 | 大小 | 说明 |
|------|------|------|------|
| `0x6BB9A0` | `WinMain` | 10261B | 程序入口 |
| `0x52F620` | `ParseCommandLine` | 1531B | 命令行解析 (无 -SPAWN) |
| `0x6BB390` | `RegisterClassesCOM` | ~800B | COM 类注册 |
| `0x777C30` | `InitWindowCreation` | ~500B | 窗口类+CreateWindowExA |
| `0x4A42F0` | `InitializeDDraw` | — | DirectDraw7 初始化 |
| `0x5301A0` | `MixFileClass::Bootstrap` | — | MIX 启动加载 |
| `0x530000` | `LoadExpansionMixFiles` | 406B | ECACHE/ELOCAL MIX |
| `0x52BA60` | `InitGame` | 4333B | 一次性初始化 |

### 主菜单/状态机

| 地址 | 名称 | 大小 | 说明 |
|------|------|------|------|
| `0x48CCC0` | `MainGame` | 780B | 主游戏循环 |
| `0x52D9A0` | `MenuSelect` | 4536B | 19 状态菜单状态机 |
| `0x531CC0` | `MainMenu::Screen` | — | 主菜单屏幕 |
| `0x60D380` | `Campaign::Screen` | — | 战役菜单 (通用包装器) |
| `0x53F1F0` | `Multiplayer::Screen` | — | 多人菜单 |
| `0x55FC80` | `Options::Screen_Dialog` | — | 选项对话框 |
| `0x683AB0` | `ScenarioClass::LoadScenarioAndStart` | 1011B | 加载场景启动 |

### 游戏帧处理

| 地址 | 名称 | 大小 | 说明 |
|------|------|------|------|
| `0x55D360` | `GameFrameLoop` | 2940B | 每帧主循环 |
| `0x55CFD0` | `GameFrameCheck` | 906B | 帧退出条件 |
| `0x48C8B0` | `MainGameFrame` | 978B | 游戏内 9 状态机 |
| `0x683EB0` | `PreFrameSetup` | 250B | 帧前: 音频/计时器/鼠标 |
| `0x683FB0` | `PostFrameCleanup` | 162B | 帧后: 恢复提示/混音器 |
| `0x4F4480` | `TacticalMap::Redraw` | — | 战术地图重绘 |
| `0x55AFB0` | `Scenario::Update` | — | 场景更新 |
| `0x48D080` | `Event::Dispatch` | — | 事件分发 |
| `0x647260` | `ProcessNetworkEvents` | — | 网络事件处理 |

### 对话框

| 地址 | 名称 | 模板 | 说明 |
|------|------|------|------|
| `0x6B6230` | `ShowAudioSettingsDialog` | 0xD6/0xB8 | 音频设置 |
| `0x6586D0` | `ShowDiplomacyDialog` | 0x73 | 外交界面 |
| `0x77D840` | `ShowWOLLobbyDialog` | 0xCF | WOL 大厅 |
| `0x5FBEF0` | `ShowHotkeyOptionsDialog` | 0xA3 | 热键设置 |
| `0x5C60D0` | `ShowConfirmDialog` | — | 确认对话框 (投降等) |
| `0x65F520` | `ScenarioClass::ShowMissionBriefing` | 0x10C | 任务简报 |
| `0x4F1840` | `ShowGameDialog` | 0xB6 | 游戏内菜单 |

### 辅助

| 地址 | 名称 | 大小 | 说明 |
|------|------|------|------|
| `0x434AD0` | `BitTextClass::LoadFont` | 58B | GAME.FNT |
| `0x753B70` | `VoxelPaletteClass::LoadFromFile` | 91B | voxels.vpl |
| `0x4D2370` | `MarkAllFootOccupancies` | 294B | 标记单位占据 |
| `0x48E0B0` | `DumpNetworkStats` | 447B | 多人统计 mpstats.txt |
| `0x72DFB0` | `InitLoadingScreenResources` | 497B | 加载屏幕资源 |
| `0x52CB50` | `PlayIntroSequence` | 44B | 开场序列 |
| `0x52FC20` | `InitRandomSeed` | — | 随机数种子 |

---

## 8. 命名统计 (本次会话总结)

| 指标 | 数值 |
|------|------|
| 本次新命名函数 (一/二级流程) | **~30** |
| 本次新命名全局变量 | **~25** |
| 累积手工反编译命名 | **~345** (329 + 本次) |
| 消除 `sub_*` / `callsYRpp_*` | 15 (主流程中的) |
| 修正伪命名空间 (`Init::/Main::/Game::`) | 8 |
| `_` 下划线清理 | 8 |
| IDA 已保存 | ✅ |
