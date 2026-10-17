// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct Pathfinding {
    int __pad_000;  // 0x0
    int Pathfinding_field_0x04;  // 0x4
    int Pathfinding_field_0x08;  // 0x8
    int Pathfinding_field_0x0C;  // 0xC
    int Pathfinding_field_0x10;  // 0x10
    int Pathfinding_field_0x14;  // 0x14
    int Pathfinding_field_0x18;  // 0x18
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    unsigned int * ExpandNode(CellStruct * a1, int a2);
    static int CalcDistance(Pathfinding * aP1, int16_t *a2, int16_t *a3, int a4, int a5, int a6, signed int a7);
};

} // namespace gamemd
