// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Object_e4.hpp"
#include "e4/classes/Power_e4.hpp"
#include "e4/classes/RadioClass_e4.hpp"
#include "e4/classes/RandomMap_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/Radar_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/ObjectPtr_e4.hpp"
#include "e4/classes/BuildingClass_e4.hpp"

// 0x65A750
namespace gamemd {
_DWORD * RadioClass::Release(void *a1)
{

  RadioClass::Constructor((int)this); /*0x65a753*/
  (&this->radioLinks)[1] = 0; /*0x65a75a*/
  (&this->radioLinks)[2] = 1; /*0x65a764*/
  LOBYTE((&this->radioLinks)[3]) = 1; /*0x65a76e*/
  BYTE1((&this->radioLinks)[3]) = 0; /*0x65a775*/
  (&this->radioLinks)[0] = (int)&vt_VectorClass; /*0x65a77c*/
  (&this->radioLinks)[1] =(unsigned int)__2_YAPAXI_Z(4u); /*0x65a78b*/
  BYTE1((&this->radioLinks)[3]) = 1; /*0x65a791*/
  this->vtable1 = (void *)((unsigned int)(&vt_RadioClass)); /*0x65a798*/
  ((unsigned int *)this)[0] = (unsigned int)(&vt_RadioClass); /*0x65a79e*/
  ((unsigned int *)this)[0] = (unsigned int)(&vt_RadioClass); /*0x65a7a5*/
  ((unsigned int *)this)[0] = (unsigned int)(&vt_RadioClass); /*0x65a7ac*/
  *(unsigned int *)(&this->radioLinks)[1] = 0; /*0x65a7be*/
  this->lastCommands[0] = 0; /*0x65a7c4*/
  this->lastCommands[1] = 0; /*0x65a7ca*/
  this->lastCommands[2] = 0; /*0x65a7d2*/
  return (_DWORD *)(this); /*0x65a7d8*/

}
} // namespace ra2

// 0x65AA80
namespace gamemd {
int RadioClass::ProcessCmd()
{

  if ( !((unsigned int *)this)[0] ) /*0x65aa83*/
    (*((void (**)(RadioClass *, int))this->vtable1 + 160))(this, 3); /*0x65aa91*/
  return ((ObjectClass *)((ObjectClass *)this))->Undeploy(); /*0x65aa9e*/

}
} // namespace ra2

// 0x65AB10
namespace gamemd {
int RadioClass::PowerDrainUpdate(AbstractClass * aP1)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x65AB10)
}
} // namespace ra2

// 0x65AB80
namespace gamemd {
int RadioClass::LoadState(int aP1, int aP2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x65AB80)
}
} // namespace ra2

// 0x65AD90
namespace gamemd {
int RadioClass::FindLinkIndex(int a2)
{

  int v2; // edx
  int result; // eax
  unsigned int *i; // ecx

  if ( !a2 ) /*0x65ad97*/
    return -1; /*0x65ad97*/
  v2 = (&this->radioLinks)[2]; /*0x65ad99*/
  result = 0; /*0x65ad9f*/
  if ( v2 <= 0 ) /*0x65ada3*/
    return -1; /*0x65adb7*/
  for ( i = (unsigned int *)(&this->radioLinks)[1]; *i != a2; ++i ) /*0x65ada5*/
  {
    if ( ++result >= v2 ) /*0x65adb5*/
      return -1; /*0x65adb5*/
  }
  return result; /*0x65adba*/

}
} // namespace ra2

// 0x65ADC0
namespace gamemd {
int RadioClass::HasFreeLink()
{

  int v1; // edx
  int v2; // eax
  unsigned int *i; // ecx

  v1 = (&this->radioLinks)[2]; /*0x65adc0*/
  v2 = 0; /*0x65adc6*/
  if ( v1 <= 0 ) /*0x65adca*/
    return 0; /*0x65addf*/
  for ( i = (unsigned int *)(&this->radioLinks)[1]; *i; ++i ) /*0x65adcc*/
  {
    if ( ++v2 >= v1 ) /*0x65addd*/
      return 0; /*0x65addd*/
  }
  return 1; /*0x65ade1*/

}
} // namespace ra2

// 0x65AE60
namespace gamemd {
void RadioClass::SetLinkCount(int a2)
{

  int v3; // ebx
  int v4; // eax

  v3 = (&this->radioLinks)[2]; /*0x65ae69*/
  if ( a2 > v3 ) /*0x65ae71*/
  {
    (*(void (**)(int *, int, unsigned int))((&this->radioLinks)[0] + 8))((int *)this->radioLinks, a2, 0); /*0x65ae82*/
    v4 = v3; /*0x65ae87*/
    do /*0x65ae9c*/
    {
      ++v4; /*0x65ae91*/
      *(unsigned int *)((&this->radioLinks)[1] + 4 * v4 - 4) = 0; /*0x65ae94*/
    }
    while ( v4 < a2 ); /*0x65ae9c*/
  }

}
} // namespace ra2

// 0x65AAC0
namespace gamemd {
int RadioClass::ExecuteAction(TimerStruct * aP1, IUnknown * aP2)
{

  int result; // eax
  int i; // ecx
  int v6; // eax
  int v7; // edx
  unsigned int *v8; // eax

  ((Object *)((ObjectClass *)this))->Unlink(); /*0x65aacf*/
  result = (&this->radioLinks)[2]; /*0x65aad4*/
  for ( i = 0; i < result; ++i ) /*0x65aade*/
  {
    v6 = (&this->radioLinks)[1]; /*0x65aae0*/
    v7 = *(unsigned int *)(v6 + 4 * i); /*0x65aae6*/
    v8 = (unsigned int *)(v6 + 4 * i); /*0x65aae9*/
    if ( v7 == (int)(aP1) ) /*0x65aaee*/
    {
      if ( aP2 ) /*0x65aaf2*/
        *v8 = 0; /*0x65aaf4*/
    }
    result = (&this->radioLinks)[2]; /*0x65aafa*/
  }
  return result; /*0x65ab05*/

}
} // namespace gamemd

// 0x65AC40
namespace gamemd {
int RadioClass::SaveState(int * a0, RadioClass * aP1, int aP2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x65AC40)
}
} // namespace gamemd
