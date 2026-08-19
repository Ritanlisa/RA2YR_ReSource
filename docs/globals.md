# Global Variables & Named Functions Reference

## 1. Confirmed Global Variables (IDA 命名)

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
| `WindowName` | 0x849F48 | char[] | 窗口类名 "Yuri's Revenge" |
| `g_hWnd` | 0xB73550 | HWND | 主窗口句柄 |
| `g_hInstance` | 0xB732F0 | HINSTANCE | 实例句柄, WinMain设置 |
| `g_hIcon` | 0xB7354C | HICON | 图标句柄 (IDI #0x5D) |
| `g_hCursor` | 0xB73548 | HCURSOR | 光标句柄 (IDC #0x68) |
| `CmdLine_NoCD` | 0x89E410 | bool | -CD 命令行标志 (跳过CD检测) |

---

## 2. DDraw 全局变量

| 地址 | 名称 | 说明 |
|------|------|------|
| 0x8a0094 | `g_lpDirectDraw7` | IDirectDraw7 主对象 |
| 0x89F978 | `g_DDraw_Initialized` | DDraw 初始化完成 |
| 0xA8ED80 | `g_DDraw_Active` | DDraw 活动标志 |
| 0x8A0DEF | `g_DDraw_Force3D` | 强制 3D 表面 |
| 0x8205D4 | `g_DDraw_UseHWBlit` | 硬件 Blit 可用 |
| 0x887644 | `g_ZBufferDescriptor` | Z-Buffer 描述符 |
| 0x87E8A4 | `g_VisibleSurfaceDescriptor` | 可见表面描述符 |
| 0x8A0DD0-0x8A0DE4 | `g_BitShift_Red/Green/Blue+Mask` | 16bpp RGB565 位移 |

---

## 3. 关键 IDA 函数命名表 (~140函数)

| IDA 名称 | 地址 | 大小 | 说明 |
|----------|------|------|------|
| ObjectClass_GetCoords | 0x5F65A0 | 33B | vtable[18], 坐标复制 |
| BuildingClass_MissionDispatch | 0x5B35E0 | 101B | vtable[122], 部署分发 |
| ProductionCompletionCallback | 0x424CE0 | 543B | 音频/发射动画/EVA |
| CreateUnitOnCompletion | 0x424F00 | 583B | 地基/SW/单元创建 |
| ConstructionPositionTracker | 0x425670 | 1688B | 6步位置跟踪 |
| TechnoClass_Update | 0x6F3F40 | — | 父更新, 6 VFX子系统 |
| FootClass_MovementAI | 0x4DA530 | 2520B | 7段移动, 138 BBs |
| AudioController::Start | 0x750D40 | — | 音频控制 |
| Coord_To_Cell | 0x565730 | — | 坐标→格子 |
| Cell_GetGroundHeight | 0x578080 | — | 地面高度 |
| Random_Range | 0x65C7E0 | — | 随机数 |
| UnitClass_Create | 0x6B4A50 | — | 单元创建 |
| Cell_IsWalkable | 0x6B5F80 | — | 可通行检查 |
| Power_TimerProcess | 0x4A1D50 | — | 电力计时 |
| Power_FlagProcess | 0x4A1CA0 | — | 电力标志 |
| WinMain | 0x6BB9A0 | 10261B | 主入口: 413 BBS, 40+ COM类注册, CopyProtection, 窗口创建 |
| ParseCommandLine | 0x52F620 | 1531B | 命令行解析 (被 Ares/Phobos/Spawner hook) |
| InitGame | 0x52BA60 | 4333B | 游戏初始化 (146 BBs, Scenario/Rules/MIX/Palettes/CD/INI) |
| MenuSelect | 0x52D9A0 | 4536B | 菜单/场景选择 (222 BBs, 19-case switch, INTRO视频) |
| MainGame | 0x48CCC0 | 780B | 主游戏流程: Init→Menu→GameLoop→"Average FPS" |
| MainGameFrame | 0x48C8B0 | 978B | 每帧处理 (51 BBs, 9-case switch: 投降/回放/网络) |
| PlayIntroSequence | 0x52CB50 | 44B | 开场动画播放 (Spawner 跳过) |
| InitWindowCreation | 0x777C30 | ~500B | 窗口类注册+CreateWindowExA, 全屏/调试双模式 |
| WindowProc_Main | 0x7775C0 | 1213B | 主窗口过程, 81 BBs, WM_CREATE/DESTROY/PAINT |
| GameFrameLoop | 0x55D360 | 2940B | 游戏帧处理主循环 |
| GameFrameCheck | 0x55CFD0 | 906B | 游戏帧条件检查 |
| ScenarioClass::LoadMap | 0x686B20 | 4532B | 场景加载 (含 AssignHouses 调用点 0x68745E) |
| ScenarioClass::ReadMapINI | 0x689E90 | 3800B | 场景 INI 读取 (含 AssignHouses 调用点 0x68ACFF) |
| WinMainSetup | 0x6BE1C0 | 2697B | WinMain 前置设置 (配置加载/NO-CD) |
| GameLoopMessagePump | 0x53E770 | ~800B | 自定义PeekMessage/DispatchMessage, CritSec保护 |
| RegisterClassesCOM | 0x6BB390 | ~800B | COM class object 注册 (TypeLib/ProgID/InprocServer32) |
| CopyProtection::CheckLauncher | 0x49F5C0 | ~80B | 启动器Mutex检测 ("48BC11BD...") |
| CopyProtection::NotifyLauncher | 0x49F620 | ~250B | 启动器通知+等待响应, 自定义消息 0xBEEF |

---

## 4. IDA 命名摘要 (分类表)

### 生产管线 (8)

| 示例 | 用途 |
|------|------|
| `ProductionCompletionCallback`, `CreateUnitOnCompletion`, `ConstructionPositionTracker` | CreateUnit 回调链 |

### 坐标/格子 (10)

| 示例 | 用途 |
|------|------|
| `Coord_To_Cell`, `Cell_GetGroundHeight`, `Cell_IsWalkable`, `CellCoord_To_CellObj` | 位置计算 |

### BINK音频系统 (4)

| 示例 | 用途 |
|------|------|
| `AudioController::IsSoundEnabled`, `Audio::GetDirectSound`, `BinkMovie_Pause`, `BinkMovie_AdjustSurfaceFormat` | DirectSound→BINK音频桥接 |

### 音频 (5)

| 示例 | 用途 |
|------|------|
| `AudioController::Start`, `AudioController::StartAt`, `AudioController::Stop`, `AudioController::Init` | 工作音效 |

### 数学 (5)

| 示例 | 用途 |
|------|------|
| `Math_RoundToInt`, `Math_Sqrt`, `Math_SinCos`, `Math_CalcAngle` | 坐标计算 |

### 电力 (5)

| 示例 | 用途 |
|------|------|
| `Power_TimerProcess`, `Power_FlagProcess`, `BuildingClass_PowerDrainUpdate` | 电力系统 |

### 单元创建 (4)

| 示例 | 用途 |
|------|------|
| `CreateUnitAtCoords_Timed`, `CreateUnitAtCoords_Standard`, `UnitClass_Create` | 最终产出 |

### ObjectClass vtable (5)

| 示例 | 用途 |
|------|------|
| `ObjectClass_GetCoords`, `ObjectClass_HasC4`, `ObjectClass_SetPosition` | 基类方法 |

### BuildingClass vtable (8)

| 示例 | 用途 |
|------|------|
| `BuildingClass_MissionDispatch`, `BuildingClass_OnObjectExpired`, `BuildingClass_TogglePrimaryFactory` | 建筑虚函数 |

### Surface 类层次 (38)

| 示例 | 用途 |
|------|------|
| `DSurface_Blit`, `DSurface_Lock`, `DSurface_DrawLineZBuf`, `XSurface_WalkLine`, `BSurface_Lock` | DDraw表面绘制管线 |

### 入口点/窗口 (11)

| 示例 | 用途 |
|------|------|
| `WinMain`, `ParseCommandLine`, `InitGame`, `MenuSelect`, `MainGame`, `MainGameFrame`, `GameFrameLoop`, `GameFrameCheck`, `ScenarioClass::LoadMap`, `ScenarioClass::ReadMapINI`, `WinMainSetup` | 启动管线, 游戏流程 |

### 对话框/菜单 (12)

| 示例 | 用途 |
|------|------|
| `MainMenu::Screen`, `MainMenu::DlgProc`, `Dialog::Create`, `Dialog::Destroy`, `Dialog::Show`, `Dialog::SetParent`, `Dialog::BaseProc`, `Dialog::PumpMessages`, `Dialog::MessageLoop`, `CampaignScreen`, `MultiplayerScreen`, `OptionsScreenDialog` | UI 对话框系统 |

### 系统工具 (6)

| 示例 | 用途 |
|------|------|
| `Screen_Capture`, `Random_Init`, `Network_Init`, `Timer_GetTicks`, `ResourceFind`, `MessageIsDialog` | 截图/RNG/网络/定时器/资源 |

### 菜单系统 (6)

| 示例 | 用途 |
|------|------|
| `SkirmishSetupScreen`, `SkirmishSetupDlgProc`, `CreditsScreen`, `OptionsScreenSave`, `ScreensaverStart`, `Dialog::Init` | Skirmish+Credits+屏保+对话框 |

### DDraw 全局变量 (8)

| 示例 | 用途 |
|------|------|
| `g_lpDirectDraw7`, `g_DDraw_Initialized`, `g_ZBufferDescriptor`, `g_VisibleSurfaceDescriptor`, `g_BitShift_Red/Green/Blue+Mask` | DDraw 引擎状态 |

### BINK 渲染管线 (13)

| 示例 | 用途 |
|------|------|
| `BinkMovie_RenderLoop`, `BinkMovie_InitFromFile`, `BinkMovie_RenderSingleFrame`, `BinkMovie_BlitToTarget`, `BinkMovie_CheckKeyframeTransition`, `BinkMovie_Pause`, `BinkMovie_AdjustSurfaceFormat` | BINK视频解码→表面渲染→Blit |

### BINK 表面追踪 (3)

| 示例 | 用途 |
|------|------|
| `BinkMovie_CreateSurfaceTracker`, `BinkMovie_FreeSurfaceTracker`, `BinkMovie_ProcessKeyframe` | BSurface 关键帧过渡处理 |

### BINK音频系统 (2)

| 示例 | 用途 |
|------|------|
| `AudioController::IsSoundEnabled`, `Audio::GetDirectSound` | DirectSound→BINK SetSoundSystem 桥接 |

### 音频全局 (2)

| 示例 | 用途 |
|------|------|
| `g_Audio_Enabled`, `g_pDirectSound` | 音频启用标志 + DirectSound 对象指针 |

### Locomotor GUID 表 (8)

| 示例 | 用途 |
|------|------|
| `g_CLSID_WalkLocomotion`, `g_CLSID_DriveLocomotion`, `g_CLSID_FlyLocomotion`, `g_CLSID_HoverLocomotion`, `g_CLSID_TunnelLocomotion`, `g_CLSID_DriveLocomotion2`, `g_CLSID_JumpjetLocomotion`, `g_CLSID_ShipLocomotion` | COM 移动类型 CLSID 表 @0x7E9A60 |

### 音频子系统 (4)

| 示例 | 用途 |
|------|------|
| `Audio::ProcessMixerOutput`, `Audio::UpdatePlaybackPosition`, `Audio::GetChannelStatus`, `Audio::FlushChannel` | 混音器输出 + 播放位置 + 通道管理 |

### 音频混音器 (18)

| 示例 | 用途 |
|------|------|
| `g_MixerBuffer{1-8}`, `g_MixerChannel_{SFX/Theme/Voice/Score/Misc/Stream/Ambient}`, `g_MixFile_AUDIO`, `g_AudioFileData`, `g_AudioInitialized` | 8 混音缓冲 + 6 通道 + AUDIO MIX 文件 |

---

## 5. Locomotor GUID 表 (0x7E9A60)

8 个连续 CLSID，每个 16 字节 (128-bit GUID)：

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

### GUID 格式说明

- Windows GUID 是小端序: `{4A582746-9839-11d1-B709-00A024DDAFD1}` 在内存中存储为 `46 27 58 4A 39 98 D1 11 B7 09 00 A0 24 DD AF D1`
- 前 4 字节 (Data1) 小端，中间 2+2 字节 (Data2/Data3) 小端，最后 8 字节 (Data4) 大端

### 定位方法

1. INI 中看到 GUID 字符串如 `{4A582746-9839-11d1-B709-00A024DDAFD1}`
2. 在 IDA 中用 `find_bytes` 搜索 GUID 的 16 字节二进制格式（注意 Windows GUID 小端序）
3. GUID 表位于 `.rdata` 段 (0x7E9A60)
4. 用 `xrefs_to` 查每个 GUID 的引用 → 确认对应类名

---

## 6. GUID 解析链

```
INI: Locomotor={4A582746-...}
  → CLSIDFromString("{4A582746-...}", &pclsid)    ← INIClass::ReadGUID_Overwrite @ 0x527920
  → 存入 ObjectTypeClass +844 (16B)
  → CreateInstanceCOM(&pclsid, ...)                 ← 创建 COM 对象
  → COMObject::SwapReference → 替换目标的 ILocomotion 接口
```

### 详细流程

1. **INI 读取**: `INIClass::ReadGUID_Overwrite` (0x527920) 读取 `Locomotor=` 行
2. **字符串→GUID**: `CLSIDFromString()` 将 `"{4A582746-9839-11d1-B709-00A024DDAFD1}"` 转为 128-bit 二进制 GUID
3. **存储**: GUID 写入 `ObjectTypeClass` 偏移 +844 (16 字节)
4. **实例化**: `CreateInstanceCOM(&pclsid, ...)` 从注册的 COM 类工厂创建 ILocomotion 实例
5. **替换**: `COMObject::SwapReference` 将目标对象（FootClass 派生类）的 ILocomotion 接口指针替换为新实例

### IsLocomotor 弹头效果

- `WarheadTypeClass::IsLocomotor` 在 +0xD0, `Locomotor` 在 +0xD1
- 弹头命中时临时替换目标单位的 ILocomotion 接口为弹头指定的 GUID
- **仅 Jumpjet GUID (0x7E9AC0, `{92612C46-...}`)** 在核心移动/任务/AI 代码中有 10+ 处特判分支
- 其他 GUID 仅在 WinMain 注册和自身 ddtor 中出现，缺少"临时替换后恢复"的完整生命周期
