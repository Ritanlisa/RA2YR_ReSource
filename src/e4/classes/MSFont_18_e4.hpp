// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct MSFont_18 {
// --- flat members (BEGIN) ---
    unsigned char q000;  // 0x0
    void* q004;  // 0x4
    int q008;  // 0x8
    bool q00C;  // 0xC
    bool IsAllocated;  // 0xD
    int q010;  // 0x10
    bool IsInitialized;  // 0x12
    unsigned int *__pad_0;
    unsigned int *m_1;
    unsigned int m_10;
    unsigned int m_8;
    unsigned int m_C;
// --- flat members (END) ---
struct VectorClass_flat;  // fix_fwd_type_supply
struct DynamicVector;  // fix_fwd_type_supply
    AbstractClass * * SetCapacity8(int a2, unsigned int * a3);  // 0x5D55A0
    void ClearBuffer(void *a1_1);  // 0x5D5080
    int GetSize(int a2);  // 0x5D50D0
    void Destroy(void *a1_1);  // 0x5D50E0
    char AddRef(int a2);  // 0x5D5150
    char Release(int a2, unsigned int * a3);  // 0x5D5190
    void ddtor();  // 0x5D5240
    int Create(unsigned int * a2);  // 0x5D5270
    char SetCapacity(int a2, unsigned int * a3);  // 0x5D52D0
    int FindItem(unsigned int * a2);  // 0x5D5380
    int FindPair8(unsigned int * a2);  // 0x5D56A0
    VectorClass_flat * QueryInterface(unsigned int * Block, char a2);  // 0x5D56E0
    DynamicVector * Constructor_VectorClass_HWND_____(unsigned int * Block, char a2);  // 0x5D5730
    DynamicVector * Constructor_VectorClass_AcceleratorTracker_(unsigned int * Block, char a2);  // 0x5D57D0
    unsigned int PointerToIndex(int a2);  // 0x5D50B0
    unsigned int PointerToIndex8(int a2);  // 0x5D5110
    unsigned int Draw(int a2);  // 0x5D52B0
};
} // namespace gamemd
