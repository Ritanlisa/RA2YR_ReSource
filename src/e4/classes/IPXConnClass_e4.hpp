// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct IPXConnClass {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    int PlayerIndex;  // 0x4
    char Active;  // 0x8
    int LastPacketTime;  // 0xC
    int PacketsSent;  // 0x10
    unsigned int q011;  // 0x11
    int PacketsReceived;  // 0x14
    unsigned int Socket;  // 0x18
    unsigned int RemoteAddress;  // 0x1C
    int q020;  // 0x20
    int q024;  // 0x24
    unsigned short RemoteSocket;  // 0x28
    unsigned char padding;  // 0x2A
    unsigned int RemoteAddress6;
    unsigned int *__pad_0;
    unsigned int u32_4C;
    unsigned int u32_54;
    unsigned int u32_58;
    unsigned int u32_5C;
    unsigned int u32_64;
// --- flat members (END) ---
    void * constructor(int aP1, SessionClass * aP2, IPXConnClass * aP3, IPXConnClass * aP4, unsigned int * a5, int a7, wchar_t * Source, int aP8, void *a9);
    static double initConnection(int a2, int a3, int a4, __int16 a5, int a6, int a7, int a8, int a9, int a1);
};

} // namespace gamemd
