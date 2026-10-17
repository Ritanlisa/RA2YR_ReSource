// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct MapSeed {
    unsigned short __pad_0;  // 0x0
    unsigned char __pad_002;  // 0x2
    char __pad_3[1];  // 0x3
    unsigned int MapSeed_field_0x04;  // 0x4
    unsigned int MapSeed_field_0x08;  // 0x8
    unsigned int MapSeed_field_0x0C;  // 0xC
    int MapSeed_field_0x10;  // 0x10
    unsigned int MapSeed_field_0x14;  // 0x14
    unsigned int MapSeed_field_0x18;  // 0x18
    unsigned int MapSeed_field_0x1C;  // 0x1C
    unsigned int MapSeed_field_0x20;  // 0x20
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    static char PlaceCityBlock(void *aP1, void *a2, void *aP3, void *a4);
    static char PlaceCityBlock2(void *aP1, void *a2, void *aP3, void *a4);
    static char PlaceCityBuildings(void *aP1, void *a2, void *aP3, void *a4);
    AbstractClass * * InsertName();
    int CheckName(void *a1 = 0);
    int IsCellInBounds(void *a1 = 0);
    int ValidateName(int a2, void *a2_1 = 0);
    bool CheckTileMatch(int16_t *aP1, int16_t *aP2, int aP3, char aP4, char aP5, char aP6, void *a1 = 0);  // 0x56d100
};

} // namespace gamemd
