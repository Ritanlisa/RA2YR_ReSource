// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct VectorCursor {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
// --- flat members (END) ---
    unsigned int * ddtor(void *a1);
    unsigned int * Release(void *a1);
    unsigned int *  Construct(int a2, int a3, void *a1 = 0, void *a4 = 0, void *a5 = 0, void *a6 = 0, void *a7 = 0, void *a8 = 0, void *a9 = 0);  // 0x76f0c0
    unsigned int *q000;  // 0x0 (offset-truth)

    unsigned int u32_8;  // X10 supply (member_lookup)
    int q018;  // 0x18
    int q010;  // 0x10
    int u32_C;  // 0xC
    MSAnim* q004;  // 0x4 [X30:type_map]
    MSAnim* __pad_004;  // 0x4 [X30:type_map]
unsigned int VectorCursor_field_0x08;  // 0x8 [X35-L7 kind=unsigned int]
    int VectorCursor_field_0x0C;  // 0xC [X30:member_lookup]
    int VectorCursor_field_0x10;  // 0x10 [X30:member_lookup]
    int VectorCursor_field_0x14;  // 0x14 [X30:member_lookup]
    int VectorCursor_field_0x18;  // 0x18 [X30:member_lookup]
    char __pad_000[4];  // 0x0 [X30:member_lookup]
};

} // namespace gamemd
