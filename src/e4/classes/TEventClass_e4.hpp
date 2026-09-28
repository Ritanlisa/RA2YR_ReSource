// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct TEventClass {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    void* vtable2;  // 0x4
    void* vtable3;  // 0x8
    void* vtable4;  // 0xC
    int uniqueId;  // 0x10
    unsigned int q011;  // 0x11
    bool IsAllocated;  // 0x13
    int abstractFlags;  // 0x14
    int nextArrayIndex;  // 0x18
    unsigned int q01A;  // 0x1A
    int referenceCount;  // 0x1C
    bool q01D;  // 0x1D
    void * NeedsSaveOrLink;  // 0x20
    char eventType[4];  // 0x24
    unsigned int TEventClass_field_28;  // 0x28
    bool q02B;  // 0x2B
    char TEventClass_field_2C[4];  // 0x2C
    unsigned int TEventClass_field_30;  // 0x30
    unsigned char q031;  // 0x31
    unsigned int alignmentPadding;  // 0x33
    char TEventClass_field_34[4];  // 0x34
    char TEventClass_field_38;  // 0x38
    unsigned char q03A;  // 0x3A
    unsigned int q03B;  // 0x3B
    unsigned int q03C;  // 0x3C
    unsigned int q03D;  // 0x3D
    char q040[4];  // 0x40
    bool q042;  // 0x42
    unsigned int q044;  // 0x44
    char TEventClass_field_48[4];  // 0x48
    bool q04A;  // 0x4A
    char TEventClass_field_4C[4];  // 0x4C
    unsigned char q04F;  // 0x4F
    char TEventClass_field_50[4];  // 0x50
    unsigned int TEventClass_field_54;  // 0x54
    char TEventClass_field_58[4];  // 0x58
    char TEventClass_field_5C[4];  // 0x5C
    unsigned int vtable0;
// --- flat members (END) ---
    DynamicVector * * Execute(int a2, int a3, int a4, int * a5, int a6, int a7);
    int CheckConditions(int a2, int a3);
    int PrepareSaveToINI(const char * a2);
    int ProcessEvent(int a2);
    int SaveLoad_Prefix(AbstractClass * aP0, int aP1);
    int SaveLoad_Prefix_0(TechnoTypeClass * aP0, int * a1, int aP2);
    int Stub();
    int StubReturn48();
    int StubReturn88();
    int ddtor(int a1, unsigned int * a2);
    void * Fire(char a2);
    static double GetStateA(...);  // C2597 interim stub
    static double GetStateB_SpyEvent(...);  // C2597 interim stub
};

} // namespace gamemd
