// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct VectorClass_flat;  // fix_fwd_type_supply
struct AbstractClass;  // fix_fwd_type_supply
struct VectorClass_Cell {
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
// --- flat members (END) ---
    AbstractClass * * Release(int a2, unsigned int * a3);  // 0x42F6F0
    VectorClass_flat *  QueryInterface(unsigned int * Block, char a2);  // 0x42FBA0
    int GetSize(unsigned short * a2);  // 0x42F7F0
    unsigned int GetCapacity(int a2);  // 0x42F840
};
} // namespace gamemd
