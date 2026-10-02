// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct AbstractClass;  // fix_fwd_type_supply

struct MapSeed {
// --- flat members (BEGIN) ---
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    unsigned char q008;  // 0x8
    unsigned char q00C;  // 0xC
    unsigned char q010;  // 0x10
    unsigned char q014;  // 0x14
    unsigned char q018;  // 0x18
    unsigned char q01C;  // 0x1C
    unsigned char q020;  // 0x20
    unsigned int *__pad_0;
    unsigned int q00C0;
    unsigned char MapSeed_field_0x04;  // 0x4
    unsigned char MapSeed_field_0x08;  // 0x8
    unsigned char MapSeed_field_0x0C;  // 0xC
    unsigned char MapSeed_field_0x10;  // 0x10
    unsigned char MapSeed_field_0x18;  // 0x18
    unsigned char MapSeed_field_0x1C;  // 0x1C
    unsigned char MapSeed_field_0x20;  // 0x20
// --- flat members (END) ---
    AbstractClass * * InsertName();
    int CheckName(void *a1);
    int IsCellInBounds(void *a1);
    int ValidateName(int a2);
    bool CheckTileMatch(int16_t *aP1, int16_t *aP2, int aP3, char aP4, char aP5, char aP6);  // 0x56d100
};

} // namespace gamemd
