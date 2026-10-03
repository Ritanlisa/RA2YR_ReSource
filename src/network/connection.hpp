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
    virtual ULONG   __stdcall AddRef();
    virtual ULONG   __stdcall Release();

    virtual ~ConnectionClass();  // 0x48BEE0

    virtual bool  Open();
    virtual void  Close();
    virtual bool  IsConnected() const;
    virtual bool  Send(const uint8_t*, int32_t);
    virtual int32_t Receive(uint8_t*, int32_t);
    // unmatched: no callgraph reference and no git history record
    virtual int32_t GetLatency() const;
    virtual const char* GetAddress() const;
    // unmatched: no callgraph reference and no git history record
    virtual void  OnMessageReceived(const NetworkEvent&);
    // wrapper: delegates to IPXManagerClass::GetAddress at 0x542350
    virtual void  Flush();
    // unmatched: no callgraph reference and no git history record
    virtual bool  IsHost() const;

    int queueSendPacket(const void* a2, int32_t a3, const void* a4, int32_t a5, int16_t a6); // 0x48B410 (G42.35e: 5-param int-return per ida truth)
    void* allocPacketSlot();                                                                  // 0x48B750
    uint32_t initQueue(uint32_t);                                                             // 0x48BA10
    void sendAck();  // 0x48BF40
    void receivePacket();                                                                     // 0x48C040
    void processTileUpdate();                                                                 // 0x48C320
    void serviceSendQueue();                                                                  // 0x48C3E0
    int connect();                                                                           // 0x48C5A0

    static ConnectionClass* Instance;                                                         // data: 0xA8B7C0

    int32_t      PlayerIndex;
    bool         Active;
    uint32_t     LastPacketTime;
    uint32_t     PacketsSent;
    uint32_t     PacketsReceived;
    public:  // symbol-anchor
    // === SYMBOL-ANCHOR (BEGIN) ===
    int GetSpeed();  // 0x5422f0 -- Connection::GetSpeed
    // === SYMBOL-ANCHOR (END) ===
};

// CSP: IPXConnClass matched via T1+T3
class IPXConnClass : public ConnectionClass
{
public:
    IPXConnClass() noexcept;                              // 0x53F430
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~IPXConnClass();
    virtual bool Open() override; // 0x69BC20

virtual unsigned int * QueryInterface(char,int,int,int);  // 0x53F850
    bool initConnection(int a2, int a3, int a4, short a5, int a6, int a7, int a8, int a9, int a1);  // 0x48BE60 (G42.35e: 9-param per def/ida)
    bool closeConnection(int a2, int a1, int a3, int a4, int a5, int a6, int a7);  // 0x69BC20 (G42.35e: 7-param per def/ida)
    bool send(int a2, int a3, int a4, int a5, int a6, int a7);
    int receive(int a2, int a3, int *a4, int **a5, int a6, int a7);

    uint32_t  Socket;
    uint32_t  RemoteAddress[3];
    uint16_t  RemoteSocket;
    uint8_t   padding[2];
};

// CSP: IPXManagerClass matched via T1
class IPXManagerClass
{
public:
    IPXManagerClass() noexcept;
    static IPXManagerClass* Instance;                                  // data: 0xA8EBE4

int Init(int,int,int,int,int,int);  // 0x48BA90
    // wrapper: delegates to IPXManagerClass::init at 0x48BA90
    bool OpenSession();
    void CloseSession();
    bool SendPacket(const uint8_t*, int32_t);                          // 0x540D80
    int32_t ReceivePacket(uint8_t*, int32_t);                          // 0x541070
    bool IsIPXAvailable() const;

    int init();  // 0x48BA90
    int processPacket();                                             // 0x5409F0
    IPXConnClass* createConnection();                                 // 0x540D40
    void destroyConnection(IPXConnClass*);                             // 0x540D60
int release(int,int,int,int);  // 0x5414C0
    int32_t GetConnectionCount();                                      // 0x542330
    int GetAddress(int a2);  // 0x542350
    int SetAddress(int a2);                                     // 0x5423C0
    uint32_t GetQueueSize();                                          // 0x542450
    int32_t CheckStatus();  // 0x5424A0
    int ProcessQueue();                                              // 0x542520
    void Flush();                                                     // 0x542EC0
    int32_t getPlayerName();                                          // 0x543100

    uint32_t  Socket;
    bool      Initialized;
    bool      Active;
    public:  // symbol-anchor
    // === SYMBOL-ANCHOR (BEGIN) ===
    int send(int a1);  // 0x541040 -- IPXManagerClass::send
    int ddtor(int a1, int a2, int a3);  // 0x5415f0 -- IPXManagerClass::ddtor
    void* QueryInterface(int a1);  // 0x5430e0 -- IPXManagerClass::QueryInterface
    // === SYMBOL-ANCHOR (END) ===
};

class ModemConnectionClass : public ConnectionClass
{
public:
    ModemConnectionClass() noexcept;                        // 0x5F16E0
    virtual ~ModemConnectionClass();
    virtual bool Open() override; // 0x5F1BC0

    bool Init();
    bool Connect();
    void FlushCom();
    bool SendPacket(const uint8_t*, int32_t);
    bool DetectModem();
    bool Negotiate();

    char     PhoneNumber[64];
    bool     IsDialing;
    uint32_t BaudRate;
};

class NullModemClass : public ConnectionClass
{
public:
    NullModemClass() noexcept;
    virtual ~NullModemClass();  // 0x5F35A0
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

    public:  // symbol-anchor
    // === SYMBOL-ANCHOR (BEGIN) ===
    int Flush(int a1);  // 0x5f1f00 -- NullModemClass::Flush
    int Disconnect(int a1, int a2, int a3);  // 0x5f3540 -- NullModemClass::Disconnect
    int Release(int a1, int a2, int a3, int a4);  // 0x5f3560 -- NullModemClass::Release
    int Receive();  // 0x5f35d0 -- NullModemClass::Receive
    int CheckStatus();  // 0x5f35f0 -- NullModemClass::CheckStatus
    int GetAddress(int a1);  // 0x5f3610 -- NullModemClass::GetAddress
    int SetAddress(int a1);  // 0x5f3630 -- NullModemClass::SetAddress
    void* QueryInterface(int a1);  // 0x5f3650 -- NullModemClass::QueryInterface
    int sendData();  // 0x774670 -- NullModemClass::sendData
    int receiveData();  // 0x7747c0 -- NullModemClass::receiveData
    // === SYMBOL-ANCHOR (END) ===
};

} // namespace gamemd
