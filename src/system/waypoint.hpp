#pragma once

#include <cstdint>

#include "core/enums.hpp"

namespace gamemd {

#ifndef GAMEMD_USING_CellStruct
#define GAMEMD_USING_CellStruct
using ra2::game::CellStruct;
#endif

class WaypointPathClass;

// IDA: WaypointClass::FindOrAddPath 0x502160, FindOrCreate 0x502460
// Holds up to 12 WaypointPathClass* entries
// sizeof ≥ 0x214 (array at offset 0x210)
class WaypointClass
{
public:
    // 0x502160 FindOrAddPath
    bool IsCoordinateUsed(const CellStruct&) const { return false; }  // 0x5022F0
    // 0x502460 FindOrCreate
    bool FindOrCreate(int, unsigned int*, unsigned char*) { return false; } // 0x502460

    WaypointPathClass* paths[12];     // +0x210 (this+132)
    uint32_t           WaypointClass_field_0;     // +0x000
    uint32_t           WaypointClass_field_4;     // +0x004
    uint32_t           WaypointClass_field_8;     // +0x008
    uint32_t           WaypointClass_field_C;     // +0x00C
    uint32_t           WaypointClass_field_10;    // +0x010
    uint32_t           WaypointClass_field_14;    // +0x014
    // ... padding up to paths array at 0x210
    uint8_t            padding_18[0x1F8]; // +0x018..+0x20F
    uint32_t           activePathIndex;   // +0x20C (this+131)

protected:
    WaypointClass() noexcept = default;
    public:  // symbol-anchor
    // === SYMBOL-ANCHOR (BEGIN) ===
    void* FindByCell(int a1);  // 0x5023b0 -- Waypoint::FindByCell
    void* InitInvalid();  // 0x53ecb0 -- Waypoint::InitInvalid
    int FindCell(int a1);  // 0x763a50 -- Waypoint::FindCell
    // === SYMBOL-ANCHOR (END) ===
};

} // namespace gamemd
