// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct PlayerClass {
    unsigned char __pad_000;  // 0x0
    char __pad_1[3];  // 0x1
    int q004;  // 0x4
    unsigned int u32_8;  // 0x8
    int q00C;  // 0xC
    int q010;  // 0x10
    int q014;  // 0x14
    int q018;  // 0x18
    int q01C;  // 0x1C
    int q020;  // 0x20
    int q024;  // 0x24
    int q028;  // 0x28
    int q02C;  // 0x2C
    char __pad_30[36];  // 0x30
    unsigned int u32_54;  // 0x54
    char __pad_58[8];  // 0x58
    unsigned int u32_60;  // 0x60
    char __pad_64[29];  // 0x64
    unsigned char u8_81;  // 0x81
    char __pad_82[46];  // 0x82
    unsigned int u32_B0;  // 0xB0
    unsigned int u32_B4;  // 0xB4
    char __pad_B8[3288];  // 0xB8
    unsigned int u32_D90;  // 0xD90
    unsigned int u32_D94;  // 0xD94
    unsigned int u32_D98;  // 0xD98
    unsigned int u32_D9C;  // 0xD9C
    char __pad_DA0[16];  // 0xDA0
    unsigned int u32_DB0;  // 0xDB0
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    bool IsValidIndex(int a1);
    char AssignPlayerIndex();
    int SetHouse(int a2);
    int HasPlayers(void *a1 = 0);  // 0x6abac0
};

} // namespace gamemd
