// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once
#ifndef GAMEMD_E4_FLAT_ScriptClass
#define GAMEMD_E4_FLAT_ScriptClass 1  // G57c2: suppress minimal_carriers.hpp twin


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct ScriptTypeClass;  // fix_fwd_type_supply

struct ScriptClass {
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
    ScriptTypeClass* buildingType;  // 0x24
    char field28[4];  // 0x28
    char idxCurrentLine[4];  // 0x2C
// --- flat members (END) ---
    static unsigned int * GetNextAction(void *aP1, void *a2);
    int ExecuteTriggers(int a2, char a3);
    int LoadState(AbstractClass * aP0, int aP1);
    int SaveState(TechnoTypeClass * aP0, int * a1, int aP2);
    int StubReturn26();
    int StubReturn48();
    int ddtor(int a1, unsigned int * a2);
};

} // namespace gamemd
#endif  // GAMEMD_E4_FLAT_ScriptClass
