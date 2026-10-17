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
    void PlaceCliffs(int a2, int a3, int *aP3);  // G57w10-S raw 0x00568E40 IUnknown 占位清除
    static AbstractClass * * ConnectivityGraph(void *a1_1);  // 0x56C510
    int FloodFillConnectivity(uint8_t *a1, int aP2, unsigned int *aP3, void *a4 = 0);  // 0x56CB90
    void ProcessCellModification(int16_t *aP1);  // G57w10-S raw 0x00570050 IUnknown 占位清除
    AbstractClass * * RecursiveModify(IUnknown * aP1);  // G57w10-S raw 0x00573540 IUnknown 占位清除
    int  CreateCrater(int a2, void *a1 = 0, void *a3 = 0, void *a4 = 0);  // 0x576770
    VectorClass_flat * * SelectTileType(Random * aP0, IUnknown * aP1);  // G57w10-S raw 0x00579620 IUnknown 占位清除
    void PlaceTiberiumTrees(ScenarioClass * aP0, int a2, int a3, char a4);  // 0x5A28C0
    unsigned int * ClimbCheck(AbstractClass * aP0, AbstractClass * aP1);  // 0x6D6410
    int LookupByName(void *a1 = 0);  // 0x71DD80
    unsigned int u32_80;  // 0x80 (offset-truth)

    unsigned char __pad_000;  // X10 supply (csp_canon_members)
    unsigned char __pad_122;  // X10 supply (member_types)
    int q024;  // X10 supply (member_lookup)
    int q030;  // X10 supply (member_lookup)
    int q034;  // X10 supply (member_lookup)
    int q040;  // X10 supply (member_lookup)
    unsigned char q050;  // X10 supply (member_lookup)
    unsigned int u32_124;  // X10 supply (member_lookup)
    unsigned int u32_F4;  // X10 supply (member_lookup)
    unsigned int u32_F8;  // X10 supply (member_lookup)
    int u32_38;  // 0x38
    int q038;  // 0x38
    int Terrain_field_0x13C;  // 0x13C [X30:type_map]
    void* Terrain_field_0x14;  // 0x14 [X30:type_map]
    int Terrain_field_0x38;  // 0x38 [X30:type_map]
unsigned int Terrain_field_0x60;  // 0x60 [X35-L7 kind=unsigned int]
    int __pad_18;  // 0x18 [X30:type_map]
    char __pad_44[28];  // 0x44 [X30:member_lookup]
    void* __pad_68;  // 0x68 [X30:type_map]


    unsigned int q04C;  // 0x4C [X55 W3 supply (render vocab)]
    unsigned int u32_6C;  // 0x6C [X55 W3 supply (render vocab)]
    unsigned int __pad_28;  // 0x28 [X55 W3 supply (render vocab)]
    int q054;  // 0x54 [X55 W3 supply (render vocab)]
};
} // namespace gamemd
