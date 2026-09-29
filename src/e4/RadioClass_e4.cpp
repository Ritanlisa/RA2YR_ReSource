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
unsigned int * RadioClass::Release()
{
  RadioClass::Constructor(); /*0x65a753*/
  this->radioLinks[1] = 0; /*0x65a75a*/
  this->radioLinks[2] = 1; /*0x65a764*/
  IDA_LOBYTE(this->radioLinks[3]) = 1; /*0x65a76e*/
  IDA_BYTE1(this->radioLinks[3]) = 0; /*0x65a775*/
  this->radioLinks[0] = (int)&VectorClass_TechnoClass___vftable; /*0x65a77c*/
  this->radioLinks[1] = RA2_OPNEW(4u); /*0x65a78b*/
  IDA_BYTE1(this->radioLinks[3]) = 1; /*0x65a791*/
  this->MissionClass = (void*)&RadioClass_vftable; /*0x65a798*/
  this->? = (void*)&RadioClass_vftable; /*0x65a79e*/
  this->? = (void*)&RadioClass_vftable; /*0x65a7a5*/
  this->? = (void*)&RadioClass_vftable; /*0x65a7ac*/
  *(unsigned int *)this->radioLinks[1] = 0; /*0x65a7be*/
  this->lastCommands[0] = 0; /*0x65a7c4*/
  this->lastCommands[1] = 0; /*0x65a7ca*/
  this->lastCommands[2] = 0; /*0x65a7d2*/
  return &this->MissionClass; /*0x65a7d8*/
}
} // namespace ra2

// 0x65AA80
namespace gamemd {
int RadioClass::ProcessCmd()
{
  if ( !this->? ) /*0x65aa83*/
    (*((void (__thiscall **)(RadioClass *, int))this->MissionClass + 160))(this, 3); /*0x65aa91*/
  return ObjectClass::Undeploy(); /*0x65aa9e*/
}
} // namespace ra2

// 0x65AB10
namespace gamemd {
int RadioClass::PowerDrainUpdate(AbstractClass * aP1)
{
  int result; // eax
  int i; // edi
  int v5; // eax
  int v6; // eax
  int v7; // ecx
  int v8; // eax

  AbstractClass::COMStub_13(aP1); /*0x65ab1a*/
  Power::TimerProcess(this->radioLinks[2]); /*0x65ab28*/
  result = this->radioLinks[2]; /*0x65ab2d*/
  for ( i = 0; i < result; ++i ) /*0x65ab37*/
  {
    v5 = *(unsigned int *)(this->radioLinks[1] + 4 * i); /*0x65ab3f*/
    if ( v5 ) /*0x65ab44*/
    {
      v6 = (*(int (__stdcall **)(int))(*(unsigned int *)(v5 + 4) + 16))(v5 + 4); /*0x65ab4d*/
      Power::TimerProcess(v6); /*0x65ab53*/
      v7 = *(unsigned int *)(this->radioLinks[1] + 4 * i); /*0x65ab5e*/
      v8 = (*(int (__thiscall **)(int))(*(unsigned int *)v7 + 44))(v7); /*0x65ab63*/
      Power::TimerProcess(v8); /*0x65ab69*/
    }
    result = this->radioLinks[2]; /*0x65ab6e*/
  }
  return result; /*0x65ab79*/
}
} // namespace ra2

// 0x65AB80
namespace gamemd {
int RadioClass::LoadState(ObjectClass * aP1, ObjectClass * aP2)
{
  ObjectClass * result;
  ObjectClass * v6;
  int v7; // esi
  ObjectClass * v8;
  int v9; // esi

  aP1 = aP1; /*0x65ab81*/
  aP2 = aP2; /*0x65ab87*/
  result = BuildingClass::SaveLoad_Register(this); /*0x65ab8d*/
  if ( result >= 0 ) /*0x65ab94*/
  {
    v6 = aP1 + 224; /*0x65ab9a*/
    if ( aP1 != -224 ) /*0x65aba2*/
    {
      aP1->q0E4 = (unsigned int)((void *)(0));
      aP1->q0E8 = (unsigned int)((gamemd::Audio *)((void *)(0)));
      aP1->q0EC = (unsigned int)((void *)(1));
      aP1->q0ED = 0; /*0x65abb6*/
    }
    result = (*(int (__stdcall **)(int, int *, int, unsigned int))(aP2->vtable4)(aP2, &aP2, 4, 0); /*0x65abcc*/
    if ( result >= 0 ) /*0x65abd1*/
    {
      (*(void (__thiscall **)(int, int, unsigned int))(*(unsigned int *)v6 + 8))(aP1 + 224, aP2, 0); /*0x65abde*/
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
              (int *)(aP1->q0E4 + 4 * v9++));
          while ( v9 < aP2 ); /*0x65ac33*/
        }
        return 0; /*0x65ac35*/
      }
      else
      {
        while ( 1 ) /*0x65abf7*/
        {
          result = (unsigned int)((unsigned int)((unsigned int)((unsigned int)((unsigned int)((int)((unsigned int)((unsigned int)((int)((unsigned int)((unsigned int)((unsigned int)((unsigned int)((unsigned int)((unsigned int)((unsigned int)((unsigned int)((unsigned int)((unsigned int)((unsigned int)((unsigned int)((unsigned int)((unsigned int)((unsigned int)((unsigned int)((*(int (__stdcall **)(int, int *, int, unsigned int))(aP2->vtable4)(aP2, &aP1, 4, 0); /*0x65abf7*/ if ( result < 0 ) /*0x65abfc*/ break; /*0x65abfc*/ *(unsigned int *)(aP1->q0E4 + 4 * v7) = aP1; /*0x65ac08*/ v8 = aP2; /*0x65ac0b*/ if ( ++v7 >= aP2 ) /*0x65ac12*/ goto LABEL_8; /*0x65ac12*/ } } } } return result)))))))))))))))))))))))));
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
  v2 = this->radioLinks[2]; /*0x65ad99*/
  result = 0; /*0x65ad9f*/
  if ( v2 <= 0 ) /*0x65ada3*/
    return -1; /*0x65adb7*/
  for ( i = (unsigned int *)this->radioLinks[1]; *i != a2; ++i ) /*0x65ada5*/
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

  v1 = this->radioLinks[2]; /*0x65adc0*/
  v2 = 0; /*0x65adc6*/
  if ( v1 <= 0 ) /*0x65adca*/
    return 0; /*0x65addf*/
  for ( i = (unsigned int *)this->radioLinks[1]; *i; ++i ) /*0x65adcc*/
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

  v3 = this->radioLinks[2]; /*0x65ae69*/
  if ( a2 > v3 ) /*0x65ae71*/
  {
    (*(void (__thiscall **)(int *, int, unsigned int))(this->radioLinks[0] + 8))(this->radioLinks, a2, 0); /*0x65ae82*/
    v4 = v3; /*0x65ae87*/
    do /*0x65ae9c*/
    {
      ++v4; /*0x65ae91*/
      *(unsigned int *)(this->radioLinks[1] + 4 * v4 - 4) = 0; /*0x65ae94*/
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

  Object::Unlink(); /*0x65aacf*/
  result = this->radioLinks[2]; /*0x65aad4*/
  for ( i = 0; i < result; ++i ) /*0x65aade*/
  {
    v6 = this->radioLinks[1]; /*0x65aae0*/
    v7 = *(unsigned int *)(v6 + 4 * i); /*0x65aae6*/
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
  int v4; // edx
  int v5; // ebx

  result = AbstractClass::SaveLoad_Prefix((int *)a0, aP1, aP2); /*0x65ac52*/
  if ( result >= 0 ) /*0x65ac59*/
  {
    v4 = *aP1; /*0x65ac61*/
    aP2 = a0->radioLinks[2]; /*0x65ac6d*/
    result = (*(int (__stdcall **)(int *, int *, int, unsigned int))(v4 + 16))(aP1, &aP2, 4, 0); /*0x65ac71*/
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
          result = (*(int (__stdcall **)(int *, int, int, unsigned int))(*aP1 + 16))(aP1, a0->radioLinks[1] + 4 * v5, 4, 0); /*0x65ac93*/
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
