// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct TacticalMap {
// --- flat members (BEGIN) ---
    char TacticalMap_field_00[4];  // 0x0
    char TacticalMap_field_04[4];  // 0x4
    unsigned int u32_8;  // 0x8
    char TacticalMap_field_0C[4];  // 0xC
    char TacticalMap_field_10[4];  // 0x10
    unsigned int u32_14;  // 0x14
    float m_TintFactor;  // 0x18
    unsigned char u8_19;  // 0x19
    char TacticalMap_field_1C[4];  // 0x1C
    char TacticalMap_field_20[4];  // 0x20
// --- flat members (END) ---
    ScenarioClass * * ComputeScreenTint();
    int Construct();
    int DrawCursor();
    int DrawOccupiedRegion();
    int Redraw();
    int RenderAllObjects(int a2);
    unsigned int FillScanlinesOpaque(int a2, int a3, TacticalMap * aP3, int a5);
    void MultiplyByScalar(ObjectClass * aP1);
    void* RenderCell(char arg0, AbstractClass * aP2, int a4, int a2);
};

} // namespace gamemd
