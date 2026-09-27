// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct RefCount {
// --- flat members (BEGIN) ---
    char m_RefCount[4];  // 0x0
    char RefCount_field_04[4];  // 0x4
    unsigned char q008;  // 0x8
    void* ;  // 0xC
    unsigned char q010;  // 0x10
    unsigned char q014;  // 0x14
    void* q018;  // 0x18
    unsigned char q01C;  // 0x1C
    unsigned char q020;  // 0x20
    void* q024;  // 0x24
    unsigned int vt_slot_8;
    unsigned int q00C;
// --- flat members (END) ---
    int Decrement();
    int Increment(int a2);
};

} // namespace gamemd
