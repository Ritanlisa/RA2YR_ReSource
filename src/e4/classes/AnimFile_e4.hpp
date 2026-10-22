// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

#ifndef GAMEMD_ANIMFILE_DECLARED  // G42 first-wins (misc_ext.hpp tree twin co-included in misc TUs)
#define GAMEMD_ANIMFILE_DECLARED
struct AnimFile {
    void * ptr_0;  // 0x0
    unsigned int __pad_004;  // 0x4
    int q008;  // 0x8
    int q00C;  // 0xC
    int q010;  // 0x10
    int q014;  // 0x14
    int q018;  // 0x18
    char __pad_1C[104];  // 0x1C
    unsigned int u32_84;  // 0x84
    unsigned char u8_88;  // 0x88
    unsigned char u8_89;  // 0x89
    char __pad_8A[8];  // 0x8A
    unsigned short u16_92;  // 0x92
    unsigned int u32_94;  // 0x94
    char __pad_98[14];  // 0x98
    unsigned char u8_A6;  // 0xA6
    unsigned char u8_A7;  // 0xA7
    char __pad_A8[36];  // 0xA8
    unsigned int u32_CC;  // 0xCC
    char __pad_D0[3388];  // 0xD0
    unsigned int u32_E0C;  // 0xE0C
    unsigned int u32_E10;  // 0xE10
    unsigned int u32_E14;  // 0xE14
    unsigned int u32_E18;  // 0xE18
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    AnimFile * QueryInterface(void * Block, char a2);
    char * Stub();
};
#endif  // GAMEMD_ANIMFILE_DECLARED

} // namespace gamemd
