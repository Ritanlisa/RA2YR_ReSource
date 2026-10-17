// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct ConnectionPointClass {
    void* vtable1;  // 0x0
    void* __pad_004;  // 0x4
    int ConnectionPointClass_field_0x08;  // 0x8
    int ConnectionPointClass_field_0x0C;  // 0xC
    int ConnectionPointClass_field_0x10;  // 0x10
    int ConnectionPointClass_field_0x14;  // 0x14
    int ConnectionPointClass_field_0x18;  // 0x18
    int ConnectionPointClass_field_0x1C;  // 0x1C
    int ConnectionPointClass_field_0x20;  // 0x20
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    int EnumConnections(int a2);  // G42.41c: truth 0x4A0700
    int GetConnectionInterface(unsigned int * a1, int a2);
    int Unadvise(int a1, int (__stdcall ***)(unsigned int, int, int *), int * a3);  // G42.41b: fnptr trailing-name dropped (truth 0x4A0630)
    unsigned int * Construct(unsigned int * a1, ConnectionPointClass * aP2, void *a3, void *a4, void *a5, void *a6, void *a7 = 0, void *a8 = 0, void *a9 = 0);
};

} // namespace gamemd
