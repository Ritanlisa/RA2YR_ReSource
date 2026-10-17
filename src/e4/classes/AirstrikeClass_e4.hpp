// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct AirstrikeClass {
    void * vfptr;  // 0x0
    void * vfptr1;  // 0x4
    void * vfptr2;  // 0x8
    void * vfptr3;  // 0xC
    unsigned int uniqueId;  // 0x10
    int abstractFlags;  // 0x14
    unsigned int nextArrayIndex;  // 0x18
    int referenceCount;  // 0x1C
    unsigned int NeedsSaveOrLink;  // 0x20
    int AirstrikeClass_field_24;  // 0x24
    int AirstrikeClass_field_28;  // 0x28
    unsigned char __pad_02C;  // 0x2C
    char __pad_2D[3];  // 0x2D
    void* EliteAirstrikeTeamTypeIndex;  // 0x30
    unsigned int u32_34;  // 0x34
    char __pad_38[4];  // 0x38
    unsigned char AirstrikeClass_field_3C;  // 0x3C
    unsigned char AirstrikeClass_field_3D;  // 0x3D
    char pad_3E[2];  // 0x3E
    unsigned char __pad_040;  // 0x40
    char __pad_41[3];  // 0x41
    int AirstrikeClass_field_44;  // 0x44
    int AirstrikeClass_field_48;  // 0x48
    TechnoClass* owner;  // 0x4C
    unsigned int AirstrikeClass_field_50;  // 0x50
    int AirstrikeClass_field_54;  // 0x54
    int AirstrikeClass_field_58;  // 0x58
    int AirstrikeClass_field_5C;  // 0x5C
// --- flat members (BEGIN) ---
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
};

} // namespace gamemd
