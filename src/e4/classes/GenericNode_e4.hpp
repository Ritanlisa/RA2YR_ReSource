// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct GenericNode {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    GenericNode* Previous;  // 0x4
// --- flat members (END) ---
    GenericNode * sub_40E390(char a2);
    unsigned int * Constructor(void *a1 = 0, void *a2 = 0, void *a3 = 0, void *a4 = 0);  // 0x40e320
    GenericNode * sub_40E390(GenericNode ** Block, char a2);


    unsigned int __pad_0;  // 0x0 [X55 W3 supply (render vocab)]
    unsigned int u32_14;  // 0x14 [X55 W3 supply (render vocab)]
    unsigned int u32_18;  // 0x18 [X55 W3 supply (render vocab)]
    unsigned int u32_1C;  // 0x1C [X55 W3 supply (render vocab)]
};

} // namespace gamemd
