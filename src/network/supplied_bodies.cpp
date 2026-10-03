// G42.32 P: tree-universe marker -- e4 tree-owned decls suppressed
#define GAMEMD_TREE_UNIVERSE 1
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
unsigned int * ConnectionClass::QueryInterface(char a2)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00048C650.json)
}
} // namespace gamemd

// 0x53ED20
namespace gamemd {
int16_t NetworkID::Assign(unsigned int *a2, int a3, int16_t a4)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00053ED20.json)
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
unsigned int * IPXConnClass::QueryInterface(char a2)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00053F850.json)
}
} // namespace gamemd

// 0x53FCB0
namespace gamemd {
int IPXGlobalConnClass::GetQueueSize(unsigned short *a2, signed int a3, int *a4, int a5)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00053FCB0.json)
}
} // namespace gamemd

// 0x540030
namespace gamemd {
unsigned int * IPXGlobalConnClass::Disconnect(int a2)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x000540030.json)
}
} // namespace gamemd

// 0x542350
namespace gamemd {
int IPXManagerClass::GetAddress(int a2)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x000542350.json)
}
} // namespace gamemd

// 0x5423C0
namespace gamemd {
int IPXManagerClass::SetAddress(int a2)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0005423C0.json)
}
} // namespace gamemd

// 0x542450
namespace gamemd {
unsigned int IPXManagerClass::GetQueueSize()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x000542450.json)
}
} // namespace gamemd

// 0x5424A0
namespace gamemd {
int IPXManagerClass::CheckStatus(int a2)
{
    // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5424A0)
}
} // namespace gamemd

// 0x542520
namespace gamemd {
int IPXManagerClass::ProcessQueue()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x000542520.json)
}
} // namespace gamemd

// 0x542EC0
namespace gamemd {
int IPXManagerClass::Flush(char a2)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x000542EC0.json)
}
} // namespace gamemd

// 0x543100
namespace gamemd {
unsigned int * IPXManagerClass::getPlayerName(char a2)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x000543100.json)
}
} // namespace gamemd

// 0x54EE60
namespace gamemd {
unsigned int * NetworkSession::ResetState()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00054EE60.json)
}
} // namespace gamemd

// 0x560480
namespace gamemd {
int NetworkOptions::DlgProc(HWND hWnd, unsigned int a2, int a3, HWND hCtl)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x000560480.json)
}
} // namespace gamemd

// 0x5B49B0
namespace gamemd {
char ModemGuest::Dialog()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0005B49B0.json)
}
} // namespace gamemd

// 0x5B4EE0
namespace gamemd {
void ModemGuest::InitDialog()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0005B4EE0.json)
}
} // namespace gamemd

// 0x5B59B0
namespace gamemd {
int ModemGame::AdvanceTauntCommand()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0005B59B0.json)
}
} // namespace gamemd

// 0x5B5AD0
namespace gamemd {
int ModemGame::UpdatePlayerNameAndColor(wchar_t *Source, unsigned int a3, int a4)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0005B5AD0.json)
}
} // namespace gamemd

// 0x5B6020
namespace gamemd {
char ModemGame::ProcessPacket()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0005B6020.json)
}
} // namespace gamemd

// 0x5B7360
namespace gamemd {
void ModemGame::ReceiveMapPreview()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0005B7360.json)
}
} // namespace gamemd

// 0x5B77E0
namespace gamemd {
char ModemHost::Dialog()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0005B77E0.json)
}
} // namespace gamemd

// 0x5B82F0
namespace gamemd {
void ModemHost::InitDialog()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0005B82F0.json)
}
} // namespace gamemd

// 0x5B9680
namespace gamemd {
int NetworkGameSetup::ReadRulesInitConfig()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0005B9680.json)
}
} // namespace gamemd

// 0x5B96B0
namespace gamemd {
int NetworkGameSetup::ReadRulesBases()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0005B96B0.json)
}
} // namespace gamemd

// 0x5B96E0
namespace gamemd {
int NetworkGameSetup::ReadRulesAlliesAllowed()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0005B96E0.json)
}
} // namespace gamemd

// 0x5B9710
namespace gamemd {
int NetworkGameSetup::ReadRulesEngineerCount()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0005B9710.json)
}
} // namespace gamemd

// 0x5BA060
namespace gamemd {
char ModemGuest::ProcessPacket(char a2)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0005BA060.json)
}
} // namespace gamemd

// 0x5BAC60
namespace gamemd {
char ModemHost::StartGame(char a2)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0005BAC60.json)
}
} // namespace gamemd

// 0x5C1090
namespace gamemd {
bool MultiplayerBattleTeam::AddRef()
{
    // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5C1090)
}
} // namespace gamemd

// 0x5C10B0
namespace gamemd {
bool MultiplayerBattleTeam::Release(int a2)
{
    // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5C10B0)
}
} // namespace gamemd

// 0x5C10D0
namespace gamemd {
void ** MultiplayerBattleTeam::QueryInterface(char a2)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0005C10D0.json)
}
} // namespace gamemd

// 0x5C94C0
namespace gamemd {
bool MultiplayerObserverTeam::AddRef()
{
    // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5C94C0)
}
} // namespace gamemd

// 0x5C94D0
namespace gamemd {
void ** MultiplayerObserverTeam::QueryInterface(char a2)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0005C94D0.json)
}
} // namespace gamemd

// 0x5CAE70
namespace gamemd {
char MultiplayerSiegeDefenderTeam::AddRef()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0005CAE70.json)
}
} // namespace gamemd

// 0x5CAF10
namespace gamemd {
void ** MultiplayerSiegeDefenderTeam::QueryInterface(char a2)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0005CAF10.json)
}
} // namespace gamemd

// 0x5CAF40
namespace gamemd {
void ** MultiplayerSiegeAttackerTeam::QueryInterface(char a2)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0005CAF40.json)
}
} // namespace gamemd

// 0x5D8860
namespace gamemd {
unsigned int * MultiplayerTeamVector::Destruct(char a2)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0005D8860.json)
}
} // namespace gamemd

// 0x5D88B0
namespace gamemd {
unsigned int * MultiplayerModeVector::Destruct(char a2)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0005D88B0.json)
}
} // namespace gamemd

// 0x5D8900
namespace gamemd {
unsigned int * MultiplayerModeVector2::Destruct(char a2)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0005D8900.json)
}
} // namespace gamemd

// 0x5D8C50
namespace gamemd {
wchar_t ** MultiplayerTeam::Constructor(const wchar_t **a2, wchar_t *a3)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0005D8C50.json)
}
} // namespace gamemd

// 0x5D8C80
namespace gamemd {
void MultiplayerTeam::Destructor()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0005D8C80.json)
}
} // namespace gamemd

// 0x5D8D50
namespace gamemd {
void ** MultiplayerTeam_Destru::QueryInterface(char a2)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0005D8D50.json)
}
} // namespace gamemd

// 0x5DDBD0
namespace gamemd {
int NetworkSettings::DlgProc(HWND hWnd, UINT, DeleteAndZero)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0005DDBD0.json)
}
} // namespace gamemd

// 0x5E8D00
namespace gamemd {
int WOLobby::FindPlayerIndex()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0005E8D00.json)
}
} // namespace gamemd

// 0x5E8DA0
namespace gamemd {
int NetworkShare::GetField(int a1)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0005E8DA0.json)
}
} // namespace gamemd

// 0x5EC030
namespace gamemd {
char MultiplayerLobby::FillSlots()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0005EC030.json)
}
} // namespace gamemd

// 0x5EF100
namespace gamemd {
unsigned int * NullModemClass::initConnection(int a2, int a3, int a4, int16_t a5)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0005EF100.json)
}
} // namespace gamemd

// 0x5EF170
namespace gamemd {
int NullModemClass::closeConnection(int a2)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0005EF170.json)
}
} // namespace gamemd

// 0x5F0690
namespace gamemd {
char Modem::CheckStatus(int a2)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0005F0690.json)
}
} // namespace gamemd

// 0x5F0D60
namespace gamemd {
char Modem::DetectAndConnect(int a2)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0005F0D60.json)
}
} // namespace gamemd

// 0x5F16E0
namespace gamemd {
int NullModemClass::Init(int a2, int a3, const char *a4, int a5, char a6, int a7, int a8)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0005F16E0.json)
}
} // namespace gamemd

// 0x5F19E0
namespace gamemd {
int Modem::OpenPort(unsigned int *a2)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0005F19E0.json)
}
} // namespace gamemd

// 0x5F1BC0
namespace gamemd {
int NullModemClass::Connect(int a2, int a3, int a4, int a5)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0005F1BC0.json)
}
} // namespace gamemd

// 0x5F1F70
namespace gamemd {
int NullModemClass::SendPacket(int a2, int a3, int a4, int a5, int a6, int a7)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0005F1F70.json)
}
} // namespace gamemd

// 0x5F1FA0
namespace gamemd {
char NullModemClass::DetectModem(unsigned int *a2, int a3)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0005F1FA0.json)
}
} // namespace gamemd

// 0x5F3170
namespace gamemd {
char NullModemClass::Negotiate()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0005F3170.json)
}
} // namespace gamemd

// 0x6425F0
namespace gamemd {
int ModemGame::RenderPaletteImage(int *a2)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0006425F0.json)
}
} // namespace gamemd

// 0x645820
namespace gamemd {
unsigned int * NetworkEventClass::Process(char *Source)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x000645820.json)
}
} // namespace gamemd

// 0x664240
namespace gamemd {
int NetworkManager::SetPlayerAddress(int a2, unsigned int *a3)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x000664240.json)
}
} // namespace gamemd

// 0x664530
namespace gamemd {
int NetworkEventQueueClass::WaitForResponse()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x000664530.json)
}
} // namespace gamemd

// 0x6646C0
namespace gamemd {
char NetworkManager::RemovePlayer(int a2)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0006646C0.json)
}
} // namespace gamemd

// 0x695FD0
namespace gamemd {
int NetworkDialog::InitModemSettings(unsigned int *a2)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x000695FD0.json)
}
} // namespace gamemd

// 0x6964C0
namespace gamemd {
int NetworkDialog::Dispatch()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0006964C0.json)
}
} // namespace gamemd

// 0x696610
namespace gamemd {
int NetworkDialog::UpdateListBox()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x000696610.json)
}
} // namespace gamemd

// 0x69B600
namespace gamemd {
char NetworkSession::IsPlayerInGame(int a2)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00069B600.json)
}
} // namespace gamemd

// 0x74FD50
namespace gamemd {
int NetworkBuffer::GetField()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00074FD50.json)
}
} // namespace gamemd

// 0x74FD60
namespace gamemd {
int NetworkBuffer::UpdateWindow(unsigned int a2, unsigned int a3)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00074FD60.json)
}
} // namespace gamemd

// 0x74FDA0
namespace gamemd {
int NetworkBuffer::GetField2()
{
    // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x74FDA0)
}
} // namespace gamemd

// 0x74FDB0
namespace gamemd {
int NetworkBuffer::GetField3()
{
    // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x74FDB0)
}
} // namespace gamemd

// 0x77A4A0
namespace gamemd {
uint8_t WOLOption::SetValue(const char **a2)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00077A4A0.json)
}
} // namespace gamemd

// 0x77A4D0
namespace gamemd {
int16_t WOLPersona::FormatDateTime()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00077A4D0.json)
}
} // namespace gamemd

// 0x77A840
namespace gamemd {
bool WOLGameList::Check(int a2)
{
    // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x77A840)
}
} // namespace gamemd

// 0x781D20
namespace gamemd {
void WOLobby::BuildStateList(char a1)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x000781D20.json)
}
} // namespace gamemd

// 0x783800
namespace gamemd {
void WOLobby::BuildPlayerList(char a1)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x000783800.json)
}
} // namespace gamemd

// 0x78F5C0
namespace gamemd {
wchar_t * WOLobby::FormatLatencyText()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00078F5C0.json)
}
} // namespace gamemd

// 0x7A3100
namespace gamemd {
int WOLGameList::PopulateLobbyLists(int a2, int ***a3, int a4, int a5, int a6)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007A3100.json)
}
} // namespace gamemd

// 0x7ADA70
namespace gamemd {
char WOLGameList::EnsureCapacity()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007ADA70.json)
}
} // namespace gamemd

// 0x7AE020
namespace gamemd {
void WOLGameList::GrowBuffer()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007AE020.json)
}
} // namespace gamemd

// 0x7B2F90
namespace gamemd {
int UDPInterfaceClass_Destru::GetQueueSize()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007B2F90.json)
}
} // namespace gamemd

// 0x7B2FF0
namespace gamemd {
int UDPInterfaceClass_Destru::Flush(char *Buffer, u_short a3)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007B2FF0.json)
}
} // namespace gamemd

// 0x7B30B0
namespace gamemd {
char UDPInterfaceClass_Destru::Send(u_short a2)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007B30B0.json)
}
} // namespace gamemd

// 0x7B31E0
namespace gamemd {
char UDPInterfaceClass_Destru::SetAddress(u_short hostshort)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007B31E0.json)
}
} // namespace gamemd

// 0x7B3430
namespace gamemd {
char UDPInterfaceClass_Destru::GetAddress()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007B3430.json)
}
} // namespace gamemd

