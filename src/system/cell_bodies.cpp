// 自动生成 by tools/move_hpp_bodies.py — 函数体自 src/system/cell.hpp 迁出
// hpp-impl 门控: 头文件只允许声明（= default 析构亦移出）
#include "cell.hpp"

namespace gamemd {
AbstractType CellClass::whatAmI() const { return AbstractType::Cell; }

CoordStruct CellClass::fetchCoordinatesHere() const { return Cell2Coord(mapCoords, height); }

CoordStruct CellClass::Cell2Coord(const CellStruct& cell, int z) {
        return CoordStruct(cell.X * 256 + 128, cell.Y * 256 + 128, z);
    }

CellStruct CellClass::Coord2Cell(const CoordStruct& crd) {
        return CellStruct(static_cast<int16_t>(crd.X / 256), static_cast<int16_t>(crd.Y / 256));
    }

CoordStruct CellClass::GetCenterCoords() const { CoordStruct buf; GetCenterCoords(&buf); return buf; }

bool CellClass::CloakGen_InclHouse(unsigned int idx) const { return (cloakedByHouses & (1u << idx)) != 0; }

void CellClass::CloakGen_AddHouse(unsigned int idx) { cloakedByHouses |= 1u << idx; }

void CellClass::CloakGen_RemHouse(unsigned int idx) { cloakedByHouses &= ~(1u << idx); }

void CellClass::SetRadSite(RadSiteClass* rad) { radSite = rad; }

RadSiteClass* CellClass::GetRadSite() const { return radSite; }

bool CellClass::ContainsBridge() const { return (static_cast<uint32_t>(flags) & 0x8000u) != 0; }

ObjectClass* CellClass::GetContent() const { return ContainsBridge() ? altObject : firstObject; }

int CellClass::GetLevel() const { return level + (ContainsBridge() ? kBridgeLevels : 0); }

CoordStruct CellClass::FixHeight(CoordStruct crd) const {
        if (ContainsBridge()) crd.Z += kBridgeHeight;
        return crd;
    }

CoordStruct CellClass::GetCoordsWithBridge() const {
        return FixHeight(fetchCoordinatesHere());
    }

CoordStruct CellClass::FindInfantrySubposition(const CoordStruct& coords, bool ignore_contents, bool alt, bool use_cell_coords) {
        CoordStruct buf;
        FindInfantrySubposition(&buf, coords, ignore_contents, alt, use_cell_coords);
        return buf;
    }
}

