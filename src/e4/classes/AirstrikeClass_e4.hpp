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
    unsigned int q011;  // 0x11
    bool IsAllocated;  // 0x13
    unsigned int u32_14;  // 0x14
    unsigned int nextArrayIndex;  // 0x18
    unsigned int q01A;  // 0x1A
    int referenceCount;  // 0x1C
    bool q01D;  // 0x1D
    unsigned int NeedsSaveOrLink;  // 0x20
    unsigned int AirstrikeClass_field_24;  // 0x24
    unsigned int AirstrikeClass_field_28;  // 0x28
    bool q02B;  // 0x2B
    unsigned int q02C;  // 0x2C
    unsigned int ;  // 0x30
    unsigned char q031;  // 0x31
    unsigned int alignmentPadding;  // 0x33
    unsigned int u32_34;  // 0x34
    unsigned int q038;  // 0x38
    unsigned char q03A;  // 0x3A
    unsigned int q03B;  // 0x3B
    unsigned char AirstrikeClass_field_3C;  // 0x3C
    unsigned char AirstrikeClass_field_3D;  // 0x3D
    unsigned char pad_3E;  // 0x3E
    void* q040;  // 0x40
    bool q042;  // 0x42
    unsigned int AirstrikeClass_field_44;  // 0x44
    unsigned int AirstrikeClass_field_48;  // 0x48
    bool q04A;  // 0x4A
    unsigned int ;  // 0x4C
    unsigned char q04F;  // 0x4F
    unsigned int u32_50;  // 0x50
    unsigned int AirstrikeClass_field_54;  // 0x54
    unsigned int AirstrikeClass_field_58;  // 0x58
    unsigned int AirstrikeClass_field_5C;  // 0x5C
    unsigned int q0242;
    unsigned int q050;
    unsigned int q05C;
    unsigned int referenceCount6;
    unsigned int u32_30;
    unsigned int u32_3C;
    unsigned char u8_3D;
    unsigned int vtable0;
    unsigned int q140;
    unsigned int EliteAirstrikeTeamTypeIndex;
    unsigned int owner;
// --- flat members (END) ---
    AbstractClass * * UpdateAll();
    char StartMission(int * a2);
    AirstrikeClass(TechnoClass * aP1);
    int ReassignTarget(int a2);
    int RemoveAircraft(AudioController * aP1);
    int Seek(TechnoTypeClass * aP0, int * a1, int aP2);
    int SpawnAircraft(int * a2);
    int Stat(AbstractClass * aP1);
    int Write(AbstractClass * aP0, int aP1);
    int ddtor(int a1, unsigned int * a2);
    void * CopyTo(char a2);
};

} // namespace gamemd
