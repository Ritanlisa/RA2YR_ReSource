// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct VectorClass_flat;  // fix_fwd_type_supply
struct DynamicVector;  // fix_fwd_type_supply
struct MapSeedClass_18 {
    unsigned int __pad_0;  // 0x0
    int q004;  // 0x4
    unsigned int m_8;  // 0x8
    unsigned int m_C;  // 0xC
    int m_10;  // 0x10
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    void ClearBuffer(void *a1_1);  // 0x5AC4C0
    int  GetCell(int a2);  // 0x5AC510
    char  AddRef(int a2);  // 0x5ACA60
    char  Release(int a2, unsigned int * a3);  // 0x5ACAA0
    void ddtor(void *a1 = 0);  // 0x5ACB50
    char  SetCapacity(int a2, unsigned int * a3);  // 0x5ACBE0
    int  FindItem(unsigned int * a2);  // 0x5ACC90
    VectorClass_flat *  QueryInterface(char a2);  // 0x5AD430
    DynamicVector *  Constructor_VectorClass__WIN32_FIND_DATAA___(char a2);  // 0x5AD480
    unsigned int  PointerToIndex(int a2);  // 0x5AC4F0
    unsigned int Generate(int a2, void *a2_1 = 0, void *a3 = 0);  // 0x5ACBC0
};
} // namespace gamemd
