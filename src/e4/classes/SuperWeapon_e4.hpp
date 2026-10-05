// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct SuperWeapon {
// --- flat members (BEGIN) ---
    void* q004;  // 0x4
    void* q008;  // 0x8
    unsigned int u32_10;  // 0x10
    unsigned int u32_14;  // 0x14
    unsigned int u32_18;  // 0x18
    unsigned int u32_1C;  // 0x1C
    unsigned int q020;  // 0x20
    unsigned int u32_24;  // 0x24
    void* q028;  // 0x28
    unsigned int q030;  // 0x30
    unsigned int q038;  // 0x38
    unsigned int u32_3C;  // 0x3C
    unsigned int q040;  // 0x40
    unsigned int q048;  // 0x48
    unsigned int q054;  // 0x54
    unsigned int q060;  // 0x60
    unsigned int q064;  // 0x64
    unsigned int q068;  // 0x68
    unsigned int u32_6C;  // 0x6C
    unsigned int q078;  // 0x78
    unsigned int q07C;  // 0x7C
    void* q080;  // 0x80
    void* q0AC;  // 0xAC
    unsigned int q0B0;  // 0xB0
    void* q0B4;  // 0xB4
    void* q0C4;  // 0xC4
    unsigned int u32_C8;  // 0xC8
    void* q0F0;  // 0xF0
    unsigned int q100;  // 0x100
    unsigned int q104;  // 0x104
    unsigned int q10C;  // 0x10C
    unsigned int q114;  // 0x114
    void* q128;  // 0x128
    unsigned int q150;  // 0x150
    unsigned int q1EC;  // 0x1EC
    unsigned char u8_1F5;  // 0x1F5
    unsigned int q258;  // 0x258
    unsigned int q264;  // 0x264
// --- flat members (END) ---
    char GetField10();
    char FireSuperWeaponHouseClass(int a2, int a3);  // 0x4fae50
    int UpdateSuperWeaponsOwnedHouseClass();  // 0x50af10
};

} // namespace gamemd
