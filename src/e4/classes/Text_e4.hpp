// GENERATED minimal flat class (fix_c2039_methods)
#pragma once

namespace gamemd {

struct Text {
    unsigned char Text_field_00[8];  // G42.35 C9 flat-carrier vocab (0x5bd45a 字形基)
    int DrawRepeated(int String, int a3, int a4, int a5);
    static int Layout(...);
    int Layout(unsigned short *a2, int *a3, unsigned int *a4, int a5);  // G42.33 b3 member-form (core TU 体定义)
    BOOL DrawCharAtGrid(HDC hdc, int String, int a4);  // 0x5BD3D0 G42.35 C8 体签名
    static int __stdcall MeasureWidth(int a1, int a2);
};

} // namespace gamemd
