// GENERATED minimal flat class (fix_c2039_methods)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct Matrix3x3 {
// --- flat members (BEGIN) ---
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    unsigned char q008;  // 0x8
    bool q00A;  // 0xA
    bool q00B;  // 0xB
    unsigned char q00C;  // 0xC
    unsigned char q010;  // 0x10
// --- flat members (END) ---
    static int ApplyCol0(void *aP1, float a2);  // 0x5AE9B0 raw: int ApplyCol0(int*, float)
    static int ApplyCol1(void *aP1, float a2);  // 0x5AE9E0 raw: int ApplyCol1(int*, float)
    int Multiply(float *a2);
    int TransformPoint(float *aP1, float *a2);
    int RotateX(float aP1);  // 0x5aef60
};

} // namespace gamemd
