// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct CoopCampaignVector {
// --- flat members (BEGIN) ---
    unsigned char q004;  // 0x4
    unsigned char q008;  // 0x8
    unsigned char q00C;  // 0xC
    bool IsAllocated;  // 0xD
    unsigned char q010;  // 0x10
    unsigned char q014;  // 0x14
    unsigned char q018;  // 0x18
    unsigned char q01C;  // 0x1C
    unsigned int CoopCampaignVector_field_0x04;
    unsigned int CoopCampaignVector_field_0x08;
    unsigned int CoopCampaignVector_field_0x0C;
    unsigned int __pad_0;
    unsigned int m_1;
    unsigned int m_8;
    unsigned int m_C;
// --- flat members (END) ---
    VectorClass_flat * QueryInterface(unsigned int * Block, char a2);
    void Construct(MultiplayerGameMode * aP1, MultiplayerGameMode * aP2);
    unsigned int Write(int a2);
};

} // namespace gamemd
