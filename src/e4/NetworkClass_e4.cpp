// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/NetworkClass_e4.hpp"
#include "e4/classes/EventClass_e4.hpp"
#include "e4/classes/ScriptAction_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/FactoryClass_e4.hpp"
#include "e4/classes/SOCKET_e4.hpp"
#include "e4/classes/AnimClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/Multiplayer_e4.hpp"
#include "e4/classes/Stream_e4.hpp"
#include "e4/classes/NetworkLobby_e4.hpp"
#include "e4/classes/CellStruct_e4.hpp"
#include "e4/classes/Network_e4.hpp"
#include "e4/classes/NetworkGameSetup_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/Timer_e4.hpp"
#include "e4/classes/Dialog_e4.hpp"
#include "e4/classes/CoordStruct_e4.hpp"
#include "e4/classes/Debug_e4.hpp"

// 0x639FD0
namespace gamemd {
void NetworkClass::ExecutePlanningModeCmd()
{
    unsigned int v3 = 0;  /* G37 hoist */
    unsigned int v3 = 0;  /* G37 hoist */
    unsigned int v3 = 0;  /* G37 hoist */
    unsigned int v3 = 0;  /* G37 hoist */
    unsigned int v3 = 0;  /* G37 hoist */
    unsigned int v3 = 0;  /* G37 hoist */
    unsigned int v3 = 0;  /* G37 hoist */
    unsigned int v3 = 0;  /* G37 hoist */
    unsigned int v3 = 0;  /* G37 hoist */
    unsigned int v3 = 0;  /* G37 hoist */
    unsigned int v3 = 0;  /* G37 hoist */
    unsigned int v3 = 0;  /* G37 hoist */
    unsigned int v3 = 0;  /* G37 hoist */
    unsigned int v3 = 0;  /* G37 hoist */
    unsigned int v3 = 0;  /* G37 hoist */
    unsigned int v3 = 0;  /* G37 hoist */
    unsigned int v3 = 0;  /* G37 hoist */

  char v1; // al
  wchar_t *StringCSF; // eax
  wchar_t *v3; // eax

  v1 = (char)(*this);
  if ( *this == 9 ) /*0x639fd4*/
  {
    if ( !g_abs_AC4C08 ) /*0x639fdd*/
    {
      g_abs_AC4C08 = (wchar_t *)(1);
      StringCSF = (wchar_t *)(GetStringCSF((wchar_t *)g_abs_836C34, 0, g_abs_836BD4, 3233));
LABEL_10:
      AddMessageListPlayerMessage(StringCSF, 480); /*0x63a07b*/
      PlayVocClass(g_abs_8871E0->?[3], 0x2000, 1.0, 0); /*0x63a09e*/
    }
  }
  else if ( v1 == 6 ) /*0x639fff*/
  {
    if ( !g_abs_AC4C08 ) /*0x63a008*/
    {
      g_abs_AC4C08 = (unsigned int)(1);
      v3 = (unsigned int)(GetStringCSF(g_abs_836C1C, 0, g_abs_836BD4, 3233));
      AddMessageListPlayerMessage(v3, 480); /*0x63a032*/
      PlayVocClass(g_abs_8871E0->?[3], 0x2000, 1.0, 0); /*0x63a04f*/
    }
  }
  else if ( v1 == 7 && !g_abs_AC4C08 ) /*0x63a05c*/
  {
    g_abs_AC4C08 = (wchar_t *)(1);
    StringCSF = (wchar_t *)(GetStringCSF(g_abs_836C00, 0, g_abs_836BD4, 3233));
    goto LABEL_10; /*0x63a076*/
  }
  return PlayVocClass(g_abs_8871E0->?[3], 0x2000, 1.0, 0); /*0x63a0c0*/

}
}
// 0x6FFE00
namespace gamemd {
AbstractClass * * NetworkClass::RecordEvent()
{

  unsigned char *WaypointCoords; // eax
  int (__thiscall NetworkClass::* )(void) result;
  char *v3; // edi
  unsigned char v4[8]; // [esp+8h] [ebp-78h] BYREF
  char v5[108]; // [esp+10h] [ebp-70h] BYREF
  int16_t v6; // [esp+7Ch] [ebp-4h]
  char v7; // [esp+7Eh] [ebp-2h]
  uint8_t v8; // [esp+84h] [ebp+4h]

  WaypointCoords = ScriptAction::GetWaypointCoords(v4, (IUnknown *)this); /*0x6ffe0a*/
  EventClass::Add( /*0x6ffe34*/
    v5,
    *(AbstractClass **)&HouseClass_Player->__pad_28[8],
    v8,
    *(unsigned int *)WaypointCoords,
    WaypointCoords[4]);
  if ( FactoryClass::GetFlag() ) /*0x6ffe39*/
  {
    result = (int)(NetworkClass::ExecutePlanningModeCmd(v5));
    IDA_LOBYTE(result) = 0; /*0x6ffe4b*/
  }
  else
  {
    if ( Networking_LastEventIndex < 128 ) /*0x6ffe5f*/
    {
      v3 = &g_NetworkPacketIndex[111 * Networking_NextPacketIndex]; /*0x6ffe75*/
      qmemcpy(v3, v5, 0x6Cu); /*0x6ffe7c*/
      v3 += 108; /*0x6ffe7c*/
      *(unsigned short *)v3 = v6; /*0x6ffe7e*/
      v3[2] = v7; /*0x6ffe80*/
      g_CrateSystemState[Networking_NextPacketIndex] = timeGetTime(); /*0x6ffe8d*/
      Networking_NextPacketIndex = ((unsigned char)Networking_NextPacketIndex + 1) & 0x7F; /*0x6ffe9d*/
      result = ++Networking_LastEventIndex; /*0x6ffea7*/
    }
    IDA_LOBYTE(result) = 1; /*0x6ffeae*/
  }
  return result; /*0x6ffe4d*/

}
}
// 0x7B1C50
namespace gamemd {
AnimClass * * NetworkClass::UnregisterAsync()
{

  HWND v2; // ecx
  SOCKET v3; // eax
  SOCKET result; // eax

  v2 = (HWND)(g_hWnd);
  v3 = (HWND)(*((unsigned int *)this + 64539));
  if ( v3 != -1 && g_hWnd ) /*0x7b1c66*/
  {
    WSAAsyncSelect(v3, g_hWnd, 0, 0); /*0x7b1c6e*/
    v2 = g_hWnd; /*0x7b1c73*/
  }
  result = *((unsigned int *)this + 64540); /*0x7b1c79*/
  if ( result != -1 ) /*0x7b1c83*/
  {
    if ( v2 ) /*0x7b1c87*/
      return WSAAsyncSelect(result, v2, 0, 0); /*0x7b1c8f*/
  }
  return result; /*0x7b1c7f*/

}
}