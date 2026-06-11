# DSurface — DirectDraw7 Surface 类层次文档

## Surface 类层次 vtable 映射 (IDA 已确认)

```
Surface (抽象基类, vtable 0x7e2198, 38 entries)
 └─ XSurface (默认实现, vtable 0x7e2104, 继承大部分)
     ├─ BSurface (软件缓冲区, vtable 0x7e2070, 覆盖 Lock/GetBytesPerPixel/GetPitch)
     └─ DSurface (DirectDraw7, vtable 0x7e85d4, 覆盖 20项)
```

---

## DSurface 成员偏移 (构造函数 0x4BA5A0 确认)

| 偏移 | 成员 | 说明 |
|------|------|------|
| +0x04 | Width | 继承自 Surface |
| +0x08 | Height | 继承自 Surface |
| +0x0C | LockCount | 继承自 XSurface |
| +0x10 | BytesPerPixel | DSurface 成员 |
| +0x14 | LockedBuffer | lpSurface 指针 |
| +0x18 | Allocated | bool |
| +0x19 | VRAMmed | bool |
| +0x1C | IDirectDrawSurface7* | DDraw 表面 |
| +0x20 | DDSURFACEDESC2* | DDraw 描述符 (0x6C bytes, 由构造函数 new) |

---

## DSurface vtable (38 entries, 全部已命名)

| 索引 | 偏移 | 函数 | 大小 | 说明 |
|-----|------|------|------|------|
| [0] | 0x00 | scalar_dtor | — | 析构 |
| [1] | 0x04 | DSurface_BlitWhole | 23B | 委托 XSurface |
| [2] | 0x08 | DSurface_BlitPart | 75B | 裁剪后 Blit |
| [3] | 0x0C | DSurface_Blit | 1303B | **DirectDraw Blt** (offset20) |
| [4] | 0x10 | DSurface_FillRectEx | 526B | DDBLT_COLORFILL |
| [5] | 0x14 | DSurface_FillRect | 43B | → FillRectEx |
| [6] | 0x18 | XSurface_Fill | 51B | 继承 |
| [7] | 0x1C | DSurface_FillRectWithFlags | 711B | CPU alpha混合填充 |
| [8] | 0x20 | XSurface_DrawEllipseOutline | 1478B | 中点椭圆 |
| [9] | 0x24 | XSurface_SetPixel | 89B | |
| [10] | 0x28 | XSurface_GetPixel | 80B | |
| [11] | 0x2C | XSurface_DrawLineEx | 685B | Bresenham |
| [12] | 0x30 | XSurface_DrawLine | 48B | |
| [13] | 0x34 | DSurface_DrawLineZBuf | 2583B | **Z-Buffer直线** |
| [14] | 0x38 | DSurface_DrawLineModulated | 2735B | 读-改-写直线 |
| [15] | 0x3C | DSurface_DrawLineFaded | 6064B | 渐变直线 |
| [16] | 0x40 | DSurface_DrawLineZBufColored | 2754B | Z-Buffer着色 |
| [17] | 0x44 | XSurface_WalkLine | 511B | Bresenham遍历器 |
| [18] | 0x48 | XSurface_DrawDashedLine | 621B | 虚线模板 |
| [19] | 0x4C | DSurface_DrawDashedLineStipple | 1758B | DSurface虚线 |
| [20] | 0x50 | DSurface_DrawStippledRect | 1537B | 模板矩形 |
| [21] | 0x54 | XSurface_DrawRectEx | 158B | |
| [22] | 0x58 | XSurface_DrawRect | 43B | |
| [23] | 0x5C | DSurface_Lock | 315B | IDDS7::Lock (offset100) |
| [24] | 0x60 | DSurface_Unlock | 154B | IDDS7::Unlock (offset128) |
| [25] | 0x64 | DSurface_CanLock | 95B | 探测可锁性 |
| [26] | 0x68 | Surface_vt_entry_68 | 5B | 返回 true |
| [27] | 0x6C | Surface_IsLocked | 11B | LockCount > 0 |
| [28] | 0x70 | DSurface_GetBytesPerPixel | 4B | |
| [29] | 0x74 | DSurface_GetPitch | 7B | DDSURFACEDESC2.dwWidth |
| [30] | 0x78 | Surface_GetRect | 36B | |
| [31] | 0x7C | Surface_GetWidth | 4B | |
| [32] | 0x80 | Surface_GetHeight | 4B | |
| [33] | 0x84 | DSurface_IsDSurface | 3B | returns true |
| [34] | 0x88 | XSurface_PutPixel | 130B | 单像素写入+边界 |
| [35] | 0x8C | XSurface_GetPixelAtCoords | 119B | 单像素读取+边界 |
| [36] | 0x90 | DSurface_DrawGradientLine | 1499B | 渐变颜色线 |
| [37] | 0x94 | DSurface_CheckBltStatus | 17B | IDDS7::GetBltStatus |

---

## IDirectDrawSurface7 vtable 确认使用

| DSurface 调用 | IDDS7 offset | 方法 |
|-------------|-------------|------|
| Blit [3] | 20 (vtable[5]) | **Blt** |
| FillRectEx [4] | 20 (vtable[5]) | Blt (DDBLT_COLORFILL) |
| CheckBltStatus [37] | 52 (vtable[13]) | **GetBltStatus** |
| 构造/GetPitch | 88 (vtable[22]) | **GetSurfaceDesc** |
| Lock [23] | 96 (vtable[24]) | **IsLost** |
| Lock [23] | 100 (vtable[25]) | **Lock** |
| Lock [23] | 108 (vtable[27]) | **Restore** |
| Unlock [24] | 128 (vtable[32]) | **Unlock** |

---

## DDraw 全局变量

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
