// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct BuildingTypeClass;  // fix_fwd_type_supply
struct DynamicVector;  // fix_fwd_type_supply
struct VectorClass_flat;  // fix_fwd_type_supply
struct EventClass {
// --- flat members (BEGIN) ---
    bool IsAllocated;  // 0xD
    int Count;  // 0x10
    bool IsInitialized;  // 0x12
// --- flat members (END) ---
    int serializeEvent(void *a1_1);  // 0x48B390
    int SetData(int a2, int a3, int a4, int a5, int a6);  // 0x48BAD0
    void *  Add(int a2, uint8_t a3, int a4, char a5);  // 0x4C65E0
    int AddEvent(int a2, uint8_t a3, void *a1 = 0);
    int Add2(int a3, uint8_t aP1, int aP3, void *a1 = 0);
    char * AddEventEx(int a2, uint8_t a3, int a4, int a5, int a6);  // G57w10-S raw 0x004C6970 IUnknown 占位清除
    int  Init(int a2, char a3, int a4, int a5, int a6, unsigned short * a7);  // 0x4C6AE0
    AbstractClass * * ProcessEvent();  // 0x4C6CB0
    int deserializeEvent(int a2, unsigned int *a3);  // G57w10-S raw 0x00542280 IUnknown 占位清除
    int  Enqueue(uint16_t a2, char a3);  // 0x54F200
    int CheckFlag(void *a1 = 0);  // 0x5F19C0
    AbstractClass * * validateEventType();  // 0x664440
    SHORT GetKeyStateSafe(unsigned char nVirtKey);  // 0x53EC70
    void initEvent();  // 0x40B6A0
    char  processEvent(int a2, unsigned int * a3);  // 0x40B740
    char  validateEvent(int a2, unsigned int * a3);  // 0x40B880
    char  dispatchEvent(int a2, unsigned int * a3);  // 0x40B9A0
    char  checkCondition(int a2, unsigned int * a3, void *a1 = 0);  // 0x40BAE0
    DynamicVector *  executeAction(char a2);  // 0x40BC10
    unsigned int *  resetEvent(int a2, int a3, void *a1 = 0);  // 0x40BD00
    VectorClass_flat *  queueEvent(char a2);  // 0x40C110
    char  clearEvents(int a2, unsigned int * a3);  // 0x40C410
    void finalizeEvent();  // 0x40BE10
    unsigned int  dequeueEvent(int a2);  // 0x40C260
    void getEventCount();  // 0x40C590
    int  GetState(int a1);  // 0x5F3440
    char __pad_10[5];  // 0x10 (ml)
    unsigned char q0041;  // 0x41 (offset-truth)

    unsigned char __pad_000;  // X10 supply (csp_canon_members)
    int q004;  // X10 supply (member_lookup)
    int q00C;  // X10 supply (member_lookup)
    int q028;  // X10 supply (member_lookup)
    int q038;  // X10 supply (member_lookup)
    int q044;  // X10 supply (member_lookup)
    int q048;  // X10 supply (member_lookup)
    int q050;  // X10 supply (member_lookup)
    int q054;  // X10 supply (member_lookup)
    unsigned int u32_13;  // X10 supply (member_lookup)
    unsigned int u32_15;  // X10 supply (member_lookup)
    unsigned int u32_2;  // X10 supply (member_lookup)
    unsigned int u32_2C;  // X10 supply (member_lookup)
    unsigned int u32_3;  // X10 supply (member_lookup)
    unsigned int u32_314;  // X10 supply (member_lookup)
    unsigned int u32_318;  // X10 supply (member_lookup)
    int u32_4C;  // X10 supply (member_lookup)
    unsigned int u32_7;  // X10 supply (member_lookup)
    unsigned int u32_8;  // X10 supply (member_lookup)
    unsigned int u32_B;  // X10 supply (member_lookup)
    unsigned int u32_F;  // X10 supply (member_lookup)
};
} // namespace gamemd
