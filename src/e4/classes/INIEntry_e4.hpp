// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct INIEntry {
// --- flat members (BEGIN) ---
    unsigned int Key;  // 0x0
    unsigned int Value;  // 0x4
    INIEntry* Next;  // 0x8
    void* q00C;  // 0xC
    void* q010;  // 0x10
    unsigned char q014;  // 0x14
    void* q018;  // 0x18
    unsigned char q01C;  // 0x1C
    unsigned char q020;  // 0x20
    void* q024;  // 0x24
    unsigned char q028;  // 0x28
    unsigned char q02C;  // 0x2C
    void* q034;  // 0x34
// --- flat members (END) ---
    int GetTechnoType(CCINIClass * aP1, unsigned char * a2);
};

} // namespace gamemd
