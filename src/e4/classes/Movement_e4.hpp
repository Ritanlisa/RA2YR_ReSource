// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct Movement {
// --- flat members (BEGIN) ---
    char Movement_field_00[4];  // 0x0
// --- flat members (END) ---
    static void UpdateLocomotion(void *aP1, void *a2);
    int * DivideAndStoreScaled(int * a2, int a3);
    int CalcVelocity(double *a1, Vector3 *a2, double a3, void **a4, int16_t *a5, char a6, char a7, char a8, char a9);  // G57w10-S raw 0x005B20F0 IUnknown 占位清除
    unsigned int * Check(unsigned int *a2, unsigned short *a3_2, void *a1 = 0);
    static char CompareAbsCoords(Movement * aP1, int16_t *a2, int16_t *a3);
};

} // namespace gamemd
