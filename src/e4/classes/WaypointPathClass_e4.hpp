// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct WaypointPathClass {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    void* vtable2;  // 0x4
    void* vtable3;  // 0x8
    void* vtable4;  // 0xC
    unsigned int uniqueId;  // 0x10
    unsigned int abstractFlags;  // 0x14
    unsigned int nextArrayIndex;  // 0x18
    int referenceCount;  // 0x1C
    unsigned char NeedsSaveOrLink;  // 0x20
    char idxArray[4];  // 0x24
    unsigned int alignmentPadding;  // 0x33
    char waypointCount[4];  // 0x40
    char waypointCapacity[4];  // 0x44
    unsigned char WaypointClass_field_34;  // 0x48
    unsigned char WaypointClass_field_35;  // 0x49
    unsigned char pad_36;  // 0x4A
// --- flat members (END) ---
    WaypointPathClass * ProcessEvent(char a2);
    unsigned int * Construct(unsigned int a2, void *a1 = 0, void *a3 = 0, void *a4 = 0, void *a5 = 0, void *a6 = 0, void *a7 = 0, void *a8 = 0, void *a9 = 0);
    int Init(void *a1 = 0, void *a2 = 0);
    int LoadState(unsigned int * a1, int a2);
    int PowerDrainUpdate(int a2);
    int SaveState(TechnoTypeClass * aP0, int * a1, int aP2);
    int StubReturn51();
    int StubReturn64();
    int ddtor(int a1, unsigned int * a2);
    unsigned int * computePath(int a2, unsigned int *a3, void *a1 = 0);
    unsigned int q030;  // 0x30 (canon-mt)
    int waypoints[6];  // 0x28 (ml)

    unsigned int u32_2C;  // X10 supply (member_lookup)
    int u8_D;  // X10 supply (member_lookup)
};

} // namespace gamemd
