// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct VectorClass_flat;  // fix_fwd_type_supply

struct CoopCampaignVector {
    unsigned int __pad_0;  // 0x0
    int CoopCampaignVector_field_0x04;  // 0x4
    int q008;  // 0x8
    int CoopCampaignVector_field_0x0C;  // 0xC
    int CoopCampaignVector_field_0x10;  // 0x10
    int CoopCampaignVector_field_0x14;  // 0x14
    int CoopCampaignVector_field_0x18;  // 0x18
    int CoopCampaignVector_field_0x1C;  // 0x1C
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    VectorClass_flat * QueryInterface(unsigned int * Block, char a2);
    unsigned int * Construct(int aP1, int aP2, void *a3 = 0, void *a4 = 0, void *a5 = 0, void *a6 = 0, void *a7 = 0, void *a8 = 0, void *a9 = 0);
    unsigned int Write(int a2);
};

} // namespace gamemd
