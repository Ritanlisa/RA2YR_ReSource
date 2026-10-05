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
    unsigned int q011;  // 0x11
    int abstractFlags;  // 0x14
    int nextArrayIndex;  // 0x18
    int referenceCount;  // 0x1C
    void * NeedsSaveOrLink;  // 0x20
    TechnoClass* owner;  // 0x24
    unsigned int IsAllocated;  // 0x25
    HouseClass* spawnOwner;  // 0x28
    bool q02B;  // 0x2B
    HouseClass* spawnType;  // 0x2C
    unsigned char q031;  // 0x31
    unsigned int alignmentPadding;  // 0x33
    unsigned char q03A;  // 0x3A
    unsigned int spawnVectorCount;  // 0x3C
    unsigned int spawnVectorCapacity;  // 0x40
    char creationFrame[4];  // 0x44
    unsigned char u8_45;  // 0x45
    void* q048;  // 0x48
    unsigned int q04C;  // 0x4C
    void* q050;  // 0x50
    unsigned int SpawnManagerClass_field_54;  // 0x54
    unsigned int SpawnManagerClass_field_58;  // 0x58
    unsigned int SpawnManagerClass_field_5C;  // 0x5C
    unsigned int SpawnManagerClass_field_60;  // 0x60
    char SpawnManagerClass_field_64[4];  // 0x64
    unsigned int SpawnManagerClass_field_68;  // 0x68
    unsigned int SpawnManagerClass_field_6C;  // 0x6C
    unsigned int SpawnManagerClass_field_70;  // 0x70
    unsigned int *__pad_48;
    unsigned int spawns;
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
    unsigned int * Constructor_6B83A0(DynamicVector * aP1, DynamicVector * aP2);
    void Constructor_SpawnManagerClass();
    void* Constructor(void *a1, void *a2, void *a3);
    SpawnManagerClass * ProcessEvent(void * Block, char a2);
};

} // namespace gamemd
