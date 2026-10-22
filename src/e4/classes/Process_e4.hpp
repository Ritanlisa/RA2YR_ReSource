// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct Process {
    int Process_field_00;  // 0x0
    char __pad_4[24];  // 0x4
    unsigned int q01C;  // 0x1C
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    bool WaitForExit(DWORD dwMilliseconds, char aP2);
};

} // namespace gamemd
