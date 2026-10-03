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
     double Dtor(...);  // C2597 interim stub
    static double Release_Alt(...);  // C2597 interim stub
     int Set(int a2);  // was C2597 interim stub, := truth 0x0x65d480
    unsigned int * Release();  // 0x65d460
    int ReleaseSimple(); // N_fix R5 supply (cache truth)
};

} // namespace gamemd
