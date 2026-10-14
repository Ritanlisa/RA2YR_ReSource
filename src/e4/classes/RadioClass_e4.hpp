// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once



#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct TagClass;  // fix_fwd_type_supply
struct BombClass;  // fix_fwd_type_supply
struct AnimClass;  // fix_fwd_type_supply
struct LineTrail;  // fix_fwd_type_supply

struct RadioClass {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    void* vtable2;  // 0x4
    void* vtable3;  // 0x8
    void* vtable4;  // 0xC
    unsigned int uniqueId;  // 0x10
    bool IsAllocated;  // 0x13
    unsigned int abstractFlags;  // 0x14
    unsigned int nextArrayIndex;  // 0x18
    int referenceCount;  // 0x1C
    unsigned char NeedsSaveOrLink;  // 0x20
    unsigned int objectTypeFlags;  // 0x24
    unsigned int owningHouseIndex;  // 0x28
    char fallRate[4];  // 0x2C
    ObjectClass* nextObject;  // 0x30
    unsigned char needsSave;  // 0x32
    unsigned int pad21;  // 0x33
    TagClass* attachedTag;  // 0x34
    BombClass* attachedBomb;  // 0x38
    char ambientSoundController[20];  // 0x3C
    char customSound_controller[20];  // 0x50
    char customSound[4];  // 0x64
    bool bombVisible;  // 0x68
    unsigned char alignmentPadding69;  // 0x69
    char health[4];  // 0x6C
    char estimatedHealth[4];  // 0x70
    bool isOnMap;  // 0x74
    unsigned char alignmentPadding75;  // 0x75
    unsigned int spawnStatus;  // 0x78
    unsigned int visibilityFlags;  // 0x7C
    bool needsRedraw;  // 0x80
    bool inLimbo;  // 0x81
    bool inOpenToppedTransport;  // 0x82
    bool isSelected;  // 0x83
    bool hasParachute;  // 0x84
    unsigned char alignmentPadding85;  // 0x85
    AnimClass* parachute;  // 0x88
    bool onBridge;  // 0x8C
    bool isFallingDown;  // 0x8D
    bool wasFallingDown;  // 0x8E
    bool isBomb;  // 0x8F
    bool isAliveFlag;  // 0x90
    unsigned char alignmentPadding91;  // 0x91
    unsigned int lastLayer;  // 0x94
    bool isInLogic;  // 0x98
    bool isVisible;  // 0x99
    unsigned char alignmentPadding99;  // 0x9A
    char location[12];  // 0x9C
    LineTrail* lineTrailer;  // 0xA8
    char currentMission[4];  // 0xAC
    char suspendedMission[4];  // 0xB0
    char queuedMission[4];  // 0xB4
    bool missionQueued;  // 0xB8
    unsigned char alignmentPaddingB9;  // 0xB9
    char missionStatus[4];  // 0xBC
    char missionStartTime[4];  // 0xC0
    unsigned int missionData;  // 0xC4
    char missionTimer[12];  // 0xC8
    char lastCommands[12];  // 0xD4
    unsigned int radioLinks;  // 0xE0
// --- flat members (END) ---
    int ExecuteAction(int aP1, char aP2);  // G57w10-S raw 0x0065AAC0 IUnknown 占位清除
    int FindLinkIndex(int a2);
    int HasFreeLink();
    int LoadState(int aP1, int aP2);
    int PowerDrainUpdate(AbstractClass * aP1);
    int ProcessCmd();
    int SaveState(int * a0, RadioClass * aP1, int aP2);
    unsigned int * Release(void *a1);
    void SetLinkCount(int a2);
     int Constructor(RadioClass * aP1, void *a1 = 0, void *a2 = 0, void *a3 = 0);

    unsigned int u32_E8;  // X10 supply (member_lookup)
};

} // namespace gamemd
