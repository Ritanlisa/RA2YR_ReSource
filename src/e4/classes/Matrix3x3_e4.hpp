// GENERATED minimal flat class (fix_c2039_methods)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct Matrix3x3 {
    unsigned char __pad_000;  // 0x0
    char __pad_1[1];  // 0x1
    unsigned char ptr_2;  // 0x2
    unsigned char ptr_3;  // 0x3
    int u32_4;  // 0x4
    int u32_8;  // 0x8
    int u32_C;  // 0xC
    int q010;  // 0x10
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    static int ApplyCol0(void *aP1, float a2);
    static int ApplyCol1(void *aP1, float a2);
    int Multiply(float *a2, void *a1 = 0);
    int TransformPoint(float *aP1, float *a2, void *a1 = 0);
    int  RotateX(float a2);  // 0x5aef60
};

} // namespace gamemd
