// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct MSShapeAnim;  // fix_fwd_type_supply

struct MSOverlayAnim {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
// --- flat members (END) ---
    void* Init_ph;  // 0x0 (no offset truth)  // w18j3: filler renamed (no offset truth; canon MSOverlayAnim::Init is a method)
    static unsigned int Init(char** p0, int p1, int p2, int p3, int p4, int p5, char p6, int p7, char p8);  // x4:signals@0x5cc250
    MSShapeAnim * QueryInterface(unsigned int * Block, char a2);
    void StubReturnFalse(int a1);
};

} // namespace gamemd
