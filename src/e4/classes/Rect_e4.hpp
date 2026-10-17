// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct Rect {
    int X;  // 0x0
    int Y;  // 0x4
    int Width;  // 0x8
    Rect* Height;  // 0xC
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    unsigned int * Construct(unsigned int *aP1, int aP2, int aP3, void *a4 = 0, void *a5 = 0, void *a6 = 0, void *a7 = 0, void *a8 = 0, void *a9 = 0);
    BOOL Inflate(LPRECT lprc, int dx, int dy);
    unsigned int * Set(int aP1, int aP2, int aP3, int aP4);
    int Union(LPRECT, const RECT *lprcSrc1, const RECT *lprcSrc2);  // G57w10-S raw 0x00487F40 IUnknown 占位清除
    int SetRedraw(char a1);
};

} // namespace gamemd
