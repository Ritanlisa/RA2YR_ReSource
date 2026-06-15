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

    bool initialize();
    void Shutdown();
    bool IsAvailable() const;

    bool CreateSocket();
    void CloseSocket();
    bool Bind(uint16_t port);
    bool SendTo(uint32_t address, uint16_t port, const uint8_t* data, int32_t length);
    int32_t ReceiveFrom(uint8_t* buffer, int32_t maxLen, uint32_t* outAddress, uint16_t* outPort);
    bool SetNonBlocking(bool nonBlock);
    bool JoinMulticastGroup(uint32_t groupAddress);

    uint32_t  Socket;
    bool      Initialized;
    uint16_t  BoundPort;
    uint32_t  LocalAddress;

    // TODO: complete WinsockInterfaceClass

protected:
    WinsockInterfaceClass() noexcept;
    ~WinsockInterfaceClass() noexcept;
};

class IPXInterfaceClass
{
public:
    static IPXInterfaceClass* Instance;

    bool initialize();
    void Shutdown();
    bool IsAvailable() const;

    bool CreateSocket();
    void CloseSocket();
    bool Bind(uint32_t network, const uint8_t node[6], uint16_t socket);
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

    bool initialize();
    void Shutdown();
    bool IsAvailable() const;

    bool CreateSocket(uint16_t port);
    void CloseSocket();
    bool SendTo(const char* address, uint16_t port, const uint8_t* data, int32_t length);
    int32_t ReceiveFrom(uint8_t* buffer, int32_t maxLen, char* outAddress, int32_t addrSize, uint16_t* outPort);
    bool SetNonBlocking(bool nonBlock);
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
