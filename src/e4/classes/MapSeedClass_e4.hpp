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
    unsigned int MapSeedClass_field_0x04;
    unsigned int MapSeedClass_field_0x08;
    unsigned int MapSeedClass_field_0x0C;
    unsigned int MapSeedClass_field_0x10;
    unsigned int MapSeedClass_field_0x14;
    unsigned int MapSeedClass_field_0x18;
    unsigned int MapSeedClass_field_0x1C;
    unsigned int MapSeedClass_field_0x20;
    unsigned int MapSeedClass_field_0x24;
    unsigned int MapSeedClass_field_0x28;
    unsigned int MapSeedClass_field_0x2C;
    unsigned int __pad_0;
// --- flat members (END) ---
    MapSeedClass * * PlaceBuildingClusters(MapSeedClass * aP1);
    MapSeedClass * QueryInterface(char a2);
    int GenerateSeed(unsigned int * a2);
    int ValidateRectBounds(void *a1 = 0);
    wchar_t * GetCell();
    wchar_t * SetCell();
    wchar_t * Validate();
};

} // namespace gamemd
