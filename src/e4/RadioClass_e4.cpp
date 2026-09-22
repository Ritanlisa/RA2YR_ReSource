// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Object_e4.hpp"
#include "e4/classes/Power_e4.hpp"

// 0x65A750
namespace ra2 {
namespace game {
unsigned int * RadioClass::Release()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall RadioClass::RadioClass(_DWORD *this)
{
  RadioClass::Constructor((int)this); /*0x65a753*/
  this->q0E4 = 0; /*0x65a75a*/
  this->q0E8 = 1; /*0x65a764*/
  this->q0EC = 1; /*0x65a76e*/
  this->q0ED = 0; /*0x65a775*/
  this->radioLinks = &vt_VectorClass_TechnoClass; /*0x65a77c*/
  this->q0E4 = __2_YAPAXI_Z(4u); /*0x65a78b*/
  this->q0ED = 1; /*0x65a791*/
  *this = &RadioClass::`vftable'; /*0x65a798*/
  this->vtable2 = &RadioClass::`vftable'; /*0x65a79e*/
  this->vtable3 = &RadioClass::`vftable'; /*0x65a7a5*/
  this->vtable4 = &vt_RadioClass; /*0x65a7ac*/
  *(_DWORD *)this->q0E4 = 0; /*0x65a7be*/
  this->lastCommands = 0; /*0x65a7c4*/
  this->q0D8 = 0; /*0x65a7ca*/
  this->q0DC = 0; /*0x65a7d2*/
  return this; /*0x65a7d8*/
}
}
} // namespace game
} // namespace ra2

// 0x65AA80
namespace ra2 {
namespace game {
int RadioClass::ProcessCmd()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall RadioClass::ProcessCmd(#374 *this)
{
  if ( !this->inLimbo ) /*0x65aa83*/
    (*(void (__thiscall **)(#374 *, int))(this->q0A0)(this, 3); /*0x65aa91*/
  return ObjectClass::Undeploy(this); /*0x65aa9e*/
}
}
} // namespace game
} // namespace ra2

// 0x65AB10
namespace ra2 {
namespace game {
int RadioClass::PowerDrainUpdate(AbstractClass * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall RadioClass::PowerDrainUpdate(int *this, AbstractClass *aP1)
{
  BaseClass *result; // eax
  int i; // edi
  int v5; // eax
  int v6; // ecx

  AbstractClass::COMStub_13((int)this, aP1); /*0x65ab1a*/
  Power::TimerProcess(aP1); /*0x65ab28*/
  result = (BaseClass *)this->q03A; /*0x65ab2d*/
  for ( i = 0; i < (int)result; ++i ) /*0x65ab37*/
  {
    v5 = *(_DWORD *)(this->q0E4 + 4 * i); /*0x65ab3f*/
    if ( v5 ) /*0x65ab44*/
    {
      (*(void (__stdcall **)(int))(*(_DWORD *)(v5 + 4) + 16))(v5 + 4); /*0x65ab4d*/
      Power::TimerProcess(aP1); /*0x65ab53*/
      v6 = *(_DWORD *)(this->q0E4 + 4 * i); /*0x65ab5e*/
      (*(void (__thiscall **)(int))(*(_DWORD *)v6 + 44))(v6); /*0x65ab63*/
      Power::TimerProcess(aP1); /*0x65ab69*/
    }
    result = (BaseClass *)this->q03A; /*0x65ab6e*/
  }
  return (int)result; /*0x65ab79*/
}
}
} // namespace game
} // namespace ra2

// 0x65AB80
namespace ra2 {
namespace game {
int RadioClass::LoadState(ObjectClass * aP1, ObjectClass * aP2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall RadioClass::LoadState(void *this, ObjectClass *aP1, ObjectClass *aP2)
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
  result = BuildingClass::SaveLoad_Register((#374 *)this); /*0x65ab8d*/
  if ( result >= 0 ) /*0x65ab94*/
  {
    p_attachedTag = &v3[1].attachedTag; /*0x65ab9a*/
    if ( v3 != (ObjectClass *)-224 ) /*0x65aba2*/
    {
      v3[1].attachedBomb = 0; /*0x65aba4*/
      v3[1].ambientSoundController[0] = 0; /*0x65abab*/
      LOBYTE(v3[1].ambientSoundController[1]) = 1; /*0x65abb2*/
      BYTE1(v3[1].ambientSoundController[1]) = 0; /*0x65abb6*/
      *p_attachedTag = &vt_VectorClass_TechnoClass; /*0x65abba*/
    }
    result = (*(int (__stdcall **)(ObjectClass *, ObjectClass **, int, _DWORD))(*(_DWORD *)v4->__pad_0 + 12))( /*0x65abcc*/
               v4,
               &aP2,
               4,
               0);
    if ( result >= 0 ) /*0x65abd1*/
    {
      (*((void (__thiscall **)(void **, ObjectClass *, _DWORD))*p_attachedTag + 2))(&v3[1].attachedTag, aP2, 0); /*0x65abde*/
      v7 = 0; /*0x65abe1*/
      v8 = aP2; /*0x65abe3*/
      if ( (int)aP2 <= 0 ) /*0x65abe9*/
      {
LABEL_8:
        v9 = 0; /*0x65ac14*/
        if ( (int)v8 > 0 ) /*0x65ac18*/
        {
          do /*0x65ac33*/
            ObjectPtr::RegisterForTracking((int)&g_OverlayTypeConfig[18712], (int *)v3[1].attachedBomb + v9++); /*0x65ac29*/
          while ( v9 < (int)aP2 ); /*0x65ac33*/
        }
        return 0; /*0x65ac35*/
      }
      else
      {
        while ( 1 ) /*0x65abf7*/
        {
          result = (*(int (__stdcall **)(ObjectClass *, ObjectClass **, int, _DWORD))(*(_DWORD *)v4->__pad_0 + 12))( /*0x65abf7*/
                     v4,
                     &aP1,
                     4,
                     0);
          if ( result < 0 ) /*0x65abfc*/
            break; /*0x65abfc*/
          *((_DWORD *)v3[1].attachedBomb + v7) = aP1; /*0x65ac08*/
          v8 = aP2; /*0x65ac0b*/
          if ( ++v7 >= (int)aP2 ) /*0x65ac12*/
            goto LABEL_8; /*0x65ac12*/
        }
      }
    }
  }
  return result; /*0x65ac37*/
}
}
} // namespace game
} // namespace ra2

// 0x65AD90
namespace ra2 {
namespace game {
int RadioClass::FindLinkIndex(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall RadioClass::FindLinkIndex(int *this, int a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  if ( !a2 ) /*0x65ad97*/
    return -1; /*0x65ad97*/
  v2 = this->q03A; /*0x65ad99*/
  result = 0; /*0x65ad9f*/
  if ( v2 <= 0 ) /*0x65ada3*/
    return -1; /*0x65adb7*/
  for ( i = (_DWORD *)this->q0E4; *i != a2; ++i ) /*0x65ada5*/
  {
    if ( ++result >= v2 ) /*0x65adb5*/
      return -1; /*0x65adb5*/
  }
  return result; /*0x65adba*/
}
}
} // namespace game
} // namespace ra2

// 0x65ADC0
namespace ra2 {
namespace game {
char RadioClass::HasFreeLink()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall RadioClass::HasFreeLink(int *this)
{
  int v1; // edx
  int v2; // eax
  _DWORD *i; // ecx

  v1 = this->q03A; /*0x65adc0*/
  v2 = 0; /*0x65adc6*/
  if ( v1 <= 0 ) /*0x65adca*/
    return 0; /*0x65addf*/
  for ( i = (_DWORD *)this->q0E4; *i; ++i ) /*0x65adcc*/
  {
    if ( ++v2 >= v1 ) /*0x65addd*/
      return 0; /*0x65addd*/
  }
  return 1; /*0x65ade1*/
}
}
} // namespace game
} // namespace ra2

// 0x65AE60
namespace ra2 {
namespace game {
void RadioClass::SetLinkCount(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall RadioClass::SetLinkCount(_DWORD *this, int a2)
{
  int v3; // ebx
  int v4; // eax

  v3 = this->q0E8; /*0x65ae69*/
  if ( a2 > v3 ) /*0x65ae71*/
  {
    (*(void (__thiscall **)(_DWORD *, int, _DWORD))(this->radioLinks + 8))(this + 56, a2, 0); /*0x65ae82*/
    v4 = v3; /*0x65ae87*/
    do /*0x65ae9c*/
    {
      ++v4; /*0x65ae91*/
      *(_DWORD *)(this->q0E4 + 4 * v4 - 4) = 0; /*0x65ae94*/
    }
    while ( v4 < a2 ); /*0x65ae9c*/
  }
}
}
} // namespace game
} // namespace ra2

// 0x65AAC0
namespace ra2 {
namespace game {
int RadioClass::ExecuteAction(TimerStruct * aP1, IUnknown * aP2)
{
{
    BaseClass *result;
    int i;
    int v6;
    TimerStruct *v7;
    int *v8;
    Object::Unlink((AnimClass *)this);
    result = *(BaseClass **)(this + 232);
    for ( i = 0; i < (int)result; ++i )
  {
    v6 = this->flashing;
    v7 = *(TimerStruct **)(v6 + 4 * i);
    v8 = (int *)(v6 + 4 * i);
    if ( v7 == aP1 )
    {
    if ( (char)aP2 )
    *v8 = 0;
    }
    result = *(BaseClass **)(this + 232);
  }
    return (int)result;
}
}
} // namespace game
} // namespace ra2

// 0x65AC40
namespace ra2 {
namespace game {
int RadioClass::SaveState(int * a0, RadioClass * aP1, int aP2)
{
{
    int result;
    int v4;
    int v5;
    result = AbstractClass::SaveLoad_Prefix((ObjectTypeClass *)a0, (ObjectTypeClass *)aP1, (ObjectTypeClass *)aP2);
    if ( result >= 0 )
  {
    v4 = *(int *)aP1->__pad_0;
    aP2 = *((int*)(a0) + 58);
    result = (*(int (__stdcall **)(RadioClass *, int *, int, int))(v4 + 16))(aP1, &aP2, 4, 0);
    if ( result >= 0 )
    {
    v5 = 0;
    if ( aP2 <= 0 )
      {
    return 0;
      }
    else
      {
    while ( 1 )
        {
    result = (*(int (__stdcall **)(RadioClass *, int, int, int))(*(int *)aP1->__pad_0 + 16))( aP1, *((int*)(a0) + 57) + 4 * v5, 4, 0);
    if ( result < 0 )
    break;
    if ( ++v5 >= aP2 )
    return 0;
        }
      }
    }
  }
    return result;
}
}
} // namespace game
} // namespace ra2
