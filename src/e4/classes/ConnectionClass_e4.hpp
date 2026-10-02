// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct ConnectionClass {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    char PlayerIndex[4];  // 0x4
    bool Active;  // 0x8
    unsigned int LastPacketTime;  // 0xC
    unsigned int PacketsSent;  // 0x10
    unsigned int q011;  // 0x11
    unsigned int PacketsReceived;  // 0x14
    unsigned int LastPacketTime2;
    unsigned int PhoneNumber;
    unsigned int *__pad_0;
    unsigned int __pad_009;
    unsigned int u32_18;
    unsigned int u32_1C;
    unsigned int u32_2C;
    unsigned int u32_34;
    unsigned int u32_38;
    unsigned int u32_3C;
    unsigned int Debug;
    unsigned int Timer;
// --- flat members (END) ---
    AbstractClass * * sendAck(AnimClass * aP1, AnimClass * aP2, AnimClass * aP3, AnimClass * aP4, void *a5);
    int StubReturnFalse();
    int allocPacketSlot(const void *a2, signed int a3, const void *a4, signed int a5, int aP1, int aP2, int aP3, int aP4);
    int processTileUpdate(void *a2, signed int *a3);
    int receivePacket(int a2, int a3);
    int serviceSendQueue();
    int initQueue(unsigned int a2);
    void dtor();
     double queueSendPacket(const void *a2, signed int a3, const void *a4, signed int a5, __int16 a6, int a7, int a8, int a9, int a1);
};

} // namespace gamemd
