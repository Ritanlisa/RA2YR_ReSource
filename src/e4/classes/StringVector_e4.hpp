// GENERATED minimal flat class (fix_c2039_methods)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct StringVector {
// --- flat members (BEGIN) ---
    bool IsAllocated;  // 0xD
// --- flat members (END) ---
    unsigned int * Construct(int a2, int a3, void *a1 = 0, void *a4 = 0, void *a5 = 0, void *a6 = 0);
    unsigned char m_1[64];  // pad compile-supply (G41.47)
    char  Insert(void * a2, int a3);  // 0x7ae5d0
    unsigned int StringVector_field_0x04;  // G42.33 b3 alias (flat-carrier vocab)
    unsigned int StringVector_field_0x08;  // G42.33 b3 alias (flat-carrier vocab)
    unsigned int StringVector_field_0x0C;  // G42.33 b3 alias (flat-carrier vocab)
    unsigned int m_C;  // 0xC (supplied C2039)
    void ddtor(void *a1 = 0);  // 0x49EF10 G42.33 b3 supplied-body sync
    char  Release(int a2, unsigned int * a3);  // 0x49EE60
    unsigned int  Remove(int a2, void *a1 = 0);  // 0x49EF80
    unsigned int *  QueryInterface(char a2);  // 0x49EFA0
    static unsigned int * Construct(StringVector * aP1, int a2, int a3);
    static char Insert(void *aP0, const char **aP1, int aP2);

    int q004;  // X10 supply (member_lookup)
    int q008;  // X10 supply (member_lookup)
    int q014;  // 0x14
    int q010;  // 0x10
    int __pad_000;  // 0x0 [X30:type_map]
    unsigned char __pad_011;  // 0x11 [X30:canon]
    int StringVector_field_0x10;  // 0x10 [X30:member_lookup]
    int StringVector_field_0x14;  // 0x14 [X30:member_lookup]
};

} // namespace gamemd
