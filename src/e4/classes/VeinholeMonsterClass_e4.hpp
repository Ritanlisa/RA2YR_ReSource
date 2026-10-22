// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct VeinholeMonsterClass {
    void * ptr_0;  // 0x0
    void * ptr_4;  // 0x4
    void * ptr_8;  // 0x8
    void * ptr_C;  // 0xC
    unsigned int __pad_010;  // 0x10
    int q014;  // 0x14
    int q018;  // 0x18
    int q01C;  // 0x1C
    int q020;  // 0x20
    int q024;  // 0x24
    int q028;  // 0x28
    char __pad_2C[64];  // 0x2C
    unsigned int u32_6C;  // 0x6C
    char __pad_70[60];  // 0x70
    unsigned int u32_AC;  // 0xAC
    unsigned int u32_B0;  // 0xB0
    unsigned int u32_B4;  // 0xB4
    unsigned int u32_B8;  // 0xB8
    unsigned int u32_BC;  // 0xBC
    unsigned int u32_C0;  // 0xC0
    unsigned int u32_C4;  // 0xC4
    unsigned int u32_C8;  // 0xC8
    unsigned int u32_CC;  // 0xCC
    unsigned int u32_D0;  // 0xD0
    unsigned char u8_D4;  // 0xD4
    char __pad_D5[3];  // 0xD5
    unsigned int u32_D8;  // 0xD8
    char __pad_DC[4];  // 0xDC
    unsigned int u32_E0;  // 0xE0
    unsigned int u32_E4;  // 0xE4
    unsigned int u32_E8;  // 0xE8
    unsigned int u32_EC;  // 0xEC
    char __pad_F0[4];  // 0xF0
    unsigned int u32_F4;  // 0xF4
    unsigned short u16_F8;  // 0xF8
    unsigned short u16_FA;  // 0xFA
    unsigned int u32_FC;  // 0xFC
    unsigned char u8_100;  // 0x100
    unsigned char u8_101;  // 0x101
    char __pad_102[2];  // 0x102
    unsigned int u32_104;  // 0x104
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    VeinholeMonsterClass * SpreadTiberium(char a2);
    int CheckStatus();
    int StubReturn264();
    int StubReturn63();
    int Update(TechnoTypeClass * aP0, int * a1, int aP2, void *a4);
    int ddtor(int a1, unsigned int * a2);
    void UpdateVeinholeMonster();  // G42.39 supply
};

} // namespace gamemd
