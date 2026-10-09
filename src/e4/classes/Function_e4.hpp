// GENERATED minimal flat class (fix_c2039_methods)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct Function {
// --- flat members (BEGIN) ---
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    unsigned char q008;  // 0x8
    unsigned char q00C;  // 0xC
    unsigned char q010;  // 0x10
    unsigned char q014;  // 0x14
    unsigned char q018;  // 0x18
// --- flat members (END) ---
    int Method_424CA0(int a2);
    int Method_4B4D60();
    int Method_6342D0(int a2);  // 0x6342d0
    int Function_643E80(void * a2);  // 0x643E80 (G42.36: was mis-modeled as data member)
    int sub_645D00(int a2);
    static int sub_41C430(...);
    static int Method_643E80(...);
    static int Method_46B260(...);  // w16g4 C3861 static supply (raw 0x0046B260)  // w16g4 C3861 static supply (raw 0x00643E80)  // w16g4 C3861 static supply (Cls call-form)  // 0x4 (G57W14E1 til supply)
};

} // namespace gamemd
