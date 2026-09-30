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

// 0x65A750
namespace gamemd {
void RadioClass::Release()
{

  RadioClass::Constructor((int)this); /*0x65a753*/
  *(this + 57) = 0; /*0x65a75a*/
  *(this + 58) = 1; /*0x65a764*/
  *((unsigned char *)this + 236) = 1; /*0x65a76e*/
  *((unsigned char *)this + 237) = 0; /*0x65a775*/
  *(this + 56) = &vt_VectorClass_TechnoClass; /*0x65a77c*/
  *(this + 57) = RA2_OPNEW(4u); /*0x65a78b*/
  *((unsigned char *)this + 237) = 1; /*0x65a791*/
  *this = &vt_RadioClass; /*0x65a798*/
  *(this + 1) = &vt_RadioClass; /*0x65a79e*/
  *(this + 2) = &vt_RadioClass; /*0x65a7a5*/
  *(this + 3) = &vt_RadioClass; /*0x65a7ac*/
  *(unsigned int *)*(this + 57) = 0; /*0x65a7be*/
  *(this + 53) = 0; /*0x65a7c4*/
  *(this + 54) = 0; /*0x65a7ca*/
  *(this + 55) = 0; /*0x65a7d2*/
  return this; /*0x65a7d8*/

}
} // namespace ra2

// 0x65AA80
namespace gamemd {
int RadioClass::ProcessCmd()
{

  if ( !*((unsigned char *)this + 129) ) /*0x65aa83*/
    if ( !this->? ) (*((void (**)(RadioClass *, int))this->MissionClass + 160))(this, 3);;
  return ObjectClass::Undeploy(this); /*0x65aa9e*/

}
} // namespace ra2

// 0x65AB10
namespace gamemd {
int RadioClass::PowerDrainUpdate(AbstractClass * aP1)
{

  BaseClass *result; // eax
  int i; // edi
  int v5; // eax
  int v6; // ecx

  AbstractClass::COMStub_13((int)this, aP1); /*0x65ab1a*/
  Power::TimerProcess(aP1); /*0x65ab28*/
  result = (BaseClass *)*((char *)this + 58); /*0x65ab2d*/
  for ( i = 0; i < (int)result; ++i ) /*0x65ab37*/
  {
    v5 = *(unsigned int *)(*((char *)this + 57) + 4 * i); /*0x65ab3f*/
    if ( v5 ) /*0x65ab44*/
    {
      (*(void (**)(int))(*(unsigned int *)(v5 + 4) + 16))(v5 + 4); /*0x65ab4d*/
      Power::TimerProcess(aP1); /*0x65ab53*/
      v6 = *(unsigned int *)(*((char *)this + 57) + 4 * i); /*0x65ab5e*/
      (*(void (**)(int))(*(unsigned int *)v6 + 44))(v6); /*0x65ab63*/
      Power::TimerProcess(aP1); /*0x65ab69*/
    }
    result = (BaseClass *)*((char *)this + 58); /*0x65ab6e*/
  }
  return (int)result; /*0x65ab79*/

}
} // namespace ra2

// 0x65AB80
namespace gamemd {
int RadioClass::LoadState(ObjectClass * aP1, ObjectClass * aP2)
{

  ObjectClass *v3; // ebp
  ObjectClass *v4; // edi
  int result; // eax
  void **p_attachedTag; // esi
  int v7; // esi
  ObjectClass *v8; // eax
  int v9; // esi

  v3 = aP1; /*0x65ab81*/
  v4 = aP2; /*0x65ab87*/
  result = BuildingClass::SaveLoad_Register((void *)this); /*0x65ab8d*/
  if ( result >= 0 ) /*0x65ab94*/
  {
    p_attachedTag = (void **)(&v3[1].attachedTag);
    if ( v3 != (ObjectClass *)-224 ) /*0x65aba2*/
    {
      v3[1].attachedBomb = 0; /*0x65aba4*/
      v3[1].ambientSoundController[0] = 0; /*0x65abab*/
      IDA_LOBYTE(v3[1].ambientSoundController[1]) = 1; /*0x65abb2*/
      IDA_BYTE1(v3[1].ambientSoundController[1]) = 0; /*0x65abb6*/
      *p_attachedTag = &vt_VectorClass_TechnoClass; /*0x65abba*/
    }
    result = (*(int (**)(ObjectClass *, ObjectClass **, int, unsigned int))(*(unsigned int *)v4->__pad_0 + 12))( /*0x65abcc*/
               v4,
               &aP2,
               4,
               0);
    if ( result >= 0 ) /*0x65abd1*/
    {
      (*((void (**)(void **, ObjectClass *, unsigned int))*p_attachedTag + 2))(&v3[1].attachedTag, aP2, 0); /*0x65abde*/
      v7 = 0; /*0x65abe1*/
      v8 = aP2; /*0x65abe3*/
      if ( (int)aP2 <= 0 ) /*0x65abe9*/
      {
LABEL_8:
        v9 = 0; /*0x65ac14*/
        if ( (int)v8 > 0 ) /*0x65ac18*/
        {
          do /*0x65ac33*/
            ObjectPtr::RegisterForTracking((int)&g_abs_B077F8, (int *)v3[1].attachedBomb + v9++); /*0x65ac29*/
          while ( v9 < (int)aP2 ); /*0x65ac33*/
        }
        return 0; /*0x65ac35*/
      }
      else
      {
        while ( 1 ) /*0x65abf7*/
        {
          result = (*(int (**)(ObjectClass *, ObjectClass **, int, unsigned int))(*(unsigned int *)v4->__pad_0 + 12))( /*0x65abf7*/
                     v4,
                     &aP1,
                     4,
                     0);
          if ( result < 0 ) /*0x65abfc*/
            break; /*0x65abfc*/
          *((unsigned int *)v3[1].attachedBomb + v7) = aP1; /*0x65ac08*/
          v8 = aP2; /*0x65ac0b*/
          if ( ++v7 >= (int)aP2 ) /*0x65ac12*/
            goto LABEL_8; /*0x65ac12*/
        }
      }
    }
  }
  return result; /*0x65ac37*/

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
  v2 = *((char *)this + 58); /*0x65ad99*/
  result = 0; /*0x65ad9f*/
  if ( v2 <= 0 ) /*0x65ada3*/
    return -1; /*0x65adb7*/
  for ( i = (unsigned int *)*((char *)this + 57); *i != a2; ++i ) /*0x65ada5*/
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

  v1 = *((char *)this + 58); /*0x65adc0*/
  v2 = 0; /*0x65adc6*/
  if ( v1 <= 0 ) /*0x65adca*/
    return 0; /*0x65addf*/
  for ( i = (unsigned int *)*((char *)this + 57); *i; ++i ) /*0x65adcc*/
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

  v3 = *((unsigned int *)this + 58); /*0x65ae69*/
  if ( a2 > v3 ) /*0x65ae71*/
  {
    (*(void (**)(unsigned int *, int, unsigned int))(*((unsigned int *)this + 56) + 8))((unsigned int *)this + 56, a2, 0); /*0x65ae82*/
    v4 = v3; /*0x65ae87*/
    do /*0x65ae9c*/
    {
      ++v4; /*0x65ae91*/
      *(unsigned int *)(*((unsigned int *)this + 57) + 4 * v4 - 4) = 0; /*0x65ae94*/
    }
    while ( v4 < a2 ); /*0x65ae9c*/
  }

}
} // namespace ra2

// 0x65AAC0
namespace gamemd {
int RadioClass::ExecuteAction(TimerStruct * aP1, IUnknown * aP2)
{

  BaseClass *result; // eax
  int i; // ecx
  int v6; // eax
  TimerStruct *v7; // edx
  unsigned int *v8; // eax

  ((Object *)((void *)this))->Unlink(); /*0x65aacf*/
  result = *(BaseClass **)((char *)this + 232); /*0x65aad4*/
  for ( i = 0; i < (int)result; ++i ) /*0x65aade*/
  {
    v6 = *((unsigned int *)this + 57); /*0x65aae0*/
    v7 = *(TimerStruct **)(v6 + 4 * i); /*0x65aae6*/
    v8 = (unsigned int *)(v6 + 4 * i); /*0x65aae9*/
    if ( v7 == aP1 ) /*0x65aaee*/
    {
      if ( (unsigned char)aP2 ) /*0x65aaf2*/
        *v8 = 0; /*0x65aaf4*/
    }
    result = *(BaseClass **)((char *)this + 232); /*0x65aafa*/
  }
  return (int)result; /*0x65ab05*/

}
} // namespace gamemd

// 0x65AC40
namespace gamemd {
int RadioClass::SaveState(int * a0, RadioClass * aP1, int aP2)
{

  int result; // eax
  int v4; // edx
  int v5; // ebx

  result = ((AbstractClass *)((ObjectTypeClass *)a0))->SaveLoad_Prefix((ObjectTypeClass *)aP1, (ObjectTypeClass *)aP2); /*0x65ac52*/
  if ( result >= 0 ) /*0x65ac59*/
  {
    v4 = *(unsigned int *)aP1->__pad_0; /*0x65ac61*/
    aP2 = a0[58]; /*0x65ac6d*/
    result = (*(int (**)(RadioClass *, int *, int, unsigned int))(v4 + 16))(aP1, &aP2, 4, 0); /*0x65ac71*/
    if ( result >= 0 ) /*0x65ac76*/
    {
      v5 = 0; /*0x65ac7c*/
      if ( aP2 <= 0 ) /*0x65ac80*/
      {
        return 0; /*0x65aca3*/
      }
      else
      {
        while ( 1 ) /*0x65ac93*/
        {
          result = (*(int (**)(RadioClass *, int, int, unsigned int))(*(unsigned int *)aP1->__pad_0 + 16))( /*0x65ac93*/
                     aP1,
                     a0[57] + 4 * v5,
                     4,
                     0);
          if ( result < 0 ) /*0x65ac98*/
            break; /*0x65ac98*/
          if ( ++v5 >= aP2 ) /*0x65aca1*/
            return 0; /*0x65aca1*/
        }
      }
    }
  }
  return result; /*0x65aca5*/

}
} // namespace gamemd
