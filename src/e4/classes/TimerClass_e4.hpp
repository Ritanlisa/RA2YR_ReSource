// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct TimerClass {
// --- flat members (BEGIN) ---
    unsigned char q000;  // 0x0
    unsigned int u32_4;  // 0x4
    unsigned int u32_8;  // 0x8
    unsigned int u32_C;  // 0xC
    unsigned int q10;  // 0x10
    unsigned int q004;
    unsigned int q030;
    unsigned int q034;
    unsigned int q044;
    unsigned int q054;
    unsigned short u16_41;
    unsigned short u16_47;
    unsigned int u32_14;
    unsigned int u32_18;
    unsigned int u32_184;
    unsigned int u32_185;
    unsigned int u32_186;
    unsigned int u32_187;
    unsigned int u32_188;
    unsigned int u32_189;
    unsigned int u32_1C;
    unsigned int u32_1C0;
    unsigned int u32_1C1;
    unsigned int u32_1C2;
    unsigned int u32_1C3;
    unsigned int u32_200;
    unsigned int u32_201;
    unsigned int u32_202;
    unsigned int u32_38;
    unsigned int u32_3C;
    unsigned int u32_4C;
    unsigned int u32_58;
    unsigned int u32_80;
    unsigned int u32_90;
    unsigned int u32_C2;
    unsigned int u32_C3;
    unsigned int q010;
// --- flat members (END) ---
    BOOL Active();  // 0x4C9480
    char * Construct(int a2,  int a3,  TechnoTypeClass * aP3,  int a5,  int a6,  int a7,  int a8,  char a9,  int a10,  int a11,  int a12,  int a13,  char a14,  char a15,  int a16,  int a17);    // 0x54FE60
    signed int GetRemaining();  // 0x5CEAD0
    void StartIfIdle();  // 0x5CEB20
};
} // namespace gamemd
