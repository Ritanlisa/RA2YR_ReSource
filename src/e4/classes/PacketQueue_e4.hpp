// GENERATED minimal flat class (fix_c2039_methods)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct PacketQueue {
    int __pad_000;  // 0x0
    int q004;  // 0x4
    char __pad_8[28];  // 0x8
    unsigned int u32_24;  // 0x24
    unsigned int u32_28;  // 0x28
    char __pad_2C[4];  // 0x2C
    unsigned int u32_30;  // 0x30
    unsigned int u32_34;  // 0x34
    unsigned int u32_38;  // 0x38
    char __pad_3C[4];  // 0x3C
    unsigned int u32_40;  // 0x40
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    int ExtractEntry(void * a2, unsigned int * a3, int a4, void * a5, unsigned int * a6, unsigned short * a7, void *a1 = 0);
    int ReleaseEntry(void *a1, unsigned int *a2, int aP3, void *a4, unsigned int *a5);
};

} // namespace gamemd
