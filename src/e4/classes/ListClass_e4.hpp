// GENERATED minimal flat class (fix_c2039_methods)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct ListClass {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    char Enabled;  // 0x15
// --- flat members (END) ---
    int Destruct(void *a1 = 0);
    int Construct(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, void *a1 = 0);  // 0x557230
    ControlClass * * CheckListClass__vt_19_(char a2, int a3, unsigned int * a4);
    unsigned int *q000;  // 0x0 (offset-truth)
    static double ListClass_field_0x0C(...);  // plateau: C2039/C3861 stub
    static double ListClass_field_0x10(...);  // plateau: C2039/C3861 stub
    static double __pad_0(...);  // plateau: C2039/C3861 stub
};

} // namespace gamemd
