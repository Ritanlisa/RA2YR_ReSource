#pragma once

#include <cstdint>
#include <windows.h>

#include "fundamentals.hpp"
#include "network/network_ext.hpp"  // G42.55 closure (Socket)

namespace gamemd
{

class WinsockInterfaceClass
{
public:
    static WinsockInterfaceClass* Instance;

    // unmatched: no callgraph reference and no git history record
    bool initialize();
    // design: no binary equivalent found in IDA
    void Shutdown();
    bool IsAvailable() const;

    // wrapper: delegates to SuperWeaponTypeClass::IsAvailable at 0x4F6540
    bool CreateSocket();
    void CloseSocket();
    bool Bind(uint16_t port);
    bool SendTo(uint32_t address, uint16_t port, const uint8_t* data, int32_t length);
    // unmatched: no callgraph reference and no git history record
    int32_t ReceiveFrom(uint8_t* buffer, int32_t maxLen, uint32_t* outAddress, uint16_t* outPort);
    // unmatched: no callgraph reference and no git history record
    bool SetNonBlocking(bool nonBlock);
    // unmatched: no callgraph reference and no git history record
    bool JoinMulticastGroup(uint32_t groupAddress);

    uint32_t  Socket;
    bool      Initialized;
    uint16_t  BoundPort;
    uint32_t  LocalAddress;

    // TODO: complete WinsockInterfaceClass

protected:
    WinsockInterfaceClass() noexcept; // 0x7B1AB0
    ~WinsockInterfaceClass() noexcept; // 0x7B1AB0
    public:  // symbol-anchor
    // === SYMBOL-ANCHOR (BEGIN) ===
    void* ProcessPacket(int a1);  // 0x770270 -- WinsockInterface::ProcessPacket
    // === SYMBOL-ANCHOR (END) ===


    unsigned int u32_3F068;  // 0x3F068 [X55 W3 supply (render vocab)]
    int u32_10;  // 0x10 [X55 W3 supply (render vocab)]
    unsigned int u32_3C;  // 0x3C [X55 W3 supply (render vocab)]
    unsigned int u32_45;  // 0x45 [X55 W3 supply (render vocab)]
    unsigned int u32_24;  // 0x24 [X55 W3 supply (render vocab)]
    unsigned int u32_2D;  // 0x2D [X55 W3 supply (render vocab)]
    unsigned int u32_C;  // 0xC [X55 W3 supply (render vocab)]
    unsigned int u32_15;  // 0x15 [X55 W3 supply (render vocab)]
    int u32_38;  // 0x38 [X55 W3 supply (render vocab)]
    int u32_40;  // 0x40 [X55 W3 supply (render vocab)]
    int u32_20;  // 0x20 [X55 W3 supply (render vocab)]
    int u32_28;  // 0x28 [X55 W3 supply (render vocab)]
    int __pad_008;  // 0x8 [X55 W3 supply (render vocab)]
};

// CSP: IPXInterfaceClass matched via T1
class IPXInterfaceClass
{
public:
    static IPXInterfaceClass* Instance;

    // unmatched: no callgraph reference and no git history record
    bool initialize();
    // design: no binary equivalent found in IDA
    void Shutdown();
    bool IsAvailable() const;

    // wrapper: delegates to SuperWeaponTypeClass::IsAvailable at 0x4F6540
    bool CreateSocket();
    void CloseSocket();
    bool Bind(uint32_t network, const uint8_t node[6], uint16_t socket);  // 0x7B10C0
    bool SendTo(uint32_t destNetwork, const uint8_t destNode[6], uint16_t destSocket,
                const uint8_t* data, int32_t length);
    int32_t ReceiveFrom(uint8_t* buffer, int32_t maxLen,
                        uint32_t* outNetwork, uint8_t outNode[6], uint16_t* outSocket);

    uint32_t  Socket;
    bool      Initialized;
    uint16_t  BoundSocket;
    uint32_t  LocalNetwork;
    uint8_t   LocalNode[6];

    // TODO: complete IPXInterfaceClass

protected:
    IPXInterfaceClass() noexcept;
    ~IPXInterfaceClass() noexcept;
    public:  // symbol-anchor
    // === SYMBOL-ANCHOR (BEGIN) ===
    int initSocket(int a1, int a2);  // 0x7b0dd0 -- IPXInterfaceClass::initSocket
    int SendPacket(int a1, int a2, int a3, int a4);  // 0x7b13d0 -- IPXInterfaceClass::SendPacket
    int GetLocalAddress(int a1);  // 0x7b1760 -- IPXInterfaceClass::GetLocalAddress
    void* QueryInterface(int a1);  // 0x7b1790 -- IPXInterfaceClass::QueryInterface
    void* bindSocket();  // 0x7b19c0 -- IPXInterfaceClass::bindSocket
    int AddRef();  // 0x7b1b80 -- IPXInterfaceClass::AddRef
    int Receive();  // 0x7b1bc0 -- IPXInterfaceClass::Receive
    void Disconnect();  // 0x7b1ca0 -- IPXInterfaceClass::Disconnect
    void* processPacket();  // 0x7b2240 -- IPXInterfaceClass::processPacket
    int Connect(int a1, int a2, int a3);  // 0x7b24e0 -- IPXInterfaceClass::Connect
    void getSocketCount();  // 0x7b2840 -- IPXInterfaceClass::getSocketCount
    int resetSocket(int a1);  // 0x7b2870 -- IPXInterfaceClass::resetSocket
    int getSocketState(int a1, int a2);  // 0x7b2a20 -- IPXInterfaceClass::getSocketState
    int initSession(int a1);  // 0x7b2ad0 -- IPXInterfaceClass::initSession
    void* closeSession(int a1);  // 0x7b2b50 -- IPXInterfaceClass::closeSession
    // === SYMBOL-ANCHOR (END) ===
    public:  // funcs-move
    // === FUNCS-MOVE (BEGIN) ===
    int COMStub_Ret1139(int a1);  // 0x7b1780
    int SetAddress(int a1);  // 0x7b1fd0
    int GetAddress();  // 0x7b25e0
    int ReceivePacket(int a1, int a2);  // 0x7b26d0
    // === FUNCS-MOVE (END) ===
};

class UDPInterfaceClass
{
public:
    static UDPInterfaceClass* Instance;

    // unmatched: no callgraph reference and no git history record
    bool initialize();
    // design: no binary equivalent found in IDA
    void Shutdown();
    bool IsAvailable() const;

    // unmatched: no callgraph reference and no git history record
    bool CreateSocket(uint16_t port);
    void CloseSocket();
    bool SendTo(const char* address, uint16_t port, const uint8_t* data, int32_t length);
    // wrapper: delegates to sendto at 0x7C89B0
    int32_t ReceiveFrom(uint8_t* buffer, int32_t maxLen, char* outAddress, int32_t addrSize, uint16_t* outPort);
    // unmatched: no callgraph reference and no git history record
    bool SetNonBlocking(bool nonBlock);
    // unmatched: no callgraph reference and no git history record
    bool SetBroadcast(bool enable);

    uint32_t  Socket;
    bool      Initialized;
    uint16_t  BoundPort;

    // TODO: complete UDPInterfaceClass

protected:
    UDPInterfaceClass() noexcept;
    ~UDPInterfaceClass() noexcept;
    public:  // symbol-anchor
    // === SYMBOL-ANCHOR (BEGIN) ===
    int connect();  // 0x7b1b50 -- UDPInterfaceClass::connect
    void CheckStatus(int a1);  // 0x7b3310 -- UDPInterfaceClass::CheckStatus
    void GetStatistics(int a1);  // 0x7b33d0 -- UDPInterfaceClass::GetStatistics
    int Flush();  // 0x7b3a20 -- UDPInterfaceClass::Flush
    int ProcessSocketIO();  // 0x7b3aa0 -- UDPInterfaceClass::ProcessSocketIO
    int Connect(int a1);  // 0x7b4150 -- UDPInterfaceClass::Connect
    int Receive();  // 0x7b4160 -- UDPInterfaceClass::Receive
    void disconnect();  // 0x7b42c0 -- UDPInterfaceClass::disconnect
    int reset(int a1);  // 0x7b42f0 -- UDPInterfaceClass::reset
    int flush(int a1, int a2);  // 0x7b44a0 -- UDPInterfaceClass::flush
    int sendPacket(int a1);  // 0x7b4550 -- UDPInterfaceClass::sendPacket
    void* receivePacket(int a1);  // 0x7b45d0 -- UDPInterfaceClass::receivePacket
    // === SYMBOL-ANCHOR (END) ===


    int u32_48;  // 0x48 [X55 W3 supply (render vocab)]
    int u32_30;  // 0x30 [X55 W3 supply (render vocab)]
    unsigned int m_C;  // 0xC [X55 W3 supply (render vocab)]
    unsigned int u32_3C;  // 0x3C [X55 W3 supply (render vocab)]
    int u32_24;  // 0x24 [X55 W3 supply (render vocab)]
    unsigned int m_8;  // 0x8 [X55 W3 supply (render vocab)]
    unsigned int u32_3F300;  // 0x3F300 [X55 W3 supply (render vocab)]
    int q010;  // 0x10 [X55 W3 supply (render vocab)]
    unsigned int u32_3F06C;  // 0x3F06C [X55 W3 supply (render vocab)]
    unsigned int u32_3F070;  // 0x3F070 [X55 W3 supply (render vocab)]
    unsigned int u32_3F560;  // 0x3F560 [X55 W3 supply (render vocab)]
    unsigned int u32_3F060;  // 0x3F060 [X55 W3 supply (render vocab)]
    int q018;  // 0x18 [X55 W3 supply (render vocab)]
    unsigned int u32_3F568;  // 0x3F568 [X55 W3 supply (render vocab)]
    unsigned int u32_3F56C;  // 0x3F56C [X55 W3 supply (render vocab)]
    unsigned int u32_3F5AC;  // 0x3F5AC [X55 W3 supply (render vocab)]
    unsigned int u32_3F064;  // 0x3F064 [X55 W3 supply (render vocab)]
};

} // namespace gamemd
