// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct NullModemClass {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    AbstractClass* PlayerIndex;  // 0x4 [X30:type_map]
    unsigned int m_5;  // 0x5
    String* Active;  // 0x8 [X30:type_map]
    void* LastPacketTime;  // 0xC
    void* PacketsSent;  // 0x10
    void* PacketsReceived;  // 0x14
// --- flat members (END) ---
    int COMStub();
    int COMStub_Return0(int a1);
    int CheckStatus();
    int Disconnect(int a2, int a3, int a4);
    int Flush(int a2);
    int GetAddress(int a2);
    int GetMember23();
    int Receive();
    int Release(int a2, int a3, int a4, int a5);
    int Send();
    int SetAddress(int a2);
    int ddtor(int a2, int a3, int a4);
    int receiveData();
    int sendData();
    void * QueryInterface(char a2, int a1, int a3, int a4, int a5);
    unsigned int *q000;  // 0x0 (offset-truth)
    unsigned int u32_1C;  // 0x1C (offset-truth)
    void* u32_34;  // 0x34 (offset-truth) [X30:type_map]
    void* u32_38;  // 0x38 (offset-truth) [X30:type_map]
    unsigned int u32_3C;  // 0x3C (offset-truth)
    unsigned char u32_51;  // 0x51 (offset-truth)
    unsigned int u32_5C;  // 0x5C (offset-truth)
    unsigned int u32_68;  // 0x68 (offset-truth)

    BlowStraw* q050;  // X10 supply (member_lookup)
    AnimClass* q206C;  // X10 supply (member_lookup)
    int u32_20;  // X10 supply (member_lookup)

    unsigned int u32_4C;  // X10 supply (member_lookup)
};

} // namespace gamemd
