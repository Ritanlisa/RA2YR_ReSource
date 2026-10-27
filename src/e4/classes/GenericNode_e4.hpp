// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct GenericNode {
    unsigned int __pad_0;  // 0x0
    GenericNode* Previous;  // 0x4
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    GenericNode * sub_40E390(char a2);
    _DWORD * Constructor();  // 0x40e320
    GenericNode * sub_40E390(GenericNode ** Block, char a2);
};

} // namespace gamemd
