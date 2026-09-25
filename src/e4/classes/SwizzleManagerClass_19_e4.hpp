// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct SwizzleManagerClass_19 {
// --- flat members (BEGIN) ---
    unsigned char q000;  // 0x0
    void* q004;  // 0x4
    int q008;  // 0x8
    unsigned int q00C;  // 0xC
    bool IsAllocated;  // 0xD
    int q010;  // 0x10
    unsigned char q014;  // 0x14
    int Count;  // 0x16
    unsigned int q018;  // 0x18
    unsigned char q01C;  // 0x1C
    unsigned int q024;  // 0x24
    unsigned char q028;  // 0x28
    int q034;  // 0x34
    unsigned char q038;  // 0x38
    unsigned char q04C;  // 0x4C
    unsigned char q050;  // 0x50
    unsigned int q054;  // 0x54
    unsigned int Capacity;
    unsigned int IsInitialized;
    unsigned int Items;
    unsigned int Items2;
    unsigned int q0042;
// --- flat members (END) ---
    char Release(int a2, unsigned int * a3);  // 0x6CF5A0
    char SetCapacity(int a2, unsigned int * a3);  // 0x6CF720
    void ClearBuffer();  // 0x6CF4F0
    unsigned int * Lookup(unsigned int * a2, int a3);  // 0x6CF540
    char AddRef(int a2);  // 0x6CF560
    void ddtor();  // 0x6CF690
    int Init(unsigned int * a2);  // 0x6CF6C0
    int FindItem(unsigned int * a2);  // 0x6CF820
    VectorClass_flat * QueryInterface(char a2);  // 0x6CF850
    DynamicVector * Constructor_VectorClass_SwizzlePointerClass_(char a2);  // 0x6CF8A0
    unsigned int PointerToIndex(int a2);  // 0x6CF520
    unsigned int Add(int a2);  // 0x6CF700
};
} // namespace gamemd
