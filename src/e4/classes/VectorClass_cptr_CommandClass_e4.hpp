// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct VectorClass_cptr_CommandClass {
    unsigned int __pad_0;  // 0x0
    void* Items;  // 0x4
    unsigned int m_8;  // 0x8
    char IsInitialized[1];  // 0xC
    unsigned char IsAllocated;  // 0xD
    unsigned short __pad_00E;  // 0xE
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    char  Release(int a2, unsigned int * a3);  // 0x40BEF0
    int  Capacity(int a2);  // 0x40BEA0
    char  GetAt(int a2);  // 0x40BEB0
    void SetAt();  // 0x40BFA0
    int  GetSize(unsigned int * a2);  // 0x40BFD0
    unsigned int  GetCapacity(int a2);  // 0x40C010
};
} // namespace gamemd
