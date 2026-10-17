// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once



#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct HouseClass;  // fix_fwd_type_supply

struct SpawnManagerClass {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    void* vtable2;  // 0x4
    void* vtable3;  // 0x8
    void* vtable4;  // 0xC
    int uniqueId;  // 0x10
    int abstractFlags;  // 0x14
    int nextArrayIndex;  // 0x18
    int referenceCount;  // 0x1C
    void * NeedsSaveOrLink;  // 0x20
    TechnoClass* owner;  // 0x24
    unsigned int IsAllocated;  // 0x25
    HouseClass* spawnOwner;  // 0x28
    HouseClass* spawnType;  // 0x2C
    int spawnCount;  // 0x30 [X30:type_map]
    unsigned int alignmentPadding;  // 0x33
    int SpawnManagerClass_field_34;  // 0x34 [X30:type_map]
    void *q38;  // 0x38
    int spawnVectorCount;  // 0x3C [X30:type_map]
int spawnVectorCapacity;  // 0x40 [X35-L7 kind=int]
int creationFrame;  // 0x44 [X35-L7 kind=int]
    int SpawnManagerClass_field_54;  // 0x54 [X30:type_map]
    int SpawnManagerClass_field_58;  // 0x58 [X30:type_map]
    IUnknown* SpawnManagerClass_field_5C;  // 0x5C [X30:type_map]
    int SpawnManagerClass_field_60;  // 0x60 [X30:type_map]
    int SpawnManagerClass_field_64;  // 0x64 [X30:type_map]
int SpawnManagerClass_field_68;  // 0x68 [X35-L7 kind=int]
    void* SpawnManagerClass_field_6C;  // 0x6C [X30:type_map]
    int SpawnManagerClass_field_70;  // 0x70 [X30:type_map]
// --- flat members (END) ---
    AbstractClass * * LoadFromStream(int aP1, AbstractClass * aP1_4);
    SpawnManagerClass(int a2, int a3, int a4, int a5, int a6);
    SpawnManagerClass * ProcessEvent(char a2);
    int CountAliveSpawns();
    int CountDockedSpawns();
    int PowerDrainUpdate(int a2);
    int SaveState(TechnoTypeClass * aP0, int * a1, int aP2);
    int SetTarget(int a2);
    int StubReturn116();
    int StubReturn65();
    int ddtor(int a1, unsigned int * a2);
    unsigned int * Constructor_6B83A0(int aP1, int aP2);
    void Constructor_SpawnManagerClass();
    void* Constructor(void *a1, void *a2, void *a3, void *a4 = 0);
    SpawnManagerClass * ProcessEvent(void * Block, char a2);

    unsigned int spawns;  // X10 supply (csp_canon_members)
    int u8_D;  // X10 supply (member_lookup)
    unsigned int u32_45;  // 0x45
    int __pad_048;  // 0x48 [X30:type_map]


    int __pad_48;  // 0x48 [X55 W3 supply (render vocab)]
    void * vfptr;  // 0x0 [X55 W3 supply (render vocab)]
    void * vfptr1;  // 0x4 [X55 W3 supply (render vocab)]
    void * vfptr2;  // 0x8 [X55 W3 supply (render vocab)]
    void * vfptr3;  // 0xC [X55 W3 supply (render vocab)]
};

} // namespace gamemd
