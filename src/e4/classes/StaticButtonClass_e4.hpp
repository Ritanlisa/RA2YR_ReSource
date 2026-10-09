// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct StaticButtonClass {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    unsigned int u32_4;  // 0x4
    unsigned char q008;  // 0x8
    unsigned char q00C;  // 0xC
    unsigned char q010;  // 0x10
    unsigned char q014;  // 0x14
    char Enabled;  // 0x15
// --- flat members (END) ---
    StaticButtonClass * QueryInterface(char a2);
    static void Draw(void * aP0, wchar_t * aP1, int aP2);  // G42.33 b9 static-form (call site 0x6c658e)
    unsigned int q000;  // 0x0 (offset-truth)
    unsigned char q00C6;  // 0xC6 (offset-truth)
};

} // namespace gamemd
