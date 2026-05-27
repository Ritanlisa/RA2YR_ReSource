#include "gamemd/network/connection.hpp"

namespace gamemd
{

// --- ConnectionClass ---

ConnectionClass::ConnectionClass()
    : PlayerIndex(-1)
    , Active(false)
    , LastPacketTime(0)
    , PacketsSent(0)
    , PacketsReceived(0)
{
}

// --- IPXConnClass ---

IPXConnClass::IPXConnClass()
    : Socket(0xFFFFFFFF)
    , RemoteSocket(0)
{
    std::memset(RemoteAddress, 0, sizeof(RemoteAddress));
    std::memset(padding, 0, sizeof(padding));
}

// --- IPXManagerClass ---

IPXManagerClass* IPXManagerClass::Instance = nullptr;

IPXManagerClass::IPXManagerClass()
    : Socket(0xFFFFFFFF)
    , Initialized(false)
    , Active(false)
{
}

bool IPXManagerClass::OpenSession() { return false; }
void IPXManagerClass::CloseSession() {}
bool IPXManagerClass::SendPacket(const uint8_t* data, int32_t length) { (void)data; (void)length; return false; }
int32_t IPXManagerClass::ReceivePacket(uint8_t* buffer, int32_t maxLen) { (void)buffer; (void)maxLen; return 0; }
bool IPXManagerClass::IsIPXAvailable() const { return false; }

// --- ModemConnectionClass ---

ModemConnectionClass::ModemConnectionClass()
    : IsDialing(false)
    , BaudRate(0)
{
    std::memset(PhoneNumber, 0, sizeof(PhoneNumber));
}

// --- NullModemClass ---

NullModemClass::NullModemClass()
{
}

// TODO: complete connection class implementations

} // namespace gamemd
