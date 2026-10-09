// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct MapSeedClass {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    int u32_4;  // 0x4
    unsigned char q008;  // 0x8
    unsigned char q00C;  // 0xC
    bool IsAllocated;  // 0xD
    unsigned char q010;  // 0x10
    unsigned char q014;  // 0x14
    unsigned int M16;  // 0x16
    unsigned char q018;  // 0x18
    unsigned char q01C;  // 0x1C
    unsigned char q020;  // 0x20
    char owns_memory;  // 0x21
    unsigned char q024;  // 0x24
    unsigned char q028;  // 0x28
    unsigned char q02C;  // 0x2C
    unsigned int pad_2E;  // 0x2E
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
    static int Constructor(int aP1);  // 0x595680 raw: int Constructor(int this) [raw int-this; site v10 int]
};

} // namespace gamemd
