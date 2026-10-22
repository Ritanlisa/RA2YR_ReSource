// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct TimerClass {
    unsigned char __pad_000;  // 0x0
    char __pad_1[3];  // 0x1
    unsigned int u32_4;  // 0x4
    unsigned int u32_8;  // 0x8
    unsigned int u32_C;  // 0xC
    unsigned int u32_10;  // 0x10
    unsigned int u32_14;  // 0x14
    unsigned int u32_18;  // 0x18
    unsigned int u32_1C;  // 0x1C
    unsigned char q020;  // 0x20
    unsigned char q021;  // 0x21
    char __pad_22[2];  // 0x22
    unsigned int q024;  // 0x24
    char __pad_28[8];  // 0x28
    unsigned int u32_30;  // 0x30
    unsigned int u32_34;  // 0x34
    unsigned int u32_38;  // 0x38
    unsigned int u32_3C;  // 0x3C
    unsigned char q040;  // 0x40
    unsigned char u32_41;  // 0x41
    unsigned char q042;  // 0x42
    unsigned char q043;  // 0x43
    unsigned char u32_44;  // 0x44
    unsigned char q045;  // 0x45
    unsigned char q046;  // 0x46
    unsigned char u32_47;  // 0x47
    unsigned char q048;  // 0x48
    unsigned char q049;  // 0x49
    char __pad_4A[2];  // 0x4A
    unsigned int u32_4C;  // 0x4C
    unsigned char q050;  // 0x50
    unsigned char q051;  // 0x51
    unsigned char q052;  // 0x52
    char __pad_53[1];  // 0x53
    unsigned int u32_54;  // 0x54
    unsigned int u32_58;  // 0x58
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    int Active(void *a1 = 0);
    void * Construct(int a2, int a3, TechnoTypeClass * aP3, int a5, int a6, int a7, int a8, char a9, int a10, int a11, int a12, int a13, char a14, char a15, int a16, int a17);  // 0x54FE60
    signed intGetRemaining();  // 0x5CEAD0
    void StartIfIdle();  // 0x5CEB20
    signed int GetRemaining();  // plateau: def-aligned C2039/C2660
};
} // namespace gamemd
