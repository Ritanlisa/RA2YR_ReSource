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
    void Read();  // 0x5CA680
    // IDA 0x48B2A0 area
    void Write();  // 0x5CA6D0
    // IDA 0x48B2A0 area
    bool StubReturnFalse();  // 0x5CA7E0
    // IDA 0x48B2A0 area
    void Process();  // 0x5CA800 // IDA: MultiplayerSiege::ProcessTurn
    // IDA 0x48B2A0 area
    // design: no binary equivalent found in IDA
    void Reset();
    // IDA 0x48B2A0 area
    // design: no binary equivalent found in IDA
    bool IsActive() const;
    // IDA 0x48B2A0 area
    // design: no binary equivalent found in IDA
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
    static void Screen();  // 0x53F1F0
    // IDA 0x68C2B0
    static void FindStartPositions();  // 0x688380
    // IDA 0x68C2B0 area
    // design: static function, no direct binary match in IDA
    static void sub_68C2B0();
    // IDA 0x48B2A0 area
    static void SetupGame();  // 0x6AE6E0

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
    static HRESULT QueryInterface(const GUID& riid, void** ppv);  // 0x76EFE0

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
    void Assign(uint32_t ip, uint16_t port);  // 0x53ECE0

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
    void ConfigureBuffers(int32_t sendSize, int32_t recvSize);  // 0x7B2630

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
    static HRESULT QueryInterface(const GUID& riid, void** ppv);  // 0x5C61A0

    int32_t     MultiplayerManBattle_field_00;       // 0x00
};


// === Batch-generated MISSING class stubs ===

// 14 methods in IDA
class IPXGlobalConnClass
{
public:
    virtual ~IPXGlobalConnClass() = default;  // 0x540630

    virtual void Flush(); // 0x53FBD0
    virtual void GetQueueSize(); // 0x53FCB0
    virtual void ConnectToHost(); // 0x53FF10
    virtual void Disconnect(); // 0x540030
    virtual void GetAddress(); // 0x540050
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
    // design: default destructor (compiler-generated), no callgraph reference
    virtual ~Modem() = default;

    virtual void EnumerateDevices(); // 0x5BB6E0
    virtual void CheckStatus(); // 0x5F0690
    virtual void DetectAndConnect(); // 0x5F0D60
    virtual void OpenPort(); // 0x5F19E0

    uint8_t Modem_field_0x04[4];
    uint8_t Modem_field_0x08[4];
    uint8_t Modem_field_0x0C[4];
};
// 5 methods in IDA
class ModemGame
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~ModemGame() = default;

    virtual void AdvanceTauntCommand(); // 0x5B59B0
    virtual void UpdatePlayerNameAndColor(); // 0x5B5AD0
    virtual void ProcessPacket(); // 0x5B6020
    virtual void ReceiveMapPreview(); // 0x5B7360
    virtual void RenderPaletteImage(); // 0x6425F0

    uint8_t ModemGame_field_0x04[4];
    uint8_t ModemGame_field_0x08[4];
    uint8_t ModemGame_field_0x0C[4];
    uint8_t ModemGame_field_0x10[4];
};
// 4 methods in IDA
class ModemGuest
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~ModemGuest() = default;

    virtual void Dialog(); // 0x5B49B0
    virtual void InitDialog(); // 0x5B4EE0
    virtual void UpdateGuestPlayerInfo(); // 0x5B9550
    virtual void ProcessPacket(); // 0x5BA060

    uint8_t ModemGuest_field_0x04[4];
    uint8_t ModemGuest_field_0x08[4];
    uint8_t ModemGuest_field_0x0C[4];
};
// 3 methods in IDA
class ModemHost
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~ModemHost() = default;

    virtual void Dialog(); // 0x5B77E0
    virtual void InitDialog(); // 0x5B82F0
    virtual void StartGame(); // 0x5BAC60

    uint8_t ModemHost_field_0x04[4];
    uint8_t ModemHost_field_0x08[4];
};
// 3 methods in IDA
class MultiplayerBattleTeam
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~MultiplayerBattleTeam() = default;

    virtual void AddRef(); // 0x5C1090
    virtual void Release(); // 0x5C10B0
    virtual void QueryInterface(); // 0x5C10D0

    uint8_t MultiplayerBattleTeam_field_0x04[4];
    uint8_t MultiplayerBattleTeam_field_0x08[4];
};
// 1 methods in IDA
class MultiplayerConfig
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~MultiplayerConfig() = default;

    virtual void Cleanup(); // 0x5D5B20

};
// 1 methods in IDA
class MultiplayerLobby
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~MultiplayerLobby() = default;

    virtual void FillSlots(); // 0x5EC030

};
// 1 methods in IDA
class MultiplayerModeVector
{
public:
    virtual ~MultiplayerModeVector() = default;  // 0x5D88B0

    virtual void Destruct();  // 0x5D88B0

};
// 1 methods in IDA
class MultiplayerModeVector2
{
public:
    virtual ~MultiplayerModeVector2() = default;  // 0x5D8900

    virtual void Destruct();  // 0x5D8900

};
// 2 methods in IDA
class MultiplayerObserverTeam
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~MultiplayerObserverTeam() = default;

    virtual void AddRef(); // 0x5C94C0
    virtual void QueryInterface(); // 0x5C94D0

    uint8_t MultiplayerObserverTeam_field_0x04[4];
};
// 1 methods in IDA
class MultiplayerSiegeAttackerTeam
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~MultiplayerSiegeAttackerTeam() = default;

    virtual void QueryInterface(); // 0x5CAF40

};
// 2 methods in IDA
class MultiplayerSiegeDefenderTeam
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~MultiplayerSiegeDefenderTeam() = default;

    virtual void AddRef(); // 0x5CAE70
    virtual void QueryInterface(); // 0x5CAF10

    uint8_t MultiplayerSiegeDefenderTeam_field_0x04[4];
};
// 2 methods in IDA
class MultiplayerTeam
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~MultiplayerTeam() = default;

    virtual void Constructor(); // 0x5D8C50
    virtual void Destructor(); // 0x5D8C80

    uint8_t MultiplayerTeam_field_0x04[4];
};
// 1 methods in IDA
class MultiplayerTeamVector
{
public:
    virtual ~MultiplayerTeamVector() = default;  // 0x5D8860

    virtual void Destruct();  // 0x5D8860

};
// 1 methods in IDA
class MultiplayerTeam_Destru
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~MultiplayerTeam_Destru() = default;

    virtual void QueryInterface(); // 0x5D8D50

};
// 4 methods in IDA
class NetworkBuffer
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~NetworkBuffer() = default;

    virtual void GetField(); // 0x74FD50
    virtual void UpdateWindow(); // 0x74FD60
    virtual void GetField2(); // 0x74FDA0
    virtual void GetField3(); // 0x74FDB0

    uint8_t NetworkBuffer_field_0x04[4];
    uint8_t NetworkBuffer_field_0x08[4];
    uint8_t NetworkBuffer_field_0x0C[4];
};
// 3 methods in IDA
class NetworkDialog
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~NetworkDialog() = default;

    virtual void InitModemSettings(); // 0x695FD0
    virtual void Dispatch(); // 0x6964C0
    virtual void UpdateListBox(); // 0x696610

    uint8_t NetworkDialog_field_0x04[4];
    uint8_t NetworkDialog_field_0x08[4];
};
// 1 methods in IDA
class NetworkEventClass
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~NetworkEventClass() = default;

    virtual void Process(); // 0x645820

};
// 1 methods in IDA
class NetworkEventQueueClass
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~NetworkEventQueueClass() = default;

    virtual void WaitForResponse(); // 0x664530

};
// 8 methods in IDA
class NetworkGameSetup
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~NetworkGameSetup() = default;

    virtual void DlgProc(); // 0x5B7970
    virtual void ReadRulesInitConfig(); // 0x5B9680
    virtual void ReadRulesBases(); // 0x5B96B0
    virtual void ReadRulesAlliesAllowed(); // 0x5B96E0
    virtual void ReadRulesEngineerCount(); // 0x5B9710
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
    // design: default destructor (compiler-generated), no callgraph reference
    virtual ~NetworkID() = default;

    virtual void Assign(); // 0x53ED20
    virtual void Compare(); // 0x53EF30

    uint8_t NetworkID_field_0x04[4];
};
// 2 methods in IDA
class NetworkManager
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~NetworkManager() = default;

    virtual void SetPlayerAddress(); // 0x664240
    virtual void RemovePlayer(); // 0x6646C0

    uint8_t NetworkManager_field_0x04[4];
};
// 2 methods in IDA
class NetworkOptions
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~NetworkOptions() = default;

    virtual void DlgProc(); // 0x560480
    virtual void ApplySettings(); // 0x7B0F50

    uint8_t NetworkOptions_field_0x04[4];
};
// 1 methods in IDA
class NetworkScore
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~NetworkScore() = default;

    virtual void DlgProc(); // 0x64AE50

};
// 2 methods in IDA
class NetworkSession
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~NetworkSession() = default;

    virtual void ResetState(); // 0x54EE60
    virtual void IsPlayerInGame(); // 0x69B600

    uint8_t NetworkSession_field_0x04[4];
};
// 1 methods in IDA
class NetworkSettings
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~NetworkSettings() = default;

    virtual void DlgProc(); // 0x5DDBD0

};
// 1 methods in IDA
class NetworkShare
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~NetworkShare() = default;

    virtual void GetField(); // 0x5E8DA0

};
// 14 methods in IDA
class UDPInterfaceClass_Destru
{
public:
    virtual ~UDPInterfaceClass_Destru() = default;  // 0x7B36C0

    virtual void GetQueueSize(); // 0x7B2F90
    virtual void Flush(); // 0x7B2FF0
    virtual void Send(); // 0x7B30B0
    virtual void SetAddress(); // 0x7B31E0
    virtual void GetAddress(); // 0x7B3430
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
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~WOLGameClass() = default;

    virtual void ParseChatMessage(); // 0x78E030

};
// 5 methods in IDA
class WOLGameList
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~WOLGameList() = default;

    virtual void UpdatePlayerStats(); // 0x77A7C0
    virtual void Check(); // 0x77A840
    virtual void PopulateLobbyLists(); // 0x7A3100
    virtual void EnsureCapacity(); // 0x7ADA70
    virtual void GrowBuffer(); // 0x7AE020

    uint8_t WOLGameList_field_0x04[4];
    uint8_t WOLGameList_field_0x08[4];
    uint8_t WOLGameList_field_0x0C[4];
    uint8_t WOLGameList_field_0x10[4];
};
// 1 methods in IDA
class WOLLogin
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~WOLLogin() = default;

    virtual void DlgProc(); // 0x78DB70

};
// 1 methods in IDA
class WOLOption
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~WOLOption() = default;

    virtual void SetValue(); // 0x77A4A0

};
// 1 methods in IDA
class WOLPersona
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~WOLPersona() = default;

    virtual void FormatDateTime(); // 0x77A4D0

};
// 7 methods in IDA
class WOLobby
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~WOLobby() = default;

    virtual void FindPlayerIndex(); // 0x5E8D00
    virtual void BuildStateList(); // 0x781D20
    virtual void BuildPlayerList(); // 0x783800
    virtual void DlgProc(); // 0x78AC10
    virtual void FormatLatencyText(); // 0x78F5C0
    // +2 more virtual methods

    uint8_t WOLobby_field_0x04[4];
    uint8_t WOLobby_field_0x08[4];
    uint8_t WOLobby_field_0x0C[4];
    uint8_t WOLobby_field_0x10[4];
    uint8_t WOLobby_field_0x14[4];
    uint8_t WOLobby_field_0x18[4];
};

} // namespace gamemd
