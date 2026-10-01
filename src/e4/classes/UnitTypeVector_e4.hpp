// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct UnitTypeVector {
// --- flat members (BEGIN) ---
    unsigned char q000;  // 0x0
    AbstractClass * ptr_4;  // 0x4
    unsigned char q008;  // 0x8
    unsigned char q00C;  // 0xC
    unsigned char u8_D;  // 0xD
    unsigned char q010;  // 0x10
    unsigned char q014;  // 0x14
    unsigned char q018;  // 0x18
    unsigned int UnitTypeVector_field_0x04;
    unsigned int UnitTypeVector_field_0x08;
    unsigned int UnitTypeVector_field_0x0C;
    unsigned int *__pad_0;
// --- flat members (END) ---
    unsigned int * Construct2(int a2, int a3);
    unsigned int * ConstructUnitTypeVectorClass(int a2, int a3);
};

} // namespace gamemd
