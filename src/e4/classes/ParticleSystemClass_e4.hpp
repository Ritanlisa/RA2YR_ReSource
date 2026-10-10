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
    void* uniqueId;  // 0x10
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
    int health;  // 0x6C
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
    unsigned int Particles;  // 0xBC
    char TargetCoords[12];  // 0xC0
    unsigned int Owner;  // 0xCC
    unsigned int Target;  // 0xD0
    char SpawnFrames[4];  // 0xD4
    char Lifetime[4];  // 0xD8
    char SparkSpawnFrames[4];  // 0xDC
    char SpotlightRadius[4];  // 0xE0
    bool TimeToDie;  // 0xE4
    bool ParticleSystemClass_field_bool_F9;  // 0xF9
    unsigned int OwnerHouse;  // 0xFC
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
    unsigned int m_10;  // 0x10 (offset-truth)
    unsigned int m_8;  // 0x8 (offset-truth)
    unsigned int m_C;  // 0xC (offset-truth)
    static double vfptr(...);  // plateau: C2039/C3861 stub
};

} // namespace gamemd
