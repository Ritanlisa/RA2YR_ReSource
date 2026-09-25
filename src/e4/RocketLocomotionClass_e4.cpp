// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/RocketLocomotionClass_17_e4.hpp"
#include "e4/classes/RocketLocomotionClass_e4.hpp"
#include "e4/classes/Dialog_e4.hpp"
#include "e4/classes/Movie_e4.hpp"
#include "e4/e4_protos.h"

// 0x661EC0
RocketLocomotionClass::RocketLocomotionClass()
{

  LocomotionClass::Init(); /*0x661ec3*/
  this->MovingDestination = dword_B04E38; /*0x661ed1*/
  this->u32_1C = dword_B04E3C; /*0x661eda*/
  this->q020 = dword_B04E40; /*0x661ee3*/
  this->MissionTimer = g_CurrentFrame; /*0x661eee*/
  this->u32_2C = 0; /*0x661ef1*/
  this->ptr_30 = 0; /*0x661ef4*/
  g_CurrentFrame = g_CurrentFrame; /*0x661ef7*/
  this->u32_3C = 0; /*0x661efd*/
  this->TrailerTimer = g_CurrentFrame; /*0x661f00*/
  this->CurrentSpeed = 0; /*0x661f03*/
  this->MissionState = 0; /*0x661f06*/
  this->u32_4C = 0; /*0x661f09*/
  this->SpawnerIsElite = 0; /*0x661f0c*/
  this->CurrentPitch = 0; /*0x661f0f*/
  this->RocketLocomotionClass_field_58 = 0; /*0x661f12*/
  this->RocketLocomotionClass_field_bool_4C = 1; /*0x661f15*/
  *(_DWORD *)this = &(void*)(void*)&RocketLocomotionClass_vftable; /*0x661f19*/
  this->vtable2 = &(void*)(void*)&RocketLocomotionClass_vftable; /*0x661f1f*/
  return this; /*0x661f28*/
}
// 0x6633D0
int RocketLocomotionClass::ddtor(int a1, unsigned int * a2)
{
  if ( !a2 ) /*0x6633d6*/
    return -2147467261; /*0x6633d8*/
  *a2 = -1212901530; /*0x6633e6*/
  a2[1] = 299099510; /*0x6633ee*/
  a2[2] = 268491163; /*0x6633f7*/
  a2[3] = -399534261; /*0x663400*/
  return 0; /*0x6633dd*/
}
// 0x663410
int RocketLocomotionClass::BeginMove(int * a1, int * a2)
{
  int result; // eax
  wchar_t *v3; // ecx

  result = SwizzleManager::SaveLoad(a1, a2); /*0x66341b*/
  if ( result >= 0 ) /*0x663422*/
  {
    if ( a1 ) /*0x663426*/
    {
      *a1 = (int)&(void*)(void*)&LocomotionClass_vftable; /*0x663428*/
      a1[1] = (int)&(void*)(void*)&LocomotionClass_vftable; /*0x66342e*/
      v3 = g_CurrentFrame; /*0x663435*/
      a1[15] = 0; /*0x66343b*/
      a1[13] = (int)v3; /*0x663442*/
      *a1 = (int)&(void*)(void*)&RocketLocomotionClass_vftable; /*0x663445*/
      a1[1] = (int)&(void*)(void*)&RocketLocomotionClass_vftable; /*0x66344b*/
    }
  }
  return result; /*0x663452*/
}
// 0x6635B0
int RocketLocomotionClass::StubReturn96()
{
  return 96; /*0x6635b5*/
}
// 0x6635C0
RocketLocomotionClass * RocketLocomotionClass::ProcessMove(char a2)
{
  *this = &(void*)(void*)&RocketLocomotionClass_vftable; /*0x6635c3*/
  this->vtable2 = &(void*)(void*)&RocketLocomotionClass_vftable; /*0x6635c9*/
  LocomotionClass::Construct(); /*0x6635d0*/
  if ( (a2 & 1) != 0 ) /*0x6635da*/
    RA2_OPDEL(); /*0x6635dd*/
  return this; /*0x6635e7*/
}
// 0x6647B0
namespace gamemd {
void RocketLocomotionClass_17::ddtor()
{
  void *v2; // eax

  v2 = this->Items; /*0x6647b6*/
  this->q010 = 0; /*0x6647b9*/
  if ( v2 && this->IsAllocated ) /*0x6647c0*/
  {
    RA2_OPDEL(v2); /*0x6647c6*/
    this->Items = 0; /*0x6647ce*/
  }
  this->IsAllocated = 0; /*0x6647d1*/
  this->q008 = 0; /*0x6647d4*/
}
} // namespace gamemd

// 0x6647E0
namespace gamemd {
unsigned int RocketLocomotionClass_17::BeginMove(int a2)
{
  if ( this->IsInitialized ) /*0x6647e0*/
    return (unsigned int)(a2 - this->Items) >> 2; /*0x6647f5*/
  else
    return 0; /*0x6647e7*/
}
} // namespace gamemd

// 0x664800
namespace gamemd {
int RocketLocomotionClass_17::UpdateMovement(int a2)
{
  return *(_DWORD *)(this->Items + 4 * a2); /*0x66480a*/
}
} // namespace gamemd

// 0x664810
namespace gamemd {
char RocketLocomotionClass_17::AddRef(int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = this->Capacity; /*0x664812*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x66481d*/
  {
    v3 = 0; /*0x66481f*/
    if ( v2 <= 0 ) /*0x664823*/
      return 1; /*0x664843*/
    v4 = (_DWORD *)this->Items; /*0x664825*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x66482b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x664834*/
    {
      ++v3; /*0x664836*/
      ++v4; /*0x664837*/
      if ( v3 >= v2 ) /*0x66483c*/
        return 1; /*0x66483c*/
    }
  }
  return 0; /*0x66483e*/
}
} // namespace gamemd

// 0x664850
namespace gamemd {
char RocketLocomotionClass_17::SetCapacity(int a2, unsigned int * a3)
{
  _DWORD *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x66485c*/
  {
    this->IsInitialized = 0; /*0x664866*/
    if ( a3 ) /*0x66486c*/
      v4 = a3; /*0x664882*/
    else
      v4 = RA2_OPNEW(4 * a2); /*0x66487e*/
    this->IsInitialized = 1; /*0x664886*/
    if ( v4 ) /*0x66488a*/
    {
      if ( this->Items ) /*0x664895*/
      {
        v6 = this->Capacity; /*0x66489c*/
        if ( a2 < v6 ) /*0x6648a1*/
          v6 = a2; /*0x6648a3*/
        for ( i = 0; i < v6; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x6648a9*/
          ++i; /*0x6648ae*/
        if ( this->IsAllocated ) /*0x6648bb*/
        {
          RA2_OPDEL(*((void **)this + 1)); /*0x6648c6*/
          this->Items = 0; /*0x6648ce*/
        }
      }
      this->Items = v4; /*0x6648d7*/
      this->Capacity = a2; /*0x6648df*/
      this->IsAllocated = a3 == 0; /*0x6648e2*/
      return 1; /*0x6648e8*/
    }
    else
    {
      return 0; /*0x66488f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(*(_DWORD *)&this->Items2))(this); /*0x6648f2*/
    return 1; /*0x6648f8*/
  }
}
} // namespace gamemd

// 0x664900
namespace gamemd {
void RocketLocomotionClass_17::Destroy()
{
  if ( this->Items && this->IsAllocated ) /*0x66490d*/
  {
    RA2_OPDEL(this->Items); /*0x664913*/
    this->Items = 0; /*0x66491b*/
  }
  this->IsAllocated = 0; /*0x66491e*/
  this->Capacity = 0; /*0x664921*/
}
} // namespace gamemd

// 0x664930
namespace gamemd {
int RocketLocomotionClass_17::IndexOf(unsigned int * a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !this->IsInitialized ) /*0x664930*/
    return 0; /*0x664938*/
  v3 = this->Capacity; /*0x66493e*/
  result = 0; /*0x664941*/
  if ( v3 <= 0 ) /*0x664945*/
    return -1; /*0x66495c*/
  for ( i = this->Items; *i != *a2; ++i ) /*0x66494b*/
  {
    if ( ++result >= v3 ) /*0x66495a*/
      return -1; /*0x66495a*/
  }
  return result; /*0x66493a*/
}
} // namespace gamemd

// 0x664970
namespace gamemd {
unsigned int RocketLocomotionClass_17::PointerToIndex(int a2)
{
  if ( this->IsInitialized ) /*0x664970*/
    return (unsigned int)(a2 - this->Items) >> 2; /*0x664985*/
  else
    return 0; /*0x664977*/
}
} // namespace gamemd

// 0x664990
namespace gamemd {
char RocketLocomotionClass_17::Release(int a2, unsigned int * a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x66499c*/
  {
    this->IsInitialized = 0; /*0x6649a2*/
    if ( a3 ) /*0x6649a8*/
      v4 = a3; /*0x6649be*/
    else
      v4 = RA2_OPNEW(4 * a2); /*0x6649ba*/
    this->IsInitialized = 1; /*0x6649c2*/
    if ( !v4 ) /*0x6649c6*/
      return 0; /*0x664a3a*/
    if ( this->Items ) /*0x6649c8*/
    {
      v5 = this->q008; /*0x6649cf*/
      if ( a2 < v5 ) /*0x6649d4*/
        v5 = a2; /*0x6649d6*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x6649dc*/
        ++i; /*0x6649e1*/
      if ( this->IsAllocated ) /*0x6649ee*/
      {
        RA2_OPDEL(*((void **)this + 1)); /*0x6649f9*/
        this->Items = 0; /*0x664a01*/
      }
    }
    this->Items = v4; /*0x664a0a*/
    this->q008 = a2; /*0x664a12*/
    this->IsAllocated = a3 == 0; /*0x664a15*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(*(_DWORD *)&this->Items2))(this); /*0x664a1e*/
  }
  v7 = this->q008; /*0x664a21*/
  if ( v7 < this->q010 ) /*0x664a29*/
    this->q010 = v7; /*0x664a2b*/
  return 1; /*0x664a2e*/
}
} // namespace gamemd

// 0x664A40
namespace gamemd {
int RocketLocomotionClass_17::Launch(unsigned int * a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = this->q010; /*0x664a40*/
  result = 0; /*0x664a43*/
  if ( v2 <= 0 ) /*0x664a48*/
    return -1; /*0x664a5f*/
  for ( i = (_DWORD *)this->Items; *i != *a2; ++i ) /*0x664a4e*/
  {
    if ( ++result >= v2 ) /*0x664a5d*/
      return -1; /*0x664a5d*/
  }
  return result; /*0x664a62*/
}
}
// 0x664A70
namespace gamemd {
VectorClass_flat * RocketLocomotionClass_17::Constructor(char a2)
{
  void *v3; // eax

  v3 = (void *)this->Items; /*0x664a73*/
  *this = &(void*)(void*)&VectorClass_OwnerTalkClass_ConnectionListStruct___vftable; /*0x664a76*/
  if ( v3 && this->IsAllocated ) /*0x664a80*/
  {
    RA2_OPDEL(v3); /*0x664a88*/
    this->Items = 0; /*0x664a90*/
  }
  this->IsAllocated = 0; /*0x664a9b*/
  this->Capacity = 0; /*0x664aa1*/
  if ( (a2 & 1) != 0 ) /*0x664aa8*/
    RA2_OPDEL(); /*0x664aab*/
  return this; /*0x664ab5*/
}
} // namespace gamemd

// 0x664AC0
namespace gamemd {
DynamicVector * RocketLocomotionClass_17::QueryInterface(char a2)
{
  void *v3; // eax

  v3 = (void *)*(this + 1); /*0x664ac3*/
  *this = &(void*)(void*)&VectorClass_OwnerTalkClass_ConnectionListStruct___vftable; /*0x664ac6*/
  if ( v3 && *((_BYTE *)this + 13) ) /*0x664ad0*/
  {
    RA2_OPDEL(v3); /*0x664ad8*/
    *(this + 1) = 0; /*0x664ae0*/
  }
  *((_BYTE *)this + 13) = 0; /*0x664aeb*/
  *(this + 2) = 0; /*0x664af1*/
  if ( (a2 & 1) != 0 ) /*0x664af8*/
    RA2_OPDEL(); /*0x664afb*/
  return this; /*0x664b05*/
}
} // namespace gamemd
