#pragma once

#include <cstdint>
#include "math.hpp"
#include "core/cellcoord.hpp"  // G42.36: CellCoord::To_CellObj single authority

namespace gamemd {

// Cell lookup helper (IDA 0x5657A0) now lives in core/cellcoord.hpp.
class MapClass;
class CellClass;

constexpr int kLeptonsPerCell = 256;
constexpr int kCellCenter = kLeptonsPerCell / 2;

// design: likely inlined by compiler (no standalone symbol), no callgraph/git history reference
CoordStruct Cell2Coord(const CellStruct& cell, int z = 0) noexcept;

// design: likely inlined by compiler (no standalone symbol), no callgraph/git history reference
CellStruct Coord2Cell(const CoordStruct& crd) noexcept;

// design: likely inlined by compiler (no standalone symbol), no callgraph/git history reference
int Distance(const CoordStruct& a, const CoordStruct& b) noexcept;

int CellDistance(const CellStruct& a, const CellStruct& b) noexcept;

// unmatched: no callgraph reference and no git history record
uint8_t Direction8(const CoordStruct& from, const CoordStruct& to) noexcept;
// unmatched: no callgraph reference and no git history record
uint8_t Direction32(const CoordStruct& from, const CoordStruct& to) noexcept;

// unmatched: no callgraph reference and no git history record
CoordStruct CoordMove(const CoordStruct& start, uint8_t dir32, uint16_t distance) noexcept;

// unmatched: no callgraph reference and no git history record
CellStruct AdjacentCell(const CellStruct& cell, uint8_t facing8) noexcept;

bool IsCloseEnough(const CoordStruct& a, const CoordStruct& b, int range) noexcept;

} // namespace gamemd
