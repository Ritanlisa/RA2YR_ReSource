#pragma once

#include <cstdint>

#include "core/enums.hpp"
#include "core/math.hpp"   // CellStruct = Vector2D<short>

namespace gamemd {

// CSP: WaypointPathClass matched via T1
class WaypointPathClass;

// IDA: WaypointClass::FindOrAddPath 0x502160, FindOrCreate 0x502460
// Holds up to 12 WaypointPathClass* entries
// sizeof ≥ 0x214 (array at offset 0x210)
class WaypointClass
{
public:
    // required by embedded VectorClass<WaypointClass> vtable instantiation
    // (conservative identity compare; no binary call sites observed)
    bool operator==(const WaypointClass& other) const;
    // 0x502160 FindOrAddPath
    bool IsCoordinateUsed(const CellStruct&) const;  // 0x5022F0
    // 0x502460 FindOrCreate
    bool FindOrCreate(int, unsigned int*, unsigned char*); // 0x502460

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

public:
    WaypointClass() noexcept = default;  // public: VectorClass<WaypointClass> placement-construction requires access
    public:  // symbol-anchor
    // === SYMBOL-ANCHOR (BEGIN) ===
    void* FindByCell(int a1);  // 0x5023b0 -- Waypoint::FindByCell
    void* InitInvalid();  // 0x53ecb0 -- Waypoint::InitInvalid
    int FindCell(int a1);  // 0x763a50 -- Waypoint::FindCell
    // === SYMBOL-ANCHOR (END) ===
// --- e4 declarations (BEGIN) ---
    char FindOrAddPath(unsigned int * a2);  // 0x502160
// --- e4 declarations (END) ---
};

} // namespace gamemd
