// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct InfantryTypeVector {
// --- flat members (BEGIN) ---

// --- flat members (END) ---
    int Add(InfantryTypeClass * aP1, void *a2, void *a3);
    unsigned int * Construct2(int a2, int a3);
    unsigned int * ConstructFromData(int a2, int a3);
    static unsigned int * Construct(void *aP1, int a2, int a3);
    unsigned int InfantryTypeVector_field_0x18;  // @0x511xxx (W16G3 raw-usage vocab)
    unsigned int InfantryTypeVector_field_0x1C;  // @0x511xxx (W16G3 raw-usage vocab)
};

} // namespace gamemd
