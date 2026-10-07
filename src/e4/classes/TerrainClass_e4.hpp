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
    unsigned int q011;  // 0x11
    bool IsAllocated;  // 0x13
    int abstractFlags;  // 0x14
    int nextArrayIndex;  // 0x18
    void* referenceCount;  // 0x1C
    void * NeedsSaveOrLink;  // 0x20
    void* objectTypeFlags;  // 0x24
    void* owningHouseIndex;  // 0x28
    bool q02B;  // 0x2B
    int fallRate;  // 0x2C
    void * nextObject;  // 0x30
    unsigned char q031;  // 0x31
    unsigned int alignmentPadding;  // 0x33
    void* attachedTag;  // 0x34
    int occupant;  // 0x36
    void * attachedBomb;  // 0x38
    unsigned char q03A;  // 0x3A
    unsigned char ambientSoundController;  // 0x3C
    int q040;  // 0x40
    int q044;  // 0x44
    unsigned int u32_48;  // 0x48
    unsigned int q04C;  // 0x4C
    unsigned char customSound_controller;  // 0x50
    unsigned int u32_54;  // 0x54
    unsigned int q058;  // 0x58
    unsigned int q05C;  // 0x5C
    void* q060;  // 0x60
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
    void* isAliveFlag;  // 0x90
    unsigned char alignmentPadding91;  // 0x91
    int lastLayer;  // 0x94
    char isInLogic;  // 0x98
    char isVisible;  // 0x99
    unsigned short alignmentPadding99;  // 0x9A
    unsigned char location;  // 0x9C
    unsigned int q0A0;  // 0xA0
    unsigned int q0A4;  // 0xA4
    void * lineTrailer;  // 0xA8
    char Animation[8];  // 0xAC
    unsigned int q0B0;  // 0xB0
    TerrainTypeClass* Type;  // 0xB4
    int height;  // 0xBC
    void* q0C4;  // 0xC4
    char TerrainClass_field_rect_D0[16];  // 0xD0
    void* q0D8;  // 0xD8
    void* GenerateTexture_ph;  // 0x0 (no offset truth)  // w18j3: filler renamed (no offset truth; canon TerrainClass::GenerateTexture is a method)
    static unsigned int GenerateTexture(...);  // w18j3 C2597 static-call supply (w16g4 convention)
// --- flat members (END) ---
    AbstractClass * * ProcessSpawnAnim(unsigned int * a1, AbstractClass * aP2);
    int CheckFrameUpdate(TechnoTypeClass * aP0, int * a1, int aP2);
    int MissionStubReturnZero();
    int MissionStubReturnZero2();
    int MissionStubReturnZero3(int a1, unsigned int * a2);
    void* LoadFromStream(unsigned int * a1, int a2);
    int InitTheatre();  // 0x549e90
    void ** Construct(void *a2, int16_t *a3);  // 0x71bb90
};

} // namespace gamemd
