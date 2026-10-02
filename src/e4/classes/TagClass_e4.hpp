// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct TagTypeClass;  // fix_fwd_type_supply
struct TriggerClass;  // fix_fwd_type_supply

struct TagClass {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    void* vtable2;  // 0x4
    void* vtable3;  // 0x8
    void* vtable4;  // 0xC
    void* p10;  // regen name
    void* p11;  // regen name
    bool IsAllocated;  // 0x13
    int abstractFlags;  // 0x14
    int nextArrayIndex;  // 0x18
    unsigned int q01A;  // 0x1A
    int referenceCount;  // 0x1C
    bool q01D;  // 0x1D
    void * NeedsSaveOrLink;  // 0x20
    TagTypeClass* buildingType;  // 0x24
    TriggerClass* firstTrigger;  // 0x28
    bool q02B;  // 0x2B
    char instanceCount[4];  // 0x2C
    char defaultCoords[4];  // 0x30
    unsigned char q031;  // 0x31
    unsigned int alignmentPadding;  // 0x33
    bool destroyed;  // 0x34
    bool isExecuting;  // 0x35
    unsigned char align36;  // 0x36
    unsigned int u32_38;
    unsigned int u32_3C;
    unsigned int vtable20;
    unsigned int vtable26;
    unsigned int vtable27;
    unsigned int q011;
    unsigned int uniqueId;
// --- flat members (END) ---
    void Unlink(void *a1);
    TagClass * ProcessTrigger(char a2);
    TriggerClass * * Destructor();
    int CheckEvent(int a2, TagTypeClass * aP2);
    void HasValidHouse(void *a1);
    int LoadTag(AbstractClass * aP0, int aP1);
    int ProcessTag(int * a2);
    int SaveTag(TechnoTypeClass * aP0, int * a1, int aP2);
    int StubReturn44();
    int StubReturn56();
    int ddtor(int a1, unsigned int * a2);
};

} // namespace gamemd
