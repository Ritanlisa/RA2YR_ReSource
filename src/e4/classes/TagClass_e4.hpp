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
    bool IsAllocated;  // 0x13
    int abstractFlags;  // 0x14
    int nextArrayIndex;  // 0x18
    int referenceCount;  // 0x1C
    void * NeedsSaveOrLink;  // 0x20
    TagTypeClass* buildingType;  // 0x24
    TriggerClass* firstTrigger;  // 0x28
    bool q02B;  // 0x2B
    char instanceCount[4];  // 0x2C
    char defaultCoords[4];  // 0x30
    unsigned char q031;  // 0x31
    unsigned int alignmentPadding;  // 0x33
    bool destroyed;  // 0x34
    unsigned int u32_38;
    unsigned int u32_3C;
    unsigned int q011;
    unsigned int uniqueId;
// --- flat members (END) ---
    int Unlink();
    TagClass * ProcessTrigger(char a2);
    int Destructor();
    int CheckEvent(int a2, TagTypeClass * aP2);
    char HasValidHouse();
    int LoadTag(AbstractClass * aP0, int aP1);
    int ProcessTag(int * a2);
    int SaveTag(TechnoTypeClass * aP0, int * a1, int aP2);
    int StubReturn44();
    int StubReturn56();
    int ddtor(int a1, unsigned int * a2);
    TriggerClass * * Destructor(void * a1);
};

} // namespace gamemd
