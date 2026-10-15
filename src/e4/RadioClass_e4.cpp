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
namespace gamemd {  // G42.18 ns repair
unsigned int * RadioClass::Release(void *a1)
{
  RadioClass::Constructor((gamemd::RadioClass *)((int)a1)); /*0x65a753*/
  *(unsigned int *)&a1->q0E4 = 0; /*0x65a75a*/
  (&a1->radioLinks)[2] = 1; /*0x65a764*/
  (*((unsigned char *)&((&a1->radioLinks)[3]))) = 1; /*0x65a76e*/
  (((unsigned char *)&((&a1->radioLinks)[3]))[1]) = 0; /*0x65a775*/
  (&a1->radioLinks)[0] = (int)&vt_VectorClass; /*0x65a77c*/
  *(unsigned int *)&a1->q0E4 = operator new(4u); /*0x65a78b*/
  (((unsigned char *)&((&a1->radioLinks)[3]))[1]) = 1; /*0x65a791*/
  /* X11: vtable install elided (implicit via RadioClass virtuals 0x65a798) */
  /* X11: vtable install elided (implicit via RadioClass virtuals 0x65a79e) */
  /* X11: vtable install elided (implicit via RadioClass virtuals 0x65a7a5) */
  /* X11: vtable install elided (implicit via RadioClass virtuals 0x65a7ac) */
  *(unsigned int *)a1->radioLinks[1] = 0; /*0x65a7be*/
  (&a1->lastCommands)[0] = 0; /*0x65a7c4*/
  a1->lastCommands[1] = 0; /*0x65a7ca*/
  a1->lastCommands[2] = 0; /*0x65a7d2*/
  return &a1->vfptr; /*0x65a7d8*/
}  // G42.18 ns repair
} // namespace ra2

// 0x65AA80
namespace gamemd {
int RadioClass::ProcessCmd()
{

  if ( !this->inLimbo ) /*0x65aa83*/
    (*((void (**)(RadioClass *, int))this->MissionClass + 160))(this, 3); /*0x65aa91*/
  return ((ObjectClass *)this)->Undeploy(); /*0x65aa9e*/

}
} // namespace ra2

// 0x65AB10
namespace gamemd {
int RadioClass::PowerDrainUpdate(AbstractClass * aP1)
{


  ((int)this)->COMStub_13(aP1); /*0x65ab1a*/
  Power::TimerProcess(this->radioLinks[2]); /*0x65ab28*/
  int result; // eax
  result = this->radioLinks[2]; /*0x65ab2d*/
  int i; // edi
  for ( i = 0; i < result; ++i ) /*0x65ab37*/
  {
  int v5; // eax
    v5 = *(unsigned int *)(this->radioLinks[1] + 4 * i); /*0x65ab3f*/
    if ( v5 ) /*0x65ab44*/
    {
  int v6; // eax
      v6 = (*(int (**)(int))(*(unsigned int *)(v5 + 4) + 16))(v5 + 4); /*0x65ab4d*/
      Power::TimerProcess(v6); /*0x65ab53*/
  int v7; // ecx
      v7 = *(unsigned int *)(this->radioLinks[1] + 4 * i); /*0x65ab5e*/
  int v8; // eax
      v8 = (*(int (**)(int))(*(unsigned int *)v7 + 44))(v7); /*0x65ab63*/
      Power::TimerProcess(v8); /*0x65ab69*/
    }
    result = this->radioLinks[2]; /*0x65ab6e*/
  }
  return result; /*0x65ab79*/

}
} // namespace ra2

// 0x65AB80
namespace gamemd {
int RadioClass::LoadState(int aP1, int aP2)
{

  int v3; // ebp
  int v4; // edi
  int result; // eax
  int v6; // esi
  int v7; // esi
  int v8; // eax
  int v9; // esi

  v3 = aP1; /*0x65ab81*/
  v4 = aP2; /*0x65ab87*/
  result = ((ObjectClass *)this)->SaveLoad_Register(); /*0x65ab8d*/
  if ( result >= 0 ) /*0x65ab94*/
  {
    v6 = v3 + 224; /*0x65ab9a*/
    if ( v3 != -224 ) /*0x65aba2*/
    {
      *(unsigned int *)(v3 + 228) = 0; /*0x65aba4*/
      *(unsigned int *)(v3 + 232) = 0; /*0x65abab*/
      *(unsigned char *)(v3 + 236) = 1; /*0x65abb2*/
      *(unsigned char *)(v3 + 237) = 0; /*0x65abb6*/
      *(unsigned int *)v6 = (unsigned int)(&vt_VectorClass); /*0x65abba*/
    }
    result = (*(int (**)(int, int *, int, unsigned int))(*(unsigned int *)v4 + 12))(v4, &aP2, 4, 0); /*0x65abcc*/
    if ( result >= 0 ) /*0x65abd1*/
    {
      (*(void (**)(int, int, unsigned int))(*(unsigned int *)v6 + 8))(v3 + 224, aP2, 0); /*0x65abde*/
      v7 = 0; /*0x65abe1*/
      v8 = aP2; /*0x65abe3*/
      if ( aP2 <= 0 ) /*0x65abe9*/
      {
LABEL_8:
        v9 = 0; /*0x65ac14*/
        if ( v8 > 0 ) /*0x65ac18*/
        {
          do /*0x65ac33*/
            ObjectPtr::RegisterForTracking( /*0x65ac29*/
              (int)&SwizzleManagerClass_Instance,
              (int *)(*(unsigned int *)(v3 + 228) + 4 * v9++));
          while ( v9 < aP2 ); /*0x65ac33*/
        }
        return 0; /*0x65ac35*/
      }
      else
      {
        while ( 1 ) /*0x65abf7*/
        {
          result = (*(int (**)(int, int *, int, unsigned int))(*(unsigned int *)v4 + 12))(v4, &aP1, 4, 0); /*0x65abf7*/
          if ( result < 0 ) /*0x65abfc*/
            break; /*0x65abfc*/
          *(unsigned int *)(*(unsigned int *)(v3 + 228) + 4 * v7) = aP1; /*0x65ac08*/
          v8 = aP2; /*0x65ac0b*/
          if ( ++v7 >= aP2 ) /*0x65ac12*/
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

  if ( !a2 ) /*0x65ad97*/
    return -1; /*0x65ad97*/
  int v2; // edx
  v2 = this->u32_E8; /*0x65ad99*/
  int result; // eax
  result = 0; /*0x65ad9f*/
  if ( v2 <= 0 ) /*0x65ada3*/
    return -1; /*0x65adb7*/
  unsigned int *i; // ecx
  for ( i = (unsigned int *)this->Tactical_E4; *i != a2; ++i ) /*0x65ada5*/
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
  v1 = this->u32_E8; /*0x65adc0*/
  int v2; // eax
  v2 = 0; /*0x65adc6*/
  if ( v1 <= 0 ) /*0x65adca*/
    return 0; /*0x65addf*/
  unsigned int *i; // ecx
  for ( i = (unsigned int *)this->Tactical_E4; *i; ++i ) /*0x65adcc*/
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
  v3 = this-((unsigned int *)(>radioLinks))[2]; /*0x65ae69*/
  if ( a2 > v3 ) /*0x65ae71*/
  {
    (*(void (**)(int *, int, unsigned int))(this-((unsigned int *)(>radioLinks))[0] + 8))(this->radioLinks, a2, 0); /*0x65ae82*/
  int v4; // eax
    v4 = v3; /*0x65ae87*/
    do /*0x65ae9c*/
    {
      ++v4; /*0x65ae91*/
      *(unsigned int *)(this-((unsigned int *)(>radioLinks))[1] + 4 * v4 - 4) = 0; /*0x65ae94*/
    }
    while ( v4 < a2 ); /*0x65ae9c*/
  }
}
} // namespace ra2

// 0x65AAC0
namespace gamemd {
int RadioClass::ExecuteAction(int aP1, char aP2)
{


  ((ObjectClass *)this)->Unlink(); /*0x65aacf*/
  int result; // eax
  result = this->radioLinks[2]; /*0x65aad4*/
  int i; // ecx
  for ( i = 0; i < result; ++i ) /*0x65aade*/
  {
  int v6; // eax
    v6 = this->radioLinks[1]; /*0x65aae0*/
  int v7; // edx
    v7 = *(unsigned int *)(v6 + 4 * i); /*0x65aae6*/
  unsigned int *v8; // eax
    v8 = (unsigned int *)(v6 + 4 * i); /*0x65aae9*/
    if ( v7 == aP1 ) /*0x65aaee*/
    {
      if ( aP2 ) /*0x65aaf2*/
        *v8 = 0; /*0x65aaf4*/
    }
    result = this->radioLinks[2]; /*0x65aafa*/
  }
  return result; /*0x65ab05*/

}
} // namespace gamemd

// 0x65AC40
namespace gamemd {
int RadioClass::SaveState(int * a0, RadioClass * aP1, int aP2)
{


  int result; // eax
  result = AbstractClass::SaveLoad_Prefix((int *)a0, aP1, aP2); /*0x65ac52*/
  if ( result >= 0 ) /*0x65ac59*/
  {
  int v4; // edx
    v4 = (int)(*aP1); /*0x65ac61*/
    aP2 = a0->radioLinks[2]; /*0x65ac6d*/
    result = (*(int (**)(int *, int *, int, unsigned int))(v4 + 16))(aP1, &aP2, 4, 0); /*0x65ac71*/
    if ( result >= 0 ) /*0x65ac76*/
    {
  int v5; // ebx
      v5 = 0; /*0x65ac7c*/
      if ( aP2 <= 0 ) /*0x65ac80*/
      {
        return 0; /*0x65aca3*/
      }
      else
      {
        while ( 1 ) /*0x65ac93*/
        {
          result = aP1->GetVtable3(a0->radioLinks[1] + 4 * v5, 4, 0); /*0x65ac93*/
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
