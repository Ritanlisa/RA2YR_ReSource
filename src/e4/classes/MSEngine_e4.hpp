// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct CampaignClass;  // fix_fwd_type_supply
struct VectorClass_flat;  // fix_fwd_type_supply
struct DynamicVector;  // fix_fwd_type_supply
struct MSEngine {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    void* q004;  // 0x4
    void* q008;  // 0x8
    bool q00A;  // 0xA
    bool q00B;  // 0xB
    unsigned int u32_C;  // 0xC
    void* IsAllocated;  // 0xD
    bool q00E;  // 0xE
    void* q010;  // 0x10
// --- flat members (END) ---
    AbstractClass * * Release(int a2, char * a3);  // 0x5ACD30
    AbstractClass * * SetCapacity(int a2, char * a3);  // 0x5ACED0
    CampaignClass * Destructor();  // 0x5CEE60
    CampaignClass * Construct();  // 0x5D1AA0
    CampaignClass * Destruct();  // 0x5D1B30
    int ProcessEvents(char aP1, int a3);  // 0x5D1DF0
    CampaignClass * ClearBuffer(void *a1_1);  // 0x5AC520
    unsigned int * Shutdown(unsigned int * a2, int a3);  // 0x5AC570
    char AddRef(int a2);  // 0x5ACCC0
    CampaignClass * ddtor();  // 0x5ACE20
    CampaignClass * Init(unsigned int * a2, void *a2_2, void *a3_1, void *a4_1, void *a5_1, void *a6_1, void *a7_1, void *a8_1);  // 0x5ACE50
    int FindItem(unsigned int * a2);  // 0x5ACFC0
    VectorClass_flat * QueryInterface(unsigned int * Block, char a2);  // 0x5AD4D0
    CampaignClass * Constructor(unsigned int * Block, char a2, void *a3_1);  // 0x5AD520
    unsigned int PointerToIndex(int a2);  // 0x5AC550
    unsigned int Run(int a2);  // 0x5ACEB0
    void DestroyData(void *a1_1);  // 0x5D5850
    unsigned char m_1;  // 0x1 (offset-truth)
    unsigned int m_10;  // 0x10 (offset-truth)
    unsigned int m_8;  // 0x8 (offset-truth)
    unsigned int m_C;  // 0xC (offset-truth)
    unsigned int q000;  // 0x0 (offset-truth)
    unsigned int q0084;  // 0x84 (offset-truth)
    unsigned int q0108;  // 0x108 (offset-truth)
    unsigned int u32_18;  // 0x18 (offset-truth)
    unsigned int u32_1C;  // 0x1C (offset-truth)
    unsigned int u32_24;  // 0x24 (offset-truth)
    unsigned char u32_25;  // 0x25 (offset-truth)
    unsigned char u32_39;  // 0x39 (offset-truth)
    unsigned int u32_3C;  // 0x3C (offset-truth)
    unsigned char u32_3D;  // 0x3D (offset-truth)
    unsigned int u32_44;  // 0x44 (offset-truth)
    unsigned int u32_48;  // 0x48 (offset-truth)
    unsigned int u32_4C;  // 0x4C (offset-truth)
    unsigned char u32_51;  // 0x51 (offset-truth)
};
} // namespace gamemd
