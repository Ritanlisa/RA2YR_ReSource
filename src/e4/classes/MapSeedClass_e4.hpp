// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct MapSeedClass {
    void * ptr_0;  // 0x0
    int MapSeedClass_field_0x04;  // 0x4
    unsigned int u32_8;  // 0x8
    unsigned int u32_C;  // 0xC
    int q010;  // 0x10
    int field_14;  // 0x14
    int q018;  // 0x18
    int q01C;  // 0x1C
    int q020;  // 0x20
    int q024;  // 0x24
    int q028;  // 0x28
    int q02C;  // 0x2C
    char __pad_30[8];  // 0x30
    unsigned int u32_38;  // 0x38
    unsigned int u32_3C;  // 0x3C
    unsigned int u32_40;  // 0x40
    unsigned int u32_44;  // 0x44
    unsigned int u32_48;  // 0x48
    unsigned int u32_4C;  // 0x4C
    unsigned int u32_50;  // 0x50
    unsigned int u32_54;  // 0x54
    unsigned int u32_58;  // 0x58
    unsigned int u32_5C;  // 0x5C
    unsigned int u32_60;  // 0x60
    unsigned int u32_64;  // 0x64
    unsigned int q068;  // 0x68
    unsigned int u32_6C;  // 0x6C
    unsigned int u32_70;  // 0x70
    unsigned int u32_74;  // 0x74
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    MapSeedClass * * PlaceBuildingClusters(MapSeedClass * aP1);
    MapSeedClass * QueryInterface(char a2, int a3);
    int GenerateSeed(unsigned int * a2);
    char ValidateRectBounds(void *a1);
    wchar_t * GetCell();
    wchar_t * SetCell();
    wchar_t * Validate();
    char PlaceCityBlockVariant(int16_t * a2, int16_t * a3, ObjectClass * aP2);  // G42.39 supply
    char PlaceCityBlockDiagonal(int16_t * a2, int16_t * a3, ObjectClass * aP2);  // G42.39 supply
    char PlaceCityBlockVariant2(int16_t * a2, int16_t * a3, ObjectClass * aP2);  // G42.39 supply
    static int Constructor(int aP1);
};

} // namespace gamemd
