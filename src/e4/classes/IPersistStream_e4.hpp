// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct IPersistStream {
// --- flat members (BEGIN) ---
    unsigned char q000;  // 0x0
// --- flat members (END) ---
    char SetField(int a1);
    int GetMaxSize();
    int GetSizeMax(int a0, RadioClass * aP1, int a3);
    int IsDirty(int a1, int a2);
    int StubReturn450();
    int StubReturnFalse();
    void Stub(BuildingTypeClass * aP0, int a2);
};

} // namespace gamemd
