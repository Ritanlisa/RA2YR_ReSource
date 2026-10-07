// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct Rect {
// --- flat members (BEGIN) ---
    int X;  // 0x0
    int Y;  // 0x4
    int Width;  // 0x8
    int Height;  // 0xC
    unsigned int u32_14;
    unsigned int u32_18;
    unsigned int u32_1C;

    int left;  // 0x0
    int top;  // 0x4
    int right;  // 0x8
    int bottom;  // 0xC
// --- flat members (END) ---
    _DWORD * Construct(unsigned int *aP1, int aP2, int aP3);
    BOOL Inflate(LPRECT lprc, int dx, int dy);
    unsigned int * Set(int aP1, int aP2, int aP3, int aP4);
    int Union(LPRECT lprcDst, const RECT *lprcSrc1, const RECT *lprcSrc2);  // G57w10-S raw 0x00487F40 IUnknown 占位清除
    int SetRedraw(char a2); // N_fix R5 supply (cache truth)
};

} // namespace gamemd
