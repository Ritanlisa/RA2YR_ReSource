# gamemd.exe 完整渲染工作流

> 从 DDraw 初始化 → Surface 类层次 → BINK 视频 → SHP 精灵 → Voxel 体素 → TacticalMap 等距地图 → HUD 界面, 覆盖所有渲染链。所有函数/变量名均为 IDA 确认的命名。

---

## 1. DDraw 初始化链

### 1.1 InitializeDDraw (0x4A42F0)

```
InitializeDDraw (WinMain 调用, ×3 次)
  │
  ├── DirectDrawCreate(0, &g_lpDirectDraw7, 0)  ← 创建 DDraw7 对象
  │     └─ g_lpDirectDraw7 (0x8A0094) = IDirectDraw7*
  │
  ├── SetCooperativeLevel:
  │     ├─ 窗口模式 (g_DDraw_Initialized=1): DDSCL_NORMAL (8)
  │     └─ 全屏模式: DDSCL_EXCLUSIVE|DDSCL_FULLSCREEN (17)
  │
  ├── SetDisplayMode(g_DisplayWidth, g_DisplayHeight, g_DisplayBPP)
  │
  ├── [8bpp] CreatePalette:
  │     ├─ g_DDraw_PaletteEntries (0x89FC94) = 256×PALETTEENTRY
  │     └─ g_DDraw_Palette (0x89FC90) = IDirectDrawPalette*
  │
  └── DDraw::CheckCapabilities (0x4A3E40)
        ├── DSurface::Construct(64×64) → Fill→GetPixel 测试
        ├── g_DDraw_UseHWBlit (0x8205D4) = HW Blit 可用
        ├── SetPixel→BlitPart→GetPixel 测试
        └── g_DDraw_AllowOverlayBlit (0x8205D5) = Overlay Blit 可用
```

### 1.2 DSurface::CreatePrimary (0x4BA770)

```
DSurface::CreatePrimary(back_buffer_count)
  │
  ├── DDraw::CheckCapabilities (0x4A4620):
  │     ├─ g_DDraw_AllowStretchBlits (0x8A0DEE)
  │     └─ g_DDraw_UseHWBlit 确认
  │
  ├── malloc DSurface (0x24 B) → vtable = DSurface_Vtable (0x7E85D4)
  │
  ├── 填充 DDSURFACEDESC2 (0x6C B):
  │     ├─ dwFlags = DDSD_CAPS
  │     └─ ddsCaps = DDSCAPS_PRIMARYSURFACE
  │           ├─ back_buffer > 0: DDSCAPS_FLIP|DDSCAPS_COMPLEX, dwBackBufferCount
  │           └─ + CreateSurface → g_DDraw_PrimarySurface (0x8A009C)
  │
  ├── GetSurfaceDesc → 提取:
  │     ├─ BytesPerPixel, Width, Height
  │     └─ Allocated = 1, VRAMmed
  │
  ├── CreateClipper → SetHWnd → SetClipper
  │
  ├── 像素格式解析 (RGB 位掩码/位移):
  │     ├─ g_DDraw_RedMask/GreenMask/BlueMask (0x8A0958/5C/60)
  │     ├─ g_BitShift_Red/Green/Blue (0x8A0DD0/D4/D8)
  │     ├─ g_BitMask_Red/Green/Blue (0x8A0DDC/E0/E4)
  │     └─ g_DDraw_PixelFormat (0x8205D0):
  │           ├─ 0 = RGB565 (R:5@11, G:6@5, B:5@0)  ← 最常用
  │           ├─ 1 = RGB555 (R:5@10, G:5@5, B:5@0)
  │           └─ 2 = RGB444 (R:4@8,  G:4@4,  B:4@0)
  │
  └── Debug::Log("DSurface::Create_Primary done")
```

### 1.3 DDraw 全局状态

| 地址 | 变量 | 说明 |
|------|------|------|
| `0x8A0094` | `g_lpDirectDraw7` | IDirectDraw7 主对象 |
| `0x8A009C` | `g_DDraw_PrimarySurface` | 主表面 IDDS7* |
| `0x89F978` | `g_DDraw_Initialized` | 窗口模式标志 |
| `0xA8ED80` | `g_DDraw_Active` | DDraw 激活 |
| `0x8A00A4` | `g_DisplayWidth` | 屏幕宽度 |
| `0x8A00A8` | `g_DisplayHeight` | 屏幕高度 |
| `0x8A00AC` | `g_DisplayBPP` | 色深 (8/16/32) |
| `0x8205D4` | `g_DDraw_UseHWBlit` | 硬件 Blit 可用 |
| `0x8205D0` | `g_DDraw_PixelFormat` | 像素格式枚举 |
| `0x8A0DD0` | `g_BitShift_Red` | 红色位偏移 |
| `0x8A0DD4` | `g_BitShift_Green` | 绿色位偏移 |
| `0x8A0DD8` | `g_BitShift_Blue` | 蓝色位偏移 |
| `0x8A0DDC` | `g_BitMask_Red` | 红色位宽 |
| `0x8A0DE0` | `g_BitMask_Green` | 绿色位宽 |
| `0x8A0DE4` | `g_BitMask_Blue` | 蓝色位宽 |
| `0x89FC90` | `g_DDraw_Palette` | 8bpp 调色板 |
| `0x8A0DCC` | `g_DDraw_Clipper` | 裁剪器 |
| `0x8A0DEE` | `g_DDraw_AllowStretchBlits` | 拉伸 Blit |
| `0x8205D5` | `g_DDraw_AllowOverlayBlit` | 覆盖 Blit |
| `0x8A0DEF` | `g_DDraw_Force3D` | 强制 3D 表面 |
| `0x887644` | `g_ZBufferDescriptor` | Z-Buffer 描述符 |

---

## 2. Surface 类层次

```
Surface (抽象基类, vtable 0x7E2198, 38 entries)
  │  [0]=dtor, [26]=ReturnTrue, [27]=IsLocked, [30-32]=GetRect/W/H
  │
  └─ XSurface (默认实现, vtable 0x7E2104)
       │  [6]=Fill, [8]=DrawEllipse, [9-10]=Set/GetPixel,
       │  [11-12]=DrawLine, [17]=WalkLine, [18]=DrawDashed,
       │  [21-22]=DrawRect, [34-35]=Put/GetPixelAtCoords
       │
       ├─ BSurface (软件缓冲区, vtable 0x7E2070)
       │    覆盖: Lock/GetBytesPerPixel/GetPitch
       │    使用: GDI 渲染 → DDraw 拷贝
       │
       └─ DSurface (DirectDraw7 表面, vtable 0x7E85D4)
            覆盖 20 项, 核心:
              [3]=Blit (1303B), [4]=FillRectEx, [5]=FillRect,
              [7]=FillRectWithFlags, [13]=DrawLineZBuf,
              [14]=DrawLineModulated, [15]=DrawLineFaded,
              [16]=DrawLineZBufColored, [19]=DrawDashedLineStipple,
              [20]=DrawStippledRect, [23]=Lock, [24]=Unlock,
              [25]=CanLock, [28-29]=GetBytesPerPixel/GetPitch,
              [33]=IsDSurface, [36]=DrawGradientLine, [37]=CheckBltStatus
```

### DSurface 成员偏移 (构造函数 0x4BA5A0)

| 偏移 | 成员 | 说明 |
|------|------|------|
| +0x00 | vtable | DSurface_Vtable (0x7E85D4) |
| +0x04 | Width | 继承 |
| +0x08 | Height | 继承 |
| +0x0C | LockCount | 继承 |
| +0x10 | BytesPerPixel | 每像素字节 |
| +0x14 | LockedBuffer | Lock 后缓冲区指针 |
| +0x18 | Allocated | bool (自己分配的) |
| +0x19 | VRAMmed | bool (显存中) |
| +0x1C | IDirectDrawSurface7* | DDraw 表面接口 |
| +0x20 | DDSURFACEDESC2* | DDraw 描述符 |

### 关键表面实例

| 地址 | 变量 | 说明 |
|------|------|------|
| `0x887308` | `DSurface_Primary` | 主显示表面 |
| `0x88730C` | `DSurface_Hidden` | 隐藏/离屏表面 |
| `0x887314` | `DSurface_Hidden_2` | 隐藏表面副本 |
| `0x87F6B8` | `FileSystem_x_PAL` | 调色板转换表 |
| `0x87E8A4` | `g_VisibleSurfaceDescriptor` | 可见表面描述 |

---

## 3. BINK 视频渲染链

### 3.1 BinkMovieHandle 结构

```
BinkMovieHandle (this 指针, 约 0x30+ bytes)
  +0x04: BINK* m_bink_handle      ← BINK SDK 句柄
  +0x08: uint32_t m_surface_flags  ← BinkCopyToBuffer flags
  +0x0C: DSurface* m_surface       ← 渲染目标表面
  +0x10: int m_destX               ← 目标 X
  +0x14: int m_destY               ← 目标 Y
  +0x18: int m_current_frame       ← 当前帧号
  +0x1C: bool m_playing            ← 播放状态
  +0x2C: bool m_surface_active     ← 表面激活状态
```

### 3.2 BINK 渲染管线

```
MainMenu::Screen → DlgItem 1818 子类化
  │
  ├── WM_USER+0x4E3 (BINKM_INIT):
  │     └─ BinkMovieClass::AllocateRenderSurface (0x4335E0)
  │           → DSurface::Construct(width, height, sysmem)
  │
  ├── WM_USER+0x4E4 (BINKM_OPEN):
  │     └─ BinkMovieClass::OpenFile (0x433770)
  │           ├─ BinkOpen("ra2ts_l.bik", 0)  → m_bink_handle
  │           ├─ BinkSetSoundSystem(BinkOpenDirectSound, g_pDirectSound)
  │           ├─ BinkSetVolume(handle, volume)
  │           └─ BinkMovieClass::SetPosition (0x433180)
  │
  └── WM_TIMER/WM_PAINT → BinkMovie::RenderLoop (0x432E40)
        │
        ├── BinkSetVolume (每帧音量同步)
        ├── g_DDraw_Active? BinkPause(handle,0) : BinkPause(handle,1)
        │
        ├── BinkDoFrame(handle)  ← 解码当前帧
        │
        ├── BinkMovie::CheckKeyframeTransition (0x6C9C60)
        │     └─ 关键帧切换 → BinkMovie::AdjustSurfaceFormat (0x433330)
        │           → 调整表面像素格式 (RGB565/555/444)
        │
        ├── BinkMovieClass::RenderFrameToSurface (0x4333F0)
        │     ├── Surface::Lock (vtable[23]) → buf
        │     ├── [Primary表面] GetClientRect → ClientToScreen → 窗口坐标偏移
        │     ├── BinkCopyToBuffer(handle, buf, pitch, h, dx, dy, flags)
        │     ├── Surface::Unlock (vtable[24])
        │     └── BinkMovie::BlitToTarget (0x433270) → surface
        │
        ├── BinkNextFrame(handle)  ← 推进到下一帧
        └── [循环检测] BinkDoFrame != 0 → BinkGoto(handle, 0, 1) → 重新 DoFrame
```

### 3.3 BINK 关键函数

| 地址 | 名称 | 大小 | 说明 |
|------|------|------|------|
| `0x432E40` | `BinkMovie::RenderLoop` | — | 主渲染循环 |
| `0x432750` | `BinkMovie::InitFromFile` | — | BinkOpen + 音频 + 表面 |
| `0x4333F0` | `BinkMovieClass::RenderFrameToSurface` | 368B | Lock→Copy→Unlock→Blit |
| `0x433270` | `BinkMovie::BlitToTarget` | — | Blit 到最终位置 |
| `0x4335E0` | `BinkMovieClass::AllocateRenderSurface` | 217B | 分配渲染表面 |
| `0x4336C0` | `BinkMovieClass::ReleaseRenderSurface` | 169B | 释放渲染表面 |
| `0x433770` | `BinkMovieClass::OpenFile` | 232B | BinkOpen + 音频设置 |
| `0x433180` | `BinkMovieClass::SetPosition` | 109B | 设置渲染位置 |
| `0x6C9C60` | `BinkMovie::CheckKeyframeTransition` | — | 关键帧格式切换 |
| `0x433330` | `BinkMovie::AdjustSurfaceFormat` | — | 调整表面像素格式 |

---

## 4. SHP 精灵渲染链

### 4.1 SHP 格式

```
TS/RA2 格式 (button*.shp, ls800*.shp 等):
  Header: 4B file_size + 2B width + 2B height + 2B frames
  Frame 0: offset table (4B × frames): offset_to_frame_data
  每帧: 像素数据 (RLE3 压缩 或 Raw 未压缩)

TD 格式 (经典 C&C):
  Header: 2B frames + 2B width + 2B height
  Frame 0: offset table (4B × frames)
  每帧: Format80 压缩
```

### 4.2 SHP 加载链

```
LoadSHPFile (0x69E430)
  │
  ├── CCFileClass::Construct(name) → Open
  │
  ├── 读 Header → 格式检测:
  │     ├─ TS格式: file_size(4B) + width(2B) + height(2B) + frames(2B)
  │     └─ TD格式: frames(2B) + width(2B) + height(2B)
  │
  ├── 读帧偏移表: malloc(frames × 4B)
  │
  └── 解码每帧:
        ├─ RLE3: 读 count_byte:
        │     ├─ 0x00 → 行结束
        │     ├─ 0x01 → 帧结束
        │     ├─ 0x02 → 透明跳过 (next_byte = skip_count)
        │     └─ 其他 → 复制 count_byte 个调色板索引像素
        └─ Raw: 直接复制像素

LoadFileSHP (0x4A38D0) — 便捷封装
  ├── SearchMIXFile(name, 0) → 缓存命中
  └── 未命中: CCFileClass::Open → GetSize → malloc → Read → 返回原始字节
```

### 4.3 SHP 渲染到 DDraw

```
DrawSHP (frame, src_x, src_y, palette):
  │
  ├── 根据帧索引查找帧数据偏移
  ├── 逐像素解码 (如已缓存则跳过)
  │
  ├── DSurface::Lock → LockedBuffer
  │
  ├── 逐像素写入:
  │     for each pixel in frame:
  │       if pixel == 0 → 透明 (跳过)
  │       else → palette[pixel] → RGB→16bpp 转换 → LockedBuffer[offset]
  │
  └── DSurface::Unlock
```

### 4.4 DSurface Blit 核心 (vtable[3], 0x4BA770)

```
DSurface::Blit(src_surface, src_rect, dst_rect, flags):
  ├── [Primary surface] GetClientRect → ClientToScreen → 坐标转换
  ├── [Lock→memcpy→Unlock] 或 [IDDS7::Blt]
  ├── g_DDraw_UseHWBlit → IDirectDrawSurface7::Blt (硬件 Blit)
  └── !HWBlit → Lock src → memcpy → Unlock (软件拷贝)
```

---

## 5. Voxel 体素渲染链

### 5.1 VXL 格式

```
VXL 文件结构:
  Header: "Voxel Section" + nSections + nFrames + section_offsets[nSections]
  Section: section_header + voxel_data (3D 数组)
    section_header: XSize, YSize, ZSize, XOffset, YOffset, ZOffset
    voxel_data: ZSize × (XSize × YSize) 字节 (调色板索引, 0=空)
  Action frames: 帧变换数据 (旋转/平移)
```

### 5.2 HVA 格式

```
HVA 文件结构:
  Header: "HVA Animation" + nSections + nFrames
  Section transforms: matrix[3×4] × nSections (初始姿态)
  Frame data: transform_delta × nSections × nFrames
```

### 5.3 Voxel 渲染管线

```
对象渲染 → VoxelAnimClass::ProcessFrame (0x4CAF20)
  │
  ├── VoxelModel::LoadVXLHeader (0x756DD0)
  │     └─ 解析 "Voxel Section" header → sections, frames
  │
  ├── HVAAnimation::LoadFromFile (0x759540)
  │     ├─ 解析 "HVA Animation" header
  │     └─ HVAAnimation::ParseFrames (0x759670)
  │           → section transforms + frame deltas
  │
  ├── VoxelAnim::ComputeTransform (0x7586F0)
  │     ├─ 当前帧插值 (帧间过渡)
  │     ├─ Matrix3x4 累积 (旋转×平移×缩放)
  │     └─ 方向选择 (8 方向 × 当前朝向)
  │
  ├── VoxelModel::BuildDrawList (0x755B30)
  │     └─ 按 Z-order 排序 section → 背面剔除
  │
  └── VoxelRenderer::RenderFrame (0x758030)
        │
        ├── VoxelRenderer::InitializeBuffers (0x759FB0)
        │     ├─ g_VoxelRenderBuffer (0xB2FF78) = 65536 B (256×256)
        │     └─ g_VoxelDepthBuffer (0xB2FF79) = Z-buffer
        │
        ├── for each section in draw_list:
        │     ├─ VoxelRenderer::ProjectVertex (0x758EA0)
        │     │     └─ 3D→2D 投影 + Voxel render state 变换
        │     │
        │     └─ VoxelRenderer::DrawSection (0x7575A0)
        │           ├── 遍历 section 内 voxel 行
        │           ├── 从 VXL data 读取体素索引
        │           ├── g_VoxelShadeTable (亮度查表)
        │           ├── g_VoxelColorPalette (颜色调色板)
        │           ├── 深度比较 (g_VoxelDepthBuffer)
        │           └── 写入 g_VoxelRenderBuffer[xy] = 16bpp 颜色
        │
        └── VoxelRenderer::DrawSectionLines (0x757790)
              └─ 绘制 section 边框线 (法线面线框)

   最终输出: g_VoxelRenderBuffer → Blit → DSurface → 屏幕
```

### 5.4 Voxel 关键全局

| 地址 | 变量 | 说明 |
|------|------|------|
| `0xB2FF78` | `g_VoxelRenderBuffer` | 256×256 渲染缓冲区 |
| `0xB2FF79` | `g_VoxelDepthBuffer` | Z-buffer (65536 B) |
| `0xB45590` | `g_VoxelOffsetTable` | 方向偏移表 |
| `0xB45990` | `g_VoxelShadeTable` | 明暗查表 |
| `0xB41178` | `g_VoxelColorPalette` | 256 色体素调色板 |
| `0xB43184` | `g_VoxelProjection_Width` | 投影宽度 |
| `0xB43180` | `g_VoxelProjection_Height` | 投影高度 |
| `0xB4317C` | `g_VoxelPalette_Lookup1` | 体素调色板查表 |
| `0xB43178` | `g_VoxelPalette_Lookup2` | 体素调色板查表 |

### 5.5 Voxel 关键函数

| 地址 | 名称 | 大小 | 说明 |
|------|------|------|------|
| `0x754CB0` | `Voxel::ProjectionSetup` | — | 设置投影矩阵 |
| `0x753B70` | `VoxelPaletteClass::LoadFromFile` | 91B | voxels.vpl 加载 |
| `0x758A30` | `VoxelPaletteClass::ConvertFromFile` | 147B | 调色板转换 |
| `0x7586F0` | `VoxelAnim::ComputeTransform` | 391B | 动画变换矩阵 |
| `0x759540` | `HVAAnimation::LoadFromFile` | 292B | HVA 文件加载 |
| `0x756DD0` | `VoxelModel::LoadVXLHeader` | 417B | VXL 头解析 |
| `0x756F80` | `VoxelModel::ParseSectionData` | 411B | Section 数据解析 |
| `0x755B30` | `VoxelModel::BuildDrawList` | 180B | 绘制列表 |
| `0x758030` | `VoxelRenderer::RenderFrame` | 446B | 完整帧渲染 |
| `0x7575A0` | `VoxelRenderer::DrawSection` | 491B | 单个 section 渲染 |
| `0x757790` | `VoxelRenderer::DrawSectionLines` | 483B | section 线框 |
| `0x757E70` | `VoxelRenderer::ProcessVoxelData` | 438B | 体素数据处理 |
| `0x758EA0` | `VoxelRenderer::ProjectVertex` | 198B | 顶点投影 |
| `0x759FB0` | `VoxelRenderer::InitializeBuffers` | 299B | 缓冲区初始化 |
| `0x4CAF20` | `VoxelAnimClass::ProcessFrame` | 314B | 帧处理入口 |
| `0x4D02B0` | `VoxelAnimClass::UpdateMatrix` | 215B | 矩阵更新 |

---

## 6. TacticalMap 等距地形渲染

```
TacticalMap::Redraw (0x4F4480)
  │
  ├── 视口裁剪: 计算可见 Cell 范围
  │     └─ TacticalMapClass::SetCameraPosition (0x6D6000)
  │
  ├── 背景 Clear:
  │     └─ DSurface::FillRect(black) 或 地形底色
  │
  ├── 等距绘制 (Z-order: left→right, top→bottom):
  │     for cell_y in visible_rows:
  │       for cell_x in visible_cols:
  │         │
  │         ├── Cell→Screen 坐标转换
  │         │     └─ CoordToCell + CellCoordToPixel
  │         │
  │         ├── 地形 Tile 绘制:
  │         │     ├─ TEM/TEMPERAT/Snow/Urban tileset
  │         │     ├─ Tile SHP 帧选择 (随机草地/悬崖边缘)
  │         │     └─ DSurface::Blit(tile_shp, cell_pos)
  │         │
  │         └── 覆盖层:
  │               ├─ Tiberium/Ore 矿
  │               ├─ Cliff/Road/Wall/River 结构
  │               └─ Smudge/Overlay 贴花
  │
  ├── 对象渲染 (同 cell z-order):
  │     ├─ BuildingClass::Draw → SHP 建筑动画
  │     ├─ UnitClass::Draw → Voxel 或 SHP (取决于类型)
  │     ├─ InfantryClass::Draw → SHP 8 方向选择
  │     └─ AircraftClass::Draw → Voxel/SHP
  │
  ├── 视觉效果:
  │     ├─ AnimClass → 爆炸/火焰/烟雾粒子
  │     ├─ ParticleSystemClass → 粒子效果
  │     ├─ FogOfWar → 战争迷雾灰/黑覆盖
  │     └─ 动态光照 → 核弹闪光/闪电风暴/Chrono
  │
  └── 选中对象覆盖:
        ├─ 血条 (HealthBar)
        ├─ 选中框 (SelectionBox)
        └─ 路径线 (PathLine)
```

---

## 7. HUD/UI 渲染

```
DrawHUD (0x55F1E0)
  │
  ├── 侧边栏 (SidebarClass):
  │     ├─ 建筑/单位/防御生产标签页
  │     ├─ 图标 SHP 渲染 (Ready/Busy/Disabled 状态)
  │     └─ 进度条 (Building/Special)
  │
  ├── 雷达 (RadarClass):
  │     ├─ 地形预览 (缩略图 Blit)
  │     ├─ 单位/建筑白点覆盖
  │     └─ 视图框 (当前可见区域)
  │
  ├── 命令栏 (CommandBar):
  │     ├─ 移动/攻击/停止/部署/警戒 按钮 SHP
  │     └─ 按钮状态: Normal/Hovered/Pressed/Disabled
  │
  ├── 信息面板:
  │     ├─ CreditDisplay → 资金 TextRenderer
  │     ├─ PowerBar → 电力条
  │     └─ 选中对象名称+状态
  │
  ├── Tab 选择器:
  │     └─ 多建筑/单位切换标签
  │
  └── 工具提示 (TooltipClass):
        └─ 鼠标悬浮文字 (GDI→DDraw 表面)
```

---

## 8. 渲染管线总览

```
┌───────────────────────────────────────────────────────────────────────┐
│                        渲染完整流程                                     │
├───────────────────────────────────────────────────────────────────────┤
│                                                                       │
│  WinMain                                                              │
│    ├── InitializeDDraw ×3 ──────────────────┐                        │
│    │     ├── DirectDrawCreate → IDirectDraw7 │                        │
│    │     ├── SetCooperativeLevel             │                        │
│    │     ├── SetDisplayMode                  │                        │
│    │     └── CapabilityCheck → 像素格式      │                        │
│    │                                         │                        │
│    └── DSurface::CreatePrimary ──────────────┤                        │
│          ├── CreateSurface (PRIMARYSURFACE)   │                        │
│          ├── GetSurfaceDesc → RGB 位移/掩码   │                        │
│          └── CreateClipper → SetClipper       │                        │
│                                               │                        │
│  菜单渲染 (MainMenu::Screen):                 │                        │
│    ├── BinkMovieClass::AllocateRenderSurface  │                        │
│    ├── BinkMovieClass::RenderFrameToSurface ──┤                        │
│    │     ├── Lock → BinkCopyToBuffer → Unlock │                        │
│    │     └── BlitToTarget                     │                        │
│    │                                          │                        │
│    └── GDI BUTTON 控件 + 文字标签              │                        │
│                                               │                        │
│  游戏渲染 (每帧):                              │                        │
│    GameFrameLoop → TacticalMap::Redraw ───────┤                        │
│      ├── 等距地形 Tile SHP → DSurface::Blit   │                        │
│      ├── 建筑/单位/步兵 SHP → Blit             │                        │
│      ├── Voxel → g_VoxelRenderBuffer → Blit   │                        │
│      ├── 动画/粒子/迷雾 覆盖                    │                        │
│      ├── 选中框/血条/路径线                    │                        │
│      │                                          │                        │
│      └── DrawHUD ──────────────────────────────┤                        │
│            ├── Sidebar/Radar/CommandBar SHP     │                        │
│            ├── GDI 文字 → TextRenderer           │                        │
│            └── Tooltip 浮层                     │                        │
│                                                  │                        │
│  所有 DDraw 输出: → DSurface_Primary → Flip/Blt  │                        │
│                    → cnc-ddraw (OpenGL/D3D9)     │                        │
│                    → 屏幕                         │                        │
└──────────────────────────────────────────────────────────────────────┘
```

---

## 9. 本次新命名 (渲染链)

### 函数 (27+)

| 地址 | 名称 | 说明 |
|------|------|------|
| `0x4A3E40` | `DDraw::CheckCapabilities` | HW Blit/Overlay 检测 |
| `0x4A4620` | `DDraw::CheckCapabilities` | DDCaps 检测 |
| `0x4BA5A0` | `DSurface::Construct` | DDraw 表面构造 |
| `0x4BA770` | `DSurface::CreatePrimary` | 主表面创建 |
| `0x4BAC60` | `DSurface::CreateBackBuffer` | 后缓冲创建 |
| `0x4BBB00` | `DSurface::BlitStretch` | 拉伸 Blit |
| `0x4333F0` | `BinkMovieClass::RenderFrameToSurface` | Lock→Copy→Unlock→Blit |
| `0x4335E0` | `BinkMovieClass::AllocateRenderSurface` | 分配 BINK 表面 |
| `0x4336C0` | `BinkMovieClass::ReleaseRenderSurface` | 释放 BINK 表面 |
| `0x433770` | `BinkMovieClass::OpenFile` | BinkOpen+音频 |
| `0x433180` | `BinkMovieClass::SetPosition` | 设置渲染位置 |
| `0x69E430` | `LoadSHPFile` | SHP 格式解码 |
| `0x4A38D0` | `LoadFileSHP` | SHP 加载封装 |
| `0x7575A0` | `VoxelRenderer::DrawSection` | 体素 section 绘制 |
| `0x757790` | `VoxelRenderer::DrawSectionLines` | section 线框 |
| `0x758030` | `VoxelRenderer::RenderFrame` | 完整帧渲染 |
| `0x757E70` | `VoxelRenderer::ProcessVoxelData` | 体素数据处理 |
| `0x756DD0` | `VoxelModel::LoadVXLHeader` | VXL 头解析 |
| `0x756F80` | `VoxelModel::ParseSectionData` | Section 解析 |
| `0x7586F0` | `VoxelAnim::ComputeTransform` | 动画变换 |
| `0x759540` | `HVAAnimation::LoadFromFile` | HVA 加载 |
| `0x759670` | `HVAAnimation::ParseFrames` | HVA 帧解析 |
| `0x755B30` | `VoxelModel::BuildDrawList` | 绘制列表 |
| `0x759FB0` | `VoxelRenderer::InitializeBuffers` | 缓冲初始化 |
| `0x758EA0` | `VoxelRenderer::ProjectVertex` | 顶点投影 |
| `0x4CAF20` | `VoxelAnimClass::ProcessFrame` | 帧处理 |
| `0x4D02B0` | `VoxelAnimClass::UpdateMatrix` | 矩阵更新 |

### 全局变量 (20+)

| 地址 | 变量 | 说明 |
|------|------|------|
| `0x8A0094` | `g_lpDirectDraw7` | IDirectDraw7 主对象 |
| `0x8A009C` | `g_DDraw_PrimarySurface` | 主表面 IDDS7* |
| `0x8205D0` | `g_DDraw_PixelFormat` | 像素格式枚举 |
| `0x8A0DD0-DC` | `g_BitShift_Red/Green/Blue` | RGB 位移 |
| `0x8A0DCC` | `g_DDraw_Clipper` | 裁剪器 |
| `0x89FC90` | `g_DDraw_Palette` | 8bpp 调色板 |
| `0x887308` | `DSurface_Primary` | 主表面对象 |
| `0x88730C` | `DSurface_Hidden` | 隐藏表面 |
| `0xB2FF78` | `g_VoxelRenderBuffer` | 体素渲染缓冲 |
| `0xB2FF79` | `g_VoxelDepthBuffer` | 体素 Z-buffer |
| `0xB45590` | `g_VoxelOffsetTable` | 方向偏移表 |
| `0xB45990` | `g_VoxelShadeTable` | 明暗查表 |
| `0xB41178` | `g_VoxelColorPalette` | 体素 256 色调色板 |
