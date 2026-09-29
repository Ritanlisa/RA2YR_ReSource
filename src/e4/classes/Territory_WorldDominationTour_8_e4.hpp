// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct Territory_WorldDominationTour_8 {
// --- flat members (BEGIN) ---
    unsigned char q000;  // 0x0
    unsigned int q004;  // 0x4
    unsigned int q008;  // 0x8
    unsigned int q00C;  // 0xC
    int Ticks;  // 0x10
    unsigned char q014;  // 0x14
    unsigned int u32_18;  // 0x18
    unsigned int q01C;  // 0x1C
    unsigned int __pad_0;
    unsigned int __pad_C;
    unsigned int field_18;
    unsigned int field_1C;
    unsigned int Audio;
    unsigned int Timer;
// --- flat members (END) ---
    char AddRef(char a2);  // 0x7718A0
    signed int Release(void *a1 = 0);  // 0x771900
    void ddtor(void *a1 = 0);  // 0x771950
    char Read(int a2,  int a3);    // 0x771970
    void Write(int a2,  int a3);    // 0x771980
    void Close(int a2);  // 0x7719D0
    unsigned int * QueryInterface(char a2);  // 0x771A30
    unsigned int * Seek(unsigned int * a1, void *a2 = 0);  // 0x771990
    BOOL Open(void *a1 = 0, void *a2 = 0, void *a3 = 0);  // 0x7719C0
};
} // namespace gamemd
