// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct ComPtr {
// --- flat members (BEGIN) ---
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    unsigned char q008;  // 0x8
    unsigned char q00C;  // 0xC
    unsigned char q010;  // 0x10
    unsigned char q014;  // 0x14
    unsigned char q018;  // 0x18
    unsigned char q01C;  // 0x1C
    unsigned char q020;  // 0x20
    unsigned int *__pad_0;

// --- flat members (END) ---
    int DestroyWrapper(int aP0, ObjectClass * aP1);
     unsigned int * Constructor();  // was C2597 interim stub, := truth 0x0x65d430
    unsigned int ComPtr_field_0x04;  // G42.33 b4 alias (flat-carrier vocab)
    unsigned int ComPtr_field_0x10;  // G42.33 b4 alias (flat-carrier vocab)
    unsigned int ComPtr_field_0x0C;  // G42.33 b7 alias
    unsigned int ComPtr_field_0x18;  // G42.33 b7 alias
    unsigned int ComPtr_field_0x20;  // G42.33 b7 alias
    unsigned int ComPtr_field_0x1C;  // G42.33 b8 alias
     int Dtor();  // G57w10-S raw 0x006406F0 (was C2597 interim stub)
    static int Dtor(void *aP0);  // G42.35 static-form sync (ui/supplied site 0x46E088)
    static int Release_Alt(ComPtr * aP1);  // G57w10-S raw 0x004B4D50 (was C2597 interim stub)
     int Set(int a2);  // was C2597 interim stub, := truth 0x0x65d480
    unsigned int * Release();  // 0x65d460
    int ReleaseSimple(); // N_fix R5 supply (cache truth)
    static unsigned int * Constructor(void *aP0);  // G57a1 static-form sync (CComObject 0x7aba14)
    static int Release(void *aP0);  // G57a1 static-form sync (CComObject 0x7aba52)
    static int ReleaseAndSet(void *aP0, unsigned int *aP1);  // G57a1 static-form sync (Jumpjet 0x4ccd7e+)
    static void * Territory_Dtor(void *aP0);  // G57a1 static-form sync (addr76 0x76d3ea)
    static int DestroyWrapper(void *aP0, void *aP1);  // G57a1 static-form mirror
    static int Set(void *aP0, int aP2);  // G57a1 static-form mirror
    static int ReleaseSimple(void *aP0);  // G57a1 static-form mirror
    // --- W16G3 supply (BEGIN) ---
    unsigned int ComPtr_field_0x08;  // 0x8 W16G3 alias (flat-carrier vocab, b4/b7/b8 precedent)
    // --- W16G3 supply (END) ---

};

} // namespace gamemd
