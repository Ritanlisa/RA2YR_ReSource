// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct NetworkAddress {
// --- flat members (BEGIN) ---
    unsigned int m_IP;  // 0x0
    unsigned int u32_4;  // 0x4
    unsigned short pad_06;  // 0x6
    void* m_Port;  // 0x0 (no offset truth)
// --- flat members (END) ---
    int Assign(unsigned int * a1, IUnknown * aP2, int16_t a4);
};

} // namespace gamemd
