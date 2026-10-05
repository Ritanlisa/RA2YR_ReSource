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
    unsigned int uniqueId;  // 0x10
    unsigned int q011;  // 0x11
    bool IsAllocated;  // 0x13
    unsigned int abstractFlags;  // 0x14
    unsigned int nextArrayIndex;  // 0x18
    int referenceCount;  // 0x1C
    unsigned char NeedsSaveOrLink;  // 0x20
    unsigned int objectTypeFlags;  // 0x24
    unsigned int owningHouseIndex;  // 0x28
    bool q02B;  // 0x2B
    char fallRate[4];  // 0x2C
    void * nextObject;  // G42.39 fwd hazard  // 0x30
    unsigned char q031;  // 0x31
    unsigned char needsSave;  // 0x32
    void * attachedTag;  // G42.39 fwd hazard  // 0x34
    void * attachedBomb;  // G42.39 fwd hazard  // 0x38
    unsigned char q03A;  // 0x3A
    char ambientSoundController[20];  // 0x3C
    unsigned int q040;  // 0x40
    unsigned int q044;  // 0x44
    unsigned int q048;  // 0x48
    unsigned int q04C;  // 0x4C
    char customSound_controller[20];  // 0x50
    unsigned int q054;  // 0x54
    unsigned int q058;  // 0x58
    unsigned int q05C;  // 0x5C
    unsigned int q060;  // 0x60
    char customSound[4];  // 0x64
    bool bombVisible;  // 0x68
    unsigned char alignmentPadding69;  // 0x69
    unsigned int health;  // 0x6C
    unsigned int estimatedHealth;  // 0x70
    bool isOnMap;  // 0x74
    unsigned char alignmentPadding75;  // 0x75
    unsigned int spawnStatus;  // 0x78
    unsigned int q07B;  // 0x7B
    unsigned int visibilityFlags;  // 0x7C
    bool needsRedraw;  // 0x80
    bool inLimbo;  // 0x81
    bool inOpenToppedTransport;  // 0x82
    bool hasParachute;  // 0x84
    unsigned char alignmentPadding85;  // 0x85
    void * parachute;  // G42.39 fwd hazard  // 0x88
    unsigned int q08A;  // 0x8A
    unsigned int q08B;  // 0x8B
    bool onBridge;  // 0x8C
    bool isFallingDown;  // 0x8D
    bool wasFallingDown;  // 0x8E
    bool isAliveFlag;  // 0x90
    unsigned char alignmentPadding91;  // 0x91
    unsigned int lastLayer;  // 0x94
    bool isInLogic;  // 0x98
    bool isVisible;  // 0x99
    unsigned char alignmentPadding99;  // 0x9A
    char location[12];  // 0x9C
    unsigned int q0A0;  // 0xA0
    unsigned int q0A4;  // 0xA4
    void * lineTrailer;  // G42.39 fwd hazard  // 0xA8
    char currentMission[4];  // 0xAC
    char suspendedMission[4];  // 0xB0
    char queuedMission[4];  // 0xB4
    bool missionQueued;  // 0xB8
    char missionStatus[4];  // 0xBC
    char missionStartTime[4];  // 0xC0
    char missionTimer[12];  // 0xC8
    unsigned int q0D0;  // 0xD0
// --- flat members (END) ---
    AbstractClass * * LoadFromINI(unsigned int *a2);
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
static char * GetMissionControl(...);  // C2597 interim stub
    unsigned int * Init();  // 0x49b610
    int ForceMission();
    int NextMission();

    int QueueMission();  // G42.39 supply (0x5B35E0)
};

} // namespace gamemd
