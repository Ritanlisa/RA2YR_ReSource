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
bool __fastcall GUID::Compare(const GUID& a, const GUID& b)
{

  unsigned short *v4; // edi
  int v5; // ecx
  unsigned short *v6; // esi
  bool v7; // zf
  int v8; // ecx
  unsigned short *v9; // edi
  unsigned short *v10; // esi
  bool v11; // zf

  if ( dword_828140 == 2 ) /*0x53ee7d*/
    return *((unsigned int *)a + 1) == *(unsigned int *)(b + 4) && *(unsigned short *)a == *(unsigned short *)b; /*0x53ef1b*/
  if ( (*a || *(a + 1) || *(a + 2) || *(a + 3)) /*0x53eed8*/
    && (*(unsigned char *)b || *(unsigned char *)(b + 1) || *(unsigned char *)(b + 2) || *(unsigned char *)(b + 3)) )
  {
    v8 = 3; /*0x53eef8*/
    v9 = (unsigned short *)(b + 4); /*0x53eefd*/
    v10 = a + 4; /*0x53ef00*/
    v11 = 1; /*0x53ef03*/
    do /*0x53ef05*/
    {
      if ( !v8 ) /*0x53ef05*/
        break; /*0x53ef05*/
      v11 = *v10++ == *v9++; /*0x53ef05*/
      --v8; /*0x53ef05*/
    }
    while ( v11 ); /*0x53ef05*/
    return v11 && *(unsigned int *)a == *(unsigned int *)b; /*0x53ef11*/
  }
  v4 = (unsigned short *)(b + 4); /*0x53eedf*/
  v5 = 3; /*0x53eee2*/
  v6 = a + 4; /*0x53eee7*/
  v7 = 1; /*0x53eeea*/
  do /*0x53eeec*/
  {
    if ( !v5 ) /*0x53eeec*/
      break; /*0x53eeec*/
    v7 = *v6++ == *v4++; /*0x53eeec*/
    --v5; /*0x53eeec*/
  }
  while ( v7 ); /*0x53eeec*/
  return v7; /*0x53ee9f*/

}
} // namespace gamemd