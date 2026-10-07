// GENERATED minimal flat class (fix_c2039_methods)
#pragma once

namespace gamemd {

struct Matrix3x3 {
    static int ApplyCol0(void *aP1, float a2);  // 0x5AE9B0 raw: int ApplyCol0(int*, float)
    static int ApplyCol1(void *aP1, float a2);  // 0x5AE9E0 raw: int ApplyCol1(int*, float)

    int Multiply(float *a2);
    int TransformPoint(float *aP1, float *a2);
    int RotateX(float aP1);  // 0x5aef60
};

} // namespace gamemd
