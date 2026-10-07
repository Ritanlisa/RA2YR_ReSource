// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct ScenarioClass;  // fix_fwd_type_supply

struct TacticalMap {
// --- flat members (BEGIN) ---
    char TacticalMap_field_00[4];  // 0x0
    char TacticalMap_field_04[4];  // 0x4
    unsigned int u32_8;  // 0x8
    char TacticalMap_field_10[4];  // 0x10
    unsigned int u32_14;  // 0x14
    float m_TintFactor;  // 0x18
    char TacticalMap_field_1C[4];  // 0x1C
    unsigned int TacticalMap_field_20;  // 0x20
    unsigned int Tactical_field_0xA8;
    unsigned int *__pad_11F;
    unsigned int *__pad_AC;
    unsigned int q104;
    unsigned int u32_11B;
    unsigned int u32_24;
    unsigned int u32_6C0;
    unsigned int vfptr;
    unsigned int *Tactical_field_0x2;
    unsigned int *Tactical_field_0x8;
    unsigned int *Tactical_field_0xC;
    unsigned int Tactical_field_0xDA4;
    unsigned int Tactical_field_0xDB4;
    unsigned int *__pad_0;
    unsigned int *__pad_10;
    unsigned int *__pad_34;
    unsigned int *__pad_DA8;
// --- flat members (END) ---
    ScenarioClass * * ComputeScreenTint();
    _DWORD * Construct(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6);
    void DrawCursor(void *a1, void *a2, void *a3, void *a4);
    int DrawOccupiedRegion();
    void Redraw();
    int RenderAllObjects(int a2);
    unsigned int FillScanlinesOpaque(int a2, int a3, int aP3, int a5);
    void MultiplyByScalar(ObjectClass * aP1, void *a2);
    void* RenderCell(char arg0, AbstractClass * aP2, int a4, int a2);
     int Render(int a2, int a3, int a4);  // G57w10-S raw 0x006D3D10 (was C2597 interim stub)
    AbstractClass * * TacticalMap_Render(int a2);
    unsigned int q_80;  // +0x80 flat supply (P5 provenance)
    unsigned int q_A0;  // +0xA0 flat supply (P5 provenance)
    unsigned int q_170;  // +0x170 flat supply (P5 provenance)
};

} // namespace gamemd
