// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct WaypointPathClass {
    unsigned int ptr_0;  // 0x0
    unsigned int ptr_4;  // 0x4
    unsigned int ptr_8;  // 0x8
    char ptr_C[1];  // 0xC
    unsigned char u8_D;  // 0xD
    char __pad_E[2];  // 0xE
    unsigned int uniqueId;  // 0x10
    unsigned int abstractFlags;  // 0x14
    unsigned int nextArrayIndex;  // 0x18
    int referenceCount;  // 0x1C
    int NeedsSaveOrLink;  // 0x20
    int idxArray;  // 0x24
    int waypoints[6];  // 0x28
    int waypointCount;  // 0x40
    int waypointCapacity;  // 0x44
    unsigned char u32_34;  // 0x48
    unsigned char u32_35;  // 0x49
    char pad_36[2];  // 0x4A
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    WaypointPathClass * ProcessEvent(char a2);
    int Construct(unsigned int aP1, void *a2 = 0, void *a3 = 0, void *a4 = 0, void *a5 = 0, void *a6 = 0, void *a7 = 0, void *a8 = 0, void *a9 = 0);
    int Init(void *a1 = 0, void *a2 = 0);
    int LoadState(unsigned int * a1, int a2);
    int PowerDrainUpdate(int a2);
    int SaveState(TechnoTypeClass * aP0, int * a1, int aP2);
    int StubReturn51();
    int StubReturn64();
    int ddtor(int a1, unsigned int * a2);
    unsigned int * computePath(int a2, unsigned int *a3, void *a3_1 = 0);
};

} // namespace gamemd
