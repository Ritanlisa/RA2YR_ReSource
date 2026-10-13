// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct ObjectVector {
// --- flat members (BEGIN) ---
    bool IsAllocated;  // 0xD
// --- flat members (END) ---
    int Construct(int aP1, int aP2, void *a1 = 0, void *a2 = 0, void *a3 = 0, void *a4 = 0, void *a5 = 0, void *a6 = 0, void *a7 = 0);
     void ddtor(ObjectVector * aP1);

    uint8_t ObjectVector_field_0x0C;  // X10 supply (member_types)
    unsigned char __pad_000;  // X10 supply (csp_canon_members)
    int q004;  // X10 supply (member_lookup)
    int q008;  // X10 supply (member_lookup)
    int q00C;  // X10 supply (member_lookup)
};

} // namespace gamemd
