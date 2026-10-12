// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct LoadScreen {
// --- flat members (BEGIN) ---

// --- flat members (END) ---
    static int RenderLoop(void *aP1);
    void* Render_ph;  // 0x0 (no offset truth)  // w18j3: filler renamed (no offset truth; canon LoadScreen::Render is a method)
    static unsigned int Render(int p0, int p1, int p2, double p3);  // x4:signals@0x643ae0
    int IsActive(void *a1 = 0);
    unsigned int u32_64;  // 0x64 (offset-truth)
};

} // namespace gamemd
