// GENERATED minimal flat class (fix_c2039_methods)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct Text {
    int Text_field_00;  // 0x0
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    int DrawRepeated(int String, int a3, int a4, int a5, void *a1 = 0);
    static int Layout(Text * aP1, uint16_t *a2, int *a3, unsigned int *a4, int a5);
    int Layout(unsigned short *a2, int *a3, unsigned int *a4, int a5);
    BOOL  DrawCharAtGrid(int hdc, int String, int a4);  // 0x5BD3D0
    static int __stdcall MeasureWidth(int a1, int a2);
};

} // namespace gamemd
