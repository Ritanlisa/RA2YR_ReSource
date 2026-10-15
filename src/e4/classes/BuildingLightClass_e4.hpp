// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once



#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

#define GAMEMD_E4_OWNS_BUILDINGLIGHT 1  // G42.36: dedup pair (first include wins)
#ifndef GAMEMD_CORE_OWNS_BUILDINGLIGHT
struct BuildingLightClass {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    void* vtable2;  // 0x4
    void* vtable3;  // 0x8
    void* vtable4;  // 0xC
    int uniqueId;  // 0x10
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
    double Speed;  // 0xAC
    char BuildingLightClass_field_B8[12];  // 0xB8
    char BuildingLightClass_field_C4[12];  // 0xC4
    unsigned int BuildingLightClass_field_D0;  // 0xD0
    bool BuildingLightClass_field_D8;  // 0xD8
    int BehaviourMode;  // 0xDC [X30:type_map]
    void* BuildingLightClass_field_E0;  // 0xE0 [X30:type_map]
    ObjectClass* FollowingObject;  // 0xE4
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
    unsigned int uniqueId6;  // @0x43584f (W16G3 raw-usage vocab)
    unsigned int uniqueId7;  // @0x435857 (W16G3 raw-usage vocab)
    unsigned int uniqueId8;  // @0x435860 (W16G3 raw-usage vocab)
    unsigned int uniqueId9;  // @0x43586f (W16G3 raw-usage vocab)
    unsigned int abstractFlags0;  // @0x43587b (W16G3 raw-usage vocab)
    unsigned int abstractFlags1;  // @0x435890 (W16G3 raw-usage vocab)
    unsigned int abstractFlags2;  // @0x435884 (W16G3 raw-usage vocab)
    unsigned int abstractFlags3;  // @0x43588a (W16G3 raw-usage vocab)
    unsigned int abstractFlags6;  // @0x4358a3 (W16G3 raw-usage vocab)
    unsigned int abstractFlags7;  // @0x4358a9 (W16G3 raw-usage vocab)
    char __pad_B4[4];  // 0xB4 (ml)

    unsigned int q060;  // X10 supply (member_lookup)

    unsigned char __pad_0B4;  // X10 supply (csp_canon_members)
    unsigned char __pad_0D4;  // X10 supply (csp_canon_members)
    ParticleSystemClass* q388;  // X10 supply (member_lookup)
    unsigned char __pad_0D9;  // 0xD9 [X30:canon]
};
#endif  // GAMEMD_CORE_OWNS_BUILDINGLIGHT


} // namespace gamemd
