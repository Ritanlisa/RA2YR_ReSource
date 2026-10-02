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
    char ScrollText(const char *aP1);  // 0x5BD0D0
    int AccumFlags(void *a1_1);  // 0x6E61F0
    char Printf();  // 0x5BD1F0
    static int Log();  // 0x4068E0
    static void Log_0();  // 0x4A4AC0
};
} // namespace gamemd
