// GENERATED minimal flat class (fix_c2039_methods)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct Text {
// --- flat members (BEGIN) ---
    char Text_field_00[4];  // 0x0
// --- flat members (END) ---
    unsigned char Text_field_00[8];  // G42.35 C9 flat-carrier vocab (0x5bd45a 字形基)
    int DrawRepeated(int String, int a3, int a4, int a5);
    static int Layout(Text * aP1, unsigned __int16 *a2, int *a3, unsigned int *a4, int a5);  // G57w10-S raw 0x00433CF0 (was C2597 interim stub)
    int Layout(unsigned short *a2, int *a3, unsigned int *a4, int a5);  // G42.33 b3 member-form (core TU 体定义)
    BOOL DrawCharAtGrid(HDC hdc, int String, int a4);  // 0x5BD3D0 G42.35 C8 体签名
    static int __stdcall MeasureWidth(int a1, int a2);
    unsigned int u32_2714;  // g57w11 r4 G9 体词汇 (raw 0x5bd3f2/3c *((_DWORD*)this + 2501) = 0x2714)
};

} // namespace gamemd
