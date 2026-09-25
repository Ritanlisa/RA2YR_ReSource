// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct VectorClass_cptr_MultiMission {
// --- flat members (BEGIN) ---
    unsigned int vfptr;  // 0x0
    void* Items;  // 0x4
    void* IsInitialized;  // 0xC
    unsigned char IsAllocated;  // 0xD
    unsigned char q00E;  // 0xE
    void* Count;  // 0x10
    unsigned char q014;  // 0x14
    unsigned int q018;  // 0x18
    unsigned char q01C;  // 0x1C
    unsigned char q020;  // 0x20
    unsigned int q024;  // 0x24
    unsigned char q028;  // 0x28
    unsigned char q02C;  // 0x2C
    unsigned char q030;  // 0x30
    unsigned int q034;  // 0x34
    unsigned char q038;  // 0x38
    unsigned char q03C;  // 0x3C
    unsigned char q044;  // 0x44
    unsigned char q048;  // 0x48
    unsigned char q050;  // 0x50
    unsigned int q054;  // 0x54
// --- flat members (END) ---
    int j_vt09(unsigned char * a1,  signed int a3,  int a4,  int a5,  int a6,  int a7);    // 0x5EF190
    unsigned int * j_vt00(char a2);  // 0x5EF290
    void Destroy();  // 0x5EEBB0
    char SetAt(int a2,  unsigned int * a3);    // 0x5EEC50
    char SetCapacity(int a2,  unsigned int * a3);    // 0x5EED90
    int FindItemIndex(unsigned int * a2);  // 0x5EEE90
    VectorClass_flat * GetAt(unsigned int * Block,  char a2);    // 0x5EEEC0
    DynamicVector * Constructor(unsigned int * Block,  char a2);    // 0x5EEF10
    unsigned int GetItemIndex(int a2);  // 0x5EEBE0
    int Capacity(int a2);  // 0x5EEC00
    char AddRef(int a2);  // 0x5EEC10
    int GetSize(unsigned int * a2);  // 0x5EED30
    unsigned int GetCapacity(int a2);  // 0x5EED70
};
} // namespace gamemd
