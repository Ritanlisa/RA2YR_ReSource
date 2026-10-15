// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

#ifndef GAMEMD_G2_NetworkAddress_DEF  // G42.57w14 twin-guard (shared; first-include wins)
#define GAMEMD_G2_NetworkAddress_DEF 1
struct NetworkAddress {
// --- flat members (BEGIN) ---
    unsigned int m_IP;  // 0x0
    unsigned short pad_06;  // 0x6
// --- flat members (END) ---
    unsigned int * Assign(unsigned int *a1, int aP2, int16_t a4);  // 0x53ECE0
    void* m_Port;  // 0x0 (no offset truth)
    int __pad_004;  // 0x4 [X30:type_map]
};
#endif  // GAMEMD_G2_NetworkAddress_DEF

} // namespace gamemd
