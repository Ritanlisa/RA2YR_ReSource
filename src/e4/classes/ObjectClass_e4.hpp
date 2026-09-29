// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct ObjectClass {
// --- flat members (BEGIN) ---
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
    void* q040;  // 0x40
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
    unsigned int __pad_0;
    unsigned int isBerserk;
    unsigned int q0E4;
    unsigned int q0E8;
    unsigned int q0EC;
    unsigned int q0ED;
    unsigned int q21C;
    unsigned int q6E0;
    unsigned int qD68;
    unsigned int rockerLinkedUnit;
    unsigned int vtable0;
    unsigned int PreDraw;
// --- flat members (END) ---
    AbstractClass * * BuildTransform(unsigned int * a1, float * a2, unsigned int * a3);
    AbstractClass * * Deploy();
    AbstractClass * * Destroy2();
    AbstractClass * * Undeploy();
    AbstractClass * * sub_47A080(DWORD a2);
    AbstractClass * * sub_764A20();
    ConvertClass * * CleanupSidebarResources();
    ObjectClass * * Dtor();
    bool HasLinkedObject(VectorClass_flat * aP0);
    char GetStateFlag();
    char Release();
    char SetDeployState(ObjectClass * aP0, char a2);
    char sub_47A1B0(DWORD BytesReturned);
    char sub_47A2D0(DWORD BytesReturned);
    int COMStub_108();
    int CheckCellFlags(int a1, int a2, int * a3, unsigned char * a4, unsigned int * a5);
    int CreateInstance();
    int DropAsBomb_Track();
    int FindOwner(unsigned int * a0, AnimClass * aP1);
    int GetBoundingSize();
    int GetBoundsRect();
    int GetCell();
    int GetCoordsThunk2();
    int GetMember01();
    int GetMember06();
    int GetMember09();
    int GetWidth();
    int GetZAboveGround();
    int InputThunkA();
    int InputThunkB();
    int IsAboveScreenMargin();
    int LoadFromStream_Common(FootClass * aP0, LPSTREAM pStm);
    int SaveToStream_Common(IPersistStream * a0, FootClass * aP1, struct IPersistStreamVtbl * a2);
    int SpawnInfantry(FootClass * aP1, FootClass * aP2, FootClass * aP3, FootClass * aP4);
    int UpdateProductionDisplay();
    int checkHealth();
    int processDamage();
    int processDeath();
    int processPointerInvalid();
    int resetObjectState(SidebarClass * aP1);
    int setTarget(int a2);
    int sub_632A70(int a2, int a3, ObjectClass * aP3);
    int updateMissionState(int a2);
    int updateStateFlags();
    unsigned char ToggleSidebarDisplay(unsigned int * a0, TabClass * aP1, int a3, int _20, SidebarClass * a4, char a6);
    unsigned int * ComputeScreenYOffset(BuildingTypeClass * aP0, unsigned int * a1);
    unsigned int * clearTarget(char a2);
    unsigned int * loc_7A2E70(char a2);
    unsigned int * updateAnimation(char a2);
    void * checkLimbo();
    void sub_550080();
    void* * FindPlacementCell(FootClass * aP0, int aP1, void** a2, int a4, int a5, char a6);
    void* FindPlacementPosition(int a2, int a3, int a4, int a5);
    static double CalcTargetFacing(...);  // C2597 interim stub
    static double Cleanup(...);  // C2597 interim stub
    static double FreeResources(...);  // C2597 interim stub
    static double GetSizeMax(...);  // C2597 interim stub
    static double Init(...);  // C2597 interim stub
    static double SetReference(...);  // C2597 interim stub
    static double ctor(...);  // C2597 interim stub
    static double StepCleanup(...);  // C2597 interim stub
};

} // namespace gamemd
