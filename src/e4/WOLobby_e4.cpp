// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/Dialog_e4.hpp"
#include "e4/classes/Event_e4.hpp"
#include "e4/classes/Game_e4.hpp"
#include "e4/classes/GameClass_e4.hpp"
#include "e4/classes/Network_e4.hpp"
#include "e4/classes/NetworkLobby_e4.hpp"
#include "e4/classes/Session_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/Timer_e4.hpp"
#include "e4/classes/WideString_e4.hpp"
#include "e4/classes/INIClass_e4.hpp"
#include "e4/classes/WOLobby_e4.hpp"
#include "e4/classes/HashTable_flat_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/WalkLocomotion_e4.hpp"
#include "e4/classes/ThemeClass_e4.hpp"
#include "e4/classes/Audio_e4.hpp"
#include "e4/classes/WWMouseClass_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/Building_e4.hpp"
#include "e4/classes/WebBrowser_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/CellClass_e4.hpp"
#include "e4/classes/Mouse_e4.hpp"
#include "e4/classes/ShipLocomotionClass_e4.hpp"
#include "e4/classes/Lobby_e4.hpp"
#include "e4/classes/SessionClass_e4.hpp"
#include "e4/classes/SkirmishDialog_e4.hpp"
#include "e4/classes/ConvertClass_e4.hpp"
#include "e4/classes/DeleteAndZero_e4.hpp"
#include "e4/classes/FileTreeNode_e4.hpp"

// 0x5E3850
namespace gamemd {
int INIClass::WOLobby_Play(const char *a1, const char *a2, int a3)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5E3850)
}
}
// 0x78F7F0
namespace gamemd {  // G42.18c ns repair
int WOLobby::SetupDlgProc(HWND hDlg, unsigned int a2, unsigned int nIDDlgItem, HWND hWnd)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x78F7F0)
}
}  // G42.18c ns repair

// 0x791B10
namespace gamemd {  // G42.18c ns repair
int WOLobby::ChatDlgProc(HWND hDlg, UINT, WPARAM, HWND hWnd)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x791B10)
}
}  // G42.18c ns repair

// 0x603F60
namespace gamemd {
wchar_t ** WOLobby_Setup(wchar_t ** a1, HWND a2, LPARAM)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x603F60)
}
} // namespace gamemd

// 0x72BAC0
namespace gamemd {
char sub_72BAC0()
{
  char result; // al

  result = byte_B0FD51; /*0x72bac0*/
  if ( !byte_B0FD51 ) /*0x72bac7*/
  {
    if ( g_DisplayWidth == 800 ) /*0x72bad3*/
      dword_B0FB2C = (unsigned int)(LoadFileSHP((gamemd::ConvertClass *)(off_844DBC),(gamemd::ConvertClass *)((bool *)&byte_B0FD50))); /*0x72bae5*/
    result = LoadPaletteSimple((char *)(off_844DC0),(int *)(&dword_B0FD54), &dword_B0FD58); /*0x72bafa*/
    byte_B0FD51 = 1; /*0x72baff*/
  }
  return result; /*0x72bb06*/
}
} // namespace gamemd

// 0x72BB10
namespace gamemd {
void sub_72BB10()
{
  void *v1; // esi

  if ( g_BuildingLoadQueue_Array.__pad_F70[1441] ) /*0x72bb1a*/
  {
    if ( g_BuildingLoadQueue_Array.__pad_F70[1440] ) /*0x72bb22*/
    {
      v1 = *(void **)&g_BuildingLoadQueue_Array.__pad_F70[892]; /*0x72bb25*/
      if ( *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[892] ) /*0x72bb2d*/
      {
        FileTreeNode::Destroy(*(FileTreeNode **)&g_BuildingLoadQueue_Array.__pad_F70[892]); /*0x72bb31*/
        RA2_OPDEL(v1); /*0x72bb37*/
      }
      g_BuildingLoadQueue_Array.__pad_F70[1440] = 0; /*0x72bb3f*/
    }
    *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[892] = 0; /*0x72bb4b*/
    if ( *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[1444] ) /*0x72bb53*/
    {
      RA2_OPDEL(*(void **)&g_BuildingLoadQueue_Array.__pad_F70[1444]); /*0x72bb56*/
      *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[1444] = 0; /*0x72bb5e*/
    }
    if ( *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[1448] ) /*0x72bb6c*/
    {
      (***(void (****)(unsigned int, int))&g_BuildingLoadQueue_Array.__pad_F70[1448])( /*0x72bb72*/
        *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[1448],
        1);
      *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[1448] = 0; /*0x72bb74*/
    }
  }
  g_BuildingLoadQueue_Array.__pad_F70[1441] = 0; /*0x72bb7a*/
}
} // namespace gamemd

// 0x781090
namespace gamemd {
CampaignScore * WOLobby_Get(wchar_t ** a1, HWND a2, WPARAM wParam)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x781090)
}
} // namespace gamemd
