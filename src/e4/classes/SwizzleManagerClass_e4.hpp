// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct SwizzleManagerClass {
    void* vtable1;  // 0x0
    int __pad_004;  // 0x4
    int SwizzleManagerClass_field_0x08;  // 0x8
    int SwizzleManagerClass_field_0x0C;  // 0xC
    int SwizzleManagerClass_field_0x10;  // 0x10
    int SwizzleManagerClass_field_0x14;  // 0x14
    int SwizzleManagerClass_field_0x18;  // 0x18
    int SwizzleManagerClass_field_0x1C;  // 0x1C
    int SwizzleManagerClass_field_0x20;  // 0x20
    int SwizzleManagerClass_field_0x24;  // 0x24
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    int Add(SwizzleManagerClass * aP0, SwizzleManagerClass * aP1, unsigned int * a2);
    int AddRef(int a1);
    int Lookup(int a1, int a2, int a3, int a4);
    int Release(int a1);
    int Remove(int a1, int a2, int a3);
    static int Here_I_Am(int a1, int a2, int a3);
    static void Register(void);
};

} // namespace gamemd
