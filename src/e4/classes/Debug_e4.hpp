// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct Debug {
// --- flat members (BEGIN) ---
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    unsigned int u32_10;  // 0x10
    unsigned char q014;  // 0x14
    unsigned int u32_24;  // 0x24
    unsigned int q034;  // 0x34
    unsigned char q038;  // 0x38
    unsigned int u32_58;  // 0x58
    void* q0A0;  // 0xA0
    unsigned int Debug_field_0xA0;
// --- flat members (END) ---
    char  ScrollText(void * aP1);  // 0x5BD0D0
    int AccumFlags(void *a1 = 0);  // 0x6E61F0
    char Printf();  // 0x5BD1F0
    void Log(void *a1 = 0, void *a2 = 0, void *a3 = 0, void *a4 = 0, void *a5 = 0, void *a6 = 0, void *a7 = 0);  // 0x4068E0
    void Log_0(void *a1 = 0, void *a2 = 0);  // 0x4A4AC0
};
} // namespace gamemd
