// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct UnitTypeVector {
// --- flat members (BEGIN) ---
    AbstractClass * ptr_4;  // 0x4
// --- flat members (END) ---
    unsigned int * Construct2(int a2, int a3, void *a3_2);
    unsigned int * ConstructUnitTypeVectorClass(int a2, int a3);
    static unsigned int * Construct(void *aP1, int a2, int a3);
    unsigned int UnitTypeVector_field_0x10;  // @0x511dee (W16G3 raw-usage vocab)
    unsigned int UnitTypeVector_field_0x14;  // @0x511df6 (W16G3 raw-usage vocab)
    unsigned int UnitTypeVector_field_0x18;  // @0x511909 (W16G3 raw-usage vocab)

    uint8_t UnitTypeVector_field_0x0C;  // X10 supply (member_types)
    unsigned char __pad_000;  // X10 supply (csp_canon_members)
    unsigned char __pad_008;  // X10 supply (csp_canon_members)
    int q00C;  // X10 supply (member_lookup)
};

} // namespace gamemd
