// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once



#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct TriggerTypeClass;  // fix_fwd_type_supply
struct HouseClass;  // fix_fwd_type_supply
struct AbstractClass;  // fix_fwd_type_supply

struct TriggerClass {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    void* vtable2;  // 0x4
    void* vtable3;  // 0x8
    void* vtable4;  // 0xC
    int uniqueId;  // 0x10
    bool IsAllocated;  // 0x13
    int abstractFlags;  // 0x14
    bool q017;  // 0x17
    int nextArrayIndex;  // 0x18
    unsigned int q01A;  // 0x1A
    int referenceCount;  // 0x1C
    bool q01D;  // 0x1D
    void * NeedsSaveOrLink;  // 0x20
    TriggerTypeClass* buildingType;  // 0x24
    TriggerClass* nextTrigger;  // 0x28
    bool q02B;  // 0x2B
    HouseClass* house;  // 0x2C
    bool destroyed;  // 0x30
    unsigned char align31;  // 0x31
    unsigned int alignmentPadding;  // 0x33
    char timer[12];  // 0x34
    TriggerClass* q038;  // 0x38
    unsigned char q03A;  // 0x3A
    unsigned int q03B;  // 0x3B
    AbstractClass* q03C;  // 0x3C
    unsigned int q03D;  // 0x3D
    unsigned int occuredEvents;  // 0x40
    bool q042;  // 0x42
    bool enabled;  // 0x44
    unsigned char align45;  // 0x45
    unsigned int abstractFlags2;
    unsigned int u32_54;
// --- flat members (END) ---
    static char FindByEventType(char a1);
    void GetValue(void *a1, void *a2);
    int LoadTrigger(AbstractClass * aP0, int aP1);
    int RegisterEvent(TriggerClass * aP1, TechnoClass * aP2, char a4, char a5, int a6);
    int SaveTrigger(TechnoTypeClass * aP0, int * a1, int aP2);
    int StubReturn38();
    int StubReturn72();
    int ddtor(int a1, unsigned int * a2);
    static double NotifyLocalChanged(...);  // C2597 interim stub
    char EvaluateCondition(TriggerClass *a2, unsigned int *a3, char a4);  // 0x41e720
    int ProcessEvents();  // 0x726e00
};

} // namespace gamemd
