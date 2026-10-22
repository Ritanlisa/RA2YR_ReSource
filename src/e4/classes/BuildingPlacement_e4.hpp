// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct VectorClass_flat;  // fix_fwd_type_supply

struct BuildingPlacement {
    unsigned int q000;  // 0x0
    int q004;  // 0x4
    int BuildingPlacement_field_0x08;  // 0x8
    int q00C;  // 0xC
    int BuildingPlacement_field_0x10;  // 0x10
    int BuildingPlacement_field_0x14;  // 0x14
    int BuildingPlacement_field_0x18;  // 0x18
    int BuildingPlacement_field_0x1C;  // 0x1C
    int u32_20;  // 0x20
    unsigned short q024;  // 0x24
    unsigned short u32_26;  // 0x26
    char __pad_28[4];  // 0x28
    unsigned char u32_2C;  // 0x2C
    unsigned char q02D;  // 0x2D
    unsigned char q02E;  // 0x2E
    char __pad_2F[1];  // 0x2F
    unsigned int q030;  // 0x30
    unsigned int q034;  // 0x34
    char __pad_38[8];  // 0x38
    unsigned int q040;  // 0x40
    unsigned int u32_44;  // 0x44
    unsigned int u32_48;  // 0x48
    unsigned char u32_4C;  // 0x4C
    char __pad_4D[3];  // 0x4D
    unsigned int u32_50;  // 0x50
    unsigned int q054;  // 0x54
    char __pad_58[40];  // 0x58
    unsigned int u32_80;  // 0x80
    char __pad_84[12];  // 0x84
    unsigned char u32_90;  // 0x90
    char __pad_91[83];  // 0x91
    unsigned int u32_E4;  // 0xE4
    char __pad_E8[51];  // 0xE8
    unsigned char u32_11B;  // 0x11B
    unsigned char u32_11C;  // 0x11C
    char __pad_11D[7];  // 0x11D
    unsigned char u32_124;  // 0x124
    char __pad_125[3];  // 0x125
    unsigned char u32_128;  // 0x128
    char __pad_129[3];  // 0x129
    unsigned char u32_12C;  // 0x12C
    char __pad_12D[3];  // 0x12D
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    static bool IsPlacementFlagSet(BuildingPlacement *pThis, unsigned int a2, char a3);
    char ProcessBuildingPlacementAction();
    unsigned int * FindPosition(int * a0, IUnknown * aP1, IUnknown);  // G57w10-S raw 0x00500200 IUnknown 占位清除
    unsigned int * SelectBuildingPlacementCells(int a2);
    void* Activate(int a2, unsigned int *a3);
    static int ValidateType(BuildingPlacement * aP1, int a2, int a3);
};

} // namespace gamemd
