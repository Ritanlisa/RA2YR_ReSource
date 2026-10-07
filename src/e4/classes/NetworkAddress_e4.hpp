// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

#ifndef GAMEMD_G2_NetworkAddress_DEF  // G42.57w14 twin-guard (shared; first-include wins)
#define GAMEMD_G2_NetworkAddress_DEF 1
struct NetworkAddress {
    static int Assign(void *aP0, void *aP1, int aP2, int aP3);  // 0x53ECE0 G42.33 b10 static-form sync
// --- flat members (BEGIN) ---
    unsigned int m_IP;  // 0x0
    unsigned int u32_4;  // 0x4
    void* m_Port;  // 0x0 (no offset truth)
// --- flat members (END) ---
    unsigned int * Assign(unsigned int *a2, int a3, __int16 a4);  // G57w10-S raw 0x0053ECE0 IUnknown 占位清除
};
#endif  // GAMEMD_G2_NetworkAddress_DEF

} // namespace gamemd
