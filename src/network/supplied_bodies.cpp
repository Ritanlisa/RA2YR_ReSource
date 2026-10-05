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
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00048C650.json)
}
} // namespace gamemd

// 0x53ED20
namespace gamemd {
int16_t NetworkID::Assign(unsigned int *a2, int a3, int16_t a4)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00053ED20.json)
}
} // namespace gamemd

// 0x53EF30
namespace gamemd {
int NetworkID::Compare(int a2) {
    return memcmp(&this->q004, (const void *)(a2 + 4), dword_828140 != 2 ? 6 : 4) == 0;
}
} // namespace gamemd

// 0x53F850
namespace gamemd {
unsigned int * IPXConnClass::QueryInterface(char,int,int,int)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00053F850.json)
}
} // namespace gamemd

// 0x53FCB0
namespace gamemd {
int IPXGlobalConnClass::GetQueueSize(unsigned short *a2, signed int a3, int *a4, int a5)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00053FCB0.json)
}
} // namespace gamemd

// 0x540030
namespace gamemd {
unsigned int * IPXGlobalConnClass::Disconnect(int,int)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x000540030.json)
}
} // namespace gamemd

// 0x542350
namespace gamemd {
int IPXManagerClass::GetAddress(int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x000542350.json)
}
} // namespace gamemd

// 0x5423C0
namespace gamemd {
int IPXManagerClass::SetAddress(int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0005423C0.json)
}
} // namespace gamemd

// 0x542450
namespace gamemd {
unsigned int IPXManagerClass::GetQueueSize()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x000542450.json)
}
} // namespace gamemd

// 0x5424A0
namespace gamemd {
int IPXManagerClass::CheckStatus(int a2) {
    return CellClass::GetBridgeIndex(*(CellClass **)(*((unsigned int *)this + a2 + 10) + 4)); /*0x5424b0*/
}
} // namespace gamemd

// 0x542520
namespace gamemd {
int IPXManagerClass::ProcessQueue() {
    int v2; // ebx
    int result; // eax
    IPXManagerClass *v4; // edi
    int *v5; // esi
    Object *v6; // ecx
    int *v7; // eax
    int v8; // ecx
    int v9; // eax
    unsigned int v10; // kr00_4
    signed int v11; // eax

    v2 = 0; /*0x542524*/
    result = *((unsigned int *)this + 17); /*0x542526*/
    if ( result > 0 ) /*0x54252b*/
    {
      v4 = this + 5; /*0x542533*/
      v5 = (int *)&unk_A8B5B4; /*0x542536*/
      do /*0x54260c*/
      {
        v6 = (Object *)*((unsigned int *)stru_A80220 + *(unsigned int *)(v4->Socket + 100)); /*0x542546*/
        if ( v6 && v6 != dword_A83D4C ) /*0x542557*/
        {
          if ( !*((unsigned char *)v5 - 64) ) /*0x54255d*/
          {
            CopyWideToChar((unsigned char *)v5 - 64, (char *)(v4->Socket + 104), -1); /*0x54256c*/
            v7 = (int *)(v4->Socket + 76); /*0x542576*/
            v5[7] = *v7; /*0x54257b*/
            v5[8] = v7[1]; /*0x542580*/
            v5[9] = v7[2]; /*0x542586*/
          }
          v8 = 1000 * IPXManagerClass::init(*(IPXManagerClass **)(v4->Socket + 4)); /*0x5425a1*/
          v9 = *v5; /*0x5425b2*/
          if ( *v5 <= v8 / 60 ) /*0x5425b6*/
            v9 = v8 / 60; /*0x5425b8*/
          *v5 = v9; /*0x5425ba*/
          v10 = 1000 * CellClass::GetBridgeIndex(*(CellClass **)(v4->Socket + 4)); /*0x5425c6*/
          v11 = v5[4]; /*0x5425d9*/
          if ( (int)(v10 / 0x3C) > v11 ) /*0x5425e1*/
            v11 = v10 / 0x3C; /*0x5425e3*/
          v5[4] = v11; /*0x5425e5*/
          v5[1] = *(unsigned int *)(v4->Socket + 8); /*0x5425ed*/
          v5[2] = *(unsigned int *)(v4->Socket + 12); /*0x5425f5*/
          v5[3] = *(unsigned int *)(v4->Socket + 16); /*0x5425fd*/
        }
        result = *((unsigned int *)this + 17); /*0x542600*/
        ++v2; /*0x542603*/
        v4 = (IPXManagerClass *)((char *)v4 + 4); /*0x542604*/
        v5 += 26; /*0x542607*/
      }
      while ( v2 < result ); /*0x54260c*/
    }

// 0x542520
namespace gamemd {
int IPXManagerClass::ProcessQueue()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x000542520.json)
}
} // namespace gamemd

// 0x542EC0
namespace gamemd {
void IPXManagerClass::Flush()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x000542EC0.json)
}
} // namespace gamemd

// 0x543100
namespace gamemd {
int32_t IPXManagerClass::getPlayerName()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x000543100.json)
}
} // namespace gamemd

// 0x54EE60
namespace gamemd {
unsigned int * NetworkSession::ResetState()
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00054EE60.json)
}
} // namespace gamemd

// 0x560480
namespace gamemd {
void NetworkOptions::DlgProc()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x000560480.json)
}
} // namespace gamemd

// 0x5B49B0
namespace gamemd {
void ModemGuest::Dialog()
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
void ModemGame::AdvanceTauntCommand()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0005B59B0.json)
}
} // namespace gamemd

// 0x5B5AD0
namespace gamemd {
void ModemGame::UpdatePlayerNameAndColor()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0005B5AD0.json)
}
} // namespace gamemd

// 0x5B6020
namespace gamemd {
void ModemGame::ProcessPacket()
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
void ModemHost::Dialog()
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
void NetworkGameSetup::ReadRulesInitConfig()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0005B9680.json)
}
} // namespace gamemd

// 0x5B96B0
namespace gamemd {
void NetworkGameSetup::ReadRulesBases()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0005B96B0.json)
}
} // namespace gamemd

// 0x5B96E0
namespace gamemd {
void NetworkGameSetup::ReadRulesAlliesAllowed()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0005B96E0.json)
}
} // namespace gamemd

// 0x5B9710
namespace gamemd {
void NetworkGameSetup::ReadRulesEngineerCount()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0005B9710.json)
}
} // namespace gamemd

// 0x5BA060
namespace gamemd {
void ModemGuest::ProcessPacket()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0005BA060.json)
}
} // namespace gamemd

// 0x5BAC60
namespace gamemd {
void ModemHost::StartGame()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0005BAC60.json)
}
} // namespace gamemd

// 0x5C1090
namespace gamemd {
bool MultiplayerBattleTeam::AddRef() {
    return PlayerClass::IsValidIndex((int)this); /*0x5c109f*/
}
} // namespace gamemd

// 0x5C10B0
namespace gamemd {
bool MultiplayerBattleTeam::Release(int a2) {
    return PlayerClass::SetHouse((MultiplayerTeam *)this, a2) != 0; /*0x5c10bf*/
}
} // namespace gamemd

// 0x5C10D0
namespace gamemd {
void ** MultiplayerBattleTeam::QueryInterface(char a2) {
    MultiplayerTeam::Destructor((MultiplayerTeam *)this); /*0x5c10d3*/
    if ( (a2 & 1) != 0 ) /*0x5c10dd*/
      RA2_OPDEL(this); /*0x5c10e0*/
    return (void **)this; /*0x5c10ea*/
}
} // namespace gamemd

// 0x5C94C0
namespace gamemd {
bool MultiplayerObserverTeam::AddRef() {
    return PlayerClass::IsValidIndex((int)this); /*0x5c94ca*/
}
} // namespace gamemd

// 0x5C94D0
namespace gamemd {
void ** MultiplayerObserverTeam::QueryInterface(char a2) {
    MultiplayerTeam::Destructor((MultiplayerTeam *)this); /*0x5c94d3*/
    if ( (a2 & 1) != 0 ) /*0x5c94dd*/
      RA2_OPDEL(this); /*0x5c94e0*/
    return (void **)this; /*0x5c94ea*/
}
} // namespace gamemd

// 0x5CAE70
namespace gamemd {
char MultiplayerSiegeDefenderTeam::AddRef() {
    MultiplayerSiegeDefenderTeam *v1; // ecx
    char result; // al
    unsigned int *i; // esi

    v1 = 0; /*0x5cae77*/
    result = 1; /*0x5cae7d*/
    if ( dword_A8DA84 > 0 ) /*0x5cae82*/
    {
      for ( i = dword_A8DA78; this == v1 || *(unsigned int *)(*i + 107) != 1; ++i ) /*0x5cae84*/
      {
        v1 = (MultiplayerSiegeDefenderTeam *)((char *)v1 + 1); /*0x5cae99*/
        if ( (int)v1 >= dword_A8DA84 ) /*0x5cae9f*/
          return result; /*0x5cae9f*/
      }
      return 0; /*0x5caea7*/
    }

// 0x5C10B0
namespace gamemd {
bool MultiplayerBattleTeam::Release(int a2) {
    return PlayerClass::SetHouse((MultiplayerTeam *)this, a2) != 0; /*0x5c10bf*/
}
} // namespace gamemd

// 0x5C10D0
namespace gamemd {
void ** MultiplayerBattleTeam::QueryInterface(char a2) {
    MultiplayerTeam::Destructor((MultiplayerTeam *)this); /*0x5c10d3*/
    if ( (a2 & 1) != 0 ) /*0x5c10dd*/
      RA2_OPDEL(this); /*0x5c10e0*/
    return (void **)this; /*0x5c10ea*/
}
} // namespace gamemd

// 0x5C94C0
namespace gamemd {
bool MultiplayerObserverTeam::AddRef() {
    return PlayerClass::IsValidIndex((int)this); /*0x5c94ca*/
}
} // namespace gamemd

// 0x5C94D0
namespace gamemd {
void ** MultiplayerObserverTeam::QueryInterface(char a2) {
    MultiplayerTeam::Destructor((MultiplayerTeam *)this); /*0x5c94d3*/
    if ( (a2 & 1) != 0 ) /*0x5c94dd*/
      RA2_OPDEL(this); /*0x5c94e0*/
    return (void **)this; /*0x5c94ea*/
}
} // namespace gamemd

// 0x5CAE70
namespace gamemd {
char MultiplayerSiegeDefenderTeam::AddRef() {
    MultiplayerSiegeDefenderTeam *v1; // ecx
    char result; // al
    unsigned int *i; // esi

    v1 = 0; /*0x5cae77*/
    result = 1; /*0x5cae7d*/
    if ( dword_A8DA84 > 0 ) /*0x5cae82*/
    {
      for ( i = dword_A8DA78; this == v1 || *(unsigned int *)(*i + 107) != 1; ++i ) /*0x5cae84*/
      {
        v1 = (MultiplayerSiegeDefenderTeam *)((char *)v1 + 1); /*0x5cae99*/
        if ( (int)v1 >= dword_A8DA84 ) /*0x5cae9f*/
          return result; /*0x5cae9f*/
      }
      return 0; /*0x5caea7*/
    }

// 0x5C10D0
namespace gamemd {
void MultiplayerBattleTeam::QueryInterface()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0005C10D0.json)
}
} // namespace gamemd

// 0x5C94C0
namespace gamemd {
bool MultiplayerObserverTeam::AddRef() {
    return PlayerClass::IsValidIndex((int)this); /*0x5c94ca*/
}
} // namespace gamemd

// 0x5C94D0
namespace gamemd {
void ** MultiplayerObserverTeam::QueryInterface(char a2) {
    MultiplayerTeam::Destructor((MultiplayerTeam *)this); /*0x5c94d3*/
    if ( (a2 & 1) != 0 ) /*0x5c94dd*/
      RA2_OPDEL(this); /*0x5c94e0*/
    return (void **)this; /*0x5c94ea*/
}
} // namespace gamemd

// 0x5CAE70
namespace gamemd {
char MultiplayerSiegeDefenderTeam::AddRef() {
    MultiplayerSiegeDefenderTeam *v1; // ecx
    char result; // al
    unsigned int *i; // esi

    v1 = 0; /*0x5cae77*/
    result = 1; /*0x5cae7d*/
    if ( dword_A8DA84 > 0 ) /*0x5cae82*/
    {
      for ( i = dword_A8DA78; this == v1 || *(unsigned int *)(*i + 107) != 1; ++i ) /*0x5cae84*/
      {
        v1 = (MultiplayerSiegeDefenderTeam *)((char *)v1 + 1); /*0x5cae99*/
        if ( (int)v1 >= dword_A8DA84 ) /*0x5cae9f*/
          return result; /*0x5cae9f*/
      }
      return 0; /*0x5caea7*/
    }

// 0x5C94D0
namespace gamemd {
void MultiplayerObserverTeam::QueryInterface()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0005C94D0.json)
}
} // namespace gamemd

// 0x5CAE70
namespace gamemd {
void MultiplayerSiegeDefenderTeam::AddRef()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0005CAE70.json)
}
} // namespace gamemd

// 0x5CAF10
namespace gamemd {
void MultiplayerSiegeDefenderTeam::QueryInterface()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0005CAF10.json)
}
} // namespace gamemd

// 0x5CAF40
namespace gamemd {
void MultiplayerSiegeAttackerTeam::QueryInterface()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0005CAF40.json)
}
} // namespace gamemd

// 0x5D8860
namespace gamemd {
void MultiplayerTeamVector::Destruct()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0005D8860.json)
}
} // namespace gamemd

// 0x5D88B0
namespace gamemd {
void MultiplayerModeVector::Destruct()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0005D88B0.json)
}
} // namespace gamemd

// 0x5D8900
namespace gamemd {
void MultiplayerModeVector2::Destruct()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0005D8900.json)
}
} // namespace gamemd

// 0x5D8C50
namespace gamemd {
void MultiplayerTeam::Constructor()
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
void MultiplayerTeam_Destru::QueryInterface()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0005D8D50.json)
}
} // namespace gamemd

// 0x5DDBD0
namespace gamemd {
void NetworkSettings::DlgProc()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0005DDBD0.json)
}
} // namespace gamemd

// 0x5E8D00
namespace gamemd {
void WOLobby::FindPlayerIndex()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0005E8D00.json)
}
} // namespace gamemd

// 0x5E8DA0
namespace gamemd {
bool NetworkShare::GetField()
{
    return false; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0005E8DA0.json)
}
} // namespace gamemd

// 0x5EC030
namespace gamemd {
void MultiplayerLobby::FillSlots()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0005EC030.json)
}
} // namespace gamemd

// 0x5EF100
namespace gamemd {
bool NullModemClass::initConnection()
{
    return false; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0005EF100.json)
}
} // namespace gamemd

// 0x5EF170
namespace gamemd {
bool NullModemClass::closeConnection()
{
    return false; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0005EF170.json)
}
} // namespace gamemd

// 0x5F0690
namespace gamemd {
void Modem::CheckStatus()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0005F0690.json)
}
} // namespace gamemd

// 0x5F0D60
namespace gamemd {
void Modem::DetectAndConnect()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0005F0D60.json)
}
} // namespace gamemd

// 0x5F16E0
namespace gamemd {
bool NullModemClass::Init()
{
    return false; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0005F16E0.json)
}
} // namespace gamemd

// 0x5F19E0
namespace gamemd {
void Modem::OpenPort()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0005F19E0.json)
}
} // namespace gamemd

// 0x5F1BC0
namespace gamemd {
bool NullModemClass::Connect()
{
    return false; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0005F1BC0.json)
}
} // namespace gamemd

// 0x5F1F70
namespace gamemd {
bool NullModemClass::SendPacket(const uint8_t*, int32_t)
{
    return false; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0005F1F70.json)
}
} // namespace gamemd

// 0x5F1FA0
namespace gamemd {
bool NullModemClass::DetectModem()
{
    return false; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0005F1FA0.json)
}
} // namespace gamemd

// 0x5F3170
namespace gamemd {
bool NullModemClass::Negotiate()
{
    return false; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0005F3170.json)
}
} // namespace gamemd

// 0x6425F0
namespace gamemd {
void ModemGame::RenderPaletteImage()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0006425F0.json)
}
} // namespace gamemd

// 0x645820
namespace gamemd {
void NetworkEventClass::Process()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x000645820.json)
}
} // namespace gamemd

// 0x664240
namespace gamemd {
void NetworkManager::SetPlayerAddress()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x000664240.json)
}
} // namespace gamemd

// 0x664530
namespace gamemd {
void NetworkEventQueueClass::WaitForResponse()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x000664530.json)
}
} // namespace gamemd

// 0x6646C0
namespace gamemd {
void NetworkManager::RemovePlayer()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0006646C0.json)
}
} // namespace gamemd

// 0x695FD0
namespace gamemd {
void NetworkDialog::InitModemSettings()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x000695FD0.json)
}
} // namespace gamemd

// 0x6964C0
namespace gamemd {
void NetworkDialog::Dispatch()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0006964C0.json)
}
} // namespace gamemd

// 0x696610
namespace gamemd {
void NetworkDialog::UpdateListBox()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x000696610.json)
}
} // namespace gamemd

// 0x69B600
namespace gamemd {
void NetworkSession::IsPlayerInGame()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00069B600.json)
}
} // namespace gamemd

// 0x74FD50
namespace gamemd {
bool NetworkBuffer::GetField()
{
    return false; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00074FD50.json)
}
} // namespace gamemd

// 0x74FD60
namespace gamemd {
int NetworkBuffer::UpdateWindow()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00074FD60.json)
}
} // namespace gamemd

// 0x74FDA0
namespace gamemd {
int NetworkBuffer::GetField2() {
    return 0x20000; /*0x74fda5*/
}
} // namespace gamemd

// 0x74FDB0
namespace gamemd {
int NetworkBuffer::GetField3() {
    return 0x20000; /*0x74fdb5*/
}
} // namespace gamemd

// 0x77A4A0
namespace gamemd {
uint8_t WOLOption::SetValue(const char **a2) {
    uint8_t result; // al

    result = String::Compare(a2, (const char **)(this + 12)); /*0x77a4af*/
    if ( !result ) /*0x77a4b6*/
    {
      result = (uint8_t)String::Reassign((char **)(this + 12), a2); /*0x77a4bb*/
      *(unsigned char *)(this + 8) = 1; /*0x77a4c0*/
    }

// 0x74FDB0
namespace gamemd {
int NetworkBuffer::GetField3() {
    return 0x20000; /*0x74fdb5*/
}
} // namespace gamemd

// 0x77A4A0
namespace gamemd {
uint8_t WOLOption::SetValue(const char **a2) {
    uint8_t result; // al

    result = String::Compare(a2, (const char **)(this + 12)); /*0x77a4af*/
    if ( !result ) /*0x77a4b6*/
    {
      result = (uint8_t)String::Reassign((char **)(this + 12), a2); /*0x77a4bb*/
      *(unsigned char *)(this + 8) = 1; /*0x77a4c0*/
    }

// 0x77A4A0
namespace gamemd {
void WOLOption::SetValue()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00077A4A0.json)
}
} // namespace gamemd

// 0x77A4D0
namespace gamemd {
void WOLPersona::FormatDateTime()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00077A4D0.json)
}
} // namespace gamemd

// 0x77A840
namespace gamemd {
bool WOLGameList::Check(int a2) {
    return *(unsigned int *)(a2 + 28) != *((unsigned int *)this + 9) || *(unsigned int *)(a2 + 16) != *((unsigned int *)this + 10); /*0x77a84d*/
}
} // namespace gamemd

// 0x781D20
namespace gamemd {
void WOLobby::BuildStateList(char a1) {
    signed int v1; // esi
    signed int v2; // ebx
    int *v3; // ebp
    int v4; // eax
    int *v5; // ebp
    char *v6; // edx
    int v7; // edx
    int v8; // eax
    int v9; // esi
    char *v10; // edi
    bool v11; // zf
    void **v12; // edi
    int v14; // [esp+14h] [ebp-84h]
    signed int v15; // [esp+14h] [ebp-84h]
    int v16[2]; // [esp+18h] [ebp-80h] BYREF
    void *Block; // [esp+20h] [ebp-78h]
    signed int v18; // [esp+24h] [ebp-74h]
    int *v19; // [esp+28h] [ebp-70h]
    unsigned int v20[27]; // [esp+2Ch] [ebp-6Ch] BYREF

    v1 = dword_B77900; /*0x781d29*/
    v2 = 0; /*0x781d30*/
    v16[0] = 0; /*0x781d3d*/
    v16[1] = 0; /*0x781d41*/
    Block = 0; /*0x781d45*/
    v18 = dword_B77900; /*0x781d49*/
    v3 = (int *)RA2_OPNEW(12 * dword_B77900); /*0x781d52*/
    v19 = v3; /*0x781d59*/
    if ( v3 ) /*0x781d5d*/
    {
      v4 = 0; /*0x781d80*/
      memset(v20, 0, sizeof(v20)); /*0x781d88*/
      if ( v1 <= 0 ) /*0x781d8a*/
      {
  LABEL_12:
        dword_B77900 = 0; /*0x781e34*/
        if ( a1 ) /*0x781e40*/
          qsort(v3, v1, 0xCu, (_CoreCrtNonSecureSearchSortCompareFunction)sub_781CC0); /*0x781e47*/
        else
          qsort(v3, v1, 0xCu, sub_781CF0); /*0x781e72*/
        if ( v1 > 0 ) /*0x781e7c*/
        {
          v7 = dword_B77900; /*0x781e82*/
          v15 = v1; /*0x781e88*/
          do /*0x781f5d*/
          {
            v8 = *v3; /*0x781e90*/
            if ( *v3 >= 0 && v8 < v16[0] ) /*0x781e9b*/
              qmemcpy(v20, (char *)Block + 108 * v8, sizeof(v20)); /*0x781eb3*/
            v9 = v7; /*0x781eb5*/
            if ( v7 >= dword_B77904 ) /*0x781ec1*/
            {
              DynamicArray::Grow(&dword_B77900); /*0x781ec8*/
              v7 = dword_B77900; /*0x781ecd*/
            }
            if ( v7 >= dword_B77904 ) /*0x781ed9*/
            {
              DynamicArray::Grow(&dword_B77900); /*0x781ee0*/
              v7 = dword_B77900; /*0x781ee5*/
            }
            if ( v9 < v7 ) /*0x781eed*/
            {
              memcpy((char *)dword_B77908 + 108 * v9 + 108, (char *)dword_B77908 + 108 * v9, 108 * v7 - 108 * v9); /*0x781f18*/
              v7 = dword_B77900; /*0x781f1d*/
            }
            v10 = (char *)dword_B77908 + 108 * v9; /*0x781f32*/
            if ( v10 ) /*0x781f37*/
            {
              qmemcpy(v10, v20, 0x6Cu); /*0x781f42*/
              v7 = dword_B77900; /*0x781f44*/
            }
            ++v7; /*0x781f4e*/
            v3 += 3; /*0x781f4f*/
            v11 = v15 == 1; /*0x781f52*/
            dword_B77900 = v7; /*0x781f53*/
            --v15; /*0x781f59*/
          }
          while ( !v11 ); /*0x781f5d*/
          v3 = v19; /*0x781f63*/
          v1 = v18; /*0x781f67*/
        }
        v16[0] = 0; /*0x781f6f*/
        if ( v1 > 0 ) /*0x781f73*/
        {
          v12 = (void **)(v3 + 1); /*0x781f75*/
          do /*0x781f8b*/
          {
            if ( *v12 ) /*0x781f78*/
              RA2_OPDEL(*v12); /*0x781f7f*/
            v12 += 3; /*0x781f87*/
            --v1; /*0x781f8a*/
          }
          while ( v1 ); /*0x781f8b*/
        }
        RA2_OPDEL(v3); /*0x781f8e*/
        v16[0] = 0; /*0x781f97*/
        RA2_OPDEL(Block); /*0x781f9c*/
      }
      else
      {
        v14 = 0; /*0x781d90*/
        v5 = v3 + 2; /*0x781d94*/
        while ( 1 ) /*0x781d9d*/
        {
          if ( v4 >= 0 && v2 < (int)dword_B77900 ) /*0x781da7*/
            qmemcpy(v20, (char *)dword_B77908 + v4, sizeof(v20)); /*0x781dbb*/
          *(v5 - 2) = v2; /*0x781dbf*/
          v6 = (char *)RA2_OPNEW(0xAu); /*0x781dc7*/
          *(v5 - 1) = (int)v6; /*0x781dce*/
          if ( !v6 ) /*0x781dd1*/
            break; /*0x781dd1*/
          strcpy(v6, (const char *)&v20[9]); /*0x781deb*/
          *v5 = v20[0] & 1; /*0x781dff*/
          DynamicClass::Insert(v16, v20, v16[0]); /*0x781e0c*/
          ++v2; /*0x781e11*/
          v5 += 3; /*0x781e12*/
          v14 += 108; /*0x781e22*/
          if ( v2 >= v18 ) /*0x781e26*/
          {
            v3 = v19; /*0x781e2c*/
            v1 = v18; /*0x781e30*/
            goto LABEL_12; /*0x781e30*/
          }
          v4 = v14; /*0x781d99*/
        }
        v16[0] = 0; /*0x781e4d*/
        RA2_OPDEL(Block); /*0x781e56*/
      }
    }

// 0x781D20
namespace gamemd {
void WOLobby::BuildStateList()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x000781D20.json)
}
} // namespace gamemd

// 0x783800
namespace gamemd {
void WOLobby::BuildPlayerList()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x000783800.json)
}
} // namespace gamemd

// 0x78F5C0
namespace gamemd {
void WOLobby::FormatLatencyText()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00078F5C0.json)
}
} // namespace gamemd

// 0x7A3100
namespace gamemd {
void WOLGameList::PopulateLobbyLists()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007A3100.json)
}
} // namespace gamemd

// 0x7ADA70
namespace gamemd {
char WOLGameList::EnsureCapacity()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007ADA70.json)
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
void UDPInterfaceClass_Destru::GetQueueSize()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007B2F90.json)
}
} // namespace gamemd

// 0x7B2FF0
namespace gamemd {
void UDPInterfaceClass_Destru::Flush()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007B2FF0.json)
}
} // namespace gamemd

// 0x7B30B0
namespace gamemd {
int UDPInterfaceClass_Destru::Send()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007B30B0.json)
}
} // namespace gamemd

// 0x7B31E0
namespace gamemd {
void UDPInterfaceClass_Destru::SetAddress()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007B31E0.json)
}
} // namespace gamemd

// 0x7B3430
namespace gamemd {
void UDPInterfaceClass_Destru::GetAddress()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007B3430.json)
}
} // namespace gamemd

