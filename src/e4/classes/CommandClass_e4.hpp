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

    unsigned int u32_C0;  // X10 supply (member_lookup)
    unsigned int __tail_0;  // [X30:default]


    unsigned int q24C;  // 0x24C [X55 W3 supply (render vocab)]
    int u32_4;  // 0x4 [X55 W3 supply (render vocab)]
    unsigned int q008;  // 0x8 [X55 W3 supply (render vocab)]
    int u32_10;  // 0x10 [X55 W3 supply (render vocab)]
    unsigned int u32_241;  // 0x241 [X55 W3 supply (render vocab)]
};
#endif  // GAMEMD_G2_CommandClass_DEF

} // namespace gamemd
