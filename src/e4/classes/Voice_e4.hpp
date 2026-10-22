// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct BufferIOFileClass;  // fix_fwd_type_supply

#ifndef GAMEMD_G2_Voice_DEF  // G42.57w14 twin-guard (shared; first-include wins)
#define GAMEMD_G2_Voice_DEF 1
struct Voice {
#pragma pack(push, 1)  // X60: binary-packed layout
    char __pad_0[12];  // 0x0
    unsigned int u32_C;  // 0xC
    unsigned int u32_10;  // 0x10
    char __pad_14[4];  // 0x14
    unsigned int u32_18;  // 0x18
    char __pad_1C[8];  // 0x1C
    unsigned char q024;  // 0x24
    char __pad_25[4];  // 0x25
    unsigned char q029;  // 0x29
    char q02A[2];  // 0x2A
    unsigned char q02C;  // 0x2C
    char __pad_2D[8];  // 0x2D
    unsigned char q035;  // 0x35
    char __pad_36[14];  // 0x36
    unsigned char q044;  // 0x44
    char __pad_45[3];  // 0x45
    unsigned int u32_48;  // 0x48
    char __pad_4C[6];  // 0x4C
    unsigned int q052;  // 0x52
    char __pad_56[18];  // 0x56
    unsigned char q068;  // 0x68
    char __pad_69[39];  // 0x69
    unsigned int u32_90;  // 0x90
    char __pad_94[16];  // 0x94
    unsigned int u32_A4;  // 0xA4
    char __pad_A8[8];  // 0xA8
    unsigned int u32_B0;  // 0xB0
    char __pad_B4[8];  // 0xB4
    void * q0BC;  // 0xBC
    char __pad_C0[20];  // 0xC0
    unsigned int u32_D4;  // 0xD4
    char __pad_D8[44];  // 0xD8
    unsigned char q104;  // 0x104
    char __pad_105[15];  // 0x105
    unsigned int q114;  // 0x114
    char __pad_118[24];  // 0x118
    unsigned int q130;  // 0x130
    char __pad_134[16];  // 0x134
    unsigned int q144;  // 0x144
    char __pad_148[28];  // 0x148
    unsigned char q164;  // 0x164
    char __pad_165[3];  // 0x165
    unsigned int u32_168;  // 0x168
    char __pad_16C[28];  // 0x16C
    void * q188;  // 0x188
    char __pad_18C[376];  // 0x18C
    unsigned int q304;  // 0x304
    char __pad_308[28];  // 0x308
    unsigned int q324;  // 0x324
    char __pad_328[56];  // 0x328
    unsigned int q360;  // 0x360
    char __pad_364[460];  // 0x364
    unsigned int q530;  // 0x530
    char __pad_534[720];  // 0x534
    unsigned int q804;  // 0x804
    char __pad_808[76];  // 0x808
    unsigned char q854;  // 0x854
    char __pad_855[15];  // 0x855
    unsigned int q864;  // 0x864
    char __pad_868[172];  // 0x868
    void * q914;  // 0x914
    char __pad_918[2576];  // 0x918
    unsigned int q1328;  // 0x1328
    char __pad_132C[3612];  // 0x132C
    unsigned int q2148;  // 0x2148
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    int DetachChannel();
    int Stop(void *a1 = 0, void *a2 = 0);
#pragma pack(pop)
};
#endif  // GAMEMD_G2_Voice_DEF

} // namespace gamemd
