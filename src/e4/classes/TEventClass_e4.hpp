// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct DynamicVector;  // fix_fwd_type_supply

struct TEventClass {
    void* vtable1;  // 0x0
    void* vtable2;  // 0x4
    void* vtable3;  // 0x8
    void* vtable4;  // 0xC
    int uniqueId;  // 0x10
    int abstractFlags;  // 0x14
    int nextArrayIndex;  // 0x18
    int referenceCount;  // 0x1C
    void * NeedsSaveOrLink;  // 0x20
    int eventType;  // 0x24
    int TEventClass_field_28;  // 0x28
    int TEventClass_field_2C;  // 0x2C
    int TEventClass_field_30;  // 0x30
    int TEventClass_field_34;  // 0x34
    int TEventClass_field_38[4];  // 0x38
    int TEventClass_field_48;  // 0x48
    char TEventClass_field_4C[4];  // 0x4C
    int TEventClass_field_50;  // 0x50
    int TEventClass_field_54;  // 0x54
    int TEventClass_field_58;  // 0x58
    char TEventClass_field_5C[4];  // 0x5C
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    DynamicVector * Execute(int a2, int a3, int a4, int *a5, int a6, int a7);
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
    static char GetStateA(TEventClass * aP1);
    static char GetStateB_SpyEvent(TEventClass * aP1);
    void * Fire(void ** Block, char a2);
};

} // namespace gamemd
