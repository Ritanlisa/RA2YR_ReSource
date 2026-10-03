// GENERATED minimal flat class (fix_c2039_methods)
#pragma once

namespace gamemd {

struct Text {
    int DrawRepeated(int String, int a3, int a4, int a5);
    static int Layout(...);
    int Layout(unsigned short *a2, int *a3, unsigned int *a4, int a5);  // G42.33 b3 member-form (core TU 体定义)
    int DrawCharAtGrid(void *hdc, int String, int a4);  // G42.33 b3 supplied-body sync
    static int __stdcall MeasureWidth(int a1, int a2);
};

} // namespace gamemd
