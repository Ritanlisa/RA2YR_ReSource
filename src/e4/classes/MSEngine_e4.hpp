// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct CampaignClass;  // fix_fwd_type_supply
struct VectorClass_flat;  // fix_fwd_type_supply
struct DynamicVector;  // fix_fwd_type_supply
struct MSEngine {
    char ptr_0[1];  // 0x0
    unsigned char q001;  // 0x1
    char __pad_2[2];  // 0x2
    unsigned char MSEngine_field_0x4;  // 0x4
    char __pad_5[3];  // 0x5
    int q008;  // 0x8
    unsigned char u32_C;  // 0xC
    bool IsAllocated;  // 0xD
    char __pad_E[2];  // 0xE
    int q010;  // 0x10
    char __pad_14[4];  // 0x14
    unsigned int u32_18;  // 0x18
    unsigned int u32_1C;  // 0x1C
    unsigned int u32_20;  // 0x20
    unsigned char u32_24;  // 0x24
    unsigned char u32_25;  // 0x25
    char __pad_26[2];  // 0x26
    unsigned int u32_28;  // 0x28
    unsigned int u32_2C;  // 0x2C
    unsigned int u32_30;  // 0x30
    unsigned int q034;  // 0x34
    unsigned char u32_38;  // 0x38
    unsigned char u32_39;  // 0x39
    char __pad_3A[2];  // 0x3A
    unsigned char u32_3C;  // 0x3C
    unsigned char u32_3D;  // 0x3D
    char __pad_3E[2];  // 0x3E
    unsigned int u32_40;  // 0x40
    unsigned int u32_44;  // 0x44
    unsigned int u32_48;  // 0x48
    unsigned int u32_4C;  // 0x4C
    unsigned char q050;  // 0x50
    unsigned char u32_51;  // 0x51
    char __pad_52[118];  // 0x52
    unsigned int q0C8;  // 0xC8
    unsigned int q0CC;  // 0xCC
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
    void DestroyData(MSEngine *a1_1);  // 0x5D5850 (raw thiscall this=MSEngine)
};
} // namespace gamemd