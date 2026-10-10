// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct SwizzleManagerClass {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
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
