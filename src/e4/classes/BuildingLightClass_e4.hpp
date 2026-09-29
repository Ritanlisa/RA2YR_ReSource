// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct BuildingLightClass {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    void* vtable2;  // 0x4
    void* vtable3;  // 0x8
    unsigned int qC;  // 0xC
    int uniqueId;  // 0x10
    unsigned int q011;  // 0x11
    bool IsAllocated;  // 0x13
    int abstractFlags;  // 0x14
    int nextArrayIndex;  // 0x18
    unsigned int q01A;  // 0x1A
    int referenceCount;  // 0x1C
    bool q01D;  // 0x1D
    unsigned int q01E;  // 0x1E
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
    unsigned int q03B;  // 0x3B
    unsigned char ambientSoundController;  // 0x3C
    unsigned int q03D;  // 0x3D
    int q040;  // 0x40
    bool q042;  // 0x42
    int q044;  // 0x44
    void * q048;  // 0x48
    bool q04A;  // 0x4A
    unsigned int q04C;  // 0x4C
    unsigned char q04F;  // 0x4F
    unsigned char customSound_controller;  // 0x50
    unsigned int q054;  // 0x54
    unsigned int q058;  // 0x58
    unsigned int q05A;  // 0x5A
    unsigned int q05C;  // 0x5C
    unsigned int q060;  // 0x60
    int customSound;  // 0x64
    char bombVisible;  // 0x68
    unsigned char alignmentPadding69;  // 0x69
    unsigned int q06A;  // 0x6A
    int health;  // 0x6C
    int estimatedHealth;  // 0x70
    void* isOnMap;  // 0x74
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
    void* isAliveFlag;  // 0x90
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
    double Speed;  // 0xAC
    unsigned int q0B0;  // 0xB0
    unsigned int q0B1;  // 0xB1
    unsigned int q0B2;  // 0xB2
    unsigned int q0B4;  // 0xB4
    char BuildingLightClass_field_B8[12];  // 0xB8
    unsigned char q0B9;  // 0xB9
    unsigned int q0BC;  // 0xBC
    bool q0BF;  // 0xBF
    unsigned int q0C0;  // 0xC0
    unsigned int q0C3;  // 0xC3
    char BuildingLightClass_field_C4[12];  // 0xC4
    unsigned char q0C5;  // 0xC5
    unsigned char q0C6;  // 0xC6
    BuildingLightClass* q0C8;  // 0xC8
    BuildingLightClass* q0CC;  // 0xCC
    unsigned int BuildingLightClass_field_D0;  // 0xD0
    unsigned int q0D4;  // 0xD4
    bool BuildingLightClass_field_D8;  // 0xD8
    unsigned char q0D9;  // 0xD9
    char BehaviourMode[4];  // 0xDC
    unsigned int BuildingLightClass_field_E0;  // 0xE0
    ObjectClass* FollowingObject;  // 0xE4
    unsigned int GetCellCoords_Alt;
    unsigned int abstractFlags5;
    unsigned int objectTypeFlags6;
    unsigned int uniqueId4;
    unsigned int uniqueId5;
    unsigned int vtable0;
    unsigned int vtable22;
    unsigned int vtable4;
    unsigned int Dtor;
// --- flat members (END) ---
    BuildingLightClass * SDDTOR(char a2);
    int SD_vt03(int a1, unsigned int * a2);
    int SD_vt06(TechnoTypeClass * aP0, int * a1, int aP2);
    int SD_vt11();
    int SD_vt12();
    int SD_vt30();
    int SD_vt34();
    signed int UpdateOscillation();
    unsigned int * FindTarget(CCINIClass * aP1);
};

} // namespace gamemd
