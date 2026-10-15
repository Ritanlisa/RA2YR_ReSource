// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct Time {
// --- flat members (BEGIN) ---
int Time_field_00;  // 0x0 [X35-L7 kind=int]
// --- flat members (END) ---
    int FormatDate(char * Buffer);
    static int GetElapsedMS();
};

} // namespace gamemd
