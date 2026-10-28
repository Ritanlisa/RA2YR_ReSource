// G42.36: CellCoord single authority (0x5657A0). Historically split between
// misc_ext.hpp (class, member fn) and coordinate.hpp (namespace, free fn).
// X181A: To_CellObj restored to the real member form. Binary 0x5657A0 is
// __thiscall with ONE stack arg (ECX = &dword_87F7E8 at 0x4ABE94 / 0x489BF6 /
// 0x4FBF2B; body reads the cell table at [this+0x13C]). Layout = e4 tree alias
// layout, so the twin struct in _tree_alias_e4.hpp is gone (single authority).
#pragma once
#include <cstdint>

namespace gamemd {

class MapClass;
class CellClass;

class CellCoord
{
public:
    unsigned int tail_0;   // 0x0
    char __pad_4[312];     // 0x4
    unsigned int u32_13C;  // 0x13C  (cell table base deref'd by To_CellObj)
    int FindPlacementCellsAlt(void* a1);  // 0x703590 (G57W20M26 CSP 签名供给)
    void* To_CellObj(int16_t* a3);        // 0x5657A0 (signals: void* __thiscall(int16_t*))
};

} // namespace gamemd
