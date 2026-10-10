// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once



#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct BufferIOFileClass;  // fix_fwd_type_supply
struct CampaignClass;  // fix_fwd_type_supply
struct VectorClass_flat;  // fix_fwd_type_supply
struct DynamicVectorClass_uint {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    void* Items;  // 0x4
    void* Capacity;  // 0x8
    void* IsInitialized;  // 0xC
    unsigned char IsAllocated;  // 0xD
    unsigned int tail_E;  // 0xE
    void* Count;  // 0x10
    unsigned int CapacityIncrement;  // 0x14
    unsigned int tail_18;  // 0x18
// --- flat members (END) ---
    wchar_t * ddtor(void *a1_1);  // 0x42D540
    int  Clear(int a2);  // 0x42D590
    char  AddRef(int a2);  // 0x42D600
    char  SetCapacity(int a2, unsigned int * a3);  // 0x42D640
    void Clear_0();  // 0x42D6F0
    int  FindItemIndex(unsigned int * a2);  // 0x42D720
    char  Remove(int a2, unsigned int * a3);  // 0x42D780
    int  GetSize(unsigned int * a2);  // 0x42D880
    VectorClass_flat *  Destructor(char a2);  // 0x42DB10
    DynamicVectorClass_uint *  Add(char a2, void *a1 = 0, void *a3 = 0);  // 0x42DB60
    unsigned int  GetCapacity(int a2);  // 0x42D760
    unsigned char *m_1;  // 0x1 (offset-truth)
    unsigned int m_8;  // 0x8 (offset-truth)
    unsigned int m_C;  // 0xC (offset-truth)
    static double m_10(...);  // plateau: C2039/C3861 stub
};
} // namespace gamemd
