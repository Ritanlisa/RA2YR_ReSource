#pragma once

#include <cstdint>
#include "math.hpp"

namespace gamemd {

constexpr int kLeptonsPerCell = 256;
constexpr int kCellCenter = kLeptonsPerCell / 2;

inline CoordStruct Cell2Coord(const CellStruct& cell, int z = 0) noexcept
{
    return CoordStruct(
        cell.X * kLeptonsPerCell + kCellCenter,
        cell.Y * kLeptonsPerCell + kCellCenter,
        z
    );
}

inline CellStruct Coord2Cell(const CoordStruct& crd) noexcept
{
    return CellStruct(
        static_cast<int16_t>(crd.X / kLeptonsPerCell),
        static_cast<int16_t>(crd.Y / kLeptonsPerCell)
    );
}

inline int Distance(const CoordStruct& a, const CoordStruct& b) noexcept
{
    int dx = a.X - b.X;
    if (dx < 0) dx = -dx;
    int dy = a.Y - b.Y;
    if (dy < 0) dy = -dy;

    if (dx > dy)
        return dx + (dy / 2);
    return dy + (dx / 2);
}

inline int CellDistance(const CellStruct& a, const CellStruct& b) noexcept
{
    int dx = a.X - b.X;
    if (dx < 0) dx = -dx;
    int dy = a.Y - b.Y;
    if (dy < 0) dy = -dy;

    if (dx > dy)
        return dx + (dy / 2);
    return dy + (dx / 2);
}

uint8_t Direction8(const CoordStruct& from, const CoordStruct& to) noexcept;
uint8_t Direction32(const CoordStruct& from, const CoordStruct& to) noexcept;

CoordStruct CoordMove(const CoordStruct& start, uint8_t dir32, uint16_t distance) noexcept;

CellStruct AdjacentCell(const CellStruct& cell, uint8_t facing8) noexcept;

bool IsCloseEnough(const CoordStruct& a, const CoordStruct& b, int range) noexcept;  // 0x70D590

} // namespace gamemd
