// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct MapSeedClass {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    bool IsAllocated;  // 0xD
    unsigned int M16;  // 0x16
    int field_14;  // 0x14
    char owns_memory;  // 0x21
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
    static int Constructor(int aP1);
    unsigned char *m_1;  // 0x1 (offset-truth)
    unsigned int m_8;  // 0x8 (offset-truth)
    unsigned int m_C;  // 0xC (offset-truth)
    unsigned int *q000;  // 0x0 (offset-truth)
    int __pad_004;  // 0x4 [X30:type_map]
    unsigned char __pad_011;  // 0x11 [X30:canon]
    unsigned char __pad_01A;  // 0x1A [X30:canon]
    unsigned char __pad_025;  // 0x25 [X30:canon]
    unsigned int Capacity;  // [X30:default]
    unsigned int count;  // [X30:default]
    unsigned int entries;  // [X30:default]
    unsigned int extension;  // [X30:default]
    unsigned int is_active;  // [X30:default]
    unsigned int max_entries;  // [X30:default]
    unsigned int mode;  // [X30:default]
};

} // namespace gamemd
