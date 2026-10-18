// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct TypeList_flat;  // fix_fwd_type_supply
struct TypeList_BuildingType {
// --- flat members (BEGIN) ---
    unsigned int __pad_0;  // 0x0
    int Items;  // 0x4
    int Capacity;  // 0x8
    bool IsInitialized;  // 0xC
    bool IsAllocated;  // 0xD
    unsigned char tail_E;  // 0xE
    char __pad_F[1];  // 0xF
    void* Count;  // 0x10
    unsigned int CapacityIncrement;  // 0x14
// --- flat members (END) ---
    TypeList_flat * Add(unsigned int * Block, char a2, void *a3_1);  // 0x5AC650
};
} // namespace gamemd
