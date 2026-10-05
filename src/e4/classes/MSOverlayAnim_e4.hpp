// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct MSShapeAnim;  // fix_fwd_type_supply

struct MSOverlayAnim {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    unsigned char q004;  // 0x4
    unsigned char q008;  // 0x8
    unsigned char q00C;  // 0xC
    unsigned int u32_D;  // 0xD
    unsigned char q010;  // 0x10
    unsigned char q014;  // 0x14
    unsigned char q018;  // 0x18
    unsigned int *__pad_0;
    unsigned int u32_1C;
    unsigned int u32_3C;
    void* Init;  // 0x0 (no offset truth)
// --- flat members (END) ---
    MSShapeAnim * QueryInterface(unsigned int * Block, char a2);
    void StubReturnFalse(int a1);
};

} // namespace gamemd
