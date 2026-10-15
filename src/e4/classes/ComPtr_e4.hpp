// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct ComPtr {
// --- flat members (BEGIN) ---

// --- flat members (END) ---
    int DestroyWrapper(int aP0, ObjectClass * aP1);
     unsigned int * Constructor();  // was C2597 interim stub, := truth 0x0x65d430
    unsigned int ComPtr_field_0x04;  // G42.33 b4 alias (flat-carrier vocab)
    unsigned int ComPtr_field_0x10;  // G42.33 b4 alias (flat-carrier vocab)
     int Dtor();
    static int Dtor(void *aP0);
    int Release_Alt();
     int Set(int a2);  // was C2597 interim stub, := truth 0x0x65d480
    unsigned int * Release();  // 0x65d460
    int ReleaseSimple();
    static unsigned int * Constructor(void *aP0);
    static int Release(void *aP0);
    static int ReleaseAndSet(void *aP0, unsigned int *aP1);
    static void * Territory_Dtor(void *aP0);
    static int Set(void *aP0, int aP2);  // G57a1 static-form mirror
    static int ReleaseSimple(void *aP0);  // G57a1 static-form mirror
    unsigned int ComPtr_field_0x08;  // 0x8 W16G3 alias (flat-carrier vocab, b4/b7/b8 precedent)
    int q020;  // 0x20
    int q010;  // 0x10
    int q00C;  // 0xC
    int q004;  // 0x4
    unsigned char __pad_000;  // 0x0 [X30:canon]
    int ComPtr_field_0x0C;  // 0xC [X30:member_lookup]
    int ComPtr_field_0x14;  // 0x14 [X30:member_lookup]
    int ComPtr_field_0x1C;  // 0x1C [X30:member_lookup]
    char __pad_0[4];  // 0x0 [X30:member_lookup]
};

} // namespace gamemd
