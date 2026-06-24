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
    ConnectionClass() noexcept;                          // 0x48BE60

    virtual HRESULT __stdcall QueryInterface(const IID&, void**); // 0x48C650
    virtual ULONG   __stdcall AddRef(); // 0x48BF10
    virtual ULONG   __stdcall Release(); // 0x48BF40

    virtual ~ConnectionClass() = default;                                                    // 0x48BEE0

    virtual bool  Open(); // 0x48C590
    virtual void  Close();  // 0x543090
    virtual bool  IsConnected() const;  // 0x5E2BE0
    virtual bool  Send(const uint8_t*, int32_t); // 0x53F5D0
    virtual int32_t Receive(uint8_t*, int32_t); // 0x53F650
    // unmatched: no callgraph reference and no git history record
    virtual int32_t GetLatency() const;
    virtual const char* GetAddress() const; // 0x542350
    // unmatched: no callgraph reference and no git history record
    virtual void  OnMessageReceived(const NetworkEvent&);
    // wrapper: delegates to IPXManagerClass::GetAddress at 0x542350
    virtual void  Flush();
    // unmatched: no callgraph reference and no git history record
    virtual bool  IsHost() const;

    void queueSendPacket(const uint8_t*, int32_t, int32_t);                                   // 0x48B410
    void* allocPacketSlot();                                                                  // 0x48B750
    uint32_t initQueue(uint32_t);                                                             // 0x48BA10
    void sendAck();  // 0x48BF40
    void receivePacket();                                                                     // 0x48C040
    void processTileUpdate();                                                                 // 0x48C320
    void serviceSendQueue();                                                                  // 0x48C3E0
    bool connect();                                                                           // 0x48C5A0

    static ConnectionClass* Instance;                                                         // data: 0xA8B7C0

    int32_t      PlayerIndex;
    bool         Active;
    uint32_t     LastPacketTime;
    uint32_t     PacketsSent;
    uint32_t     PacketsReceived;
};

class IPXConnClass : public ConnectionClass
{
public:
    IPXConnClass() noexcept;                              // 0x53F430
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~IPXConnClass() = default;
    virtual bool Open() override; // 0x69BC20

    virtual HRESULT __stdcall QueryInterface(const IID&, void**) override; // 0x53F850
    bool initConnection();  // 0x48BE60
    bool closeConnection();  // 0x69BC20
    bool send(const uint8_t*, int32_t);  // 0x53F5D0
    int32_t receive(uint8_t*, int32_t);  // 0x53F650

    uint32_t  Socket;
    uint32_t  RemoteAddress[3];
    uint16_t  RemoteSocket;
    uint8_t   padding[2];
};

class IPXManagerClass
{
public:
    IPXManagerClass() noexcept;                                       // 0x542FE0
    static IPXManagerClass* Instance;                                  // data: 0xA8EBE4

    void Init();  // 0x48BA90
    // wrapper: delegates to IPXManagerClass::init at 0x48BA90
    bool OpenSession();
    void CloseSession();                                              // 0x5414C0
    bool SendPacket(const uint8_t*, int32_t);                          // 0x540D80
    int32_t ReceivePacket(uint8_t*, int32_t);                          // 0x541070
    bool IsIPXAvailable() const;                                       // 0x5424A0

    void init();  // 0x48BA90
    void processPacket();                                             // 0x5409F0
    IPXConnClass* createConnection();                                 // 0x540D40
    void destroyConnection(IPXConnClass*);                             // 0x540D60
    void release();  // 0x5414C0
    int32_t GetConnectionCount();                                      // 0x542330
    const char* GetAddress(char*);  // 0x542350
    void SetAddress(const char*);                                     // 0x5423C0
    uint32_t GetQueueSize();                                          // 0x542450
    int32_t CheckStatus();  // 0x5424A0
    void ProcessQueue();                                              // 0x542520
    void Flush();                                                     // 0x542EC0
    int32_t getPlayerName();                                          // 0x543100

    uint32_t  Socket;
    bool      Initialized;
    bool      Active;
};

class ModemConnectionClass : public ConnectionClass
{
public:
    ModemConnectionClass() noexcept;                        // 0x5F16E0
    virtual ~ModemConnectionClass() = default;
    virtual bool Open() override; // 0x5F1BC0

    bool Init();  // 0x542fe0
    bool Connect();  // 0x48C5A0
    void FlushCom();                                        // 0x5F1F00
    bool SendPacket(const uint8_t*, int32_t);                // 0x5F1F70
    bool DetectModem();                                     // 0x5F1FA0
    bool Negotiate();                                       // 0x5F3170

    char     PhoneNumber[64];
    bool     IsDialing;
    uint32_t BaudRate;
};

class NullModemClass : public ConnectionClass
{
public:
    NullModemClass() noexcept;
    virtual ~NullModemClass() = default;  // 0x5F35A0
    // wrapper: delegates to NullModemClass::ddtor at 0x5F35A0
    virtual bool Open() override;

    bool initConnection();                                  // 0x5EF100
    bool closeConnection();                                 // 0x5EF170
    bool Init();  // 0x5F16E0
    bool Connect();  // 0x5F1BC0
    // wrapper: delegates to NullModemClass::Connect at 0x5F1BC0
    void FlushCom();
    bool SendPacket(const uint8_t*, int32_t);  // 0x5F1F70
    bool DetectModem();  // 0x5F1FA0
    bool Negotiate();  // 0x5F3170

};

} // namespace gamemd
