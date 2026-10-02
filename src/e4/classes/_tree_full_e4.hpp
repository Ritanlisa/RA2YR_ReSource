// GENERATED full flat definitions for tree-owned classes
// (gen_tree_full_e4.py) — namespace-isolated C2027 fix,
// zero tree dependencies. Bodies access these via e4 TUs only.
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct AudioChannel;
struct CampaignScore;
struct DialogControl_OwnerDraw;
struct DynamicVectorClass;
struct FractalNoise;
struct HashTable;
struct KeywordType;
struct Locomotor;
struct MSAnim;
struct MSShapeAnim;
struct ObjectClass;
struct ReferenceCounted;
struct ShapeButtonClass;
struct State;
struct VectorClass;
struct VectorCursor_uint_DynamicVectorClass_uint;
struct WinAPI;
struct WorldDominationTour;

struct AudioChannel {
    void* vfptr;
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    unsigned char q008;  // 0x8
};

struct CampaignScore {
    void* vfptr;
    void* q000;  // 0x0
    unsigned char q004;  // 0x4
    unsigned char q008;  // 0x8
};

struct DialogControl_OwnerDraw {
    void* vfptr;
};

struct DynamicVectorClass {
    void* vfptr;
    void* q000;  // 0x0
    void* Items;  // 0x4
    int Capacity;  // 0x8
    bool IsInitialized;  // 0xC
    bool IsAllocated;  // 0xD
    int Count;  // 0x10
    int CapacityIncrement;  // 0x14
    unsigned int * Construct(int a2, int a3);  // 0x477db0
    unsigned int * AnimTypeConstructor(int a2, int a3);  // 0x525250
};

struct FractalNoise {
    void* vfptr;
    unsigned char q000;  // 0x0
};

struct HashTable {
    void* vfptr;
    CampaignClass* q000;  // 0x0
    unsigned char q004;  // 0x4
    unsigned int u32_8;  // 0x8
    unsigned char q00C;  // 0xC
    unsigned int u32_10;  // 0x10
    unsigned char q014;  // 0x14
    unsigned char q018;  // 0x18
    unsigned char q01C;  // 0x1C
    unsigned char q020;  // 0x20
    unsigned char q024;  // 0x24
    unsigned char q028;  // 0x28
    unsigned char q02C;  // 0x2C
    unsigned char q030;  // 0x30
    unsigned char q034;  // 0x34
    unsigned int u32_38;  // 0x38
    unsigned int u32_3C;  // 0x3C
    unsigned char q040;  // 0x40
    unsigned char q044;  // 0x44
    unsigned char q048;  // 0x48
    unsigned char q04C;  // 0x4C
    unsigned char q050;  // 0x50
    int LookupAndMark();  // 0x608440
    int BinarySearchAlt(int *a2);  // 0x52b4f0
    int BinarySearch(int *a2);  // 0x52b390
};

struct KeywordType {
    void* vfptr;
    unsigned char q000;  // 0x0
};

struct Locomotor {
    void* vfptr;
    char Locomotor_field_00[4];  // 0x0
};

struct MSAnim {
    void* vfptr;
    void* vtable1;  // 0x0
    unsigned char q004;  // 0x4
    unsigned char q008;  // 0x8
    int SetField(unsigned int a2);  // 0x5cb860
};

struct MSShapeAnim {
    void* vfptr;
    void* vtable1;  // 0x0
    unsigned char q004;  // 0x4
    unsigned int u32_7;  // 0x7
};

struct ObjectClass {
    void* vfptr;
    void* vtable1;  // 0x0
    void* vtable2;  // 0x4
    void* vtable3;  // 0x8
    void* vtable4;  // 0xC
    void* uniqueId;  // 0x10
    unsigned int q011;  // 0x11
    bool IsAllocated;  // 0x13
    void* abstractFlags;  // 0x14
    void* nextArrayIndex;  // 0x18
    void* referenceCount;  // 0x1C
    bool q01D;  // 0x1D
    unsigned int q01E;  // 0x1E
    void* NeedsSaveOrLink;  // 0x20
    unsigned int objectTypeFlags;  // 0x24
    unsigned int q027;  // 0x27
    unsigned int owningHouseIndex;  // 0x28
    BufferIOFileClass* q02A;  // 0x2A
    bool q02B;  // 0x2B
    char fallRate[4];  // 0x2C
    unsigned int u32_2D;  // 0x2D
    unsigned int u32_2E;  // 0x2E
    unsigned int u32_2F;  // 0x2F
    ObjectClass* nextObject;  // 0x30
    unsigned char q031;  // 0x31
    unsigned char needsSave;  // 0x32
    unsigned int pad21;  // 0x33
    TagClass* attachedTag;  // 0x34
    unsigned int u32_35;  // 0x35
    unsigned int occupant;  // 0x36
    BombClass* attachedBomb;  // 0x38
    unsigned int u32_39;  // 0x39
    unsigned char q03A;  // 0x3A
    unsigned int q03B;  // 0x3B
    char ambientSoundController[20];  // 0x3C
    AudioController* q03D;  // 0x3D
    IUnknown* q040;  // 0x40
    unsigned int u32_41;  // 0x41
    void* q044;  // 0x44
    unsigned char u8_45;  // 0x45
    unsigned int u32_46;  // 0x46
    unsigned int u32_47;  // 0x47
    AudioController* q048;  // 0x48
    unsigned int u32_49;  // 0x49
    bool q04A;  // 0x4A
    AudioController* q04C;  // 0x4C
    unsigned char q04F;  // 0x4F
    char customSound_controller[20];  // 0x50
    void* q054;  // 0x54
    void* q058;  // 0x58
    unsigned int q05A;  // 0x5A
    IPXGlobalConnClass* q05C;  // 0x5C
    ObjectClass* q060;  // 0x60
    unsigned int u32_61;  // 0x61
    unsigned int u32_62;  // 0x62
    unsigned int u32_63;  // 0x63
    char customSound[4];  // 0x64
    bool bombVisible;  // 0x68
    unsigned char alignmentPadding69;  // 0x69
    unsigned int q06A;  // 0x6A
    char health[4];  // 0x6C
    AbstractClass* q06F;  // 0x6F
    char estimatedHealth[4];  // 0x70
    bool isOnMap;  // 0x74
    unsigned char alignmentPadding75;  // 0x75
    unsigned int u32_77;  // 0x77
    unsigned int spawnStatus;  // 0x78
    unsigned int u32_7B;  // 0x7B
    unsigned int visibilityFlags;  // 0x7C
    unsigned int u32_7F;  // 0x7F
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
    void* q0A0;  // 0xA0
    unsigned char q0A1;  // 0xA1
    unsigned int u32_A2;  // 0xA2
    unsigned char q0A3;  // 0xA3
    void* q0A4;  // 0xA4
    unsigned int u32_A5;  // 0xA5
    unsigned int u32_A6;  // 0xA6
    LineTrail* lineTrailer;  // 0xA8
    unsigned char q0A9;  // 0xA9
    unsigned char q0AA;  // 0xAA
    unsigned int q0AB;  // 0xAB
    int updateStateFlags();  // 0x4e02c0
    int processDeath();  // 0x74cd60
    int SetAnim(int a2);  // 0x5f6060
    int GetSizeMax();  // 0x4103e0
    int processDamage();  // 0x6a5000
    int DistanceTo(int a2);  // 0x5f6360
    int * CalcTargetFacing(int *a2, int a3);  // 0x5f3db0
    unsigned int * ctor();  // 0x5f3900
    int StepCleanup(void *a2);  // 0x5f3e50
    int FreeResources();  // 0x5f1960
    int Dtor();  // 0x5f3b80
    int Undeploy();  // 0x5f4d30
    int PreDraw();  // 0x6d0f00
};

struct ReferenceCounted {
    void* vfptr;
    void* vtable1;  // 0x0
};

struct ShapeButtonClass {
    void* vfptr;
    void* vtable1;  // 0x0
    unsigned char q004;  // 0x4
    unsigned char q008;  // 0x8
};

struct State {
    void* vfptr;
    unsigned char q000;  // 0x0
    int Players;  // 0x4
    int AIPlayers;  // 0x8
    int GameSpeed;  // 0xC
    int StartingCredits;  // 0x10
    bool SuperWeapons;  // 0x14
    bool BuildOffAlly;  // 0x15
    bool FogOfWar;  // 0x16
    bool MCVRedeploys;  // 0x17
    bool AlliesAllowed;  // 0x18
    bool ShortGame;  // 0x19
    bool Crates;  // 0x1A
    bool MultiEngineer;  // 0x1B
    bool Bridies;  // 0x1C
    unsigned char q01D;  // 0x1D
    int ScenIndex;  // 0x20
    int MapIndex;  // 0x24
    int LastSave;  // 0x28
    unsigned char q02C;  // 0x2C
    unsigned int q034;  // 0x34
};

struct VectorClass {
    void* vfptr;
    void* vtable1;  // 0x0
    void* Items;  // 0x4
    void* Capacity;  // 0x8
    void* IsInitialized;  // 0xC
    bool IsAllocated;  // 0xD
    unsigned int tail_E;  // 0xE
    int Shrink();  // 0x7ae730
    unsigned int * CopyBuilding(unsigned int *a2);  // 0x67b180
    unsigned int * BuildingTypeConstructor(int a2, int a3);  // 0x5105a0
    unsigned int * WstringConstructor(int a2, unsigned int *a3);  // 0x69d7c0
    int Cleanup2();  // 0x63e140
    int Append(unsigned int *a2);  // 0x63e540
    int RemoveAt(int a2);  // 0x6ce2d0
    unsigned int * ConstructHSV(int a2, int a3);  // 0x628df0
    int GetCount();  // 0x49fb60
    unsigned int * Construct(int a2, int a3);  // 0x477be0
    unsigned int * CellConstructor(int a2, int a3);  // 0x42fcb0
};

struct VectorCursor_uint_DynamicVectorClass_uint {
    void* vfptr;
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    unsigned char q008;  // 0x8
};

struct WinAPI {
    void* vfptr;
    unsigned char q000;  // 0x0
};

struct WorldDominationTour {
    void* vfptr;
    unsigned char q000;  // 0x0
};


} // namespace gamemd
