// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct BuildingTypeClass;  // fix_fwd_type_supply
struct DynamicVector;  // fix_fwd_type_supply
struct VectorClass_flat;  // fix_fwd_type_supply
struct EventClass {
// --- flat members (BEGIN) ---
    AbstractClass* q000;  // 0x0
    unsigned char __pad_0[87];  // 0x0
    unsigned char m_1[4];  // 0x1
    unsigned int u32_3;  // 0x3
    void* q004;  // 0x4
    void* q008;  // 0x8
    BuildingTypeClass* q00B;  // 0xB
    void* q00C;  // 0xC
    bool IsAllocated;  // 0xD
    unsigned int u32_F;  // 0xF
    int Count;  // 0x10
    bool IsInitialized;  // 0x12
    unsigned char q014;  // 0x14
    unsigned char u8_17;  // 0x17
    bool q018;  // 0x18
    unsigned char q01C;  // 0x1C
    unsigned char u8_1D;  // 0x1D
    unsigned char q020;  // 0x20
    void* q024;  // 0x24
    void* q028;  // 0x28
    unsigned char q02C;  // 0x2C
    void* q030;  // 0x30
    unsigned char q034;  // 0x34
    void* q038;  // 0x38
    unsigned char q03C;  // 0x3C
    void* q040;  // 0x40
    void* q044;  // 0x44
    void* q048;  // 0x48
    unsigned int u32_4C;  // 0x4C
    void* q050;  // 0x50
    void* q054;  // 0x54
    unsigned char q058;  // 0x58
    unsigned char q060;  // 0x60
    void* q064;  // 0x64
    void* q068;  // 0x68
    void* q080;  // 0x80
    void* q084;  // 0x84
    unsigned char q088;  // 0x88
    void* q100;  // 0x100
    void* q104;  // 0x104
    void* q114;  // 0x114
    unsigned int q118;  // 0x118
    void* q128;  // 0x128
    unsigned char q130;  // 0x130
    void* q134;  // 0x134
    unsigned char q150;  // 0x150
    void* q260;  // 0x260
    unsigned int q280;  // 0x280
    unsigned char q304;  // 0x304
    void* q308;  // 0x308
    unsigned char q310;  // 0x310
    unsigned int u32_314;  // 0x314
    unsigned int u32_318;  // 0x318
    void* q520;  // 0x520
    unsigned int q524;  // 0x524
    unsigned int q528;  // 0x528
    unsigned char q52C;  // 0x52C
    void* q598;  // 0x598
    void* q608;  // 0x608
    void* q630;  // 0x630
    unsigned int q640;  // 0x640
    void* q774;  // 0x774
    unsigned char q784;  // 0x784
    unsigned int q788;  // 0x788
    void* qBB4;  // 0xBB4
    unsigned char qBB8;  // 0xBB8
    unsigned char qE12;  // 0xE12
    unsigned int q1320;  // 0x1320
    unsigned char q1324;  // 0x1324
    void* q1544;  // 0x1544
    void* q1584;  // 0x1584
    unsigned int q1600;  // 0x1600
    void* q1634;  // 0x1634
    void* q16C0;  // 0x16C0
    unsigned int EventClass_field_0x0;
    unsigned int EventClass_field_0x24;
    unsigned int EventClass_field_0x28;
    unsigned int EventClass_field_0x30;
    unsigned int EventClass_field_0x4;
    unsigned int EventClass_field_0x44;
    unsigned int EventClass_field_0x48;
    unsigned int *EventClass_field_0x4C;
    unsigned int EventClass_field_0x50;
    unsigned int EventClass_field_0x54;
    unsigned int *__pad_10;
    unsigned int q0041;
    unsigned int q007;
    unsigned int EventClass_field_0xC;
    unsigned int q0049;
    unsigned char EventClass_field_0x38;  // 0x38
    unsigned char *__pad_58;  // 0x58
// --- flat members (END) ---
    int serializeEvent(void *a1_1);  // 0x48B390
    int SetData(int a2, int a3, int a4, int a5, int a6);  // 0x48BAD0
    void * Add(AbstractClass * aP1, unsigned char a3, int a4, char a5);  // 0x4C65E0
    int AddEvent(int a2, unsigned __int8 a3);
    int Add2(int a3, unsigned __int8 aP1, int aP3);
    char * AddEventEx(int a2, unsigned __int8 a3, int a4, int a5, int a6);  // G57w10-S raw 0x004C6970 IUnknown 占位清除
    int Init(IUnknown * aP1, char a3, int a4, int a5, int arg10, unsigned short * a6, void *a7_1, void *a8_1);  // 0x4C6AE0
    AbstractClass * * ProcessEvent();  // 0x4C6CB0
    int deserializeEvent(int a2, unsigned int *a3);  // G57w10-S raw 0x00542280 IUnknown 占位清除
    int Enqueue(unsigned short a2, char a3);  // 0x54F200
    static int Enqueue(void *aP0, unsigned short aP1, char aP2);  // 0x54F200 G42.35 static-form sync (ui/supplied site 0x54F94F)
    int CheckFlag();  // 0x5F19C0
    AbstractClass * * validateEventType();  // 0x664440
    SHORT GetKeyStateSafe(unsigned char nVirtKey);  // 0x53EC70
    void initEvent();  // 0x40B6A0
    char processEvent(int a2, unsigned int * a3);  // 0x40B740
    char validateEvent(int a2, unsigned int * a3);  // 0x40B880
    char dispatchEvent(int a2, unsigned int * a3);  // 0x40B9A0
    char checkCondition(int a2, unsigned int * a3, void *a3_2);  // 0x40BAE0
    DynamicVector * executeAction(unsigned int * Block, char a2);  // 0x40BC10
    unsigned int * resetEvent(int aP1, int aP2);  // 0x40BD00
    VectorClass_flat * queueEvent(unsigned int * Block, char a2);  // 0x40C110
    char clearEvents(int a2, unsigned int * a3);  // 0x40C410
    void finalizeEvent();  // 0x40BE10
    unsigned int dequeueEvent(int a2);  // 0x40C260
    void getEventCount();  // 0x40C590
    int GetState(int a1);  // 0x5F3440
};
} // namespace gamemd
