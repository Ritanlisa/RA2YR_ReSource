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
    void* q004;  // 0x4
    void* q008;  // 0x8
    void* q00C;  // 0xC
    void* IsAllocated;  // 0xD
    void* q010;  // 0x10
    bool IsInitialized;  // 0x12
    void* q014;  // 0x14
    int Count;  // 0x16
    unsigned int q018;  // 0x18
    unsigned int q01C;  // 0x1C
    unsigned int CapacityIncrement;  // 0x20
    unsigned int outBuffer;  // 0x24
    void* q028;  // 0x28
    bool q02B;  // 0x2B
    void* q02C;  // 0x2C
    unsigned int q030;  // 0x30
    unsigned char q031;  // 0x31
    unsigned int q038;  // 0x38
    unsigned char q03A;  // 0x3A
    unsigned int q03C;  // 0x3C
    unsigned int q040;  // 0x40
    unsigned int q044;  // 0x44
    void* q048;  // 0x48
    AbstractClass* q04C;  // 0x4C
    void* q054;  // 0x54
    MapClass* q058;  // 0x58
    unsigned char q05C;  // 0x5C
    unsigned int q060;  // 0x60
    unsigned int q064;  // 0x64
    unsigned char q078;  // 0x78
    unsigned int u32_7C;  // 0x7C
    DynamicVector * q080;  // 0x80
    unsigned char q090;  // 0x90
    CampaignClass* q0A4;  // 0xA4
    unsigned int q0B0;  // 0xB0
    unsigned int q0B4;  // 0xB4
    void* q0D8;  // 0xD8
    unsigned char q0E0;  // 0xE0
    ObjectClass* q0E4;  // 0xE4
    unsigned char q0F0;  // 0xF0
    void* q0F4;  // 0xF4
    unsigned int q0F8;  // 0xF8
    void* q100;  // 0x100
    unsigned int q104;  // 0x104
    unsigned int q10C;  // 0x10C
    unsigned int CellIterator_NextY;  // 0x110
    unsigned char u8_11A;  // 0x11A
    void* q128;  // 0x128
    void* q130;  // 0x130
    unsigned char __pad_134[5];  // 0x134
    void* q13C;  // 0x13C
    MapClass* q140;  // 0x140
    unsigned char q144;  // 0x144
    unsigned int Crates;  // 0x148
    HouseClass* q150;  // 0x150
    unsigned int q154;  // 0x154
    unsigned char q158;  // 0x158
    unsigned int q164;  // 0x164
    unsigned int q168;  // 0x168
    unsigned int MapClass_field_0x140;  // 0x140
    unsigned char __pad_144[21];  // 0x144
    unsigned int u32_1B8;  // 0x1B8
    unsigned char u8_1F5;  // 0x1F5
    bool q258;  // 0x258
    unsigned int q264;  // 0x264
    unsigned int q280;  // 0x280
    AbstractClass* q2B4;  // 0x2B4
    unsigned int q2E4;  // 0x2E4
    unsigned int u32_2F4;  // 0x2F4
    unsigned int q300;  // 0x300
    void* q308;  // 0x308
    unsigned char q324;  // 0x324
    unsigned int q340;  // 0x340
    BuildingTypeClass* q520;  // 0x520
    unsigned int u32_6F0;  // 0x6F0
    unsigned int u32_708;  // 0x708
    unsigned int u32_70C;  // 0x70C
    unsigned char __pad_1140[25];  // 0x1140
    void* q14EC;  // 0x14EC
    unsigned int Activated;
    unsigned int MapClass_field_0x0;
    unsigned int MapClass_field_0x13C;
    unsigned int MapClass_field_0x14;
    unsigned int MapClass_field_0x28;
    unsigned int MapClass_field_0x2C;
    unsigned int MapClass_field_0xF4;
    unsigned int __pad_1170;
    unsigned int *__pad_11A4;
    unsigned int *__pad_18;
    unsigned int *__pad_298;
    unsigned int *__pad_30;
    unsigned int *__pad_5C;
    unsigned int __pad_F8;
    void* field_0;  // 0x0 (no offset truth)
    void* field_16C0;  // 0x0 (no offset truth)
    void* field_4;  // 0x0 (no offset truth)
// --- flat members (END) ---
    AbstractClass * * AllocateMapDataBuffer(int a2, int * a3);
    BombClass * * DecompressCellData(MouseClass * aP1, void *a2);
    INIClass * * SaveCellTagsToINI(char * a2);
    MapClass * * GrowLayer(int a2, int a3, int a4);
    MapClass * * RemoveTriggerRef(AbstractClass * aP1, int a3);
    MapClass * Destru_vt04(char a2);
    static MapClass *  SetObstruction(int16_t * a0, MapClass * aP1);
    ObjectClass * * CheckCellsBuildable(IUnknown * aP0, IUnknown * aP1, IUnknown * aP2, IUnknown * aP3, IUnknown * aP4, IUnknown * aP5, int aP6, IUnknown * aP7, IUnknown * aP8);
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
    int BuildTileConnectivityGraph(MapClass * aP1, IUnknown * aP2, IUnknown * aP3);
    int CalcVisibleCellRange(int a1, int a2, VectorClass_flat * aP2, int * a3);
    int Cleanup(int a1, int a2);
    int ClearCellOverlayFlag();
    int ClearRegions(IUnknown * aP1);
    int FindPassableNeighbor();
    int  FindSubzoneConnectionIndex(unsigned short * a2);
    int FreeAllCells();
    static int GetScrollMode(...);
    static int GetTileDataField14(short *a1);
    int GetTileIndex(int16_t *aP1, int aP2, char aP3);
    int  InitCellVe_vt04(unsigned int * a2);
    int InitCellVe_vt06(int a2);
    int InitCellVector();
    int InitializeTileData(MapClass * aP1);
    int IsAreaFree(int *a2, int a3);
    int IsCellPassable(int a1, int a2);
    int LoadTerrainData(MapClass * aP1);
    static int MarkForRedraw(...);
    int ProcessFogTransition();
    int ProcessRegion();
    int ProcessTile();
    int ProcessVisibilityFlags();
    int RemoveCellReference(int a2);
    int RevealArea0(int *a2, int a3, void *a4, char a5, char a6, char a7, char a8, char a9, int aP1, int aP2, int aP3, int aP4, int aP5, int a1);
    int ScrollOnce(AbstractClass * aP1);
    int SetCellFlagsAlongPath(unsigned short *aP1, unsigned short *a2);
    int SetCellOverlayFlag();
    int SetScrollMode(int a2, int aP1, int a1, int aP2, int a3);
    int ToggleZoom(int a2);
    int TransitionCliff(MouseClass * aP0);
    int  TriggerEVA(IUnknown * aP0);
    static int UnselectAll_ClearLimboLaunchers();
    int UpdateLightingPostProcess();
    int isCellShrouded(uint16_t a2);
    int isLocationShrouded(uint16_t a2);
    int updatePathfindingGrid(unsigned int * a2);
    unsigned int * AllocArrays();
    unsigned int * BuildSubzones();
    unsigned int * FastCellLookup(short * a2, int a3, char a4);
    unsigned int * FindPlacementCellsAlt(IUnknown * aP1, IUnknown * aP2, void *a3);
    unsigned int * InitAllCells();
    unsigned int * SpiralSearch(void *a1);
    unsigned int * allocateMapBuffers();
    unsigned int InitCellVe_vt05(int a2);
    unsigned int TransformCoordToScreen(int a2, unsigned int * a3);
    unsigned int initCellVectors(int a2);
    unsigned int initSubzoneData(int a2);
    unsigned int validateCellCoord(int a2);
    void * ClearShroud(HouseClass * aP1);
    void ApplyOverlayReveal(MouseClass * aP1, BuildingClass * aP2);
    void Destru_vt07();
    void FillRevealBuffer(MouseClass * aP1, IUnknown * aP2);
    void IncrementRedrawCounter();
    void InitCellVe_vt03();
    void allocateCellArrays();
    void checkCellBounds();
    void* ApplyTerrainDamage(IUnknown *a1, void *a2);
    void* Destruct();
    void*  InitTileData(MouseClass * aP0, int aP3);
    int RevealArea2(int *a1, int a2, int a3, int a4);  // 0x567da0
    INIClass * * SaveCellTagsToINI(char * a2, void * aIsomappack, void * aIsomappack2, void * aIsomappack3, void * aIsomappack4, void * aIsomappack5);
    void MapClass_IsRectInBounds();
    int MarkForRedraw(int a2, void *a2_2);
    MapClass * Destru_vt04(char * Block, char a2);
    VectorClass_flat * InitCellVe_vt00(unsigned int * Block, char a2);
    int GetTileDataField14(MapResourceClass * aP0);
};

} // namespace gamemd
