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
    void* q114;  // 0x114
    void* q128;  // 0x128
    void* q130;  // 0x130
    unsigned char *__pad_0;  // 0x0
// --- flat members (END) ---
    int SetRGB(uint8_t a2, uint8_t a3, uint8_t a4);
    void* field_54;  // 0x54
    void* field_50;  // 0x50
    void* field_34;  // 0x34
    void* field_30;  // 0x30
    void* field_14;  // 0x14
    void* field_10;  // 0x10
};
#endif  // GAMEMD_G2_ColorStruct_DEF

} // namespace gamemd
