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
    int idxArray;  // 0x24 [X30:type_map]
    unsigned int alignmentPadding;  // 0x33
int waypointCount;  // 0x40 [X35-L7 kind=int]
int waypointCapacity;  // 0x44 [X35-L7 kind=int]
    unsigned char WaypointClass_field_34;  // 0x48
    unsigned char WaypointClass_field_35;  // 0x49
    unsigned char pad_36;  // 0x4A
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
    unsigned int q030;  // 0x30 (canon-mt)
    int waypoints[6];  // 0x28 (ml)

    unsigned int u32_2C;  // X10 supply (member_lookup)
    int u8_D;  // X10 supply (member_lookup)
    unsigned char __pad_028;  // 0x28 [X30:canon]
    unsigned char __pad_037;  // 0x37 [X30:canon]
    unsigned int vfptr;  // [X30:default]
    unsigned int vfptr1;  // [X30:default]
    unsigned int vfptr2;  // [X30:default]


    void * vfptr3;  // 0xC [X55 W3 supply (render vocab)]
};

} // namespace gamemd
