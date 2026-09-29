// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct GameSettings {
// --- flat members (BEGIN) ---
    unsigned int q4;  // 0x4
    unsigned int q8;  // 0x8
    unsigned int u32_C;  // 0xC
    unsigned int q10;  // 0x10
    unsigned char u8_14;  // 0x14
    unsigned int q18;  // 0x18
    unsigned char u8_1C;  // 0x1C
    unsigned char u8_1D;  // 0x1D
    unsigned char u8_1E;  // 0x1E
    unsigned char u8_1F;  // 0x1F
    unsigned char q020;  // 0x20
    Game * ptr_24;  // 0x24
    unsigned int q025;  // 0x25
    Game * ptr_28;  // 0x28
    unsigned char q030;  // 0x30
    unsigned char u8_35;  // 0x35
    float u32_38;  // 0x38
    float u32_3C;  // 0x3C
    Game * q040;  // 0x40
    unsigned char u8_44;  // 0x44
    unsigned char u8_45;  // 0x45
    unsigned char u8_46;  // 0x46
    unsigned char q048;  // 0x48
    unsigned int u16_4A;  // 0x4A
    unsigned int u32_4C;  // 0x4C
    AbstractClass * ptr_54;  // 0x54
    float q060;  // 0x60
    Game * q064;  // 0x64
    unsigned char q068;  // 0x68
    unsigned char q070;  // 0x70
    unsigned int q074;  // 0x74
    AbstractClass * q084;  // 0x84
    unsigned int u32_94;  // 0x94
    Game * q100;  // 0x100
    unsigned char q104;  // 0x104
    unsigned int q118;  // 0x118
    float q134;  // 0x134
    unsigned int q148;  // 0x148
    float q150;  // 0x150
    unsigned int u32_160;  // 0x160
    unsigned char q260;  // 0x260
    unsigned char q274;  // 0x274
    unsigned int q278;  // 0x278
    unsigned int q280;  // 0x280
    unsigned int q328;  // 0x328
    unsigned int q808;  // 0x808
    unsigned int q850;  // 0x850
    unsigned int q2128;  // 0x2128
    unsigned int q036;
    unsigned char u8_34;
    void* ptr_18;
    void* ptr_4;
    void* ptr_8;
    void* ptr_10;
// --- flat members (END) ---
    AbstractClass * * Read(void *a1 = 0, void *a2 = 0);
    char * FindFlagged();
    void * ParseNetworkAddress();
    void SetScoreVolume(int volume, void *a2 = 0);
};

} // namespace gamemd
