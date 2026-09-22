// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Waypoint_e4.hpp"
#include "e4/classes/Array_e4.hpp"

// 0x5023B0
namespace gamemd {
unsigned int * Waypoint::FindByCell(IUnknown * aP1)
{
{
  char *i; // ebx
  WaypointPathClass *v5; // eax
  _DWORD *v6; // ecx
  CampaignScore *v7; // edi
  _DWORD *Element; // esi
  signed int v10; // [esp+10h] [ebp-4h]
  signed int v2 = 0; /*0x5023b8*/
  v10 = 0; /*0x5023bb*/
  for ( i = this + 528; ; i += 4 ) /*0x5023bf*/
  {
    if ( !*(_DWORD *)i ) /*0x5023c5*/
    {
      int v4 = __2_YAPAXI_Z(0x40u); /*0x5023cc*/
      if ( v4 ) /*0x5023d6*/
        v5 = (WaypointPathClass *)WaypointPathClass::Construct(v4, v2); /*0x5023db*/
      WaypointPathClass *v5 = 0; /*0x5023e2*/
      *(_DWORD *)i = v5; /*0x5023e4*/
    }
    v6 = *(_DWORD **)i; /*0x5023e6*/
    v7 = 0; /*0x5023e8*/
    if ( *(int *)(*(_DWORD *)i + 56) > 0 ) /*0x5023ef*/
      break; /*0x5023ef*/
LABEL_12:
    v10 = ++v2; /*0x502437*/
    if ( v2 >= 12 ) /*0x50243b*/
      return 0; /*0x50244c*/
  }
  while ( 1 ) /*0x5023f7*/
  {
    Element = (_DWORD *)Array::GetElement(v6, v7); /*0x5023f7*/
    if ( (unsigned __int16)(*Element / 256) == LOWORD(aP1->field_0) /*0x502422*/
      && (unsigned __int16)(Element[1] / 256) == HIWORD(aP1->field_0) )
    {
      return Element; /*0x502441*/
    }
    v6 = *(_DWORD **)i; /*0x502424*/
    v7 = (CampaignScore *)((char *)v7 + 1); /*0x502426*/
    if ( (int)v7 >= *(_DWORD *)(*(_DWORD *)i + 56) ) /*0x50242a*/
    {
      v2 = v10; /*0x50242c*/
      goto LABEL_12; /*0x50242c*/
    }
  }
}
} // namespace gamemd

// 0x53ECB0
namespace gamemd {
void * Waypoint::InitInvalid()
{
{
  *this = -1; /*0x53ecb4*/
  *(this + 1) = -1; /*0x53ecb6*/
  *(this + 2) = -1; /*0x53ecb9*/
  *(this + 3) = -1; /*0x53ecbc*/
  *(this + 4) = -1; /*0x53ecbf*/
  *(this + 5) = -1; /*0x53ecc2*/
  *(this + 6) = -1; /*0x53ecc5*/
  *(this + 7) = -1; /*0x53ecc8*/
  *(this + 8) = -1; /*0x53eccb*/
  *(this + 9) = -1; /*0x53ecce*/
  return (IPXManagerClass *)this; /*0x53ecd1*/
}
} // namespace gamemd

// 0x763A50
namespace gamemd {
int Waypoint::FindCell(unsigned int * a2)
{
{
  _DWORD *i; // edi

  int v3 = 0; /*0x763a59*/
  Waypoint *v7 = this; /*0x763a5b*/
  int v6 = this->q038; /*0x763a64*/
  if ( v6 <= 0 ) /*0x763a68*/
    return 0; /*0x763adc*/
  for ( i = (_DWORD *)this->q00B; /*0x763a6e*/
        (unsigned __int16)(*i / 256) != (unsigned __int16)(*a2 / 256)
     || (unsigned __int16)(i[1] / 256) != (unsigned __int16)(a2[1] / 256);
        i += 3 )
  {
    if ( ++v3 >= v6 ) /*0x763ac5*/
      return 0; /*0x763ac5*/
  }
  v7[9] = v3; /*0x763ad0*/
  return 1; /*0x763acd*/
}
} // namespace gamemd

// 0x763610
namespace gamemd {
CHAR * Waypoint::To_String(CCINIClass * aP0)
{
{
    if ( aP0 == (CCINIClass *)-1 )
  {
    DataGlobal_B72654 = 0;
    return &DataGlobal_B72654;
  }
    else
  {
    if ( (int)aP0 >= 26 )
    wsprintfA(&DataGlobal_B72654, "%c%c", (int)aP0 / 26 + 64, (int)aP0 % 26 + 65);
    else
    wsprintfA(&DataGlobal_B72654, "%c", aP0->__pad_41);
    return &DataGlobal_B72654;
  }
}
}
} // namespace gamemd
