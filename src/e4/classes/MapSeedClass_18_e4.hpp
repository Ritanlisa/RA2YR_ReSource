// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct MapSeedClass_18 {
// --- flat members (BEGIN) ---
    unsigned char q000;  // 0x0
    void* q004;  // 0x4
    int q008;  // 0x8
    bool q00C;  // 0xC
    bool IsAllocated;  // 0xD
    int q010;  // 0x10
    bool IsInitialized;  // 0x12
    unsigned int m_1;
    unsigned int m_10;
    unsigned int m_C;
    unsigned int m_8;
// --- flat members (END) ---
    void ClearBuffer();  // 0x5AC4C0
    int GetCell(int a2);  // 0x5AC510
    char AddRef(int a2);  // 0x5ACA60
    char Release(int a2,  unsigned int * a3);    // 0x5ACAA0
    bool ddtor(char* lpFileName);  // 0x5ACB50
    char SetCapacity(int a2,  unsigned int * a3);    // 0x5ACBE0
    int FindItem(unsigned int * a2);  // 0x5ACC90
    VectorClass_flat * QueryInterface(char a2);  // 0x5AD430
    DynamicVector * Constructor_VectorClass__WIN32_FIND_DATAA___(char a2);  // 0x5AD480
    unsigned int PointerToIndex(int a2);  // 0x5AC4F0
    unsigned int Generate(int a2);  // 0x5ACBC0
};
} // namespace gamemd
