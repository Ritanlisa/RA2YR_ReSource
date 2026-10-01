// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct TeamTypeClass_28 {
// --- flat members (BEGIN) ---
    unsigned char q000;  // 0x0
    void* q004;  // 0x4
    int q008;  // 0x8
    unsigned int q00C;  // 0xC
    bool IsAllocated;  // 0xD
    int q010;  // 0x10
// --- flat members (END) ---
    char  Release(int a2, int * a3);  // 0x6F22F0
    char  SetCapacity(int a2, int * a3);  // 0x6F24B0
    void ClearBuffer(void *a1 = 0);  // 0x6F21B0
    unsigned int *  Seek(unsigned int * a2, int a3, void *a1 = 0);  // 0x6F2210
    char  AddRef(int a2);  // 0x6F2290
    void ddtor(void ** Block, char a2);  // 0x6F2400
    int  Read(unsigned int * a2, void *a1 = 0);  // 0x6F2440
    int  FindItem(unsigned int * a2);  // 0x6F2640
    VectorClass_flat *  QueryInterface(unsigned int * Block, char a2);  // 0x6F2680
    DynamicVector *  Constructor(unsigned int * Block, char a2, void *a1 = 0);  // 0x6F2720
    unsigned int  PointerToIndex(int a2);  // 0x6F21F0
    unsigned int  Write(int a2);  // 0x6F2490
};
} // namespace gamemd
