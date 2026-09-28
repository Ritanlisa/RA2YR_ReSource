// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct IPXInterfaceClass {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    bool Initialized;  // 0x4
    unsigned short BoundSocket;  // 0x6
    unsigned int LocalNetwork;  // 0x8
    unsigned int u16_A;  // 0xA
    unsigned char LocalNode;  // 0xC
    bool IsAllocated;  // 0xD
    void* Count;  // 0x10
    unsigned short tail_12;  // 0x12
// --- flat members (END) ---
    AbstractClass * * Receive();
    AbstractClass * * SendPacket(ObjectClass * aP1, int a3, int a4, unsigned int fromlen);
    AbstractClass * * getSocketState(int a2, unsigned int * a3);
    AbstractClass * * initSocket(void* aP1, Color * aP2);
    AnimClass * * AddRef();
    AnimClass * * Connect(const void * a1, unsigned int a3, UDPInterfaceClass * aP3);
    DynamicVector * closeSession(char a2);
    IPXInterfaceClass * QueryInterface(char a2);
    char ReceivePacket(char * name, AnimClass * aP1);
    int COMStub_Ret1139(int a1);
    int COMStub_Return0();
    int COMStub_Return1();
    int GetAddress(SOCKET s);
    int GetLocalAddress(int a2);
    int Send(int a1);
    int SetAddress(unsigned int * a1);
    int initSession(unsigned int * a2);
    unsigned char * processPacket();
    unsigned int * Construct();
    unsigned int resetSocket(int a2);
    void * bindSocket();
    void Disconnect();
    void GetQueueSize();
    void StubReturnFalse(int a1, int a2);
    void getSocketCount();
};

} // namespace gamemd
