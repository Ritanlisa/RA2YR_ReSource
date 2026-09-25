// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/MSEngine_e4.hpp"
#include "e4/classes/GameClass_e4.hpp"
#include "e4/classes/Timer_e4.hpp"
#include "e4/classes/SessionClass_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/AbstractClass_e4.hpp"

// 0x5ACD30
namespace gamemd {
AbstractClass * * MSEngine::Release(int a2, char * a3)
{
  int v3; // ebx
  char *v5; // ebp
  char *v6; // eax
  char *v7; // edi
  int v9; // ecx
  int v10; // eax
  char *v11; // ebx
  _DWORD *v12; // edx

  v3 = a2; /*0x5acd32*/
  if ( a2 ) /*0x5acd3d*/
  {
    v5 = a3; /*0x5acd43*/
    this->u32_C = 0; /*0x5acd47*/
    if ( a3 ) /*0x5acd4d*/
    {
      v7 = a3; /*0x5acd73*/
    }
    else
    {
      v6 = (char *)RA2_OPNEW(16 * a2); /*0x5acd55*/
      if ( v6 ) /*0x5acd5f*/
        v7 = v6; /*0x5acd64*/
      else
        v7 = 0; /*0x5acd6c*/
    }
    this->u32_C = 1; /*0x5acd7b*/
    if ( v7 ) /*0x5acd7f*/
    {
      if ( this->q004 ) /*0x5acd8b*/
      {
        v9 = this->q008; /*0x5acd92*/
        if ( a2 < v9 ) /*0x5acd97*/
          v9 = a2; /*0x5acd99*/
        if ( v9 > 0 ) /*0x5acd9d*/
        {
          v10 = 0; /*0x5acd9f*/
          do /*0x5acdc3*/
          {
            v11 = &v7[v10]; /*0x5acda4*/
            v12 = (_DWORD *)(v10 + this->q004); /*0x5acda7*/
            v10 += 16; /*0x5acda9*/
            --v9; /*0x5acdac*/
            *(_DWORD *)v11 = *v12; /*0x5acdaf*/
            *((_DWORD *)v11 + 1) = v12[1]; /*0x5acdb4*/
            *((_DWORD *)v11 + 2) = v12[2]; /*0x5acdba*/
            *((_DWORD *)v11 + 3) = v12[3]; /*0x5acdc0*/
          }
          while ( v9 ); /*0x5acdc3*/
          v5 = a3; /*0x5acdc5*/
          v3 = a2; /*0x5acdc9*/
        }
        if ( this->IsAllocated ) /*0x5acdcd*/
        {
          RA2_OPDEL(*((void **)this + 1)); /*0x5acdd8*/
          this->q004 = 0; /*0x5acde0*/
        }
      }
      this->q004 = v7; /*0x5acde9*/
      this->q008 = v3; /*0x5acdf1*/
      this->IsAllocated = v5 == 0; /*0x5acdf4*/
      return 1; /*0x5acdfa*/
    }
    else
    {
      return 0; /*0x5acd84*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(*(_DWORD *)&this->q0042))(this); /*0x5ace05*/
    return 1; /*0x5ace0b*/
  }
}
}
// 0x5ACED0
namespace gamemd {
AbstractClass * * MSEngine::SetCapacity(int a2, char * a3)
{
  int v3; // ebx
  char *v5; // ebp
  char *v6; // eax
  char *v7; // edi
  int v8; // ecx
  int v9; // eax
  char *v10; // ebx
  _DWORD *v11; // edx
  int v12; // eax

  v3 = a2; /*0x5aced2*/
  if ( a2 ) /*0x5acedd*/
  {
    v5 = a3; /*0x5acee3*/
    this->u32_C = 0; /*0x5acee7*/
    if ( a3 ) /*0x5aceed*/
    {
      v7 = a3; /*0x5acf13*/
    }
    else
    {
      v6 = (char *)RA2_OPNEW(16 * a2); /*0x5acef5*/
      if ( v6 ) /*0x5aceff*/
        v7 = v6; /*0x5acf04*/
      else
        v7 = 0; /*0x5acf0c*/
    }
    this->u32_C = 1; /*0x5acf1b*/
    if ( !v7 ) /*0x5acf1f*/
      return 0; /*0x5acfb4*/
    if ( this->q004 ) /*0x5acf25*/
    {
      v8 = this->q008; /*0x5acf2c*/
      if ( a2 < v8 ) /*0x5acf31*/
        v8 = a2; /*0x5acf33*/
      if ( v8 > 0 ) /*0x5acf37*/
      {
        v9 = 0; /*0x5acf39*/
        do /*0x5acf5d*/
        {
          v10 = &v7[v9]; /*0x5acf3e*/
          v11 = (_DWORD *)(v9 + this->q004); /*0x5acf41*/
          v9 += 16; /*0x5acf43*/
          --v8; /*0x5acf46*/
          *(_DWORD *)v10 = *v11; /*0x5acf49*/
          *((_DWORD *)v10 + 1) = v11[1]; /*0x5acf4e*/
          *((_DWORD *)v10 + 2) = v11[2]; /*0x5acf54*/
          *((_DWORD *)v10 + 3) = v11[3]; /*0x5acf5a*/
        }
        while ( v8 ); /*0x5acf5d*/
        v3 = a2; /*0x5acf5f*/
        v5 = a3; /*0x5acf63*/
      }
      if ( this->IsAllocated ) /*0x5acf67*/
      {
        RA2_OPDEL(*((void **)this + 1)); /*0x5acf72*/
        this->q004 = 0; /*0x5acf7a*/
      }
    }
    this->q004 = v7; /*0x5acf83*/
    this->q008 = v3; /*0x5acf8b*/
    this->IsAllocated = v5 == 0; /*0x5acf8e*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(*(_DWORD *)&this->q0042))(this); /*0x5acf97*/
  }
  v12 = this->q008; /*0x5acf9a*/
  if ( v12 < this->q010 ) /*0x5acfa2*/
    this->q010 = v12; /*0x5acfa4*/
  return 1; /*0x5acfa7*/
}
}
// 0x5CEE60
namespace gamemd {
CampaignClass * * MSEngine::Destructor()
{
  void *v2; // eax
  void *v3; // eax
  void *v4; // eax

  SessionClass::Destruct(); /*0x5cee64*/
  v2 = *(void **)(&this->u32_1C2); /*0x5cee69*/
  this->q044 = &(void*)(void*)&VectorClass_MSSfxEntry___vftable; /*0x5cee70*/
  if ( v2 && this->u8_51 ) /*0x5cee79*/
  {
    RA2_OPDEL(v2); /*0x5cee7f*/
    this->ptr_48 = 0; /*0x5cee87*/
  }
  this->u8_51 = 0; /*0x5cee8a*/
  this->u32_4C = 0; /*0x5cee8d*/
  v3 = *(void **)(&this->q0108); /*0x5cee90*/
  this->q02C = &(void*)(void*)&VectorClass_MSAnimEntry___vftable; /*0x5cee93*/
  if ( v3 && this->u8_39 ) /*0x5cee9e*/
  {
    RA2_OPDEL(v3); /*0x5ceea4*/
    this->u32_30 = 0; /*0x5ceeac*/
  }
  this->u8_39 = 0; /*0x5ceeb2*/
  this->q034 = 0; /*0x5ceeb5*/
  DeleteAndZero((void **)(&this->q0100)); /*0x5ceeb8*/
  v4 = this->q004; /*0x5ceebd*/
  *(_DWORD *)this = &(void*)(void*)&VectorClass_MapStage___vftable; /*0x5ceec0*/
  if ( v4 && this->IsAllocated ) /*0x5ceeca*/
  {
    RA2_OPDEL(v4); /*0x5ceed0*/
    this->q004 = 0; /*0x5ceed8*/
  }
  this->IsAllocated = 0; /*0x5ceedb*/
  this->q008 = 0; /*0x5ceede*/
}
}
// 0x5D1AA0
namespace gamemd {
unsigned int * MSEngine::Construct()
{
  char *v2; // ecx
  int v3; // edx

  v2 = &this->q008; /*0x5d1aa5*/
  *((_DWORD *)v2 + 1) = 0; /*0x5d1ab2*/
  *((_DWORD *)v2 + 2) = 0; /*0x5d1ab5*/
  v2[12] = 1; /*0x5d1ab8*/
  v2[13] = 0; /*0x5d1abb*/
  *(_DWORD *)v2 = &(void*)(void*)&VectorClass_TRect_int_vftable; /*0x5d1abe*/
  this->u32_1C = 0; /*0x5d1ac4*/
  this->u32_20 = 0; /*0x5d1ac7*/
  this->q024 = 1; /*0x5d1aca*/
  this->q094 = 0; /*0x5d1acd*/
  this->u32_18 = &(void*)(void*)&DynamicVectorClass_MSAnim___vftable; /*0x5d1ad0*/
  *(&this->q0041) = 10; /*0x5d1ad6*/
  *(&this->q0040) = 0; /*0x5d1add*/
  *(&this->q0043) = 0; /*0x5d1ae0*/
  *(&this->q0044) = 0; /*0x5d1ae3*/
  this->u8_3C = 1; /*0x5d1ae6*/
  this->u8_3D = 0; /*0x5d1ae9*/
  *(&this->q0042) = &(void*)(void*)&DynamicVectorClass_MSSfx___vftable; /*0x5d1aec*/
  *(&this->q0047) = 10; /*0x5d1af2*/
  *(&this->q0046) = 0; /*0x5d1af9*/
  v3 = *(_DWORD *)v2; /*0x5d1afc*/
  *this = &(void*)(void*)&MSEngine_vftable; /*0x5d1b01*/
  this->q004 = 0; /*0x5d1b07*/
  (*(void (__thiscall **)(char *, int, _DWORD))(v3 + 8))(v2, 20, 0); /*0x5d1b0a*/
  (*(void (__thiscall **)(_DWORD *))(this->u32_18 + 12))(this + 6); /*0x5d1b11*/
  (*(void (__thiscall **)(_DWORD *))(*(&this->q0042) + 12))(&this->q0042); /*0x5d1b18*/
  return this; /*0x5d1b1b*/
}
}
// 0x5D1B30
namespace gamemd {
void MSEngine::Destruct()
{
  int v2; // ebp
  int v3; // eax
  void *v4; // edi
  _DWORD *v5; // ebp
  int i; // edi
  void (__thiscall ***v7)(_DWORD, int); // ecx
  _DWORD *v8; // edi
  int v9; // edx
  _DWORD *v10; // esi
  void *v11; // eax
  void *v12; // eax
  void *v13; // eax

  v2 = 0; /*0x5d1b37*/
  for ( *this = &(void*)(void*)&MSEngine_vftable; v2 < *(&this->q0046); ++v2 ) /*0x5d1b45*/
  {
    v3 = *(&this->q0043); /*0x5d1b47*/
    v4 = *(void **)(v3 + 4 * v2); /*0x5d1b4a*/
    if ( v4 ) /*0x5d1b4f*/
    {
      MSEngine::DestroyData(*(_DWORD *)(v3 + 4 * v2)); /*0x5d1b53*/
      RA2_OPDEL(v4); /*0x5d1b59*/
    }
  }
  v5 = &this->u32_30; /*0x5d1b6c*/
  (*(void (__thiscall **)(_DWORD *))(*(&this->q0042) + 12))(&this->q0042); /*0x5d1b71*/
  for ( i = 0; i < *(&this->q0040); ++i ) /*0x5d1b7b*/
  {
    v7 = *(void (__thiscall ****)(_DWORD, int))(this->u32_1C + 4 * i); /*0x5d1b80*/
    if ( v7 ) /*0x5d1b85*/
      (**v7)(v7, 1); /*0x5d1b8b*/
  }
  v8 = &this->u32_18; /*0x5d1b98*/
  (*(void (__thiscall **)(_DWORD *))(this->u32_18 + 12))(this + 6); /*0x5d1b9d*/
  v9 = this->q008; /*0x5d1ba0*/
  v10 = &this->q008; /*0x5d1ba3*/
  (*(void (__thiscall **)(_DWORD *))(v9 + 12))(v10); /*0x5d1ba8*/
  v11 = (void *)v5[1]; /*0x5d1bab*/
  *v5 = &(void*)(void*)&VectorClass_MSSfx___vftable; /*0x5d1bae*/
  if ( v11 && *((_BYTE *)v5 + 13) ) /*0x5d1bb9*/
  {
    RA2_OPDEL(v11); /*0x5d1bbf*/
    v5[1] = 0; /*0x5d1bc7*/
  }
  *((_BYTE *)v5 + 13) = 0; /*0x5d1bca*/
  v5[2] = 0; /*0x5d1bcd*/
  v12 = (void *)v8[1]; /*0x5d1bd0*/
  *v8 = &(void*)(void*)&VectorClass_MSAnim___vftable; /*0x5d1bd3*/
  if ( v12 && *((_BYTE *)v8 + 13) ) /*0x5d1bdd*/
  {
    RA2_OPDEL(v12); /*0x5d1be3*/
    v8[1] = 0; /*0x5d1beb*/
  }
  *((_BYTE *)v8 + 13) = 0; /*0x5d1bee*/
  v8[2] = 0; /*0x5d1bf1*/
  v13 = (void *)v10[1]; /*0x5d1bf4*/
  *v10 = &(void*)(void*)&VectorClass_TRect_int_vftable; /*0x5d1bf7*/
  if ( v13 && *((_BYTE *)v10 + 13) ) /*0x5d1c01*/
  {
    RA2_OPDEL(v13); /*0x5d1c07*/
    v10[1] = 0; /*0x5d1c0f*/
  }
  *((_BYTE *)v10 + 13) = 0; /*0x5d1c12*/
  v10[2] = 0; /*0x5d1c15*/
}
}
// 0x5D1DF0
namespace gamemd {
int MSEngine::ProcessEvents(MSVQAnim * aP1, int a3)
{
  int result; // eax
  int v6; // ecx

  Timer::GetTicks(); /*0x5d1dfc*/
  a3 = a3; /*0x5d1e01*/
  while ( 1 ) /*0x5d1e19*/
  {
    result = (*(int (__thiscall **)(_DWORD *, char *))(this->u32_18 + 16))(&this->u32_18, &aP1); /*0x5d1e19*/
    if ( result == -1 ) /*0x5d1e1f*/
      break; /*0x5d1e1f*/
    v6 = *(_DWORD *)(this->u32_1C + 4 * result); /*0x5d1e24*/
    result = (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 28))(v6); /*0x5d1e29*/
    if ( (_BYTE)result || !a3 ) /*0x5d1e32*/
      break; /*0x5d1e32*/
    GameClass::FrameLoop(1); /*0x5d1e38*/
  }
  return result; /*0x5d1e3f*/
}
}
// 0x5AC520
namespace gamemd {
void MSEngine::ClearBuffer()
{
  void *v2; // eax

  v2 = this->Items; /*0x5ac526*/
  this->q010 = 0; /*0x5ac529*/
  if ( v2 && this->IsAllocated ) /*0x5ac530*/
  {
    RA2_OPDEL(v2); /*0x5ac536*/
    this->Items = 0; /*0x5ac53e*/
  }
  this->IsAllocated = 0; /*0x5ac541*/
  this->q008 = 0; /*0x5ac544*/
}
} // namespace gamemd

// 0x5AC550
namespace gamemd {
unsigned int MSEngine::PointerToIndex(int a2)
{
  if ( this->IsInitialized ) /*0x5ac550*/
    return (unsigned int)(a2 - this->Items) >> 4; /*0x5ac565*/
  else
    return 0; /*0x5ac557*/
}
} // namespace gamemd

// 0x5AC570
namespace gamemd {
unsigned int * MSEngine::Shutdown(unsigned int * a2, int a3)
{
  _DWORD *v3; // ecx

  v3 = (_DWORD *)(this->Items + 16 * a3); /*0x5ac57d*/
  *a2 = *v3; /*0x5ac587*/
  a2[1] = v3[1]; /*0x5ac58c*/
  a2[2] = v3[2]; /*0x5ac592*/
  a2[3] = v3[3]; /*0x5ac599*/
  return a2; /*0x5ac595*/
}
} // namespace gamemd

// 0x5ACCC0
namespace gamemd {
char MSEngine::AddRef(int a2)
{
  int v2; // edi
  int v3; // esi
  int v4; // edx
  _DWORD *v5; // eax
  _DWORD *v6; // ecx
  int v7; // edx

  v2 = this->Capacity; /*0x5acccb*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x5accd0*/
  {
    v3 = 0; /*0x5accd2*/
    if ( v2 <= 0 ) /*0x5accd6*/
      return 1; /*0x5acd1a*/
    v4 = *(_DWORD *)(a2 + 4); /*0x5accd8*/
    v5 = (_DWORD *)this->Items; /*0x5accdb*/
    v6 = (_DWORD *)(v4 + 8); /*0x5accde*/
    v7 = v4 - (_DWORD)v5; /*0x5acce1*/
    while ( *v5 == *(_DWORD *)((char *)v5 + v7) && v5[1] == *(v6 - 1) && v5[2] == *v6 && v5[3] == v6[1] ) /*0x5acd07*/
    {
      ++v3; /*0x5acd09*/
      v6 += 4; /*0x5acd0a*/
      v5 += 4; /*0x5acd0d*/
      if ( v3 >= v2 ) /*0x5acd12*/
        return 1; /*0x5acd12*/
    }
  }
  return 0; /*0x5acd14*/
}
} // namespace gamemd

// 0x5ACE20
namespace gamemd {
void MSEngine::ddtor()
{
  if ( this->Items && this->IsAllocated ) /*0x5ace2d*/
  {
    RA2_OPDEL(this->Items); /*0x5ace33*/
    this->Items = 0; /*0x5ace3b*/
  }
  this->IsAllocated = 0; /*0x5ace3e*/
  this->Capacity = 0; /*0x5ace41*/
}
} // namespace gamemd

// 0x5ACE50
namespace gamemd {
int MSEngine::Init(unsigned int * a2)
{
  int result; // eax
  int v3; // esi
  _DWORD *i; // ecx

  if ( !this->IsInitialized ) /*0x5ace50*/
    return 0; /*0x5ace5e*/
  v3 = this->Capacity; /*0x5ace64*/
  result = 0; /*0x5ace67*/
  if ( v3 <= 0 ) /*0x5ace6b*/
    return -1; /*0x5acea0*/
  for ( i = this->Items; *i != *a2 || i[1] != a2[1] || i[2] != a2[2] || i[3] != a2[3]; i += 4 ) /*0x5ace71*/
  {
    if ( ++result >= v3 ) /*0x5ace9e*/
      return -1; /*0x5ace9e*/
  }
  return result; /*0x5ace5b*/
}
} // namespace gamemd

// 0x5ACEB0
namespace gamemd {
unsigned int MSEngine::Run(int a2)
{
  if ( this->IsInitialized ) /*0x5aceb0*/
    return (unsigned int)(a2 - this->Items) >> 4; /*0x5acec5*/
  else
    return 0; /*0x5aceb7*/
}
} // namespace gamemd

// 0x5ACFC0
namespace gamemd {
int MSEngine::FindItem(unsigned int * a2)
{
  int v2; // esi
  int result; // eax
  _DWORD *i; // ecx

  v2 = this->q010; /*0x5acfc3*/
  result = 0; /*0x5acfc6*/
  if ( v2 <= 0 ) /*0x5acfcb*/
    return -1; /*0x5ad000*/
  for ( i = (_DWORD *)this->Items; *i != *a2 || i[1] != a2[1] || i[2] != a2[2] || i[3] != a2[3]; i += 4 ) /*0x5acfd1*/
  {
    if ( ++result >= v2 ) /*0x5acffe*/
      return -1; /*0x5acffe*/
  }
  return result; /*0x5ad003*/
}
}
// 0x5AD4D0
namespace gamemd {
VectorClass_flat * MSEngine::QueryInterface(char a2)
{
  void *v3; // eax

  v3 = (void *)this->Items; /*0x5ad4d3*/
  *this = &(void*)(void*)&VectorClass_TRect_int_vftable; /*0x5ad4d6*/
  if ( v3 && this->IsAllocated ) /*0x5ad4e0*/
  {
    RA2_OPDEL(v3); /*0x5ad4e8*/
    this->Items = 0; /*0x5ad4f0*/
  }
  this->IsAllocated = 0; /*0x5ad4fb*/
  this->Capacity = 0; /*0x5ad501*/
  if ( (a2 & 1) != 0 ) /*0x5ad508*/
    RA2_OPDEL(); /*0x5ad50b*/
  return this; /*0x5ad515*/
}
} // namespace gamemd

// 0x5AD520
namespace gamemd {
DynamicVector * MSEngine::Constructor(char a2)
{
  void *v3; // eax

  v3 = (void *)this->Items; /*0x5ad523*/
  *this = &(void*)(void*)&VectorClass_TRect_int_vftable; /*0x5ad526*/
  if ( v3 && this->IsAllocated ) /*0x5ad530*/
  {
    RA2_OPDEL(v3); /*0x5ad538*/
    this->Items = 0; /*0x5ad540*/
  }
  this->IsAllocated = 0; /*0x5ad54b*/
  this->q008 = 0; /*0x5ad551*/
  if ( (a2 & 1) != 0 ) /*0x5ad558*/
    RA2_OPDEL(); /*0x5ad55b*/
  return this; /*0x5ad565*/
}
} // namespace gamemd

// 0x5D5850
namespace gamemd {
void MSEngine::DestroyData()
{
  if ( *this ) /*0x5d5850*/
    free(); /*0x5d5857*/
}
} // namespace gamemd
