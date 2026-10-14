// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct AbstractClassVector {
// --- flat members (BEGIN) ---
    bool IsAllocated;  // 0xD
// --- flat members (END) ---
    int Read(unsigned int * a2, void *a2_2, void *a3 = 0);
    int Construct(int aP1, int aP2, void *a3 = 0, void *a4 = 0, void *a5 = 0, void *a6 = 0, void *a7 = 0, void *a8 = 0, void *a9 = 0);
    unsigned int Write(int a2);
     void ddtor(AbstractClassVector * aP1);
    unsigned char *m_1;  // 0x1 (offset-truth)
    unsigned int m_C;  // 0xC (offset-truth)

    uint8_t AbstractClassVector_field_0x0C;  // X10 supply (member_types)
    unsigned char __pad_000;  // X10 supply (csp_canon_members)
    int q004;  // X10 supply (member_lookup)
    int q008;  // X10 supply (member_lookup)
};

} // namespace gamemd
