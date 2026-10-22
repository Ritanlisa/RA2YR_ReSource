// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct CampaignClass;  // fix_fwd_type_supply
struct DynamicVector;  // fix_fwd_type_supply
struct MapClass;  // fix_fwd_type_supply
struct WeaponStruct;  // fix_fwd_type_supply
struct VectorClass_flat;  // fix_fwd_type_supply
struct RandomMap {
    unsigned short __pad_000;  // 0x0
    char u32_2[4];  // 0x2
    char __pad_6[2];  // 0x6
    int RandomMap_field_0x8;  // 0x8
    unsigned int q00C;  // 0xC
    int q010;  // 0x10
    unsigned int q014;  // 0x14
    int q018;  // 0x18
    int q01C;  // 0x1C
    int q020;  // 0x20
    int u32_24;  // 0x24
    int u32_28;  // 0x28
    int u32_2C;  // 0x2C
    IUnknown* ptr_30;  // 0x30
    unsigned int __pad_034;  // 0x34
    int u32_38;  // 0x38
    int u32_3C;  // 0x3C
    int u32_40;  // 0x40
    unsigned char u32_44[4];  // 0x44
    IUnknown* ptr_48;  // 0x48
    char __pad_04C[448];  // 0x4C
    int q20C;  // 0x20C
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    int Check(void *a1_1, void *a2_1, void *a3_1);  // 0x486790
    unsigned int * TerrainTileDataConstructor(int a2, void *a2_1 = 0);  // 0x58BF70
    static int GenerateTerrain(RandomMap *self);  // 0x58C800
    MapClass * *  ExpandTerrainCells(int a2, int a3);  // 0x58D1C0
    unsigned int * TerrainAlloc(void *a1_1);  // 0x58D410
    RandomMap * *  CollectTerrainCells(int a2, void *a2_2 = 0);  // 0x58E740
    static AbstractClass * * PlaceRandomMapTerrain(RandomMap *self);  // 0x58E9B0
    void* CollectBorderCells(RandomMap *self = 0);  // 0x58F0C0
    void*  PlaceBuildings(int a2, int a3);  // 0x58F2C0
    int AllocateArea();  // 0x5905D0
char CheckCellPlacement(void * a2, DynamicVector * a3, float a4);  // 0x590970
    int CheckNeighborhoodCompatibility(unsigned short * a1, DynamicVector * a2, int a3, float a5);  // 0x590FD0
    ObjectClass * * CheckPlacementArea(short * a2, short * a3, ObjectClass * aP2);  // 0x592440
    CampaignClass * * CleanupRandomMapData();  // 0x5958E0
    int  SetupDialog(HWND hDlg);  // 0x596E50
    AbstractClass * *  LoadInfo(int a2);  // 0x597D60
    WeaponStruct * * LoadConfig();  // 0x5981F0
    AbstractClass * * Generate(char a2, HWND hDlg, void *a3 = 0);  // 0x598960
    AbstractClass * *  SetupTheater(char a2);  // 0x599650
    int FinalizeMapData();  // 0x59A6C0
    void ArrangeBuildingGrid();  // 0x59AD10
    void FillTerrainProgressively();  // 0x59AFA0
    int PlaceTerrainFeatures();  // 0x59B200
    void PlaceShoreObjects();  // 0x59B740
    int PlaceTerrain(int a2, MapResourceClass * aP2, MapResourceClass * aP3, int a5, MapResourceClass * aP5, double a7, char a8);  // 0x59BBC0
    int GrowTiberium();  // 0x59C580
    unsigned int * CellListAlloc(int a2);  // 0x5A0700
    int SpreadArea(MouseClass * aP1, float a3, MapResourceClass * aP3, short * a4, char a6);  // 0x5A08D0
    int PlaceRandomMapTiberium();  // 0x5A23A0
    VectorClass_flat * * PlaceResources();  // 0x5A3AE0
    int GenerateRandomMapTerrain();  // 0x5A4280
    VectorClass_flat * * PlaceMapSeedBuildings();  // 0x5A80B0
    AbstractClass * * RegenerateRandomMapPreview();  // 0x5B9C90
    unsigned int * PlaceTileSet();  // 0x6558D0
    int RemoveMatching(int a2);  // G57w10-S raw 0x0074EF10 IUnknown 占位清除
    wchar_t * ddtor(void *a1 = 0);  // 0x42F420
    unsigned int  Write(int a2);  // 0x42F450
    unsigned int *  Seek(unsigned int * a2, int a3);  // 0x42F470
    char  AddRef(int a2);  // 0x42F620
    int  Read(unsigned short * a2, void *a1 = 0, void *a3 = 0);  // 0x42F930
    DynamicVector *  QueryInterface(char a2);  // 0x42FBF0
    unsigned int *  Constructor_VectorClass_Cell_(char a2);  // 0x5AC290
    unsigned int * Constructor(int a2, int a3, void *a3_2, void *a4 = 0);  // 0x5AD820
    unsigned int *  Constructor_0(int a2, int a3, void *a3_2 = 0);  // 0x5ADA40
    unsigned int *  Constructor_1(int a2, int a3);  // 0x5ADAB0
    int GenerateTerrainForAllCells();  // 0x58CF90
#if !defined(GAMEMD_TREE_UNIVERSE) && !defined(GAMEMD_E4_VECTOR_TREE_TRUTH)
#else
#endif  // X27: template-carrier universe fallback
#if !defined(GAMEMD_TREE_UNIVERSE) && !defined(GAMEMD_E4_VECTOR_TREE_TRUTH)
#else
#endif  // X27: template-carrier universe fallback
#if !defined(GAMEMD_TREE_UNIVERSE) && !defined(GAMEMD_E4_VECTOR_TREE_TRUTH)
#else
#endif  // X27: template-carrier universe fallback
#if !defined(GAMEMD_TREE_UNIVERSE) && !defined(GAMEMD_E4_VECTOR_TREE_TRUTH)
#else
#endif  // X27: template-carrier universe fallback
#if !defined(GAMEMD_TREE_UNIVERSE) && !defined(GAMEMD_E4_VECTOR_TREE_TRUTH)
#else
#endif  // X27: template-carrier universe fallback
};
} // namespace gamemd
