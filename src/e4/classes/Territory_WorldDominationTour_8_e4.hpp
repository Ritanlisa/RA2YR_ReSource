// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct Territory_WorldDominationTour_8 {
// --- flat members (BEGIN) ---
    int Ticks;  // 0x10
// --- flat members (END) ---
    int  AddRef(char a2);  // 0x7718A0
    signed intRelease();  // 0x771900
    signed int ddtor(void *a1 = 0);  // 0x771950
    int Read(int a2, int a3, void *a3_1 = 0);  // 0x771970
    void  Write(int a2, int a3);  // 0x771980
    void Close(int a2, void *a2_2);  // 0x7719D0
    unsigned int *  QueryInterface(char a2);  // 0x771A30
    unsigned int * Seek(unsigned int * a1, void *a2_1, void *a3_1);  // 0x771990
    unsigned int * Open(void *a1_1, void *a2_1, void *a3_1);  // 0x7719C0

    int q00C;  // X10 supply (member_lookup)
    int field_1C;  // 0x1C
};
} // namespace gamemd
