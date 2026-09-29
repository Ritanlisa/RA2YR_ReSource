// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct Rect {
// --- flat members (BEGIN) ---
    char X[4];  // 0x0
    char Y[4];  // 0x4
    char Width[4];  // 0x8
    char Height[4];  // 0xC
    unsigned int u32_14;
    unsigned int u32_18;
    unsigned int u32_1C;
    unsigned int SetRedraw;
// --- flat members (END) ---
    AbstractClass * Construct(void* aP1, AbstractClass * aP2, AbstractClass * aP3, void *a4 = 0, void *a5 = 0);
    BOOL Inflate(LPRECT lprc, int dx, int dy);
    void* Set(void* aP1, void* aP2, void* aP3, void* aP4);
    int Union(void* aP0, const RECT * lprcSrc1, const RECT * lprcSrc2);
};

} // namespace gamemd
