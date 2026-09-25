// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/NeuronClass_25_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/NeuronClass_e4.hpp"
#include "e4/classes/Connection_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/Network_e4.hpp"
#include "e4/classes/Timer_e4.hpp"
#include "e4/classes/CellStruct_e4.hpp"
#include "e4/classes/DynamicVector_e4.hpp"
#include "e4/classes/Factory_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/WideString_e4.hpp"
#include "e4/classes/Node_flat_e4.hpp"
#include "e4/e4_protos.h"

// 0x43A350
NeuronClass::NeuronClass()
{
  int v2; // eax
  int v3; // eax

  AbstractClass::Constructor(); /*0x43a353*/
  this->q024 = 0; /*0x43a358*/
  this->q028 = 0; /*0x43a35f*/
  this->q02C = 0; /*0x43a366*/
  this->q030 = g_CurrentFrame; /*0x43a372*/
  *(_DWORD *)this = &(void*)(void*)&NeuronClass_vftable; /*0x43a375*/
  this->vtable2 = &(void*)(void*)&NeuronClass_vftable; /*0x43a37b*/
  this->vtable3 = &(void*)(void*)&NeuronClass_vftable; /*0x43a382*/
  this->vtable4 = &(void*)(void*)&NeuronClass_vftable; /*0x43a389*/
  if ( dword_B0F5E8 < dword_B0F5E0 /*0x43a3c5*/
    || (byte_B0F5E5 || !dword_B0F5E0)
    && dword_B0F5EC > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_B0F5D8 + 8))(
         &dword_B0F5D8,
         dword_B0F5E0 + dword_B0F5EC,
         0) )
  {
    v2 = dword_B0F5E8++; /*0x43a3d2*/
    *((_DWORD *)dword_B0F5DC + v2) = this; /*0x43a3e1*/
  }
  if ( g_AnimManager < g_AnimTypePool /*0x43a41b*/
    || (g_AnimPoolLocked || !g_AnimTypePool)
    && g_AnimManagerConfig > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(g_AnimPoolManager + 8))(
         &g_AnimPoolManager,
         g_AnimTypePool + g_AnimManagerConfig,
         0) )
  {
    v3 = g_AnimManager++; /*0x43a428*/
    *((_DWORD *)g_AnimPoolCount + v3) = this; /*0x43a437*/
  }
  return this; /*0x43a43c*/
}
// 0x43A9C0
void * NeuronClass::Reset(char a2)
{
  int v3; // eax
  int v4; // eax

  *this = &(void*)(void*)&NeuronClass_vftable; /*0x43a9cd*/
  this->vtable2 = &(void*)(void*)&NeuronClass_vftable; /*0x43a9d3*/
  this->vtable3 = &(void*)(void*)&NeuronClass_vftable; /*0x43a9da*/
  this->vtable4 = &(void*)(void*)&NeuronClass_vftable; /*0x43a9e1*/
  v3 = (*(int (__thiscall **)(int *, _DWORD **))(g_AnimPoolManager + 16))(&g_AnimPoolManager, &this); /*0x43a9f3*/
  if ( v3 != -1 && v3 < g_AnimManager && v3 < --g_AnimManager ) /*0x43aa0e*/
  {
    do /*0x43aa26*/
    {
      ++v3; /*0x43aa16*/
      *((_DWORD *)g_AnimPoolCount + v3 - 1) = *((_DWORD *)g_AnimPoolCount + v3); /*0x43aa1a*/
    }
    while ( v3 < g_AnimManager ); /*0x43aa26*/
  }
  v4 = (*(int (__thiscall **)(int *, _DWORD **))(dword_B0F5D8 + 16))(&dword_B0F5D8, &this); /*0x43aa3c*/
  if ( v4 != -1 && v4 < dword_B0F5E8 && v4 < --dword_B0F5E8 ) /*0x43aa57*/
  {
    do /*0x43aa6f*/
    {
      ++v4; /*0x43aa5f*/
      *((_DWORD *)dword_B0F5DC + v4 - 1) = *((_DWORD *)dword_B0F5DC + v4); /*0x43aa63*/
    }
    while ( v4 < dword_B0F5E8 ); /*0x43aa6f*/
  }
  AbstractClass::DTOR(); /*0x43aa73*/
  if ( (a2 & 1) != 0 ) /*0x43aa7d*/
    RA2_OPDEL(); /*0x43aa80*/
  return this; /*0x43aa8a*/
}
// 0x43AB20
namespace gamemd {
int NeuronClass_25::Update(int a2)
{
  return *(_DWORD *)(*(this + 1) + 4 * a2); /*0x43ab2a*/
}
} // namespace gamemd

// 0x43AB30
namespace gamemd {
char NeuronClass_25::AddRef(int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = this->Capacity; /*0x43ab32*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x43ab3d*/
  {
    v3 = 0; /*0x43ab3f*/
    if ( v2 <= 0 ) /*0x43ab43*/
      return 1; /*0x43ab63*/
    v4 = (_DWORD *)this->Items; /*0x43ab45*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x43ab4b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x43ab54*/
    {
      ++v3; /*0x43ab56*/
      ++v4; /*0x43ab57*/
      if ( v3 >= v2 ) /*0x43ab5c*/
        return 1; /*0x43ab5c*/
    }
  }
  return 0; /*0x43ab5e*/
}
} // namespace gamemd

// 0x43AB70
namespace gamemd {
char NeuronClass_25::Release(int a2, unsigned int * a3)
{
  _DWORD *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x43ab7c*/
  {
    this->IsInitialized = 0; /*0x43ab86*/
    if ( a3 ) /*0x43ab8c*/
      v4 = a3; /*0x43aba2*/
    else
      v4 = RA2_OPNEW(4 * a2); /*0x43ab9e*/
    this->IsInitialized = 1; /*0x43aba6*/
    if ( v4 ) /*0x43abaa*/
    {
      if ( this->Items ) /*0x43abb5*/
      {
        v6 = this->Capacity; /*0x43abbc*/
        if ( a2 < v6 ) /*0x43abc1*/
          v6 = a2; /*0x43abc3*/
        for ( i = 0; i < v6; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x43abc9*/
          ++i; /*0x43abce*/
        if ( this->IsAllocated ) /*0x43abdb*/
        {
          RA2_OPDEL(*((void **)this + 1)); /*0x43abe6*/
          this->Items = 0; /*0x43abee*/
        }
      }
      this->Items = v4; /*0x43abf7*/
      this->Capacity = a2; /*0x43abff*/
      this->IsAllocated = a3 == 0; /*0x43ac02*/
      return 1; /*0x43ac08*/
    }
    else
    {
      return 0; /*0x43abaf*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(*(_DWORD *)&this->Items2))(this); /*0x43ac12*/
    return 1; /*0x43ac18*/
  }
}
} // namespace gamemd

// 0x43AC20
namespace gamemd {
void NeuronClass_25::ddtor()
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x43ac2d*/
  {
    RA2_OPDEL(this->Items); /*0x43ac33*/
    this->Items = 0; /*0x43ac3b*/
  }
  this->IsAllocated = 0; /*0x43ac3e*/
  this->Capacity = 0; /*0x43ac41*/
}
} // namespace gamemd

// 0x43AC50
namespace gamemd {
int NeuronClass_25::Activate(unsigned int * a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !this->IsInitialized ) /*0x43ac50*/
    return 0; /*0x43ac58*/
  v3 = this->Capacity; /*0x43ac5e*/
  result = 0; /*0x43ac61*/
  if ( v3 <= 0 ) /*0x43ac65*/
    return -1; /*0x43ac7c*/
  for ( i = this->Items; *i != *a2; ++i ) /*0x43ac6b*/
  {
    if ( ++result >= v3 ) /*0x43ac7a*/
      return -1; /*0x43ac7a*/
  }
  return result; /*0x43ac5a*/
}
} // namespace gamemd

// 0x43AC90
namespace gamemd {
unsigned int NeuronClass_25::Fire(int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x43ac90*/
    return (unsigned int)(a2 - this->Items) >> 2; /*0x43aca5*/
  else
    return 0; /*0x43ac97*/
}
} // namespace gamemd

// 0x43ACB0
namespace gamemd {
VectorClass_flat * NeuronClass_25::QueryInterface(char a2)
{
  void *v3; // eax

  v3 = (void *)*(this + 1); /*0x43acb3*/
  *this = &(void*)(void*)&VectorClass_NeuronClass___vftable; /*0x43acb6*/
  if ( v3 && *((_BYTE *)this + 13) ) /*0x43acc0*/
  {
    RA2_OPDEL(v3); /*0x43acc8*/
    *(this + 1) = 0; /*0x43acd0*/
  }
  *((_BYTE *)this + 13) = 0; /*0x43acdb*/
  *(this + 2) = 0; /*0x43ace1*/
  if ( (a2 & 1) != 0 ) /*0x43ace8*/
    RA2_OPDEL(); /*0x43aceb*/
  return this; /*0x43acf5*/
}
} // namespace gamemd
