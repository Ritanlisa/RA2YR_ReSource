// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct VectorClass_flat;  // fix_fwd_type_supply
struct FoggedObjectClass_42 {
    void* ptr_4;  // 0x0
    void* Items;  // 0x4
    int Capacity;  // 0x8
    unsigned int IsInitialized;  // 0xC
    int Count;  // 0x10
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    int  FindItem(unsigned int * a2);  // 0x4E07B0
    unsigned int *  loc_4E0D30(char a2);  // 0x4E0D30
    void ClearBuffer(void *a1_1);  // 0x4E01F0
    int  Seek(int a2, void *a2_2 = 0, void *a3_1 = 0);  // 0x4E0240
    char  AddRef(int a2);  // 0x4E0580
    char  Release(int a2, unsigned int * a3);  // 0x4E05C0
    void ddtor(void *a1 = 0);  // 0x4E0670
    int Read(unsigned int * a2, void *a2_2, void *a3 = 0);  // 0x4E06A0
    char  SetCapacity(int a2, unsigned int * a3);  // 0x4E0700
    VectorClass_flat *  QueryInterface(char a2);  // 0x4E0CE0
    unsigned int  PointerToIndex(int a2);  // 0x4E0220
    unsigned int  Write(int a2);  // 0x4E06E0
};
} // namespace gamemd
