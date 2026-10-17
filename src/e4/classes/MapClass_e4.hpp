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
    unsigned int MapClass_field_0x0;  // 0x0
    int RadarHashVector_field_0x04;  // 0x4
    int q008;  // 0x8
    int RadarHashVector_field_0x0C;  // 0xC
    int q010;  // 0x10
    unsigned int MapClass_field_0x14;  // 0x14
    char __pad_18[16];  // 0x18
    int MapClass_field_0x28;  // 0x28
    unsigned int MapClass_field_0x2C;  // 0x2C
    char __pad_30[24];  // 0x30
    int MapClass_field_0x48;  // 0x48
    unsigned int q04C;  // 0x4C
    DynamicVector * ptr_50;  // 0x50
    unsigned int __pad_054;  // 0x54
    int q058;  // 0x58
    char __pad_5C[92];  // 0x5C
    int MapClass_field_0xB8;  // 0xB8
    unsigned char q0BC[24];  // 0xBC
    unsigned int u32_D4;  // 0xD4
    unsigned int u32_D8;  // 0xD8
    unsigned int u32_DC;  // 0xDC
    char __pad_E0[12];  // 0xE0
    int MapClass_field_0xEC;  // 0xEC
    char __pad_F0[4];  // 0xF0
    unsigned int MapClass_field_0xF4;  // 0xF4
    unsigned int __pad_F8;  // 0xF8
    int q0FC;  // 0xFC
    int q100;  // 0x100
    char __pad_104[4];  // 0x104
    int q108;  // 0x108
    char u32_10C[28];  // 0x10C
    int q128;  // 0x128
    unsigned char u32_12C[4];  // 0x12C
    int q130;  // 0x130
    unsigned char q134[8];  // 0x134
    int MapClass_field_0x13C;  // 0x13C
    int q140;  // 0x140
    char __pad_144[83];  // 0x144
    char MapClass_field_0x197[4];  // 0x197
    char __pad_19B[166];  // 0x19B
    char MapClass_field_0x241[4];  // 0x241
    char __pad_245[79];  // 0x245
    int MapClass_field_0x294;  // 0x294
    char __pad_298[108];  // 0x298
    int q304;  // 0x304
    IUnknown* q0308;  // 0x308
    char __pad_30C[1020];  // 0x30C
    void* u32_708;  // 0x708
    unsigned char __pad_70C;  // 0x70C
    char __pad_70D[248];  // 0x70D
    unsigned char q0805;  // 0x805
    unsigned char __pad_806;  // 0x806
    char __pad_807[1397];  // 0x807
    int MapClass_field_0xD7C;  // 0xD7C
    char __pad_D80[960];  // 0xD80
    char __pad_1140[28];  // 0x1140
    unsigned int u32_115C;  // 0x115C
    unsigned int u32_1160;  // 0x1160
    unsigned int u32_1164;  // 0x1164
    unsigned int __pad_1168;  // 0x1168
    unsigned int u32_116C;  // 0x116C
    char __pad_1170[44];  // 0x1170
    unsigned int u32_119C;  // 0x119C
    unsigned int u32_11A0;  // 0x11A0
    char __pad_11A4[180];  // 0x11A4
    int MapClass_field_0x1258;  // 0x1258
    char __pad_125C[960];  // 0x125C
    char __pad_161C[164];  // 0x161C
    int MapClass_field_0x16C0;  // 0x16C0
// --- flat members (BEGIN) ---
// --- flat members (END) ---
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
};

} // namespace gamemd
