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
    unsigned int TacticalMap_field_20;  // 0x20
    unsigned int TacticalMap_field_040;
    unsigned int Tactical_field_0xA8;
    unsigned int __pad_11F;
    unsigned int __pad_AC;
    unsigned int q104;
    unsigned int q108;
    unsigned short u16_10A;
    unsigned short u16_10C;
    unsigned short u16_10E;
    unsigned int u32_11B;
    unsigned int u32_24;
    unsigned int u32_2B0;
    unsigned int u32_2B4;
    unsigned int u32_2B8;
    unsigned int u32_686;
    unsigned int u32_6C0;
    unsigned int vfptr;
    unsigned int Tactical_field_0x2;
    unsigned int Tactical_field_0x8;
    unsigned int Tactical_field_0xC;
    unsigned int Tactical_field_0xDA4;
    unsigned int Tactical_field_0xDB4;
    unsigned int __pad_0;
    unsigned int __pad_10;
    unsigned int __pad_34;
    unsigned int __pad_DA8;
    unsigned int u32_DE4;
    unsigned int u32_DE8;
    unsigned int u32_DEC;
    unsigned int u32_DF0;
    unsigned int u32_DF4;
    unsigned int u32_DF8;
    unsigned int u32_DFC;
    unsigned int u32_E00;
// --- flat members (END) ---
    ScenarioClass * * ComputeScreenTint();
    int Construct(void *a1 = 0, void *a2 = 0, void *a3 = 0, void *a4 = 0, void *a5 = 0);
    int DrawCursor(void *a1 = 0);
    int DrawOccupiedRegion();
    int Redraw(void *a1 = 0);
    int RenderAllObjects(int a2);
    unsigned int FillScanlinesOpaque(int a2, int a3, void * aP3, int a5);
    void MultiplyByScalar(void * aP1);
    void* RenderCell(char arg0, void * aP2, int a4, int a2);
     double Render(...);  // C2597 interim stub
};

} // namespace gamemd
