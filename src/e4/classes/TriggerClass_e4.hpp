// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once



#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct TriggerTypeClass;  // fix_fwd_type_supply
struct HouseClass;  // fix_fwd_type_supply

struct TriggerClass {
    void * ptr_0;  // 0x0
    void * ptr_4;  // 0x4
    void * ptr_8;  // 0x8
    void * ptr_C;  // 0xC
    int uniqueId;  // 0x10
    int abstractFlags;  // 0x14
    int nextArrayIndex;  // 0x18
    int referenceCount;  // 0x1C
    void * NeedsSaveOrLink;  // 0x20
    TriggerTypeClass * buildingType;  // 0x24
    TriggerClass * nextTrigger;  // 0x28
    HouseClass * house;  // 0x2C
    bool destroyed;  // 0x30
    char align31[3];  // 0x31
    char timer[12];  // 0x34
    unsigned int occuredEvents;  // 0x40
    bool enabled;  // 0x44
    char align45[3];  // 0x45
    char __pad_48[12];  // 0x48
    unsigned int u32_54;  // 0x54
    char __pad_58[64];  // 0x58
    unsigned int u32_98;  // 0x98
    unsigned int u32_9C;  // 0x9C
    unsigned int u32_A0;  // 0xA0
    unsigned char u8_A4;  // 0xA4
    char __pad_A5[3];  // 0xA5
    unsigned char u8_A8;  // 0xA8
    unsigned char u8_A9;  // 0xA9
    char __pad_AA[2];  // 0xAA
    unsigned int u32_AC;  // 0xAC
    unsigned int u32_B0;  // 0xB0
    unsigned int u32_B4;  // 0xB4
    char __pad_B8[24];  // 0xB8
    unsigned char u8_D0;  // 0xD0
    char __pad_D1[1];  // 0xD1
    unsigned char u8_D2;  // 0xD2
    unsigned char u8_D3;  // 0xD3
    unsigned char u8_D4;  // 0xD4
    char __pad_D5[7];  // 0xD5
    unsigned int u32_DC;  // 0xDC
    unsigned int u32_E0;  // 0xE0
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    static char FindByEventType(char a1);
    int GetValue(void *a1 = 0, void *a2 = 0);
    int LoadTrigger(TriggerClass * aP0, int aP1);
    char RegisterEvent(int a2, int a3, char a4, char a5, int a6);
    int SaveTrigger(TechnoTypeClass * aP0, int * a1, int aP2);
    int StubReturn38();
    int StubReturn72();
    int ddtor(int a1, unsigned int * a2);
    static void NotifyLocalChanged(TriggerClass * aP1, int a2);
    char  EvaluateCondition(void * a2, unsigned int * a3, char a4, void *a1 = 0);  // 0x41e720
    int ProcessEvents();  // 0x726e00
    int RegisterEvent(int a2, int a3, char a4, char a5, int a6, int aP1, int aP2, int a1, int aP0);
};

} // namespace gamemd
