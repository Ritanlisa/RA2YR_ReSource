// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct VectorClass_flat;  // fix_fwd_type_supply
struct Terrain {
    unsigned char __pad_000;  // 0x0
    char __pad_1[1];  // 0x1
    char Terrain_field_0x2[4];  // 0x2
    char __pad_6[14];  // 0x6
    void* q014;  // 0x14
    int __pad_18;  // 0x18
    char __pad_1C[8];  // 0x1C
    int q024;  // 0x24
    unsigned int __pad_28;  // 0x28
    char __pad_2C[4];  // 0x2C
    int q030;  // 0x30
    int q034;  // 0x34
    int q038;  // 0x38
    char __pad_3C[4];  // 0x3C
    int q040;  // 0x40
    char __pad_44[8];  // 0x44
    unsigned int q04C;  // 0x4C
    char __pad_50[4];  // 0x50
    int q054;  // 0x54
    char __pad_58[8];  // 0x58
    unsigned int u32_60;  // 0x60
    int q064;  // 0x64
    void* __pad_68;  // 0x68
    unsigned int u32_6C;  // 0x6C
    char __pad_70[16];  // 0x70
    unsigned int u32_80;  // 0x80
    char __pad_84[112];  // 0x84
    unsigned int u32_F4;  // 0xF4
    unsigned int u32_F8;  // 0xF8
    char __pad_FC[34];  // 0xFC
    char Terrain_field_0x11E[4];  // 0x11E
    unsigned char __pad_122;  // 0x122
    char __pad_123[1];  // 0x123
    unsigned int u32_124;  // 0x124
    int q128;  // 0x128
    int q12C;  // 0x12C
    char __pad_130[12];  // 0x130
    int q13C;  // 0x13C
    int q140;  // 0x140
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
};
} // namespace gamemd
