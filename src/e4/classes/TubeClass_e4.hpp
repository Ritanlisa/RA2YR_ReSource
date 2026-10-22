// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct TubeClass {
    void * ptr_0;  // 0x0
    void * ptr_4;  // 0x4
    void * ptr_8;  // 0x8
    void * ptr_C;  // 0xC
    int uniqueId;  // 0x10
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
    int health;  // 0x6C
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
    char alignmentPadding99[2];  // 0x9A
    int location[3];  // 0x9C
    void * lineTrailer;  // 0xA8
    char TubeClass_field_AC[4];  // 0xAC
    char TubeClass_field_B0[4];  // 0xB0
    char TubeClass_field_B4[4];  // 0xB4
    char TubeClass_field_B8[4];  // 0xB8
    char TubeClass_field_BC[4];  // 0xBC
    unsigned int __pad_0C0;  // 0xC0
    char TubeClass_field_C4[4];  // 0xC4
    char __pad_C8[248];  // 0xC8
    unsigned int u32_1C0;  // 0x1C0
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    int LoadState(AbstractClass * aP0, int aP1);
    int SaveState(TechnoTypeClass * aP0, int * a1, int aP2);
    int StubReturn452();
    int StubReturn53();
    int ddtor(int a1, unsigned int * a2);
     AbstractClass * Construct(int16_t *a2, int a3, void *a1 = 0, void *a4 = 0, void *a5 = 0, void *a6 = 0, void *a7 = 0, void *a8 = 0, void *a9 = 0);
};

} // namespace gamemd
