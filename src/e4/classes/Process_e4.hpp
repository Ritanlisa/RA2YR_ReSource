// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct Process {
// --- flat members (BEGIN) ---
int Process_field_00;  // 0x0 [X35-L7 kind=int]
// --- flat members (END) ---
    bool WaitForExit(DWORD dwMilliseconds, char aP2);

    void* q01C;  // X10 supply (member_lookup)
};

} // namespace gamemd
