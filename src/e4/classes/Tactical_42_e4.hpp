// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct Tactical_42 {
// --- flat members (BEGIN) ---
    unsigned char q000;  // 0x0
    void* q004;  // 0x4
    int q008;  // 0x8
    bool q00C;  // 0xC
    bool IsAllocated;  // 0xD
    unsigned int q010;  // 0x10
    bool IsInitialized;  // 0x12
// --- flat members (END) ---
struct VectorClass_flat;  // fix_fwd_type_supply
    int FindItem(unsigned int * a2);  // 0x6E4A80
    unsigned int * loc_6E4B00(unsigned int * Block, char a2);  // 0x6E4B00
    void ClearBuffer(void *a1_1);  // 0x6E47F0
    int UpdateView(int a2);  // 0x6E4840
    char AddRef(int a2);  // 0x6E4850
    char Release(int a2, unsigned int * a3);  // 0x6E4890
    void ddtor(void *a1_1, void *a2_1);  // 0x6E4940
    char SetCapacity(int a2, unsigned int * a3);  // 0x6E49D0
    VectorClass_flat * QueryInterface(unsigned int * Block, char a2);  // 0x6E4AB0
    unsigned int PointerToIndex(int a2);  // 0x6E4820
    unsigned int InitMap(int a2);  // 0x6E49B0
};
} // namespace gamemd
