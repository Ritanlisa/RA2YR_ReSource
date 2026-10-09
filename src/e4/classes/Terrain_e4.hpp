// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct VectorClass_flat;  // fix_fwd_type_supply
struct Terrain {
// --- flat members (BEGIN) ---
    unsigned char q000;  // 0x0
    unsigned int q004;  // 0x4
    unsigned int u32_8;  // 0x8
    unsigned char q00C;  // 0xC
    unsigned char q010;  // 0x10
    void* q014;  // 0x14
    unsigned char q018;  // 0x18
    unsigned int u32_1C;  // 0x1C
    unsigned char q020;  // 0x20
    void* q024;  // 0x24
    unsigned int q028;  // 0x28
    unsigned char q02C;  // 0x2C
    void* q030;  // 0x30
    void* q034;  // 0x34
    void* q038;  // 0x38
    unsigned char q03C;  // 0x3C
    void* q040;  // 0x40
    unsigned char q044;  // 0x44
    void* q048;  // 0x48
    unsigned char q04C;  // 0x4C
    unsigned char q050;  // 0x50
    void* q054;  // 0x54
    unsigned char q058;  // 0x58
    unsigned char q05C;  // 0x5C
    unsigned int u32_60;  // 0x60
    void* q064;  // 0x64
    unsigned char q068;  // 0x68
    unsigned int u32_6C;  // 0x6C
    unsigned char q070;  // 0x70
    unsigned char q074;  // 0x74
    unsigned char q080;  // 0x80
    unsigned char q084;  // 0x84
    unsigned char q088;  // 0x88
    unsigned char q08C;  // 0x8C
    unsigned char q090;  // 0x90
    unsigned char q094;  // 0x94
    unsigned char q098;  // 0x98
    unsigned int u32_F4;  // 0xF4
    unsigned int u32_F8;  // 0xF8
    unsigned char q0FC;  // 0xFC
    void* q100;  // 0x100
    unsigned char q104;  // 0x104
    unsigned int q108;  // 0x108
    unsigned char q10C;  // 0x10C
    unsigned char q110;  // 0x110
    void* q114;  // 0x114
    unsigned char q118;  // 0x118
    unsigned char q11C;  // 0x11C
    unsigned char q120;  // 0x120
    unsigned char q122;  // 0x122
    unsigned int u32_124;  // 0x124
    void* q128;  // 0x128
    void* q12C;  // 0x12C
    unsigned char q130;  // 0x130
    void* q134;  // 0x134
    unsigned char q138;  // 0x138
    void* q13C;  // 0x13C
    void* q140;  // 0x140
// --- flat members (END) ---
    int GetTileIndex(int a2);  // 0x48B720
    int GetTileType(int aP1);  // 0x48B9E0
    void PlaceCliffs(int a2, int a3, int *a4);  // G57w10-S raw 0x00568E40 IUnknown 占位清除
    AbstractClass * * ConnectivityGraph(void *a1_1);  // 0x56C510
    int FloodFillConnectivity(unsigned __int8 *a1, int aP2, unsigned int *aP3);  // 0x56CB90
    void ProcessCellModification(__int16 *a2);  // G57w10-S raw 0x00570050 IUnknown 占位清除
    void RecursiveModify(int a2);  // G57w10-S raw 0x00573540 IUnknown 占位清除
    int CreateCrater(IUnknown * aP1, void *a2_1, void *a3_1, void *a4_1, void *a5_1);  // 0x576770
    static bool SelectTileType(int a1, int a2);  // G57w10-S raw 0x00579620 IUnknown 占位清除
    void PlaceTiberiumTrees(ScenarioClass * aP0, int a2, int a3, char a4);  // 0x5A28C0
    unsigned int * ClimbCheck(AbstractClass * aP0, AbstractClass * aP1);  // 0x6D6410
    int LookupByName();  // 0x71DD80
    unsigned int u32_80;  // 0x80 (offset-truth)
};
} // namespace gamemd
