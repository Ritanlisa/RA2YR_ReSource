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
bool __fastcall GUID::Compare(int a2, void *a2)
{

  int result; // eax
  unsigned short *v3; // edi
  int v4; // ecx
  unsigned short *v5; // esi
  bool v6; // zf
  int v7; // ecx
  unsigned short *v8; // edi
  unsigned short *v9; // esi
  bool v10; // zf

  result = (int)this; /*0x53ee70*/
  if ( dword_828140 == 2 ) /*0x53ee7d*/
  {
    if ( *((unsigned int *)this + 1) == *(unsigned int *)(a2 + 4) ) /*0x53ee91*/
    {
      LOWORD(result) = *(unsigned short *)this; /*0x53ee97*/
      if ( *(unsigned short *)this == *(unsigned short *)a2 ) /*0x53ee9d*/
      {
        LOBYTE(result) = 1; /*0x53eea0*/
        return result; /*0x53eea3*/
      }
    }
LABEL_23:
    LOBYTE(result) = 0; /*0x53ef1a*/
    return result; /*0x53ef1b*/
  }
  if ( (*this || *((unsigned char *)this + 1) || *((unsigned char *)this + 2) || *((unsigned char *)this + 3)) /*0x53eed8*/
    && (*(unsigned char *)a2 || *(unsigned char *)(a2 + 1) || *(unsigned char *)(a2 + 2) || *(unsigned char *)(a2 + 3)) )
  {
    v7 = 3; /*0x53eef8*/
    v8 = (unsigned short *)(a2 + 4); /*0x53eefd*/
    v9 = (unsigned short *)(result + 4); /*0x53ef00*/
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
      result = *(unsigned int *)result; /*0x53ef0b*/
      if ( result == *(unsigned int *)a2 ) /*0x53ef11*/
      {
        LOBYTE(result) = 1; /*0x53ef14*/
        return result; /*0x53ef17*/
      }
    }
    goto LABEL_23; /*0x53ef11*/
  }
  v3 = (unsigned short *)(a2 + 4); /*0x53eedf*/
  v4 = 3; /*0x53eee2*/
  v5 = (unsigned short *)(result + 4); /*0x53eee7*/
  v6 = 1; /*0x53eeea*/
  do /*0x53eeec*/
  {
    if ( !v4 ) /*0x53eeec*/
      break; /*0x53eeec*/
    v6 = *v5++ == *v3++; /*0x53eeec*/
    --v4; /*0x53eeec*/
  }
  while ( v6 ); /*0x53eeec*/
  LOBYTE(result) = v6; /*0x53eef1*/
  return result; /*0x53ee9f*/

}
} // namespace gamemd