// GENERATED minimal flat class (fix_c2039_methods)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct DeleteAndZero {
// --- flat members (BEGIN) ---

// --- flat members (END) ---
    int Alt(void *a1 = 0);
    int Alt2(void *a1 = 0);
    void ** OrFree(char a2, void *a1 = 0);
    void* owningHouseIndex;  // 0x0 (no offset truth)
    void* customSound_controller;  // 0x0 (no offset truth)
    void* AbstractClass;  // 0x0 (base-subobject vocab, no offset truth)
    unsigned int u32_8;  // 0x8
    int q004;  // 0x4
    unsigned char __pad_000;  // 0x0 [X30:canon]
    unsigned int nextObject;  // [X30:default]
    unsigned int occupant;  // [X30:default]
    unsigned int uniqueId;  // [X30:default]
    unsigned int vfptr;  // [X30:default]
    unsigned int vtable3;  // 0x8 [X30:member_lookup]
};

} // namespace gamemd
