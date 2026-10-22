// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct TemporalClass {
    int vfptr;  // 0x0
    int vfptr1;  // 0x4
    int vfptr2;  // 0x8
    int vfptr3;  // 0xC
    int uniqueId;  // 0x10
    int abstractFlags;  // 0x14
    int nextArrayIndex;  // 0x18
    int referenceCount;  // 0x1C
    void * NeedsSaveOrLink;  // 0x20
    int creationFrame;  // 0x24
    unsigned int __pad_28;  // 0x28
    unsigned char q02C;  // 0x2C
    char __pad_2D[3];  // 0x2D
    int TemporalClass_field_30;  // 0x30
    int TemporalClass_field_34;  // 0x34
    unsigned int u32_38;  // 0x38
    unsigned int u32_3C;  // 0x3C
    unsigned int q040;  // 0x40
    unsigned int u32_44;  // 0x44
    unsigned int u32_48;  // 0x48
    unsigned int q04C;  // 0x4C
    char __pad_50[16];  // 0x50
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    char CanWarpTarget(unsigned int * a1);
    int Constructor(void *a1 = 0, void *a2 = 0, void *a3 = 0, void *a4 = 0);
    int GetWarpPerStep(int a2, void *a2_1 = 0);
    int LoadTemporal(AbstractClass * aP0, int aP1);
    int SaveTemporal(TechnoTypeClass * aP0, int * a1, int aP2);
    int SetTarget(AbstractClass * aP1);
    int ddtor(int a1, unsigned int * a2);
    TemporalClass(TechnoClass * aP1);
    void * ProcessEvent(char a2, int aP1, int aP0, int a1, int aP2);
    void ** ProcessTimeWarp();
};

} // namespace gamemd
