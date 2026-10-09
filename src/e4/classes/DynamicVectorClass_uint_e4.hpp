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
    bool q00A;  // 0xA
    void* IsInitialized;  // 0xC
    unsigned char IsAllocated;  // 0xD
    unsigned int tail_E;  // 0xE
    void* Count;  // 0x10
    unsigned int q011;  // 0x11
    unsigned int CapacityIncrement;  // 0x14
    unsigned char q018;  // 0x18
    unsigned int q01A;  // 0x1A
    unsigned char q01C;  // 0x1C
    unsigned int q020;  // 0x20
    unsigned char q024;  // 0x24
    unsigned char q028;  // 0x28
    BufferIOFileClass* q02A;  // 0x2A
    bool q02B;  // 0x2B
    char q02C[4];  // 0x2C
    bool q02D;  // 0x2D
    CampaignClass* q030;  // 0x30
    unsigned char q031;  // 0x31
    unsigned char q034;  // 0x34
    unsigned int q038;  // 0x38
    unsigned int u32_3C;  // 0x3C
    unsigned char q040;  // 0x40
    char q044[4];  // 0x44
    CampaignClass* q048;  // 0x48
    unsigned char q04C;  // 0x4C
    unsigned int q050;  // 0x50
    unsigned char q054;  // 0x54
    unsigned char q058;  // 0x58
    unsigned char q064;  // 0x64
    char q068[4];  // 0x68
    ObjectClass* q070;  // 0x70
// --- flat members (END) ---
    wchar_t * ddtor(void *a1_1);  // 0x42D540
    int Clear(int a2);  // 0x42D590
    char AddRef(int a2);  // 0x42D600
    char SetCapacity(int a2, unsigned int * a3);  // 0x42D640
    void Clear_0();  // 0x42D6F0
    int FindItemIndex(unsigned int * a2);  // 0x42D720
    char Remove(int a2, unsigned int * a3);  // 0x42D780
    int GetSize(unsigned int * a2);  // 0x42D880
    VectorClass_flat * Destructor(unsigned int * Block, char a2);  // 0x42DB10
    DynamicVectorClass_uint * Add(unsigned int * Block, char a2, void *a3_1);  // 0x42DB60
    unsigned int GetCapacity(int a2);  // 0x42D760
    unsigned char m_1;  // 0x1 (offset-truth supply)
    unsigned int m_8;  // 0x8 (offset-truth supply)
    unsigned int m_C;  // 0xC (offset-truth supply)
};
} // namespace gamemd
