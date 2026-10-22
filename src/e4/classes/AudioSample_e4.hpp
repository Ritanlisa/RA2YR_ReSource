// GENERATED minimal flat class (fix_c2039_methods)
#pragma once

#include "e4/classes/_fwd_e4.hpp"
#ifndef GAMEMD_E4_FLAT_AudioSample
#define GAMEMD_E4_FLAT_AudioSample 1  // G57c2: suppress minimal_carriers.hpp twin
#endif

namespace gamemd {

struct AudioSample {
    unsigned char __pad_000;  // 0x0
    char __pad_1[3];  // 0x1
    int q004;  // 0x4
    int q008;  // 0x8
    int q00C;  // 0xC
    int q010;  // 0x10
    unsigned int u32_14;  // 0x14
    char __pad_18[16];  // 0x18
    unsigned int u32_28;  // 0x28
    unsigned int u32_2C;  // 0x2C
    unsigned int u32_30;  // 0x30
    unsigned int u32_34;  // 0x34
    unsigned int u32_38;  // 0x38
    char __pad_3C[64];  // 0x3C
    unsigned int u32_7C;  // 0x7C
    char __pad_80[8];  // 0x80
    unsigned int u32_88;  // 0x88
    char __pad_8C[4];  // 0x8C
    unsigned int u32_90;  // 0x90
    unsigned int u32_94;  // 0x94
    unsigned int u32_98;  // 0x98
    unsigned int u32_9C;  // 0x9C
    unsigned int u32_A0;  // 0xA0
    unsigned int u32_A4;  // 0xA4
    unsigned int u32_A8;  // 0xA8
    char __pad_AC[4];  // 0xAC
    unsigned int u32_B0;  // 0xB0
    unsigned int u32_B4;  // 0xB4
    unsigned int u32_B8;  // 0xB8
    unsigned int u32_BC;  // 0xBC
    unsigned int u32_C0;  // 0xC0
    char __pad_C4[152];  // 0xC4
    unsigned int u32_15C;  // 0x15C
    unsigned int u32_160;  // 0x160
    unsigned int u32_164;  // 0x164
    unsigned int u32_168;  // 0x168
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    int Destructor(void *a1 = 0);
    int IsBuffering(void *a1 = 0);
    void InitLinkedList(void *a1 = 0);  // 0x408840
};

} // namespace gamemd
