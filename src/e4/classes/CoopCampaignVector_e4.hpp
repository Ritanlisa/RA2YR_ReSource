// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct VectorClass_flat;  // fix_fwd_type_supply

struct CoopCampaignVector {
    unsigned int __pad_0;  // 0x0
    int q004;  // 0x4
    int q008;  // 0x8
    unsigned char q00C;  // 0xC
    bool IsAllocated;  // 0xD
    char __pad_E[2];  // 0xE
    int q010;  // 0x10
    int q014;  // 0x14
    int q018;  // 0x18
    int q01C;  // 0x1C
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    VectorClass_flat * QueryInterface(unsigned int * Block, char a2);
    unsigned int * Construct(int aP1, int aP2, void *a3 = 0, void *a4 = 0, void *a5 = 0, void *a6 = 0, void *a7 = 0, void *a8 = 0, void *a9 = 0);
    unsigned int Write(int a2);
};

} // namespace gamemd
