// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct Socket {
// --- flat members (BEGIN) ---
    char m_Socket[4];  // 0x0
    char m_SendBufSize[4];  // 0x4
    char m_RecvBufSize[4];  // 0x8
    unsigned int u32_3F06C;
    unsigned int Debug;
// --- flat members (END) ---
    int ConfigureBuffers(void * aP1);  // G42.35a: SOCKET type unknown here (winsock not included); handles flow as void*
    int ConfigureBuffers(SOCKET aP1);
};

} // namespace gamemd
