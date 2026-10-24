// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once



#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

#define GAMEMD_E4_OWNS_BUILDINGLIGHT 1  // G42.36: dedup pair (first include wins)
#ifndef GAMEMD_CORE_OWNS_BUILDINGLIGHT
struct BuildingLightClass {
#pragma pack(push, 1)  // X60: binary-packed layout
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
    char isOnMap[1];  // 0x74
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
    char isAliveFlag[1];  // 0x90
    char alignmentPadding91[3];  // 0x91
    int lastLayer;  // 0x94
    char isInLogic;  // 0x98
    char isVisible;  // 0x99
    unsigned short alignmentPadding99;  // 0x9A
    int location[3];  // 0x9C
    void * lineTrailer;  // 0xA8
    double Speed;  // 0xAC
    char __pad_B4[4];  // 0xB4
    unsigned int BuildingLightClass_field_B8;  // 0xB8
    unsigned int q0BC;  // 0xBC
    unsigned int q0C0;  // 0xC0
    unsigned int BuildingLightClass_field_C4;  // 0xC4
    unsigned int q0C8;  // 0xC8
    unsigned int q0CC;  // 0xCC
    unsigned int BuildingLightClass_field_D0;  // 0xD0
    unsigned char __pad_0D4;  // 0xD4
    char __pad_D5[3];  // 0xD5
    bool BuildingLightClass_field_D8;  // 0xD8
    unsigned char __pad_0D9;  // 0xD9
    char __pad_DA[2];  // 0xDA
    int BehaviourMode;  // 0xDC
    void * BuildingLightClass_field_E0;  // 0xE0
    ObjectClass * FollowingObject;  // 0xE4
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    BuildingLightClass * SDDTOR(char a2, int a1, int aP0, int aP2);
    int SD_vt03(int a1, unsigned int * a2);
    int SD_vt06(TechnoTypeClass * aP0, int * a1, int aP2);
    int SD_vt11();
    int SD_vt12();
    int SD_vt30();
    int SD_vt34();
    signed int UpdateOscillation();
    unsigned int * FindTarget(unsigned int *a2);
    void* CTOR(int a1);
    int Draw_Start(int a1, int a2);
    int SD_vt23();
    int SD_vt05(void* a1, int a2);
    int SD_vt10(int a1, int a2);
    int CalculateDistanceIntensity();
    int SD_vt13(void* a1);
    int SD_vt53();
    int SD_vt54(int a1, int a2);
    int FindAllTargets(int a1, int a2, int a3, int a4);
    unsigned int * FindTarget(unsigned int *a2, int aP1, int a1, int aP0, int aP2);
#pragma pack(pop)
};
#endif  // GAMEMD_CORE_OWNS_BUILDINGLIGHT

} // namespace gamemd
