// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct VectorClass_flat;  // fix_fwd_type_supply

struct BuildingPlacement {
// --- flat members (BEGIN) ---
    void* q000;  // 0x0
    unsigned char q004;  // 0x4
    unsigned char q008;  // 0x8
    unsigned char q00C;  // 0xC
    unsigned int u32_10;  // 0x10
    unsigned char q014;  // 0x14
    unsigned int u32_18;  // 0x18
    unsigned int u32_1C;  // 0x1C
    unsigned int u32_20;  // 0x20
// --- flat members (END) ---
    static bool IsPlacementFlagSet(BuildingPlacement *pThis, unsigned int a2, char a3);  // G57w19k2 raw thiscall static-form supply (member IsPlacementFlagSet -> IsPlacementFlagSet_slot)
    VectorClass_flat * * ProcessBuildingPlacementAction();
    unsigned int * FindPosition(HouseClass *aP1, unsigned int *a2, unsigned int *a3);  // G57w10-S raw 0x00500200 IUnknown 占位清除
    unsigned int * SelectBuildingPlacementCells(int a2);
    void* Activate(int a2, unsigned int * a3);
    static int ValidateType(BuildingPlacement * aP1, int a2, int a3);  // G57w10-S raw 0x00480510 (was C2597 interim stub)
};

} // namespace gamemd
