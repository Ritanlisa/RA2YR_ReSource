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
    char TacticalMap_field_0C[4];  // 0xC
    char TacticalMap_field_10[4];  // 0x10
    unsigned int u32_14;  // 0x14
    float m_TintFactor;  // 0x18
    unsigned char u8_19;  // 0x19
    char TacticalMap_field_1C[4];  // 0x1C
    char TacticalMap_field_20[4];  // 0x20
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
    unsigned int q0A8;  // 0xA8 (offset-truth)
    unsigned int q0AC;  // 0xAC (offset-truth)
    unsigned int u32_104;  // 0x104 (offset-truth)
    unsigned int u32_108;  // 0x108 (offset-truth)
    unsigned char u32_10A;  // 0x10A (offset-truth)
    unsigned int u32_10C;  // 0x10C (offset-truth)
    unsigned char u32_10E;  // 0x10E (offset-truth)
    unsigned char u32_11B;  // 0x11B (offset-truth)
    unsigned int u32_24;  // 0x24 (offset-truth)
    unsigned int u32_2B0;  // 0x2B0 (offset-truth)
    unsigned int u32_2B4;  // 0x2B4 (offset-truth)
    unsigned int u32_2B8;  // 0x2B8 (offset-truth)
};

} // namespace gamemd
