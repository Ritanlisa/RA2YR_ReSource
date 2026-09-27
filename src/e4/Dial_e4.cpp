// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Dial8Class_48_e4.hpp"
#include "e4/classes/DialogClass_e4.hpp"
#include "e4/classes/SkirmishDialog_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"

// 0x4A7D20
namespace gamemd {
void Dial8Class_48::ClearBuffer()
{
  void *v2; // eax

  v2 = this->q004; /*0x4a7d26*/
  this->q010 = 0; /*0x4a7d29*/
  if ( v2 && this->IsAllocated ) /*0x4a7d30*/
  {
    RA2_OPDEL(v2); /*0x4a7d36*/
    this->q004 = 0; /*0x4a7d3e*/
  }
  this->IsAllocated = 0; /*0x4a7d41*/
  this->q008 = 0; /*0x4a7d44*/
}
} // namespace gamemd

// 0x4A7D50
namespace gamemd {
unsigned int Dial8Class_48::PointerToIndex(int a2)
{
  if ( this->q00C ) /*0x4a7d50*/
    return (unsigned int)(a2 - this->q004) >> 2; /*0x4a7d65*/
  else
    return 0; /*0x4a7d57*/
}
} // namespace gamemd

// 0x4A7D70
namespace gamemd {
int Dial8Class_48::Seek(int a2)
{
  return *(unsigned int *)(this->q004 + 4 * a2); /*0x4a7d7a*/
}
} // namespace gamemd

// 0x4A7D80
namespace gamemd {
char Dial8Class_48::AddRef(int a2)
{
  int v2; // esi
  int v3; // edx
  unsigned int *v4; // eax
  int v5; // ecx

  v2 = this->q008; /*0x4a7d82*/
  if ( v2 == *(unsigned int *)(a2 + 8) ) /*0x4a7d8d*/
  {
    v3 = 0; /*0x4a7d8f*/
    if ( v2 <= 0 ) /*0x4a7d93*/
      return 1; /*0x4a7db3*/
    v4 = (unsigned int *)this->q004; /*0x4a7d95*/
    v5 = *(unsigned int *)(a2 + 4) - (unsigned int)v4; /*0x4a7d9b*/
    while ( *v4 == *(unsigned int *)((char *)v4 + v5) ) /*0x4a7da4*/
    {
      ++v3; /*0x4a7da6*/
      ++v4; /*0x4a7da7*/
      if ( v3 >= v2 ) /*0x4a7dac*/
        return 1; /*0x4a7dac*/
    }
  }
  return 0; /*0x4a7dae*/
}
} // namespace gamemd

// 0x4A7DC0
namespace gamemd {
char Dial8Class_48::Release(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x4a7dcc*/
  {
    this->q00C = (unsigned int *)(0);
    if ( a3 ) /*0x4a7ddc*/
      v4 = a3; /*0x4a7df2*/
    else
      v4 = operator new(4 * a2); /*0x4a7dee*/
    this->q00C = 1; /*0x4a7df6*/
    if ( v4 ) /*0x4a7dfa*/
    {
      if ( this->q004 ) /*0x4a7e05*/
      {
        v6 = this->q008; /*0x4a7e0c*/
        if ( a2 < v6 ) /*0x4a7e11*/
          v6 = a2; /*0x4a7e13*/
        for ( i = 0; i < v6; v4[i - 1] = *(unsigned int *)(this->q004 + 4 * i - 4) ) /*0x4a7e19*/
          ++i; /*0x4a7e1e*/
        if ( this->IsAllocated ) /*0x4a7e2b*/
        {
          RA2_OPDEL(this->q004); /*0x4a7e36*/
          this->q004 = 0; /*0x4a7e3e*/
        }
      }
      this->q004 = v4; /*0x4a7e47*/
      this->q008 = a2; /*0x4a7e4f*/
      this->IsAllocated = a3 == 0; /*0x4a7e52*/
      return 1; /*0x4a7e58*/
    }
    else
    {
      return 0; /*0x4a7dff*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(((unsigned int)(this->q0042))))(this); /*0x4a7e62*/
    return 1; /*0x4a7e68*/
  }
}
} // namespace gamemd

// 0x4A7E70
namespace gamemd {
void Dial8Class_48::ddtor()
{
  if ( this->q004 && this->IsAllocated ) /*0x4a7e7d*/
  {
    RA2_OPDEL(this->q004); /*0x4a7e83*/
    this->q004 = 0; /*0x4a7e8b*/
  }
  this->IsAllocated = 0; /*0x4a7e8e*/
  this->q008 = 0; /*0x4a7e91*/
}
} // namespace gamemd

// 0x4A7EA0
namespace gamemd {
int Dial8Class_48::Read(unsigned int * a2)
{
  int result; // eax
  int v3; // edx
  unsigned int *i; // ecx

  if ( !this->q00C ) /*0x4a7ea0*/
    return 0; /*0x4a7ea8*/
  v3 = this->q008; /*0x4a7eae*/
  result = 0; /*0x4a7eb1*/
  if ( v3 <= 0 ) /*0x4a7eb5*/
    return -1; /*0x4a7ecc*/
  for ( i = this->q004; *i != *a2; ++i ) /*0x4a7ebb*/
  {
    if ( ++result >= v3 ) /*0x4a7eca*/
      return -1; /*0x4a7eca*/
  }
  return result; /*0x4a7eaa*/
}
} // namespace gamemd

// 0x4A7EE0
namespace gamemd {
unsigned int Dial8Class_48::Write(int a2)
{
  if ( this->q00C ) /*0x4a7ee0*/
    return (unsigned int)(a2 - this->q004) >> 2; /*0x4a7ef5*/
  else
    return 0; /*0x4a7ee7*/
}
} // namespace gamemd

// 0x4A7F00
namespace gamemd {
char Dial8Class_48::SetCapacity(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x4a7f0c*/
  {
    this->q00C = (unsigned int *)(0);
    if ( a3 ) /*0x4a7f18*/
      v4 = a3; /*0x4a7f2e*/
    else
      v4 = operator new(4 * a2); /*0x4a7f2a*/
    this->q00C = 1; /*0x4a7f32*/
    if ( !v4 ) /*0x4a7f36*/
      return 0; /*0x4a7faa*/
    if ( this->q004 ) /*0x4a7f38*/
    {
      v5 = this->q008; /*0x4a7f3f*/
      if ( a2 < v5 ) /*0x4a7f44*/
        v5 = a2; /*0x4a7f46*/
      for ( i = 0; i < v5; v4[i - 1] = *(unsigned int *)(this->q004 + 4 * i - 4) ) /*0x4a7f4c*/
        ++i; /*0x4a7f51*/
      if ( this->IsAllocated ) /*0x4a7f5e*/
      {
        RA2_OPDEL(this->q004); /*0x4a7f69*/
        this->q004 = 0; /*0x4a7f71*/
      }
    }
    this->q004 = v4; /*0x4a7f7a*/
    this->q008 = a2; /*0x4a7f82*/
    this->IsAllocated = a3 == 0; /*0x4a7f85*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(((unsigned int)(this->q0042))))(this); /*0x4a7f8e*/
  }
  v7 = this->q008; /*0x4a7f91*/
  if ( v7 < this->q010 ) /*0x4a7f99*/
    this->q010 = v7; /*0x4a7f9b*/
  return 1; /*0x4a7f9e*/
}
} // namespace gamemd

// 0x4A7FB0
namespace gamemd {
int Dial8Class_48::FindItem(unsigned int * a2)
{
  int v2; // edx
  int result; // eax
  unsigned int *i; // ecx

  v2 = this->q010; /*0x4a7fb0*/
  result = 0; /*0x4a7fb3*/
  if ( v2 <= 0 ) /*0x4a7fb8*/
    return -1; /*0x4a7fcf*/
  for ( i = (unsigned int *)this->q004; *i != *a2; ++i ) /*0x4a7fbe*/
  {
    if ( ++result >= v2 ) /*0x4a7fcd*/
      return -1; /*0x4a7fcd*/
  }
  return result; /*0x4a7fd2*/
}
}
// 0x4A8030
namespace gamemd {
VectorClass_flat * Dial8Class_48::QueryInterface(char a2)
{
  void *v3; // eax

  v3 = (void *)this->q004; /*0x4a8033*/
  if ( v3 && this->IsAllocated ) /*0x4a8040*/
  {
    RA2_OPDEL(v3); /*0x4a8048*/
    this->q004 = 0; /*0x4a8050*/
  }
  this->IsAllocated = (gamemd::VectorClass_flat *)(0);
  this->q008 = (int)((gamemd::VectorClass_flat *)(0));
  if ( (a2 & 1) != 0 ) /*0x4a8068*/
    RA2_OPDEL(); /*0x4a806b*/
  return this; /*0x4a8075*/
}
} // namespace gamemd

// 0x4A8080
namespace gamemd {
DynamicVector * Dial8Class_48::Constructor_VectorClass_DiskLaserClass___(char a2)
{
  void *v3; // eax

  v3 = (void *)this->q004; /*0x4a8083*/
  if ( v3 && this->IsAllocated ) /*0x4a8090*/
  {
    RA2_OPDEL(v3); /*0x4a8098*/
    this->q004 = 0; /*0x4a80a0*/
  }
  this->IsAllocated = (gamemd::DynamicVector *)(0);
  this->q008 = (int)((gamemd::DynamicVector *)(0));
  if ( (a2 & 1) != 0 ) /*0x4a80b8*/
    RA2_OPDEL(); /*0x4a80bb*/
  return this; /*0x4a80c5*/
}
} // namespace gamemd
