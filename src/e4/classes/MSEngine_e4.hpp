// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct CampaignClass;  // fix_fwd_type_supply
struct VectorClass_flat;  // fix_fwd_type_supply
struct DynamicVector;  // fix_fwd_type_supply
struct MSEngine {
    char __pad_0[4];  // 0x0
    void* MSEngine_field_0x4;  // 0x4
    int MSEngine_field_0x8;  // 0x8
    unsigned int m_C;  // 0xC
    unsigned int m_10;  // 0x10
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    char Release(int a2, char * a3);  // 0x5ACD30
    char SetCapacity(int a2, char * a3);  // 0x5ACED0
    CampaignClass * Destructor(void *a1 = 0);  // 0x5CEE60
    CampaignClass * Construct(void *a1 = 0, void *a2 = 0, void *a3 = 0, void *a4 = 0, void *a5 = 0, void *a6 = 0, void *a7 = 0, void *a8 = 0, void *a9 = 0);  // 0x5D1AA0
    CampaignClass * Destruct(void *a1 = 0);  // 0x5D1B30
    int ProcessEvents(char aP1, int a3);  // 0x5D1DF0
    CampaignClass * ClearBuffer(void *a1_1);  // 0x5AC520
    unsigned int *  Shutdown(unsigned int * a2, int a3);  // 0x5AC570
    char  AddRef(int a2);  // 0x5ACCC0
    CampaignClass * ddtor(void *a1 = 0);  // 0x5ACE20
    int Init(unsigned int * a2, void *a1 = 0, void *a3_1 = 0, void *a4_1 = 0, void *a5_1 = 0, void *a6_1 = 0, void *a7_1 = 0, void *a8_1 = 0);  // 0x5ACE50
    int  FindItem(unsigned int * a2);  // 0x5ACFC0
    VectorClass_flat *  QueryInterface(char a2);  // 0x5AD4D0
    CampaignClass * Constructor(unsigned int * Block, char a2, void *a3_1, void *a4 = 0);  // 0x5AD520
    unsigned int  PointerToIndex(int a2);  // 0x5AC550
    unsigned int  Run(int a2);  // 0x5ACEB0
    void DestroyData(void *a1_1);  // 0x5D5850
};
} // namespace gamemd
