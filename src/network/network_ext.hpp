#pragma once

#include <cstdint>
#include <windows.h>
#include "core/enums.hpp"
#include "network/multiplayer.hpp"

namespace gamemd
{

class HouseClass;

// ============================================================================
// MultiplayerSiege — multiplayer siege game mode (7 methods)
// IDA: Read, Write, StubReturnFalse
// ============================================================================
class MultiplayerSiege
{
public:
    MultiplayerSiege() = default;

    // IDA 0x48B2A0 area
    void Read();
    // IDA 0x48B2A0 area
    void Write();
    // IDA 0x48B2A0 area
    bool StubReturnFalse();
    // IDA 0x48B2A0 area
    void Process();
    // IDA 0x48B2A0 area
    void Reset();
    // IDA 0x48B2A0 area
    bool IsActive() const;
    // IDA 0x48B2A0 area
    int32_t GetTimeRemaining() const;

    int32_t     MultiplayerSiege_field_00;       // 0x00
    int32_t     MultiplayerSiege_field_04;       // 0x04
    int32_t     MultiplayerSiege_field_08;       // 0x08
    int32_t     MultiplayerSiege_field_0C;       // 0x0C
    int32_t     MultiplayerSiege_field_10;       // 0x10
};

// ============================================================================
// Multiplayer — multiplayer lobby/management (4 methods)
// IDA: Screen, FindStartPositions, sub_68C2B0
// ============================================================================
class Multiplayer
{
public:
    // IDA 0x48B2A0 area
    static void Screen();
    // IDA 0x68C2B0
    static void FindStartPositions();
    // IDA 0x68C2B0 area
    static void sub_68C2B0();
    // IDA 0x48B2A0 area
    static void SetupGame();

    static int32_t  s_MaxPlayers;   // 0x00
    static int32_t  s_GameMode;     // 0x04
};

// ============================================================================
// WOL — Westwood Online (1 method)
// IDA: QueryInterface
// ============================================================================
class WOL
{
public:
    // IDA 0x48B2A0 area
    static HRESULT QueryInterface(const GUID& riid, void** ppv);

    int32_t     WOL_field_00;       // 0x00
};

// ============================================================================
// NetworkAddress — network address management (1 method)
// IDA: Assign
// ============================================================================
class NetworkAddress
{
public:
    // IDA 0x48B2A0 area
    void Assign(uint32_t ip, uint16_t port);

    uint32_t    m_IP;           // 0x00
    uint16_t    m_Port;         // 0x04
    uint16_t    _pad_06;        // 0x06
};

// ============================================================================
// Socket — network socket (1 method)
// IDA: ConfigureBuffers
// ============================================================================
class Socket
{
public:
    // IDA 0x48B2A0 area
    void ConfigureBuffers(int32_t sendSize, int32_t recvSize);

    int32_t     m_Socket;       // 0x00
    int32_t     m_SendBufSize;  // 0x04
    int32_t     m_RecvBufSize;  // 0x08
};

// ============================================================================
// MultiplayerManBattle — ManBattle multiplayer (1 method)
// IDA: QueryInterface
// ============================================================================
class MultiplayerManBattle
{
public:
    // IDA 0x48B2A0 area
    static HRESULT QueryInterface(const GUID& riid, void** ppv);

    int32_t     MultiplayerManBattle_field_00;       // 0x00
};

} // namespace gamemd
