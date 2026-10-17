// GENERATED minimal flat class (fix_c2039_methods)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct StringVector {
    int __pad_0;  // 0x0
    unsigned int StringVector_field_0x04;  // 0x4
    unsigned int StringVector_field_0x08;  // 0x8
    unsigned int StringVector_field_0x0C;  // 0xC
    int StringVector_field_0x10;  // 0x10
    int StringVector_field_0x14;  // 0x14
    unsigned int StringVector_field_0x18;  // 0x18
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    unsigned int * Construct(int a2, int a3, void *a1 = 0, void *a4 = 0, void *a5 = 0, void *a6 = 0);
    char  Insert(void * a2, int a3);  // 0x7ae5d0
    void ddtor(void *a1 = 0);  // 0x49EF10 G42.33 b3 supplied-body sync
    char  Release(int a2, unsigned int * a3);  // 0x49EE60
    unsigned int  Remove(int a2, void *a1 = 0);  // 0x49EF80
    unsigned int *  QueryInterface(char a2);  // 0x49EFA0
    static unsigned int * Construct(StringVector * aP1, int a2, int a3);
    static char Insert(void *aP0, const char **aP1, int aP2);
};

} // namespace gamemd
