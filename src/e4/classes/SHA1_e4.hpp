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

    unsigned char q00C[4];  /* SHA1 */  // X10 supply (member_lookup)

    void* q034;  // X10 supply (member_lookup)
    int u32_18;  // X10 supply (member_lookup)
    unsigned int u32_2C;  // X10 supply (member_lookup)
    unsigned int u32_30;  // X10 supply (member_lookup)
};

} // namespace gamemd
