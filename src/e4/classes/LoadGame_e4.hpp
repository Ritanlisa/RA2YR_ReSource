// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct LoadGame {
// --- flat members (BEGIN) ---
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    unsigned char q008;  // 0x8
    unsigned char q00C;  // 0xC
    unsigned char q010;  // 0x10
    unsigned char q014;  // 0x14
    unsigned char q018;  // 0x18
    unsigned char u8_19;  // 0x19
    unsigned char q01C;  // 0x1C
    unsigned char q020;  // 0x20
    unsigned char q024;  // 0x24
    unsigned char q028;  // 0x28
    unsigned char q02C;  // 0x2C
    unsigned char q030;  // 0x30
    unsigned char q034;  // 0x34
    unsigned char q040;  // 0x40
    unsigned char q044;  // 0x44
    unsigned char q048;  // 0x48
    unsigned char q050;  // 0x50
    unsigned char q054;  // 0x54
    unsigned char q064;  // 0x64
    unsigned char q068;  // 0x68
    unsigned char q080;  // 0x80
    unsigned char q084;  // 0x84
    unsigned char q100;  // 0x100
    unsigned char q104;  // 0x104
    unsigned char q114;  // 0x114
    unsigned char q128;  // 0x128
    unsigned char q130;  // 0x130
    unsigned char q260;  // 0x260
    char qA10[4];  // 0xA10
    unsigned int qA13;  // 0xA13
    unsigned char qA28;  // 0xA28
    unsigned char qA2C;  // 0xA2C
    unsigned char qAF4;  // 0xAF4
    unsigned char qAF8;  // 0xAF8
    unsigned char q2600;  // 0x2600
    unsigned char q2604;  // 0x2604
    unsigned int Items;
    unsigned int LoadBlock68;
    unsigned int q0042;
// --- flat members (END) ---
    int LoadBlock300(int a2);
    int LoadMagicAndAudio();
    int LoadPointArray(int a2);
    int LoadTriggerEvents();
    int RemoveItem(int a2);
    int RestoreAudioState();
    int Start();
};

} // namespace gamemd
