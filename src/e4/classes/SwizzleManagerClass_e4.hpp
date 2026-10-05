// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct SwizzleManagerClass {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    unsigned char q004;  // 0x4
    unsigned char q008;  // 0x8
    unsigned char q00C;  // 0xC
    unsigned char q010;  // 0x10
    unsigned char q014;  // 0x14
    unsigned char q018;  // 0x18
    unsigned char q01C;  // 0x1C
    unsigned char q020;  // 0x20
    unsigned char q024;  // 0x24
// --- flat members (END) ---
    int Add(SwizzleManagerClass * aP0, SwizzleManagerClass * aP1, unsigned int * a2);
    int AddRef(int a1);
    int Lookup(int a1, int a2, int a3, int a4);
    int Release(int a1);
    int Remove(int a1, int a2, int a3);
    static double Here_I_Am(...);  // C2597 interim stub
    static void Register(void);  // 0x6CF0F0 G42.33 b12 static-form (atexit target)
    };

} // namespace gamemd
