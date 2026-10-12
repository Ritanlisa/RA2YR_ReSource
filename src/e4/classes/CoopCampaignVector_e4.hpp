// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct VectorClass_flat;  // fix_fwd_type_supply

struct CoopCampaignVector {
// --- flat members (BEGIN) ---
    bool IsAllocated;  // 0xD
// --- flat members (END) ---
    VectorClass_flat * QueryInterface(unsigned int * Block, char a2);
    unsigned int * Construct(int aP1, int aP2, void *a1 = 0, void *a2 = 0, void *a3 = 0, void *a4 = 0, void *a5 = 0, void *a6 = 0, void *a7 = 0);
    unsigned int Write(int a2);
    unsigned char *m_1;  // 0x1 (offset-truth)
    unsigned int m_C;  // 0xC (offset-truth)
};

} // namespace gamemd
