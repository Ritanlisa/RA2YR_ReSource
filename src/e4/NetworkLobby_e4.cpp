// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/classes/SideClass_e4.hpp"
#include "e4/classes/MessageListClass_e4.hpp"
#include "e4/classes/SessionClass_e4.hpp"
#include "e4/classes/SkirmishDialog_e4.hpp"
#include "e4/classes/Random_e4.hpp"

#include "e4/e4_globals.hpp"
#include "e4/classes/NetworkLobby_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/Dialog_e4.hpp"
#include "e4/classes/Event_e4.hpp"
#include "e4/classes/Game_e4.hpp"
#include "e4/classes/GameClass_e4.hpp"
#include "e4/classes/Network_e4.hpp"
#include "e4/classes/Scenario_e4.hpp"
#include "e4/classes/Session_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/Timer_e4.hpp"
#include "e4/classes/Waypoint_e4.hpp"
#include "e4/classes/WideString_e4.hpp"
#include "e4/classes/CellStruct_e4.hpp"
#include "e4/classes/CoordStruct_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/ScriptAction_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/Process_e4.hpp"
#include "e4/classes/BuildingPlacement_e4.hpp"
#include "e4/classes/HouseClass_e4.hpp"
#include "e4/classes/Stream_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/NeuronClass_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/NeuronClass_25_e4.hpp"
#include "e4/classes/TechnoTypeClass_e4.hpp"
#include "e4/classes/AnimClass_e4.hpp"
#include "e4/classes/NetworkClass_e4.hpp"
#include "e4/classes/VectorClass_flat_e4.hpp"
#include "e4/classes/GameSetup_e4.hpp"
#include "e4/classes/Lobby_e4.hpp"
#include "e4/classes/LoadScreen_e4.hpp"
#include "e4/classes/ComPtr_e4.hpp"
#include "e4/classes/DeleteAndZero_e4.hpp"
#include "e4/classes/Player_e4.hpp"
#include "e4/classes/Render_e4.hpp"
#include "e4/classes/Settings_e4.hpp"
#include "e4/classes/Skirmish_e4.hpp"
#include "e4/classes/VtableStub_e4.hpp"

// 0x5D4210
namespace gamemd {
int MessageList_Append(int a2, int a3, wchar_t *aP3, char a5, int a6)
{
    (void)a2; (void)a3; (void)aP3; (void)a5; (void)a6; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005D4210.json)
}
}
// 0x5DB9B0
namespace gamemd {
int NetworkLobby_UpdatePlayerList()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005DB9B0.json)
}
}
// 0x5DC350
namespace gamemd {
int CreateGame()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005DC350.json)
}
} // namespace gamemd

// 0x5DE520
namespace gamemd {
INT_PTR DlgProc_Wnd(HWND hDlg, UINT msg, int nIDDlgItem, unsigned int lParam)
{
    (void)hDlg; (void)msg; (void)nIDDlgItem; (void)lParam; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005DE520.json)
}
}
// 0x5E00B0
namespace gamemd {
void NetworkLobby_MessageHandler()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005E00B0.json)
}

} // namespace gamemd

// 0x5E8EA0
namespace gamemd {
void SetupPlayers(wchar_t * Source)
{
    (void)Source;  // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005E8EA0.json)
}
}
// 0x5E9240
namespace gamemd {
int AssignPlayerSlot()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005E9240.json)
}
}
// 0x5E9E00
namespace gamemd {
int InitLobbyDropdowns(SessionClass * hDlg)
{
    (void)hDlg; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005E9E00.json)
}
}
// 0x5EA2A0
namespace gamemd {
void * Dispatch()
{
     return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005EA2A0.json)
}
}
// 0x5EB660
namespace gamemd {
int SetupPlayerSlotControls(HWND hDlg)
{
    (void)hDlg; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005EB660.json)
}
}
// 0x5EE3A0
namespace gamemd {
char FillOptionCombo()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005EE3A0.json)
}
}
// 0x5DA080
namespace gamemd {
int GetPlayerCount(char a1)
{
    (void)a1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005DA080.json)
}
} // namespace gamemd

// 0x5DC170
namespace gamemd {
char ValidateSerialNumber()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005DC170.json)
}
} // namespace gamemd

// 0x5E9290
namespace gamemd {
char CheckLobbyConditions()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005E9290.json)
}
} // namespace gamemd

// 0x5E9470
namespace gamemd {
BOOL NetworkLobby::IsValidPlayerName()
{

  return this /*0x5e9499*/
      && this != (NetworkLobby *)g_HouseClass_ObserverFlags
      && this != (NetworkLobby *)g_Lobby_PlayerCount
      && this != (NetworkLobby *)g_Lobby_MaxPlayers
      && this != (NetworkLobby *)g_Lobby_PlayerReady;

}
} // namespace gamemd

// 0x5E9510
namespace gamemd {
bool CheckMinPlayers()
{
     return false; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005E9510.json)
}
} // namespace gamemd

// 0x5E96A0
namespace gamemd {
char CheckPlayerNameValid()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005E96A0.json)
}
} // namespace gamemd

// 0x5E9720
namespace gamemd {
char CheckPlayerNames()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005E9720.json)
}
} // namespace gamemd

// 0x5EDFC0
namespace gamemd {
wchar_t * DeleteAndZero()
{
     return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005EDFC0.json)
}
} // namespace gamemd

// 0x5EE6A0
namespace gamemd {
void UpdateLabels(HWND hDlg)
{
    (void)hDlg;  // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005EE6A0.json)
}
} // namespace gamemd
