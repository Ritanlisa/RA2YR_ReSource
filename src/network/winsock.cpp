#include "network/winsock.hpp"
#include <cstring>

namespace gamemd
{

// --- WinsockInterfaceClass ---

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
}

bool WinsockInterfaceClass::initialize()
{
    // TODO: WSAStartup, configure Winsock
    Initialized = true;
    return true;
}

void WinsockInterfaceClass::Shutdown()
{
    // TODO: closesocket, WSACleanup
    Initialized = false;
}

bool WinsockInterfaceClass::IsAvailable() const
{
    return Initialized;
}

bool WinsockInterfaceClass::CreateSocket() { return false; }
void WinsockInterfaceClass::CloseSocket() {}
bool WinsockInterfaceClass::Bind(uint16_t port) { (void)port; return false; }
bool WinsockInterfaceClass::SendTo(uint32_t address, uint16_t port, const uint8_t* data, int32_t length) { (void)address; (void)port; (void)data; (void)length; return false; }
int32_t WinsockInterfaceClass::ReceiveFrom(uint8_t* buffer, int32_t maxLen, uint32_t* outAddress, uint16_t* outPort) { (void)buffer; (void)maxLen; (void)outAddress; (void)outPort; return 0; }
bool WinsockInterfaceClass::SetNonBlocking(bool nonBlock) { (void)nonBlock; return false; }
bool WinsockInterfaceClass::JoinMulticastGroup(uint32_t groupAddress) { (void)groupAddress; return false; }

// --- IPXInterfaceClass ---

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

bool IPXInterfaceClass::initialize() { Initialized = true; return true; }
void IPXInterfaceClass::Shutdown() { Initialized = false; }
bool IPXInterfaceClass::IsAvailable() const { return Initialized; }
bool IPXInterfaceClass::CreateSocket() { return false; }
void IPXInterfaceClass::CloseSocket() {}
bool IPXInterfaceClass::Bind(uint32_t network, const uint8_t node[6], uint16_t socket) { (void)network; (void)node; (void)socket; return false; }
bool IPXInterfaceClass::SendTo(uint32_t destNetwork, const uint8_t destNode[6], uint16_t destSocket, const uint8_t* data, int32_t length) { (void)destNetwork; (void)destNode; (void)destSocket; (void)data; (void)length; return false; }
int32_t IPXInterfaceClass::ReceiveFrom(uint8_t* buffer, int32_t maxLen, uint32_t* outNetwork, uint8_t outNode[6], uint16_t* outSocket) { (void)buffer; (void)maxLen; (void)outNetwork; (void)outNode; (void)outSocket; return 0; }

// --- UDPInterfaceClass ---

UDPInterfaceClass* UDPInterfaceClass::Instance = nullptr;

UDPInterfaceClass::UDPInterfaceClass() noexcept
    : Socket(0)
    , Initialized(false)
    , BoundPort(0)
{
}

UDPInterfaceClass::~UDPInterfaceClass()
{
}

bool UDPInterfaceClass::initialize() { Initialized = true; return true; }
void UDPInterfaceClass::Shutdown() { Initialized = false; }
bool UDPInterfaceClass::IsAvailable() const { return Initialized; }
bool UDPInterfaceClass::CreateSocket(uint16_t port) { (void)port; return false; }
void UDPInterfaceClass::CloseSocket() {}
bool UDPInterfaceClass::SendTo(const char* address, uint16_t port, const uint8_t* data, int32_t length) { (void)address; (void)port; (void)data; (void)length; return false; }
int32_t UDPInterfaceClass::ReceiveFrom(uint8_t* buffer, int32_t maxLen, char* outAddress, int32_t addrSize, uint16_t* outPort) { (void)buffer; (void)maxLen; (void)outAddress; (void)addrSize; (void)outPort; return 0; }
bool UDPInterfaceClass::SetNonBlocking(bool nonBlock) { (void)nonBlock; return false; }
bool UDPInterfaceClass::SetBroadcast(bool enable) { (void)enable; return false; }

// TODO: complete Winsock interface implementations

} // namespace gamemd
