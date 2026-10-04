// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once
#include <windows.h>  // G42.36 Win32-type supply (SOCKET)

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
    // G42.40: dup void*/gamemd::SOCKET overloads removed; Socket_e4.cpp def uses winsock SOCKET
    int ConfigureBuffers(unsigned int aP1);  // G42.40b: bare SOCKET invisible when windows.h lean-guarded; canonical = e4_protos.h typedef unsigned int SOCKET
};

} // namespace gamemd
