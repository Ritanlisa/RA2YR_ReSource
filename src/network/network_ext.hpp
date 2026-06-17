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


// === Batch-generated MISSING class stubs ===

// 14 methods in IDA
class IPXGlobalConnClass
{
public:
    virtual ~IPXGlobalConnClass() = default;

    virtual void Flush() {} // 0x53fbd0
    virtual void GetQueueSize() {} // 0x53fcb0
    virtual void ConnectToHost() {} // 0x53ff10
    virtual void Disconnect() {} // 0x540030
    virtual void GetAddress() {} // 0x540050
    // +9 more virtual methods

    uint8_t IPXGlobalConnClass_field_0x04[4];
    uint8_t IPXGlobalConnClass_field_0x08[4];
    uint8_t IPXGlobalConnClass_field_0x0C[4];
    uint8_t IPXGlobalConnClass_field_0x10[4];
    uint8_t IPXGlobalConnClass_field_0x14[4];
    uint8_t IPXGlobalConnClass_field_0x18[4];
    uint8_t IPXGlobalConnClass_field_0x1C[4];
    uint8_t IPXGlobalConnClass_field_0x20[4];
    uint8_t IPXGlobalConnClass_field_0x24[4];
    uint8_t IPXGlobalConnClass_field_0x28[4];
    uint8_t IPXGlobalConnClass_field_0x2C[4];
    uint8_t IPXGlobalConnClass_field_0x30[4];
    uint8_t IPXGlobalConnClass_field_0x34[4];
};
// 4 methods in IDA
class Modem
{
public:
    virtual ~Modem() = default;

    virtual void EnumerateDevices() {} // 0x5bb6e0
    virtual void CheckStatus() {} // 0x5f0690
    virtual void DetectAndConnect() {} // 0x5f0d60
    virtual void OpenPort() {} // 0x5f19e0

    uint8_t Modem_field_0x04[4];
    uint8_t Modem_field_0x08[4];
    uint8_t Modem_field_0x0C[4];
};
// 5 methods in IDA
class ModemGame
{
public:
    virtual ~ModemGame() = default;

    virtual void sub_5B59B0() {} // 0x5b59b0
    virtual void sub_5B5AD0() {} // 0x5b5ad0
    virtual void ProcessPacket() {} // 0x5b6020
    virtual void ReceiveMapPreview() {} // 0x5b7360
    virtual void RenderPaletteImage() {} // 0x6425f0

    uint8_t ModemGame_field_0x04[4];
    uint8_t ModemGame_field_0x08[4];
    uint8_t ModemGame_field_0x0C[4];
    uint8_t ModemGame_field_0x10[4];
};
// 4 methods in IDA
class ModemGuest
{
public:
    virtual ~ModemGuest() = default;

    virtual void Dialog() {} // 0x5b49b0
    virtual void InitDialog() {} // 0x5b4ee0
    virtual void sub_5B9550() {} // 0x5b9550
    virtual void ProcessPacket() {} // 0x5ba060

    uint8_t ModemGuest_field_0x04[4];
    uint8_t ModemGuest_field_0x08[4];
    uint8_t ModemGuest_field_0x0C[4];
};
// 3 methods in IDA
class ModemHost
{
public:
    virtual ~ModemHost() = default;

    virtual void Dialog() {} // 0x5b77e0
    virtual void InitDialog() {} // 0x5b82f0
    virtual void StartGame() {} // 0x5bac60

    uint8_t ModemHost_field_0x04[4];
    uint8_t ModemHost_field_0x08[4];
};
// 3 methods in IDA
class MultiplayerBattleTeam
{
public:
    virtual ~MultiplayerBattleTeam() = default;

    virtual void AddRef() {} // 0x5c1090
    virtual void Release() {} // 0x5c10b0
    virtual void QueryInterface() {} // 0x5c10d0

    uint8_t MultiplayerBattleTeam_field_0x04[4];
    uint8_t MultiplayerBattleTeam_field_0x08[4];
};
// 1 methods in IDA
class MultiplayerConfig
{
public:
    virtual ~MultiplayerConfig() = default;

    virtual void Cleanup() {} // 0x5d5b20

};
// 1 methods in IDA
class MultiplayerLobby
{
public:
    virtual ~MultiplayerLobby() = default;

    virtual void FillSlots() {} // 0x5ec030

};
// 1 methods in IDA
class MultiplayerModeVector
{
public:
    virtual ~MultiplayerModeVector() = default;

    virtual void Destruct() {} // 0x5d88b0

};
// 1 methods in IDA
class MultiplayerModeVector2
{
public:
    virtual ~MultiplayerModeVector2() = default;

    virtual void Destruct() {} // 0x5d8900

};
// 2 methods in IDA
class MultiplayerObserverTeam
{
public:
    virtual ~MultiplayerObserverTeam() = default;

    virtual void AddRef() {} // 0x5c94c0
    virtual void QueryInterface() {} // 0x5c94d0

    uint8_t MultiplayerObserverTeam_field_0x04[4];
};
// 1 methods in IDA
class MultiplayerSiegeAttackerTeam
{
public:
    virtual ~MultiplayerSiegeAttackerTeam() = default;

    virtual void QueryInterface() {} // 0x5caf40

};
// 2 methods in IDA
class MultiplayerSiegeDefenderTeam
{
public:
    virtual ~MultiplayerSiegeDefenderTeam() = default;

    virtual void AddRef() {} // 0x5cae70
    virtual void QueryInterface() {} // 0x5caf10

    uint8_t MultiplayerSiegeDefenderTeam_field_0x04[4];
};
// 2 methods in IDA
class MultiplayerTeam
{
public:
    virtual ~MultiplayerTeam() = default;

    virtual void Constructor() {} // 0x5d8c50
    virtual void Destructor() {} // 0x5d8c80

    uint8_t MultiplayerTeam_field_0x04[4];
};
// 1 methods in IDA
class MultiplayerTeamVector
{
public:
    virtual ~MultiplayerTeamVector() = default;

    virtual void Destruct() {} // 0x5d8860

};
// 1 methods in IDA
class MultiplayerTeam_Destru
{
public:
    virtual ~MultiplayerTeam_Destru() = default;

    virtual void QueryInterface() {} // 0x5d8d50

};
// 4 methods in IDA
class NetworkBuffer
{
public:
    virtual ~NetworkBuffer() = default;

    virtual void GetField() {} // 0x74fd50
    virtual void UpdateWindow() {} // 0x74fd60
    virtual void GetField2() {} // 0x74fda0
    virtual void GetField3() {} // 0x74fdb0

    uint8_t NetworkBuffer_field_0x04[4];
    uint8_t NetworkBuffer_field_0x08[4];
    uint8_t NetworkBuffer_field_0x0C[4];
};
// 3 methods in IDA
class NetworkDialog
{
public:
    virtual ~NetworkDialog() = default;

    virtual void InitModemSettings() {} // 0x695fd0
    virtual void Dispatch() {} // 0x6964c0
    virtual void sub_696610() {} // 0x696610

    uint8_t NetworkDialog_field_0x04[4];
    uint8_t NetworkDialog_field_0x08[4];
};
// 1 methods in IDA
class NetworkEventClass
{
public:
    virtual ~NetworkEventClass() = default;

    virtual void Process() {} // 0x645820

};
// 1 methods in IDA
class NetworkEventQueueClass
{
public:
    virtual ~NetworkEventQueueClass() = default;

    virtual void WaitForResponse() {} // 0x664530

};
// 8 methods in IDA
class NetworkGameSetup
{
public:
    virtual ~NetworkGameSetup() = default;

    virtual void DlgProc() {} // 0x5b7970
    virtual void ReadRulesInitConfig() {} // 0x5b9680
    virtual void ReadRulesBases() {} // 0x5b96b0
    virtual void ReadRulesAlliesAllowed() {} // 0x5b96e0
    virtual void ReadRulesEngineerCount() {} // 0x5b9710
    // +3 more virtual methods

    uint8_t NetworkGameSetup_field_0x04[4];
    uint8_t NetworkGameSetup_field_0x08[4];
    uint8_t NetworkGameSetup_field_0x0C[4];
    uint8_t NetworkGameSetup_field_0x10[4];
    uint8_t NetworkGameSetup_field_0x14[4];
    uint8_t NetworkGameSetup_field_0x18[4];
    uint8_t NetworkGameSetup_field_0x1C[4];
};
// 2 methods in IDA
class NetworkID
{
public:
    virtual ~NetworkID() = default;

    virtual void Assign() {} // 0x53ed20
    virtual void Compare() {} // 0x53ef30

    uint8_t NetworkID_field_0x04[4];
};
// 2 methods in IDA
class NetworkManager
{
public:
    virtual ~NetworkManager() = default;

    virtual void SetPlayerAddress() {} // 0x664240
    virtual void RemovePlayer() {} // 0x6646c0

    uint8_t NetworkManager_field_0x04[4];
};
// 2 methods in IDA
class NetworkOptions
{
public:
    virtual ~NetworkOptions() = default;

    virtual void DlgProc() {} // 0x560480
    virtual void sub_7B0F50() {} // 0x7b0f50

    uint8_t NetworkOptions_field_0x04[4];
};
// 1 methods in IDA
class NetworkScore
{
public:
    virtual ~NetworkScore() = default;

    virtual void DlgProc() {} // 0x64ae50

};
// 2 methods in IDA
class NetworkSession
{
public:
    virtual ~NetworkSession() = default;

    virtual void ResetState() {} // 0x54ee60
    virtual void IsPlayerInGame() {} // 0x69b600

    uint8_t NetworkSession_field_0x04[4];
};
// 1 methods in IDA
class NetworkSettings
{
public:
    virtual ~NetworkSettings() = default;

    virtual void DlgProc() {} // 0x5ddbd0

};
// 1 methods in IDA
class NetworkShare
{
public:
    virtual ~NetworkShare() = default;

    virtual void GetField() {} // 0x5e8da0

};
// 14 methods in IDA
class UDPInterfaceClass_Destru
{
public:
    virtual ~UDPInterfaceClass_Destru() = default;

    virtual void GetQueueSize() {} // 0x7b2f90
    virtual void Flush() {} // 0x7b2ff0
    virtual void Send() {} // 0x7b30b0
    virtual void SetAddress() {} // 0x7b31e0
    virtual void GetAddress() {} // 0x7b3430
    // +9 more virtual methods

    uint8_t UDPInterfaceClass_Destru_field_0x04[4];
    uint8_t UDPInterfaceClass_Destru_field_0x08[4];
    uint8_t UDPInterfaceClass_Destru_field_0x0C[4];
    uint8_t UDPInterfaceClass_Destru_field_0x10[4];
    uint8_t UDPInterfaceClass_Destru_field_0x14[4];
    uint8_t UDPInterfaceClass_Destru_field_0x18[4];
    uint8_t UDPInterfaceClass_Destru_field_0x1C[4];
    uint8_t UDPInterfaceClass_Destru_field_0x20[4];
    uint8_t UDPInterfaceClass_Destru_field_0x24[4];
    uint8_t UDPInterfaceClass_Destru_field_0x28[4];
    uint8_t UDPInterfaceClass_Destru_field_0x2C[4];
    uint8_t UDPInterfaceClass_Destru_field_0x30[4];
    uint8_t UDPInterfaceClass_Destru_field_0x34[4];
};
// 1 methods in IDA
class WOLGameClass
{
public:
    virtual ~WOLGameClass() = default;

    virtual void ParseChatMessage() {} // 0x78e030

};
// 5 methods in IDA
class WOLGameList
{
public:
    virtual ~WOLGameList() = default;

    virtual void sub_77A7C0() {} // 0x77a7c0
    virtual void Check() {} // 0x77a840
    virtual void PopulateLobbyLists() {} // 0x7a3100
    virtual void EnsureCapacity() {} // 0x7ada70
    virtual void GrowBuffer() {} // 0x7ae020

    uint8_t WOLGameList_field_0x04[4];
    uint8_t WOLGameList_field_0x08[4];
    uint8_t WOLGameList_field_0x0C[4];
    uint8_t WOLGameList_field_0x10[4];
};
// 1 methods in IDA
class WOLLogin
{
public:
    virtual ~WOLLogin() = default;

    virtual void DlgProc() {} // 0x78db70

};
// 1 methods in IDA
class WOLOption
{
public:
    virtual ~WOLOption() = default;

    virtual void SetValue() {} // 0x77a4a0

};
// 1 methods in IDA
class WOLPersona
{
public:
    virtual ~WOLPersona() = default;

    virtual void FormatDateTime() {} // 0x77a4d0

};
// 7 methods in IDA
class WOLobby
{
public:
    virtual ~WOLobby() = default;

    virtual void FindPlayerIndex() {} // 0x5e8d00
    virtual void BuildStateList() {} // 0x781d20
    virtual void BuildPlayerList() {} // 0x783800
    virtual void DlgProc() {} // 0x78ac10
    virtual void sub_78F5C0() {} // 0x78f5c0
    // +2 more virtual methods

    uint8_t WOLobby_field_0x04[4];
    uint8_t WOLobby_field_0x08[4];
    uint8_t WOLobby_field_0x0C[4];
    uint8_t WOLobby_field_0x10[4];
    uint8_t WOLobby_field_0x14[4];
    uint8_t WOLobby_field_0x18[4];
};

} // namespace gamemd