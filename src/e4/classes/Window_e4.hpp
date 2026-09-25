// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct Window {
// --- flat members (BEGIN) ---
    char Window_field_00[4];  // 0x0
    unsigned char q004;  // 0x4
    unsigned int u32_8;  // 0x8
    unsigned char q00C;  // 0xC
    unsigned char q010;  // 0x10
    unsigned char q014;  // 0x14
    void* q018;  // 0x18
    unsigned char q01C;  // 0x1C
    unsigned char q020;  // 0x20
    void* q024;  // 0x24
    unsigned char q028;  // 0x28
    unsigned char q02C;  // 0x2C
    unsigned char q040;  // 0x40
    unsigned char q044;  // 0x44
    unsigned char q050;  // 0x50
    void* q054;  // 0x54
    unsigned char q058;  // 0x58
    unsigned char q064;  // 0x64
    unsigned int u32_84;
    unsigned int u32_85;
// --- flat members (END) ---
    char ClampToScreen(int * a1);
    int IsVisible();
};

} // namespace gamemd
