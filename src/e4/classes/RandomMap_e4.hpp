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
// --- flat members (BEGIN) ---
    void* Items;  // 0x4
    bool IsAllocated;  // 0xD
    bool IsInitialized;  // 0x12
    int Count;  // 0x16
    void * ptr_30;  // 0x30
    void * ptr_48;  // 0x48
    AbstractClass * ptr_74;  // 0x74
    CampaignClass * ptr_178;  // 0x178
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
    unsigned int q04C;  // 0x4C (offset-truth)

    unsigned char __pad_000;  // X10 supply (csp_canon_members)
    unsigned char __pad_008;  // X10 supply (csp_canon_members)
    unsigned char __pad_01A;  // X10 supply (csp_canon_members)
    unsigned char __pad_034;  // X10 supply (csp_canon_members)
    unsigned char __pad_04C;  // X10 supply (csp_canon_members)
    unsigned char __pad_17C;  // X10 supply (csp_canon_members)
    int q00C;  // X10 supply (member_lookup)
    int q010;  // X10 supply (member_lookup)
    int q014;  // X10 supply (member_lookup)
    int q018;  // X10 supply (member_lookup)
    int q01C;  // X10 supply (member_lookup)
    int q020;  // X10 supply (member_lookup)
    void* q050;  // X10 supply (member_lookup)
    unsigned int q060;  // X10 supply (member_lookup)
    unsigned int q064;  // X10 supply (member_lookup)
    unsigned char q180;  // X10 supply (member_lookup)
    unsigned int q184;  // X10 supply (member_lookup)
#if !defined(GAMEMD_TREE_UNIVERSE) && !defined(GAMEMD_E4_VECTOR_TREE_TRUTH)
    DynamicVectorClass* q188;  // X10 supply (member_lookup)
#else
    void* q188;  // X10 supply (member_lookup)  // X27: template-carrier
#endif  // X27: template-carrier universe fallback
    CampaignClass* q18C;  // X10 supply (member_lookup)
#if !defined(GAMEMD_TREE_UNIVERSE) && !defined(GAMEMD_E4_VECTOR_TREE_TRUTH)
    DynamicVectorClass* q1A4;  // X10 supply (member_lookup)
#else
    void* q1A4;  // X10 supply (member_lookup)  // X27: template-carrier
#endif  // X27: template-carrier universe fallback
    CampaignClass* q1A8;  // X10 supply (member_lookup)
    unsigned char q1AC;  // X10 supply (member_lookup)
#if !defined(GAMEMD_TREE_UNIVERSE) && !defined(GAMEMD_E4_VECTOR_TREE_TRUTH)
    DynamicVectorClass* q1C0;  // X10 supply (member_lookup)
#else
    void* q1C0;  // X10 supply (member_lookup)  // X27: template-carrier
#endif  // X27: template-carrier universe fallback
    CampaignClass* q1C4;  // X10 supply (member_lookup)
#if !defined(GAMEMD_TREE_UNIVERSE) && !defined(GAMEMD_E4_VECTOR_TREE_TRUTH)
    DynamicVectorClass* q1DC;  // X10 supply (member_lookup)
#else
    void* q1DC;  // X10 supply (member_lookup)  // X27: template-carrier
#endif  // X27: template-carrier universe fallback
    CampaignClass* q1E0;  // X10 supply (member_lookup)
    unsigned char q1E4;  // X10 supply (member_lookup)
#if !defined(GAMEMD_TREE_UNIVERSE) && !defined(GAMEMD_E4_VECTOR_TREE_TRUTH)
    DynamicVectorClass* q1F8;  // X10 supply (member_lookup)
#else
    void* q1F8;  // X10 supply (member_lookup)  // X27: template-carrier
#endif  // X27: template-carrier universe fallback
    CampaignClass* q1FC;  // X10 supply (member_lookup)
    unsigned int u32_214;  // X10 supply (member_lookup)
    unsigned int u32_218;  // X10 supply (member_lookup)
    unsigned int u32_21C;  // X10 supply (member_lookup)
    unsigned int u32_221;  // X10 supply (member_lookup)
    unsigned int u32_230;  // X10 supply (member_lookup)
    unsigned int u32_234;  // X10 supply (member_lookup)
    int u32_24;  // X10 supply (member_lookup)
    unsigned int u32_24C;  // X10 supply (member_lookup)
    unsigned int u32_250;  // X10 supply (member_lookup)
    unsigned int u32_254;  // X10 supply (member_lookup)
    unsigned int u32_259;  // X10 supply (member_lookup)
    unsigned int u32_268;  // X10 supply (member_lookup)
    unsigned int u32_26C;  // X10 supply (member_lookup)
    int u32_28;  // X10 supply (member_lookup)
    unsigned int u32_284;  // X10 supply (member_lookup)
    unsigned int u32_2A0;  // X10 supply (member_lookup)
    unsigned int u32_2BC;  // X10 supply (member_lookup)
    int u32_2C;  // X10 supply (member_lookup)
    unsigned int u32_2C0;  // X10 supply (member_lookup)
    unsigned int u32_2C4;  // X10 supply (member_lookup)
    unsigned int u32_2E0;  // X10 supply (member_lookup)
    unsigned int u32_2FC;  // X10 supply (member_lookup)
    unsigned int u32_308;  // X10 supply (member_lookup)
    unsigned int u32_30C;  // X10 supply (member_lookup)
    unsigned int u32_35;  // X10 supply (member_lookup)
    int u32_38;  // X10 supply (member_lookup)
    int u32_3C;  // X10 supply (member_lookup)
    int u32_40;  // X10 supply (member_lookup)
    unsigned char u32_44[4];  /* char[4] */  // X10 supply (member_lookup)
    unsigned int u32_68;  // X10 supply (member_lookup)
    unsigned int u32_A10;  // X10 supply (member_lookup)
    int u8_1B1;  // X10 supply (member_lookup)
    int u8_1E9;  // X10 supply (member_lookup)
    char u32_11B;  // 0x11B
};
} // namespace gamemd
