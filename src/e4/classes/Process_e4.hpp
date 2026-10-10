// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct Process {
// --- flat members (BEGIN) ---
    char Process_field_00[4];  // 0x0
// --- flat members (END) ---
    bool WaitForExit(DWORD dwMilliseconds, char aP2);
    static double q01C(...);  // plateau: C2039/C3861 stub
};

} // namespace gamemd
