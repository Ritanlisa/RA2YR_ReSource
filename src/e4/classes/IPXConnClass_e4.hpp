// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct IPXConnClass {
    void* ptr_0;  // 0x0
    int PlayerIndex;  // 0x4
    char Active;  // 0x8
    unsigned char __pad_009;  // 0x9
    char __pad_A[2];  // 0xA
    int LastPacketTime;  // 0xC
    int PacketsSent;  // 0x10
    int PacketsReceived;  // 0x14
    unsigned int Socket;  // 0x18
    int RemoteAddress[3];  // 0x1C
    unsigned short RemoteSocket;  // 0x28
    char padding[2];  // 0x2A
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    void * constructor(int aP1, SessionClass * aP2, IPXConnClass * aP3, IPXConnClass * aP4, unsigned int * a5, int a7, wchar_t * Source, int aP8, void *a9);
    static double initConnection(int a2, int a3, int a4, int16_t a5, int a6, int a7, int a8, int a9, int a1);
};

} // namespace gamemd
