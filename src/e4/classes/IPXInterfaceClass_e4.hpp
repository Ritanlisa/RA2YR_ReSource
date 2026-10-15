// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once
#include <windows.h>  // G42.36 Win32-type supply (unsigned int)


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct AnimClass;  // fix_fwd_type_supply
struct DynamicVector;  // fix_fwd_type_supply

struct IPXInterfaceClass {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    bool Initialized;  // 0x4
    unsigned short BoundSocket;  // 0x6
    unsigned int LocalNetwork;  // 0x8
    unsigned char LocalNode;  // 0xC
    bool IsAllocated;  // 0xD
    void* Count;  // 0x10
    unsigned short tail_12;  // 0x12
// --- flat members (END) ---
    AbstractClass * * Receive();
    AbstractClass * * SendPacket(ObjectClass * aP1, int a3, int a4, unsigned int fromlen);
    AbstractClass * * getSocketState(int a2, unsigned int * a3);
    int initSocket(int aP1, int aP2, void *a3 = 0);
    int AddRef(void *a1);
    int16_t Connect(const void * a1, unsigned int a3, char aP3);  // G42.40f-d truth 0x7B24E0
    DynamicVector * closeSession(char a2);
    IPXInterfaceClass * QueryInterface(char a2, int a1, int a3, int a4, int aP1);
    char ReceivePacket(char * name, AnimClass * aP1);
    int COMStub_Ret1139(int a1);
    int COMStub_Return0();
    int COMStub_Return1();
    int GetAddress(unsigned int s, void *a2, void *a3, void *a4);
    int GetLocalAddress(int a2);
    int Send(int a1, void *a2, void *a3, void *a4, void *a5);
    int SetAddress(unsigned int * a1);
    int initSession(unsigned int * a2);
    static unsigned char * processPacket(void *a1);
    int Construct(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7 = 0, void *a8 = 0, void *a9 = 0);
    unsigned int resetSocket(int a2);
    void * bindSocket(void *a1);
    void Disconnect();
    void GetQueueSize();
    void StubReturnFalse(int a1, int a2);
    void getSocketCount();
    unsigned int q_70;  // +0x70 flat supply (P5 provenance)
    unsigned int q_30;  // +0x30 flat supply (P5 provenance)
    unsigned int q_40;  // +0x40 flat supply (P5 provenance)

    uint32_t Socket;  // X10 supply (member_types)
    unsigned char __pad_048;  // X10 supply (member_lookup)
    unsigned int q020;  // X10 supply (member_lookup)
    int q034;  // X10 supply (member_lookup)
    unsigned char q3F078;  // X10 supply (member_lookup)
    int u32_18;  // X10 supply (member_lookup)
    unsigned int u32_24;  // X10 supply (member_lookup)
    unsigned int u32_28;  // X10 supply (member_types)
    unsigned int u32_2D;  // X10 supply (member_types)
    unsigned int u32_38;  // X10 supply (member_types)
    unsigned int u32_3C;  // X10 supply (member_types)
    unsigned int u32_3F050;  // X10 supply (member_lookup)
    unsigned int u32_3F05C;  // X10 supply (member_lookup)
    unsigned int u32_3F060;  // X10 supply (member_lookup)
    unsigned int u32_3F06C;  // X10 supply (member_lookup)
    int u32_3F070;  // X10 supply (member_lookup)
    int u32_3F2F8;  // X10 supply (member_lookup)
    unsigned int u32_3F2FC;  // X10 supply (member_lookup)
    unsigned int u32_3F300;  // X10 supply (member_lookup)
    unsigned int u32_3F304;  // X10 supply (member_lookup)
    int u32_3F306;  // X10 supply (member_lookup)
    unsigned int u32_3F30C;  // X10 supply (member_lookup)
    unsigned int u32_45;  // X10 supply (member_types)
    int u32_4C;  // X10 supply (member_lookup)
    unsigned char __pad_005;  // 0x5 [X30:canon]
    unsigned int BoundPort;  // [X30:default]
    unsigned int Capacity;  // [X30:default]
    unsigned int IsInitialized;  // [X30:default]
    unsigned int Items;  // [X30:default]
unsigned int __pad_0;  // 0x0 [X35-L7 kind=unsigned int]
    unsigned int q3F074;  // [X30:default]
};

} // namespace gamemd
