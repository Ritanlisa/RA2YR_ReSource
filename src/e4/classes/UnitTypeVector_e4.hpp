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
    unsigned char q010;  // 0x10
    unsigned char q014;  // 0x14
    unsigned char q018;  // 0x18
    unsigned int UnitTypeVector_field_0x04;
    unsigned int UnitTypeVector_field_0x08;
    unsigned int UnitTypeVector_field_0x0C;
    unsigned int *__pad_0;
// --- flat members (END) ---
    unsigned int * Construct2(int a2, int a3, void *a3_2);
    unsigned int * ConstructUnitTypeVectorClass(int a2, int a3);
    static unsigned int * Construct(void *aP1, int a2, int a3);  // 0x513190 raw: _DWORD* Construct(UnitTypeVector*, int, int)
    // --- W16G3 supply (BEGIN) ---
    unsigned int UnitTypeVector_field_0x10;  // @0x511dee (W16G3 raw-usage vocab)
    unsigned int UnitTypeVector_field_0x14;  // @0x511df6 (W16G3 raw-usage vocab)
    unsigned int UnitTypeVector_field_0x18;  // @0x511909 (W16G3 raw-usage vocab)
    // --- W16G3 supply (END) ---

};

} // namespace gamemd
