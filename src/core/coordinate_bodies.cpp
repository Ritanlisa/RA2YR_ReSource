// 自动生成 by tools/move_hpp_bodies.py — 函数体自 src/core/coordinate.hpp 迁出
// hpp-impl 门控: 头文件只允许声明（= default 析构亦移出）
#include "coordinate.hpp"

namespace gamemd {
CoordStruct Cell2Coord(const CellStruct& cell, int z) noexcept {
    return CoordStruct(
        cell.X * kLeptonsPerCell + kCellCenter,
        cell.Y * kLeptonsPerCell + kCellCenter,
        z
    );
}

CellStruct Coord2Cell(const CoordStruct& crd) noexcept {
    return CellStruct(
        (int16_t)(crd.X / kLeptonsPerCell),
        (int16_t)(crd.Y / kLeptonsPerCell)
    );
}

int Distance(const CoordStruct& a, const CoordStruct& b) noexcept {
    int dx = a.X - b.X;
    if (dx < 0) dx = -dx;
    int dy = a.Y - b.Y;
    if (dy < 0) dy = -dy;

    if (dx > dy)
        return dx + (dy / 2);
    return dy + (dx / 2);
}

int CellDistance(const CellStruct& a, const CellStruct& b) noexcept {
    int dx = a.X - b.X;
    if (dx < 0) dx = -dx;
    int dy = a.Y - b.Y;
    if (dy < 0) dy = -dy;

    if (dx > dy)
        return dx + (dy / 2);
    return dy + (dx / 2);
}
}

