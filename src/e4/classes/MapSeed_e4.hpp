// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct MapSeed {
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
    unsigned int MapSeed_field_0x14;  // 0x14 @0x5924cc (W16G3 raw-usage vocab)
    unsigned int q00C0;  // 0xC0 (offset-truth)

    unsigned char __pad_000;  // X10 supply (csp_canon_members)
    unsigned char __pad_002;  // X10 supply (member_lookup)
    int q020;  // X10 supply (member_lookup)
    unsigned char q076;  // X10 supply (member_lookup)
    int q01C;  // 0x1C
    int q018;  // 0x18
    int q010;  // 0x10
    int q00C;  // 0xC
    int q008;  // 0x8
    int q004;  // 0x4


    int MapSeed_field_0x10;  // 0x10 [X55 W3 supply (render vocab)]
    unsigned int MapSeed_field_0x04;  // 0x4 [X55 W3 supply (render vocab)]
    unsigned int MapSeed_field_0x18;  // 0x18 [X55 W3 supply (render vocab)]
    unsigned short __pad_0;  // 0x0 [X55 W3 supply (render vocab)]
    unsigned int MapSeed_field_0x08;  // 0x8 [X55 W3 supply (render vocab)]
    unsigned int MapSeed_field_0x1C;  // 0x1C [X55 W3 supply (render vocab)]
    unsigned int MapSeed_field_0x20;  // 0x20 [X55 W3 supply (render vocab)]
    unsigned int MapSeed_field_0x0C;  // 0xC [X55 W3 supply (render vocab)]
};

} // namespace gamemd
