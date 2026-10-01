// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct TypeList_Particle {
// --- flat members (BEGIN) ---
    unsigned int vfptr;  // 0x0
    void* Items;  // 0x4
    void* Capacity;  // 0x8
    void* IsInitialized;  // 0xC
    unsigned char IsAllocated;  // 0xD
    unsigned char q00E;  // 0xE
    unsigned int *__pad_0;
    unsigned int *m_1;
    unsigned int m_8;
    unsigned int m_C;
// --- flat members (END) ---
    int  GetIndex(int a2);  // 0x459FE0
    char  AddRef(int a2);  // 0x45A180
    char  Remove(int a2, unsigned int * a3);  // 0x45A1C0
    int  GetSize(unsigned int * a2);  // 0x45A2A0
    unsigned int  GetCapacity(int a2);  // 0x45A2E0
    VectorClass_flat *  Add(unsigned int * Block, char a2);  // 0x45A9C0
};
} // namespace gamemd
