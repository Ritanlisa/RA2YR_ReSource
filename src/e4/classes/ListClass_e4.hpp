// GENERATED minimal flat class (fix_c2039_methods)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct ListClass {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    char Enabled;  // 0x15
// --- flat members (END) ---
    int Destruct(void *a1 = 0);
    int Construct(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, void *a1 = 0);  // 0x557230
    ControlClass * * CheckListClass__vt_19_(char a2, int a3, unsigned int * a4);
    unsigned int *q000;  // 0x0 (offset-truth)

    unsigned int u32_118;  // X10 supply (member_lookup)
    unsigned int u32_58;  // X10 supply (member_lookup)
    unsigned int u32_B8;  // X10 supply (member_lookup)
    int __pad_004;  // 0x4 [X30:type_map]
    unsigned char __pad_019;  // 0x19 [X30:canon]
    int ListClass_field_0x0C;  // 0xC [X30:type_map]
unsigned int ListClass_field_0x10;  // 0x10 [X35-L7 kind=unsigned int]
    int __pad_0;  // 0x0 [X30:type_map]
};

} // namespace gamemd
