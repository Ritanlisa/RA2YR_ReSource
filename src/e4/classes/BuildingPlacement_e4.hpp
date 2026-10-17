// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct VectorClass_flat;  // fix_fwd_type_supply

struct BuildingPlacement {
    unsigned int __pad_0;  // 0x0
    int BuildingPlacement_field_0x04;  // 0x4
    int BuildingPlacement_field_0x08;  // 0x8
    unsigned int BuildingPlacement_field_0x0C;  // 0xC
    int BuildingPlacement_field_0x10;  // 0x10
    int BuildingPlacement_field_0x14;  // 0x14
    int BuildingPlacement_field_0x18;  // 0x18
    int BuildingPlacement_field_0x1C;  // 0x1C
    unsigned int BuildingPlacement_field_0x20;  // 0x20
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    static bool IsPlacementFlagSet(BuildingPlacement *pThis, unsigned int a2, char a3);
    VectorClass_flat * * ProcessBuildingPlacementAction();
    unsigned int * FindPosition(int * a0, IUnknown * aP1, IUnknown);  // G57w10-S raw 0x00500200 IUnknown 占位清除
    unsigned int * SelectBuildingPlacementCells(int a2);
    void* Activate(int a2, unsigned int *a3);
    static int ValidateType(BuildingPlacement * aP1, int a2, int a3);
};

} // namespace gamemd
