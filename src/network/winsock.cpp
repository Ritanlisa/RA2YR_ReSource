#include "network/winsock.hpp"
#include "e4/classes/Socket_e4.hpp"
#include "core/logging.hpp"
#define _WINSOCK_DEPRECATED_NO_WARNINGS
#include <winsock2.h>
#include <cstring>
#include "e4/classes/WinsockInterface_e4.hpp"
#include "e4/classes/Init_e4.hpp"
#include "e4/classes/Debug_e4.hpp"

#pragma comment(lib, "ws2_32.lib")

namespace gamemd
{

// ============================================================================
// WinsockInterfaceClass — IDA 0x7B1DE0 Init, 0x7B1AB0 Destructor
// ============================================================================

WinsockInterfaceClass* WinsockInterfaceClass::Instance = nullptr;

WinsockInterfaceClass::WinsockInterfaceClass() noexcept
    : Socket(0)
    , Initialized(false)
    , BoundPort(0)
    , LocalAddress(0)
{
}

WinsockInterfaceClass::~WinsockInterfaceClass()
{
    if (Initialized)
    {
        Shutdown();
    }
}

bool WinsockInterfaceClass::initialize()
{
    // IDA 0x7B1DE0: WinsockInterface_Init
    if (Initialized)
        return true;

    LOG_INFO("WinsockInterface init.");

    WSADATA wsaData;
    int result = WSAStartup(MAKEWORD(1, 1), &wsaData);
    if (result != 0)
    {
        LOG_ERROR("Winsock failed to initialise - error code %d.", result);
        return false;
    }

    if (IDA_LOBYTE(wsaData.wVersion) < 1 || (IDA_LOBYTE(wsaData.wVersion) == 1 && IDA_HIBYTE(wsaData.wVersion) < 1))
    {
        LOG_WARN("Winsock version is less than 1.1");
        WSACleanup();
        return false;
    }

    LOG_INFO("Winsock version is %d.%d", IDA_LOBYTE(wsaData.wVersion), IDA_HIBYTE(wsaData.wVersion));

    Initialized = true;
    return true;
}

void WinsockInterfaceClass::Shutdown()
{
    if (!Initialized) return;
    if (Socket != 0 && Socket != INVALID_SOCKET)
        closesocket((SOCKET)Socket);
    WSACleanup();
    Initialized = false;
    Socket = 0;
}

bool WinsockInterfaceClass::IsAvailable() const
{
    return Initialized;
}

bool WinsockInterfaceClass::CreateSocket()
{
    if (!Initialized) return false;
    if (Socket != 0 && Socket != INVALID_SOCKET) return true;

    Socket = (uint32_t)socket(AF_INET, SOCK_DGRAM, IPPROTO_UDP);
    if (Socket == INVALID_SOCKET) { Socket = 0; return false; }

    u_long mode = 1;
    ioctlsocket((SOCKET)Socket, FIONBIO, &mode);
    return true;
}

void WinsockInterfaceClass::CloseSocket()
{
    if (Socket != 0 && Socket != INVALID_SOCKET)
    {
        closesocket((SOCKET)Socket);
        Socket = 0;
    }
}

bool WinsockInterfaceClass::Bind(uint16_t port)
{
    if (!Socket || Socket == INVALID_SOCKET) return false;
    sockaddr_in addr = {};
    addr.sin_family = AF_INET;
    addr.sin_port = htons(port);
    addr.sin_addr.s_addr = INADDR_ANY;
    if (bind((SOCKET)Socket, (sockaddr*)&addr, sizeof(addr)) != 0) return false;
    BoundPort = port;
    return true;
}

bool WinsockInterfaceClass::SendTo(uint32_t address, uint16_t port, const uint8_t* data, int32_t length)
{
    if (!Socket || Socket == INVALID_SOCKET) return false;
    sockaddr_in addr = {};
    addr.sin_family = AF_INET;
    addr.sin_port = htons(port);
    addr.sin_addr.s_addr = address;
    int sent = sendto((SOCKET)Socket, (const char*)data, length, 0, (sockaddr*)&addr, sizeof(addr));
    return sent == length;
}

int32_t WinsockInterfaceClass::ReceiveFrom(uint8_t* buffer, int32_t maxLen, uint32_t* outAddress, uint16_t* outPort)
{
    if (!Socket || Socket == INVALID_SOCKET) return -1;
    sockaddr_in from = {};
    int fromLen = sizeof(from);
    int received = recvfrom((SOCKET)Socket, (char*)buffer, maxLen, 0, (sockaddr*)&from, &fromLen);
    if (received > 0)
    {
        if (outAddress) *outAddress = from.sin_addr.s_addr;
        if (outPort) *outPort = ntohs(from.sin_port);
    }
    return received;
}

bool WinsockInterfaceClass::SetNonBlocking(bool nonBlock)
{
    if (!Socket || Socket == INVALID_SOCKET) return false;
    u_long mode = nonBlock ? 1 : 0;
    return ioctlsocket((SOCKET)Socket, FIONBIO, &mode) == 0;
}

bool WinsockInterfaceClass::JoinMulticastGroup(uint32_t groupAddress)
{
    (void)groupAddress;
    // Multicast group join requires ip_mreq struct from ws2ipdef.h
    // This feature is rarely used in RA2 multiplayer
    return true;
}

// ============================================================================
// IPXInterfaceClass — IDA 0x7B0D90 Construct, 0x7B0DD0 initSocket
// ============================================================================

IPXInterfaceClass* IPXInterfaceClass::Instance = nullptr;

IPXInterfaceClass::IPXInterfaceClass() noexcept
    : Socket(0)
    , Initialized(false)
    , BoundSocket(0)
    , LocalNetwork(0)
{
    std::memset(LocalNode, 0, sizeof(LocalNode));
}

IPXInterfaceClass::~IPXInterfaceClass()
{
}

bool IPXInterfaceClass::initialize()
{
    // IPX is deprecated and not available on modern Windows
    // The original game used IPX for LAN play on Windows 9x
    (void)false;
    return false;
}

void IPXInterfaceClass::Shutdown()
{
    Initialized = false;
}

bool IPXInterfaceClass::IsAvailable() const { return false; }

bool IPXInterfaceClass::CreateSocket()
{
    return false;
}

void IPXInterfaceClass::CloseSocket()
{
}

// 0x7b10c0
bool IPXInterfaceClass::Bind(uint32_t network, const uint8_t node[6], uint16_t sock)
{
  char result; // al
  int v4; // eax
  int16_t v5; // dx
  char v6[4]; // [esp+4h] [ebp-18h] BYREF
  char optval[4]; // [esp+8h] [ebp-14h] BYREF
  struct sockaddr name; // [esp+Ch] [ebp-10h] BYREF

  if ( *((unsigned char *)network + 258152) ) /*0x7b10c6*/
  {
    if ( *((unsigned int *)network + 64539) != -1 ) /*0x7b10e7*/
      return 0; /*0x7b10ef*/
  }
  else
  {
    result = ((WinsockInterface*)(WinsockInterface *)network)->Init(); /*0x7b10d0*/
    if ( !result ) /*0x7b10d7*/
      return result; /*0x7b10d7*/
  }
  *((unsigned int *)network + 64707) = sock; /*0x7b10fd*/
  Debug::Log(); /*0x7b1103*/
  *(unsigned int *)&name.sa_data[4] = -1; /*0x7b110e*/
  name.sa_family = 6; /*0x7b1112*/
  *(unsigned int *)name.sa_data = 0; /*0x7b111a*/
  *(unsigned short *)&name.sa_data[8] = -1; /*0x7b1122*/
  *(unsigned short *)&name.sa_data[10] = htons(sock); /*0x7b1131*/
  Debug::Log(); /*0x7b1136*/
  v4 = socket(6, 2, 1000); /*0x7b1147*/
  *((unsigned int *)network + 64539) = v4; /*0x7b114f*/
  if ( v4 == -1 ) /*0x7b1156*/
  {
    WSAGetLastError(); /*0x7b1158*/
    Debug::Log(); /*0x7b1163*/
    closesocket(*((unsigned int *)network + 64539)); /*0x7b1172*/
    return 0; /*0x7b1177*/
  }
  else
  {
    Debug::Log(); /*0x7b1185*/
    if ( IPXInterfaceClass::initSocket(network, *((unsigned int *)network + 64702), (int)&name) ) /*0x7b119b*/
    {
      Debug::Log(); /*0x7b1236*/
      v5 = *(unsigned short *)&name.sa_data[8]; /*0x7b123f*/
      *(unsigned int *)((char *)network + 258822) = *(unsigned int *)&name.sa_data[4]; /*0x7b124f*/
      *((unsigned short *)network + 129413) = v5; /*0x7b1251*/
      Debug::Log(); /*0x7b1255*/
      if ( bind(*((unsigned int *)network + 64539), &name, 16) == -1 ) /*0x7b1273*/
      {
        WSAGetLastError(); /*0x7b1275*/
        Debug::Log(); /*0x7b1280*/
        closesocket(*((unsigned int *)network + 64539)); /*0x7b128f*/
        return 0; /*0x7b1294*/
      }
      else
      {
        Debug::Log(); /*0x7b12a2*/
        *(unsigned int *)optval = 1; /*0x7b12ac*/
        *(unsigned int *)v6 = 4; /*0x7b12b4*/
        Debug::Log(); /*0x7b12bc*/
        if ( setsockopt(*((unsigned int *)network + 64539), 0xFFFF, 32, optval, 4) == -1 ) /*0x7b12e1*/
          WSAGetLastError(); /*0x7b12e3*/
        Debug::Log(); /*0x7b12ee*/
        Debug::Log(); /*0x7b130a*/
        if ( setsockopt(*((unsigned int *)network + 64539), 1000, 0x4000, v6, 4) == -1 ) /*0x7b1332*/
          WSAGetLastError(); /*0x7b1334*/
        Debug::Log(); /*0x7b133f*/
        Debug::Log(); /*0x7b135b*/
        if ( setsockopt(*((unsigned int *)network + 64539), 1000, 16385, v6, 4) == -1 ) /*0x7b1383*/
          WSAGetLastError(); /*0x7b1385*/
        Debug::Log(); /*0x7b1390*/
        Socket::ConfigureBuffers((WinsockInterfaceClass *)network, 0xFFFFFFFF); /*0x7b13ab*/
        Debug::Log(); /*0x7b13b5*/
        return 1; /*0x7b13bd*/
      }
    }
    else
    {
      Debug::Log(); /*0x7b11a9*/
      closesocket(*((unsigned int *)network + 64539)); /*0x7b11b8*/
      return 0; /*0x7b11bd*/
    }
  }
}
bool IPXInterfaceClass::SendTo(uint32_t destNetwork, const uint8_t destNode[6], uint16_t destSocket,
                                const uint8_t* data, int32_t length)
{
    (void)destNetwork; (void)destNode; (void)destSocket; (void)data; (void)length;
    return false;
}

int32_t IPXInterfaceClass::ReceiveFrom(uint8_t* buffer, int32_t maxLen,
                                        uint32_t* outNetwork, uint8_t outNode[6], uint16_t* outSocket)
{
    (void)buffer; (void)maxLen; (void)outNetwork; (void)outNode; (void)outSocket;
    return -1;
}

// ============================================================================
// UDPInterfaceClass — IDA 0x7B4150 Connect, 0x7B4170 Destructor
// ============================================================================

UDPInterfaceClass* UDPInterfaceClass::Instance = nullptr;

UDPInterfaceClass::UDPInterfaceClass() noexcept
    : Socket(0)
    , Initialized(false)
    , BoundPort(0)
{
}

UDPInterfaceClass::~UDPInterfaceClass()
{
    Shutdown();
}

bool UDPInterfaceClass::initialize()
{
    if (Initialized) return true;
    Initialized = true;
    return true;
}

void UDPInterfaceClass::Shutdown()
{
    CloseSocket();
    Initialized = false;
}

bool UDPInterfaceClass::IsAvailable() const { return Initialized; }

bool UDPInterfaceClass::CreateSocket(uint16_t port)
{
    if (Socket != 0 && Socket != INVALID_SOCKET) return true;

    Socket = (uint32_t)socket(AF_INET, SOCK_DGRAM, IPPROTO_UDP);
    if (Socket == INVALID_SOCKET) { Socket = 0; return false; }

    u_long mode = 1;
    ioctlsocket((SOCKET)Socket, FIONBIO, &mode);

    if (port != 0)
    {
        sockaddr_in addr = {};
        addr.sin_family = AF_INET;
        addr.sin_port = htons(port);
        addr.sin_addr.s_addr = INADDR_ANY;
        if (bind((SOCKET)Socket, (sockaddr*)&addr, sizeof(addr)) == 0)
            BoundPort = port;
    }
    return true;
}

void UDPInterfaceClass::CloseSocket()
{
    if (Socket != 0 && Socket != INVALID_SOCKET)
    {
        closesocket((SOCKET)Socket);
        Socket = 0;
    }
}

bool UDPInterfaceClass::SendTo(const char* address, uint16_t port, const uint8_t* data, int32_t length)
{
    if (!Socket || Socket == INVALID_SOCKET) return false;

    sockaddr_in addr = {};
    addr.sin_family = AF_INET;
    addr.sin_port = htons(port);

    u_long ipAddr = inet_addr(address);
    if (ipAddr == INADDR_NONE)
    {
        struct hostent* host = gethostbyname(address);
        if (!host) return false;
        ipAddr = *(u_long*)host->h_addr_list[0];
    }
    addr.sin_addr.s_addr = ipAddr;

    int sent = sendto((SOCKET)Socket, (const char*)data, length, 0, (sockaddr*)&addr, sizeof(addr));
    return sent == length;
}

int32_t UDPInterfaceClass::ReceiveFrom(uint8_t* buffer, int32_t maxLen,
                                        char* outAddress, int32_t addrSize, uint16_t* outPort)
{
    if (!Socket || Socket == INVALID_SOCKET) return -1;

    sockaddr_in from = {};
    int fromLen = sizeof(from);
    int received = recvfrom((SOCKET)Socket, (char*)buffer, maxLen, 0, (sockaddr*)&from, &fromLen);
    if (received > 0)
    {
        if (outAddress && addrSize > 0)
        {
            char* ipStr = inet_ntoa(from.sin_addr);
            strncpy(outAddress, ipStr, addrSize - 1);
            outAddress[addrSize - 1] = '\0';
        }
        if (outPort) *outPort = ntohs(from.sin_port);
    }
    return received;
}

bool UDPInterfaceClass::SetNonBlocking(bool nonBlock)
{
    if (!Socket || Socket == INVALID_SOCKET) return false;
    u_long mode = nonBlock ? 1 : 0;
    return ioctlsocket((SOCKET)Socket, FIONBIO, &mode) == 0;
}

bool UDPInterfaceClass::SetBroadcast(bool enable)
{
    if (!Socket || Socket == INVALID_SOCKET) return false;
    int opt = enable ? 1 : 0;
    return setsockopt((SOCKET)Socket, SOL_SOCKET, SO_BROADCAST,
                      (const char*)&opt, sizeof(opt)) == 0;

} // namespace gamemd
