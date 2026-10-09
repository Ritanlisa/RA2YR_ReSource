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
    unsigned int q011;  // 0x11
    bool IsAllocated;  // 0x13
    int abstractFlags;  // 0x14
    int nextArrayIndex;  // 0x18
    unsigned int q01A;  // 0x1A
    int referenceCount;  // 0x1C
    bool q01D;  // 0x1D
    void * NeedsSaveOrLink;  // 0x20
    LightSourceClass* LightSource;  // 0x24
    char RadLevelTimer[12];  // 0x28
    bool q02B;  // 0x2B
    unsigned int q02C;  // 0x2C
    LightSourceClass* q030;  // 0x30
    unsigned char q031;  // 0x31
    unsigned int alignmentPadding;  // 0x33
    char RadLightTimer[12];  // 0x34
    unsigned int q038;  // 0x38
    unsigned char q03A;  // 0x3A
    unsigned int q03B;  // 0x3B
    LightSourceClass* q03C;  // 0x3C
    unsigned int q03D;  // 0x3D
    char BaseCell[4];  // 0x40
    void* ptr_42;  // 0x42
    char Spread[4];  // 0x44
    char SpreadInLeptons[4];  // 0x48
    bool q04A;  // 0x4A
    char RadLevel[4];  // 0x4C
    unsigned char q04F;  // 0x4F
    char LevelSteps[4];  // 0x50
    char Intensity[4];  // 0x54
    char Tint[12];  // 0x58
    char IntensityDecrement[4];  // 0x5C
    char q060[4];  // 0x60
    int q064;  // 0x64
    void* q068;  // 0x68
    void* RadDuration;  // 0x6C
    void* RadTimeLeft;  // 0x70
// --- flat members (END) ---
    void* Radiate_ph;  // 0x0 (no offset truth)  // w18j3: filler renamed (no offset truth; canon RadSiteClass::Radiate is a method)
    static unsigned int Radiate(...);  // w18j3 C2597 static-call supply (w16g4 convention)
    int SaveLoad_Prefix(AbstractClass * aP0, int aP1);
    int SaveLoad_Prefix_0(TechnoTypeClass * aP0, int * a1, int aP2);
    int StubReturn116();
    int StubReturn69();
    int ddtor(int a1, unsigned int * a2);
    RadSiteClass();
    int Constructor();  // G42.39 supply (0x4E2C10 family)
    int IntensitySteps;  // 0x100
};

} // namespace gamemd
