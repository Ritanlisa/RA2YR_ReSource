// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct VectorClass_ptr_ConvertClass {
// --- flat members (BEGIN) ---
    unsigned int vfptr;  // 0x0
    void* Items;  // 0x4
    void* Capacity;  // 0x8
    void* IsInitialized;  // 0xC
    unsigned char IsAllocated;  // 0xD
    unsigned char q00E;  // 0xE
    void* Count;  // 0x10
    unsigned int CapacityIncrement;  // 0x14
    unsigned char q018;  // 0x18
    void* q01C;  // 0x1C
    unsigned int q020;  // 0x20
    unsigned int u32_24;  // 0x24
    void* q028;  // 0x28
    unsigned char q02C;  // 0x2C
    unsigned char q030;  // 0x30
    unsigned int q034;  // 0x34
    unsigned char q038;  // 0x38
    unsigned char q03C;  // 0x3C
    void* q040;  // 0x40
    unsigned char q044;  // 0x44
    unsigned char q048;  // 0x48
    unsigned char q04C;  // 0x4C
    unsigned int q050;  // 0x50
    unsigned int q054;  // 0x54
    unsigned char q058;  // 0x58
    unsigned char q05C;  // 0x5C
    void* q064;  // 0x64
    unsigned char q068;  // 0x68
    unsigned char q06C;  // 0x6C
    unsigned char q078;  // 0x78
    unsigned char q07C;  // 0x7C
    unsigned int q080;  // 0x80
    unsigned int q084;  // 0x84
    unsigned char q088;  // 0x88
    unsigned char q08C;  // 0x8C
    void* q100;  // 0x100
    unsigned char q104;  // 0x104
    unsigned char q108;  // 0x108
    unsigned char q120;  // 0x120
    unsigned char q124;  // 0x124
    CampaignClass * ptr_170;  // 0x170
    unsigned char q174;  // 0x174
    CampaignClass * ptr_178;  // 0x178
    unsigned char q17C;  // 0x17C
    unsigned char q26C;  // 0x26C
    unsigned char q270;  // 0x270
    CampaignClass * q368;  // 0x368
    unsigned char q36C;  // 0x36C
    unsigned char q370;  // 0x370
    unsigned char q374;  // 0x374
    unsigned char q398;  // 0x398
    unsigned char q39C;  // 0x39C
    unsigned char q5F0;  // 0x5F0
    unsigned char q5F4;  // 0x5F4
    unsigned char q87C;  // 0x87C
    unsigned char q880;  // 0x880
    unsigned char q884;  // 0x884
    unsigned char q890;  // 0x890
    unsigned char q894;  // 0x894
    unsigned char q920;  // 0x920
    unsigned char q924;  // 0x924
    unsigned char q1394;  // 0x1394
    unsigned char q1398;  // 0x1398
    unsigned char q1694;  // 0x1694
    unsigned char q1698;  // 0x1698
    unsigned char q216C;  // 0x216C
    unsigned char q2170;  // 0x2170
    unsigned char q2178;  // 0x2178
    unsigned char q217C;  // 0x217C
// --- flat members (END) ---
    ConvertClass * Constructor_ConvertClass(char a2);  // 0x491210
    void MarkDirty();  // 0x4E1960
    void Destroy();  // 0x491390
    unsigned int GetItemIndex(int a2);  // 0x4913C0
    int Get(int a2);  // 0x4913E0
    char Add(int a2);  // 0x49AE80
    char Release(int a2,  unsigned int * a3);    // 0x49AEC0
    void Remove();  // 0x49AF70
    int GetSize(unsigned int * a2);  // 0x49AFA0
    unsigned int GetCapacity(int a2);  // 0x49AFE0
    char SetCapacity(int a2,  unsigned int * a3);    // 0x49B000
    int FindItemIndex(unsigned int * a2);  // 0x49B0B0
    VectorClass_flat * QueryInterface(unsigned int * Block,  char a2);    // 0x49B0E0
    DynamicVector * Constructor_VectorClass_ConvertClass___(unsigned int * Block,  char a2);    // 0x49B130
};
} // namespace gamemd
