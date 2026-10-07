// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct Pathfinding {
// --- flat members (BEGIN) ---
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    unsigned char q008;  // 0x8
    unsigned char q00C;  // 0xC
    unsigned char q010;  // 0x10
    unsigned char q014;  // 0x14
    unsigned char q018;  // 0x18
// --- flat members (END) ---
    unsigned int * ExpandNode(short * a1, int a2);
    static int CalcDistance(Pathfinding * aP1, __int16 *a2, __int16 *a3, int a4, int a5, int a6, signed int a7);  // G57w10-S raw 0x0042D170 (was C2597 interim stub)
};

} // namespace gamemd
