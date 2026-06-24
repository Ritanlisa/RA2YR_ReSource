#pragma once

#include <cstdint>
#include <windows.h>

#include "fundamentals.hpp"

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
    bool IsAvailable() const;  // 0x4F6540

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
};

class IPXInterfaceClass
{
public:
    static IPXInterfaceClass* Instance;

    // unmatched: no callgraph reference and no git history record
    bool initialize();
    // design: no binary equivalent found in IDA
    void Shutdown();
    bool IsAvailable() const;  // 0x4F6540

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
};

class UDPInterfaceClass
{
public:
    static UDPInterfaceClass* Instance;

    // unmatched: no callgraph reference and no git history record
    bool initialize();
    // design: no binary equivalent found in IDA
    void Shutdown();
    bool IsAvailable() const;  // 0x4F6540

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
};

} // namespace gamemd
