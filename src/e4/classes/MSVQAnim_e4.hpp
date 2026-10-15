// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct MSVQAnim {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
// --- flat members (END) ---
    MSVQAnim * QueryInterface(char a2);
    int Stub();
    void * GetFrameRect(int * a2);
    unsigned int * ConstructMSVQAnimHidden(char **aP1, int *aP2, int aP3, char aP3a);  // 0x5ccc30
void* q000;  // 0x0 [X35-L7 kind=void*]
    unsigned int u32_28;  // 0x28 (offset-truth)
    unsigned char u32_2D;  // 0x2D (offset-truth)

    uint8_t MSVQAnim_field_0x1C;  // X10 supply (member_types)

    int q01C;  // X10 supply (member_lookup)
    int __pad_004;  // 0x4 [X30:type_map]
void* __pad_0;  // 0x0 [X35-L7 kind=void*]
};

} // namespace gamemd
