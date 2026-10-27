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
namespace gamemd {  // G42.18 ns repair
unsigned int * Waypoint::FindByCell(unsigned short *aP1)
{

  signed int v2; // esi
  char *i; // ebx
  void *v4; // eax
  int v5; // eax
  unsigned int *v6; // ecx
  int v7; // edi
  unsigned int *Element; // esi
  signed int v10; // [esp+10h] [ebp-4h]

  v2 = 0; /*0x5023b8*/
  v10 = 0; /*0x5023bb*/
  for ( i = &this->u8_210; ; i += 4 ) /*0x5023bf*/
  {
    if ( !*(unsigned int *)i ) /*0x5023c5*/
    {
      v4 = __2_YAPAXI_Z(0x40u); /*0x5023cc*/
      if ( v4 ) /*0x5023d6*/
        v5 = WaypointPathClass::Construct((int)v4, v2); /*0x5023db*/
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
    Element = (unsigned int *)(v6)->GetElement(v7); /*0x5023f7*/
    if ( (unsigned __int16)(*Element / 256) == *aP1 && (unsigned __int16)(Element->q004 / 256) == aP1[1] ) /*0x502422*/
      return Element; /*0x502441*/
    v6 = *(unsigned int **)i; /*0x502424*/
    if ( ++v7 >= *(unsigned int *)(*(unsigned int *)i + 56) ) /*0x50242a*/
    {
      v2 = v10; /*0x50242c*/
      goto LABEL_12; /*0x50242c*/
    }
  }

}
}  // G42.18 ns repair
// 0x53ECB0
namespace gamemd {
unsigned char * Waypoint::InitInvalid()
{

  this->__pad_0 = -1; /*0x53ecb4*/
  this->__pad_0[1] = -1; /*0x53ecb6*/
  this->__pad_0[2] = -1; /*0x53ecb9*/
  this->__pad_0[3] = -1; /*0x53ecbc*/
  this->ptr_4 = -1; /*0x53ecbf*/
  this->__pad_0[5] = -1; /*0x53ecc2*/
  this->__pad_0[6] = -1; /*0x53ecc5*/
  this->__pad_0[7] = -1; /*0x53ecc8*/
  this->ptr_8 = -1; /*0x53eccb*/
  this->__pad_0[9] = -1; /*0x53ecce*/
  return this->q000; /*0x53ecd1*/

}
}
// 0x763A50
namespace gamemd {
int Waypoint::FindCell(unsigned int * a2)
{


  int v3 = 0; // ecx /*0x763a59*/
  Waypoint *v7; // [esp+14h] [ebp-4h]
  v7 = this; /*0x763a5b*/
  void *v6; // [esp+10h] [ebp-8h]
  v6 = this->field_38; /*0x763a64*/
  if ( (int)v6 <= 0 ) /*0x763a68*/
    return 0; /*0x763adc*/
  unsigned int *i; // edi
  for ( i = (unsigned int *)(*&this->u32_2C); /*0x763a6e*/
  (unsigned __int16)(*i / 256) != (unsigned __int16)(*a2 / 256)
     || (unsigned __int16)(i[1] / 256) != (unsigned __int16)(a2[1] / 256);
  i += 3 )
  {
    if ( ++v3 >= (int)v6 ) /*0x763ac5*/
      return 0; /*0x763ac5*/
  }
  *&v7->q024 = v3; /*0x763ad0*/
  return 1; /*0x763acd*/

}
}
// 0x763610
namespace gamemd {
CHAR * Waypoint::To_String(int aP0)
{
  if ( aP0 == -1 ) /*0x763613*/
  {
    byte_B72654 = 0; /*0x763615*/
    return (gamemd::CHAR *)(&byte_B72654); /*0x76361c*/
  }
  else
  {
    if ( aP0 >= 26 ) /*0x763625*/
      wsprintfA((char *)(&byte_B72654), "%c%c", aP0 / 26 + 64, aP0 % 26 + 65); /*0x763671*/
    else
      wsprintfA((char *)(&byte_B72654), "%c", aP0 + 65); /*0x763635*/
    return (gamemd::CHAR *)(&byte_B72654); /*0x76363e*/
  }
}
} // namespace gamemd
