// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

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
    unsigned int BuildingPlacement_field_0x04;
    unsigned int BuildingPlacement_field_0x0C;
    unsigned int BuildingPlacement_field_0x20;
    unsigned int IsPlacementFlagSet;
    unsigned int Object_field_0x30;
    unsigned int RenderBuildingPlacementShadow;
    unsigned int *__pad_0;
    unsigned int q0046;
    unsigned int q054;
    unsigned int u32_184;
    unsigned int u32_204;
    unsigned int u32_2C;
    unsigned int u32_44;
    unsigned int u32_48;
    unsigned int u32_4C;
    unsigned int u32_90;
// --- flat members (END) ---
struct VectorClass_flat;  // fix_fwd_type_supply
    VectorClass_flat * * ProcessBuildingPlacementAction();
    unsigned int * FindPosition(int * a0, IUnknown * aP1, IUnknown a3);
    unsigned int * SelectBuildingPlacementCells(int a2);
    void* Activate(int a2, unsigned int * a3);
    static double ValidateType(...);  // C2597 interim stub
};

} // namespace gamemd
