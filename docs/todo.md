# RA2YR ReSource — Master TODO / Work Breakdown

---

## 当前菜单渲染状态

| 组件 | 状态 | 备注 |
|------|------|------|
| DDraw 初始化 | ✅ | 2560x1600 全屏，cnc-ddraw 兼容层 |
| MIX 文件加载 | ✅ | 16顶层→17子MIX→33池，内存支持 |
| SHP 解码 | ✅ | TS格式(RLE3+Raw)，`ShpImage::LoadFromMemory` |
| 调色板 | ✅ | 768字节内容扫描匹配 |
| **BINK 视频** | ✅ | 左侧 BINK 区域, RGB565, 帧序已修正 |
| **BINK 音频** | ✅ | DirectSound + BinkSetSoundSystem + BinkSetVolume |
| **BINK 帧序** | ✅ | 修正为 DoFrame→Wait→CopyToBuffer→NextFrame (匹配 IDA 0x432E40) |
| **按钮 (Win32控件)** | ✅ | Win32 BUTTON 子窗口 (DiaglogEX 模板 0xE2), GDI 渲染 |
| 按钮 (SHP 素材) | ❌ | SHP 解析器返回错误尺寸 2x0 (头部 `0000 3400 2000 0200` 非标准) |
| Dialog/Gadget 系统 | ⚠️ | 子菜单 (Campaign/Options) 使用 DDraw Gadget 系统 |
| 主菜单 BINK 背景 | ✅ | `ra2ts_l.bik` 632×570 渲染到 BINK 区域 |

---

## Hook 系统状态

| 指标 | 数值 |
|------|-------|
| 构建状态 | **Release** 0 errors, .syhks00 section 已生成 |
| 导出函数 | 3 (SyringeHandshake, PostProcStub, mismatch_counter) |
| JSON函数数据库 | 19,067条目, 12,613已命名, 分类完成 |
| **已完成函数** | **39** (faithful IDA translations, completed:true) |
| **REVERSE标记** | **~32** (跨14个源文件) — 2 Inject 活跃, 13 个 Capture 模式, 39 个 None 模式 |
| **依赖验证** | 39函数→10K唯一被调用者 (callee_map.json) |
| **Capture 模式** | **稳定** (13 hooks, Release 构建, 多局测试无崩溃) |
| **Caller 查找** | 14,390 条 (functions.json IDA 命名) |
| 下一步 | 写 .data 的非渲染函数做真正的 Inject 回滚测试 |

---

## R0 — 菜单渲染管线 (最高优先级, 阻塞可演示性)

**目标**: 完整实现原版主菜单/多菜单/选项菜单等 UI，SHP 按钮 + 背景 + BINK 视频

**当前状态**: DDraw 初始化 ✅ / SHP 加载 ✅ / 调色板 ✅ / MIX 读取 ✅ / 色块按钮可交互 ／ 真实 SHP 按钮加载后未渲染

### R0-1: DSurface SHP 渲染 — Blit/StretchBlt 正确实现

| # | 描述 | 文件 | 依赖 | 估算行 |
|---|------|------|------|--------|
| R0-1a | 正确实现 DSurface::Blt (标准 DirectDraw Blit) | `render/surface.cpp` | cnc-ddraw | ~50 |
| R0-1b | DSurface::FillRect 验证 (确认 cnc-ddraw 下行为) | `render/surface.cpp` | cnc-ddraw | ~10 |
| R0-1c | DrawSHP(frame, src_x, src_y, palette) — 调色板索引→16bpp/32bpp 转换 + 写像素 | `render/surface.cpp` | DSurface, Palette | ~50 |
| R0-1d | SHP 透明色支持 (key color=0 不绘制) | `render/surface.cpp` | DrawSHP | ~20 |
| R0-1e | SHP 多帧支持 (frame index → frame pixel data) | `render/surface.cpp` | ShpImage | ~30 |

**R0-1 验收**: 单帧 SHP 正常显示在 DDraw 表面上，颜色正确，透明区域正常。

### R0-2: Dialog / Gadget 系统 — UI 事件分发

| # | 描述 | 文件 | 依赖 | 估算行 |
|---|------|------|------|--------|
| R0-2a | GadgetClass 基类完善: DrawMe/OnMouseEnter/OnMouseLeave/Action 虚函数链 | `ui/gadget.cpp` | — | ~100 |
| R0-2b | TextButtonClass SHP 渲染: LoadFromHash→帧0(普通)/帧1(悬停)/帧2(按下) | `ui/gadget.cpp` | R0-1 | ~80 |
| R0-2c | LabelClass 文字渲染: GDI→DDraw surface (已有 TextRenderer 基础) | `ui/gadget.cpp` | TextRenderer | ~50 |
| R0-2d | DialogClass 完善: AddGadget/RemoveGadget/DrawAll/DispatchMouse/DispatchKey | `ui/dialog.cpp` | GadgetClass | ~150 |
| R0-2e | Dialog::MessageLoop: PeekMessage→Translate→Dispatch + 空闲时 DrawAll (参考原版时序) | `ui/dialog.cpp` | Dialog 系统 | ~80 |

**R0-2 验收**: 多按钮对话框正确响应点击，SHP 按钮显示帧切换，文字标签可见。

### R0-3: 主菜单 UI 资产 → 功能映射

| # | 描述 | 文件 | 依赖 | 估算行 |
|---|------|------|------|--------|
| R0-3a | 按 XCC 名称→CRC32 哈希查找加载所有主菜单 SHP: `button*.shp`, `tabs.shp`, `side2.shp`, `logo.shp`, `title.shp` | `src/core/menu_select.cpp` | R0-1, R0-2 | ~40 |
| R0-3b | 构建主菜单 Gadget 树: 5 个 TextButton + 1 个 Label(版本号) + 背景控件 | `src/core/menu_select.cpp` | R0-2 | ~60 |
| R0-3c | 按钮动作: Campaign→CampaignScreen / Skirmish→(地图选择) / Multiplayer→MultiplayerScreen / Options→Options_Screen / Exit→PostQuitMessage | `src/core/menu_select.cpp` | Dialog 系统 | ~40 |
| R0-3d | 背景渲染: 优先 BINK (ra2ts_l.bik), 回退到 loading screen SHP (ls800*.shp) | `src/core/menu_select.cpp` | R0-1 | ~30 |

**R0-3 验收**: 主菜单显示真实 SHP 按钮，各按钮点击后跳转到对应子屏幕（占位或已实现）。

### R0-4: 子菜单屏幕 (Campaign/Skirmish/Multiplayer/Options)

| # | 描述 | 文件 | 依赖 | 估算行 |
|---|------|------|------|--------|
| R0-4a | CampaignScreen: 阵营选择 SHP 按钮 + Start/Back (参考 IDA `CampaignScreen` **0x60D380**) | `src/core/menu_select.cpp` | R0-2 | ~60 |
| R0-4b | MultiplayerScreen: 网络模式选择 (参考 IDA `MultiplayerScreen` **0x53F1F0**, 全局存储) | `src/core/menu_select.cpp` | R0-2 | ~60 |
| R0-4c | Options_Screen: 游戏设置对话框 (参考 IDA `OptionsScreenDialog` **0x55FC80**, `OptionsScreenSave` **0x55FAA0**) | `src/core/menu_select.cpp` | R0-2 | ~50 |

**R0-4 验收**: 四级菜单可导航，返回按钮工作，状态机正确流转。

### R0-5: BINK 视频解码/播放

| # | 描述 | 文件 | 依赖 | 估算行 |
|---|------|------|------|--------|
| R0-5a | SHP 加载屏幕显示 (降级方案: static ls800*.shp 作为菜单背景) | `src/core/menu_select.cpp` | R0-1 | ~30 |
| R0-5b | 调研 BINK 格式 + RAD Game Tools SDK 可行性 (原版用 BinkPlay.exe / binkw32.dll) | `src/render/bink.cpp` → 新建 | — | 调研 |
| R0-5c | BINK 视频帧解码→DDraw 表面 Blit (每帧 DMA→surface→Flip) | `src/render/bink.cpp` | DDraw | ~150 |
| R0-5d | INTRO 视频播放: `MenuSelect` case 0/1 (跳过 Logo/Intro 的 Spawner 钩子) | `src/core/menu_select.cpp` | R0-5c | ~50 |

**R0-5 验收**: 菜单背景显示 BINK 动画（或 SHP 静图降级），INTRO 视频可播放。

### R0-6: 主菜单渲染完整性

| # | 描述 | 依赖 | 估算行 | 状态 |
|---|------|------|--------|------|
| R0-6a | 修复 SHP 按钮加载 (button00-04.shp 非标准头部) | SHP 解析器 | ~50 | ❌ |
| R0-6b | SHP 按钮帧渲染 (普通/悬停/按下 3 帧切换) | R0-6a | ~60 | ❌ |
| R0-6c | 版本号文字 (DlgItem 1821, "GUI:Version") | 字体渲染 | ~20 | ❌ |
| R0-6d | BINK 音频 (BinkSetSoundSystem + DirectSound) | DirectSound | ~80 | ❌ |
| R0-6e | 主菜单 BINK 循环播放 (BinkWait 时序修复) | BINK SDK | 已完成 | ✅ |
| R0-6f | Dialog/Gadget 系统对接 (WM_COMMAND→MenuState) | 对话框 | ~50 | ⚠️ |
| R0-6g | Campaign/Options/Multiplayer 子菜单 SHP 背景 | MIX资产 | ~100 | ❌ |

---

## R1 — 游戏内渲染管线

**目标**: 完整实现等距视图 (Tactical Map)、地形/建筑/单位/UI 渲染

**当前状态**: 仅头文件定义，无 .cpp 实现

### R1-1: 等距投影 & 坐标系统

| # | 描述 | 文件 | IDA 地址 | 估算行 |
|---|------|------|----------|--------|
| R1-1a | Cell → Screen 坐标转换 (Lepton→Cell→Pixel) | `ui/tactical.cpp` | `Coord_To_Cell` 0x565730 | ~80 |
| R1-1b | Screen → Cell 坐标逆向 (鼠标点击→地图格) | `ui/tactical.cpp` | — | ~60 |
| R1-1c | 视口裁剪: 计算可见 cell 范围 (Camera X/Y/Z) | `ui/tactical.cpp` | — | ~80 |
| R1-1d | 地图滚动: 键盘/鼠标边界检测 + 平滑移动 | `ui/tactical.cpp` | — | ~60 |

**R1-1 验收**: 固定相机位置绘制地形的坐标转换正确，鼠标可检测地图格。

### R1-2: 地形渲染 (Tactical Map Draw)

| # | 描述 | 文件 | IDA 地址 | 估算行 |
|---|------|------|----------|--------|
| R1-2a | 地形 Tile SHP 加载: TEM/TEMPERAT/Snow/Urban tileset | `ui/tactical.cpp` | — | ~100 |
| R1-2b | Isometric tile 绘制: z-order left→right, top→bottom | `ui/tactical.cpp` | — | ~120 |
| R1-2c | Tile 变体选择 (随机草地/悬崖边缘检测) | `ui/tactical.cpp` | — | ~100 |
| R1-2d | 地表覆盖层: Tiberium/Ore/Cliff/Road/Wall/River 覆盖 | `ui/tactical.cpp` | — | ~80 |

**R1-2 验收**: 等距地图可见，地形 tile 正确排列，无 z-order 错误。

### R1-3: 对象渲染 (Buildings/Units/Infantry/Aircraft)

| # | 描述 | 文件 | IDA 地址 | 估算行 |
|---|------|------|----------|--------|
| R1-3a | ObjectClass::Draw (虚函数 [7]) — 基类 Draw 调度 | `core/object.cpp` | — | ~60 |
| R1-3b | BuildingClass::Draw: SHP 建筑动画 + buildup/active/damage 状态 | `core/building.cpp` | — | ~100 |
| R1-3c | TechnoClass::Draw: SHP 单位/步兵 8 方向选择 + 动画帧步进 | `core/techno.cpp` | — | ~100 |
| R1-3d | 对象 z-order 排序: 同 cell 内按 Occupier 列表排序 | `core/object.cpp` | — | ~50 |
| R1-3e | 选中的对象: 血条 + 选中框绘制 (SHP 覆盖) | `core/techno.cpp` | — | ~60 |

**R1-3 验收**: 至少一个建筑/单位/步兵在屏幕上正确渲染。

### R1-4: 游戏内 UI 覆盖

| # | 描述 | 文件 | IDA 地址 | 估算行 |
|---|------|------|----------|--------|
| R1-4a | 侧边栏 (SidebarClass): 建筑/单位生产标签页 + 图标 + Ready 状态 | `ui/sidebar.cpp` | — | ~200 |
| R1-4b | 迷你雷达 (RadarClass): 地形预览 + 单位/建筑白点 | `ui/radar.cpp` | — | ~120 |
| R1-4c | 命令栏 (CommandClass): 移动/攻击/停止/部署/警戒 按钮 | `ui/command_class.cpp` | — | ~80 |
| R1-4d | 资源/电量/资金 文本显示: CreditDisplay / PowerBar | `ui/g_screen.cpp` | — | ~60 |
| R1-4e | Tab 选择 (TabClass): 多建筑/多单位切换 | `ui/tab.cpp` | — | ~60 |

**R1-4 验收**: 完整游戏 UI 覆盖层可见交互。

### R1-5: 视觉效果后期

| # | 描述 | 文件 | IDA 地址 | 估算行 |
|---|------|------|----------|--------|
| R1-5a | 战争迷雾/黑幕 (FogOfWar): per-cell 可见性 + 灰/黑渐变覆盖 | `ui/tactical.cpp` | — | ~120 |
| R1-5b | 动画覆盖 (AnimClass): 爆炸/烟/火花 在 tactical 层之上 | `entity/anim.cpp` | — | ~100 |
| R1-5c | 动态光照: 核弹闪光/闪电风暴/Chrono 效果 | `ui/tactical.cpp` | `LightingStorm`/`NukeFlash` | ~100 |

**R1-5 验收**: 战争迷雾正确遮挡未探索区域，爆炸动画可见。

### R1-6: Voxel 3D 模型渲染 (远期, 可选降级)

| # | 描述 | 文件 | 依赖 | 估算行 |
|---|------|------|------|--------|
| R1-6a | VXL 格式解析: Header(sections) + Body(voxel array) + Action frame offsets | `entity/voxel_anim.cpp` | — | ~150 |
| R1-6b | HVA 动画格式: Section 变换矩阵 + 帧动画数据 | `entity/voxel_anim.cpp` | VXL | ~100 |
| R1-6c | 软件 Voxel→2D 投影: 8 方向 ray-cast → 像素缓冲 → DDraw 表面 | `entity/voxel_anim.cpp` | DSurface | ~200 |
| R1-6d | **降级方案**: Voxel 对象用 SHP 占位 (从 expandmd01.mix 提取对应 SHP) | `entity/voxel_anim.cpp` | SHP | ~50 |

**R1-6 验收**: Voxel 模型可见（或 SHP 占位版），8 方向随旋转变化。

---

## P0 — EXE 骨架 (已完成 / 进行中)

| # | 描述 | 文件 | 估算行数 | 状态 |
|---|------|------|----------|------|
| P0-1 | WinMain 入口点 + 窗口创建 | `app/main.cpp` | ~20 | ✅ |
| P0-2 | DirectDraw 7 初始化 | `app/ddraw_init.cpp` | ~100 | ✅ |
| P0-3 | 命令行解析器 (`-SPAWN`, `-CD`, `-WINDOW`, `-LOG`) | `app/cmdline.cpp` | ~60 | ✅ |
| P0-4 | 游戏主流程路由 (Init→Menu/Spawn→GameLoop) | `app/game_loop.cpp` | ~100 | ✅ |
| P0-5 | InitGame 骨架 (匹配 InitGame 流程) | `src/core/init_game.cpp` | ~80 | ✅ |
| P0-6 | MenuSelect 骨架 (19-case switch placeholder) | `src/core/menu_select.cpp` | ~60 | ✅ |
| P0-7 | SpawnINI 完整解析器 (Settings/Players/Houses/Tunnel) | `src/core/spawn_config.cpp` | ~200 | ✅ |
| P0-8 | SpawnMode 入口 (读 spawn.ini → 路由到游戏循环) | `src/core/spawn_mode.cpp` | ~100 | ✅ |
| P0-9 | xna-cncnet-client 生态文档 (Ares/Syringe/Phobos/yrpp-spawner) | `AGENTS.md` | ~150 | ✅ |

---

## P1 — 核心游戏管线 (阻塞级)

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

---

## P2 — IDA 翻译 (解锁子系统)

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

---

## P3 — 系统完成

| # | 描述 | 文件 | 估算行数 |
|---|------|------|----------|
| P3-1 | ReceiveDamage 完整护甲计算 (弹头vs护甲类型) | `object.cpp:62-93` | ~50 |
| P3-2 | Audio系统 (VocClass/VoxClass ~15 stub方法) | `audio.cpp` | ~200 |
| P3-3 | TriggerClass 事件注册/动作触发/实例创建 | `trigger.cpp` | ~200 |
| P3-4 | TacticalClass 坐标转换/遮挡/绘制 (参考 cnc-ddraw) | `tactical.cpp` | ~200 |
| P3-5 | Surface/DSurface Blit/FillRect/Lock/Unlock/DrawSHP (参考 cnc-ddraw) | `surface.cpp` | ~200 |
| P3-6 | Cell occupancy (IsCellOccupied, MarkAllOccupationBits) | `object.cpp` | ~80 |
| P3-7 | Fire/SmokeUpdate/TakeDamage — 战斗子系统完善 | `techno.cpp` | ~100 |

---

## P4 — 架构完整性

| # | 描述 | 文件 | 估算行数 |
|---|------|------|----------|
| P4-1 | 成员文档化 — IDA验证所有类成员变量（1,120 类，0 unknown_） | structure headers | ✅ 已完成 (2026-06-17) |
| P4-2 | 从YRpp补全HouseClass/RulesClass/SessionClass成员 | 8+ headers | varies |
| P4-3 | 网络子系统 (Winsock/IPX/UDP/Connection/Multiplayer) | 4 files | ~500 |
| P4-4 | UI子系统 (CommandClass 14子类/Sidebar/Mouse) | 6 files | ~500 |
| P4-5 | Entity子系统 (Anim/Bullet/Particle/Smudge/Overlay/Tiberium/Wave/Tube/Terrain) | 9 files | ~600 |
| P4-6 | Voxel渲染 (VoxelAnimClass) | voxel headers | ~300 |
| P4-7 | SuperWeapon静态方法 (LightningStorm/PsyDom/NukeFlash/ChronoScreenEffect) | `super_weapon.cpp` | ~200 |
| P4-8 | Tag/Team/Trigger系统 (持久化+动作链) | 3 files | ~500 |
| P4-9 | Far Future: Ares/Phobos扩展原生支持 | — | — |

---

## P5 — 现代化重构 (远期/平台支撑)

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

---

### P5-7: Linux 编译 gamemd_core 详情

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

---

### P5-8: cnc-ddraw MinGW 交叉编译详情

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

---

## 统计总览

| 指标 | 数值 |
|------|------|
| 已实现函数 | ~140 |
| 存根/空实现 | ~200+ |
| TODO/FIXME标记 | 252 (src 205 + headers 47) |
| IDA 命名函数 | **10,366 / 10,366 (100%)** |
| IDA 类成员命名 | **7,936** |
| IDA 全局函数命名 | **2,430** |
| IDA 命名全局变量 | **9,999 / 9,999 (100%)** |
| IDA 类 header | **1,120 / 1,120 (100%)** — 0 unknown_, 0 sub_* |
| 构建状态 | 0 errors, 0 warnings |
