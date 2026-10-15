// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once



#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct TagClass;  // fix_fwd_type_supply
struct BombClass;  // fix_fwd_type_supply
struct AnimClass;  // fix_fwd_type_supply
struct LineTrail;  // fix_fwd_type_supply

struct MissionClass {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    void* vtable2;  // 0x4
    void* vtable3;  // 0x8
    void* vtable4;  // 0xC
unsigned int uniqueId;  // 0x10 [X35-L7 kind=unsigned int]
    bool IsAllocated;  // 0x13
    unsigned int abstractFlags;  // 0x14
    unsigned int AARate;  // 0x18
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
int customSound;  // 0x64 [X35-L7 kind=int]
    bool bombVisible;  // 0x68
    unsigned char alignmentPadding69;  // 0x69
    int health;  // 0x6C [X30:type_map]
int estimatedHealth;  // 0x70 [X35-L7 kind=int]
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
    int currentMission;  // 0xAC [X30:type_map]
    int suspendedMission;  // 0xB0 [X30:type_map]
    int queuedMission;  // 0xB4 [X30:type_map]
    bool missionQueued;  // 0xB8
    unsigned char alignmentPaddingB9;  // 0xB9
    int missionStatus;  // 0xBC [X30:type_map]
    IUnknown* missionStartTime;  // 0xC0 [X30:type_map]
    unsigned int missionData;  // 0xC4
    char missionTimer[12];  // 0xC8
// --- flat members (END) ---
    static int SetState(void *aP1);
    AbstractClass * * LoadFromINI(unsigned int *a2, void *a2_1 = 0);
    int HasValidTarget();
    int Return450A();
    int Return450B();
    int Return450C();
    int Return450D();
    int Return450E();
    int Return450F();
    int Return450G();
    int Return450H();
    int Return450I();
    int Return450J();
    int Return450K();
    int Return450L();
    int Return450M();
    int Return450N();
    int vt_entry_1FC();
static char * GetMissionControl(MissionClass * aP1);
    unsigned int * Init(void *a1 = 0, void *a2 = 0);  // 0x49b610
    int ForceMission();
    int NextMission();
    int QueueMission();

    unsigned int q005;  // X10 supply (member_lookup)
    unsigned int q006;  // X10 supply (member_lookup)
    unsigned int q007;  // X10 supply (member_lookup)
    unsigned int q009;  // X10 supply (member_lookup)
};

} // namespace gamemd
