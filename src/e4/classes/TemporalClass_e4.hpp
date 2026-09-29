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
    unsigned int q011;  // 0x11
    bool IsAllocated;  // 0x13
    int abstractFlags;  // 0x14
    int nextArrayIndex;  // 0x18
    unsigned int q01A;  // 0x1A
    int referenceCount;  // 0x1C
    bool q01D;  // 0x1D
    void * NeedsSaveOrLink;  // 0x20
    char creationFrame[4];  // 0x24
    int q028;  // 0x28
    bool q02B;  // 0x2B
    void* q02C;  // 0x2C
    unsigned int TemporalClass_field_30;  // 0x30
    unsigned char q031;  // 0x31
    unsigned int alignmentPadding;  // 0x33
    unsigned int TemporalClass_field_34;  // 0x34
    unsigned int __pad_28;
    unsigned int u32_308;
    unsigned int u32_38;
    unsigned int u32_3C;
    unsigned int u32_48;
    unsigned int u32_4A8;
    unsigned int u32_A6;
// --- flat members (END) ---
    char CanWarpTarget(unsigned int * a1);
    int Constructor(void *a1 = 0, void *a2 = 0, void *a3 = 0, void *a4 = 0, void *a5 = 0);
    int GetWarpPerStep(int a2, void *a1 = 0);
    int LoadTemporal(AbstractClass * aP0, int aP1);
    int SaveTemporal(TechnoTypeClass * aP0, int * a1, int aP2);
    int SetTarget(AbstractClass * aP1);
    int ddtor(int a1, unsigned int * a2);
    TemporalClass(TechnoClass * aP1);
    void * ProcessEvent(char a2);
    void ** ProcessTimeWarp();
};

} // namespace gamemd
