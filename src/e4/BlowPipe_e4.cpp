// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/BlowPipe_23_e4.hpp"
#include "e4/classes/BlowPipe_31_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"

// 0x63DC20
namespace gamemd {
void BlowPipe_31::ddtor()
{
  void *v2; // eax

  v2 = this->q004; /*0x63dc26*/
  this->q010 = 0; /*0x63dc29*/
  if ( v2 && this->IsAllocated ) /*0x63dc30*/
  {
    RA2_OPDEL(v2); /*0x63dc36*/
    this->q004 = 0; /*0x63dc3e*/
  }
  this->IsAllocated = 0; /*0x63dc41*/
  this->q008 = 0; /*0x63dc44*/
}
} // namespace gamemd

// 0x63DC50
namespace gamemd {
unsigned int BlowPipe_31::Write(int a2)
{
  if ( this->q00C ) /*0x63dc50*/
    return (unsigned int)(a2 - this->q004) >> 2; /*0x63dc65*/
  else
    return 0; /*0x63dc57*/
}
} // namespace gamemd

// 0x63DC70
namespace gamemd {
int BlowPipe_31::Seek(int a2)
{
  return *(_DWORD *)(this->q004 + 4 * a2); /*0x63dc7a*/
}
} // namespace gamemd

// 0x63DC80
namespace gamemd {
void BlowPipe_23::Clear()
{
  void *v2; // eax

  v2 = this->q004; /*0x63dc86*/
  this->q010 = 0; /*0x63dc89*/
  if ( v2 && this->IsAllocated ) /*0x63dc90*/
  {
    RA2_OPDEL(v2); /*0x63dc96*/
    this->q004 = 0; /*0x63dc9e*/
  }
  this->IsAllocated = 0; /*0x63dca1*/
  this->q008 = 0; /*0x63dca4*/
}
} // namespace gamemd

// 0x63DCB0
namespace gamemd {
unsigned int BlowPipe_23::GetCount(int a2)
{
  if ( this->q00C ) /*0x63dcb0*/
    return (unsigned int)(a2 - this->q004) >> 2; /*0x63dcc5*/
  else
    return 0; /*0x63dcb7*/
}
} // namespace gamemd

// 0x63DCD0
namespace gamemd {
int BlowPipe_23::Seek(int a2)
{
  return *(_DWORD *)(this->q004 + 4 * a2); /*0x63dcda*/
}
} // namespace gamemd

// 0x63DCE0
namespace gamemd {
void BlowPipe_23::Clear_0()
{
  void *v2; // eax

  v2 = this->q004; /*0x63dce6*/
  this->q010 = 0; /*0x63dce9*/
  if ( v2 && this->IsAllocated ) /*0x63dcf0*/
  {
    RA2_OPDEL(v2); /*0x63dcf6*/
    this->q004 = 0; /*0x63dcfe*/
  }
  this->IsAllocated = 0; /*0x63dd01*/
  this->q008 = 0; /*0x63dd04*/
}
} // namespace gamemd

// 0x63DD10
namespace gamemd {
unsigned int BlowPipe_23::GetCount_0(int a2)
{
  if ( this->q00C ) /*0x63dd10*/
    return (unsigned int)(a2 - this->q004) >> 2; /*0x63dd25*/
  else
    return 0; /*0x63dd17*/
}
} // namespace gamemd

// 0x63E310
namespace gamemd {
char BlowPipe_31::AddRef(int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = this->q008; /*0x63e312*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x63e31d*/
  {
    v3 = 0; /*0x63e31f*/
    if ( v2 <= 0 ) /*0x63e323*/
      return 1; /*0x63e343*/
    v4 = (_DWORD *)this->q004; /*0x63e325*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x63e32b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x63e334*/
    {
      ++v3; /*0x63e336*/
      ++v4; /*0x63e337*/
      if ( v3 >= v2 ) /*0x63e33c*/
        return 1; /*0x63e33c*/
    }
  }
  return 0; /*0x63e33e*/
}
} // namespace gamemd

// 0x63E350
namespace gamemd {
char BlowPipe_23::SetCapacity(int a2, unsigned int * a3)
{
  _DWORD *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x63e35c*/
  {
    this->q00C = 0; /*0x63e366*/
    if ( a3 ) /*0x63e36c*/
      v4 = a3; /*0x63e382*/
    else
      v4 = RA2_OPNEW(4 * a2); /*0x63e37e*/
    this->q00C = 1; /*0x63e386*/
    if ( v4 ) /*0x63e38a*/
    {
      if ( this->q004 ) /*0x63e395*/
      {
        v6 = this->q008; /*0x63e39c*/
        if ( a2 < v6 ) /*0x63e3a1*/
          v6 = a2; /*0x63e3a3*/
        for ( i = 0; i < v6; v4[i - 1] = *(_DWORD *)(this->q004 + 4 * i - 4) ) /*0x63e3a9*/
          ++i; /*0x63e3ae*/
        if ( this->IsAllocated ) /*0x63e3bb*/
        {
          RA2_OPDEL(*((void **)this + 1)); /*0x63e3c6*/
          this->q004 = 0; /*0x63e3ce*/
        }
      }
      this->q004 = v4; /*0x63e3d7*/
      this->q008 = a2; /*0x63e3df*/
      this->IsAllocated = a3 == 0; /*0x63e3e2*/
      return 1; /*0x63e3e8*/
    }
    else
    {
      return 0; /*0x63e38f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(*(_DWORD *)&this->q0042))(this); /*0x63e3f2*/
    return 1; /*0x63e3f8*/
  }
}
} // namespace gamemd

// 0x63E400
namespace gamemd {
void BlowPipe_23::Clear_1()
{
  if ( this->q004 && this->IsAllocated ) /*0x63e40d*/
  {
    RA2_OPDEL(this->q004); /*0x63e413*/
    this->q004 = 0; /*0x63e41b*/
  }
  this->IsAllocated = 0; /*0x63e41e*/
  this->q008 = 0; /*0x63e421*/
}
} // namespace gamemd

// 0x63E430
namespace gamemd {
int BlowPipe_23::FindItemIndex(unsigned int * a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !this->q00C ) /*0x63e430*/
    return 0; /*0x63e438*/
  v3 = this->q008; /*0x63e43e*/
  result = 0; /*0x63e441*/
  if ( v3 <= 0 ) /*0x63e445*/
    return -1; /*0x63e45c*/
  for ( i = this->q004; *i != *a2; ++i ) /*0x63e44b*/
  {
    if ( ++result >= v3 ) /*0x63e45a*/
      return -1; /*0x63e45a*/
  }
  return result; /*0x63e43a*/
}
} // namespace gamemd

// 0x63E470
namespace gamemd {
unsigned int BlowPipe_23::GetCount_1(int a2)
{
  if ( this->q00C ) /*0x63e470*/
    return (unsigned int)(a2 - this->q004) >> 2; /*0x63e485*/
  else
    return 0; /*0x63e477*/
}
} // namespace gamemd

// 0x63E490
namespace gamemd {
char BlowPipe_31::Release(int a2, unsigned int * a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x63e49c*/
  {
    this->q00C = 0; /*0x63e4a2*/
    if ( a3 ) /*0x63e4a8*/
      v4 = a3; /*0x63e4be*/
    else
      v4 = RA2_OPNEW(4 * a2); /*0x63e4ba*/
    this->q00C = 1; /*0x63e4c2*/
    if ( !v4 ) /*0x63e4c6*/
      return 0; /*0x63e53a*/
    if ( this->q004 ) /*0x63e4c8*/
    {
      v5 = this->q008; /*0x63e4cf*/
      if ( a2 < v5 ) /*0x63e4d4*/
        v5 = a2; /*0x63e4d6*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(this->q004 + 4 * i - 4) ) /*0x63e4dc*/
        ++i; /*0x63e4e1*/
      if ( this->IsAllocated ) /*0x63e4ee*/
      {
        RA2_OPDEL(*((void **)this + 1)); /*0x63e4f9*/
        this->q004 = 0; /*0x63e501*/
      }
    }
    this->q004 = v4; /*0x63e50a*/
    this->q008 = a2; /*0x63e512*/
    this->IsAllocated = a3 == 0; /*0x63e515*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(*(_DWORD *)&this->q0042))(this); /*0x63e51e*/
  }
  v7 = this->q008; /*0x63e521*/
  if ( v7 < this->q010 ) /*0x63e529*/
    this->q010 = v7; /*0x63e52b*/
  return 1; /*0x63e52e*/
}
} // namespace gamemd

// 0x63E620
namespace gamemd {
int BlowPipe_31::Read(unsigned int * a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = this->q010; /*0x63e620*/
  result = 0; /*0x63e623*/
  if ( v2 <= 0 ) /*0x63e628*/
    return -1; /*0x63e63f*/
  for ( i = (_DWORD *)this->q004; *i != *a2; ++i ) /*0x63e62e*/
  {
    if ( ++result >= v2 ) /*0x63e63d*/
      return -1; /*0x63e63d*/
  }
  return result; /*0x63e642*/
}
}
// 0x63E650
namespace gamemd {
char BlowPipe_23::AddRef(int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = this->q008; /*0x63e652*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x63e65d*/
  {
    v3 = 0; /*0x63e65f*/
    if ( v2 <= 0 ) /*0x63e663*/
      return 1; /*0x63e683*/
    v4 = (_DWORD *)this->q004; /*0x63e665*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x63e66b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x63e674*/
    {
      ++v3; /*0x63e676*/
      ++v4; /*0x63e677*/
      if ( v3 >= v2 ) /*0x63e67c*/
        return 1; /*0x63e67c*/
    }
  }
  return 0; /*0x63e67e*/
}
} // namespace gamemd

// 0x63E690
namespace gamemd {
char BlowPipe_23::Release(int a2, unsigned int * a3)
{
  _DWORD *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x63e69c*/
  {
    this->q00C = 0; /*0x63e6a6*/
    if ( a3 ) /*0x63e6ac*/
      v4 = a3; /*0x63e6c2*/
    else
      v4 = RA2_OPNEW(4 * a2); /*0x63e6be*/
    this->q00C = 1; /*0x63e6c6*/
    if ( v4 ) /*0x63e6ca*/
    {
      if ( this->q004 ) /*0x63e6d5*/
      {
        v6 = this->q008; /*0x63e6dc*/
        if ( a2 < v6 ) /*0x63e6e1*/
          v6 = a2; /*0x63e6e3*/
        for ( i = 0; i < v6; v4[i - 1] = *(_DWORD *)(this->q004 + 4 * i - 4) ) /*0x63e6e9*/
          ++i; /*0x63e6ee*/
        if ( this->IsAllocated ) /*0x63e6fb*/
        {
          RA2_OPDEL(*((void **)this + 1)); /*0x63e706*/
          this->q004 = 0; /*0x63e70e*/
        }
      }
      this->q004 = v4; /*0x63e717*/
      this->q008 = a2; /*0x63e71f*/
      this->IsAllocated = a3 == 0; /*0x63e722*/
      return 1; /*0x63e728*/
    }
    else
    {
      return 0; /*0x63e6cf*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(*(_DWORD *)&this->q0042))(this); /*0x63e732*/
    return 1; /*0x63e738*/
  }
}
} // namespace gamemd

// 0x63E740
namespace gamemd {
void BlowPipe_23::ddtor()
{
  if ( this->q004 && this->IsAllocated ) /*0x63e74d*/
  {
    RA2_OPDEL(this->q004); /*0x63e753*/
    this->q004 = 0; /*0x63e75b*/
  }
  this->IsAllocated = 0; /*0x63e75e*/
  this->q008 = 0; /*0x63e761*/
}
} // namespace gamemd

// 0x63E770
namespace gamemd {
int BlowPipe_23::Read(unsigned int * a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !this->q00C ) /*0x63e770*/
    return 0; /*0x63e778*/
  v3 = this->q008; /*0x63e77e*/
  result = 0; /*0x63e781*/
  if ( v3 <= 0 ) /*0x63e785*/
    return -1; /*0x63e79c*/
  for ( i = this->q004; *i != *a2; ++i ) /*0x63e78b*/
  {
    if ( ++result >= v3 ) /*0x63e79a*/
      return -1; /*0x63e79a*/
  }
  return result; /*0x63e77a*/
}
} // namespace gamemd

// 0x63E7B0
namespace gamemd {
unsigned int BlowPipe_23::Write(int a2)
{
  if ( this->q00C ) /*0x63e7b0*/
    return (unsigned int)(a2 - this->q004) >> 2; /*0x63e7c5*/
  else
    return 0; /*0x63e7b7*/
}
} // namespace gamemd

// 0x63E7D0
namespace gamemd {
char BlowPipe_23::SetCapacity_0(int a2, unsigned int * a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x63e7dc*/
  {
    this->q00C = 0; /*0x63e7e2*/
    if ( a3 ) /*0x63e7e8*/
      v4 = a3; /*0x63e7fe*/
    else
      v4 = RA2_OPNEW(4 * a2); /*0x63e7fa*/
    this->q00C = 1; /*0x63e802*/
    if ( !v4 ) /*0x63e806*/
      return 0; /*0x63e87a*/
    if ( this->q004 ) /*0x63e808*/
    {
      v5 = this->q008; /*0x63e80f*/
      if ( a2 < v5 ) /*0x63e814*/
        v5 = a2; /*0x63e816*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(this->q004 + 4 * i - 4) ) /*0x63e81c*/
        ++i; /*0x63e821*/
      if ( this->IsAllocated ) /*0x63e82e*/
      {
        RA2_OPDEL(*((void **)this + 1)); /*0x63e839*/
        this->q004 = 0; /*0x63e841*/
      }
    }
    this->q004 = v4; /*0x63e84a*/
    this->q008 = a2; /*0x63e852*/
    this->IsAllocated = a3 == 0; /*0x63e855*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(*(_DWORD *)&this->q0042))(this); /*0x63e85e*/
  }
  v7 = this->q008; /*0x63e861*/
  if ( v7 < this->q010 ) /*0x63e869*/
    this->q010 = v7; /*0x63e86b*/
  return 1; /*0x63e86e*/
}
} // namespace gamemd

// 0x63E8D0
namespace gamemd {
int BlowPipe_23::FindItemIndex_0(unsigned int * a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = this->q010; /*0x63e8d0*/
  result = 0; /*0x63e8d3*/
  if ( v2 <= 0 ) /*0x63e8d8*/
    return -1; /*0x63e8ef*/
  for ( i = (_DWORD *)this->q004; *i != *a2; ++i ) /*0x63e8de*/
  {
    if ( ++result >= v2 ) /*0x63e8ed*/
      return -1; /*0x63e8ed*/
  }
  return result; /*0x63e8f2*/
}
}
// 0x63EAD0
namespace gamemd {
char BlowPipe_23::SetCapacity_1(int a2, unsigned int * a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x63eadc*/
  {
    this->q00C = 0; /*0x63eae2*/
    if ( a3 ) /*0x63eae8*/
      v4 = a3; /*0x63eafe*/
    else
      v4 = RA2_OPNEW(4 * a2); /*0x63eafa*/
    this->q00C = 1; /*0x63eb02*/
    if ( !v4 ) /*0x63eb06*/
      return 0; /*0x63eb7a*/
    if ( this->q004 ) /*0x63eb08*/
    {
      v5 = this->q008; /*0x63eb0f*/
      if ( a2 < v5 ) /*0x63eb14*/
        v5 = a2; /*0x63eb16*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(this->q004 + 4 * i - 4) ) /*0x63eb1c*/
        ++i; /*0x63eb21*/
      if ( this->IsAllocated ) /*0x63eb2e*/
      {
        RA2_OPDEL(*((void **)this + 1)); /*0x63eb39*/
        this->q004 = 0; /*0x63eb41*/
      }
    }
    this->q004 = v4; /*0x63eb4a*/
    this->q008 = a2; /*0x63eb52*/
    this->IsAllocated = a3 == 0; /*0x63eb55*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(*(_DWORD *)&this->q0042))(this); /*0x63eb5e*/
  }
  v7 = this->q008; /*0x63eb61*/
  if ( v7 < this->q010 ) /*0x63eb69*/
    this->q010 = v7; /*0x63eb6b*/
  return 1; /*0x63eb6e*/
}
} // namespace gamemd

// 0x63EC20
namespace gamemd {
int BlowPipe_23::FindItemIndex_1(unsigned int * a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = this->q010; /*0x63ec20*/
  result = 0; /*0x63ec23*/
  if ( v2 <= 0 ) /*0x63ec28*/
    return -1; /*0x63ec3f*/
  for ( i = (_DWORD *)this->q004; *i != *a2; ++i ) /*0x63ec2e*/
  {
    if ( ++result >= v2 ) /*0x63ec3d*/
      return -1; /*0x63ec3d*/
  }
  return result; /*0x63ec42*/
}
} // namespace gamemd

// 0x63ED90
namespace gamemd {
VectorClass_flat * BlowPipe_23::Destructor(char a2)
{
  void *v3; // eax

  v3 = (void *)this->q004; /*0x63ed93*/
  *(void **)this = (void*)&VectorClass_PlanningNodeClass___vftable; /*0x63ed96*/
  if ( v3 && this->IsAllocated ) /*0x63eda0*/
  {
    RA2_OPDEL(v3); /*0x63eda8*/
    this->q004 = 0; /*0x63edb0*/
  }
  this->IsAllocated = 0; /*0x63edbb*/
  this->q008 = 0; /*0x63edc1*/
  if ( (a2 & 1) != 0 ) /*0x63edc8*/
    RA2_OPDEL(); /*0x63edcb*/
  return this; /*0x63edd5*/
}
} // namespace gamemd

// 0x63EDE0
namespace gamemd {
DynamicVector * BlowPipe_31::QueryInterface(char a2)
{
  void *v3; // eax

  v3 = (void *)this->q004; /*0x63ede3*/
  *(void **)this = (void*)&VectorClass_PlanningNodeClass___vftable; /*0x63ede6*/
  if ( v3 && this->IsAllocated ) /*0x63edf0*/
  {
    RA2_OPDEL(v3); /*0x63edf8*/
    this->q004 = 0; /*0x63ee00*/
  }
  this->IsAllocated = 0; /*0x63ee0b*/
  this->q008 = 0; /*0x63ee11*/
  if ( (a2 & 1) != 0 ) /*0x63ee18*/
    RA2_OPDEL(); /*0x63ee1b*/
  return this; /*0x63ee25*/
}
} // namespace gamemd

// 0x63EE30
namespace gamemd {
VectorClass_flat * BlowPipe_23::QueryInterface(char a2)
{
  void *v3; // eax

  v3 = (void *)this->q004; /*0x63ee33*/
  *(void **)this = (void*)&VectorClass_EventClass___vftable; /*0x63ee36*/
  if ( v3 && this->IsAllocated ) /*0x63ee40*/
  {
    RA2_OPDEL(v3); /*0x63ee48*/
    this->q004 = 0; /*0x63ee50*/
  }
  this->IsAllocated = 0; /*0x63ee5b*/
  this->q008 = 0; /*0x63ee61*/
  if ( (a2 & 1) != 0 ) /*0x63ee68*/
    RA2_OPDEL(); /*0x63ee6b*/
  return this; /*0x63ee75*/
}
} // namespace gamemd

// 0x63EE80
namespace gamemd {
DynamicVector * BlowPipe_23::Destructor_0(char a2)
{
  void *v3; // eax

  v3 = (void *)this->q004; /*0x63ee83*/
  *(void **)this = (void*)&VectorClass_EventClass___vftable; /*0x63ee86*/
  if ( v3 && this->IsAllocated ) /*0x63ee90*/
  {
    RA2_OPDEL(v3); /*0x63ee98*/
    this->q004 = 0; /*0x63eea0*/
  }
  this->IsAllocated = 0; /*0x63eeab*/
  this->q008 = 0; /*0x63eeb1*/
  if ( (a2 & 1) != 0 ) /*0x63eeb8*/
    RA2_OPDEL(); /*0x63eebb*/
  return this; /*0x63eec5*/
}
} // namespace gamemd

// 0x63EF20
namespace gamemd {
DynamicVector * BlowPipe_23::Destructor_1(char a2)
{
  void *v3; // eax

  v3 = (void *)this->q004; /*0x63ef23*/
  *(void **)this = (void*)&VectorClass_PlanningTokenClass___vftable; /*0x63ef26*/
  if ( v3 && this->IsAllocated ) /*0x63ef30*/
  {
    RA2_OPDEL(v3); /*0x63ef38*/
    this->q004 = 0; /*0x63ef40*/
  }
  this->IsAllocated = 0; /*0x63ef4b*/
  this->q008 = 0; /*0x63ef51*/
  if ( (a2 & 1) != 0 ) /*0x63ef58*/
    RA2_OPDEL(); /*0x63ef5b*/
  return this; /*0x63ef65*/
}
} // namespace gamemd
