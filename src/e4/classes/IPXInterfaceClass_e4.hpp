// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once
#include <windows.h>  // G42.36 Win32-type supply (SOCKET)


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct AnimClass;  // fix_fwd_type_supply
struct DynamicVector;  // fix_fwd_type_supply

struct IPXInterfaceClass {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    unsigned char __pad_0[87];  // 0x0
    unsigned char m_1[4];  // 0x1
    bool Initialized;  // 0x4
    unsigned short BoundSocket;  // 0x6
    unsigned int LocalNetwork;  // 0x8
    unsigned int u16_A;  // 0xA
    unsigned char LocalNode;  // 0xC
    bool IsAllocated;  // 0xD
    void* Count;  // 0x10
    unsigned short tail_12;  // 0x12
    unsigned int Socket;
    unsigned int q3F060;
    unsigned int q3F06C;
    unsigned int q3F074;
    unsigned int q3F2FC;
    unsigned int q3F300;
    unsigned int u32_18;
    unsigned int u32_24;
    unsigned int u32_3F2FC;
    unsigned int u32_3F300;
    unsigned int u32_3F304;
    unsigned short m_10;  // 0x10
    unsigned int u32_3F30A;
    unsigned int u32_7E0F0;
    unsigned int u32_7E60C;
    unsigned int u32_CA340;
    unsigned int u32_CA344;
    unsigned int u32_FC1D0;
    unsigned int BoundPort;
    unsigned int u32_1C;
    unsigned int u32_28;
    unsigned int u32_4;
    unsigned int u32_44;
    unsigned int u32_45;
    unsigned int u32_8;
    unsigned int u32_80;
    unsigned int u32_81;
    unsigned int u32_C;
    unsigned int BoundPort8;
    unsigned int BoundPort9;
    unsigned int u32_30;
    unsigned int u32_34;
    unsigned int u32_38;
    unsigned int u32_3C;
    unsigned int u32_3F06C;
    unsigned int u32_3F070;
    unsigned int u32_40;
    unsigned int u32_48;
    unsigned int u32_4C;
    unsigned int u32_3F050;
    unsigned int u32_3F054;
    unsigned int u32_3F05C;
    unsigned int u32_3F060;
    unsigned int u32_3F064;
    unsigned int u32_FC1A0;
    unsigned int Destru_vt14;
    unsigned int LocalNode6;
    unsigned int q018;
    unsigned int q0208;
    unsigned int q3F070;
    unsigned int u32_42;
    unsigned int q3F050;
    unsigned int q3F05C;
    unsigned int __pad_09A;
    unsigned int u32_2A0;
    unsigned int __pad_04C;
    unsigned int q048;
    unsigned int u32_204;
    unsigned int m_C;  // 0xC
    unsigned int m_8;  // 0x8
// --- flat members (END) ---
    AbstractClass * * Receive();
    AbstractClass * * SendPacket(ObjectClass * aP1, int a3, int a4, unsigned int fromlen);
    AbstractClass * * getSocketState(int a2, unsigned int * a3);
    int initSocket(int aP1, int aP2);
    int AddRef(void *a1);
    __int16 Connect(const void * a1, unsigned int a3, char aP3);  // G42.40f-d truth 0x7B24E0
    DynamicVector * closeSession(char a2);
    IPXInterfaceClass * QueryInterface(char a2, int a1, int a3, int a4, int aP1);
    char ReceivePacket(char * name, AnimClass * aP1);
    int COMStub_Ret1139(int a1);
    int COMStub_Return0();
    int COMStub_Return1();
    int GetAddress(unsigned int s, void *a2, void *a3, void *a4);  // G42.40f-b: canonical type (gamemd::SOCKET not visible in all TU orders)
    int GetLocalAddress(int a2);
    int Send(int a1, void *a2, void *a3, void *a4, void *a5);
    int SetAddress(unsigned int * a1);
    int initSession(unsigned int * a2);
    unsigned char * processPacket(void *a1);
    int Construct(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6);
    unsigned int resetSocket(int a2);
    void * bindSocket(void *a1);
    void Disconnect();
    void GetQueueSize();
    void StubReturnFalse(int a1, int a2);
    void getSocketCount();
    // G42.40f: duplicate removed - unqualified SOCKET inside gamemd == gamemd::SOCKET (same as decl above)
};

} // namespace gamemd
