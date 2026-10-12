// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct TemporalClass {
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
    char creationFrame[4];  // 0x24
    char TemporalClass_field_30[4];  // 0x30
    unsigned int alignmentPadding;  // 0x33
    char TemporalClass_field_34[4];  // 0x34
// --- flat members (END) ---
    char CanWarpTarget(unsigned int * a1);
    int Constructor(void *a1 = 0, void *a2 = 0, void *a3 = 0, void *a4 = 0);
    int GetWarpPerStep(int a2, void *a1 = 0);
    int LoadTemporal(AbstractClass * aP0, int aP1);
    int SaveTemporal(TechnoTypeClass * aP0, int * a1, int aP2);
    int SetTarget(AbstractClass * aP1);
    int ddtor(int a1, unsigned int * a2);
    TemporalClass(TechnoClass * aP1);
    void * ProcessEvent(char a2, int aP1, int aP0, int a1, int aP2);
    void ** ProcessTimeWarp();
    unsigned int u32_308;  // 0x308 (offset-truth)
    unsigned int u32_38;  // 0x38 (offset-truth)
    unsigned int u32_3C;  // 0x3C (offset-truth)
    unsigned int u32_48;  // 0x48 (offset-truth)
    unsigned int u32_4A8;  // 0x4A8 (offset-truth)
    unsigned char u32_A6;  // 0xA6 (offset-truth)
};

} // namespace gamemd
