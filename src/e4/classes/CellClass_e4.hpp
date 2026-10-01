// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once



#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct LightConvertClass;  // fix_fwd_type_supply
struct TagClass;  // fix_fwd_type_supply
struct BuildingTypeClass;  // fix_fwd_type_supply
struct Coord;  // fix_fwd_type_supply
struct FootClass;  // fix_fwd_type_supply
struct ObjectClass;  // fix_fwd_type_supply
struct RadSiteClass;  // fix_fwd_type_supply
struct HouseClass;  // fix_fwd_type_supply

struct CellClass {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    void* vtable2;  // 0x4
    void* vtable3;  // 0x8
    void* vtable4;  // 0xC
    LightConvertClass* lightConvert;  // 0x10
    int unknown30;  // 0x12
    bool IsAllocated;  // 0x13
    int isoTileTypeIndex;  // 0x14
    TagClass* attachedTag;  // 0x18
    unsigned int q01A;  // 0x1A
    BuildingTypeClass* rubble;  // 0x1C
    bool q01D;  // 0x1D
    int overlayTypeIndex;  // 0x20
    int smudgeTypeIndex;  // 0x24
    void* attached1;  // 0x28
    unsigned int q02C;  // 0x2C
    unsigned char u8_2D;  // 0x2D
    unsigned char u8_2E;  // 0x2E
    void* q030;  // 0x30
    unsigned char q031;  // 0x31
    unsigned int alignmentPadding;  // 0x33
    void* attached3;  // 0x34
    void* q038;  // 0x38
    unsigned char q03A;  // 0x3A
    unsigned int q03B;  // 0x3B
    unsigned int q03C;  // 0x3C
    unsigned int q040;  // 0x40
    bool q042;  // 0x42
    bool q043;  // 0x43
    void* q044;  // 0x44
    unsigned int q048;  // 0x48
    bool q04A;  // 0x4A
    unsigned int CellClass_field_4C;  // 0x4C
    int wallOwnerIndex;  // 0x50
    int infantryOwnerIndex;  // 0x54
    int altInfantryOwnerIndex;  // 0x58
    unsigned int CellClass_field_5C;  // 0x5C
    unsigned int u32_5D;  // 0x5D
    unsigned int unknown60;  // 0x60
    unsigned int unknown64;  // 0x64
    unsigned int unknown68;  // 0x68
    unsigned int CellClass_field_6C;  // 0x6C
    unsigned int unknown70;  // 0x70
    unsigned int unknown74;  // 0x74
    unsigned int cloakedByHouses;  // 0x78
    unsigned char sensorsOfHouses;  // 0x7C
    int q080;  // 0x80
    int q084;  // 0x84
    int q088;  // 0x88
    void* q08C;  // 0x8C
    unsigned int u32_90;  // 0x90
    void* q098;  // 0x98
    Coord* q09C;  // 0x9C
    unsigned int q0A4;  // 0xA4
    unsigned int q0A8;  // 0xA8
    unsigned char q0A9;  // 0xA9
    unsigned char q0AA;  // 0xAA
    unsigned int q0AB;  // 0xAB
    unsigned char disguiseAsType_sensors_of_houses;  // 0xAC
    void* q0B0;  // 0xB0
    void* q0B8;  // 0xB8
    unsigned char q0B9;  // 0xB9
    unsigned int q0C3;  // 0xC3
    void* q0C4;  // 0xC4
    void* q0C8;  // 0xC8
    void* q0CC;  // 0xCC
    unsigned char q0D0;  // 0xD0
    void* q0D4;  // 0xD4
    void* q0D8;  // 0xD8
    unsigned int baseSpacerOfHouses;  // 0xDC
    FootClass* jumpjet;  // 0xE0
    ObjectClass* firstObject;  // 0xE4
    ObjectClass* altObject;  // 0xE8
    int landType;  // 0xEC
    double radLevel;  // 0xF0
    void* q0F4;  // 0xF4
    void* q0F7;  // 0xF7
    RadSiteClass* radSite;  // 0xF8
    unsigned int q0F9;  // 0xF9
    unsigned char q0FB;  // 0xFB
    unsigned int CellClass_field_FC;  // 0xFC
    int occupyHeightsCoveringMe;  // 0x100
    unsigned int unknown104;  // 0x104
    unsigned short unknown108;  // 0x108
    unsigned short CellClass_field_10A;  // 0x10A
    unsigned short CellClass_field_10C;  // 0x10C
    unsigned short CellClass_field_10E;  // 0x10E
    unsigned short unknown110;  // 0x110
    unsigned int q111;  // 0x111
    unsigned short unknown112;  // 0x112
    unsigned short unknown114;  // 0x114
    char tubeIndex[2];  // 0x116
    char unknown118[1];  // 0x118
    char unknown119[1];  // 0x119
    char height[1];  // 0x11A
    char level[1];  // 0x11B
    unsigned char slopeIndex;  // 0x11C
    unsigned char CellClass_field_11D;  // 0x11D
    unsigned char powerup;  // 0x11E
    unsigned char CellClass_field_11F;  // 0x11F
    char shroudedness[1];  // 0x120
    char foggedness[1];  // 0x121
    unsigned char blockedNeighbours;  // 0x122
    unsigned char align123;  // 0x123
    unsigned int occupationFlags;  // 0x124
    unsigned int altOccupationFlags;  // 0x128
    char copyFlags[4];  // 0x12C
    char shroudCounter[4];  // 0x130
    unsigned int gapsCoveringThisCell;  // 0x134
    bool visibilityChanged;  // 0x138
    unsigned char align139;  // 0x139
    unsigned int CellClass_field_13C;  // 0x13C
    char flags[4];  // 0x140
    unsigned char padding144;  // 0x144
    unsigned int *__pad_28;
    unsigned int mapCoords;
    unsigned int u32_11E;
    unsigned int u32_24;
    unsigned int u32_2F4;
    unsigned int u32_E4;
    unsigned int u32_E8;
    unsigned int vtable27;
    unsigned int vtable28;
    unsigned int vtable46;
    unsigned int vtable48;
    unsigned int estimatedHealth6;
    unsigned int objectTypeFlags;
// --- flat members (END) ---
    int UpdateTerrain(IUnknown * aP0, IUnknown * aP1);
    int UpdateTileVariant2(IUnknown * aP0, IUnknown * aP1);
    int UpdateVariant3(IUnknown * aP0, IUnknown * aP1);
    int UpdateVariant4(IUnknown * aP0, IUnknown * aP1);
    HouseClass * * UpdateVariant5(IUnknown * aP0, IUnknown * aP1);
    HouseClass * * UpdateVariant6(IUnknown * aP0, IUnknown * aP1);
    int UpdateVariant7(IUnknown * aP0, IUnknown * aP1);
    int UpdateVariant8(IUnknown * aP0, IUnknown * aP1);
    char SetTileType13(IUnknown * aP0, int a2);
    char SetTileType14(IUnknown * aP0, int a2);
    int CheckTilePassable(IUnknown * aP0);
    int CheckTilePassable2(IUnknown * aP0);
    int EnsureFileLoaded();
    int GetBridgeIndex();
    int GetByte284(IUnknown * aP0);
    int GetOccupiedRatio();
    int GetTileData(IUnknown * aP0, IUnknown * aP1);
    int SpiralFindClosest(IUnknown * aP0, MouseClass * aP1, IUnknown * aP2);
    int StubReturn11();
    int StubReturn328();
    static double DetermineTileType(...);  // C2597 interim stub
    static double GetCoords(...);  // C2597 interim stub
    static double GetTerrainFlag(...);  // C2597 interim stub
     double IsBuildable(...);  // C2597 interim stub
    static double IsTerrainType(...);  // C2597 interim stub
    static double SetTerrainType(...);  // C2597 interim stub
    static double ClearCellContents(...);  // C2597 interim stub
    static double GetScreenRect(...);  // C2597 interim stub
    static double UpdateAnimations(...);  // C2597 interim stub
    static double InBounds(...);  // C2597 interim stub
    static double InMapDataRange(...);  // C2597 interim stub
    static double AttachObject(...);  // C2597 interim stub
    static double ReduceTiberium(...);  // C2597 interim stub
    int DrawWithFlags(int a2, unsigned int *a3, int a4);  // 0x557830
    int DamageAllObjects();  // 0x483480
    int IsActiveOrNext();  // 0x486900
    unsigned int * FindInfantry(char a2);  // 0x47c550
    const wchar_t * GetUIName();  // 0x484ff0
    void AddObject(unsigned int *a2);  // 0x4733a0
    unsigned int * FindBuilding(char a2);  // 0x47eba0
    int QuickPassable();  // 0x487950
    int IsPassable(int a2, int a3, int a4);  // 0x47c620
    unsigned int * UpdateZone();  // 0x486bf0
};

} // namespace gamemd
