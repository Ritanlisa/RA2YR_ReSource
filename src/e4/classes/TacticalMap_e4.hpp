// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct ScenarioClass;  // fix_fwd_type_supply

struct TacticalMap {
    int TacticalMap_field_00;  // 0x0
    int TacticalMap_field_04;  // 0x4
    unsigned int __pad_008;  // 0x8
    int TacticalMap_field_0C;  // 0xC
    char TacticalMap_field_10[4];  // 0x10
    unsigned int __pad_014;  // 0x14
    float m_TintFactor;  // 0x18
    int TacticalMap_field_1C;  // 0x1C
    char TacticalMap_field_20[4];  // 0x20
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    ScenarioClass * * ComputeScreenTint();
    unsigned int * Construct(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7 = 0, void *a8 = 0, void *a9 = 0);
    void DrawCursor(void *a1, void *a2, void *a3, void *a4);
    int DrawOccupiedRegion();
    void Redraw();
    int RenderAllObjects(int a2);
    unsigned int FillScanlinesOpaque(int a2, int a3, int a4, int a5);
    void MultiplyByScalar(ObjectClass * aP1, void *a2);
    void* RenderCell(char arg0, AbstractClass * aP2, int a4, int a2);
     int Render(int a2, int a3, int a4, void *a1 = 0);
    AbstractClass * * TacticalMap_Render(int a2);
};

} // namespace gamemd
