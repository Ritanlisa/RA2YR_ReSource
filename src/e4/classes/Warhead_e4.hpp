// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct Warhead {
// --- flat members (BEGIN) ---
    void* q004;  // 0x4
    void* q008;  // 0x8
    unsigned int u32_C;  // 0xC
    unsigned int u32_10;  // 0x10
    unsigned int q013;  // 0x13
    unsigned int u32_14;  // 0x14
    bool q01B;  // 0x1B
    unsigned char q01C;  // 0x1C
    unsigned int q020;  // 0x20
    unsigned int u32_24;  // 0x24
    unsigned int u32_2C;  // 0x2C
    unsigned int u32_30;  // 0x30
    void* q034;  // 0x34
    unsigned int u32_38;  // 0x38
    unsigned char u8_3C;  // 0x3C
    void* q040;  // 0x40
    Warhead* q044;  // 0x44
    unsigned int q048;  // 0x48
    unsigned int q054;  // 0x54
    unsigned int u32_58;  // 0x58
    unsigned int u32_5C;  // 0x5C
    unsigned int u32_60;  // 0x60
    unsigned int u32_64;  // 0x64
    unsigned int u32_68;  // 0x68
    unsigned int u32_6C;  // 0x6C
    unsigned int q084;  // 0x84
    unsigned int q088;  // 0x88
    double u64_9C;  // 0x9C
    unsigned int u32_A0;  // 0xA0
    unsigned int u32_A4;  // 0xA4
    void* q0AC;  // 0xAC
    unsigned int u32_B0;  // 0xB0
    unsigned int q100;  // 0x100
    unsigned int q104;  // 0x104
    unsigned int q108;  // 0x108
    unsigned int u32_10C;  // 0x10C
    unsigned int q114;  // 0x114
    void* q130;  // 0x130
    unsigned int q134;  // 0x134
    unsigned int q150;  // 0x150
    void* q158;  // 0x158
    unsigned int q160;  // 0x160
    unsigned int q164;  // 0x164
    unsigned int u32_1A3;  // 0x1A3
    void* q1C4;  // 0x1C4
    void* q1C8;  // 0x1C8
    void* q214;  // 0x214
    unsigned int u32_240;  // 0x240
    unsigned int q260;  // 0x260
    unsigned int q264;  // 0x264
    unsigned int q268;  // 0x268
    void* q274;  // 0x274
    unsigned int u32_290;  // 0x290
    void* q294;  // 0x294
    void* q2AC;  // 0x2AC
    void* q2BC;  // 0x2BC
    unsigned int q310;  // 0x310
    void* q344;  // 0x344
    void* q350;  // 0x350
    void* q370;  // 0x370
    unsigned int q374;  // 0x374
    unsigned int u32_380;  // 0x380
    unsigned int q598;  // 0x598
    unsigned int q608;  // 0x608
    void* q628;  // 0x628
    void* q660;  // 0x660
    unsigned int u32_66C;  // 0x66C
    void* q684;  // 0x684
    void* q69C;  // 0x69C
    void* q700;  // 0x700
    double q834;  // 0x834
    void* q848;  // 0x848
    unsigned int q850;  // 0x850
    unsigned int q854;  // 0x854
    void* q880;  // 0x880
    unsigned int q884;  // 0x884
    void* q1110;  // 0x1110
    void* q1258;  // 0x1258
    void* q1330;  // 0x1330
    unsigned int q1398;  // 0x1398
    unsigned int q1558;  // 0x1558
    unsigned int q1644;  // 0x1644
    void* q1668;  // 0x1668
    unsigned int u32_19B0;  // 0x19B0
    void* q2120;  // 0x2120
    unsigned int q2198;  // 0x2198
    void* q4358;  // 0x4358
    void* q4368;  // 0x4368
    void* q5494;  // 0x5494
    unsigned int q5700;  // 0x5700
    void* q5778;  // 0x5778
    void* q6034;  // 0x6034
    void* q8480;  // 0x8480
    unsigned int q8600;  // 0x8600
    void* q18070;  // 0x18070
    unsigned int q139890;  // 0x139890
// --- flat members (END) ---
    int ApplyDamage(ObjectClass * aP1);
    int ApplyPostDamageEffects();
    int GetWarheadSound(int a2);
    int ProcessDamageArea();
    int RemoveFromDamageList(int a2);
    unsigned char u32_C2;  // 0xC2 (offset-truth supply)
};

} // namespace gamemd
