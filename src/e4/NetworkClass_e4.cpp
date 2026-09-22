// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/NetworkClass_e4.hpp"
#include "e4/classes/EventClass_e4.hpp"
#include "e4/classes/ScriptAction_e4.hpp"

// 0x639FD0
namespace gamemd {
int NetworkClass::ExecutePlanningModeCmd()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  wchar_t *StringCSF; // eax
  wchar_t *v3; // eax
  char v1 = *this; /*0x639fd0*/
  if ( *this == 9 ) /*0x639fd4*/
  {
    if ( !g_PlanningModeActive ) /*0x639fdd*/
    {
      g_PlanningModeActive = 1; /*0x639fe8*/
      StringCSF = GetStringCSF((wchar_t *)g_Str_MSG_PlanningModeNoDeploy, 0, g_Str_File_PlanMgr_cpp, 3233); /*0x639ffb*/
LABEL_10:
      AddMessageListPlayerMessage(StringCSF, 480); /*0x63a07b*/
      PlayVocClass(g_RulesClass_Instance->?[3], 0x2000, 1.0, 0); /*0x63a09e*/
    }
  }
  else if ( v1 == 6 ) /*0x639fff*/
  {
    if ( !g_PlanningModeActive ) /*0x63a008*/
    {
      g_PlanningModeActive = 1; /*0x63a01f*/
      v3 = GetStringCSF(g_Str_MSG_PlanningModeNoStop, 0, g_Str_File_PlanMgr_cpp, 3233); /*0x63a026*/
      AddMessageListPlayerMessage(v3, 480); /*0x63a032*/
      PlayVocClass(g_RulesClass_Instance->?[3], 0x2000, 1.0, 0); /*0x63a04f*/
    }
  }
  else if ( v1 == 7 && !g_PlanningModeActive ) /*0x63a05c*/
  {
    g_PlanningModeActive = 1; /*0x63a063*/
    StringCSF = GetStringCSF(g_Str_MSG_PlanningModeNoScatter, 0, g_Str_File_PlanMgr_cpp, 3233); /*0x63a076*/
    goto LABEL_10; /*0x63a076*/
  }
  return PlayVocClass(g_RulesClass_Instance->?[3], 0x2000, 1.0, 0); /*0x63a0c0*/
}
}
} // namespace gamemd

// 0x6FFE00
namespace gamemd {
AbstractClass * NetworkClass::RecordEvent()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  _BYTE *WaypointCoords; // eax
  int result; // eax
  __int16 v6; // [esp+7Ch] [ebp-4h]
  unsigned __int8 v8; // [esp+84h] [ebp+4h]
  _BYTE v4[8]; // [esp+8h] [ebp-78h] BYREF
  WaypointCoords = ScriptAction::GetWaypointCoords(v4, (IUnknown *)this); /*0x6ffe0a*/
  EventClass::Add( /*0x6ffe34*/
  char v5[108]; // [esp+10h] [ebp-70h] BYREF
    v5,
    *(AbstractClass **)&HouseClass_Player->__pad_28[8],
    v8,
    *(_DWORD *)WaypointCoords,
    WaypointCoords[4]);
  if ( FactoryClass::GetFlag() ) /*0x6ffe39*/
  {
    result = NetworkClass::ExecutePlanningModeCmd(v5); /*0x6ffe46*/
    LOBYTE(result) = 0; /*0x6ffe4b*/
  }
  else
  {
    if ( Networking_LastEventIndex < 128 ) /*0x6ffe5f*/
    {
      char * v3 = &g_NetworkPacketIndex[111 * Networking_NextPacketIndex]; /*0x6ffe75*/
      qmemcpy(v3, v5, 0x6Cu); /*0x6ffe7c*/
      v3 += 108; /*0x6ffe7c*/
      *(_WORD *)v3 = v6; /*0x6ffe7e*/
      char v7 = v7; /*0x6ffe80*/
      g_CrateSystemState[Networking_NextPacketIndex] = timeGetTime(); /*0x6ffe8d*/
      Networking_NextPacketIndex = ((_BYTE)Networking_NextPacketIndex + 1) & 0x7F; /*0x6ffe9d*/
      result = ++Networking_LastEventIndex; /*0x6ffea7*/
    }
    LOBYTE(result) = 1; /*0x6ffeae*/
  }
  return result; /*0x6ffe4d*/
}
}
} // namespace gamemd

// 0x7B1C50
namespace gamemd {
AnimClass * NetworkClass::UnregisterAsync()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  HWND v2; // ecx
  SOCKET v3; // eax
  SOCKET result; // eax

  v2 = g_hWnd; /*0x7b1c53*/
  v3 = *(this + 64539); /*0x7b1c59*/
  if ( v3 != -1 && g_hWnd ) /*0x7b1c66*/
  {
    WSAAsyncSelect(v3, g_hWnd, 0, 0); /*0x7b1c6e*/
    v2 = g_hWnd; /*0x7b1c73*/
  }
  result = *(this + 64540); /*0x7b1c79*/
  if ( result != -1 ) /*0x7b1c83*/
  {
    if ( v2 ) /*0x7b1c87*/
      return WSAAsyncSelect(result, v2, 0, 0); /*0x7b1c8f*/
  }
  return result; /*0x7b1c7f*/
}
}
} // namespace gamemd
