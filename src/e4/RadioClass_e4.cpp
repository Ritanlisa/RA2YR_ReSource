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
  RadioClass::Constructor((int)this); /*0x65a753*/
  *(this + 57) = 0; /*0x65a75a*/
  *(this + 58) = 1; /*0x65a764*/
  *((_BYTE *)this + 236) = 1; /*0x65a76e*/
  *((_BYTE *)this + 237) = 0; /*0x65a775*/
  *(this + 56) = &VectorClass<TechnoClass *>::`vftable'; /*0x65a77c*/
  *(this + 57) = __2_YAPAXI_Z(4u); /*0x65a78b*/
  *((_BYTE *)this + 237) = 1; /*0x65a791*/
  *this = &RadioClass::`vftable'; /*0x65a798*/
  *(this + 1) = &RadioClass::`vftable'; /*0x65a79e*/
  *(this + 2) = &RadioClass::`vftable'; /*0x65a7a5*/
  *(this + 3) = &RadioClass::`vftable'; /*0x65a7ac*/
  *(_DWORD *)*(this + 57) = 0; /*0x65a7be*/
  *(this + 53) = 0; /*0x65a7c4*/
  *(this + 54) = 0; /*0x65a7ca*/
  *(this + 55) = 0; /*0x65a7d2*/
  return this; /*0x65a7d8*/
}
} // namespace ra2
}

// 0x65AA80
namespace ra2 {
namespace game {
int RadioClass::ProcessCmd()
{
  if ( !*((_BYTE *)this + 129) ) /*0x65aa83*/
    (*(void (__thiscall **)(#374 *, int))(*(_DWORD *)this + 640))(this, 3); /*0x65aa91*/
  return ObjectClass::Undeploy(this); /*0x65aa9e*/
}
} // namespace ra2
}

// 0x65AB10
namespace ra2 {
namespace game {
int RadioClass::PowerDrainUpdate(AbstractClass * aP1)
{
  int result; // eax
  int i; // edi
  int v5; // eax
  int v6; // eax
  int v7; // ecx
  int v8; // eax

  AbstractClass::COMStub_13((int)this, aP1); /*0x65ab1a*/
  Power::TimerProcess(*(this + 58)); /*0x65ab28*/
  result = *(this + 58); /*0x65ab2d*/
  for ( i = 0; i < result; ++i ) /*0x65ab37*/
  {
    v5 = *(_DWORD *)(*(this + 57) + 4 * i); /*0x65ab3f*/
    if ( v5 ) /*0x65ab44*/
    {
      v6 = (*(int (__stdcall **)(int))(*(_DWORD *)(v5 + 4) + 16))(v5 + 4); /*0x65ab4d*/
      Power::TimerProcess(v6); /*0x65ab53*/
      v7 = *(_DWORD *)(*(this + 57) + 4 * i); /*0x65ab5e*/
      v8 = (*(int (__thiscall **)(int))(*(_DWORD *)v7 + 44))(v7); /*0x65ab63*/
      Power::TimerProcess(v8); /*0x65ab69*/
    }
    result = *(this + 58); /*0x65ab6e*/
  }
  return result; /*0x65ab79*/
}
} // namespace ra2
}

// 0x65AB80
namespace ra2 {
namespace game {
int RadioClass::LoadState(ObjectClass * aP1, ObjectClass * aP2)
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
  result = BuildingClass::SaveLoad_Register(this); /*0x65ab8d*/
  if ( result >= 0 ) /*0x65ab94*/
  {
    v6 = v3 + 224; /*0x65ab9a*/
    if ( v3 != -224 ) /*0x65aba2*/
    {
      *(_DWORD *)(v3 + 228) = 0; /*0x65aba4*/
      *(_DWORD *)(v3 + 232) = 0; /*0x65abab*/
      *(_BYTE *)(v3 + 236) = 1; /*0x65abb2*/
      *(_BYTE *)(v3 + 237) = 0; /*0x65abb6*/
      *(_DWORD *)v6 = &VectorClass<TechnoClass *>::`vftable'; /*0x65abba*/
    }
    result = (*(int (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &aP2, 4, 0); /*0x65abcc*/
    if ( result >= 0 ) /*0x65abd1*/
    {
      (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v6 + 8))(v3 + 224, aP2, 0); /*0x65abde*/
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
              (int *)(*(_DWORD *)(v3 + 228) + 4 * v9++));
          while ( v9 < aP2 ); /*0x65ac33*/
        }
        return 0; /*0x65ac35*/
      }
      else
      {
        while ( 1 ) /*0x65abf7*/
        {
          result = (*(int (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &aP1, 4, 0); /*0x65abf7*/
          if ( result < 0 ) /*0x65abfc*/
            break; /*0x65abfc*/
          *(_DWORD *)(*(_DWORD *)(v3 + 228) + 4 * v7) = aP1; /*0x65ac08*/
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
}

// 0x65AD90
namespace ra2 {
namespace game {
int RadioClass::FindLinkIndex(int a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  if ( !a2 ) /*0x65ad97*/
    return -1; /*0x65ad97*/
  v2 = *(this + 58); /*0x65ad99*/
  result = 0; /*0x65ad9f*/
  if ( v2 <= 0 ) /*0x65ada3*/
    return -1; /*0x65adb7*/
  for ( i = (_DWORD *)*(this + 57); *i != a2; ++i ) /*0x65ada5*/
  {
    if ( ++result >= v2 ) /*0x65adb5*/
      return -1; /*0x65adb5*/
  }
  return result; /*0x65adba*/
}
} // namespace ra2
}

// 0x65ADC0
namespace ra2 {
namespace game {
int RadioClass::HasFreeLink()
{
  int v1; // edx
  int v2; // eax
  _DWORD *i; // ecx

  v1 = *(this + 58); /*0x65adc0*/
  v2 = 0; /*0x65adc6*/
  if ( v1 <= 0 ) /*0x65adca*/
    return 0; /*0x65addf*/
  for ( i = (_DWORD *)*(this + 57); *i; ++i ) /*0x65adcc*/
  {
    if ( ++v2 >= v1 ) /*0x65addd*/
      return 0; /*0x65addd*/
  }
  return 1; /*0x65ade1*/
}
} // namespace ra2
}

// 0x65AE60
namespace ra2 {
namespace game {
void RadioClass::SetLinkCount(int a2)
{
  int v3; // ebx
  int v4; // eax

  v3 = *(this + 58); /*0x65ae69*/
  if ( a2 > v3 ) /*0x65ae71*/
  {
    (*(void (__thiscall **)(_DWORD *, int, _DWORD))(*(this + 56) + 8))(this + 56, a2, 0); /*0x65ae82*/
    v4 = v3; /*0x65ae87*/
    do /*0x65ae9c*/
    {
      ++v4; /*0x65ae91*/
      *(_DWORD *)(*(this + 57) + 4 * v4 - 4) = 0; /*0x65ae94*/
    }
    while ( v4 < a2 ); /*0x65ae9c*/
  }
}
} // namespace ra2
}

// 0x65AAC0
namespace ra2 {
namespace game {
int RadioClass::ExecuteAction(TimerStruct * aP1, IUnknown * aP2)
{
  int result; // eax
  int i; // ecx
  int v6; // eax
  int v7; // edx
  _DWORD *v8; // eax

  Object::Unlink((#374 *)this); /*0x65aacf*/
  result = *(_DWORD *)(this + 232); /*0x65aad4*/
  for ( i = 0; i < result; ++i ) /*0x65aade*/
  {
    v6 = *(_DWORD *)(this + 228); /*0x65aae0*/
    v7 = *(_DWORD *)(v6 + 4 * i); /*0x65aae6*/
    v8 = (_DWORD *)(v6 + 4 * i); /*0x65aae9*/
    if ( v7 == aP1 ) /*0x65aaee*/
    {
      if ( aP2 ) /*0x65aaf2*/
        *v8 = 0; /*0x65aaf4*/
    }
    result = *(_DWORD *)(this + 232); /*0x65aafa*/
  }
  return result; /*0x65ab05*/
}
} // namespace game
} // namespace ra2

// 0x65AC40
namespace ra2 {
namespace game {
int RadioClass::SaveState(int * a0, RadioClass * aP1, int aP2)
{
  int result; // eax
  int v4; // edx
  int v5; // ebx

  result = AbstractClass::SaveLoad_Prefix(a0, aP1, aP2); /*0x65ac52*/
  if ( result >= 0 ) /*0x65ac59*/
  {
    v4 = *aP1; /*0x65ac61*/
    aP2 = a0[58]; /*0x65ac6d*/
    result = (*(int (__stdcall **)(int *, int *, int, _DWORD))(v4 + 16))(aP1, &aP2, 4, 0); /*0x65ac71*/
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
          result = (*(int (__stdcall **)(int *, int, int, _DWORD))(*aP1 + 16))(aP1, a0[57] + 4 * v5, 4, 0); /*0x65ac93*/
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
} // namespace game
} // namespace ra2
