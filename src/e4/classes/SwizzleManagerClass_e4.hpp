// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct SwizzleManagerClass {
    void* ptr_0;  // 0x0
    int __pad_004;  // 0x4
    int q008;  // 0x8
    int q00C;  // 0xC
    int q010;  // 0x10
    int u32_14;  // 0x14
    int q018;  // 0x18
    int u32_1C;  // 0x1C
    int q020;  // 0x20
    int q024;  // 0x24
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
