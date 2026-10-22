// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct ConnectionPointClass {
    void * ptr_0;  // 0x0
    void* __pad_004;  // 0x4
    int u32_8;  // 0x8
    int u32_C;  // 0xC
    int u32_10;  // 0x10
    int q014;  // 0x14
    int q018;  // 0x18
    int q01C;  // 0x1C
    int q020;  // 0x20
    unsigned int u32_24;  // 0x24
    unsigned char u8_28;  // 0x28
    unsigned char u8_29;  // 0x29
    char __pad_2A[2];  // 0x2A
    unsigned int u32_2C;  // 0x2C
    unsigned int u32_30;  // 0x30
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    int EnumConnections(int a2);  // G42.41c: truth 0x4A0700
    int GetConnectionInterface(unsigned int * a1, int a2);
    int Unadvise(int a1, int (__stdcall ***)(unsigned int, int, int *), int * a3);  // G42.41b: fnptr trailing-name dropped (truth 0x4A0630)
    unsigned int * Construct(unsigned int * a1, ConnectionPointClass * aP2, void *a3, void *a4, void *a5, void *a6, void *a7 = 0, void *a8 = 0, void *a9 = 0);
};

} // namespace gamemd
