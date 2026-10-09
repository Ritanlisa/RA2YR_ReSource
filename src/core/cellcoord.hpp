// G42.36: CellCoord single authority (0x5657A0). Historically split between
// misc_ext.hpp (class, member fn) and coordinate.hpp (namespace, free fn);
// raw bodies call it qualified with 2 args -> static member, shared header.
#pragma once

namespace gamemd {

class MapClass;
class CellClass;

class CellCoord
{
public:
    int FindPlacementCellsAlt(void* a1);  // 0x0x703590 (G57W20M26 CSP 签名供给)
    virtual ~CellCoord() = default;
    static CellClass* To_CellObj(void* a2, void* a3);  // 0x5657A0 (G57W20M26 重类型: 消费方走 CellClass::copyFlags)
};

} // namespace gamemd
