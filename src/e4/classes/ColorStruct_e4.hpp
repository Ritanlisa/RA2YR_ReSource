// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

#ifndef GAMEMD_G2_ColorStruct_DEF  // G42.57w14 twin-guard (shared; first-include wins)
#define GAMEMD_G2_ColorStruct_DEF 1
struct ColorStruct {
// --- flat members (BEGIN) ---
    void* q010;  // 0x10
    void* q014;  // 0x14
    void* q020;  // 0x20
    void* q030;  // 0x30
    void* q034;  // 0x34
    void* q048;  // 0x48
    void* q050;  // 0x50
    void* q054;  // 0x54
    void* q080;  // 0x80
    void* q084;  // 0x84
    void* q114;  // 0x114
    void* q128;  // 0x128
    void* q130;  // 0x130
    void* q304;  // 0x304
    void* q630;  // 0x630
    void* q774;  // 0x774
    void* q1584;  // 0x1584
    void* q1634;  // 0x1634
    void* q1908;  // 0x1908
    void* q5508;  // 0x5508
    void* q5684;  // 0x5684
    unsigned int q6000;  // 0x6000
    void* q6408;  // 0x6408
// --- flat members (END) ---
    int SetRGB(uint8_t a2, uint8_t a3, uint8_t a4, void *a4_1 = 0);
    unsigned int *q000;  // 0x0 (canon-mt)
    unsigned int u32_8;  // 0x8
    unsigned int u32_4;  // 0x4
    char __pad_000[16];  // 0x0 [X30:member_lookup]
    unsigned int field_10;  // [X30:default]
    unsigned int field_14;  // [X30:default]
    unsigned int field_30;  // [X30:default]
    unsigned int field_34;  // [X30:default]
    unsigned int field_50;  // [X30:default]
    unsigned int field_54;  // [X30:default]


    unsigned int __pad_0;  // 0x0 [X55 W3 supply (render vocab)]
};
#endif  // GAMEMD_G2_ColorStruct_DEF

} // namespace gamemd
