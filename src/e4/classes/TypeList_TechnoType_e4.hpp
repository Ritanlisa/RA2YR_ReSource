// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct TypeList_TechnoType {
// --- flat members (BEGIN) ---
    unsigned int vfptr;  // 0x0
    void* Items;  // 0x4
    void* Capacity;  // 0x8
    void* IsInitialized;  // 0xC
    unsigned char IsAllocated;  // 0xD
    unsigned char q00E;  // 0xE
    unsigned int *m_1;
    unsigned int m_8;
    unsigned int m_C;
    unsigned int *__pad_0;
// --- flat members (END) ---
struct VectorClass_flat;  // fix_fwd_type_supply
    int Clear(int a2);  // 0x4778F0
    char AddRef(int a2);  // 0x477FC0
    char Remove(int a2, unsigned int * a3);  // 0x478000
    void ddtor();  // 0x4780B0
    int GetSize(unsigned int * a2);  // 0x4780E0
    unsigned int GetIndex(int a2);  // 0x478120
    VectorClass_flat * Add(unsigned int * Block, char a2, void *a3_1);  // 0x478680
};
} // namespace gamemd
