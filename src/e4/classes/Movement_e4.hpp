// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct Movement {
// --- flat members (BEGIN) ---
    char Movement_field_00[4];  // 0x0
// --- flat members (END) ---
    int * DivideAndStoreScaled(int * a2, int a3);
    void CalcVelocity(IUnknown * aP0, unsigned int * a1, double a3, IUnknown * aP3, IUnknown * aP4, IUnknown * aP5, char a7, char a8, char a9);
    unsigned int * Check(unsigned int * a2, unsigned short * a3, void *a3);
    static double CompareAbsCoords(...);  // C2597 interim stub
};

} // namespace gamemd
