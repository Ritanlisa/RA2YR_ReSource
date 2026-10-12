// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

#ifndef GAMEMD_TREE_UNIVERSE  // G42.35h: tree TU real class in network/connection.hpp (Cell_e4 G42.34j pattern)
struct ConnectionClass {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    char PlayerIndex[4];  // 0x4
    bool Active;  // 0x8
    unsigned int LastPacketTime;  // 0xC
    unsigned int PacketsSent;  // 0x10
    unsigned int PacketsReceived;  // 0x14
// --- flat members (END) ---
    AbstractClass * * sendAck(AnimClass * aP1, AnimClass * aP2, AnimClass * aP3, AnimClass * aP4, void *a5);
    int StubReturnFalse();
    int allocPacketSlot(const void *a2, signed int a3, const void *a4, signed int a5, int aP1, int aP2, int aP3, int aP4);
    int processTileUpdate(void *a2, signed int *a3);
    int receivePacket(int a2, int a3);
    int serviceSendQueue();
    int initQueue(unsigned int a2, void *a1 = 0);
    void dtor();
     int queueSendPacket(const void *a2, signed int a3, const void *a4, signed int a5, __int16 a6);
    unsigned int *q000;  // 0x0 (offset-truth)
    unsigned int u32_18;  // 0x18 (offset-truth)
    unsigned int u32_1C;  // 0x1C (offset-truth)
};
#endif  // GAMEMD_TREE_UNIVERSE

} // namespace gamemd
