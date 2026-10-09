// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct TubeClass {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    void* vtable2;  // 0x4
    void* vtable3;  // 0x8
    void* vtable4;  // 0xC
    int uniqueId;  // 0x10
    unsigned int q011;  // 0x11
    bool IsAllocated;  // 0x13
    int abstractFlags;  // 0x14
    int nextArrayIndex;  // 0x18
    unsigned int q01A;  // 0x1A
    int referenceCount;  // 0x1C
    bool q01D;  // 0x1D
    void * NeedsSaveOrLink;  // 0x20
    int objectTypeFlags;  // 0x24
    int owningHouseIndex;  // 0x28
    unsigned int q02A;  // 0x2A
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
    unsigned int ambientSoundController;  // 0x3C
    unsigned int q03D;  // 0x3D
    int q040;  // 0x40
    int q044;  // 0x44
    void * q048;  // 0x48
    bool q04A;  // 0x4A
    unsigned int q04C;  // 0x4C
    unsigned char q04F;  // 0x4F
    unsigned int customSound_controller;  // 0x50
    unsigned int q054;  // 0x54
    unsigned char q058;  // 0x58
    unsigned char q05C;  // 0x5C
    unsigned int q060;  // 0x60
    int customSound;  // 0x64
    char bombVisible;  // 0x68
    int health;  // 0x6C
    int estimatedHealth;  // 0x70
    char isOnMap;  // 0x74
    int spawnStatus;  // 0x78
    int visibilityFlags;  // 0x7C
    char needsRedraw;  // 0x80
    char inLimbo;  // 0x81
    char inOpenToppedTransport;  // 0x82
    char isSelected;  // 0x83
    char hasParachute;  // 0x84
    void * parachute;  // 0x88
    char onBridge;  // 0x8C
    char isFallingDown;  // 0x8D
    char wasFallingDown;  // 0x8E
    char isBomb;  // 0x8F
    char isAliveFlag;  // 0x90
    int lastLayer;  // 0x94
    char isInLogic;  // 0x98
    char isVisible;  // 0x99
    unsigned int location;  // 0x9C
    unsigned char q0A0;  // 0xA0
    unsigned int q0A4;  // 0xA4
    void * lineTrailer;  // 0xA8
    unsigned char q0A9;  // 0xA9
    unsigned char q0AA;  // 0xAA
    unsigned int q0AB;  // 0xAB
    char TubeClass_field_AC[4];  // 0xAC
    char TubeClass_field_B0[4];  // 0xB0
    char TubeClass_field_B4[4];  // 0xB4
    char TubeClass_field_B8[4];  // 0xB8
    unsigned char q0B9;  // 0xB9
    char TubeClass_field_BC[4];  // 0xBC
    unsigned int u32_C0;  // 0xC0
    unsigned int q0C3;  // 0xC3
    char TubeClass_field_C4[4];  // 0xC4
// --- flat members (END) ---
    int LoadState(AbstractClass * aP0, int aP1);
    int SaveState(TechnoTypeClass * aP0, int * a1, int aP2);
    int StubReturn452();
    int StubReturn53();
    int ddtor(int a1, unsigned int * a2);
     AbstractClass * Construct(__int16 *a2, int a3);  // G57w10-S raw 0x00727FD0 (was C2597 interim stub)
};

} // namespace gamemd
