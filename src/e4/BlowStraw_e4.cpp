// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/BlowStraw_29_e4.hpp"
#include "e4/classes/Array_e4.hpp"
#include "e4/classes/CreateTeamCommand_e4.hpp"
#include "e4/classes/Mouse_e4.hpp"
#include "e4/classes/BlowStraw_29__e4.hpp"
#include "e4/classes/CommandClass_e4.hpp"
#include "e4/classes/HashTable_flat_e4.hpp"
#include "e4/classes/SidebarClass_e4.hpp"
#include "e4/classes/TabClass_e4.hpp"
#include "e4/classes/TacticalClass_e4.hpp"
#include "e4/classes/CellStruct_e4.hpp"
#include "e4/classes/Dialog_e4.hpp"
#include "e4/classes/Timer_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/BombClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/Power_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/Bounds_e4.hpp"
#include "e4/classes/BlowPipe_23_e4.hpp"
#include "e4/classes/BlowPipe_31_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/Commands_e4.hpp"
#include "e4/classes/ScreenCaptureCommandClass_e4.hpp"
#include "e4/classes/TEventClass_e4.hpp"
#include "e4/classes/RadarClass_e4.hpp"
#include "e4/classes/MessageListClass_e4.hpp"
#include "e4/classes/PushCommandClass_e4.hpp"
#include "e4/classes/CountdownTimer_e4.hpp"
#include "e4/classes/GadgetClass_e4.hpp"

// 0x6D0680
namespace gamemd {
int BlowStraw_29::Seek(int *aP1, unsigned int *a2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6D0680)
}
}
// 0x731AF0
namespace gamemd {
CellStruct * * sub_731AF0()
{
  wchar_t *result; // eax
  wchar_t *StringCSF; // eax
  int v3; // ecx
  int v4; // edi
  int v5; // esi
  unsigned char *v6; // ecx
  wchar_t *v7; // eax
  int v8; // ecx

  result = *(wchar_t **)(unsigned int *)((char *)&stru_A8EB00 + 228); /*0x731af1*/
  if ( !*(unsigned int *)(unsigned int *)((char *)&stru_A8EB00 + 228) ) /*0x731afa*/
  {
    StringCSF = (wchar_t *)(GetStringCSF((wchar_t *)(g_Str_MSG_NothingSelected), 0,(const char *)(g_Str_File_UICmnds_cpp), 856));
    v3 = 3; /*0x731b18*/
    if ( dword_A83D4C ) /*0x731b1f*/
      v3 = *(unsigned int *)&((unsigned int *)(dword_A83D4C))[134].__pad_90[4]; /*0x731b21*/
    result = (wchar_t *)MessageListClass::AddMessage( /*0x731b3e*/
                          (MessageListClass *)&stru_A8BB1C.__pad_87[189],
                          0,
                          0,
                          StringCSF,
                          v3,
                          16454,
                          240,
                          1);
    goto LABEL_5; /*0x731b3e*/
  }
  v4 = *(unsigned int *)(unsigned int *)((char *)&stru_A8EB00 + 228); /*0x731b4e*/
  v5 = 0; /*0x731b50*/
  if ( *(int *)(unsigned int *)((char *)&stru_A8EB00 + 228) <= 0 ) /*0x731b54*/
  {
  LABEL_5:
    IDA_LOBYTE(g_BuildingLoadQueue_Array.QueueingCell[0]) = 1; /*0x731b43*/
    return (gamemd::CellStruct **)(result); /*0x731b4d*/
  }
  while ( 1 ) /*0x731b56*/
  {
    result = *(wchar_t **)(unsigned int *)((char *)&stru_A8EB00 + 216); /*0x731b56*/
    v6 = *(unsigned char **)(*(unsigned int *)(unsigned int *)((char *)&stru_A8EB00 + 216) + 4 * v5); /*0x731b5b*/
    if ( v6 ) /*0x731b60*/
    {
      if ( (v6[20] & 1) != 0 ) /*0x731b6c*/
      {
        result = (wchar_t *)(*(int (**)(unsigned char *))(*(unsigned int *)v6 + 1216))(v6); /*0x731b70*/
        if ( !(unsigned char)result ) /*0x731b78*/
          break; /*0x731b78*/
      }
    }
    if ( ++v5 >= v4 ) /*0x731b7d*/
    {
      IDA_LOBYTE(g_BuildingLoadQueue_Array.QueueingCell[0]) = 1; /*0x731b80*/
      return (gamemd::CellStruct **)(result); /*0x731b89*/
    }
  }
  v7 = GetStringCSF((wchar_t *)(aMsgAttackmoveu), 0,(const char *)(g_Str_File_UICmnds_cpp), 862); /*0x731b9b*/
  v8 = 3; /*0x731ba6*/
  if ( dword_A83D4C ) /*0x731bad*/
    v8 = *(unsigned int *)&((unsigned int *)(dword_A83D4C))[134].__pad_90[4]; /*0x731baf*/
  return (wchar_t *)MessageListClass::AddMessage( /*0x731b43*/
                      (MessageListClass *)&stru_A8BB1C.__pad_87[189],
                      0,
                      0,
                      v7,
                      v8,
                      16454,
                      240,
                      1);
}
}
// 0x5BE9E0
namespace gamemd {
TabClass * BlowStraw_29::Read(char * Block, char a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5BE9E0)
}
} // namespace gamemd

// 0x6D0260
namespace gamemd {
int BlowStraw_29_::Stub()
{

  return ((ObjectClass *)((SidebarClass *)this))->processDamage();

}
} // namespace gamemd
