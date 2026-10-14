// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once



#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct CampaignScore;  // fix_fwd_type_supply
struct ReferenceCounted;  // fix_fwd_type_supply
struct SessionClass;  // fix_fwd_type_supply
struct WorldDominationTour__Territory {
// --- flat members (BEGIN) ---
    HashTable * ptr_4;  // 0x4
    CampaignScore * ptr_8;  // 0x8
    ReferenceCounted * ptr_10;  // 0x10
    HashTable * ptr_14;  // 0x14
    HashTable * ptr_18;  // 0x18
    HashTable * ptr_20;  // 0x20
    HashTable * ptr_24;  // 0x24
    ReferenceCounted * ptr_28;  // 0x28
// --- flat members (END) ---
    SessionClass * * Constructor(int aP1, unsigned int * a2, ReferenceCounted * aP3, const char ** a4, ReferenceCounted * aP5);  // 0x76F970

    HashTable * q080;  // X10 supply (member_lookup)
    unsigned int u32_1C;  // X10 supply (member_lookup)
    unsigned int u32_2C;  // X10 supply (member_lookup)
    unsigned char u32_C[4];  /* WideString */  // X10 supply (member_lookup)
};
} // namespace gamemd
