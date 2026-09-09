// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

namespace gamemd {
struct Terrain {
    void* vfptr;  // minimal E2 declaration
    int GetTileIndex(int a2);  // 0x48B720
    int GetTileType(AnimClass * aP1);  // 0x48B9E0
    void PlaceCliffs(int a2, int a3, IUnknown * aP3);  // 0x568E40
    int ConnectivityGraph();  // 0x56C510
    int FloodFillConnectivity(unsigned signed char * a1, IUnknown * aP2, AbstractClass * aP3);  // 0x56CB90
    void ProcessCellModification(IUnknown * aP1);  // 0x570050
    void RecursiveModify(IUnknown * aP1);  // 0x573540
    char CreateCrater(IUnknown * aP1);  // 0x576770
    bool SelectTileType(Random * aP0, IUnknown * aP1);  // 0x579620
    void PlaceTiberiumTrees(ScenarioClass * aP0, int a2, int a3, char a4);  // 0x5A28C0
    unsigned int * ClimbCheck(AbstractClass * aP0, AbstractClass * aP1);  // 0x6D6410
    int LookupByName();  // 0x71DD80
};
} // namespace gamemd
