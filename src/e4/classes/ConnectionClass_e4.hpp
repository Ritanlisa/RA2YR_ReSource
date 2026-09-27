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
    void* ;  // 0x18
    unsigned int q01C;  // 0x1C
    unsigned int q020;  // 0x20
    void* q024;  // 0x24
    void* q028;  // 0x28
    TechnoTypeClass* q02C;  // 0x2C
    void* q030;  // 0x30
    unsigned char q034;  // 0x34
    void* q038;  // 0x38
    unsigned char q03C;  // 0x3C
    AbstractClass* q040;  // 0x40
    TechnoTypeClass* q044;  // 0x44
    void* q048;  // 0x48
    unsigned char q04C;  // 0x4C
    void* q050;  // 0x50
    void* q054;  // 0x54
    unsigned char q058;  // 0x58
    unsigned char q060;  // 0x60
    AbstractClass* q064;  // 0x64
    TechnoTypeClass* q068;  // 0x68
    unsigned char q06C;  // 0x6C
    unsigned char q070;  // 0x70
    unsigned char q074;  // 0x74
    unsigned char q07C;  // 0x7C
    void* q080;  // 0x80
    unsigned char q084;  // 0x84
    unsigned char q090;  // 0x90
    unsigned char q094;  // 0x94
    AbstractClass* q100;  // 0x100
    TechnoTypeClass* q104;  // 0x104
    unsigned char q108;  // 0x108
    unsigned char q10C;  // 0x10C
    void* q114;  // 0x114
    unsigned char q118;  // 0x118
    unsigned char q11C;  // 0x11C
    unsigned char q124;  // 0x124
    unsigned char q128;  // 0x128
    unsigned char q130;  // 0x130
    void* q134;  // 0x134
    unsigned char q138;  // 0x138
    unsigned char q13C;  // 0x13C
    unsigned char q144;  // 0x144
    unsigned char q148;  // 0x148
    unsigned char q150;  // 0x150
    unsigned char q154;  // 0x154
    unsigned int PlayerIndex0;
    unsigned int PlayerIndex1;
    unsigned int PlayerIndex2;
    unsigned int PlayerIndex3;
    unsigned int PlayerIndex4;
    unsigned int PlayerIndex5;
    unsigned int PlayerIndex6;
    unsigned int PlayerIndex7;
    unsigned int PlayerIndex8;
    unsigned int queueSendPacket;
    unsigned int q018;
// --- flat members (END) ---
    AbstractClass * * sendAck(AnimClass * aP1, AnimClass * aP2, AnimClass * aP3, AnimClass * aP4);
    int StubReturnFalse();
    int allocPacketSlot(const void * a2, signed int a3, const void * a4, signed int a5);
    int processTileUpdate(void * a2, signed int * a3);
    int receivePacket(int a2, int a3);
    int serviceSendQueue();
    unsigned int initQueue(unsigned int a2);
    void dtor();
};

} // namespace gamemd
