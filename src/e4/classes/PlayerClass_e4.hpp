// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct PlayerClass {
// --- flat members (BEGIN) ---

// --- flat members (END) ---
    bool IsValidIndex(int a1);
    char AssignPlayerIndex();
    int SetHouse(int a2);
    int HasPlayers(void *a1 = 0);  // 0x6abac0

    unsigned char __pad_000;  // X10 supply (csp_canon_members)
    unsigned int u32_8;  // X10 supply (member_lookup)
};

} // namespace gamemd
