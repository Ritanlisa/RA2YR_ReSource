// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

namespace gamemd {
struct RandomMap {
    void* vfptr;  // minimal E2 declaration
    void ddtor();  // 0x42F420
    unsigned int Write(int a2);  // 0x42F450
    unsigned int * Seek(unsigned int * a2, int a3);  // 0x42F470
    char AddRef(int a2);  // 0x42F620
    int Read(unsigned short * a2);  // 0x42F930
    DynamicVector * QueryInterface(unsigned int * Block, char a2);  // 0x42FBF0
    bool Check();  // 0x486790
    unsigned int * TerrainTileDataConstructor(int a2);  // 0x58BF70
    int GenerateTerrain();  // 0x58C800
    int GenerateTerrainForAllCells();  // 0x58CF90
    int ExpandTerrainCells(int a2, int a3);  // 0x58D1C0
    unsigned int * TerrainAlloc();  // 0x58D410
    char CollectTerrainCells(int a2);  // 0x58E740
    char PlaceRandomMapTerrain();  // 0x58E9B0
    void CollectBorderCells();  // 0x58F0C0
    char PlaceBuildings(int a2, int a3);  // 0x58F2C0
    char AllocateArea();  // 0x5905D0
    char CheckCellPlacement(short * a1, void * a2, DynamicVector * aP3);  // 0x590970
    char CheckPlacementArea(short * a2, short * a3, ObjectClass * aP2);  // 0x592440
    void CleanupRandomMapData();  // 0x5958E0
    LRESULT SetupDialog(HWND hDlg);  // 0x596E50
    char LoadInfo(wchar_t * Destination, int a2);  // 0x597D60
    int LoadConfig();  // 0x5981F0
    char Generate(char a2, HWND hDlg);  // 0x598960
    char * SetupTheater(char a2);  // 0x599650
    int FinalizeMapData();  // 0x59A6C0
    void ArrangeBuildingGrid();  // 0x59AD10
    void FillTerrainProgressively();  // 0x59AFA0
    int PlaceTerrainFeatures();  // 0x59B200
    void PlaceShoreObjects();  // 0x59B740
    char GrowTiberium();  // 0x59C580
    unsigned int * CellListAlloc(int a2);  // 0x5A0700
    int PlaceRandomMapTiberium();  // 0x5A23A0
    int PlaceResources();  // 0x5A3AE0
    int GenerateRandomMapTerrain();  // 0x5A4280
    int PlaceMapSeedBuildings();  // 0x5A80B0
    unsigned int * Constructor_VectorClass_Cell_(unsigned int * Block, char a2);  // 0x5AC290
    unsigned int * Constructor(int a2, int a3);  // 0x5AD820
    unsigned int * Constructor_0(int a2, int a3);  // 0x5ADA40
    unsigned int * Constructor_1(int a2, int a3);  // 0x5ADAB0
    void RegenerateRandomMapPreview();  // 0x5B9C90
    unsigned int * PlaceTileSet();  // 0x6558D0
    char RemoveMatching(IUnknown * aP1);  // 0x74EF10
};
} // namespace gamemd
