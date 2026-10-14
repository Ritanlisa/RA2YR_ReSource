// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct VectorClass_flat;  // fix_fwd_type_supply
struct DynamicVectorClass_PAD_16 {
// --- flat members (BEGIN) ---
    unsigned int vfptr;  // 0x0
    unsigned int Items;  // 0x4
    unsigned int Capacity;  // 0x8
    unsigned char IsInitialized;  // 0xC
    unsigned char IsAllocated;  // 0xD
// --- flat members (END) ---
    int Get(int a2, void *a2_2);  // 0x49EA00
    char Add(int a2, void *a2_2, void *a3_1);  // 0x49EB50
    char  Release(int a2, unsigned int * a3);  // 0x49EB90
    void Remove(void *a1_1, void *a2 = 0);  // 0x49EC40
    int  GetSize(unsigned int * a2);  // 0x49EC70
    VectorClass_flat *  QueryInterface(char a2);  // 0x49EFF0
    unsigned int  GetCapacity(int a2);  // 0x49ECB0
    unsigned int m_8;  // pad compile-supply (G41.47)
    unsigned char m_1[64];  // pad compile-supply (G41.47)
};
} // namespace gamemd
