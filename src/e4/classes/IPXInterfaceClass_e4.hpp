// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once
#include <windows.h>  // G42.36 Win32-type supply (unsigned int)


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct AnimClass;  // fix_fwd_type_supply
struct DynamicVector;  // fix_fwd_type_supply

struct IPXInterfaceClass {
#pragma pack(push, 1)  // X60: binary-packed layout
    unsigned char Socket;  // 0x0
    unsigned char q001;  // 0x1
    char __pad_2[2];  // 0x2
    char Initialized;  // 0x4
    unsigned char __pad_005;  // 0x5
    unsigned short BoundSocket;  // 0x6
    int LocalNetwork;  // 0x8
    char LocalNode[6];  // 0xC
    unsigned short tail_12;  // 0x12
    unsigned char q014;  // 0x14
    unsigned char q015;  // 0x15
    char __pad_16[2];  // 0x16
    unsigned int u32_18;  // 0x18
    unsigned int q01C;  // 0x1C
    unsigned int q020;  // 0x20
    unsigned int u32_24;  // 0x24
    unsigned int u32_28;  // 0x28
    unsigned char q02C;  // 0x2C
    unsigned char q02D;  // 0x2D
    char __pad_2E[2];  // 0x2E
    unsigned int q030;  // 0x30
    unsigned int q034;  // 0x34
    unsigned int q038;  // 0x38
    unsigned int u32_3C;  // 0x3C
    unsigned int q040;  // 0x40
    unsigned char q044;  // 0x44
    unsigned char q045;  // 0x45
    char __pad_46[6];  // 0x46
    unsigned int q04C;  // 0x4C
    char __pad_50[22];  // 0x50
    unsigned int q066;  // 0x66
    char __pad_6A[294];  // 0x6A
    unsigned char q190;  // 0x190
    char __pad_191[19];  // 0x191
    unsigned char q1A4;  // 0x1A4
    char __pad_1A5[459];  // 0x1A5
    unsigned char q370;  // 0x370
    char __pad_371[19];  // 0x371
    unsigned char q384;  // 0x384
    char __pad_385[459];  // 0x385
    unsigned char q550;  // 0x550
    char __pad_551[19];  // 0x551
    unsigned char q564;  // 0x564
    char __pad_565[659];  // 0x565
    unsigned int q7F8;  // 0x7F8
    char __pad_7FC[256084];  // 0x7FC
    unsigned int u32_3F050;  // 0x3F050
    unsigned int q3F054;  // 0x3F054
    char __pad_3F058[4];  // 0x3F058
    unsigned int u32_3F05C;  // 0x3F05C
    unsigned int u32_3F060;  // 0x3F060
    unsigned int q3F064;  // 0x3F064
    unsigned char q3F068;  // 0x3F068
    char __pad_3F069[3];  // 0x3F069
    unsigned int u32_3F06C;  // 0x3F06C
    unsigned int u32_3F070;  // 0x3F070
    unsigned int q3F074;  // 0x3F074
    unsigned int q3F078;  // 0x3F078
    char __pad_3F07C[636];  // 0x3F07C
    unsigned int u32_3F2F8;  // 0x3F2F8
    unsigned int u32_3F2FC;  // 0x3F2FC
    unsigned int u32_3F300;  // 0x3F300
    unsigned short u32_3F304;  // 0x3F304
    unsigned int u32_3F306;  // 0x3F306
    unsigned short q3F30A;  // 0x3F30A
    unsigned int u32_3F30C;  // 0x3F30C
// --- flat members (BEGIN) ---
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
#pragma pack(pop)
};

} // namespace gamemd
