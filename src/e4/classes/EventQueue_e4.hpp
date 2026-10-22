// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct EventQueue {
    unsigned int u32_0;  // 0x0
    unsigned int u32_4;  // 0x4
    unsigned int u16_8;  // 0x8
    unsigned int u32_C;  // 0xC
    unsigned int u32_10;  // 0x10
    char __pad_14[4];  // 0x14
    unsigned int q018;  // 0x18
    char __pad_1C[8];  // 0x1C
    unsigned int q024;  // 0x24
    char __pad_28[12];  // 0x28
    unsigned int q034;  // 0x34
    char __pad_38[732];  // 0x38
    unsigned int q314;  // 0x314
    unsigned int q318;  // 0x318
    char __pad_31C[296];  // 0x31C
    unsigned int u32_444;  // 0x444
    char __pad_448[52];  // 0x448
    unsigned int u32_47C;  // 0x47C
    char __pad_480[776];  // 0x480
    void * q788;  // 0x788
    char __pad_78C[4508];  // 0x78C
    void * q1928;  // 0x1928
    char __pad_192C[12];  // 0x192C
    void * q1938;  // 0x1938
    char __pad_193C[19204];  // 0x193C
    void * q6440;  // 0x6440
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    static int CheckPosition(EventQueue *pThis);
    int16_t Check(void *a1 = 0, void *a2 = 0, void *a3 = 0);
    int16_t Process(void *a1 = 0);
    short Read(void *a1 = 0, void *a2 = 0, void *a3 = 0);
};

} // namespace gamemd
