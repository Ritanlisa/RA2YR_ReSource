// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct TagTypeClass;  // fix_fwd_type_supply
struct TriggerClass;  // fix_fwd_type_supply

struct TagClass {
    void * ptr_0;  // 0x0
    void * ptr_4;  // 0x4
    void * ptr_8;  // 0x8
    void * ptr_C;  // 0xC
    int uniqueId;  // 0x10
    int abstractFlags;  // 0x14
    int nextArrayIndex;  // 0x18
    int referenceCount;  // 0x1C
    void * NeedsSaveOrLink;  // 0x20
    TagTypeClass * buildingType;  // 0x24
    TriggerClass * firstTrigger;  // 0x28
    TriggerClass * instanceCount;  // 0x2C
    int defaultCoords;  // 0x30
    bool destroyed;  // 0x34
    bool isExecuting;  // 0x35
    char align36[2];  // 0x36
    unsigned int u32_38;  // 0x38
    unsigned int u32_3C;  // 0x3C
    unsigned int u32_40;  // 0x40
    unsigned int u32_44;  // 0x44
    char __pad_48[88];  // 0x48
    unsigned int u32_A0;  // 0xA0
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    int Unlink(void *a1 = 0);
    TagClass * ProcessTrigger(char a2);
    int CheckEvent(int a2, TagTypeClass * aP2);
    char HasValidHouse(void *a1 = 0);
    int LoadTag(TagClass * aP0, int aP1);
    int ProcessTag(int * a2);
    int SaveTag(TechnoTypeClass * aP0, int * a1, int aP2);
    int StubReturn44();
    int StubReturn56();
    int ddtor(int a1, unsigned int * a2);
    int Destructor(void * a1);
};

} // namespace gamemd
