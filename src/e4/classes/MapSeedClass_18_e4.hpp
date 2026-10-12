// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct VectorClass_flat;  // fix_fwd_type_supply
struct DynamicVector;  // fix_fwd_type_supply
struct MapSeedClass_18 {
// --- flat members (BEGIN) ---
    bool IsAllocated;  // 0xD
    bool IsInitialized;  // 0x12
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
    unsigned int  Generate(int a2, void *a1 = 0, void *a3 = 0);  // 0x5ACBC0
    unsigned char *m_1;  // 0x1 (offset-truth)
    unsigned int m_10;  // 0x10 (offset-truth)
    unsigned int m_8;  // 0x8 (offset-truth)
    unsigned int m_C;  // 0xC (offset-truth)
};
} // namespace gamemd
