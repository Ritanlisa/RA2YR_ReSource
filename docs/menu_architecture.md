# Menu / Dialog / BINK Architecture Reference

从 AGENTS.md 提取的完整菜单/对话框/BINK 渲染架构文档。

---

## 1. 菜单状态机架构 (IDA 逆向 — 完整 19-case switch)

```
MainGame → MenuSelect (0x52D9A0, 4536B, 222 BBs)
  │
  ├─ case 18: MainMenu::Screen(3600 timeout) → 等待用户交互
  │   └─ MainMenu::DlgProc(0x531F60) → 设置 *WindowLongA[8] = state
  │
  ├─ case 5: OptionsScreenDialog → OptionsScreenSave → 回到 18
  ├─ case 1: CampaignScreen(1) → 回到主循环
  ├─ case 4: CampaignScreen(1) [第二路径] → 回到主循环
  ├─ case 2: Skirmish [GameMode=4] → case 16
  ├─ case 3: Internet [GameMode=3] → case 16
  ├─ case 11: GameMode=5 (Skirmish) → case 16
  │
  ├─ case 6: 确认退出对话框 ("GUI:ExitAreYouSure") → 7(退出) / 18(取消)
  ├─ case 7: Exit — 清理→等待3秒→退出进程
  │
  ├─ case 8: 单人游戏开始 — Credits→场景选择→加载游戏 → case 16/17
  ├─ case 9: 过场动画/BINK播放 → CreditsScreen→Movie::Play → case 1
  ├─ case 13: Movie::Play(1,1,1,0) → Screen_Capture → case 4
  ├─ case 14: CampaignScreen check + CD检测→可能播电影 → case 4
  ├─ case 15: CreditsPower_Display → case 4
  │
  ├─ case 16/17: 游戏已开始 (Scenario已加载) → 分发到游戏循环
  │   ├─ GameMode 0: 回到 18 (主菜单)
  │   ├─ GameMode 1/2: Campaign → 加载场景+触发
  │   ├─ GameMode 3: Internet → 网络设置+触发
  │   ├─ GameMode 4: Skirmish/LAN → 网络大厅/对战
  │   └─ GameMode 5: 遭遇战 → SkirmishSetupScreen(0x6AE2C0)
  │
  └─ case 10: 回到 case 1
```

---

## 2. MainMenu::DlgProc 控件ID对照表

| DlgItem ID | 功能 | 状态设置 |
|------------|------|----------|
| 1667 (0x683) | Campaign 按钮 | state=1 |
| 1668 | Skirmish 按钮 | state=2 |
| 1400 (0x578) | Multiplayer/Internet 按钮 | state=3 |
| 1670 | 按钮4 (可能是Credits/Intro) | state=4 |
| 1372 (0x55C) | Options 按钮 | 直接调用 OptionsScreenDialog |
| 1006 (0x3EE) | Exit 按钮 | PostQuitMessage |
| 1818 (0x71A) | BINK 背景播放器控件 | SendMessage 0x4E3→init, 0x4E4→set bg, 0x4F0→cleanup |
| 1821 (0x71D) | 版本信息文字标签 | 显示 "GUI:Version" |
| 1175 (0x497) | 版本查询事件 | swprintf→SendMessage 1821 |

---

## 3. Options_Screen 控件ID对照表 (OptionsScreenSave @ 0x55FAA0)

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

---

## 4. BINK 渲染链 — 完整 IDA 逆向 (函数调用图)

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

---

## 5. BINK 自定义消息表 (发送到 DlgItem 1818)

| 消息 | wParam | lParam | 处理函数 | 功能 |
|------|--------|--------|----------|------|
| 0x4E3 (BINKM_INIT) | 1 | 0 | — | 创建 BinkMovieHandle + DDraw surface |
| 0x4E4 (BINKM_OPEN) | 0 | "Ra2ts_l" | BinkMovie_InitFromFile | 打开 BINK 文件, 设置表面格式 |
| 0x4F0 (BINKM_CLOSE) | 0 | 0 | BinkMovie_Close | 释放所有资源 |

---

## 6. DIALOGEX 模板 0xE2 — 完整控件布局

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

---

## 7. Dialog 系统架构 (Win32 CreateDialogIndirectParamA 封装)

```
Dialog::Create(template_id, dlg_proc, lParam)
  ├── ResourceFind(template_id, type=5) → DLGTEMPLATE*
  ├── CreateDialogIndirectParamA(g_hInstance, template, g_hWnd, dlg_proc, lParam)
  │     启动模态对话框 (非真正模态—消息循环由调用方手动运行)
  └── 注册到内部跟踪数组 (dword_B72F50)

Dialog::BaseProc(hWnd, msg, wParam, lParam)
  ├── 默认对话框过程 — 56 基本块
  ├── 处理 WM_INITDIALOG / WM_COMMAND / WM_PAINT / WM_CTLCOLOR*
  └── 由各子对话框过程调用 (59 个调用方)

Dialog::Show(hWnd)    → ShowWindow(SW_SHOW) + SetWindowPos
Dialog::Destroy(hWnd) → DestroyWindow + 跟踪数组清理

Dialog::MessageLoop()
  ├── GameLoopMessagePump(&Msg, 0, 0, 0, 0) — 自定义 PeekMessage
  ├── MessageIsDialog(&Msg) — 判断消息是否属于当前对话框
  ├── TranslateMessage + DispatchMessageA
  └── CopyProtection::NotifyLauncher hook

Dialog::PumpMessages() — 便捷封装 (27 调用方)
  ├── Dialog::MessageLoop()
  ├── if GameMode==0||5: Event::Dispatch()
  └── if in-game: sub_55CBF0()→GameFrameLoop()
```

---

## 8. 菜单渲染架构 (MainMenu::Screen flow)

```
MainMenu::Screen (0x531CC0)
  ├── 创建对话框模板 0xE2 + DlgItem 1818 BINK背景控件
  ├── 屏幕宽度 > 800 → 居中偏移计算
  ├── DlgItem 1818: 宽屏模式用 ra2ts_l.bik / 窄屏用 ra2ts_s.bik
  ├── 发送 0x4E3 → 初始化 BINK 播放器
  ├── 发送 0x4E4 + "Ra2ts_l" / "Ra2ts_s" → 设置 BINK 文件
  ├── 循环: Dialog::PumpMessages() [timeout=3600 frames(60s)]
  │     ├── 若 bp[0xEA]->Screen_Capture 被触发 → Frame_Present 重绘
  │     └── 返回状态码 → MenuSelect 状态机
  └── WM_CLOSE: SendMessage(DlgItem 1818, 0x4F0) → 清理 BINK
```

---

## 9. 过场动画处理 (case 9)

```
case 9 (INTRO/BINK):
  dword_A8E7AC++ → CreditsScreen() → dword_A8E7AC--
  sub_558740() → Movie/Cinematic 播放 ("RENEGADE.BIK" 等)
  sub_5587F0() → 检查返回状态
  sub_558790() → 清理
  若成功 → v56=1 (跳过intro) → 直接进游戏
  否则 → 回到 case 1 (Campaign菜单)
```

---

## 10. CampaignScreen 通用对话框架构 (0x60D380)

```
CampaignScreen(template_id):
  ├── Dialog::Create(template_id) → ShowWindow → SetForegroundWindow
  ├── sub_54F720 (注册定时器/screen saver延迟?)
  ├── 若参数=1: ScreensaverStart()
  ├── while dwNewLong==0:
  │     ├── Dialog::MessageLoop()
  │     ├── if GameMode==0||5||byte_A8D60E||dword_A8DAB4:
  │     │     Event::Dispatch()
  │     └── else if !sub_55CBF0 && GameFrameLoop(): break
  └── Dialog::Destroy → 返回 dwNewLong (下一状态)
```

注意：CampaignScreen 是**通用对话框包装器**，被 4 个调用方复用——不仅是战役屏幕，
也作为 Skirmish 地图选择、多人模式设置等屏幕的模板。返回值决定下一步状态。

---

## 11. CampaignMenu_DlgProc 控件ID表 (0x52D640)

| DlgItem ID | 功能 | 状态设置 |
|------------|------|----------|
| 1673 (0x689) | Load Game 按钮 | state=9 |
| 1674 (0x68A) | New Game 按钮 | state=10 |
| 1672 (0x688) | Start Scenario 按钮 | state=8 |
| 1401 (0x579) | Skirmish 按钮 | state=11 |
| 1670 (0x686) | Back to Main Menu | state=18 |
| 1818 (0x71A) | BINK 背景播放器 | WM_CLOSE 时清理 (0x4F0) |
| 0x497 | 存档查询事件 | LoadOptions_Constructor→LoadOptions_Check→EnableWindow |

---

踩坑记录（BINK SDK/主菜单渲染/循环检测/工作基线）已拆出到 `docs/menu_lessons.md`。

---

## 12. SHP 按钮素材信息

- 哈希 ID: button00=0x0D2B157D, button01=0x304B3CCD, button02=0x77EB461D, button03=0x4A8B6FAD, button04=0xF8ABB3BD
- **确认存在于 MIX**: sub:0x5B0D6FBD, 每文件 3384 字节
- **原版 gamemd.exe 中零引用**: IDA 搜索 `0x0D2B157D` 等无结果 → 原版主菜单不使用 button*.shp
- **原版使用标准 Win32 GDI BUTTON 控件** + CSF 字符串表 (如 "GUI:SinglePlayer")
- **格式问题**: 头部 `0000 3400 2000 0200` 既不是标准 TS 也不是 TD 格式
- 前2字节 0x0000 => TS格式标记, 但 `3400 = 52`(可能是width), `2000 = 32`(可能是height), `0200 = 2`(可能是frames)

---

## 13. cnc-ddraw 兼容性注意事项

- `nonexclusive=true` 是让 GDI 子窗口能叠加到 DDraw 表面的**必要条件** (cnc-ddraw 用 OpenGL/D3D9 渲染,默认覆盖所有 GDI)
- 这不是修改游戏逻辑, 是配置软件渲染器模拟真实 DirectDraw 硬件行为
- `d3d9_filter=0` 消除 bilinear 过滤造成的 BINK 模糊
- `maxfps=60` 在 `nonexclusive=true` 下可能不生效 (Flip 不阻塞)

---

## 14. binkw32.dll IDA 分析关键发现 (port 13338)

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

---

## 15. gamemd.exe IDA BINK 关键函数 (port 13337)

- `BinkMovie_InitFromFile` (0x432750): BinkOpen→SetSoundSystem→SetVolume→CreateSurfaceTracker→SetPosition
- `BinkMovie_RenderLoop` (0x432E40): DoFrame→Lock→CopyToBuffer→Unlock→BlitToTarget→NextFrame→Wait
- `BinkMovie::Play` (0x432C70): 主循环 `while(current<total && current>=loopStart)` {pump→RenderLoop}
- `MainMenu::Screen` (0x531CC0): Dialog::Create(0xE2)→Dialog::SetParent→Dialog::PumpMessages 循环
- `MainMenu::DlgProc` (0x531F60): WM_COMMAND(button ID→state), WM_CLOSE(BINK cleanup)
- `sub_432BD0`: BinkGoto(handle, frame, 1) 封装 (flag=1 快速 seek)
- `AudioController::IsSoundEnabled` (0x407000): 检查 `g_Audio_Enabled`
- `Audio::GetDirectSound` (0x40A7A0): 返回 `g_pDirectSound`
- `BinkMovie_Pause` (0x432C30): BinkPause 调用


