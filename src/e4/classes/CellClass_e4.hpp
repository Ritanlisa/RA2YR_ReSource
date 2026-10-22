// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once



#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct FootClass;  // G42.39a tree-TU fwd
struct LightConvertClass;  // fix_fwd_type_supply
struct TagClass;  // fix_fwd_type_supply
struct BuildingTypeClass;  // fix_fwd_type_supply
struct Coord;  // fix_fwd_type_supply
struct RadSiteClass;  // fix_fwd_type_supply
struct HouseClass;  // fix_fwd_type_supply

struct CellClass {
#pragma pack(push, 1)  // X60: binary-packed layout
    void * mapCoords;  // 0x0
    void * ptr_4;  // 0x4
    void * ptr_8;  // 0x8
    void * ptr_C;  // 0xC
    LightConvertClass * lightConvert;  // 0x10
    void * isoTileTypeIndex;  // 0x14
    TagClass * attachedTag;  // 0x18
    BuildingTypeClass * rubble;  // 0x1C
    int overlayTypeIndex;  // 0x20
    int smudgeTypeIndex;  // 0x24
    char __pad_28[4];  // 0x28
    unsigned int q02C;  // 0x2C
    char __pad_30[3];  // 0x30
    unsigned char alignmentPadding;  // 0x33
    ObjectClass * attached3;  // 0x34
    unsigned char __pad_038;  // 0x38
    char __pad_39[19];  // 0x39
    unsigned int CellClass_field_4C;  // 0x4C
    int wallOwnerIndex;  // 0x50
    int infantryOwnerIndex;  // 0x54
    int altInfantryOwnerIndex;  // 0x58
    unsigned int CellClass_field_5C;  // 0x5C
    unsigned int unknown60;  // 0x60
    unsigned int unknown64;  // 0x64
    unsigned int unknown68;  // 0x68
    unsigned int CellClass_field_6C;  // 0x6C
    unsigned int unknown70;  // 0x70
    unsigned int unknown74;  // 0x74
    unsigned int cloakedByHouses;  // 0x78
    int sensorsOfHouses[12];  // 0x7C
    int disguiseAsType_sensors_of_houses[12];  // 0xAC
    AbstractClass * baseSpacerOfHouses;  // 0xDC
    FootClass * jumpjet;  // 0xE0
    ObjectClass * firstObject;  // 0xE4
    ObjectClass * altObject;  // 0xE8
    AbstractClass * landType;  // 0xEC
    double radLevel;  // 0xF0
    RadSiteClass * radSite;  // 0xF8
    unsigned int CellClass_field_FC;  // 0xFC
    int occupyHeightsCoveringMe;  // 0x100
    unsigned int unknown104;  // 0x104
    unsigned short unknown108;  // 0x108
    unsigned short CellClass_field_10A;  // 0x10A
    unsigned short CellClass_field_10C;  // 0x10C
    unsigned short CellClass_field_10E;  // 0x10E
    unsigned short unknown110;  // 0x110
    unsigned short unknown112;  // 0x112
    unsigned short unknown114;  // 0x114
    short tubeIndex;  // 0x116
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
    int copyFlags;  // 0x12C
    int shroudCounter;  // 0x130
    unsigned int gapsCoveringThisCell;  // 0x134
    bool visibilityChanged;  // 0x138
    char align139[3];  // 0x139
    unsigned int CellClass_field_13C;  // 0x13C
    void * flags;  // 0x140
    int padding144;  // 0x144
    char __pad_148[428];  // 0x148
    unsigned char u32_2F4;  // 0x2F4
    char __pad_2F5[555];  // 0x2F5
    unsigned int u32_520;  // 0x520
    char __pad_524[3320];  // 0x524
    unsigned int u32_121C;  // 0x121C
    char __pad_1220[32];  // 0x1220
    unsigned int u32_1240;  // 0x1240
    unsigned int u32_1244;  // 0x1244
    char __pad_1248[584];  // 0x1248
    unsigned int u32_1490;  // 0x1490
    char __pad_1494[4];  // 0x1494
    unsigned int u32_1498;  // 0x1498
    char __pad_149C[17004];  // 0x149C
    unsigned int u32_5708;  // 0x5708
    char __pad_570C[8];  // 0x570C
    unsigned int u32_5714;  // 0x5714
    char __pad_5718[112];  // 0x5718
    unsigned int u32_5788;  // 0x5788
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    static unsigned int RevealFogRect(int16_t* p0);  // x4:signals@0x6565a0
    char UpdateTerrain(unsigned short *aP0, int aP1);  // G57w10-S raw 0x0056F8B0 IUnknown 占位清除
    char UpdateTileVariant2(unsigned short *aP0, int aP1);  // G57w10-S raw 0x0056FC80 IUnknown 占位清除
    char UpdateVariant3(unsigned short *aP0, int aP1);  // G57w10-S raw 0x0056EF50 IUnknown 占位清除
    char UpdateVariant4(unsigned short *aP0, int aP1);  // G57w10-S raw 0x0056F2F0 IUnknown 占位清除
    char UpdateVariant5(unsigned short *aP0, int aP1);  // G57w10-S raw 0x00572DA0 IUnknown 占位清除
    HouseClass * * UpdateVariant6(IUnknown * aP0, IUnknown * aP1);  // G57w10-S raw 0x00573170 IUnknown 占位清除
    char UpdateVariant7(unsigned short *aP0, int aP1);  // G57w10-S raw 0x00572440 IUnknown 占位清除
    char UpdateVariant8(unsigned short *aP0, int aP1);  // G57w10-S raw 0x005727E0 IUnknown 占位清除
    char SetTileType13(IUnknown * aP0, int a2);  // G57w10-S raw 0x00572B80 IUnknown 占位清除
    char SetTileType14(IUnknown * aP0, int a2);  // G57w10-S raw 0x00572C90 IUnknown 占位清除
    int CheckTilePassable(IUnknown * aP0);  // G57w10-S raw 0x0057CCF0 IUnknown 占位清除
    int CheckTilePassable2(IUnknown * aP0);  // G57w10-S raw 0x0057BAA0 IUnknown 占位清除
    int EnsureFileLoaded();
    int GetBridgeIndex();
    int GetByte284(IUnknown * aP0);  // G57w10-S raw 0x006D6AD0 IUnknown 占位清除
    int GetOccupiedRatio();
    int GetTileData(IUnknown * aP0, IUnknown * aP1);  // G57w10-S raw 0x0056BCD0 IUnknown 占位清除
    int SpiralFindClosest(IUnknown * aP0, MouseClass * aP1, IUnknown * aP2);  // G57w10-S raw 0x005865F0 IUnknown 占位清除
    int StubReturn11();
    int StubReturn328();
    static int DetermineTileType(CellClass * aP1);
static int * GetCoords(CellClass * aP1, int *a2);
    int GetTerrainFlag(int a2);  // was C2597 interim stub, := truth 0x0x5471f0
     int IsBuildable(void *a1 = 0);
    static int IsTerrainType(CellClass * aP1);
    static int SetTerrainType(CellClass * aP1, int16_t *a2);
    static int ClearCellContents(CellClass * aP1);
    int * GetScreenRect(int *a2);  // was C2597 interim stub, := truth 0x0x47ff80
    static int UpdateAnimations(CellClass * aP1);
    static int InBounds(CellClass * aP1);
    static int InMapDataRange(CellClass * aP1);
    static int AttachObject(CellClass * aP1, int a2);
    static int ReduceTiberium(CellClass * aP1, int a2);
    int  DrawWithFlags(int a2, unsigned int * a3, int a4);  // 0x557830
    int DamageAllObjects();  // 0x483480
    int IsActiveOrNext(void *a1 = 0);  // 0x486900
    unsigned int *  FindInfantry(char a2, void *a1 = 0);  // 0x47c550
    const wchar_t * GetUIName();  // 0x484ff0
    int  AddObject(unsigned int * a2);  // 0x4733a0
    unsigned int *  FindBuilding(char a2, void *a1 = 0);  // 0x47eba0
    int QuickPassable();  // 0x487950
    int  IsPassable(int a2, int a3, int a4, void *a1 = 0);  // 0x47c620
    unsigned int * UpdateZone(void *a1 = 0);  // 0x486bf0
    void  ApplyCliffTileModifications(int a2);  // 0x57f200
    void DTOR(void *a1 = 0);  // 0x47bb60
    unsigned char * RegisterForRedraw(__int16 *a2, void *a1 = 0);
    char  ApplyTileModification4(int16_t * a2);  // 0x57d530
    char  ApplyTileModification3(int16_t * a2);  // 0x57cf60
    char  ApplyTileModification2(int16_t * a2);  // 0x57c2b0
    char  ApplyTileModification(int16_t * a2);  // 0x57bcf0
    void DrawWrapper(unsigned int * a1, int a2, char a3, char a4);
    void UpdateTerrainAndWaypoints(void* a1, int a2, int a3, int a4);
    int ClearCrateStateForAll();  // 0x722AB0  G42.34 T11: supplied def carrier
    unsigned short *  initCellData(unsigned short * a2);  // 0x588C40
    static void * AddObject(void * a1, void * a2);  // G42.39a static-call supply
    static unsigned int * Construct(void *aP1);
    static int ApplyTileMod58(int p0);  // x4:signals@0x57f440
    static int InitRandomOffsets(int p0, int p1);  // x4:signals@0x4814f0
    static int ProcessUpdate(CellClass *p_this);  // x4:ida@0x5a7b40
    static int FindOpenNeighbor(int* p0, int p1, int p2, int p3, int p4, int p5, int p6);  // x4:signals@0x4aa440
#pragma pack(pop)
};

} // namespace gamemd
