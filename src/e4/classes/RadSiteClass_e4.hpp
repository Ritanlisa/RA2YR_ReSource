// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct LightSourceClass;  // fix_fwd_type_supply

struct RadSiteClass {
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
    LightSourceClass* LightSource;  // 0x24
    char RadLevelTimer[12];  // 0x28
    unsigned int alignmentPadding;  // 0x33
    char RadLightTimer[12];  // 0x34
    char BaseCell[4];  // 0x40
    void* ptr_42;  // 0x42
    char Spread[4];  // 0x44
    char SpreadInLeptons[4];  // 0x48
    char RadLevel[4];  // 0x4C
    char LevelSteps[4];  // 0x50
    char Intensity[4];  // 0x54
    char Tint[12];  // 0x58
    char IntensityDecrement[4];  // 0x5C
    char Tint_d[4];  // 0x60
    int IntensitySteps;  // 0x64
    void* IntensityDecrement_d;  // 0x68
    void* RadDuration;  // 0x6C
    void* RadTimeLeft;  // 0x70
// --- flat members (END) ---
    void* Radiate_ph;  // 0x0 (no offset truth)  // w18j3: filler renamed (no offset truth; canon RadSiteClass::Radiate is a method)
    static unsigned int Radiate(int p0);  // x4:signals@0x65b9c0
    int SaveLoad_Prefix(AbstractClass * aP0, int aP1);
    int SaveLoad_Prefix_0(TechnoTypeClass * aP0, int * a1, int aP2);
    int StubReturn116();
    int StubReturn69();
    int ddtor(int a1, unsigned int * a2);
    RadSiteClass();
    int Constructor(void *a1 = 0, void *a2 = 0, void *a3 = 0, void *a4 = 0);
    int IntensitySteps;  // 0x64 (canon-mt)
};

} // namespace gamemd
