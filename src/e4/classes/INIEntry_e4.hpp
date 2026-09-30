// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct INIEntry {
// --- flat members (BEGIN) ---
    unsigned int Key;  // 0x0
    unsigned int Value;  // 0x4
    INIEntry* Next;  // 0x8
// --- flat members (END) ---
    int GetTechnoType(void * aP1, unsigned char * a2);
};

} // namespace gamemd
