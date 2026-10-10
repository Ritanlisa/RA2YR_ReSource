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
    unsigned int * FindPosition(HouseClass *aP1, unsigned int *a2, unsigned int *a3);  // G57w10-S raw 0x00500200 IUnknown 占位清除
    unsigned int * SelectBuildingPlacementCells(int a2);
    void* Activate(int a2, unsigned int *a3);
    static int ValidateType(BuildingPlacement * aP1, int a2, int a3);
    unsigned char q0046;  // 0x46 (offset-truth)
    unsigned char q030;  // 0x30 (ml)
    unsigned int q054;  // 0x54 (ml)
    unsigned int u32_184;  // 0x184 (offset-truth)
    unsigned int u32_204;  // 0x204 (offset-truth)
    unsigned int u32_2C;  // 0x2C (offset-truth)
    unsigned int u32_44;  // 0x44 (offset-truth)
    unsigned int u32_48;  // 0x48 (offset-truth)
    unsigned int u32_4C;  // 0x4C (offset-truth)
    unsigned int u32_90;  // 0x90 (offset-truth)
    static double BuildingPlacement_field_0x20(...);  // plateau: C2039/C3861 stub
    static double Object_field_0x30(...);  // plateau: C2039/C3861 stub
};

} // namespace gamemd
