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
    int ValidateName(int a2, void *a1 = 0);
    bool CheckTileMatch(int16_t *aP1, int16_t *aP2, int aP3, char aP4, char aP5, char aP6, void *a1 = 0);  // 0x56d100
    unsigned int MapSeed_field_0x14;  // 0x14 @0x5924cc (W16G3 raw-usage vocab)
    unsigned int q00C0;  // 0xC0 (offset-truth)
    static double MapSeed_field_0x04(...);  // plateau: C2039/C3861 stub
    static double MapSeed_field_0x08(...);  // plateau: C2039/C3861 stub
    static double MapSeed_field_0x0C(...);  // plateau: C2039/C3861 stub
    static double MapSeed_field_0x10(...);  // plateau: C2039/C3861 stub
    static double MapSeed_field_0x18(...);  // plateau: C2039/C3861 stub
    static double MapSeed_field_0x1C(...);  // plateau: C2039/C3861 stub
    static double MapSeed_field_0x20(...);  // plateau: C2039/C3861 stub
    static double __pad_0(...);  // plateau: C2039/C3861 stub
    static double q020(...);  // plateau: C2039/C3861 stub
    static double q076(...);  // plateau: C2039/C3861 stub
};

} // namespace gamemd
