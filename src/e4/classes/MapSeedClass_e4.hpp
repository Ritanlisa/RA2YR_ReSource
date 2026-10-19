// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct MapSeedClass {
    void* ptr_0;  // 0x0
    int MapSeedClass_field_0x04;  // 0x4
    unsigned int m_8;  // 0x8
    unsigned int MapSeedClass_field_0x0C;  // 0xC
    int MapSeedClass_field_0x10;  // 0x10
    int field_14;  // 0x14
    int MapSeedClass_field_0x18;  // 0x18
    int MapSeedClass_field_0x1C;  // 0x1C
    int MapSeedClass_field_0x20;  // 0x20
    int MapSeedClass_field_0x24;  // 0x24
    int MapSeedClass_field_0x28;  // 0x28
    int MapSeedClass_field_0x2C;  // 0x2C
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
