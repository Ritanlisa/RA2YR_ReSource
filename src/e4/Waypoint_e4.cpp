// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Waypoint_e4.hpp"
#include "e4/classes/Array_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/CCINIClass_e4.hpp"
#include "e4/classes/WaypointPathClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"

// 0x5023B0
namespace gamemd {
unsigned int * Waypoint::FindByCell(IUnknown * aP1)
{
  signed int v2; // esi
  char *i; // ebx
  void *v4; // eax
  int v5; // eax
  _DWORD *v6; // ecx
  int v7; // edi
  _DWORD *Element; // esi
  signed int v10; // [esp+10h] [ebp-4h]

  v2 = 0; /*0x5023b8*/
  v10 = 0; /*0x5023bb*/
  for ( i = &this->u32_840; ; i += 4 ) /*0x5023bf*/
  {
    if ( !*(_DWORD *)i ) /*0x5023c5*/
    {
      v4 = RA2_OPNEW(0x40u); /*0x5023cc*/
      if ( v4 ) /*0x5023d6*/
        v5 = WaypointPathClass::Construct((int)v4, v2); /*0x5023db*/
      else
        v5 = 0; /*0x5023e2*/
      *(_DWORD *)i = v5; /*0x5023e4*/
    }
    v6 = *(_DWORD **)i; /*0x5023e6*/
    v7 = 0; /*0x5023e8*/
    if ( *(int *)(this->u32_878 > 0 ) /*0x5023ef*/
      break; /*0x5023ef*/
  LABEL_12:
    v10 = ++v2; /*0x502437*/
    if ( v2 >= 12 ) /*0x50243b*/
      return 0; /*0x50244c*/
  }
  while ( 1 ) /*0x5023f7*/
  {
    Element = (_DWORD *)Array::GetElement(v6, v7); /*0x5023f7*/
    if ( (unsigned __int16)(*Element / 256) == *aP1 && (unsigned __int16)(Element[1] / 256) == aP1[1] ) /*0x502422*/
      return Element; /*0x502441*/
    v6 = *(_DWORD **)i; /*0x502424*/
    if ( ++v7 >= *(_DWORD *)(this->u32_878 ) /*0x50242a*/
    {
      v2 = v10; /*0x50242c*/
      goto LABEL_12; /*0x50242c*/
    }
  }
}
}
// 0x53ECB0
namespace gamemd {
void * Waypoint::InitInvalid()
{
  *this = -1; /*0x53ecb4*/
  this->ptr_4 = -1; /*0x53ecb6*/
  this->ptr_8 = -1; /*0x53ecb9*/
  this->u32_C = -1; /*0x53ecbc*/
  this->u32_10 = -1; /*0x53ecbf*/
  this->u32_14 = -1; /*0x53ecc2*/
  this->u32_18 = -1; /*0x53ecc5*/
  this->u32_1C = -1; /*0x53ecc8*/
  this->q020 = -1; /*0x53eccb*/
  this->q024 = -1; /*0x53ecce*/
  return this; /*0x53ecd1*/
}
}
// 0x763A50
namespace gamemd {
int Waypoint::FindCell(unsigned int * a2)
{
  int v3; // ecx
  _DWORD *i; // edi
  void * v6;

  v3 = 0; /*0x763a59*/
  v6 = *(&this->ptr_44); /*0x763a64*/
  if ( v6 <= 0 ) /*0x763a68*/
    return 0; /*0x763adc*/
  for ( i = (_DWORD *)*(&this->ptr_41); /*0x763a6e*/
        (unsigned __int16)(*i / 256) != (unsigned __int16)(*a2 / 256)
     || (unsigned __int16)(i[1] / 256) != (unsigned __int16)(a2[1] / 256);
        i += 3 )
  {
    if ( ++v3 >= v6 ) /*0x763ac5*/
      return 0; /*0x763ac5*/
  }
  this->q024 = v3; /*0x763ad0*/
  return 1; /*0x763acd*/
}
}
// 0x763610
namespace gamemd {
CHAR * Waypoint::To_String(CCINIClass * aP0)
{
  if ( aP0 == -1 ) /*0x763613*/
  {
    byte_B72654 = 0; /*0x763615*/
    return &byte_B72654; /*0x76361c*/
  }
  else
  {
    if ( aP0 >= 26 ) /*0x763625*/
      wsprintfA(&byte_B72654, "%c%c", aP0 / 26 + 64, aP0 % 26 + 65); /*0x763671*/
    else
      wsprintfA(&byte_B72654, "%c", aP0 + 65); /*0x763635*/
    return &byte_B72654; /*0x76363e*/
  }
}
} // namespace gamemd
