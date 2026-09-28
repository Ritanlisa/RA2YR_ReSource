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
// --- flat members (END) ---
    VectorClass_flat * * ProcessBuildingPlacementAction();
    unsigned int * FindPosition(int * a0, void* aP1, IUnknown a3);
    unsigned int * SelectBuildingPlacementCells(int a2);
    void* Activate(int a2, unsigned int * a3);
    static double ValidateType(...);  // C2597 interim stub
};

} // namespace gamemd
