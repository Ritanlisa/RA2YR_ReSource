// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct LoadScreen {
    void* Render_ph;  // 0x0
    int LoadScreen_field_0x04;  // 0x4
    int LoadScreen_field_0x08;  // 0x8
    int LoadScreen_field_0x0C;  // 0xC
    int LoadScreen_field_0x10;  // 0x10
    int LoadScreen_field_0x14;  // 0x14
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    static int RenderLoop(void *aP1);
    static unsigned int Render(int p0, int p1, int p2, double p3);  // x4:signals@0x643ae0
    int IsActive(void *a1 = 0);
};

} // namespace gamemd
