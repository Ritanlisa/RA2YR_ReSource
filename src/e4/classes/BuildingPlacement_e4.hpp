// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct VectorClass_flat;  // fix_fwd_type_supply

struct BuildingPlacement {
// --- flat members (BEGIN) ---

// --- flat members (END) ---
    static bool IsPlacementFlagSet(BuildingPlacement *pThis, unsigned int a2, char a3);
    VectorClass_flat * * ProcessBuildingPlacementAction();
    unsigned int * FindPosition(int * a0, IUnknown * aP1, IUnknown);  // G57w10-S raw 0x00500200 IUnknown 占位清除
    unsigned int * SelectBuildingPlacementCells(int a2);
    void* Activate(int a2, unsigned int *a3);
    static int ValidateType(BuildingPlacement * aP1, int a2, int a3);
    unsigned char q0046;  // 0x46 (offset-truth)
    unsigned char q030;  // 0x30 (ml)
    void* q054;  // 0x54 (ml) [X30:type_map]
    unsigned int u32_184;  // 0x184 (offset-truth)
    unsigned int u32_204;  // 0x204 (offset-truth)
    unsigned int u32_2C;  // 0x2C (offset-truth)
    unsigned int u32_44;  // 0x44 (offset-truth)
    unsigned int u32_48;  // 0x48 (offset-truth)
    unsigned int u32_4C;  // 0x4C (offset-truth)
    unsigned int u32_90;  // 0x90 (offset-truth)

    int q004;  // X10 supply (member_lookup)
    int q00C;  // X10 supply (member_lookup)
    IUnknown* q040;  // X10 supply (member_lookup)
    int u32_20;  // X10 supply (member_lookup)
    unsigned int u32_50;  // X10 supply (member_lookup)
    unsigned int u32_80;  // X10 supply (member_lookup)
    int __pad_000;  // 0x0 [X30:type_map]
unsigned int BuildingPlacement_field_0x20;  // 0x20 [X35-L7 kind=unsigned int]


    unsigned int BuildingPlacement_field_0x0C;  // 0xC [X55 W3 supply (render vocab)]
    int BuildingPlacement_field_0x04;  // 0x4 [X55 W3 supply (render vocab)]
    unsigned int __pad_0;  // 0x0 [X55 W3 supply (render vocab)]
};

} // namespace gamemd
