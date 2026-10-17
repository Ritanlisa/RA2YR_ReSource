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
int AirstrikeClass_field_24;  // 0x24 [X35-L7 kind=int]
int AirstrikeClass_field_28;  // 0x28 [X35-L7 kind=int]
    void* EliteAirstrikeTeamTypeIndex;  // 0x30
    unsigned int alignmentPadding;  // 0x33
    unsigned char AirstrikeClass_field_3C;  // 0x3C
    unsigned char AirstrikeClass_field_3D;  // 0x3D
    unsigned char pad_3E;  // 0x3E
int AirstrikeClass_field_44;  // 0x44 [X35-L7 kind=int]
int AirstrikeClass_field_48;  // 0x48 [X35-L7 kind=int]
    TechnoClass* owner;  // 0x4C
int AirstrikeClass_field_54;  // 0x54 [X35-L7 kind=int]
int AirstrikeClass_field_58;  // 0x58 [X35-L7 kind=int]
    int AirstrikeClass_field_5C;  // 0x5C [X30:type_map]
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
    unsigned char __pad_017;  // 0x17 [X30:canon]
    unsigned char __pad_02C;  // 0x2C [X30:canon]
    unsigned char __pad_037;  // 0x37 [X30:canon]
    unsigned char __pad_040;  // 0x40 [X30:canon]
unsigned int __pad_050;  // 0x50 [X35-L7 kind=unsigned int]
unsigned int AirstrikeClass_field_50;  // 0x50 [X35-L7 kind=unsigned int]
    int32_t vtable22;  // 0x54 [X30:member_lookup]
    void* vtable26;  // 0x64 [X30:member_lookup]
    unsigned int vtable33;  // 0x80 [X30:member_lookup]


    unsigned int u32_34;  // 0x34 [X55 W3 supply (render vocab)]
    void * vfptr;  // 0x0 [X55 W3 supply (render vocab)]
    void * vfptr1;  // 0x4 [X55 W3 supply (render vocab)]
    void * vfptr2;  // 0x8 [X55 W3 supply (render vocab)]
    void * vfptr3;  // 0xC [X55 W3 supply (render vocab)]
};

} // namespace gamemd
