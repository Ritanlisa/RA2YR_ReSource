#pragma once

#include <cstdint>
#include <windows.h>

#include "core/enums.hpp"
#include "core/vector.hpp"
#include "fundamentals.hpp"

namespace gamemd
{

class HouseClass;
struct NetworkEvent;

class ConnectionClass
{
public:
    ConnectionClass() noexcept;
    virtual ~ConnectionClass() = default;

    virtual bool  Open()                                     { return false; }
    virtual void  Close()                                    {}
    virtual bool  IsConnected() const                        { return false; }
    virtual bool  Send(const uint8_t* data, int32_t length)  { return false; }
    virtual int32_t Receive(uint8_t* buffer, int32_t maxLen)  { return 0; }
    virtual int32_t GetLatency() const                        { return 0; }
    virtual const char* GetAddress() const                    { return nullptr; }
    virtual void  OnMessageReceived(const NetworkEvent& evt)  {}
    virtual void  Flush()                                     {}
    virtual bool  IsHost() const                              { return false; }

    int32_t      PlayerIndex;
    bool         Active;
    uint32_t     LastPacketTime;
    uint32_t     PacketsSent;
    uint32_t     PacketsReceived;

    // TODO: complete ConnectionClass members
};

class IPXConnClass : public ConnectionClass
{
public:
    IPXConnClass() noexcept;
    virtual ~IPXConnClass() = default;
    virtual bool Open() override { return false; }
    // TODO: complete IPXConnClass

    uint32_t  Socket;
    uint32_t  RemoteAddress[3];
    uint16_t  RemoteSocket;
    uint8_t   padding[2];
};

class IPXManagerClass
{
public:
    IPXManagerClass() noexcept;
    static IPXManagerClass* Instance;

    bool OpenSession();
    void CloseSession();
    bool SendPacket(const uint8_t* data, int32_t length);
    int32_t ReceivePacket(uint8_t* buffer, int32_t maxLen);
    bool IsIPXAvailable() const;

    uint32_t  Socket;
    bool      Initialized;
    bool      Active;

    // TODO: complete IPXManagerClass
};

class ModemConnectionClass : public ConnectionClass
{
public:
    ModemConnectionClass() noexcept;
    virtual ~ModemConnectionClass() = default;
    virtual bool Open() override { return false; }
    // TODO: complete ModemConnectionClass

    char     PhoneNumber[64];
    bool     IsDialing;
    uint32_t BaudRate;
};

class NullModemClass : public ConnectionClass
{
public:
    NullModemClass() noexcept;
    virtual ~NullModemClass() = default;
    virtual bool Open() override { return false; }
    // TODO: complete NullModemClass
};

} // namespace gamemd
