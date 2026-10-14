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
    bool IsInitialized;  // 0x12
    int Count;  // 0x16
    unsigned int CapacityIncrement;  // 0x20
    unsigned int outBuffer;  // 0x24
    unsigned int MovementZones;  // 0x34
    DynamicVector * ptr_50;  // 0x50
    void* somecount_4C;  // 0x68
    unsigned int ZoneConnections;  // 0x6C
    unsigned int LevelAndPassability;  // 0x84
    unsigned int ValidMapCellCount;  // 0x88
    unsigned int LevelAndPassabilityStruct2pointer_70;  // 0x8C
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
    static MapClass *  SetObstruction(int16_t * a0, MapClass * aP1);
    char CheckCellsBuildable(unsigned short *a1, int a2, int a3, int a4, int a5, int a6, int a7, char a8, char a9);  // G57w10-S raw 0x0056E7C0 IUnknown 占位清除
    ObjectClass * * LoadFileData();
    TechnoTypeClass * * PostProcessReveal(char a2);
    VectorClass_flat * * Destru_vt05();
    VectorClass_flat * InitCellVe_vt00(char a2);
    char InitCellVe_vt01(int a2);
    char InitCellVe_vt02(int a2, unsigned int * a3);
    char  RevealCell(MouseClass * aP1);
    char isCellAccessible(int a2);
    char loadTheaterINI(INIClass * aP1, char * a2, int a4);
    int AllocateCellDataBuffer(int a2, char * a3);
    int BuildTileConnectivityGraph(int a2, int a3, int a4);  // G57w10-S raw 0x0057A320 IUnknown 占位清除
    int CalcVisibleCellRange(int a1, int a2, VectorClass_flat * aP2, int * a3);
    int Cleanup(int a1, int a2);
    int ClearCellOverlayFlag();
    char ClearRegions(int16_t *a2);  // G57w10-S raw 0x0056DAE0 IUnknown 占位清除
    int FindPassableNeighbor();
    int  FindSubzoneConnectionIndex(unsigned short * a2);
    int FreeAllCells(void *a1 = 0);
    static int GetScrollMode(MapClass * aP1);
    static int GetTileDataField14(short *a1);
    int GetTileIndex(int16_t *aP1, int aP2, char aP3);
    int  InitCellVe_vt04(unsigned int * a2);
    int InitCellVe_vt06(int a2);
    int InitCellVector();
    int InitializeTileData(MapClass * aP1);
    int IsAreaFree(int *a2, int a3);
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
    int SetCellFlagsAlongPath(unsigned short *aP1, unsigned short *a2, void *a1 = 0);
    int SetCellOverlayFlag();
    int SetScrollMode(int a2, int aP1, int a1, int aP2, int a3);
    int ToggleZoom(int a2);
    int TransitionCliff(MouseClass * aP0);
    static int TriggerEVA(int16_t *a1);  // G57w10-S raw 0x0057B790 IUnknown 占位清除
    static int UnselectAll_ClearLimboLaunchers();
    static int UpdateLightingPostProcess();
    int isCellShrouded(uint16_t a2);
    int isLocationShrouded(uint16_t a2);
    int updatePathfindingGrid(unsigned int * a2);
    unsigned int * AllocArrays();
    unsigned int * BuildSubzones();
    unsigned int * FastCellLookup(short * a2, int a3, char a4);
    static unsigned int * FindPlacementCellsAlt(char *aP1, unsigned int *a2, int a3);  // G57w10-S raw 0x00703590 IUnknown 占位清除
    unsigned int * InitAllCells();
    unsigned int * SpiralSearch(void *a1);
    unsigned int * allocateMapBuffers();
    unsigned int InitCellVe_vt05(int a2);
    unsigned int TransformCoordToScreen(int a2, unsigned int * a3);
    unsigned int initCellVectors(int a2);
    unsigned int initSubzoneData(int a2);
    unsigned int validateCellCoord(int a2);
    void * ClearShroud(HouseClass * aP1);
    int ApplyOverlayReveal(MouseClass * aP1, BuildingClass * aP2);
    void Destru_vt07();
    int FillRevealBuffer(unsigned short *a2, uint8_t *a3);  // G57w10-S raw 0x005683C0 IUnknown 占位清除
    void IncrementRedrawCounter();
    void InitCellVe_vt03();
    void allocateCellArrays();
    void checkCellBounds();
    void ApplyTerrainDamage(MapClass *aP1, int16_t *a2);  // G57w10-S raw 0x00574C20 IUnknown 占位清除
    void* Destruct(void *a1 = 0);
    void*  InitTileData(MouseClass * aP0, int aP3);
    static int RevealArea1(MapClass *aP1, int *a2, int a3, void *a4, char a5, int a6, char a7, char a8, char a9);
    int RevealArea2(int *coords, int radius, int owner, int arg4);  // 0x567da0
    INIClass * * SaveCellTagsToINI(char * a2, void * aIsomappack, void * aIsomappack2, void * aIsomappack3, void * aIsomappack4, void * aIsomappack5);
    void MapClass_IsRectInBounds();
    int MarkForRedraw(int a2, void *a2_2);
    MapClass * Destru_vt04(char * Block, char a2);
    VectorClass_flat * InitCellVe_vt00(unsigned int * Block, char a2);
    int GetTileDataField14(MapResourceClass * aP0);
    char __pad_30[24];  // 0x30 (ml)
    char __pad_5C[92];  // 0x5C (ml)
    unsigned char q0086;  // 0x86 (offset-truth)
    unsigned int q0088;  // 0x88 (offset-truth)
    unsigned char q01C6;  // 0x1C6 (offset-truth)
    unsigned int q0308;  // 0x308 (offset-truth)
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
};

} // namespace gamemd
