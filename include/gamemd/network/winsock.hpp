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

    bool initialize(); // IDA: UNMATCHED — no_callgraph_match, no_git_history
    void Shutdown(); // IDA: NOT_FOUND
    bool IsAvailable() const;  // 0x4F6540

    bool CreateSocket(); // IDA: NOT_FOUND
    void CloseSocket();  // 0x7C8992
    bool Bind(uint16_t port);  // 0x7C8998
    bool SendTo(uint32_t address, uint16_t port, const uint8_t* data, int32_t length);  // 0x7C89B0
    int32_t ReceiveFrom(uint8_t* buffer, int32_t maxLen, uint32_t* outAddress, uint16_t* outPort); // IDA: UNMATCHED — no_callgraph_match, no_git_history
    bool SetNonBlocking(bool nonBlock); // IDA: UNMATCHED — no_callgraph_match, no_git_history
    bool JoinMulticastGroup(uint32_t groupAddress); // IDA: UNMATCHED — no_callgraph_match, no_git_history

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

    bool initialize(); // IDA: UNMATCHED — no_callgraph_match, no_git_history
    void Shutdown(); // IDA: NOT_FOUND
    bool IsAvailable() const;  // 0x4F6540

    bool CreateSocket(); // IDA: NOT_FOUND
    void CloseSocket();  // 0x7C8992
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

    bool initialize(); // IDA: UNMATCHED — no_callgraph_match, no_git_history
    void Shutdown(); // IDA: NOT_FOUND
    bool IsAvailable() const;  // 0x4F6540

    bool CreateSocket(uint16_t port); // IDA: UNMATCHED — no_callgraph_match, no_git_history
    void CloseSocket();  // 0x7C8992
    bool SendTo(const char* address, uint16_t port, const uint8_t* data, int32_t length);  // 0x7C89B0
    int32_t ReceiveFrom(uint8_t* buffer, int32_t maxLen, char* outAddress, int32_t addrSize, uint16_t* outPort); // IDA: NOT_FOUND
    bool SetNonBlocking(bool nonBlock); // IDA: UNMATCHED — no_callgraph_match, no_git_history
    bool SetBroadcast(bool enable); // IDA: UNMATCHED — no_callgraph_match, no_git_history

    uint32_t  Socket;
    bool      Initialized;
    uint16_t  BoundPort;

    // TODO: complete UDPInterfaceClass

protected:
    UDPInterfaceClass() noexcept;
    ~UDPInterfaceClass() noexcept;
};

} // namespace gamemd
