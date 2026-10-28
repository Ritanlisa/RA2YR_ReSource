// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct ComPtr {
    char __pad_0[4];  // 0x0
    unsigned int q004;  // 0x4
    unsigned int q008;  // 0x8
    int q00C;  // 0xC
    unsigned int q010;  // 0x10
    int q014;  // 0x14
    unsigned int q018;  // 0x18
    int q01C;  // 0x1C
    unsigned int q020;  // 0x20
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    int DestroyWrapper(int aP0, ObjectClass * aP1);
     unsigned int * Constructor();  // was C2597 interim stub, := truth 0x0x65d430
     int Dtor();
    static int Dtor(void *aP0);
    int Release_Alt();
     int Set(int a2);  // was C2597 interim stub, := truth 0x0x65d480
    unsigned int * Release();  // 0x65d460 thiscall (x181c: static-form overload removed)
    int ReleaseSimple();
    static unsigned int * Constructor(void *aP0);
    static int ReleaseAndSet(void *aP0, unsigned int *aP1);
    static void * Territory_Dtor(void *aP0);
    static int Set(void *aP0, int aP2);  // G57a1 static-form mirror
    static int ReleaseSimple(void *aP0);  // G57a1 static-form mirror
};

} // namespace gamemd
