// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once



#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct TechnoClass;  // fix_fwd_type_supply
struct HouseClass;  // fix_fwd_type_supply
struct AbstractClass;  // fix_fwd_type_supply

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
    unsigned int q01A;  // 0x1A
    int referenceCount;  // 0x1C
    bool q01D;  // 0x1D
    void * NeedsSaveOrLink;  // 0x20
    TechnoClass* owner;  // 0x24
    unsigned int IsAllocated;  // 0x25
    HouseClass* spawnOwner;  // 0x28
    bool q02B;  // 0x2B
    HouseClass* spawnType;  // 0x2C
    unsigned int spawnCount;  // 0x30
    unsigned char q031;  // 0x31
    unsigned int alignmentPadding;  // 0x33
    char SpawnManagerClass_field_34[4];  // 0x34
    void *q38;  // 0x38
    unsigned char q03A;  // 0x3A
    unsigned int q03B;  // 0x3B
    unsigned int spawnVectorCount;  // 0x3C
    unsigned int q03D;  // 0x3D
    unsigned int spawnVectorCapacity;  // 0x40
    bool q042;  // 0x42
    char creationFrame[4];  // 0x44
    unsigned char u8_45;  // 0x45
    void* q048;  // 0x48
    bool q04A;  // 0x4A
    unsigned int q04C;  // 0x4C
    unsigned char q04F;  // 0x4F
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
    unsigned int uniqueId0;
    unsigned int vtable24;
    unsigned int vtable46;
    unsigned int spawns;
    unsigned int SpawnControl;
// --- flat members (END) ---
    AbstractClass * * LoadFromStream(int aP1, AbstractClass * aP1_4);
    SpawnManagerClass(void * aP1, int a3, int a4, int a5, int a6);
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
};

} // namespace gamemd
