# 等距投影 & 坐标系统

> **TBD**: 本文档为占位符，待 IDA 逆向坐标转换函数后补充精确数学公式。相关 TODO 见 `docs/todo.md` R1-1。

## 坐标系统层次

| 层次 | 类型 | 说明 |
|------|------|------|
| Lepton | 细粒度 | 游戏内部精度单位 |
| Cell | 格子 | 地图格坐标 (X, Y) |
| Pixel | 屏幕像素 | DDraw 表面坐标 |
| CoordStruct | 世界坐标 | X/Y/Z 三维 |

## 关键转换函数

| 函数 | 地址 | 说明 |
|------|------|------|
| Coord_To_Cell | 0x565730 | 世界坐标→格子坐标 |
| Cell_GetGroundHeight | 0x578080 | 获取格子地面高度 |
| Cell_IsWalkable | 0x6B5F80 | 判断格子是否可通行 |

## 等距投影数学

RA2 使用标准等距投影 (2:1 菱形):
- Cell(x,y) → Screen: `sx = (x - y) * CellWidth/2`, `sy = (x + y) * CellHeight/2`
- Screen → Cell: 逆矩阵变换

## 方向偏移表

`Direction_X_Offsets` @ 0x89F688: int16[8] — 8 方向 X 偏移量

## 地图边界

- `Map_MaxHeight` @ 0x89A1B4
- `Map_CellHeight` @ 0x89A1C0
- `Map_InvalidCoord_X/Y/Z` @ 0x89A178/7C/80
- `Map_BottomRightCell` @ 0xB0B788

## 视口裁剪

计算可见 cell 范围需要 Camera X/Y/Z 和屏幕尺寸，反向投影屏幕四角到 cell 坐标。
