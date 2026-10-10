// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

#ifndef GAMEMD_G2_CommandClass_DEF  // G42.57w14 twin-guard (shared; first-include wins)
#define GAMEMD_G2_CommandClass_DEF 1
struct CommandClass {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
// --- flat members (END) ---
    int AddAction(ToolTipManager * aP1, void *a2);
    int BuildBar();
    static int BinarySearchAction(CommandClass * aP1, unsigned int *a2);
    static bool executeAction(CommandClass * aP1, unsigned int *a2);
    static double u32_94(...);  // plateau: C2039/C3861 stub
};
#endif  // GAMEMD_G2_CommandClass_DEF

} // namespace gamemd
