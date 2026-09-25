#pragma once

#include <cstdint>

#include "core/enums.hpp"
#include "core/math.hpp"
#include "object/abstract.hpp"
#include "object/foot.hpp"

namespace gamemd {

class UnitClass;  // full definition in structure/unit.hpp

#ifndef GAMEMD_USING_CoordStruct
#define GAMEMD_USING_CoordStruct
using ra2::game::CoordStruct;
#endif

// EBolt — electric bolt effect attached to a unit weapon slot.
// Real class definition lives in IDA around 0x6FC030 area (Fire/GetSourceCoords).
class EBolt {
void SetOwner(UnitClass* owner, int weaponIdx);
    void ClearOwner();
    CoordStruct* GetSourceCoords(CoordStruct* out) const;
    CoordStruct GetSourceCoords() const;
    void Fire(const CoordStruct& from, const CoordStruct& to, uint32_t flags);
};

} // namespace gamemd
