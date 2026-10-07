// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct Movement {
    static void UpdateLocomotion(void *aP1, void *a2);  // 0x5B2A30 raw: void __thiscall sub_5B2A30(double*, __int16*)  // G57w10 r5 D-classbody supply (raw-anchored)

// --- flat members (BEGIN) ---
    int Movement_field_00;  // 0x0
// --- flat members (END) ---
    int * DivideAndStoreScaled(int * a2, int a3);
    int CalcVelocity(double *a1, Vector3 *a2, double a3, void **a4, __int16 *a5, char a6, char a7, char a8, char a9);  // G57w10-S raw 0x005B20F0 IUnknown 占位清除
    unsigned int * Check(unsigned int * a2, unsigned short * a3, void *a3_2);
    static char CompareAbsCoords(Movement * aP1, __int16 *a2, __int16 *a3);  // G57w10-S raw 0x005B29C0 (was C2597 interim stub)
};

} // namespace gamemd
