// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct CampaignClass;  // fix_fwd_type_supply
struct VectorClass_flat;  // fix_fwd_type_supply
struct DynamicVector;  // fix_fwd_type_supply
struct AbstractClass;  // fix_fwd_type_supply
struct MSEngine {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    void* q004;  // 0x4
    void* q008;  // 0x8
    bool q00A;  // 0xA
    bool q00B;  // 0xB
    void *qC;  // 0xC
    void* IsAllocated;  // 0xD
    bool q00E;  // 0xE
    void* q010;  // 0x10
    unsigned int MSEngine_field_0x4;
    unsigned int MSEngine_field_0x8;
    unsigned int *MSEngine_field_0xC;
    unsigned int *__pad_0;
    unsigned int *m_1;
    unsigned int m_10;
    unsigned int m_8;
    unsigned int m_C;
    unsigned int q0040;
    unsigned int q0042;
    unsigned int q0043;
    unsigned int q0046;
    unsigned int q0084;
    unsigned int q0108;
    unsigned int q018;
    unsigned int u32_18;
    unsigned int u32_1C;
    unsigned int u32_24;
    unsigned int u32_25;
    unsigned int u32_30;
    unsigned int u32_39;
    unsigned int u32_3C;
    unsigned int u32_3D;
    unsigned int u32_44;
    unsigned int u32_48;
    unsigned int u32_4C;
    unsigned int u32_51;
    unsigned int u32_C;
    unsigned int SessionClass;
    unsigned int Timer;
// --- flat members (END) ---
    AbstractClass * * Release(int a2, char * a3);  // 0x5ACD30
    AbstractClass * * SetCapacity(int a2, char * a3);  // 0x5ACED0
    CampaignClass * Destructor(void *a1_1);  // 0x5CEE60
    CampaignClass * Construct(void *a1_1, void *a2_1, void *a3_1, void *a4_1, void *a5_1, void *a6_1);  // 0x5D1AA0
    CampaignClass * Destruct(void *a1_1, void *a2_1);  // 0x5D1B30
    int ProcessEvents(MSVQAnim * aP1, int a3, void *a3_2);  // 0x5D1DF0
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
};
} // namespace gamemd
