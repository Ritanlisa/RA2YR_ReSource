// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct SHA1 {
    int __pad_000;  // 0x0
    unsigned int u32_4;  // 0x4
    int q008;  // 0x8
    unsigned char q00C[4];  // 0xC
    int q010;  // 0x10
    int q014;  // 0x14
    unsigned int u32_18;  // 0x18
    char __pad_1C[16];  // 0x1C
    unsigned int u32_2C;  // 0x2C
    unsigned int u32_30;  // 0x30
    unsigned char u8_34;  // 0x34
    char __pad_35[3];  // 0x35
    unsigned int u32_38;  // 0x38
    unsigned int u32_3C;  // 0x3C
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    int *  ProcessBlock(void * a2, int * a3);  // 0x69D8C0
    static void  Transform(int *a1, unsigned int *a2);
    int Reset(int a2, void *a1 = 0);
    static int Compute(SHA1 *pThis, char *a2);
    int ComputeThunk(char *aP1, void *a2 = 0);
};

} // namespace gamemd
