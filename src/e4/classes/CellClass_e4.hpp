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
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    void* vtable2;  // 0x4
    void* vtable3;  // 0x8
    void* vtable4;  // 0xC
    int unknown30;  // 0x12
    bool IsAllocated;  // 0x13
    TagClass* attachedTag;  // 0x18
    BuildingTypeClass* rubble;  // 0x1C
    int smudgeTypeIndex;  // 0x24
    unsigned int q02C;  // 0x2C
    void* q030;  // 0x30
    unsigned char q031;  // 0x31
    unsigned int alignmentPadding;  // 0x33
    void* q038;  // 0x38
    unsigned char q03A;  // 0x3A
    unsigned int q03C;  // 0x3C
    unsigned int q040;  // 0x40
    void* q044;  // 0x44
    unsigned int q048;  // 0x48
    unsigned int CellClass_field_4C;  // 0x4C
    int infantryOwnerIndex;  // 0x54
    int altInfantryOwnerIndex;  // 0x58
    unsigned int CellClass_field_6C;  // 0x6C
    unsigned int unknown70;  // 0x70
    unsigned int unknown74;  // 0x74
    unsigned char sensorsOfHouses;  // 0x7C
    int q080;  // 0x80
    void* q08C;  // 0x8C
    void* q098;  // 0x98
    unsigned int q0A4;  // 0xA4
    void* q0B0;  // 0xB0
    void* q0C4;  // 0xC4
    unsigned char q0D0;  // 0xD0
    void* q0D8;  // 0xD8
    FootClass* jumpjet;  // 0xE0
    ObjectClass* firstObject;  // 0xE4
    ObjectClass* altObject;  // 0xE8
    int landType;  // 0xEC
    void* q0F4;  // 0xF4
    unsigned short CellClass_field_10A;  // 0x10A
    unsigned short CellClass_field_10C;  // 0x10C
    char height[1];  // 0x11A
    char level[1];  // 0x11B
    unsigned char slopeIndex;  // 0x11C
    unsigned char powerup;  // 0x11E
    char shroudedness;  // 0x120
    char foggedness;  // 0x121
    unsigned int occupationFlags;  // 0x124
    unsigned int altOccupationFlags;  // 0x128
    int copyFlags;  // 0x12C
    char shroudCounter[4];  // 0x130
    unsigned int gapsCoveringThisCell;  // 0x134
    unsigned int CellClass_field_13C;  // 0x13C
    char flags[4];  // 0x140
    unsigned int *__pad_28;
    unsigned int mapCoords[2];  // G42.34 T11: initCellData body 0x588C40 does IDA_LOWORD/HIWORD(this->mapCoords[0]) (CellStruct 2-word truth); scalar form C2109
    unsigned int u32_24;
    unsigned int u32_2F4;
    unsigned int u32_E4;
    unsigned int objectTypeFlags;
    void* RevealFogRect;  // 0x0 (no offset truth)
// --- flat members (END) ---
    char UpdateTerrain(unsigned short *a1, int a2);  // G57w10-S raw 0x0056F8B0 IUnknown 占位清除
    char UpdateTileVariant2(unsigned short *a1, int a2);  // G57w10-S raw 0x0056FC80 IUnknown 占位清除
    char UpdateVariant3(unsigned short *a1, int a2);  // G57w10-S raw 0x0056EF50 IUnknown 占位清除
    char UpdateVariant4(unsigned short *a1, int a2);  // G57w10-S raw 0x0056F2F0 IUnknown 占位清除
    char UpdateVariant5(unsigned short *a1, int a2);  // G57w10-S raw 0x00572DA0 IUnknown 占位清除
    static char UpdateVariant6(unsigned short *a1, int a2);  // G57w10-S raw 0x00573170 IUnknown 占位清除
    char UpdateVariant7(unsigned short *a1, int a2);  // G57w10-S raw 0x00572440 IUnknown 占位清除
    char UpdateVariant8(unsigned short *a1, int a2);  // G57w10-S raw 0x005727E0 IUnknown 占位清除
    char SetTileType13(unsigned short *a1, int a2);  // G57w10-S raw 0x00572B80 IUnknown 占位清除
    char SetTileType14(unsigned short *a1, int a2);  // G57w10-S raw 0x00572C90 IUnknown 占位清除
    int CheckTilePassable(int a1);  // G57w10-S raw 0x0057CCF0 IUnknown 占位清除
    int CheckTilePassable2(int a1);  // G57w10-S raw 0x0057BAA0 IUnknown 占位清除
    int EnsureFileLoaded();
    int GetBridgeIndex();
    int GetByte284(unsigned int *a1);  // G57w10-S raw 0x006D6AD0 IUnknown 占位清除
    int GetOccupiedRatio();
    int GetTileData(__int16 *a1, int a2);  // G57w10-S raw 0x0056BCD0 IUnknown 占位清除
    int SpiralFindClosest(int a1, int a2, char a3);  // G57w10-S raw 0x005865F0 IUnknown 占位清除
    int StubReturn11();
    int StubReturn328();
    static int DetermineTileType(CellClass * aP1);  // G57w10-S raw 0x0047CA80 (was C2597 interim stub)
static int * GetCoords(CellClass * aP1, int *a2);  // G57w10-S raw 0x00480A30 (was C2597 interim stub)
    int GetTerrainFlag(int a2);  // was C2597 interim stub, := truth 0x0x5471f0
     int IsBuildable();  // G57w10-S raw 0x006B25C0 (was C2597 interim stub)
    static int IsTerrainType(CellClass * aP1);  // G57w10-S raw 0x004865B0 (was C2597 interim stub)
    static int SetTerrainType(CellClass * aP1, __int16 *a2);  // G57w10-S raw 0x00587180 (was C2597 interim stub)
    static int ClearCellContents(CellClass * aP1);  // G57w10-S raw 0x00486C50 (was C2597 interim stub)
    int * GetScreenRect(int *a2);  // was C2597 interim stub, := truth 0x0x47ff80
    static int UpdateAnimations(CellClass * aP1);  // G57w10-S raw 0x0047DD70 (was C2597 interim stub)
    static int InBounds(CellClass * aP1);  // G57w10-S raw 0x00486670 (was C2597 interim stub)
    static int InMapDataRange(CellClass * aP1);  // G57w10-S raw 0x00486650 (was C2597 interim stub)
    static int AttachObject(CellClass * aP1, int a2);  // G57w10-S raw 0x00487D70 (was C2597 interim stub)
    static int ReduceTiberium(CellClass * aP1, int a2);  // G57w10-S raw 0x00480A80 (was C2597 interim stub)
    int DrawWithFlags(int a2, unsigned int *a3, int a4);  // 0x557830
    int DamageAllObjects();  // 0x483480
    int IsActiveOrNext();  // 0x486900
    unsigned int * FindInfantry(char a2);  // 0x47c550
    const wchar_t * GetUIName();  // 0x484ff0
    void AddObject(unsigned int *a2);  // 0x4733a0
    unsigned int * FindBuilding(char a2);  // 0x47eba0
    int QuickPassable();  // 0x487950
    int IsPassable(int aP1, int aP2, int aP3);  // 0x47c620
    unsigned int * UpdateZone();  // 0x486bf0
    void ApplyCliffTileModifications(int a2);  // 0x57f200
    void DTOR();  // 0x47bb60
    unsigned char * RegisterForRedraw(__int16 *a2);
    char ApplyTileModification4(int16_t *a2);  // 0x57d530
    char ApplyTileModification3(int16_t *a2);  // 0x57cf60
    char ApplyTileModification2(int16_t *a2);  // 0x57c2b0
    char ApplyTileModification(int16_t *a2);  // 0x57bcf0
    void DrawWrapper(unsigned int * a1, int a2, char a3, char a4);  // 0x653F50  G42.34 T11: supplied def carrier (tree decl: system/cell.hpp:280 same shape)
    void UpdateTerrainAndWaypoints(void* a1, int a2, int a3, int a4);  // 0x565C10  G42.34 T11: link-resolves to system/gap2_defs.cpp:1591 def (same shape as tree cell.hpp:421)
    int ClearCrateStateForAll();  // 0x722AB0  G42.34 T11: supplied def carrier
    unsigned short * initCellData(unsigned short * a1);  // 0x588C40  G42.34 T11: supplied def carrier
    static void * AddObject(void * a1, void * a2);  // G42.39a static-call supply
    static unsigned int * Construct(void *aP1);
    static int ApplyTileMod58(...);
    static int InitRandomOffsets(...);
    static int ProcessUpdate(...);
    static int FindOpenNeighbor(...);  // w16g4 C3861 static supply (Cls call-form)  // w16g4 C3861 static supply (raw 0x005A7B40)  // w16g4 C3861 static supply (raw 0x004814F0)  // w16g4 C3861 static supply (raw 0x0057F440)  // 0x47BBF0 raw: _DWORD* Construct(CellClass*)
};

} // namespace gamemd
