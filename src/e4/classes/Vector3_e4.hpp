// GENERATED minimal flat class (fix_c2039_methods)
#pragma once

namespace gamemd {

struct Vector3 {
    unsigned char __pad_0[16];  // G42.33 b3 flat-carrier vocab
    unsigned int Vector3_field_0x04;  // G42.33 b3 flat-carrier vocab
    unsigned int Vector3_field_0x08;  // G42.33 b3 flat-carrier vocab
    int AddAssign(float *a2);
    int * Subtract(int *a2, unsigned int *a3);
    int Magnitude();  // 0x41c3c0

    double q008;  // G42.39 data supply (Sqrt operand)

    double q040;  // G42.39 data supply (Sqrt operand)
};

} // namespace gamemd
