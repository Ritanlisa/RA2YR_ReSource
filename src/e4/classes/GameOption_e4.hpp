// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct GameOption {
// --- flat members (BEGIN) ---
    unsigned int u32_10;  // 0x10
    unsigned int q034;  // 0x34
    unsigned int q054;  // 0x54
    unsigned int u32_94;  // 0x94
    unsigned int u32_AC;  // 0xAC
    unsigned int q130;  // 0x130
    bool q17B;  // 0x17B
    unsigned int u32_570;  // 0x570
    unsigned int field_18C;
// --- flat members (END) ---
    static char CheckDuplicate(...);
    int GetField();
    int SetDescriptionWStr(wchar_t * Destination, CampaignScore * aP1);
    void * SetDigest(char *aP1);
};

} // namespace gamemd
