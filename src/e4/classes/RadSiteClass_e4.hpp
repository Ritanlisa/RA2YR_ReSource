// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct LightSourceClass;  // fix_fwd_type_supply

struct RadSiteClass {
    void* Radiate_ph;  // 0x0
    void* ptr_4;  // 0x4
    void* ptr_8;  // 0x8
    void* ptr_C;  // 0xC
    int uniqueId;  // 0x10
    int abstractFlags;  // 0x14
    int nextArrayIndex;  // 0x18
    int referenceCount;  // 0x1C
    void * NeedsSaveOrLink;  // 0x20
    LightSourceClass* LightSource;  // 0x24
    char RadLevelTimer[12];  // 0x28
    char RadLightTimer[12];  // 0x34
    void* BaseCell;  // 0x40
    int Spread;  // 0x44
    int SpreadInLeptons;  // 0x48
    int RadLevel;  // 0x4C
    int LevelSteps;  // 0x50
    int Intensity;  // 0x54
    int Tint[3];  // 0x58
    LightSourceClass* IntensitySteps;  // 0x64
    void* IntensityDecrement_d;  // 0x68
    void* RadDuration;  // 0x6C
    void* RadTimeLeft;  // 0x70
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    static unsigned int Radiate(int p0);  // x4:signals@0x65b9c0
    int SaveLoad_Prefix(AbstractClass * aP0, int aP1);
    int SaveLoad_Prefix_0(TechnoTypeClass * aP0, int * a1, int aP2);
    int StubReturn116();
    int StubReturn69();
    int ddtor(int a1, unsigned int * a2);
    RadSiteClass();
    int Constructor(void *a1 = 0, void *a2 = 0, void *a3 = 0, void *a4 = 0);
};

} // namespace gamemd
