// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/WDTState_4_e4.hpp"
#include "e4/classes/ComPtr_e4.hpp"
#include "e4/classes/DynamicVector_e4.hpp"
#include "e4/e4_protos.h"

// 0x76BA70
namespace gamemd {
AbstractClass * * WDTState_4::Release(int a2, unsigned int * a3)
{
  int v3; // ebp
  _DWORD *v5; // eax
  _DWORD *v6; // ebx
  _DWORD *v7; // esi
  _DWORD *v8; // esi
  int i; // esi
  void (__thiscall ***v11)(_DWORD, int); // ecx
  int v12; // eax

  v3 = a2; /*0x76ba73*/
  if ( a2 ) /*0x76ba7d*/
  {
    *(&this->q0042) = 0; /*0x76ba87*/
    if ( a3 ) /*0x76ba8d*/
    {
      *a3 = a2; /*0x76bad1*/
      v8 = a3 + 1; /*0x76bad3*/
      if ( a2 - 1 >= 0 ) /*0x76badf*/
      {
        a2 = a2; /*0x76bae1*/
        do /*0x76baf5*/
        {
          ComPtr::Constructor(v8); /*0x76bae6*/
          *v8 = &(void*)(void*)&rc_ptr_WDTTerritory_vftable; /*0x76baeb*/
          v8 += 2; /*0x76baf1*/
          --a2; /*0x76baf4*/
        }
        while ( a2 ); /*0x76baf5*/
        v8 = a3 + 1; /*0x76baf7*/
      }
      v6 = v8; /*0x76bafb*/
    }
    else
    {
      v5 = RA2_OPNEW(8 * a2 + 4); /*0x76ba97*/
      if ( v5 ) /*0x76baa1*/
      {
        *v5 = a2; /*0x76baa3*/
        v6 = v5 + 1; /*0x76baa5*/
        v7 = v5 + 1; /*0x76baab*/
        if ( a2 - 1 >= 0 ) /*0x76baaf*/
        {
          a2 = a2; /*0x76bab2*/
          do /*0x76bac9*/
          {
            WDTState_4_::Constructor(v7); /*0x76bab8*/
            v7 += 2; /*0x76bac1*/
            --a2; /*0x76bac5*/
          }
          while ( a2 ); /*0x76bac9*/
        }
      }
      else
      {
        v6 = 0; /*0x76bacd*/
      }
    }
    *(&this->q0042) = 1; /*0x76baff*/
    if ( !v6 ) /*0x76bb03*/
      return 0; /*0x76bb86*/
    if ( this->q004 ) /*0x76bb05*/
    {
      if ( a2 >= this->Capacity ) /*0x76bb11*/
        v3 = this->Capacity; /*0x76bb13*/
      for ( i = 0; i < v3; ++i ) /*0x76bb19*/
        ComPtr::Set(&v6[2 * i], *(_DWORD *)(this->q004 + 8 * i + 4)); /*0x76bb26*/
      if ( *(&this->q0043) ) /*0x76bb30*/
      {
        v11 = (void (__thiscall ***)(_DWORD, int))this->q004; /*0x76bb37*/
        if ( v11 ) /*0x76bb3c*/
          (**v11)(v11, 3); /*0x76bb42*/
        this->q004 = 0; /*0x76bb44*/
      }
      v3 = a2; /*0x76bb4b*/
    }
    this->q004 = v6; /*0x76bb5a*/
    this->Capacity = v3; /*0x76bb5d*/
    *(&this->q0043) = a3 == 0; /*0x76bb60*/
  }
  else
  {
    (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)&this->q0042))(this); /*0x76bb69*/
  }
  v12 = this->Capacity; /*0x76bb6c*/
  if ( v12 < this->q010 ) /*0x76bb74*/
    this->q010 = v12; /*0x76bb76*/
  return 1; /*0x76bb79*/
}
}
// 0x76B710
namespace gamemd {
int WDTState_4::ddtor()
{
  int (__thiscall ***v2)(_DWORD, int); // ecx
  int result; // eax

  v2 = *(int (__thiscall ****)(_DWORD, int))(this + 4); /*0x76b716*/
  this->q010 = 0; /*0x76b719*/
  if ( v2 && this->IsAllocated ) /*0x76b720*/
  {
    result = (**v2)(v2, 3); /*0x76b72d*/
    this->Items = 0; /*0x76b72f*/
  }
  this->IsAllocated = 0; /*0x76b732*/
  this->q008 = 0; /*0x76b735*/
  return result; /*0x76b738*/
}
} // namespace gamemd

// 0x76B740
namespace gamemd {
unsigned int WDTState_4::Write(int a2)
{
  if ( this->IsInitialized ) /*0x76b740*/
    return (unsigned int)(a2 - this->Items) >> 3; /*0x76b755*/
  else
    return 0; /*0x76b747*/
}
} // namespace gamemd

// 0x76BB90
namespace gamemd {
int WDTState_4::Read(int a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = this->q010; /*0x76bb90*/
  result = 0; /*0x76bb93*/
  if ( v2 <= 0 ) /*0x76bb98*/
    return -1; /*0x76bbb3*/
  for ( i = (_DWORD *)(this->Items + 4); *i != *(_DWORD *)(a2 + 4); i += 2 ) /*0x76bba1*/
  {
    if ( ++result >= v2 ) /*0x76bbb1*/
      return -1; /*0x76bbb1*/
  }
  return result; /*0x76bbb6*/
}
}
// 0x76BC10
namespace gamemd {
DynamicVector * WDTState_4::QueryInterface(char a2)
{
  void (__thiscall ***v3)(_DWORD, int); // ecx

  v3 = (void (__thiscall ***)(_DWORD, int))this->Items; /*0x76bc13*/
  *this = &(void*)(void*)&VectorClass_rc_ptr_WDTTerritory_vftable; /*0x76bc16*/
  if ( v3 && this->IsAllocated ) /*0x76bc20*/
  {
    (**v3)(v3, 3); /*0x76bc2f*/
    this->Items = 0; /*0x76bc31*/
  }
  this->IsAllocated = 0; /*0x76bc3c*/
  this->q008 = 0; /*0x76bc42*/
  if ( (a2 & 1) != 0 ) /*0x76bc49*/
    RA2_OPDEL(); /*0x76bc4c*/
  return this; /*0x76bc56*/
}
} // namespace gamemd

// 0x76BC60
namespace gamemd {
unsigned int * WDTState_4::Constructor()
{
  ComPtr::Constructor(); /*0x76bc63*/
  *this = &(void*)(void*)&rc_ptr_WDTTerritory_vftable; /*0x76bc68*/
  return this; /*0x76bc70*/
}
} // namespace gamemd
