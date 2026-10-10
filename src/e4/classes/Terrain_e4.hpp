// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct VectorClass_flat;  // fix_fwd_type_supply
struct Terrain {
// --- flat members (BEGIN) ---

// --- flat members (END) ---
    int GetTileIndex(int a2);  // 0x48B720
    int GetTileType(int aP1);  // 0x48B9E0
    void PlaceCliffs(int a2, int a3, int *a4);  // G57w10-S raw 0x00568E40 IUnknown 占位清除
    AbstractClass * * ConnectivityGraph(void *a1_1);  // 0x56C510
    int  FloodFillConnectivity(uint8_t * a2, int a3, unsigned int * a4, void *a1 = 0);  // 0x56CB90
    void ProcessCellModification(int16_t *aP1);  // G57w10-S raw 0x00570050 IUnknown 占位清除
    void RecursiveModify(int a2);  // G57w10-S raw 0x00573540 IUnknown 占位清除
    int  CreateCrater(int a2, void *a1 = 0, void *a3 = 0, void *a4 = 0);  // 0x576770
    static bool SelectTileType(int a1, int a2);  // G57w10-S raw 0x00579620 IUnknown 占位清除
    void  PlaceTiberiumTrees(int16_t * a1, int a2, int a3, char a4);  // 0x5A28C0
    unsigned int *  ClimbCheck(unsigned int * a1, unsigned int * a2);  // 0x6D6410
    int LookupByName(void *a1 = 0);  // 0x71DD80
    unsigned int u32_80;  // 0x80 (offset-truth)
    static double Terrain_field_0x14(...);  // plateau: C2039/C3861 stub
    static double Terrain_field_0x24(...);  // plateau: C2039/C3861 stub
    static double Terrain_field_0x30(...);  // plateau: C2039/C3861 stub
    static double Terrain_field_0x38(...);  // plateau: C2039/C3861 stub
    static double Terrain_field_0x60(...);  // plateau: C2039/C3861 stub
    static double __pad_18(...);  // plateau: C2039/C3861 stub
    static double __pad_44(...);  // plateau: C2039/C3861 stub
    static double __pad_68(...);  // plateau: C2039/C3861 stub
};
} // namespace gamemd
