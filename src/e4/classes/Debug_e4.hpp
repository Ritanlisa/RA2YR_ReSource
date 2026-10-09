// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct Debug {
// --- flat members (BEGIN) ---
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    unsigned char q008;  // 0x8
    unsigned int u32_C;  // 0xC
    unsigned int u32_10;  // 0x10
    unsigned char q014;  // 0x14
    unsigned char q018;  // 0x18
    unsigned int u32_24;  // 0x24
    unsigned char q028;  // 0x28
    unsigned int q034;  // 0x34
    unsigned char q038;  // 0x38
    unsigned char q03C;  // 0x3C
    unsigned int u32_44;  // 0x44
    unsigned int u32_48;  // 0x48
    unsigned int u32_4C;  // 0x4C
    unsigned char q050;  // 0x50
    unsigned int u32_58;  // 0x58
    unsigned char q05C;  // 0x5C
    void* q0A0;  // 0xA0
// --- flat members (END) ---
    char ScrollText(const char *aP1);  // 0x5BD0D0
    int AccumFlags();  // 0x6E61F0
    char Printf();  // 0x5BD1F0
    static int Log();  // 0x4068E0 raw int 无参真身（cdecl stub；0 参调用形态 + Debug_e4.cpp:102 定义匹配）
    static int Log(const char *fmt, ...);  // 0x4068E0 变参调用形态（G57w4: 100+ call sites pass fmt）
    static void Log_0();  // 0x4A4AC0
    static void Log_0(void *aP1);  // 0x4A4AC0 1参形态（DDraw 0x4a3f8a/0x4a3fac）
    static void Log_0(void *aP1, void *aP2);  // 0x4A4AC0 2参（DDraw 0x4a3edc static 式；Debug_e4.cpp:114 类外定义匹配）
    unsigned int u32_2710;  // 0x2710 (offset-truth supply)
    unsigned int u32_271C;  // 0x271C (offset-truth supply)
    unsigned int u32_2720;  // 0x2720 (offset-truth supply)
    unsigned int u32_2724;  // 0x2724 (offset-truth supply)
    unsigned int u32_2728;  // 0x2728 (offset-truth supply)
    unsigned int u32_272C;  // 0x272C (offset-truth supply)
    unsigned int u32_2734;  // 0x2734 (offset-truth supply)
};
} // namespace gamemd
