// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct SHA1 {
// --- flat members (BEGIN) ---

// --- flat members (END) ---
    int *  ProcessBlock(void * a2, int * a3);  // 0x69D8C0
    static void  Transform(int *a1, unsigned int *a2);
    int Reset(int a2, void *a1 = 0);
    static int Compute(SHA1 *pThis, char *a2);
    int ComputeThunk(char *aP1, void *a1 = 0);
    static double SHA1_field_0x04(...);  // plateau: C2039/C3861 stub
    static double SHA1_field_0x0C(...);  // plateau: C2039/C3861 stub
    static double __pad_0(...);  // plateau: C2039/C3861 stub
    static double u32_2C(...);  // plateau: C2039/C3861 stub
};

} // namespace gamemd
