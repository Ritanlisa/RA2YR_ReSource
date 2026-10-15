// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct ScenarioClass;  // fix_fwd_type_supply

struct TacticalMap {
// --- flat members (BEGIN) ---
    char TacticalMap_field_00[4];  // 0x0
    void* TacticalMap_field_04;  // 0x4 [X30:type_map]
    int TacticalMap_field_0C;  // 0xC [X30:type_map]
    char TacticalMap_field_10[4];  // 0x10
    float m_TintFactor;  // 0x18
    int TacticalMap_field_1C;  // 0x1C [X30:type_map]
    char TacticalMap_field_20[4];  // 0x20
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
    void* u32_24;  // 0x24 (offset-truth) [X30:type_map]
    unsigned int u32_2B0;  // 0x2B0 (offset-truth)
    unsigned int u32_2B4;  // 0x2B4 (offset-truth)
    unsigned int u32_2B8;  // 0x2B8 (offset-truth)

    unsigned char u32_214[4];  /* __int16 */  // X10 supply (member_lookup)
    unsigned char u32_21C[4];  /* __int16 */  // X10 supply (member_lookup)
    unsigned int u32_B0;  // X10 supply (member_lookup)
    unsigned int u32_B4;  // X10 supply (member_lookup)
    unsigned int u32_D90;  // X10 supply (member_lookup)
    unsigned int u32_D94;  // X10 supply (member_lookup)
    unsigned int u32_D98;  // X10 supply (member_lookup)
    unsigned int u32_D9C;  // X10 supply (member_lookup)
    unsigned int u32_DE4;  // X10 supply (member_lookup)
    unsigned int u32_E0;  // X10 supply (member_lookup)
    void* __pad_008;  // 0x8 [X30:type_map]
    void* __pad_014;  // 0x14 [X30:type_map]
    unsigned int vfptr;  // [X30:default]
};

} // namespace gamemd
