// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct AirstrikeClass {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    void* vtable2;  // 0x4
    void* vtable3;  // 0x8
    void* vtable4;  // 0xC
    unsigned int uniqueId;  // 0x10
    bool IsAllocated;  // 0x13
    unsigned int nextArrayIndex;  // 0x18
    int referenceCount;  // 0x1C
    unsigned int NeedsSaveOrLink;  // 0x20
    char AirstrikeClass_field_24[4];  // 0x24
    char AirstrikeClass_field_28[4];  // 0x28
    void* EliteAirstrikeTeamTypeIndex;  // 0x30
    unsigned int alignmentPadding;  // 0x33
    unsigned char AirstrikeClass_field_3C;  // 0x3C
    unsigned char AirstrikeClass_field_3D;  // 0x3D
    unsigned char pad_3E;  // 0x3E
    char AirstrikeClass_field_44[4];  // 0x44
    char AirstrikeClass_field_48[4];  // 0x48
    TechnoClass* owner;  // 0x4C
    char AirstrikeClass_field_54[4];  // 0x54
    char AirstrikeClass_field_58[4];  // 0x58
    char AirstrikeClass_field_5C[4];  // 0x5C
// --- flat members (END) ---
    AbstractClass * * UpdateAll();
    char StartMission(int * a2);
    AirstrikeClass(int a2);
    int ReassignTarget(int a2, void *a2_2);
    int RemoveAircraft(AudioController * aP1);
    int Seek(TechnoTypeClass * aP0, int * a1, int aP2);
    int SpawnAircraft(int * a2, void *a2_2);
    int Stat(AbstractClass * aP1);
    int Write(AbstractClass * aP0, int aP1);
    int ddtor(int a1, unsigned int * a2);
    void * CopyTo(char a2, int aP1, int aP0, int a1, int aP2);
    static double AbstractClass(...);  // plateau: C2039/C3861 stub
    static double a2(...);  // plateau: C2039/C3861 stub
    static double u32_D0(...);  // plateau: C2039/C3861 stub
    static double vfptr(...);  // plateau: C2039/C3861 stub
    static double vtable22(...);  // plateau: C2039/C3861 stub
    static double vtable26(...);  // plateau: C2039/C3861 stub
    static double vtable33(...);  // plateau: C2039/C3861 stub
};

} // namespace gamemd
