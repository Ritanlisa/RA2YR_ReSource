// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct Building {
// --- flat members (BEGIN) ---
    unsigned char q000;  // 0x0
    void* q004;  // 0x4
    void* q008;  // 0x8
    unsigned char q00C;  // 0xC
    unsigned int u32_18;  // 0x18
    unsigned int q024;  // 0x24
    unsigned int q034;  // 0x34
    unsigned int u32_44;  // 0x44
    unsigned int q054;  // 0x54
    unsigned int q068;  // 0x68
    unsigned int u32_70;  // 0x70
    unsigned int q084;  // 0x84
    unsigned int u32_9C;  // 0x9C
    void* q0A0;  // 0xA0
    unsigned char q0A4;  // 0xA4
    unsigned int q104;  // 0x104
    unsigned int u32_11E;  // 0x11E
    unsigned int q130;  // 0x130
    void* q160;  // 0x160
    unsigned char q164;  // 0x164
    unsigned int q260;  // 0x260
    unsigned int q274;  // 0x274
    void* q2A4;  // 0x2A4
    unsigned int tail_2A8;  // 0x2A8
    unsigned int __pad_A4;
    unsigned int __pad_C;
    unsigned int uniqueId0;
// --- flat members (END) ---
    AnimClass * * ComputePosition(AnimClass * aP1);  // 0x425D10
    int GetNthOfType();  // 0x485020
    char GetRenderType();  // 0x772A90
    unsigned int *  GetFoundationSize(unsigned int * a1, unsigned int a2);  // 0x69E7E0
};
} // namespace gamemd
