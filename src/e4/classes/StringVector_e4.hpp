// GENERATED minimal flat class (fix_c2039_methods)
#pragma once

namespace gamemd {

struct StringVector {
    unsigned int * Construct(int a2, int a3, void *a1 = 0, void *a4 = 0, void *a5 = 0, void *a6 = 0);
    unsigned char m_1[64];  // pad compile-supply (G41.47)
    char Insert(const char **a2, int a3);  // 0x7ae5d0
    unsigned char __pad_0[87];  // 0x0
    unsigned int StringVector_field_0x04;  // G42.33 b3 alias (flat-carrier vocab)
    unsigned int StringVector_field_0x08;  // G42.33 b3 alias (flat-carrier vocab)
    unsigned int StringVector_field_0x0C;  // G42.33 b3 alias (flat-carrier vocab)
    unsigned int m_8;  // 0x8
    unsigned int StringVector_field_0x14;  // 0x14
    unsigned int StringVector_field_0x10;  // 0x10
    unsigned int m_C;  // 0xC (supplied C2039)
};

} // namespace gamemd
