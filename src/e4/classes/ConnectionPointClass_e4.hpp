// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct ConnectionPointClass {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    unsigned char q004;  // 0x4
    unsigned char q008;  // 0x8
    bool q00B;  // 0xB
    unsigned char q00C;  // 0xC
    unsigned int u32_D;  // 0xD
    unsigned int u32_10;  // 0x10
    unsigned char q014;  // 0x14
    unsigned char q018;  // 0x18
    unsigned int q01A;  // 0x1A
    unsigned char q01C;  // 0x1C
    bool q01D;  // 0x1D
    unsigned char q020;  // 0x20
// --- flat members (END) ---
    int EnumConnections(int a2);  // G42.41c: truth 0x4A0700
    int GetConnectionInterface(unsigned int * a1, int a2);
    int Unadvise(int a1, int (__stdcall ***a2)(unsigned int, int, int *), int * updated);  // G42.41b: fnptr trailing-name dropped (truth 0x4A0630)
    unsigned int * Construct(unsigned int * a1, ConnectionPointClass * aP2, void *a3, void *a4, void *a5, void *a6);
    unsigned int q000;  // 0x0 (offset-truth)
    unsigned int u32_24;  // 0x24 (offset-truth)
    unsigned int u32_28;  // 0x28 (offset-truth)
    unsigned char u32_29;  // 0x29 (offset-truth)
};

} // namespace gamemd
