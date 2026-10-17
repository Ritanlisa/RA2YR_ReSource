// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct Territory_WorldDominationTour_8 {
    unsigned char __pad_000;  // 0x0
    char __pad_1[3];  // 0x1
    int Territory_WorldDominationTour_8_field_0x4;  // 0x4
    int Territory_WorldDominationTour_8_field_0x8;  // 0x8
    int q00C;  // 0xC
    int Ticks;  // 0x10
    unsigned char __pad_014;  // 0x14
    char __pad_15[7];  // 0x15
    int field_1C;  // 0x1C
// --- flat members (BEGIN) ---
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
};
} // namespace gamemd
