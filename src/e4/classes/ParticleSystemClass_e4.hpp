// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct ParticleSystemTypeClass;  // fix_fwd_type_supply
struct VectorClass_flat;  // fix_fwd_type_supply

struct ParticleSystemClass {
    unsigned int ptr_0;  // 0x0
    void* ptr_4;  // 0x4
    unsigned int m_8;  // 0x8
    unsigned int m_C;  // 0xC
    AbstractClass* uniqueId;  // 0x10
    int abstractFlags;  // 0x14
    int nextArrayIndex;  // 0x18
    int referenceCount;  // 0x1C
    void * NeedsSaveOrLink;  // 0x20
    int objectTypeFlags;  // 0x24
    int owningHouseIndex;  // 0x28
    int fallRate;  // 0x2C
    void * nextObject;  // 0x30
    void * attachedTag;  // 0x34
    void * attachedBomb;  // 0x38
    int ambientSoundController[5];  // 0x3C
    int customSound_controller[5];  // 0x50
    int customSound;  // 0x64
    char bombVisible;  // 0x68
    char alignmentPadding69[3];  // 0x69
    IUnknown* health;  // 0x6C
    int estimatedHealth;  // 0x70
    char isOnMap;  // 0x74
    char alignmentPadding75[3];  // 0x75
    int spawnStatus;  // 0x78
    int visibilityFlags;  // 0x7C
    char needsRedraw;  // 0x80
    char inLimbo;  // 0x81
    char inOpenToppedTransport;  // 0x82
    char isSelected;  // 0x83
    char hasParachute;  // 0x84
    char alignmentPadding85[3];  // 0x85
    void * parachute;  // 0x88
    char onBridge;  // 0x8C
    char isFallingDown;  // 0x8D
    char wasFallingDown;  // 0x8E
    char isBomb;  // 0x8F
    char isAliveFlag;  // 0x90
    char alignmentPadding91[3];  // 0x91
    int lastLayer;  // 0x94
    char isInLogic;  // 0x98
    char isVisible;  // 0x99
    unsigned short alignmentPadding99;  // 0x9A
    int location[3];  // 0x9C
    void * lineTrailer;  // 0xA8
    ParticleSystemTypeClass* Type;  // 0xAC
    char SpawnDistanceToOwner[12];  // 0xB0
    void* Particles;  // 0xBC
    char TargetCoords[12];  // 0xC0
    TechnoClass* Owner;  // 0xCC
    unsigned int Target;  // 0xD0
    int SpawnFrames;  // 0xD4
    int Lifetime;  // 0xD8
    int SparkSpawnFrames;  // 0xDC
    void* SpotlightRadius;  // 0xE0
    bool TimeToDie;  // 0xE4
    char __pad_E5[20];  // 0xE5
    bool ParticleSystemClass_field_bool_F9;  // 0xF9
    unsigned char __pad_0FA;  // 0xFA
    char __pad_FB[1];  // 0xFB
    AbstractClass* OwnerHouse;  // 0xFC
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    static int CreateParticle(void *aP1, void *a2, void *a3);
    VectorClass_flat * g_var_4cd06d(char a2);
    unsigned int * ddtor(int a2, int a3);
    int Draw(void *a1 = 0, void *a2 = 0, void *a3 = 0, void *a4 = 0, void *a5 = 0, void *a6 = 0, void *a7 = 0, void *a8 = 0);
    int GetObjectSize();
    int GetTypeIdentifier();
    int SaveToINI(int a2);
    int StubReturn2();
    int g_var_9d376d(int * a2);
    unsigned int LoadTypeData(int a2);
    unsigned int g_var_167f7c(int a2);
    void GetClassIdentifier();
    void initParticleArray();
    int  Constructor(int a2, int * a3, int a4, void * a5, unsigned int * a6, int a7);  // 0x62dc50
};

} // namespace gamemd
