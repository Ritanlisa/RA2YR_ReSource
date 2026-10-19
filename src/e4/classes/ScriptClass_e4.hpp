// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once
#ifndef GAMEMD_E4_FLAT_ScriptClass
#define GAMEMD_E4_FLAT_ScriptClass 1  // G57c2: suppress minimal_carriers.hpp twin


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct ScriptTypeClass;  // fix_fwd_type_supply

struct ScriptClass {
    void* ptr_0;  // 0x0
    void* ptr_4;  // 0x4
    void* ptr_8;  // 0x8
    void* ptr_C;  // 0xC
    int uniqueId;  // 0x10
    int abstractFlags;  // 0x14
    int nextArrayIndex;  // 0x18
    int referenceCount;  // 0x1C
    void * NeedsSaveOrLink;  // 0x20
    ScriptTypeClass* buildingType;  // 0x24
    int field28;  // 0x28
    int idxCurrentLine;  // 0x2C
// --- flat members (BEGIN) ---
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
