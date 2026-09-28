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
    unsigned int q011;  // 0x11
    unsigned int abstractFlags;  // 0x14
    unsigned int nextArrayIndex;  // 0x18
    unsigned int q01A;  // 0x1A
    int referenceCount;  // 0x1C
    bool q01D;  // 0x1D
    unsigned char NeedsSaveOrLink;  // 0x20
    char idxArray[4];  // 0x24
    unsigned int u32_28;  // 0x28
    bool q02B;  // 0x2B
    unsigned int u32_2C;  // 0x2C
    unsigned int u32_30;  // 0x30
    unsigned char q031;  // 0x31
    unsigned int alignmentPadding;  // 0x33
    unsigned char q034;  // 0x34
    unsigned int u32_35;  // 0x35
    unsigned int q038;  // 0x38
    unsigned char q03A;  // 0x3A
    unsigned int q03B;  // 0x3B
    unsigned int q03C;  // 0x3C
    unsigned int q03D;  // 0x3D
    char waypointCount[4];  // 0x40
    bool q042;  // 0x42
    char waypointCapacity[4];  // 0x44
    unsigned char WaypointClass_field_34;  // 0x48
    unsigned char WaypointClass_field_35;  // 0x49
    unsigned char pad_36;  // 0x4A
// --- flat members (END) ---
    WaypointPathClass * ProcessEvent(char a2);
    int Construct(WaypointClass * aP1);
    int Init();
    int LoadState(unsigned int * a1, int a2);
    int PowerDrainUpdate(int a2);
    int SaveState(TechnoTypeClass * aP0, int * a1, int aP2);
    int StubReturn51();
    int StubReturn64();
    int ddtor(int a1, unsigned int * a2);
    unsigned int * computePath(int a2, unsigned int * a3);
};

} // namespace gamemd
