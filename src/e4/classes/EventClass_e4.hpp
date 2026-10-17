// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct BuildingTypeClass;  // fix_fwd_type_supply
struct DynamicVector;  // fix_fwd_type_supply
struct VectorClass_flat;  // fix_fwd_type_supply
struct EventClass {
#pragma pack(push, 1)  // X60: binary-packed layout
    int EventClass_field_0x0;  // 0x0
    int EventClass_field_0x4;  // 0x4
    int EventClass_field_0x8;  // 0x8
    int EventClass_field_0xC;  // 0xC
    char __pad_10[5];  // 0x10
    unsigned int u32_15;  // 0x15
    char __pad_19[11];  // 0x19
    int EventClass_field_0x24;  // 0x24
    int q028;  // 0x28
    unsigned int u32_2C;  // 0x2C
    int EventClass_field_0x30;  // 0x30
    char __pad_34[4];  // 0x34
    int q038;  // 0x38
    unsigned long long __pad_3C;  // 0x3C
    int q044;  // 0x44
    int q048;  // 0x48
    int u32_4C;  // 0x4C
    int q050;  // 0x50
    int q054;  // 0x54
    char __pad_58[960];  // 0x58
    char __pad_418[264];  // 0x418
    int EventClass_field_0x520;  // 0x520
    int EventClass_field_0x524;  // 0x524
    int EventClass_field_0x528;  // 0x528
    char __pad_52C[960];  // 0x52C
    char __pad_8EC[712];  // 0x8EC
    int EventClass_field_0xBB4;  // 0xBB4
    char __pad_BB8[598];  // 0xBB8
    char EventClass_field_0xE0E[4];  // 0xE0E
    char __pad_E12[960];  // 0xE12
    char __pad_11D2[960];  // 0x11D2
    char __pad_1592[299];  // 0x1592
    char EventClass_field_0x16BD[4];  // 0x16BD
    char __pad_16C1[1];  // 0x16C1
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    int serializeEvent(void *a1_1);  // 0x48B390
    int SetData(int a2, int a3, int a4, int a5, int a6);  // 0x48BAD0
    void * Add(AbstractClass * aP1, unsigned char a3, int a4, char a5);  // 0x4C65E0
    int AddEvent(int a2, uint8_t a3, void *a3_1 = 0);
    int Add2(int a3, uint8_t aP1, int aP3, void *a4 = 0);
    char * AddEventEx(int a2, uint8_t a3, int a4, int a5, int a6);  // G57w10-S raw 0x004C6970 IUnknown 占位清除
    int  Init(int a2, char a3, int a4, int a5, int a6, unsigned short * a7);  // 0x4C6AE0
    AbstractClass * * ProcessEvent();  // 0x4C6CB0
    int deserializeEvent(int a2, unsigned int *aP2);  // G57w10-S raw 0x00542280 IUnknown 占位清除
    int Enqueue(unsigned short a2, char a3);  // 0x54F200
    int CheckFlag(void *a1 = 0);  // 0x5F19C0
    AbstractClass * * validateEventType();  // 0x664440
    SHORT GetKeyStateSafe(unsigned char nVirtKey);  // 0x53EC70
    void initEvent();  // 0x40B6A0
    char  processEvent(int a2, unsigned int * a3);  // 0x40B740
    char  validateEvent(int a2, unsigned int * a3);  // 0x40B880
    char  dispatchEvent(int a2, unsigned int * a3);  // 0x40B9A0
    char checkCondition(int a2, unsigned int * a3, void *a3_2);  // 0x40BAE0
    DynamicVector *  executeAction(char a2);  // 0x40BC10
    unsigned int * resetEvent(int aP1, int aP2, void *a3 = 0);  // 0x40BD00
    VectorClass_flat *  queueEvent(char a2);  // 0x40C110
    char  clearEvents(int a2, unsigned int * a3);  // 0x40C410
    void finalizeEvent();  // 0x40BE10
    unsigned int  dequeueEvent(int a2);  // 0x40C260
    void getEventCount();  // 0x40C590
    int  GetState(int a1);  // 0x5F3440
#pragma pack(pop)
};
} // namespace gamemd
