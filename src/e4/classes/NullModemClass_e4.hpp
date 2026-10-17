// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct NullModemClass {
    void* vtable1;  // 0x0
    int PlayerIndex;  // 0x4
    char Active[1];  // 0x8
    char __pad_9[3];  // 0x9
    void* LastPacketTime;  // 0xC
    void* PacketsSent;  // 0x10
    void* PacketsReceived;  // 0x14
// --- flat members (BEGIN) ---
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
};

} // namespace gamemd
