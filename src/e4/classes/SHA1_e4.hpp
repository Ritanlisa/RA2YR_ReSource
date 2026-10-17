// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct SHA1 {
    int __pad_000;  // 0x0
    unsigned int SHA1_field_0x04;  // 0x4
    int SHA1_field_0x08;  // 0x8
    unsigned char q00C[4];  // 0xC
    int SHA1_field_0x10;  // 0x10
    int SHA1_field_0x14;  // 0x14
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    int *  ProcessBlock(void * a2, int * a3);  // 0x69D8C0
    static void  Transform(int *a1, unsigned int *a2);
    int Reset(int a2, void *a1 = 0);
    static int Compute(SHA1 *pThis, char *a2);
    int ComputeThunk(char *aP1, void *a2 = 0);
};

} // namespace gamemd
