# cnc-ddraw 集成文档

## 架构

```
Phase 1 (当前):
  gamemd.exe ──DirectDraw API──▶ ddraw.dll (cnc-ddraw) ──▶ OpenGL/D3D9/GDI ──▶ 屏幕
                                  ↑
                                  用于现代系统兼容运行

Phase 2 (远期):
  gamemd.exe ──▶ 现代渲染引擎 (Vulkan/D3D12) ──▶ 屏幕
                  ↑ cnc-ddraw 被完全取代
```

## 关键配置 (ddraw.ini)

| 配置项 | 推荐值 | 说明 |
|--------|--------|------|
| `nonexclusive` | `true` | 让 GDI 子窗口能叠加到 DDraw 表面 |
| `d3d9_filter` | `0` | 最近邻过滤 (消除 BINK 模糊) |
| `maxfps` | `60` | 帧率限制 (nonexclusive 下可能不生效) |

## 兼容性注意事项

- `nonexclusive=true` 是让 GDI 子窗口能叠加到 DDraw 表面的**必要条件**
  - cnc-ddraw 用 OpenGL/D3D9 渲染，默认覆盖所有 GDI
  - 这不是修改游戏逻辑，是配置软件渲染器模拟真实 DirectDraw 硬件行为
- `d3d9_filter=0` 消除 bilinear 过滤造成的 BINK 模糊
- `maxfps=60` 在 `nonexclusive=true` 下可能不生效 (Flip 不阻塞)
- cnc-ddraw 翻转链后缓冲不支持 `Lock()` — 需渲染到独立离屏表面

## MinGW 交叉编译 (Linux → ddraw.dll)

```bash
sudo apt install gcc-mingw-w64-i686
cd cnc-ddraw
make _WIN32_WINNT=0x0400
# 产物: ddraw.dll (32-bit Win32 PE)
```

用途: Phase 1 调试阶段，Wine 下用此 ddraw.dll 作为 DirectDraw 兼容层运行 gamemd.exe。

## DirectDraw 初始化

EXE 使用标准 Windows SDK DirectDraw 7 接口:
- `DirectDrawCreateEx` → `IDirectDraw7`
- `SetCooperativeLevel` (DDSCL_EXCLUSIVE | DDSCL_FULLSCREEN)
- `CreateSurface` (primary + backbuffer flip chain)
- 渲染循环: Lock → Write pixels → Unlock → Flip

## 相关全局变量

| 地址 | 名称 | 说明 |
|------|------|------|
| 0x8a0094 | `g_lpDirectDraw7` | IDirectDraw7 主对象 |
| 0x89F978 | `g_DDraw_Initialized` | DDraw 初始化完成 |
| 0xA8ED80 | `g_DDraw_Active` | DDraw 活动标志 |
