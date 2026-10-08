// E4 materialized pending bodies (auto-generated from full_export v3)
#define GAMEMD_E4_VECTOR_TREE_TRUTH 1  // G57a2: G42.55 tree-truth bridge pulls core/vector.hpp templates
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
int NetworkClass::ExecutePlanningModeCmd()
{

  char v1; // al
  wchar_t *StringCSF; // eax
  wchar_t *v3; // eax

  v1 = (char)(*this);
  if ( *this == 9 ) /*0x639fd4*/
  {
    if ( !byte_AC4C08 ) /*0x639fdd*/
    {
      byte_AC4C08 = (unsigned char)((wchar_t *)(1));
      StringCSF = (wchar_t *)(GetStringCSF((wchar_t *)g_Str_MSG_PlanningModeNoDeploy, 0,(const char *)(g_Str_File_PlanMgr_cpp), 3233));
LABEL_10:
      AddMessageListPlayerMessage( (wchar_t *)(StringCSF), 480); /*0x63a07b*/
      PlayVocClass(((unsigned int *)dword_8871E0)[3], 0x2000, 1.0, 0); /*0x63a09e*/
    }
  }
  else if ( v1 == 6 ) /*0x639fff*/
  {
    if ( !byte_AC4C08 ) /*0x63a008*/
    {
      byte_AC4C08 = (unsigned char)((wchar_t *)(1));
      v3 =(wchar_t *)(unsigned int)(GetStringCSF((wchar_t *)(g_Str_MSG_PlanningModeNoStop), 0,(const char *)(g_Str_File_PlanMgr_cpp), 3233));
      AddMessageListPlayerMessage( (wchar_t *)(v3), 480); /*0x63a032*/
      PlayVocClass(((unsigned int *)dword_8871E0)[3], 0x2000, 1.0, 0); /*0x63a04f*/
    }
  }
  else if ( v1 == 7 && !byte_AC4C08 ) /*0x63a05c*/
  {
    byte_AC4C08 = (unsigned char)((wchar_t *)(1));
    StringCSF = (wchar_t *)(GetStringCSF((wchar_t *)(g_Str_MSG_PlanningModeNoScatter), 0,(const char *)(g_Str_File_PlanMgr_cpp), 3233));
    goto LABEL_10; /*0x63a076*/
  }
  return PlayVocClass(((unsigned int *)dword_8871E0)[3], 0x2000, 1.0, 0); /*0x63a0c0*/

}
}
// 0x6FFE00
namespace gamemd {
AbstractClass * * NetworkClass::RecordEvent()
{

  unsigned char *WaypointCoords; // eax
  int (NetworkClass::*)(void) result;
  char *v3; // edi
  unsigned char v4[8]; // [esp+8h] [ebp-78h] BYREF
  char v5[108]; // [esp+10h] [ebp-70h] BYREF
  int16_t v6; // [esp+7Ch] [ebp-4h]
  char v7; // [esp+7Eh] [ebp-2h]
  uint8_t v8; // [esp+84h] [ebp+4h]
int result;  // w18j2 raw-decl 0x006FFE00

  WaypointCoords = ((ScriptAction *)v4)->GetWaypointCoords( this); /*0x6ffe0a*/
  ((EventClass *)(::gamemd::AbstractClass *)(v5))->Add( (AbstractClass *)((int)dword_A83D4C->Object_field_0x30), v8, *(unsigned int *)WaypointCoords, WaypointCoords[4]); /*0x6ffe34*/
  result = FactoryClass::GetFlag(); /*0x6ffe39*/
  if ( (unsigned char)result ) /*0x6ffe40*/
  {
    result = (int)(((NetworkClass*)v5)->ExecutePlanningModeCmd());
    LOBYTE(result) = 0; /*0x6ffe4b*/
  }
  else
  {
    if ( (int)dword_A802C8< 128 ) /*0x6ffe5f*/
    {
      v3 = (char *)&byte_A802D4 + 111 * dword_A802D0; /*0x6ffe75*/
      qmemcpy( (void *)(v3), (const void *)(v5), 0x6Cu); /*0x6ffe7c*/
      v3 += 108; /*0x6ffe7c*/
      *(unsigned short *)v3 = v6; /*0x6ffe7e*/
      v3[2] = v7; /*0x6ffe80*/
      (&dword_A83A54)[dword_A802D0] = timeGetTime(); /*0x6ffe8d*/
      dword_A802D0 = ((unsigned char)dword_A802D0 + 1) & 0x7F; /*0x6ffe9d*/
      result = (int)++dword_A802C8; /*0x6ffea7*/
    }
    LOBYTE(result) = 1; /*0x6ffeae*/
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
  v3 = *((unsigned int *)this + 64539); /*0x7b1c59*/
  if ( v3 != -1 && g_hWnd ) /*0x7b1c66*/
  {
    WSAAsyncSelect(v3, (HWND)(g_hWnd), 0, 0); /*0x7b1c6e*/
    v2 = (HWND)(g_hWnd); /*0x7b1c73*/
  }
  result = *((unsigned int *)this + 64540); /*0x7b1c79*/
  if ( result != -1 ) /*0x7b1c83*/
  {
    if ( v2 ) /*0x7b1c87*/
      return (AnimClass * *)WSAAsyncSelect(result, v2, 0, 0); /*0x7b1c8f*/
  }
  return (::gamemd::AnimClass **)(result); /*0x7b1c7f*/

}
}