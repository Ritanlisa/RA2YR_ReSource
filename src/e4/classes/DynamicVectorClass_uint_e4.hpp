// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once



#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct BufferIOFileClass;  // fix_fwd_type_supply
struct CampaignClass;  // fix_fwd_type_supply
struct VectorClass_flat;  // fix_fwd_type_supply
struct DynamicVectorClass_uint {
    void* ptr_0;  // 0x0
    void* Items;  // 0x4
    int Capacity;  // 0x8
    char IsInitialized[1];  // 0xC
    unsigned char IsAllocated;  // 0xD
    unsigned char tail_E;  // 0xE
    char __pad_F[1];  // 0xF
    int Count;  // 0x10
    unsigned int CapacityIncrement;  // 0x14
    char tail_18[92];  // 0x18
// --- flat members (BEGIN) ---
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
    DynamicVectorClass_uint * Add(unsigned int * Block, char a2, void *a3_1);  // 0x42DB60
    unsigned int  GetCapacity(int a2);  // 0x42D760
};
} // namespace gamemd
