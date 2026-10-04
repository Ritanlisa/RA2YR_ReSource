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
    unsigned int q01A;  // 0x1A
    int referenceCount;  // 0x1C
    bool q01D;  // 0x1D
    unsigned int q01E;  // 0x1E
    void * NeedsSaveOrLink;  // 0x20
    int objectTypeFlags;  // 0x24
    unsigned int q027;  // 0x27
    int owningHouseIndex;  // 0x28
    bool q02B;  // 0x2B
    int fallRate;  // 0x2C
    void * nextObject;  // 0x30
    unsigned char q031;  // 0x31
    unsigned int alignmentPadding;  // 0x33
    void * attachedTag;  // 0x34
    int occupant;  // 0x36
    void * attachedBomb;  // 0x38
    unsigned char q03A;  // 0x3A
    unsigned int q03B;  // 0x3B
    unsigned char ambientSoundController;  // 0x3C
    unsigned int q03D;  // 0x3D
    unsigned int u32_40;  // 0x40
    bool q042;  // 0x42
    unsigned int u32_44;  // 0x44
    unsigned int u32_48;  // 0x48
    bool q04A;  // 0x4A
    unsigned int q04C;  // 0x4C
    unsigned char q04F;  // 0x4F
    unsigned char customSound_controller;  // 0x50
    bool q053;  // 0x53
    unsigned int u32_54;  // 0x54
    unsigned int u32_58;  // 0x58
    unsigned int q05A;  // 0x5A
    unsigned int u32_5C;  // 0x5C
    unsigned int q060;  // 0x60
    int customSound;  // 0x64
    char bombVisible;  // 0x68
    unsigned char alignmentPadding69;  // 0x69
    unsigned int q06A;  // 0x6A
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
    unsigned int q08A;  // 0x8A
    unsigned int q08B;  // 0x8B
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
    unsigned int q0A0;  // 0xA0
    unsigned char q0A1;  // 0xA1
    unsigned char q0A3;  // 0xA3
    unsigned int q0A4;  // 0xA4
    void * lineTrailer;  // 0xA8
    unsigned char q0A9;  // 0xA9
    unsigned char q0AA;  // 0xAA
    unsigned int q0AB;  // 0xAB
    ParticleSystemTypeClass* Type;  // 0xAC
    char SpawnDistanceToOwner[12];  // 0xB0
    unsigned int q0B1;  // 0xB1
    unsigned int q0B2;  // 0xB2
    TechnoClass* q0B4;  // 0xB4
    TechnoClass* q0B8;  // 0xB8
    unsigned char q0B9;  // 0xB9
    unsigned int Particles;  // 0xBC
    bool q0BF;  // 0xBF
    char TargetCoords[12];  // 0xC0
    unsigned int q0C3;  // 0xC3
    unsigned int q0C4;  // 0xC4
    unsigned char q0C5;  // 0xC5
    unsigned char q0C6;  // 0xC6
    unsigned int q0C8;  // 0xC8
    unsigned int q0C9;  // 0xC9
    unsigned int Owner;  // 0xCC
    unsigned int Target;  // 0xD0
    char SpawnFrames[4];  // 0xD4
    char Lifetime[4];  // 0xD8
    char SparkSpawnFrames[4];  // 0xDC
    char SpotlightRadius[4];  // 0xE0
    bool TimeToDie;  // 0xE4
    unsigned char q0E5;  // 0xE5
    ParticleSystemClass* q0E8;  // 0xE8
    bool q0EB;  // 0xEB
    ParticleSystemClass* q0EC;  // 0xEC
    bool q0ED;  // 0xED
    ParticleSystemTypeClass* q0F0;  // 0xF0
    unsigned int q0F2;  // 0xF2
    ParticleSystemTypeClass* q0F4;  // 0xF4
    bool q0F6;  // 0xF6
    void* q0F7;  // 0xF7
    void* q0F8;  // 0xF8
    bool ParticleSystemClass_field_bool_F9;  // 0xF9
    unsigned char q0FB;  // 0xFB
    unsigned int OwnerHouse;  // 0xFC
    unsigned int *__pad_E5;
    unsigned int *m_1;
    unsigned int m_10;
    unsigned int m_8;
    unsigned int m_C;
    void* ObjectClass;  // 0x0 (no offset truth)
// --- flat members (END) ---
    VectorClass_flat * vt_00_(char a2);
    unsigned int * ddtor(int a2, int a3);
    int Draw();
    int GetObjectSize();
    int GetTypeIdentifier();
    int SaveToINI(int a2);
    int StubReturn2();
    int vt_04_(int * a2);
    unsigned int LoadTypeData(int a2);
    unsigned int vt_05_(int a2);
    void GetClassIdentifier();
    void initParticleArray();
    int Constructor(int a1, int *a2, int a3, void *a4, unsigned int *a5, int a6);  // 0x62dc50

    int Constructor(int a2, int *a3, int a4, void *a5, unsigned int *a6, int a7);  // G42.39 supply
};

} // namespace gamemd
