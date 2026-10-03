// G42.32 P: tree-universe marker -- e4 tree-owned decls suppressed
#define GAMEMD_TREE_UNIVERSE 1
// G42.35h: e4-carrier opt-outs -- utility_ext Hash/SHA1/CRC32 collide with the
// e4 flat carriers (core/ui supplied_bodies battery pattern).
#define GAMEMD_E4_Hash 1
#define GAMEMD_E4_SHA1 1
#define GAMEMD_E4_CRC32 1
#define GAMEMD_TREE_Random 1
#define GAMEMD_TREE_LoadGame 1
// G42.32 S: guard-order tree-bridge -- ra2::game full defs precede e4 leaf headers
#include "object/abstract.hpp"
#ifdef GAMEMD_TREE_UNIVERSE
namespace gamemd {
using ra2::game::AbstractClass;
}
#endif
// GENERATED supplied bodies (supply_missing_bodies.py) -- no-body
// no-file FAIL family; bodies are cache-verbatim transforms.
#include "core/hash_table.hpp"
#include "e4/classes/ConnectionClass_e4.hpp"
// G42.35h: stream_ext removed -- gamemd::IStream shadowed ::IStream (18 override breaks) and its Buffer double-supplies; TU uses none of its symbols.
#include "core/utility_ext.hpp"
#include "house/house.hpp"
#include "misc/misc_ext.hpp"
#include "network/connection.hpp"
#include "network/network_ext.hpp"
#include "network/winsock.hpp"
#include "object/object.hpp"
#include "render/display.hpp"
#include "render/render_ext.hpp"
#include "render/surface.hpp"
#include "structure/building.hpp"
#include "system/buffer_io_file.hpp"
#include "system/cc_file.hpp"
#include "system/cell.hpp"
#include "system/file_class.hpp"
#include "system/game_systems.hpp"
#include "system/ini_class.hpp"
#include "type/object_type.hpp"
#include "ui/command_ext.hpp"
#include "e4/classes/Network_e4.hpp"

// 0x48C650
namespace gamemd {
HRESULT __stdcall ConnectionClass::QueryInterface(const IID&, void**)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0048C650.json)
}
} // namespace gamemd

// 0x53ED20
namespace gamemd {
int16_t NetworkID::Assign(unsigned int *a2, int a3, int16_t a4)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0053ED20.json)
}
} // namespace gamemd

// 0x53EF30
namespace gamemd {
int NetworkID::Compare(int a2) {
    return memcmp(this + 4, (const void *)(a2 + 4), dword_828140 != 2 ? 6 : 4) == 0;
}
} // namespace gamemd

// 0x53F850
namespace gamemd {
unsigned int * IPXConnClass::QueryInterface(char,int,int,int)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0053F850.json)
}
} // namespace gamemd

// 0x53FCB0
namespace gamemd {
int IPXGlobalConnClass::GetQueueSize(unsigned short *a2, signed int a3, int *a4, int a5)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0053FCB0.json)
}
} // namespace gamemd

// 0x540030
namespace gamemd {
unsigned int * IPXGlobalConnClass::Disconnect(int,int)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00540030.json)
}
} // namespace gamemd

// 0x542350
namespace gamemd {
int IPXManagerClass::GetAddress(int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00542350.json)
}
} // namespace gamemd

// 0x5423C0
namespace gamemd {
int IPXManagerClass::SetAddress(int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005423C0.json)
}
} // namespace gamemd

// 0x542450
namespace gamemd {
unsigned int IPXManagerClass::GetQueueSize()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00542450.json)
}
} // namespace gamemd

// 0x5424A0
namespace gamemd {
int32_t IPXManagerClass::CheckStatus()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5424A0)
}
} // namespace gamemd

// 0x542520
namespace gamemd {
int IPXManagerClass::ProcessQueue()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00542520.json)
}
} // namespace gamemd

// 0x542EC0
namespace gamemd {
void IPXManagerClass::Flush()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00542EC0.json)
}
} // namespace gamemd

// 0x543100
namespace gamemd {
int32_t IPXManagerClass::getPlayerName()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00543100.json)
}
} // namespace gamemd

// 0x54EE60
namespace gamemd {
unsigned int * NetworkSession::ResetState()
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0054EE60.json)
}
} // namespace gamemd

// 0x560480
namespace gamemd {
void NetworkOptions::DlgProc()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00560480.json)
}
} // namespace gamemd

// 0x5B49B0
namespace gamemd {
void ModemGuest::Dialog()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005B49B0.json)
}
} // namespace gamemd

// 0x5B4EE0
namespace gamemd {
void ModemGuest::InitDialog()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005B4EE0.json)
}
} // namespace gamemd

// 0x5B59B0
namespace gamemd {
void ModemGame::AdvanceTauntCommand()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005B59B0.json)
}
} // namespace gamemd

// 0x5B5AD0
namespace gamemd {
void ModemGame::UpdatePlayerNameAndColor()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005B5AD0.json)
}
} // namespace gamemd

// 0x5B6020
namespace gamemd {
void ModemGame::ProcessPacket()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005B6020.json)
}
} // namespace gamemd

// 0x5B7360
namespace gamemd {
void ModemGame::ReceiveMapPreview()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005B7360.json)
}
} // namespace gamemd

// 0x5B77E0
namespace gamemd {
void ModemHost::Dialog()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005B77E0.json)
}
} // namespace gamemd

// 0x5B82F0
namespace gamemd {
void ModemHost::InitDialog()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005B82F0.json)
}
} // namespace gamemd

// 0x5B9680
namespace gamemd {
void NetworkGameSetup::ReadRulesInitConfig()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005B9680.json)
}
} // namespace gamemd

// 0x5B96B0
namespace gamemd {
void NetworkGameSetup::ReadRulesBases()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005B96B0.json)
}
} // namespace gamemd

// 0x5B96E0
namespace gamemd {
void NetworkGameSetup::ReadRulesAlliesAllowed()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005B96E0.json)
}
} // namespace gamemd

// 0x5B9710
namespace gamemd {
void NetworkGameSetup::ReadRulesEngineerCount()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005B9710.json)
}
} // namespace gamemd

// 0x5BA060
namespace gamemd {
void ModemGuest::ProcessPacket()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005BA060.json)
}
} // namespace gamemd

// 0x5BAC60
namespace gamemd {
void ModemHost::StartGame()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005BAC60.json)
}
} // namespace gamemd

// 0x5C1090
namespace gamemd {
void MultiplayerBattleTeam::AddRef()
{
    // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5C1090)
}
} // namespace gamemd

// 0x5C10B0
namespace gamemd {
void MultiplayerBattleTeam::Release()
{
    // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5C10B0)
}
} // namespace gamemd

// 0x5C10D0
namespace gamemd {
void MultiplayerBattleTeam::QueryInterface()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005C10D0.json)
}
} // namespace gamemd

// 0x5C94C0
namespace gamemd {
void MultiplayerObserverTeam::AddRef()
{
    // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5C94C0)
}
} // namespace gamemd

// 0x5C94D0
namespace gamemd {
void MultiplayerObserverTeam::QueryInterface()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005C94D0.json)
}
} // namespace gamemd

// 0x5CAE70
namespace gamemd {
void MultiplayerSiegeDefenderTeam::AddRef()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005CAE70.json)
}
} // namespace gamemd

// 0x5CAF10
namespace gamemd {
void MultiplayerSiegeDefenderTeam::QueryInterface()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005CAF10.json)
}
} // namespace gamemd

// 0x5CAF40
namespace gamemd {
void MultiplayerSiegeAttackerTeam::QueryInterface()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005CAF40.json)
}
} // namespace gamemd

// 0x5D8860
namespace gamemd {
void MultiplayerTeamVector::Destruct()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005D8860.json)
}
} // namespace gamemd

// 0x5D88B0
namespace gamemd {
void MultiplayerModeVector::Destruct()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005D88B0.json)
}
} // namespace gamemd

// 0x5D8900
namespace gamemd {
void MultiplayerModeVector2::Destruct()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005D8900.json)
}
} // namespace gamemd

// 0x5D8C50
namespace gamemd {
void MultiplayerTeam::Constructor()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005D8C50.json)
}
} // namespace gamemd

// 0x5D8C80
namespace gamemd {
void MultiplayerTeam::Destructor()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005D8C80.json)
}
} // namespace gamemd

// 0x5D8D50
namespace gamemd {
void MultiplayerTeam_Destru::QueryInterface()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005D8D50.json)
}
} // namespace gamemd

// 0x5DDBD0
namespace gamemd {
void NetworkSettings::DlgProc()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005DDBD0.json)
}
} // namespace gamemd

// 0x5E8D00
namespace gamemd {
void WOLobby::FindPlayerIndex()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005E8D00.json)
}
} // namespace gamemd

// 0x5E8DA0
namespace gamemd {
bool NetworkShare::GetField()
{
    return false; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005E8DA0.json)
}
} // namespace gamemd

// 0x5EC030
namespace gamemd {
void MultiplayerLobby::FillSlots()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005EC030.json)
}
} // namespace gamemd

// 0x5EF100
namespace gamemd {
bool NullModemClass::initConnection()
{
    return false; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005EF100.json)
}
} // namespace gamemd

// 0x5EF170
namespace gamemd {
bool NullModemClass::closeConnection()
{
    return false; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005EF170.json)
}
} // namespace gamemd

// 0x5F0690
namespace gamemd {
void Modem::CheckStatus()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005F0690.json)
}
} // namespace gamemd

// 0x5F0D60
namespace gamemd {
void Modem::DetectAndConnect()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005F0D60.json)
}
} // namespace gamemd

// 0x5F16E0
namespace gamemd {
bool NullModemClass::Init()
{
    return false; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005F16E0.json)
}
} // namespace gamemd

// 0x5F19E0
namespace gamemd {
void Modem::OpenPort()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005F19E0.json)
}
} // namespace gamemd

// 0x5F1BC0
namespace gamemd {
bool NullModemClass::Connect()
{
    return false; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005F1BC0.json)
}
} // namespace gamemd

// 0x5F1F70
namespace gamemd {
bool NullModemClass::SendPacket(const uint8_t*, int32_t)
{
    return false; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005F1F70.json)
}
} // namespace gamemd

// 0x5F1FA0
namespace gamemd {
bool NullModemClass::DetectModem()
{
    return false; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005F1FA0.json)
}
} // namespace gamemd

// 0x5F3170
namespace gamemd {
bool NullModemClass::Negotiate()
{
    return false; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005F3170.json)
}
} // namespace gamemd

// 0x6425F0
namespace gamemd {
void ModemGame::RenderPaletteImage()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006425F0.json)
}
} // namespace gamemd

// 0x645820
namespace gamemd {
void NetworkEventClass::Process()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00645820.json)
}
} // namespace gamemd

// 0x664240
namespace gamemd {
void NetworkManager::SetPlayerAddress()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00664240.json)
}
} // namespace gamemd

// 0x664530
namespace gamemd {
void NetworkEventQueueClass::WaitForResponse()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00664530.json)
}
} // namespace gamemd

// 0x6646C0
namespace gamemd {
void NetworkManager::RemovePlayer()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006646C0.json)
}
} // namespace gamemd

// 0x695FD0
namespace gamemd {
void NetworkDialog::InitModemSettings()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00695FD0.json)
}
} // namespace gamemd

// 0x6964C0
namespace gamemd {
void NetworkDialog::Dispatch()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006964C0.json)
}
} // namespace gamemd

// 0x696610
namespace gamemd {
void NetworkDialog::UpdateListBox()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00696610.json)
}
} // namespace gamemd

// 0x69B600
namespace gamemd {
void NetworkSession::IsPlayerInGame()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0069B600.json)
}
} // namespace gamemd

// 0x74FD50
namespace gamemd {
bool NetworkBuffer::GetField()
{
    return false; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0074FD50.json)
}
} // namespace gamemd

// 0x74FD60
namespace gamemd {
int NetworkBuffer::UpdateWindow()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0074FD60.json)
}
} // namespace gamemd

// 0x74FDA0
namespace gamemd {
void NetworkBuffer::GetField2()
{
    // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x74FDA0)
}
} // namespace gamemd

// 0x74FDB0
namespace gamemd {
void NetworkBuffer::GetField3()
{
    // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x74FDB0)
}
} // namespace gamemd

// 0x77A4A0
namespace gamemd {
void WOLOption::SetValue()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0077A4A0.json)
}
} // namespace gamemd

// 0x77A4D0
namespace gamemd {
void WOLPersona::FormatDateTime()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0077A4D0.json)
}
} // namespace gamemd

// 0x77A840
namespace gamemd {
void WOLGameList::Check()
{
    // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x77A840)
}
} // namespace gamemd

// 0x781D20
namespace gamemd {
void WOLobby::BuildStateList()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00781D20.json)
}
} // namespace gamemd

// 0x783800
namespace gamemd {
void WOLobby::BuildPlayerList()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00783800.json)
}
} // namespace gamemd

// 0x78F5C0
namespace gamemd {
void WOLobby::FormatLatencyText()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0078F5C0.json)
}
} // namespace gamemd

// 0x7A3100
namespace gamemd {
void WOLGameList::PopulateLobbyLists()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x007A3100.json)
}
} // namespace gamemd

// 0x7ADA70
namespace gamemd {
char WOLGameList::EnsureCapacity()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x007ADA70.json)
}
} // namespace gamemd

// 0x7AE020
namespace gamemd {
void WOLGameList::GrowBuffer()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x007AE020.json)
}
} // namespace gamemd

// 0x7B2F90
namespace gamemd {
void UDPInterfaceClass_Destru::GetQueueSize()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x007B2F90.json)
}
} // namespace gamemd

// 0x7B2FF0
namespace gamemd {
void UDPInterfaceClass_Destru::Flush()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x007B2FF0.json)
}
} // namespace gamemd

// 0x7B30B0
namespace gamemd {
int UDPInterfaceClass_Destru::Send()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x007B30B0.json)
}
} // namespace gamemd

// 0x7B31E0
namespace gamemd {
void UDPInterfaceClass_Destru::SetAddress()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x007B31E0.json)
}
} // namespace gamemd

// 0x7B3430
namespace gamemd {
void UDPInterfaceClass_Destru::GetAddress()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x007B3430.json)
}
} // namespace gamemd

