// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/GUID_e4.hpp"
#include "e4/classes/Compare_e4.hpp"
#include "e4/classes/GadgetClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"

// 0x53EE70
namespace gamemd {
bool __fastcall GUID::Compare(int a2)
{
  int result; // eax
  _WORD *v3; // edi
  int v4; // ecx
  _WORD *v5; // esi
  bool v6; // zf
  int v7; // ecx
  _WORD *v8; // edi
  _WORD *v9; // esi
  bool v10; // zf

  result = (int)this; /*0x53ee70*/
  if ( dword_828140 == 2 ) /*0x53ee7d*/
  {
    if ( this->Data4 == a2->u32_4 ) /*0x53ee91*/
    {
      IDA_LOWORD(result) = *(_WORD *)this; /*0x53ee97*/
      if ( *(_WORD *)this == *(_WORD *)a2 ) /*0x53ee9d*/
      {
        IDA_LOBYTE(result) = 1; /*0x53eea0*/
        return result; /*0x53eea3*/
      }
    }
  LABEL_23:
    IDA_LOBYTE(result) = 0; /*0x53ef1a*/
    return result; /*0x53ef1b*/
  }
  if ( (*this || this->Data4 || this->Data3 || this->u32_3) /*0x53eed8*/
    && (*(_BYTE *)a2 || a2->u32_1 || a2->u32_2 || a2->u32_3) )
  {
    v7 = 3; /*0x53eef8*/
    v8 = (_WORD *)(a2 + 4); /*0x53eefd*/
    v9 = (_WORD *)(result + 4); /*0x53ef00*/
    v10 = 1; /*0x53ef03*/
    do /*0x53ef05*/
    {
      if ( !v7 ) /*0x53ef05*/
        break; /*0x53ef05*/
      v10 = *v9++ == *v8++; /*0x53ef05*/
      --v7; /*0x53ef05*/
    }
    while ( v10 ); /*0x53ef05*/
    if ( v10 ) /*0x53ef09*/
    {
      result = *(_DWORD *)result; /*0x53ef0b*/
      if ( result == *(_DWORD *)a2 ) /*0x53ef11*/
      {
        IDA_LOBYTE(result) = 1; /*0x53ef14*/
        return result; /*0x53ef17*/
      }
    }
    goto LABEL_23; /*0x53ef11*/
  }
  v3 = (_WORD *)(a2 + 4); /*0x53eedf*/
  v4 = 3; /*0x53eee2*/
  v5 = (_WORD *)(result + 4); /*0x53eee7*/
  v6 = 1; /*0x53eeea*/
  do /*0x53eeec*/
  {
    if ( !v4 ) /*0x53eeec*/
      break; /*0x53eeec*/
    v6 = *v5++ == *v3++; /*0x53eeec*/
    --v4; /*0x53eeec*/
  }
  while ( v6 ); /*0x53eeec*/
  IDA_LOBYTE(result) = v6; /*0x53eef1*/
  return result; /*0x53ee9f*/
}
} // namespace gamemd