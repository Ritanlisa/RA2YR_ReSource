// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct NullModemClass {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    int PlayerIndex;  // 0x4
    unsigned int q8;  // 0x8
    bool q00A;  // 0xA
    bool q00B;  // 0xB
    void* LastPacketTime;  // 0xC
    unsigned int q10;  // 0x10
    void* PacketsReceived;  // 0x14
    unsigned int Active3;
    unsigned int ConnectionClass;
    unsigned int PlayerIndex4;
    unsigned int PlayerIndex9;
    unsigned int u32_1C;
    unsigned int u32_34;
    unsigned int u32_38;
    unsigned int u32_3C;
    unsigned int u32_51;
    unsigned int u32_5C;
    unsigned int u32_68;
    unsigned int PacketsSent;
    unsigned int Debug;
// --- flat members (END) ---
    int COMStub();
    int COMStub_Return0(int a1);
    int CheckStatus();
    int Disconnect(int a2, int a3, int a4);
    int Flush(int a2);
    void GetAddress(int a2);
    int GetMember23();
    int Receive();
    int Release(int a2, int a3, int a4, int a5);
    int Send(int a1, void *a2 = 0, void *a3 = 0, void *a4 = 0, void *a5 = 0);
    int SetAddress(int a2);
    int ddtor(int a2, int a3, int a4);
    int receiveData();
    int sendData();
    void * QueryInterface(char a2);
};

} // namespace gamemd
