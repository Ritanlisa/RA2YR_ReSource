// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct CommandClass {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    unsigned int __tail_0;
// --- flat members (END) ---
    int AddAction(ToolTipManager * aP1, void *a2);
    int BuildBar();
    static int BinarySearchAction(CommandClass * aP1, unsigned int *a2);  // G57w10-S raw 0x00724FC0 (was C2597 interim stub)
    static bool executeAction(CommandClass * aP1, unsigned int *a2);  // G57w10-S raw 0x00724FA0 (was C2597 interim stub)
};

} // namespace gamemd
