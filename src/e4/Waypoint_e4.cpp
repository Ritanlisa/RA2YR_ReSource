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

  char * v2;
  char *i; // ebx
  void * v4;
  WaypointPathClass *v5; // eax
  unsigned int *v6; // ecx
  CampaignScore *v7; // edi
  unsigned int *Element; // esi
  signed int v10; // [esp+10h] [ebp-4h]

  v2 = (int)((char *)(0));
  v10 = (char *)(0);
  for ( i = (unsigned char *)this + 528; ; i += 4 ) /*0x5023bf*/
  {
    if ( !*(unsigned int *)i ) /*0x5023c5*/
    {
      v4 = (void *)((unsigned int)(RA2_OPNEW(0x40u)));
      if ( v4 ) /*0x5023d6*/
        v5 = (WaypointPathClass *)WaypointPathClass::Construct(v4, v2); /*0x5023db*/
      else
        v5 = 0; /*0x5023e2*/
      *(unsigned int *)i = v5; /*0x5023e4*/
    }
    v6 = *(unsigned int **)i; /*0x5023e6*/
    v7 = 0; /*0x5023e8*/
    if ( *(int *)(*(unsigned int *)i + 56) > 0 ) /*0x5023ef*/
      break; /*0x5023ef*/
LABEL_12:
    v10 = ++v2; /*0x502437*/
    if ( v2 >= 12 ) /*0x50243b*/
      return 0; /*0x50244c*/
  }
  while ( 1 ) /*0x5023f7*/
  {
    Element = (unsigned int *)Array::GetElement(v6, v7); /*0x5023f7*/
    if ( (uint16_t)(*Element / 256) == IDA_LOWORD(aP1->field_0) /*0x502422*/
      && (uint16_t)(Element[1] / 256) == IDA_HIWORD(aP1->field_0) )
    {
      return Element; /*0x502441*/
    }
    v6 = *(unsigned int **)i; /*0x502424*/
    v7 = (CampaignScore *)((char *)v7 + 1); /*0x502426*/
    if ( (int)v7 >= *(unsigned int *)(*(unsigned int *)i + 56) ) /*0x50242a*/
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

  *(unsigned int *)this = -1; /*0x53ecb4*/
  *((unsigned char *)this + 1) = -1; /*0x53ecb6*/
  *((unsigned char *)this + 2) = -1; /*0x53ecb9*/
  *((unsigned char *)this + 3) = -1; /*0x53ecbc*/
  *((unsigned char *)this + 4) = -1; /*0x53ecbf*/
  *((unsigned char *)this + 5) = -1; /*0x53ecc2*/
  *((unsigned char *)this + 6) = -1; /*0x53ecc5*/
  *((unsigned char *)this + 7) = -1; /*0x53ecc8*/
  *((unsigned char *)this + 8) = -1; /*0x53eccb*/
  *((unsigned char *)this + 9) = -1; /*0x53ecce*/
  return (IPXManagerClass *)this; /*0x53ecd1*/

}
}
// 0x763A50
namespace gamemd {
int Waypoint::FindCell(unsigned int * a2)
{

  int * v3;
  unsigned int *i; // edi
  int v6; // [esp+10h] [ebp-8h]
  int *v7; // [esp+14h] [ebp-4h]

  v3 = (int *)(0);
  v7 = (int *)(this);
  v6 = *((char *)this + 14); /*0x763a64*/
  if ( v6 <= 0 ) /*0x763a68*/
    return 0; /*0x763adc*/
  for ( i = (unsigned int *)*((char *)this + 11); /*0x763a6e*/
        (uint16_t)(*i / 256) != (uint16_t)(*a2 / 256)
     || (uint16_t)(i[1] / 256) != (uint16_t)(a2[1] / 256);
        i += 3 )
  {
    if ( ++v3 >= v6 ) /*0x763ac5*/
      return 0; /*0x763ac5*/
  }
  v7[9] = v3; /*0x763ad0*/
  return 1; /*0x763acd*/

}
}
// 0x763610
namespace gamemd {
CHAR * Waypoint::To_String(CCINIClass * aP0)
{

  if ( aP0 == (CCINIClass *)-1 ) /*0x763613*/
  {
    byte_B72654 = (unsigned char)((CHAR *)(0));
    return (CHAR *)(&byte_B72654);
  }
  else
  {
    if ( (int)aP0 >= 26 ) /*0x763625*/
      wsprintfA(&byte_B72654, "%c%c", (int)aP0 / 26 + 64, (int)aP0 % 26 + 65); /*0x763671*/
    else
      wsprintfA(&byte_B72654, "%c", aP0->__pad_41); /*0x763635*/
    return &byte_B72654; /*0x76363e*/
  }

}
} // namespace gamemd
