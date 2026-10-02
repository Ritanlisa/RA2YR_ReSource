// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once



#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct ObjectClass;  // fix_fwd_type_supply
struct TagClass;  // fix_fwd_type_supply
struct BombClass;  // fix_fwd_type_supply
struct AnimClass;  // fix_fwd_type_supply
struct LineTrail;  // fix_fwd_type_supply
struct AbstractClass;  // fix_fwd_type_supply

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
    unsigned int q01A;  // 0x1A
    int referenceCount;  // 0x1C
    bool q01D;  // 0x1D
    unsigned int q01E;  // 0x1E
    unsigned char NeedsSaveOrLink;  // 0x20
    unsigned int objectTypeFlags;  // 0x24
    unsigned int q027;  // 0x27
    unsigned int owningHouseIndex;  // 0x28
    bool q02B;  // 0x2B
    char fallRate[4];  // 0x2C
    ObjectClass* nextObject;  // 0x30
    unsigned char q031;  // 0x31
    unsigned char needsSave;  // 0x32
    unsigned int pad21;  // 0x33
    TagClass* attachedTag;  // 0x34
    BombClass* attachedBomb;  // 0x38
    unsigned char q03A;  // 0x3A
    unsigned int q03B;  // 0x3B
    char ambientSoundController[20];  // 0x3C
    unsigned int q03D;  // 0x3D
    unsigned int q040;  // 0x40
    bool q042;  // 0x42
    unsigned int q044;  // 0x44
    unsigned int q048;  // 0x48
    bool q04A;  // 0x4A
    unsigned int q04C;  // 0x4C
    unsigned char q04F;  // 0x4F
    char customSound_controller[20];  // 0x50
    unsigned int q054;  // 0x54
    unsigned int q058;  // 0x58
    unsigned int q05A;  // 0x5A
    unsigned int q05C;  // 0x5C
    unsigned int q060;  // 0x60
    char customSound[4];  // 0x64
    bool bombVisible;  // 0x68
    unsigned char alignmentPadding69;  // 0x69
    unsigned int q06A;  // 0x6A
    unsigned int health;  // 0x6C
    unsigned int estimatedHealth;  // 0x70
    bool isOnMap;  // 0x74
    unsigned char alignmentPadding75;  // 0x75
    unsigned int q077;  // 0x77
    unsigned int spawnStatus;  // 0x78
    unsigned int q07A;  // 0x7A
    unsigned int q07B;  // 0x7B
    unsigned int visibilityFlags;  // 0x7C
    unsigned int q07D;  // 0x7D
    unsigned int q07E;  // 0x7E
    unsigned int q07F;  // 0x7F
    bool needsRedraw;  // 0x80
    bool inLimbo;  // 0x81
    bool inOpenToppedTransport;  // 0x82
    bool isSelected;  // 0x83
    bool hasParachute;  // 0x84
    unsigned char alignmentPadding85;  // 0x85
    AnimClass* parachute;  // 0x88
    unsigned int q08A;  // 0x8A
    unsigned int q08B;  // 0x8B
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
    unsigned int q0A0;  // 0xA0
    unsigned char q0A1;  // 0xA1
    unsigned char q0A3;  // 0xA3
    unsigned int q0A4;  // 0xA4
    LineTrail* lineTrailer;  // 0xA8
    unsigned char q0A9;  // 0xA9
    unsigned char q0AA;  // 0xAA
    unsigned int q0AB;  // 0xAB
    char currentMission[4];  // 0xAC
    char suspendedMission[4];  // 0xB0
    unsigned int q0B1;  // 0xB1
    unsigned int q0B2;  // 0xB2
    char queuedMission[4];  // 0xB4
    bool missionQueued;  // 0xB8
    unsigned char alignmentPaddingB9;  // 0xB9
    char missionStatus[4];  // 0xBC
    bool q0BF;  // 0xBF
    char missionStartTime[4];  // 0xC0
    unsigned int q0C3;  // 0xC3
    unsigned int missionData;  // 0xC4
    unsigned char q0C5;  // 0xC5
    unsigned char q0C6;  // 0xC6
    char missionTimer[12];  // 0xC8
    unsigned int q0CC;  // 0xCC
    unsigned int q0D0;  // 0xD0
    void* ObjectClass;  // 0x0 (no offset truth)
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
    static double GetMissionControl(...);  // C2597 interim stub
    unsigned int * Init();  // 0x49b610
};

} // namespace gamemd
