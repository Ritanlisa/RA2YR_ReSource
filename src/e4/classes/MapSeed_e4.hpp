// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

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
    unsigned int __pad_0;
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
    int CheckName(void *a1 = 0);
    int IsCellInBounds();
    int ValidateName(int a2);
};

} // namespace gamemd
