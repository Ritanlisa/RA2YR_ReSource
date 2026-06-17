#pragma once

#include <cstdint>

#include "core/enums.hpp"
#include "object/abstract.hpp"

namespace gamemd {

#ifndef GAMEMD_USING_CoordStruct
#define GAMEMD_USING_CoordStruct
using ra2::game::CoordStruct;
#endif

class UnitClass;
class TechnoClass;

// IDA: standalone class (no COM), ctor 0x4C1E10, dtor 0x4C2C10
// Visual effect: Tesla/electric bolt between two points
class EBolt
{
public:
    // SetOwner: stores owner ptr and weapon index (called from Fire path)
    void SetOwner(UnitClass* owner, int weaponIdx) {}
    // 0x4C1E50 ClearOwner
    void ClearOwner() {}
    // 0x4C2B40 GetSourceCoords
    CoordStruct* GetSourceCoords(CoordStruct* out) const { return out; }
    CoordStruct  GetSourceCoords() const { CoordStruct b; GetSourceCoords(&b); return b; }
    // 0x4C2A60 Fire
    void Fire(const CoordStruct&, const CoordStruct&, uint32_t) {}

    CoordStruct    Point1;          // +0x00
    CoordStruct    Point2;          // +0x0C
    uint32_t       field_18;      // +0x18
    int32_t        Random;          // +0x1C
    TechnoClass*   Owner;           // +0x20
    int32_t        WeaponSlot;      // +0x24
    int32_t        Lifetime;        // +0x28
    bool           AlternateColor;  // +0x2C

protected:
    EBolt() noexcept = default;
    ~EBolt() noexcept = default;
};

} // namespace gamemd
