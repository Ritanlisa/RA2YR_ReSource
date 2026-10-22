#pragma once

#include <cstdint>
#include <windows.h>
#include "core/enums.hpp"
#include "network/multiplayer.hpp"
#include "core/guid.hpp"  // G42.55 closure (GUID)
#include "network/network_ext.hpp"  // G42.55 closure (Socket)
#include "e4/classes/NetworkID_e4.hpp"  // gB dedup: NetworkID single-source (C2011 vs local def)

namespace gamemd
{

#ifndef GAMEMD_G2_NETWORK_FLAT_DEF  // G57w10: receiver-stru carrier (stru_A8D600/A8BB1C), twin-guarded vs e4 Network_e4.hpp
#define GAMEMD_G2_NETWORK_FLAT_DEF 1
struct Network {
    unsigned int *q000;   // 0x0
    unsigned int u32_4;   // 0x4
    unsigned int u32_8;   // 0x8
    unsigned int u32_C;   // 0xC
    unsigned int q010;   // 0x10
    unsigned char __pad_14;  // 0x14
    unsigned char Network_field_0x22;  // 0x22
    unsigned char __pad_34[8];  // 0x34
    unsigned char __pad_64[8];  // 0x64
    unsigned char Network_field_0x6F;  // 0x6F
    unsigned char __pad_73[1];  // 0x73
    unsigned char __pad_87[0x171];  // 0x87


    unsigned int Network_field_0x0;  // 0x0 [X55 W3 supply (render vocab)]
    int u32_60;  // 0x60 [X55 W3 supply (render vocab)]
    int Network_field_0x10;  // 0x10 [X55 W3 supply (render vocab)]
};
#endif  // GAMEMD_G2_NETWORK_FLAT_DEF


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
    int Read();  // 0x5CA680
    // IDA 0x48B2A0 area
    void Write();  // 0x5CA6D0
    // IDA 0x48B2A0 area
    bool StubReturnFalse();  // 0x5CA7E0
    // IDA 0x48B2A0 area
    void Process();
    // IDA 0x48B2A0 area
    // design: no binary equivalent found in IDA
    int Reset();
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
    public:  // symbol-anchor
    // === SYMBOL-ANCHOR (BEGIN) ===
    int ProcessTurn(int a1);  // 0x5ca800 -- MultiplayerSiege::ProcessTurn
    void* QueryInterface(int a1);  // 0x5cabd0 -- MultiplayerSiege::QueryInterface
    // === SYMBOL-ANCHOR (END) ===


    unsigned int u32_14;  // 0x14 [X55 W3 supply (render vocab)]
};

// ============================================================================
// Multiplayer — multiplayer lobby/management (4 methods)
// IDA: Screen, FindStartPositions, sub_68C2B0
// ============================================================================
#ifndef GAMEMD_G2_Multiplayer_DEF  // G42.57w14 twin-guard (shared; first-include wins)
#define GAMEMD_G2_Multiplayer_DEF 1
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
    static void SetupGame();

    static int32_t  s_MaxPlayers;   // 0x00
    static int32_t  s_GameMode;     // 0x04
    public:  // symbol-anchor
    // === SYMBOL-ANCHOR (BEGIN) ===
    void ShowProgress(int a1);  // 0x69ae90 -- Multiplayer::ShowProgress
    // === SYMBOL-ANCHOR (END) ===
};
#endif  // GAMEMD_G2_Multiplayer_DEF

// ============================================================================
// WOL — Westwood Online (1 method)
// IDA: QueryInterface
// ============================================================================
class WOL
{
public:
    // IDA 0x48B2A0 area
     HRESULT QueryInterface(const GUID& riid, void** ppv);  // 0x76EFE0

    int32_t     WOL_field_00;       // 0x00
};

// ============================================================================
// NetworkAddress — network address management (1 method)
// IDA: Assign
// ============================================================================
#ifndef GAMEMD_G2_NetworkAddress_DEF  // G42.57w14 twin-guard (shared; first-include wins)
#define GAMEMD_G2_NetworkAddress_DEF 1
class NetworkAddress
{
public:
    // IDA 0x48B2A0 area
    void Assign(uint32_t ip, uint16_t port);  // 0x53ECE0

    uint32_t    m_IP;           // 0x00
    uint16_t    m_Port;         // 0x04
    uint16_t    _pad_06;        // 0x06
};
#endif  // GAMEMD_G2_NetworkAddress_DEF

// ============================================================================
// Socket — network socket (1 method)
// IDA: ConfigureBuffers
// ============================================================================
class Socket
{
public:
    // IDA 0x48B2A0 area
int ConfigureBuffers(unsigned int aP1);  // 0x007b2630 g57w12-r raw-sync (def-form; SOCKET==unsigned int)

    int32_t     m_Socket;       // 0x00
    int32_t     m_SendBufSize;  // 0x04
    int32_t     m_RecvBufSize;  // 0x08

    unsigned int u32_3F06C;  // X10 supply (member_lookup)
};

// ============================================================================
// MultiplayerManBattle — ManBattle multiplayer (1 method)
// IDA: QueryInterface
// ============================================================================
class MultiplayerManBattle
{
public:
    // IDA 0x48B2A0 area
     HRESULT QueryInterface(const GUID& riid, void** ppv);  // 0x5C61A0

    int32_t     MultiplayerManBattle_field_00;       // 0x00
};


// === Batch-generated MISSING class stubs ===

// 14 methods in IDA
#ifndef GAMEMD_G2_IPXGlobalConnClass_DEF  // G42.57w14 twin-guard (shared; first-include wins)
#define GAMEMD_G2_IPXGlobalConnClass_DEF 1
class IPXGlobalConnClass
{
public:
    virtual void* QueryInterface(int a1);  // X75: slot 0 (0x540670) = IPXGlobalConnClass::QueryInterface (sibling promoted)
    virtual int ZeroInitAndSetup_0();  // X75: slot 1 (0x53F4E0) = Struct::ZeroInitAndSetup_0
    virtual int Release(int a1, int a2, int a3, int a4);  // X75: slot 2 (0x540610) = IPXGlobalConnClass::Release (sibling promoted)
    virtual ~IPXGlobalConnClass() = default;  // 0x540630
    virtual int Connect(int a1, int a2);  // X75: slot 4 (0x540650) = IPXGlobalConnClass::Connect (sibling promoted)
    virtual BOOL IsValid();  // X75: slot 5 (0x48C3B0) = COMObject::IsValid
    virtual int Send();  // X75: slot 6 (0x5402D0) = IPXGlobalConnClass::Send (sibling promoted)
    virtual void serviceSendQueue();  // X75: slot 7 (0x48C3E0) = ConnectionClass::serviceSendQueue
    virtual int CheckStatus();  // X75: slot 8 (0x5400D0) = IPXGlobalConnClass::CheckStatus (sibling promoted)
    virtual void GetAddress(); // 0x540050
    virtual int SetAddress(int a1, int a2, int a3, int a4, int a5, int a6);  // X75: slot 10 (0x5403F0) = IPXGlobalConnClass::SetAddress (sibling promoted)
    virtual void Flush(const void *a2, unsigned int a3, unsigned int a4, int a5, short a6, int a7); // 0x53FBD0
virtual int GetQueueSize(unsigned short *,int,int *,int);  // 0x53FCB0
    virtual void ConnectToHost(); // 0x53FF10
    virtual int GetTileData(int p0, void* p1, int* p2, int* p3, uint16_t* p4, int* p5);  // X75: slot 14 (0x53FFA0) = IPXGlobalConnClass::GetTileData
virtual unsigned int * Disconnect(int, int, int a2);  // 0x540030
    virtual int SendPacket(int a1, int a2);  // X75: slot 16 (0x540340) = IPXGlobalConnClass::SendPacket (sibling promoted)
    virtual void ReceivePacket(int a1);  // X75: slot 17 (0x540110) = IPXGlobalConnClass::ReceivePacket (sibling promoted)


    uint8_t IPXGlobalConnClass_field_0x04[4];
    uint8_t q008[4];
    uint8_t q00C[4];
    uint8_t q010[4];
    uint8_t u32_14[4];
    uint8_t q018[4];
    uint8_t q01C[4];
    uint8_t IPXGlobalConnClass_field_0x20[4];
    uint8_t IPXGlobalConnClass_field_0x24[4];
    uint8_t q028[4];
    uint8_t q02C[4];
    uint8_t q030[4];
    uint8_t q034[4];
    public:  // symbol-anchor
    // === SYMBOL-ANCHOR (BEGIN) ===
    // === SYMBOL-ANCHOR (END) ===

    unsigned char __pad_02E;  // X10 supply (csp_canon_members)
    int q020;  // X10 supply (member_lookup)
    int q024;  // X10 supply (member_lookup)
    unsigned int u32_CC;  // X10 supply (member_lookup)
    unsigned int u32_D4;  // X10 supply (member_lookup)
    unsigned int u32_D8;  // X10 supply (member_lookup)
    void* ptr_0;  // X10 supply (csp_canon_members)

    unsigned int u32_D0;  // X10 supply (member_lookup)
};
#endif  // GAMEMD_G2_IPXGlobalConnClass_DEF
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

    unsigned char __pad_000;  // X10 supply (csp_canon_members)
    int q004;  // X10 supply (member_lookup)
    int q008;  // X10 supply (member_lookup)
    int q00C;  // X10 supply (member_lookup)
    unsigned int u32_34;  // X10 supply (member_lookup)
    unsigned char u32_343[4];  /* void */  // X10 supply (member_lookup)
};
// 5 methods in IDA
// CSP: ModemGame matched via T1
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
    uint8_t q010[4];

    unsigned char __pad_000;  // X10 supply (csp_canon_members)
    int q004;  // X10 supply (member_lookup)
    int q008;  // X10 supply (member_lookup)
    int q00C;  // X10 supply (member_lookup)
    unsigned int u32_14;  // X10 supply (member_lookup)
    unsigned int u32_18;  // X10 supply (member_lookup)
    unsigned char u32_40[4];  /* wchar_t */  // X10 supply (member_lookup)
    unsigned int u32_48;  // X10 supply (member_lookup)
    unsigned int u32_4C;  // X10 supply (member_lookup)
    unsigned int u32_50;  // X10 supply (member_lookup)
    unsigned int u32_54;  // X10 supply (member_lookup)
    unsigned int u32_58;  // X10 supply (member_lookup)
    uint8_t u8_9;  // X10 supply (member_lookup)
};
// 4 methods in IDA
// CSP: ModemGuest matched via T1
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

    unsigned char __pad_000;  // X10 supply (csp_canon_members)
    unsigned char __pad_05C;  // X10 supply (member_lookup)
    int q004;  // X10 supply (member_lookup)
    int q008;  // X10 supply (member_lookup)
    unsigned int u32_10;  // X10 supply (member_lookup)
    unsigned int u32_14;  // X10 supply (member_lookup)
    unsigned int u32_18;  // X10 supply (member_lookup)
    unsigned int u32_1C;  // X10 supply (member_lookup)
    unsigned int u32_20;  // X10 supply (member_lookup)
    unsigned int u32_48;  // X10 supply (member_lookup)
    unsigned int u32_4C;  // X10 supply (member_lookup)
    unsigned int u32_50;  // X10 supply (member_lookup)
    unsigned int u32_54;  // X10 supply (member_lookup)
    unsigned int u32_58;  // X10 supply (member_lookup)
    unsigned int u32_9;  // X10 supply (member_lookup)
    unsigned int u32_C;  // X10 supply (member_lookup)
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

    unsigned char __pad_000;  // X10 supply (csp_canon_members)
    unsigned int u32_10;  // X10 supply (member_lookup)
    unsigned int u32_14;  // X10 supply (member_lookup)
    unsigned int u32_18;  // X10 supply (member_lookup)
    unsigned int u32_1C;  // X10 supply (member_lookup)
    unsigned int u32_20;  // X10 supply (member_lookup)
    unsigned int u32_22;  // X10 supply (member_lookup)
    unsigned int u32_4;  // X10 supply (member_lookup)
    unsigned int u32_4C;  // X10 supply (member_lookup)
    unsigned int u32_50;  // X10 supply (member_lookup)
    unsigned int u32_54;  // X10 supply (member_lookup)
    unsigned int u32_58;  // X10 supply (member_lookup)
    unsigned int u32_5C;  // X10 supply (member_lookup)
    unsigned int u32_8;  // X10 supply (member_lookup)
    unsigned int u32_9;  // X10 supply (member_lookup)
    unsigned int u32_C;  // X10 supply (member_lookup)
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
    uint8_t q008[4];
};
// 1 methods in IDA
class MultiplayerConfig
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~MultiplayerConfig() = default;

    virtual void Cleanup(); // 0x5D5B20

};
#ifndef GAMEMD_G2_MultiplayerLobby_DEF  // G42.57w14 carrier twin-guard (shared w/ _w14_nocarrier_e4.hpp)
#define GAMEMD_G2_MultiplayerLobby_DEF 1
// 1 methods in IDA
class MultiplayerLobby
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~MultiplayerLobby() = default;

    virtual void FillSlots(); // 0x5EC030

};
#endif  // GAMEMD_G2_MultiplayerLobby_DEF
// 1 methods in IDA
class MultiplayerModeVector
{
public:
    virtual ~MultiplayerModeVector() = default;  // 0x5D88B0

    int Destruct();  // 0x5D88B0


    unsigned int tail_0;  // X10 supply (csp_canon_members)
    unsigned char u32_4[4];  /* void */  // X10 supply (member_lookup)
    unsigned int u32_8;  // X10 supply (member_lookup)
    unsigned char u8_D;  // X10 supply (member_lookup)
};
// 1 methods in IDA
class MultiplayerModeVector2
{
public:
    virtual ~MultiplayerModeVector2() = default;  // 0x5D8900

    int Destruct();  // 0x5D8900


    unsigned int tail_0;  // X10 supply (csp_canon_members)
    unsigned char u32_4[4];  /* void */  // X10 supply (member_lookup)
    unsigned int u32_8;  // X10 supply (member_lookup)
    unsigned char u8_D;  // X10 supply (member_lookup)
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

    void* ptr_0;  // X10 supply (csp_canon_members)
};
// 2 methods in IDA
// CSP: MultiplayerTeam matched via T1
class MultiplayerTeam
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~MultiplayerTeam() = default;

    void* Constructor(); // 0x5D8C50
    static wchar_t ** Constructor(void *aP0, const wchar_t **aP1, wchar_t *aP2);  // 0x5D8C50 G42.35 static-form sync (ui/supplied site 0x5C1062)
    virtual void Destructor(); // 0x5D8C80

    uint8_t MultiplayerTeam_field_0x04[4];
    unsigned int *__pad_0;  // G42.35: supplied-bodies ptr_0 view (site 0x5C1067)

    unsigned char __pad_004;  // X10 supply (csp_canon_members)
    uint32_t u32_8;  // X10 supply (member_lookup)
    void* ptr_0;  // X10 supply (csp_canon_members)
};
// 1 methods in IDA
class MultiplayerTeamVector
{
public:
    virtual ~MultiplayerTeamVector() = default;  // 0x5D8860

    int Destruct();  // 0x5D8860


    unsigned int tail_0;  // X10 supply (csp_canon_members)
    unsigned char u32_4[4];  /* void */  // X10 supply (member_lookup)
    unsigned int u32_8;  // X10 supply (member_lookup)
    unsigned char u8_D;  // X10 supply (member_lookup)
};
// 1 methods in IDA
class MultiplayerTeam_Destru
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~MultiplayerTeam_Destru() = default;

    virtual void QueryInterface(); // 0x5D8D50


    unsigned char DeleteAndZero_4[4];  /* DeleteAndZero */  // X10 supply (member_lookup)
    unsigned int tail_0;  // X10 supply (csp_canon_members)
};
#ifndef GAMEMD_G2_NetworkBuffer_DEF  // G42.57w14 carrier twin-guard (shared w/ _w14_nocarrier_e4.hpp)
#define GAMEMD_G2_NetworkBuffer_DEF 1
// 4 methods in IDA
class NetworkBuffer
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~NetworkBuffer() = default;

    bool GetField(); // 0x74FD50
    int UpdateWindow(); // 0x74FD60
    virtual void GetField2(); // 0x74FDA0
    virtual void GetField3(); // 0x74FDB0

    uint8_t q004[4];
    uint8_t q008[4];
    uint8_t q00C[4];

    unsigned int u32_3C;  // X10 supply (member_lookup)
    unsigned int u32_40;  // X10 supply (member_lookup)
};
#endif  // GAMEMD_G2_NetworkBuffer_DEF
// 3 methods in IDA
// CSP: NetworkDialog matched via T1
class NetworkDialog
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~NetworkDialog() = default;

    virtual void InitModemSettings(); // 0x695FD0
    virtual void Dispatch(); // 0x6964C0
    virtual void UpdateListBox(); // 0x696610

    uint8_t u32_4[4];
    uint8_t q008[4];

    unsigned char __pad_000;  // X10 supply (csp_canon_members)
    unsigned int u32_88;  // X10 supply (member_lookup)
    unsigned int u32_8C;  // X10 supply (member_lookup)
    unsigned int u32_90;  // X10 supply (member_lookup)
    unsigned int u32_94;  // X10 supply (member_lookup)
    unsigned int u32_98;  // X10 supply (member_lookup)
    unsigned int u32_9C;  // X10 supply (member_lookup)
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


    unsigned int u32_1C;  // X10 supply (member_lookup)
    int u8_18;  // X10 supply (member_lookup)
};
// 8 methods in IDA
#ifndef GAMEMD_G2_NetworkGameSetup_DEF  // G42.57w14 twin-guard (shared; first-include wins)
#define GAMEMD_G2_NetworkGameSetup_DEF 1
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

    uint8_t q004[4];
    uint8_t q008[4];
    uint8_t q00C[4];
    uint8_t q010[4];
    uint8_t q014[4];
    uint8_t q018[4];
    uint8_t q01C[4];
    public:  // symbol-anchor
    // === SYMBOL-ANCHOR (BEGIN) ===
    int ReadRulesUnknown();  // 0x5b9750 -- NetworkGameSetup::ReadRulesUnknown
    void SendGameSetupPacket(int a1);  // 0x5ba970 -- NetworkGameSetup::SendGameSetupPacket
    void* DeleteComPtr(int a1);  // 0x5bb560 -- NetworkGameSetup::DeleteComPtr
    // === SYMBOL-ANCHOR (END) ===

    unsigned char __pad_000;  // X10 supply (csp_canon_members)
    unsigned int u32_9;  // X10 supply (member_lookup)


    HWND __pad_0;  // 0x0 [X55 W3 supply (render vocab)]
};
#endif  // GAMEMD_G2_NetworkGameSetup_DEF
// 2 methods in IDA
// CSP: NetworkManager matched via T1
#ifndef GAMEMD_G2_NetworkManager_DEF  // W20L4: shared twin guard w/ e4 NetworkManager_e4.hpp (first-include wins)
#define GAMEMD_G2_NetworkManager_DEF 1
class NetworkManager
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~NetworkManager() = default;

    virtual void SetPlayerAddress(); // 0x664240
    virtual void RemovePlayer(); // 0x6646C0

    uint8_t NetworkManager_field_0x04[4];

    unsigned int u32_4;  // X10 supply (member_lookup)

    int u32_10;  // X10 supply (member_lookup)
    unsigned int u32_18;  // X10 supply (member_lookup)
};
#endif  // GAMEMD_G2_NetworkManager_DEF
// 2 methods in IDA
// CSP: NetworkOptions matched via T1
class NetworkOptions
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~NetworkOptions() = default;

    virtual void DlgProc(HWND hWnd, unsigned int a2, int a3, HWND hCtl); // 0x560480  // g57b5 W4: raw 真值补参
    virtual void ApplySettings(int a2, char a3, int a4); // 0x7B0F50

    uint8_t q004[4];

    unsigned int u32_3F068;  // X10 supply (member_lookup)
};
#ifndef GAMEMD_G2_NetworkScore_DEF  // G42.57w14 carrier twin-guard (shared w/ _w14_nocarrier_e4.hpp)
#define GAMEMD_G2_NetworkScore_DEF 1
// 1 methods in IDA
class NetworkScore
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~NetworkScore() = default;

    virtual void DlgProc(); // 0x64AE50

};
#endif  // GAMEMD_G2_NetworkScore_DEF
#ifndef GAMEMD_G2_NetworkSession_DEF  // G42.57w14 carrier twin-guard (shared w/ _w14_nocarrier_e4.hpp)
#define GAMEMD_G2_NetworkSession_DEF 1
// 2 methods in IDA
class NetworkSession
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~NetworkSession() = default;

    virtual unsigned int * ResetState(); // 0x54EE60
    virtual void IsPlayerInGame(); // 0x69B600

    uint8_t NetworkSession_field_0x04[4];
    unsigned int *__pad_0; // 0x0  gB member supply

    unsigned char __pad_000;  // X10 supply (csp_canon_members)
    int q004;  // X10 supply (member_lookup)
    void* q284C;  // X10 supply (member_lookup)
    unsigned int u32_10;  // X10 supply (member_lookup)
    unsigned int u32_2840;  // X10 supply (member_lookup)
    unsigned int u32_314;  // X10 supply (member_lookup)
    unsigned int u32_318;  // X10 supply (member_lookup)
    unsigned int u32_84;  // X10 supply (member_lookup)
    unsigned int u32_C;  // X10 supply (member_lookup)
    char u8_14;  // X10 supply (member_lookup)
};
#endif  // GAMEMD_G2_NetworkSession_DEF
// 1 methods in IDA
class NetworkSettings
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~NetworkSettings() = default;

    virtual void DlgProc(); // 0x5DDBD0

};
#ifndef GAMEMD_G2_NetworkShare_DEF  // G42.57w14 carrier twin-guard (shared w/ _w14_nocarrier_e4.hpp)
#define GAMEMD_G2_NetworkShare_DEF 1
// 1 methods in IDA
class NetworkShare
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~NetworkShare() = default;

    bool GetField(); // 0x5E8DA0

};
#endif  // GAMEMD_G2_NetworkShare_DEF
// 14 methods in IDA
#ifndef GAMEMD_E4_FLAT_UDPInterfaceClass_Destru  // G57w8: three-way interlock (e4 full carrier / minimal_carriers / network_ext)
#define GAMEMD_E4_FLAT_UDPInterfaceClass_Destru 1

class UDPInterfaceClass_Destru
{
public:
    virtual ~UDPInterfaceClass_Destru() = default;  // 0x7B36C0

    virtual void GetQueueSize(); // 0x7B2F90
    virtual void Flush(); // 0x7B2FF0
    virtual int Send(); // 0x7B30B0
    virtual void SetAddress(); // 0x7B31E0
    virtual void GetAddress(); // 0x7B3430
    // +9 more virtual methods

    uint8_t q004[4];
    uint8_t q008[4];
    uint8_t q00C[4];
    uint8_t q010[4];
    uint8_t q014[4];
    uint8_t q018[4];
    uint8_t q01C[4];
    uint8_t q020[4];
    uint8_t q024[4];
    uint8_t q028[4];
    uint8_t q02C[4];
    uint8_t q030[4];
    uint8_t q034[4];
    public:  // symbol-anchor
    // === SYMBOL-ANCHOR (BEGIN) ===
    int Bind(int a1);  // 0x7b3450 -- UDPInterfaceClass_Destru::Bind
    int Receive();  // 0x7b3890 -- UDPInterfaceClass_Destru::Receive
    int CheckStatus();  // 0x7b3900 -- UDPInterfaceClass_Destru::CheckStatus
    int Reset(int a1, int a2);  // 0x7b3920 -- UDPInterfaceClass_Destru::Reset
    int GetStatistics(int a1);  // 0x7b4100 -- UDPInterfaceClass_Destru::GetStatistics
    int COMStub();  // 0x7b4140 -- UDPInterfaceClass_Destru::COMStub
    // === SYMBOL-ANCHOR (END) ===
    public:  // funcs-move
    // === FUNCS-MOVE (BEGIN) ===
    int Connect(int a1, int a2, int a3, int a4, int a5, int a6);  // 0x7b3720
    // === FUNCS-MOVE (END) ===

    unsigned int u32_3F06C;  // X10 supply (member_lookup)
    unsigned int u32_3F330;  // X10 supply (member_lookup)
};
#endif  // GAMEMD_E4_FLAT_UDPInterfaceClass_Destru
// 1 methods in IDA
class WOLGameClass
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~WOLGameClass() = default;

    virtual void ParseChatMessage(); // 0x78E030

};
// 5 methods in IDA
// CSP: WOLGameList matched via T1
class WOLGameList
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~WOLGameList() = default;

    virtual void UpdatePlayerStats(); // 0x77A7C0
    virtual void Check(); // 0x77A840
    virtual void PopulateLobbyLists(); // 0x7A3100
    virtual char EnsureCapacity(); // 0x7ADA70
    virtual void GrowBuffer(); // 0x7AE020

    uint8_t WOLGameList_field_0x04[4];
    uint8_t WOLGameList_field_0x08[4];
    uint8_t WOLGameList_field_0x0C[4];
    uint8_t q010[4];

    unsigned char __pad_000;  // X10 supply (csp_canon_members)
    int q004;  // X10 supply (member_lookup)
    int q008;  // X10 supply (member_lookup)
    int q00C;  // X10 supply (member_lookup)
    void* q024;  // X10 supply (member_lookup)
    void* q028;  // X10 supply (member_lookup)
    unsigned int u32_14;  // X10 supply (member_lookup)
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
// CSP: WOLOption matched via T1
class WOLOption
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~WOLOption() = default;

    virtual void SetValue(); // 0x77A4A0


    unsigned int u32_8;  // X10 supply (member_lookup)
};
// 1 methods in IDA
class WOLPersona
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~WOLPersona() = default;

    virtual void FormatDateTime(); // 0x77A4D0


    unsigned char SafeDelete_20[4];  /* SafeDelete */  // X10 supply (member_lookup)
    unsigned int u32_8;  // X10 supply (member_lookup)
};
// 7 methods in IDA
// CSP: WOLobby matched via T1
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

    uint8_t q004[4];
    uint8_t q008[4];
    uint8_t q00C[4];
    uint8_t q010[4];
    uint8_t q014[4];
    uint8_t q018[4];
    public:  // funcs-move
    // === FUNCS-MOVE (BEGIN) ===
    int SetupDlgProc();  // 0x78f7f0
    int ChatDlgProc();  // 0x791b10
    // === FUNCS-MOVE (END) ===
};

} // namespace gamemd
