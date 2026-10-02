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
    void Construct(IUnknown * aP1, AbstractClass * aP2, AbstractClass * aP3, void *a4, void *a5, void *a6);
    BOOLInflate(LPRECT lprc, int dx, int dy);
    void Set(int aP1, int aP2, int aP3, int aP4);
    void Union(IUnknown * aP0, const RECT * lprcSrc1, const RECT * lprcSrc2);
    unsigned int *u32_14;  // supplied (C2039)
    unsigned int *u32_18;  // supplied (C2039)
    unsigned int *u32_1C;  // supplied (C2039)
};

} // namespace gamemd
