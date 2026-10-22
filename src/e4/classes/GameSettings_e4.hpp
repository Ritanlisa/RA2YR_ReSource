// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct Game;  // fix_fwd_type_supply

struct GameSettings {
#pragma pack(push, 1)  // X60: binary-packed layout
    unsigned int u32_0;  // 0x0
    AbstractClass * ptr_4;  // 0x4
    AbstractClass * ptr_8;  // 0x8
    unsigned int u32_C;  // 0xC
    AbstractClass * ptr_10;  // 0x10
    unsigned char u8_14;  // 0x14
    char __pad_15[3];  // 0x15
    AbstractClass * ptr_18;  // 0x18
    unsigned char u8_1C;  // 0x1C
    unsigned char u8_1D;  // 0x1D
    unsigned char u8_1E;  // 0x1E
    unsigned char u8_1F;  // 0x1F
    unsigned char u8_20;  // 0x20
    char __pad_21[3];  // 0x21
    Game * ptr_24;  // 0x24
    Game * ptr_28;  // 0x28
    char __pad_2C[8];  // 0x2C
    unsigned char u8_34;  // 0x34
    unsigned char u8_35;  // 0x35
    unsigned char u8_36;  // 0x36
    char __pad_37[13];  // 0x37
    unsigned char Audio;  // 0x44
    unsigned char Audio_d;  // 0x45
    unsigned char Audio_2;  // 0x46
    char __pad_47[1];  // 0x47
    unsigned short u16_48;  // 0x48
    unsigned int u32_4A;  // 0x4A
    char __pad_4E[2];  // 0x4E
    unsigned int u32_50;  // 0x50
    char ptr_54[2];  // 0x54
    float q056;  // 0x56
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    int Read(void *a1 = 0, void *a2 = 0, void *a3 = 0);
    static char * FindFlagged();
    void * ParseNetworkAddress();
    int SetScoreVolume(int volume, void *a2, void *a3);
#pragma pack(pop)
};

} // namespace gamemd
