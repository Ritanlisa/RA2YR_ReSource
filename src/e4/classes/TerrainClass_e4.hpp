// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct TerrainTypeClass;  // fix_fwd_type_supply

struct TerrainClass {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    void* vtable2;  // 0x4
    void* vtable3;  // 0x8
    void* vtable4;  // 0xC
    void* uniqueId;  // 0x10
    bool IsAllocated;  // 0x13
    int abstractFlags;  // 0x14
    int nextArrayIndex;  // 0x18
    void* referenceCount;  // 0x1C
    void * NeedsSaveOrLink;  // 0x20
    void* objectTypeFlags;  // 0x24
    void* owningHouseIndex;  // 0x28
    int fallRate;  // 0x2C
    void * nextObject;  // 0x30
    unsigned int alignmentPadding;  // 0x33
    void* attachedTag;  // 0x34
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
    void* isAliveFlag;  // 0x90
    unsigned char alignmentPadding91;  // 0x91
    int lastLayer;  // 0x94
    char isInLogic;  // 0x98
    char isVisible;  // 0x99
    unsigned short alignmentPadding99;  // 0x9A
    unsigned char location;  // 0x9C
    void * lineTrailer;  // 0xA8
    char Animation[8];  // 0xAC
    TerrainTypeClass* Type;  // 0xB4
    bool IsBurning;  // 0xB8
    bool TimeToDie;  // 0xB9
    int height;  // 0xBC
    char TerrainClass_field_rect_D0[16];  // 0xD0
// --- flat members (END) ---
    void* GenerateTexture_ph;  // 0x0 (no offset truth)  // w18j3: filler renamed (no offset truth; canon TerrainClass::GenerateTexture is a method)
    static unsigned int GenerateTexture(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, int p8, int p9, int p10, char p11, int p12, char p13, char p14, char p15, int p16);  // x4:signals@0x547cf0
    AbstractClass * * ProcessSpawnAnim(unsigned int * a1, AbstractClass * aP2);
    int CheckFrameUpdate(TechnoTypeClass * aP0, int * a1, int aP2);
    int MissionStubReturnZero();
    int MissionStubReturnZero2();
    int MissionStubReturnZero3(int a1, unsigned int * a2);
    void* LoadFromStream(unsigned int * a1, int a2);
    int InitTheatre();  // 0x549e90
    void **  Construct(void * a2, int16_t * a3, void *a1 = 0, void *a4 = 0, void *a5 = 0, void *a6 = 0, void *a7 = 0, void *a8 = 0, void *a9 = 0);  // 0x71bb90
    unsigned char __pad_0BA;  // 0xBA [X30:canon]
    AbstractClass* __pad_0C0;  // 0xC0 [X30:type_map]
};

} // namespace gamemd
