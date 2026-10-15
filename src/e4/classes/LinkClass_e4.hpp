// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct LinkClass {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    LinkClass* m_Next;  // 0x4
    LinkClass* m_Prev;  // 0x8
    int LinkClass_field_0C;  // 0xC [X30:type_map]
// --- flat members (END) ---
    LinkClass * Destru_vt00(unsigned int * Block, char a2);
    int Destroy(void *a1);
    int Destruct(void *a1 = 0);
void* q000;  // 0x0 [X35-L7 kind=void*]
void* __pad_0;  // 0x0 [X35-L7 kind=void*]
    unsigned char __pad_038;  // 0x38 [X30:member_lookup]
};

} // namespace gamemd
