// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once



#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct MapClass;  // fix_fwd_type_supply

struct FogOfWar {
// --- flat members (BEGIN) ---
    unsigned int u32_121C;  // 0x121C
    MapClass * ptr_1258;  // 0x1258
    float u32_1488;  // 0x1488
    void* ptr_1220;
// --- flat members (END) ---
    AbstractClass * RevealCell(IUnknown * aP1);
    MapClass * * RevealArea(int *a2, int aP1, int a1);
    int RenderCell();
    int Render();  // 0x657ce0
};

} // namespace gamemd
