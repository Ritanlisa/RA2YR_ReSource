# VXL/HVA 格式文档

> **TBD**: 本文档为占位符，待 IDA 逆向 VXL/HVA 解析代码后补充完整格式规格。相关 TODO 见 `docs/todo.md` R1-6。

## 概述

RA2/YR 使用 Voxel 3D 模型渲染单位（坦克、飞行器等）。格式由 Westwood Studios 设计。

## VXL 格式

- Header: sections 描述
- Body: voxel array (3D 体素数据)  
- Action frame offsets

## HVA 动画格式

- Section 变换矩阵
- 帧动画数据
- 每个 section 独立动画

## 渲染方法 (原版)

- 软件 Voxel→2D 投影
- 8 方向 ray-cast → 像素缓冲 → DDraw 表面
- 每个方向预渲染缓存

## 降级方案

Voxel 对象可用 SHP 占位 (从 expandmd01.mix 提取对应 SHP)

## 相关文件

- `entity/voxel_anim.cpp` — 待实现
- VXL 文件位于 expandmd01.mix 等容器中
