// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct MSShapeAnim;  // fix_fwd_type_supply

struct MSOverlayAnim {
    void* Init_ph;  // 0x0
    void* __pad_004;  // 0x4
    int q008;  // 0x8
    int q00C;  // 0xC
    int q010;  // 0x10
    int q014;  // 0x14
    int q018;  // 0x18
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    static unsigned int Init(char** p0, int p1, int p2, int p3, int p4, int p5, char p6, int p7, char p8);  // x4:signals@0x5cc250
    MSShapeAnim * QueryInterface(unsigned int * Block, char a2);
    void StubReturnFalse(int a1);
};

} // namespace gamemd
