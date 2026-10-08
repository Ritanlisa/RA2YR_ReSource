// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct Game;  // fix_fwd_type_supply

struct GameSettings {
// --- flat members (BEGIN) ---
    unsigned int q4;  // 0x4
    unsigned int u32_C;  // 0xC
    unsigned char q020;  // 0x20
    Game * ptr_28;  // 0x28
    unsigned char q030;  // 0x30
    float u32_38;  // 0x38
    float u32_3C;  // 0x3C
    Game * q040;  // 0x40
    unsigned char u8_45;  // 0x45
    unsigned char q048;  // 0x48
    unsigned int u32_4C;  // 0x4C
    AbstractClass * ptr_54;  // 0x54
    float q060;  // 0x60
    Game * q064;  // 0x64
    unsigned char q068;  // 0x68
    unsigned int u32_94;  // 0x94
    Game * q100;  // 0x100
    unsigned char q104;  // 0x104
    float q150;  // 0x150
    unsigned int q280;  // 0x280
    void* ptr_4;
    void* ptr_8;
// --- flat members (END) ---
    int Read();  // G42.35f: ida truth 0x5FA620 = int __thiscall Read(this) 0-param
    static char * FindFlagged();
    void * ParseNetworkAddress();
    int SetScoreVolume(int volume, void *a2, void *a3);
};

} // namespace gamemd
