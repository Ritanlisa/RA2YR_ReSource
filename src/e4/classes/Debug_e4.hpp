// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct Debug {
    unsigned char __pad_000;  // 0x0
    char __pad_1[3];  // 0x1
    unsigned char q004;  // 0x4
    char __pad_5[155];  // 0x5
    int q0A0;  // 0xA0
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    char ScrollText(const char * aP1);  // 0x5BD0D0
    int AccumFlags(void *a1 = 0);  // 0x6E61F0
    char Printf();  // 0x5BD1F0
    static int Log();  // 0x4068E0 raw int 无参真身（cdecl stub；0 参调用形态 + Debug_e4.cpp:102 定义匹配）
    static void Log_0(void *a1_1 = 0, void *a2_1 = 0);  // 0x4A4AC0
};
} // namespace gamemd
