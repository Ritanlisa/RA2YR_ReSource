// GENERATED minimal flat class (fix_c2039_methods)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct BufferIO {
    int __pad_000;  // 0x0
    int q004;  // 0x4
    int q008;  // 0x8
    unsigned int u32_C;  // 0xC
    unsigned int u32_10;  // 0x10
    char __pad_14[18];  // 0x14
    unsigned char u8_26;  // 0x26
    char __pad_27[1];  // 0x27
    unsigned char u8_28;  // 0x28
    unsigned char u8_29;  // 0x29
    char __pad_2A[6];  // 0x2A
    unsigned int u32_30;  // 0x30
    char __pad_34[8];  // 0x34
    unsigned int u32_3C;  // 0x3C
    unsigned int u32_40;  // 0x40
    unsigned int u32_44;  // 0x44
    char __pad_48[4];  // 0x48
    unsigned int u32_4C;  // 0x4C
    unsigned int u32_50;  // 0x50
    char __pad_54[12];  // 0x54
    unsigned int u32_60;  // 0x60
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    int Cleanup(int a2, void *a1 = 0);
    int Flush(void *a1 = 0);
};

} // namespace gamemd
