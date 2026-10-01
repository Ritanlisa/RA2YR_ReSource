// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct ScriptClass {
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
    ScriptTypeClass* buildingType;  // 0x24
    char field28[4];  // 0x28
    bool q02B;  // 0x2B
    char idxCurrentLine[4];  // 0x2C
// --- flat members (END) ---
struct ScriptTypeClass;  // fix_fwd_type_supply
    int LoadState(AbstractClass * aP0, int aP1);
    int SaveState(TechnoTypeClass * aP0, int * a1, int aP2);
    int StubReturn26();
    int StubReturn48();
    int ddtor(int a1, unsigned int * a2);
};

} // namespace gamemd
