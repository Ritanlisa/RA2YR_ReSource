// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct BufferIOFileClass;  // fix_fwd_type_supply

#ifndef GAMEMD_G2_Voice_DEF  // G42.57w14 twin-guard (shared; first-include wins)
#define GAMEMD_G2_Voice_DEF 1
struct Voice {
// --- flat members (BEGIN) ---
    unsigned int u32_C;  // 0xC
    unsigned int u32_10;  // 0x10
    unsigned int u32_18;  // 0x18
    unsigned char q024;  // 0x24
    unsigned int q029;  // 0x29
    BufferIOFileClass* q02A;  // 0x2A
    unsigned char q02C;  // 0x2C
    unsigned char q035;  // 0x35
    unsigned char q044;  // 0x44
    unsigned int u32_48;  // 0x48
    unsigned int q052;  // 0x52
    unsigned char q068;  // 0x68
    unsigned int u32_90;  // 0x90
    unsigned int u32_A4;  // 0xA4
    void* q0BC;  // 0xBC
    unsigned int u32_D4;  // 0xD4
    unsigned char q104;  // 0x104
    unsigned int q114;  // 0x114
    unsigned int q130;  // 0x130
    unsigned int q144;  // 0x144
    unsigned char q164;  // 0x164
    unsigned int u32_168;  // 0x168
    void* q188;  // 0x188
    unsigned int q304;  // 0x304
    unsigned int q324;  // 0x324
    unsigned int q360;  // 0x360
    unsigned int q530;  // 0x530
    unsigned int q804;  // 0x804
    unsigned char q854;  // 0x854
    unsigned int q864;  // 0x864
    void* q914;  // 0x914
    unsigned int q1328;  // 0x1328
    unsigned int q2148;  // 0x2148
// --- flat members (END) ---
    int DetachChannel();
    int Stop();
};
#endif  // GAMEMD_G2_Voice_DEF

} // namespace gamemd
