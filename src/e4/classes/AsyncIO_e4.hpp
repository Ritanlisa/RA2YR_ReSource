// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct AsyncIO {
#pragma pack(push, 1)  // X60: binary-packed layout
    char __pad_0[24];  // 0x0
    unsigned int u32_18;  // 0x18
    unsigned int u32_1C;  // 0x1C
    unsigned int u32_20;  // 0x20
    unsigned int q024;  // 0x24
    unsigned int q028;  // 0x28
    char __pad_2C[20];  // 0x2C
    unsigned int q040;  // 0x40
    char __pad_44[8];  // 0x44
    unsigned int u32_4C;  // 0x4C
    unsigned char q050;  // 0x50
    unsigned char u8_51;  // 0x51
    char __pad_52[2];  // 0x52
    unsigned int q054;  // 0x54
    char __pad_58[4];  // 0x58
    unsigned int u32_5C;  // 0x5C
    char __pad_60[4];  // 0x60
    unsigned int q064;  // 0x64
    char __pad_68[24];  // 0x68
    unsigned int q080;  // 0x80
    char __pad_84[14];  // 0x84
    unsigned int q092;  // 0x92
    char __pad_96[130];  // 0x96
    unsigned int q118;  // 0x118
    char __pad_11C[13];  // 0x11C
    unsigned char q129;  // 0x129
    char __pad_12A[28];  // 0x12A
    unsigned int q146;  // 0x146
    char __pad_14A[54];  // 0x14A
    unsigned int u32_180;  // 0x180
    char __pad_184[66];  // 0x184
    unsigned char u32_1C6;  // 0x1C6
    char __pad_1C7[123];  // 0x1C7
    unsigned char q0242;  // 0x242
    char __pad_243[61];  // 0x243
    unsigned int q280;  // 0x280
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    char Shutdown(void *a1 = 0);
    int Read(void *a1 = 0, void *a2 = 0, void *a3 = 0);
    int WaitCompletion(void *a1 = 0);
#pragma pack(pop)
};

} // namespace gamemd
