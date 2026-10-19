// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once



#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct TagClass;  // fix_fwd_type_supply
struct BombClass;  // fix_fwd_type_supply
struct AnimClass;  // fix_fwd_type_supply
struct LineTrail;  // fix_fwd_type_supply

struct MissionClass {
    void* ptr_0;  // 0x0
    void* ptr_4;  // 0x4
    void* ptr_8;  // 0x8
    void* ptr_C;  // 0xC
    unsigned int uniqueId;  // 0x10
    unsigned int abstractFlags;  // 0x14
    unsigned int AARate;  // 0x18
    int referenceCount;  // 0x1C
    int NeedsSaveOrLink;  // 0x20
    unsigned int objectTypeFlags;  // 0x24
    unsigned int owningHouseIndex;  // 0x28
    char fallRate[4];  // 0x2C
    ObjectClass* nextObject;  // 0x30
    TagClass* attachedTag;  // 0x34
    BombClass* attachedBomb;  // 0x38
    char ambientSoundController[20];  // 0x3C
    char customSound_controller[20];  // 0x50
    int customSound;  // 0x64
    bool bombVisible;  // 0x68
    char alignmentPadding69[3];  // 0x69
    int health;  // 0x6C
    int estimatedHealth;  // 0x70
    bool isOnMap;  // 0x74
    char alignmentPadding75[3];  // 0x75
    unsigned int spawnStatus;  // 0x78
    unsigned int visibilityFlags;  // 0x7C
    bool needsRedraw;  // 0x80
    bool inLimbo;  // 0x81
    bool inOpenToppedTransport;  // 0x82
    bool isSelected;  // 0x83
    bool hasParachute;  // 0x84
    char alignmentPadding85[3];  // 0x85
    AnimClass* parachute;  // 0x88
    bool onBridge;  // 0x8C
    bool isFallingDown;  // 0x8D
    bool wasFallingDown;  // 0x8E
    bool isBomb;  // 0x8F
    bool isAliveFlag;  // 0x90
    char alignmentPadding91[3];  // 0x91
    unsigned int lastLayer;  // 0x94
    bool isInLogic;  // 0x98
    bool isVisible;  // 0x99
    char alignmentPadding99[2];  // 0x9A
    char location[12];  // 0x9C
    LineTrail* lineTrailer;  // 0xA8
    int currentMission;  // 0xAC
    int suspendedMission;  // 0xB0
    int queuedMission;  // 0xB4
    bool missionQueued;  // 0xB8
    char alignmentPaddingB9[3];  // 0xB9
    int missionStatus;  // 0xBC
    IUnknown* missionStartTime;  // 0xC0
    unsigned int missionData;  // 0xC4
    char missionTimer[12];  // 0xC8
// --- flat members (BEGIN) ---
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
    int g_var_a00e37();
static char * GetMissionControl(MissionClass * aP1);
    unsigned int * Init(void *a1 = 0, void *a2 = 0);  // 0x49b610
    int ForceMission();
    int NextMission();
    int QueueMission();
};

} // namespace gamemd
