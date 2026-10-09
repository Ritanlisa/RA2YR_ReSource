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
    unsigned int * Constructor();  // 0x40e320
    GenericNode * sub_40E390(GenericNode ** Block, char a2);
};

} // namespace gamemd
