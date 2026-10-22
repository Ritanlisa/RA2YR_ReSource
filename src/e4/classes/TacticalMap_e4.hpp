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
    unsigned short TacticalMap_field_10;  // 0x10
    char __pad_12[2];  // 0x12
    int TacticalMap_field_14;  // 0x14
    float m_TintFactor;  // 0x18
    char __pad_1C[8];  // 0x1C
    unsigned char q024;  // 0x24
    char __pad_25[15];  // 0x25
    unsigned int q034;  // 0x34
    char __pad_38[16];  // 0x38
    unsigned int q048;  // 0x48
    char __pad_4C[68];  // 0x4C
    unsigned int q090;  // 0x90
    char __pad_94[16];  // 0x94
    unsigned char q0A4;  // 0xA4
    char __pad_A5[7];  // 0xA5
    unsigned char q0AC;  // 0xAC
    unsigned char q0AD;  // 0xAD
    char __pad_AE[2];  // 0xAE
    unsigned char u32_B0;  // 0xB0
    char __pad_B1[3];  // 0xB1
    unsigned char u32_B4;  // 0xB4
    char __pad_B5[3];  // 0xB5
    unsigned char q0B8;  // 0xB8
    char __pad_B9[3];  // 0xB9
    unsigned char q0BC;  // 0xBC
    char __pad_BD[3];  // 0xBD
    unsigned char q0C0;  // 0xC0
    char __pad_C1[3];  // 0xC1
    unsigned char q0C4;  // 0xC4
    char __pad_C5[3];  // 0xC5
    unsigned char q0C8;  // 0xC8
    char __pad_C9[3];  // 0xC9
    unsigned char q0CC;  // 0xCC
    char __pad_CD[3];  // 0xCD
    unsigned char q0D0;  // 0xD0
    char __pad_D1[3];  // 0xD1
    unsigned char q0D4;  // 0xD4
    char __pad_D5[3];  // 0xD5
    unsigned int q0D8;  // 0xD8
    char __pad_DC[4];  // 0xDC
    unsigned int u32_E0;  // 0xE0
    unsigned int q0E4;  // 0xE4
    char __pad_E8[28];  // 0xE8
    unsigned int u32_104;  // 0x104
    unsigned short u32_108;  // 0x108
    unsigned short u32_10A;  // 0x10A
    unsigned short u32_10C;  // 0x10C
    unsigned short u32_10E;  // 0x10E
    char __pad_110[11];  // 0x110
    unsigned char u32_11B;  // 0x11B
    char __pad_11C[3];  // 0x11C
    unsigned char q11F;  // 0x11F
    unsigned int q120;  // 0x120
    char __pad_124[32];  // 0x124
    unsigned int q144;  // 0x144
    char __pad_148[32];  // 0x148
    unsigned int q168;  // 0x168
    char __pad_16C[332];  // 0x16C
    unsigned int q2B8;  // 0x2B8
    char __pad_2BC[2728];  // 0x2BC
    unsigned char qD64;  // 0xD64
    char __pad_D65[3];  // 0xD65
    unsigned char qD68;  // 0xD68
    char __pad_D69[3];  // 0xD69
    unsigned char qD6C;  // 0xD6C
    char __pad_D6D[3];  // 0xD6D
    unsigned char qD70;  // 0xD70
    char __pad_D71[3];  // 0xD71
    unsigned char qD74;  // 0xD74
    char __pad_D75[3];  // 0xD75
    unsigned char qD78;  // 0xD78
    char __pad_D79[3];  // 0xD79
    unsigned char qD7C;  // 0xD7C
    unsigned char qD7D;  // 0xD7D
    unsigned char qD7E;  // 0xD7E
    char __pad_D7F[1];  // 0xD7F
    unsigned char qD80;  // 0xD80
    char __pad_D81[3];  // 0xD81
    unsigned char qD84;  // 0xD84
    char __pad_D85[3];  // 0xD85
    unsigned char qD88;  // 0xD88
    char __pad_D89[7];  // 0xD89
    unsigned int u32_D90;  // 0xD90
    unsigned int u32_D94;  // 0xD94
    unsigned int u32_D98;  // 0xD98
    unsigned int u32_D9C;  // 0xD9C
    char __pad_DA0[8];  // 0xDA0
    unsigned int qDA8;  // 0xDA8
    unsigned char qDAC;  // 0xDAC
    char __pad_DAD[3];  // 0xDAD
    unsigned char qDB0;  // 0xDB0
    char __pad_DB1[51];  // 0xDB1
    unsigned int u32_DE4;  // 0xDE4
    unsigned int qDE8;  // 0xDE8
    unsigned int qDEC;  // 0xDEC
    unsigned int qDF0;  // 0xDF0
    unsigned int qDF4;  // 0xDF4
    unsigned int qDF8;  // 0xDF8
    unsigned int qDFC;  // 0xDFC
    unsigned int qE00;  // 0xE00
    unsigned int qE04;  // 0xE04
    unsigned int qE08;  // 0xE08
    unsigned int qE0C;  // 0xE0C
    unsigned int qE10;  // 0xE10
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
