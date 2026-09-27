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
bool GUID::Compare(int a2)
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
    return this->Data4 == a2->vtable2 && *(unsigned short *)this == *(unsigned short *)a2; /*0x53ef1b*/
  if ( (*this || this->Data4 || this->q020 || this->u32_C) /*0x53eed8*/
    && (*(unsigned char *)a2 || a2->vtable2 || a2->vtable3 || a2->vtable4) )
  {
    v8 = (unsigned short *)(3);
    v9 = (unsigned short *)(a2 + 4); /*0x53eefd*/
    v10 = &this->u32_10; /*0x53ef00*/
    v11 = 1; /*0x53ef03*/
    do /*0x53ef05*/
    {
      if ( !v8 ) /*0x53ef05*/
        break; /*0x53ef05*/
      v11 = *v10++ == *v9++; /*0x53ef05*/
      --v8; /*0x53ef05*/
    }
    while ( v11 ); /*0x53ef05*/
    return v11 && *(unsigned int *)this == *(unsigned int *)a2; /*0x53ef11*/
  }
  v4 = (unsigned short *)(a2 + 4); /*0x53eedf*/
  v5 = 3; /*0x53eee2*/
  v6 = &this->u32_10; /*0x53eee7*/
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