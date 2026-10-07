// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct ParticleSystemTypeClass;  // fix_fwd_type_supply
struct VectorClass_flat;  // fix_fwd_type_supply

struct ParticleSystemClass {
    static int CreateParticle(void *aP1, void *a2, void *a3);  // 0x62E380 raw: int CreateParticle(ParticleSystemClass*, _DWORD*, _DWORD*)

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
    bool q02B;  // 0x2B
    int fallRate;  // 0x2C
    void * nextObject;  // 0x30
    unsigned char q031;  // 0x31
    unsigned int alignmentPadding;  // 0x33
    void * attachedTag;  // 0x34
    int occupant;  // 0x36
    void * attachedBomb;  // 0x38
    unsigned char q03A;  // 0x3A
    unsigned char ambientSoundController;  // 0x3C
    unsigned int u32_40;  // 0x40
    unsigned int u32_44;  // 0x44
    unsigned int u32_48;  // 0x48
    unsigned int q04C;  // 0x4C
    unsigned char customSound_controller;  // 0x50
    unsigned int u32_54;  // 0x54
    unsigned int u32_58;  // 0x58
    unsigned int u32_5C;  // 0x5C
    unsigned int q060;  // 0x60
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
    char hasParachute;  // 0x84
    unsigned char alignmentPadding85;  // 0x85
    void * parachute;  // 0x88
    unsigned int q08A;  // 0x8A
    unsigned int q08B;  // 0x8B
    char onBridge;  // 0x8C
    char isFallingDown;  // 0x8D
    char wasFallingDown;  // 0x8E
    char isAliveFlag;  // 0x90
    unsigned char alignmentPadding91;  // 0x91
    int lastLayer;  // 0x94
    char isInLogic;  // 0x98
    char isVisible;  // 0x99
    unsigned short alignmentPadding99;  // 0x9A
    unsigned char location;  // 0x9C
    unsigned int q0A0;  // 0xA0
    unsigned int q0A4;  // 0xA4
    void * lineTrailer;  // 0xA8
    ParticleSystemTypeClass* Type;  // 0xAC
    TechnoClass* q0B4;  // 0xB4
    unsigned int Particles;  // 0xBC
    char TargetCoords[12];  // 0xC0
    unsigned int q0C4;  // 0xC4
    unsigned int Owner;  // 0xCC
    ParticleSystemTypeClass* q0F0;  // 0xF0
    ParticleSystemTypeClass* q0F4;  // 0xF4
    void* q0F8;  // 0xF8
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

};

} // namespace gamemd
