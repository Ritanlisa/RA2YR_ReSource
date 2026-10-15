// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once



#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct TriggerTypeClass;  // fix_fwd_type_supply
struct HouseClass;  // fix_fwd_type_supply

struct TriggerClass {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    void* vtable2;  // 0x4
    void* vtable3;  // 0x8
    void* vtable4;  // 0xC
    int uniqueId;  // 0x10
    bool IsAllocated;  // 0x13
    int abstractFlags;  // 0x14
    int nextArrayIndex;  // 0x18
    int referenceCount;  // 0x1C
    void * NeedsSaveOrLink;  // 0x20
    TriggerTypeClass* buildingType;  // 0x24
    TriggerClass* nextTrigger;  // 0x28
    HouseClass* house;  // 0x2C
    bool destroyed;  // 0x30
    unsigned char align31;  // 0x31
    unsigned int alignmentPadding;  // 0x33
    char timer[12];  // 0x34
unsigned int occuredEvents;  // 0x40 [X35-L7 kind=unsigned int]
    bool enabled;  // 0x44
    unsigned char align45;  // 0x45
// --- flat members (END) ---
    static char FindByEventType(char a1);
    int GetValue(void *a1 = 0, void *a2 = 0);
    int LoadTrigger(AbstractClass * aP0, int aP1);
    char RegisterEvent(int a2, int a3, char a4, char a5, int a6);
    int SaveTrigger(TechnoTypeClass * aP0, int * a1, int aP2);
    int StubReturn38();
    int StubReturn72();
    int ddtor(int a1, unsigned int * a2);
    static void NotifyLocalChanged(TriggerClass * aP1, int a2);
    char  EvaluateCondition(void * a2, unsigned int * a3, char a4, void *a1 = 0);  // 0x41e720
    int ProcessEvents();  // 0x726e00
    int RegisterEvent(int a2, int a3, char a4, char a5, int a6, int aP1, int aP2, int a1, int aP0);
    unsigned int u32_54;  // 0x54 (offset-truth)
    unsigned int abstractFlags2;  // [X30:default]
};

} // namespace gamemd
