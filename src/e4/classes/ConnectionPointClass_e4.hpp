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
    unsigned int ConnectionPointClass_field_0x04;
    unsigned int ConnectionPointClass_field_0x08;
    unsigned int ConnectionPointClass_field_0x0C;
    unsigned int ConnectionPointClass_field_0x10;
    unsigned int ConnectionPointClass_field_0x14;
    unsigned int ConnectionPointClass_field_0x18;
    unsigned int ConnectionPointClass_field_0x1C;
    unsigned int ConnectionPointClass_field_0x20;
    unsigned int __pad_0;
    unsigned int u32_24;
    unsigned int u32_28;
    unsigned int u32_29;
// --- flat members (END) ---
    int EnumConnections(int a1, int a2);
    int GetConnectionInterface(unsigned int * a1, int a2);
    int Unadvise(int a1, int (__stdcall ***a2)(unsigned int, int_2, int *), int * a3);
    unsigned int * Construct(unsigned int * a1, void * aP2, void *a3 = 0, void *a4 = 0, void *a5 = 0);
};

} // namespace gamemd
