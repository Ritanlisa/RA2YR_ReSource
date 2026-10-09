// GENERATED minimal flat class (fix_c2039_methods)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct StringVector {
// --- flat members (BEGIN) ---
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    unsigned char q008;  // 0x8
    unsigned char q00C;  // 0xC
    bool IsAllocated;  // 0xD
    unsigned char q010;  // 0x10
    unsigned char q014;  // 0x14
    unsigned char q018;  // 0x18
// --- flat members (END) ---
    unsigned int * Construct(int a2, int a3, void *a1 = 0, void *a4 = 0, void *a5 = 0, void *a6 = 0);
    unsigned char m_1[64];  // pad compile-supply (G41.47)
    char Insert(const char **a2, int a3);  // 0x7ae5d0
    unsigned int StringVector_field_0x04;  // G42.33 b3 alias (flat-carrier vocab)
    unsigned int StringVector_field_0x08;  // G42.33 b3 alias (flat-carrier vocab)
    unsigned int StringVector_field_0x0C;  // G42.33 b3 alias (flat-carrier vocab)
    unsigned int m_C;  // 0xC (supplied C2039)
    void ddtor();  // 0x49EF10 G42.33 b3 supplied-body sync
    char Release(int a2, unsigned int *a3);  // 0x49EE60 G42.33 b3 supplied-body sync
    unsigned int Remove(int a2);  // 0x49EF80 G42.33 b3 supplied-body sync
    unsigned int * QueryInterface(char a2);  // 0x49EFA0 G42.33 b3 supplied-body sync
    static unsigned int * Construct(StringVector * aP1, int a2, int a3);  // G57w10-S raw 0x005AD6F0 (was C2597 interim stub)
    static char Insert(void *aP0, const char **aP1, int aP2);  // G57a1 static-form sync (addr63 0x7ac28f+)
};

} // namespace gamemd
