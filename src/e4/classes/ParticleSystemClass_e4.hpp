// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct ParticleSystemTypeClass;  // fix_fwd_type_supply
struct VectorClass_flat;  // fix_fwd_type_supply

struct ParticleSystemClass {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    void* vtable2;  // 0x4
    void* vtable3;  // 0x8
    void* vtable4;  // 0xC
    AbstractClass* uniqueId;  // 0x10 [X30:type_map]
    bool IsInitialized;  // 0x12
    bool IsAllocated;  // 0x13
    int abstractFlags;  // 0x14
    int nextArrayIndex;  // 0x18
    int referenceCount;  // 0x1C
    void * NeedsSaveOrLink;  // 0x20
    int objectTypeFlags;  // 0x24
    int owningHouseIndex;  // 0x28
    int fallRate;  // 0x2C
    void * nextObject;  // 0x30
    unsigned int alignmentPadding;  // 0x33
    void * attachedTag;  // 0x34
    int occupant;  // 0x36
    void * attachedBomb;  // 0x38
    unsigned char ambientSoundController;  // 0x3C
    unsigned char customSound_controller;  // 0x50
    int customSound;  // 0x64
    char bombVisible;  // 0x68
    unsigned char alignmentPadding69;  // 0x69
    IUnknown* health;  // 0x6C [X30:type_map]
    int estimatedHealth;  // 0x70
    char isOnMap;  // 0x74
    unsigned char alignmentPadding75;  // 0x75
    int spawnStatus;  // 0x78
    int visibilityFlags;  // 0x7C
    char needsRedraw;  // 0x80
    char inLimbo;  // 0x81
    char inOpenToppedTransport;  // 0x82
    char isSelected;  // 0x83
    char hasParachute;  // 0x84
    unsigned char alignmentPadding85;  // 0x85
    void * parachute;  // 0x88
    char onBridge;  // 0x8C
    char isFallingDown;  // 0x8D
    char wasFallingDown;  // 0x8E
    char isBomb;  // 0x8F
    char isAliveFlag;  // 0x90
    unsigned char alignmentPadding91;  // 0x91
    int lastLayer;  // 0x94
    char isInLogic;  // 0x98
    char isVisible;  // 0x99
    unsigned short alignmentPadding99;  // 0x9A
    unsigned char location;  // 0x9C
    void * lineTrailer;  // 0xA8
    ParticleSystemTypeClass* Type;  // 0xAC
    char SpawnDistanceToOwner[12];  // 0xB0
    void* Particles;  // 0xBC [X30:type_map]
    char TargetCoords[12];  // 0xC0
    TechnoClass* Owner;  // 0xCC [X30:type_map]
    unsigned int Target;  // 0xD0
    int SpawnFrames;  // 0xD4 [X30:type_map]
    int Lifetime;  // 0xD8 [X30:type_map]
    int SparkSpawnFrames;  // 0xDC [X30:type_map]
    void* SpotlightRadius;  // 0xE0 [X30:type_map]
    bool TimeToDie;  // 0xE4
    bool ParticleSystemClass_field_bool_F9;  // 0xF9
    AbstractClass* OwnerHouse;  // 0xFC [X30:type_map]
// --- flat members (END) ---
    static int CreateParticle(void *aP1, void *a2, void *a3);
    void* ObjectClass;  // 0x0 (no offset truth)
    VectorClass_flat * vt_00_(char a2);
    unsigned int * ddtor(int a2, int a3);
    int Draw(void *a1 = 0, void *a2 = 0, void *a3 = 0, void *a4 = 0, void *a5 = 0, void *a6 = 0, void *a7 = 0, void *a8 = 0);
    int GetObjectSize();
    int GetTypeIdentifier();
    int SaveToINI(int a2);
    int StubReturn2();
    int vt_04_(int * a2);
    unsigned int LoadTypeData(int a2);
    unsigned int vt_05_(int a2);
    void GetClassIdentifier();
    void initParticleArray();
    int  Constructor(int a2, int * a3, int a4, void * a5, unsigned int * a6, int a7);  // 0x62dc50
    char __pad_E5[20];  // 0xE5 (ml)
    unsigned char *m_1;  // 0x1 (offset-truth)
    AbstractClass* m_10;  // 0x10 (offset-truth) [X30:type_map]
    unsigned int m_8;  // 0x8 (offset-truth)
    unsigned int m_C;  // 0xC (offset-truth)

    unsigned int u32_F8;  // X10 supply (member_lookup)
    unsigned char __pad_0E5;  // 0xE5 [X30:canon]
    unsigned char __pad_0FA;  // 0xFA [X30:canon]
    unsigned int vfptr;  // [X30:default]
};

} // namespace gamemd
