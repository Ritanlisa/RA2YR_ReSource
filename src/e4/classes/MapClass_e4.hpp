// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once



#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct DynamicVector;  // fix_fwd_type_supply
struct Coord;  // fix_fwd_type_supply
struct CampaignClass;  // fix_fwd_type_supply
struct HouseClass;  // fix_fwd_type_supply
struct AbstractTypeClass;  // fix_fwd_type_supply
struct ParticleSystemClass;  // fix_fwd_type_supply
struct BuildingTypeClass;  // fix_fwd_type_supply
struct BombClass;  // fix_fwd_type_supply
struct INIClass;  // fix_fwd_type_supply
struct TechnoTypeClass;  // fix_fwd_type_supply
struct VectorClass_flat;  // fix_fwd_type_supply

struct MapClass {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    void* IsAllocated;  // 0xD
    int q010;  // 0x10
    bool IsInitialized;  // 0x12
    int Count;  // 0x16
    unsigned int CapacityIncrement;  // 0x20
    unsigned int outBuffer;  // 0x24
    unsigned int MovementZones;  // 0x34
    DynamicVector * ptr_50;  // 0x50
    IUnknown* somecount_4C;  // 0x68 [X30:type_map]
    unsigned int ZoneConnections;  // 0x6C
    unsigned int LevelAndPassability;  // 0x84
    unsigned int ValidMapCellCount;  // 0x88
    void* LevelAndPassabilityStruct2pointer_70;  // 0x8C [X30:type_map]
    unsigned int CellIterator_NextY;  // 0x110
    unsigned int CellIterator_CurrentY;  // 0x114
    unsigned int CellIterator_NextCell;  // 0x118
    unsigned int ZoneIterator_X;  // 0x11C
    unsigned int ZoneIterator_Y;  // 0x120
    void *q138;  // 0x138
    unsigned int Crates;  // 0x148
    unsigned int CellStructs1;  // 0x212
    unsigned int MapRect;  // 0x236
    unsigned int VisibleRect;  // 0x252
    unsigned int MapCoordBounds;  // 0x292
    unsigned int MaxWidth;  // 0x316
    unsigned int MaxHeight;  // 0x320
// --- flat members (END) ---
    void* field_0;  // 0x0 (no offset truth)
    void* field_16C0;  // 0x0 (no offset truth)
    void* field_4;  // 0x0 (no offset truth)
    int GetTileDataField14();
    static INIClass * * SaveCellTagsToINI(MapClass *pThis, char *a2);
    AbstractClass * * AllocateMapDataBuffer(int a2, int * a3);
    BombClass * * DecompressCellData(MouseClass * aP1, void *a2);
    INIClass * * SaveCellTagsToINI(char * a2);
    MapClass * * GrowLayer(int a2, int a3, int a4);
    MapClass * * RemoveTriggerRef(AbstractClass * aP1, int a3);
    MapClass * Destru_vt04(char a2);
    MapClass *   SetObstruction(MapClass * aP1, void *a2 = 0);
    ObjectClass * * CheckCellsBuildable(IUnknown * aP0, IUnknown * aP1, IUnknown * aP2, IUnknown * aP3, IUnknown * aP4, IUnknown * aP5, int aP6, IUnknown * aP7, IUnknown * aP8);  // G57w10-S raw 0x0056E7C0 IUnknown 占位清除
    ObjectClass * * LoadFileData();
    TechnoTypeClass * * PostProcessReveal(char a2);
    VectorClass_flat * * Destru_vt05();
    VectorClass_flat * InitCellVe_vt00(char a2);
    char InitCellVe_vt01(int a2);
    char InitCellVe_vt02(int a2, unsigned int * a3);
    char   RevealCell(void *a1 = 0);
    char isCellAccessible(int a2);
    char loadTheaterINI(INIClass * aP1, char * a2, int a4);
    int AllocateCellDataBuffer(int a2, char * a3);
    int BuildTileConnectivityGraph(MapClass * aP1, IUnknown * aP2, IUnknown * aP3);  // G57w10-S raw 0x0057A320 IUnknown 占位清除
    int CalcVisibleCellRange(int a1, int a2, VectorClass_flat * aP2, int * a3);
    int Cleanup(int a1, int a2);
    int ClearCellOverlayFlag();
    int ClearRegions(IUnknown * aP1);  // G57w10-S raw 0x0056DAE0 IUnknown 占位清除
    int FindPassableNeighbor();
    int   FindSubzoneConnectionIndex(void *a1 = 0);
    int FreeAllCells(void *a1 = 0);
    int GetScrollMode(void *a1 = 0);
    int GetTileIndex(int16_t *aP1, int aP2, char aP3);
    int   InitCellVe_vt04(void *a1 = 0);
    int InitCellVe_vt06(int a2);
    int InitCellVector();
    int InitializeTileData(MapClass * aP1);
    int   IsAreaFree(int a3, void *a2 = 0);
    int IsCellPassable(int a1, int a2);
    int LoadTerrainData(MapClass * aP1);
    static int MarkForRedraw(int p0);  // x4:signals@0x4f42f0
    int ProcessFogTransition();
    int ProcessRegion();
    int ProcessTile();
    int ProcessVisibilityFlags();
    int RemoveCellReference(int a2);
    int RevealArea0(int *a2, int a3, void *a4, char a5, char a6, char a7, char a8, char a9, void *a1 = 0);
    int ScrollOnce(AbstractClass * aP1);
    int SetCellFlagsAlongPath(unsigned short *aP1, unsigned short *a2, void *a3 = 0);
    int SetCellOverlayFlag();
    int SetScrollMode(int a2, int aP1, int a1, int aP2, int a3);
    int ToggleZoom(int a2);
    int TransitionCliff(MouseClass * aP0);
    static int  TriggerEVA(IUnknown * aP0);  // G57w10-S raw 0x0057B790 IUnknown 占位清除
    static int UnselectAll_ClearLimboLaunchers();
    static int UpdateLightingPostProcess();
    int isCellShrouded(uint16_t a2);
    int isLocationShrouded(uint16_t a2);
    int updatePathfindingGrid(unsigned int * a2);
    unsigned int * AllocArrays();
    unsigned int * BuildSubzones();
    unsigned int * FastCellLookup(short * a2, int a3, char a4);
    unsigned int *  FindPlacementCellsAlt(IUnknown * aP2, void *a3, void *a3_1 = 0);  // G57w10-S raw 0x00703590 IUnknown 占位清除
    unsigned int * InitAllCells();
    static unsigned int * SpiralSearch(void *a1);
    unsigned int * allocateMapBuffers();
    unsigned int InitCellVe_vt05(int a2);
    unsigned int TransformCoordToScreen(int a2, unsigned int * a3);
    unsigned int initCellVectors(int a2);
    unsigned int initSubzoneData(int a2);
    unsigned int validateCellCoord(int a2);
    void * ClearShroud(HouseClass * aP1);
    int ApplyOverlayReveal(MouseClass * aP1, BuildingClass * aP2);
    void Destru_vt07();
    void FillRevealBuffer(MouseClass * aP1, IUnknown * aP2);  // G57w10-S raw 0x005683C0 IUnknown 占位清除
    void IncrementRedrawCounter();
    void InitCellVe_vt03();
    void allocateCellArrays();
    void checkCellBounds();
    void* ApplyTerrainDamage(IUnknown *a1, IUnknown);  // G57w10-S raw 0x00574C20 IUnknown 占位清除
    void* Destruct(void *a1 = 0);
    void*  InitTileData(MouseClass * aP0, int aP3);
    static int RevealArea1(MapClass *aP1, int *a2, int a3, void *a4, char a5, int a6, char a7, char a8, char a9);
    int RevealArea2(int *coords, int radius, int owner, int arg4);  // 0x567da0
    INIClass * * SaveCellTagsToINI(char * a2, void * aIsomappack, void * aIsomappack2, void * aIsomappack3, void * aIsomappack4, void * aIsomappack5);
    void MapClass_IsRectInBounds(unsigned short * a2 = 0, int a3 = 0);
    int MarkForRedraw(int a2, void *a2_2);
    MapClass * Destru_vt04(char * Block, char a2);
    VectorClass_flat * InitCellVe_vt00(unsigned int * Block, char a2);
    int GetTileDataField14(MapResourceClass * aP0);
    char __pad_30[24];  // 0x30 (ml)
    char __pad_5C[92];  // 0x5C (ml)
    unsigned char q0086;  // 0x86 (offset-truth)
    unsigned int q0088;  // 0x88 (offset-truth)
    unsigned char q01C6;  // 0x1C6 (offset-truth)
    IUnknown* q0308;  // 0x308 (offset-truth) [X30:type_map]
    unsigned char q0585;  // 0x585 (offset-truth)
    unsigned char q0805;  // 0x805 (offset-truth)
    unsigned char u32_6F47;  // 0x6F47 (offset-truth)

    unsigned int MaxLevel;  // X10 supply (csp_canon_members)
    unsigned char __pad_004;  // X10 supply (csp_canon_members)
    unsigned char __pad_028;  // X10 supply (csp_canon_members)
    unsigned char __pad_054;  // X10 supply (csp_canon_members)
    unsigned char __pad_124;  // X10 supply (csp_canon_members)
    unsigned char __pad_13C;  // X10 supply (csp_canon_members)
    int q008;  // X10 supply (member_lookup)
    int q014;  // X10 supply (member_lookup)
    int q02C;  // X10 supply (member_lookup)
    unsigned int q03C;  // X10 supply (member_lookup)
    int q058;  // X10 supply (member_lookup)
    unsigned int q0A8;  // X10 supply (member_lookup)
    unsigned int q0B0;  // X10 supply (member_lookup)
    unsigned int q0B4;  // X10 supply (member_lookup)
    unsigned char q0BC[24];  /* char[24] */  // X10 supply (member_lookup)
    int q0FC;  // X10 supply (member_lookup)
    int q100;  // X10 supply (member_lookup)
    int q108;  // X10 supply (member_lookup)
    unsigned int q1158;  // X10 supply (member_lookup)
    unsigned int q117C;  // X10 supply (member_lookup)
    unsigned int q11A8;  // X10 supply (member_lookup)
    unsigned int q11B0;  // X10 supply (member_lookup)
    unsigned int q11B1;  // X10 supply (member_lookup)
    unsigned int q11B2;  // X10 supply (member_lookup)
    unsigned int q11B3;  // X10 supply (member_lookup)
    unsigned int q11B4;  // X10 supply (member_lookup)
    int q128;  // X10 supply (member_lookup)
    int q130;  // X10 supply (member_lookup)
    unsigned char q134[8];  /* char[8] */  // X10 supply (member_lookup)
    int q140;  // X10 supply (member_lookup)
    unsigned char q158;  // X10 supply (member_lookup)
    unsigned int q2E4;  // X10 supply (member_lookup)
    unsigned int q2E8;  // X10 supply (member_lookup)
    ObjectClass* q2F5;  // X10 supply (member_lookup)
    int q304;  // X10 supply (member_lookup)
    unsigned int u32_10C;  // X10 supply (member_lookup)
    unsigned int u32_115C;  // X10 supply (member_lookup)
    unsigned int u32_1160;  // X10 supply (member_lookup)
    unsigned int u32_1164;  // X10 supply (member_lookup)
    unsigned int u32_1169;  // X10 supply (member_lookup)
    unsigned int u32_116C;  // X10 supply (member_lookup)
    unsigned int u32_119C;  // X10 supply (member_lookup)
    unsigned int u32_11A0;  // X10 supply (member_lookup)
    unsigned char u32_12C[4];  /* char[4] */  // X10 supply (member_lookup)
    unsigned int u32_5D;  // X10 supply (member_lookup)
    unsigned int u32_A4;  // X10 supply (member_lookup)
    unsigned int u32_C;  // X10 supply (member_lookup)
    unsigned int u32_D4;  // X10 supply (member_lookup)
    unsigned int u32_D8;  // X10 supply (member_lookup)
    unsigned int u32_DC;  // X10 supply (member_lookup)
    int u32_DE4;  // X10 supply (member_lookup)
    unsigned int u32_E1;  // X10 supply (member_lookup)
    unsigned int u32_F4;  // X10 supply (member_lookup)

    unsigned char q0F8[4];  /* char[4] */  // X10 supply (member_lookup)
    unsigned int u32_2F4;  // 0x2F4
    unsigned int u32_2F0;  // 0x2F0
    unsigned int u32_2DC;  // 0x2DC
    unsigned int u32_2D8;  // 0x2D8
    unsigned int u32_2D4;  // 0x2D4
    unsigned int u32_2D0;  // 0x2D0
    unsigned int u32_2CC;  // 0x2CC
    unsigned int u32_2C8;  // 0x2C8
    unsigned int u32_2C4;  // 0x2C4
    unsigned int u32_2C0;  // 0x2C0
    unsigned int u32_2BC;  // 0x2BC
    unsigned int u32_231;  // 0x231
    unsigned int u32_230;  // 0x230
    DynamicVector * q080;  // 0x80
    int q018;  // 0x18  /* char[16] */ [X30:type_map]
    unsigned char __pad_011;  // 0x11 [X30:canon]
    unsigned char __pad_01A;  // 0x1A [X30:canon]
    int __pad_038;  // 0x38 [X30:type_map]
    IUnknown* __pad_070;  // 0x70 [X30:type_map]
    unsigned char __pad_090;  // 0x90 [X30:canon]
    int __pad_14C;  // 0x14C [X30:type_map]
    unsigned char __pad_216;  // 0x216 [X30:canon]
    unsigned char __pad_23A;  // 0x23A [X30:canon]
    unsigned char __pad_256;  // 0x256 [X30:canon]
    unsigned char __pad_296;  // 0x296 [X30:canon]
    unsigned char __pad_31A;  // 0x31A [X30:canon]
    unsigned char __pad_324;  // 0x324 [X30:canon]
    unsigned int Activated;  // [X30:default]
    unsigned int AnimationProbability;  // [X30:default]
    unsigned int AnimationRate;  // [X30:default]
    unsigned int ArrayIndex;  // [X30:default]
    unsigned int Foundation;  // [X30:default]
    unsigned int FoundationData;  // [X30:default]
    unsigned int GetTileIndexthis;  // [X30:default]
    int MapClass_field_0x13C;  // 0x13C [X30:type_map]
    unsigned int RadarColor;  // [X30:default]
    int RadarHashVector_field_0x04;  // 0x4 [X30:type_map]
    int RadarHashVector_field_0x0C;  // 0xC [X30:type_map]
    unsigned int SnowOccupationBits;  // [X30:default]
    unsigned int SpawnsTiberium;  // [X30:default]
    unsigned int TemperateOccupationBits;  // [X30:default]
    unsigned int WaterBound;  // [X30:default]
    int __pad_0;  // 0x0 [X30:type_map]
    unsigned int q001_;  // [X30:default]
    unsigned int q002_6;  // [X30:default]
    int q150;  // 0x150 [X30:type_map]
    void* q154;  // 0x154 [X30:type_map]
    AbstractClass* q2B4;  // 0x2B4 [X30:member_lookup]
    unsigned char q2EC;  // 0x2EC [X30:member_lookup]
    bool q305;  // 0x305 [X30:member_lookup]
    unsigned int q306;  // 0x306 [X30:member_lookup]
    int u32_145;  // 0x145 [X30:type_map]
    void* u32_708;  // 0x708 [X30:member_lookup]
    unsigned char u8_2E0;  // 0x2E0 [X30:member_lookup]
    unsigned char u8_2E1;  // 0x2E1 [X30:member_lookup]
    unsigned char u8_2E2;  // 0x2E2 [X30:member_lookup]
    unsigned char u8_2E3;  // 0x2E3 [X30:member_lookup]
};

} // namespace gamemd
