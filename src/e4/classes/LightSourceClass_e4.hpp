// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct TintStruct;  // fix_fwd_type_supply

struct LightSourceClass {
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
int LightIntensity;  // 0x24 [X35-L7 kind=int]
    char LightTint[12];  // 0x28
    unsigned int alignmentPadding;  // 0x33
int DetailLevel;  // 0x34 [X35-L7 kind=int]
    char Location[12];  // 0x38
int LightVisibility;  // 0x44 [X35-L7 kind=int]
    bool Activated;  // 0x48
    bool tail_49;  // 0x49
// --- flat members (END) ---
    LightSourceClass * CopyTo(char a2);
    int Constructor(void *a1 = 0, void *a2 = 0, void *a3 = 0, void *a4 = 0);
    int Seek(TechnoTypeClass * aP0, int * a1, int aP2);
    int Stat(AbstractClass * aP1);
    int StubReturn54();
    int StubReturn76();
    int Write(AbstractClass * aP0, int aP1);
    int ddtor(int a1, unsigned int * a2);
    unsigned int * Construct(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, void *a9_1 = 0);
};

} // namespace gamemd
