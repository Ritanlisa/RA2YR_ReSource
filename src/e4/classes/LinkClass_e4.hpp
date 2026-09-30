// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct LinkClass {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    LinkClass* m_Next;  // 0x4
    LinkClass* m_Prev;  // 0x8
    char LinkClass_field_0C[4];  // 0xC
    unsigned int __pad_0;
// --- flat members (END) ---
    LinkClass * Destru_vt00(unsigned int * Block, char a2);
    int Destroy();
    void Destruct();
};

} // namespace gamemd
