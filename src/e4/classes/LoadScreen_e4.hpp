// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct LoadScreen {
// --- flat members (BEGIN) ---
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    unsigned char q008;  // 0x8
    unsigned char q00C;  // 0xC
    unsigned char q010;  // 0x10
    unsigned char q014;  // 0x14
// --- flat members (END) ---
    static int RenderLoop(void *aP1);  // 0x4B6C30 raw: int LoadScreen::RenderLoop(LoadScreen*)  // G57w10 r5 D-classbody supply (raw-anchored)
    void* Render_ph;  // 0x0 (no offset truth)  // w18j3: filler renamed (no offset truth; canon LoadScreen::Render is a method)
    static unsigned int Render(...);  // w18j3 C2597 static-call supply (w16g4 convention)
    int IsActive();
};

} // namespace gamemd
