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
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    int Active(void *a1 = 0);
    void * Construct(int a2, int a3, TechnoTypeClass * aP3, int a5, int a6, int a7, int a8, char a9, int a10, int a11, int a12, int a13, char a14, char a15, int a16, int a17);  // 0x54FE60
    signed intGetRemaining();  // 0x5CEAD0
    void StartIfIdle();  // 0x5CEB20
    signed int GetRemaining();  // plateau: def-aligned C2039/C2660
};
} // namespace gamemd
