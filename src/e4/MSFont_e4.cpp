// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/MSFont_18_e4.hpp"

// 0x5D3450
MSFont * MSFont::QueryInterface(char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
MSFont *__thiscall MSFont::QueryInterface(void *this, char a2)
{
  MSFont::Constructor_MSFont(this); /*0x5d3453*/
  if ( (a2 & 1) != 0 ) /*0x5d345d*/
    __3_YAXPAX_Z(this); /*0x5d3460*/
  return (MSFont *)this; /*0x5d346a*/
}
}

// 0x5D5080
namespace gamemd {
void MSFont_18::ClearBuffer()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall MSFont_18_::sub_5D5080(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x5d5086*/
  this->MSFont_18_field_0x10 = 0; /*0x5d5089*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x5d5090*/
  {
    __3_YAXPAX_Z(v2); /*0x5d5096*/
    this->MSFont_18_field_0x4 = 0; /*0x5d509e*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x5d50a1*/
  this->MSFont_18_field_0x8 = 0; /*0x5d50a4*/
}
}
} // namespace gamemd

// 0x5D50B0
namespace gamemd {
unsigned int MSFont_18::PointerToIndex(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
unsigned int __thiscall MSFont_18_::sub_5D50B0(int this, int a2)
{
  if ( (unsigned char)this->MSFont_18_field_0xC ) /*0x5d50b0*/
    return (unsigned int)(a2 - this->MSFont_18_field_0x4) >> 2; /*0x5d50c5*/
  else
    return 0; /*0x5d50b7*/
}
}
} // namespace gamemd

// 0x5D50D0
namespace gamemd {
int MSFont_18::GetSize(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall MSFont_18_::_vt06(_DWORD *this, int a2)
{
  return *(_DWORD *)(*(this + 1) + 4 * a2); /*0x5d50da*/
}
}
} // namespace gamemd

// 0x5D50E0
namespace gamemd {
void MSFont_18::Destroy()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall MSFont_18_::sub_5D50E0(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x5d50e6*/
  this->MSFont_18_field_0x10 = 0; /*0x5d50e9*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x5d50f0*/
  {
    __3_YAXPAX_Z(v2); /*0x5d50f6*/
    this->MSFont_18_field_0x4 = 0; /*0x5d50fe*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x5d5101*/
  this->MSFont_18_field_0x8 = 0; /*0x5d5104*/
}
}
} // namespace gamemd

// 0x5D5110
namespace gamemd {
unsigned int MSFont_18::PointerToIndex8(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
unsigned int __thiscall MSFont_18_::sub_5D5110(int this, int a2)
{
  if ( (unsigned char)this->MSFont_18_field_0xC ) /*0x5d5110*/
    return (unsigned int)(a2 - this->MSFont_18_field_0x4) >> 3; /*0x5d5125*/
  else
    return 0; /*0x5d5117*/
}
}
} // namespace gamemd

// 0x5D5150
namespace gamemd {
char MSFont_18::AddRef(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall MSFont_18_::_vt01(int *this, int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = *(this + 2); /*0x5d5152*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x5d515d*/
  {
    v3 = 0; /*0x5d515f*/
    if ( v2 <= 0 ) /*0x5d5163*/
      return 1; /*0x5d5183*/
    v4 = (_DWORD *)*(this + 1); /*0x5d5165*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x5d516b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x5d5174*/
    {
      ++v3; /*0x5d5176*/
      ++v4; /*0x5d5177*/
      if ( v3 >= v2 ) /*0x5d517c*/
        return 1; /*0x5d517c*/
    }
  }
  return 0; /*0x5d517e*/
}
}
} // namespace gamemd

// 0x5D5190
namespace gamemd {
char MSFont_18::Release(int a2, unsigned int * a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall MSFont_18_::_vt02(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x5d519c*/
  {
    *((_BYTE *)this + 12) = 0; /*0x5d51a6*/
    if ( a3 ) /*0x5d51ac*/
      v4 = a3; /*0x5d51c2*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x5d51be*/
    *((_BYTE *)this + 12) = 1; /*0x5d51c6*/
    if ( v4 ) /*0x5d51ca*/
    {
      if ( this->MSFont_18_field_0x4 ) /*0x5d51d5*/
      {
        v6 = this->MSFont_18_field_0x8; /*0x5d51dc*/
        if ( a2 < v6 ) /*0x5d51e1*/
          v6 = a2; /*0x5d51e3*/
        for ( i = 0; i < v6; v4[i - 1] = *(_DWORD *)(this->MSFont_18_field_0x4 + 4 * i - 4) ) /*0x5d51e9*/
          ++i; /*0x5d51ee*/
        if ( *((_BYTE *)this + 13) ) /*0x5d51fb*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x5d5206*/
          this->MSFont_18_field_0x4 = 0; /*0x5d520e*/
        }
      }
      this->MSFont_18_field_0x4 = v4; /*0x5d5217*/
      this->MSFont_18_field_0x8 = a2; /*0x5d521f*/
      *((_BYTE *)this + 13) = a3 == 0; /*0x5d5222*/
      return 1; /*0x5d5228*/
    }
    else
    {
      return 0; /*0x5d51cf*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(*(_DWORD *)this + 12))(this); /*0x5d5232*/
    return 1; /*0x5d5238*/
  }
}
}
} // namespace gamemd

// 0x5D5240
namespace gamemd {
void MSFont_18::ddtor()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall MSFont_18_::_vt03(int this)
{
  if ( this->MSFont_18_field_0x4 && *(_BYTE *)(this + 13) ) /*0x5d524d*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x5d5253*/
    this->MSFont_18_field_0x4 = 0; /*0x5d525b*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x5d525e*/
  this->MSFont_18_field_0x8 = 0; /*0x5d5261*/
}
}
} // namespace gamemd

// 0x5D5270
namespace gamemd {
int MSFont_18::Create(unsigned int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall MSFont_18_::_vt04(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !(unsigned char)this->MSFont_18_field_0xC ) /*0x5d5270*/
    return 0; /*0x5d5278*/
  v3 = this->MSFont_18_field_0x8; /*0x5d527e*/
  result = 0; /*0x5d5281*/
  if ( v3 <= 0 ) /*0x5d5285*/
    return -1; /*0x5d529c*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2; ++i ) /*0x5d528b*/
  {
    if ( ++result >= v3 ) /*0x5d529a*/
      return -1; /*0x5d529a*/
  }
  return result; /*0x5d527a*/
}
}
} // namespace gamemd

// 0x5D52B0
namespace gamemd {
unsigned int MSFont_18::Draw(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
unsigned int __thiscall MSFont_18_::_vt05(int this, int a2)
{
  if ( (unsigned char)this->MSFont_18_field_0xC ) /*0x5d52b0*/
    return (unsigned int)(a2 - this->MSFont_18_field_0x4) >> 2; /*0x5d52c5*/
  else
    return 0; /*0x5d52b7*/
}
}
} // namespace gamemd

// 0x5D52D0
namespace gamemd {
char MSFont_18::SetCapacity(int a2, unsigned int * a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall MSFont_18_::sub_5D52D0(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x5d52dc*/
  {
    *((_BYTE *)this + 12) = 0; /*0x5d52e2*/
    if ( a3 ) /*0x5d52e8*/
      v4 = a3; /*0x5d52fe*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x5d52fa*/
    *((_BYTE *)this + 12) = 1; /*0x5d5302*/
    if ( !v4 ) /*0x5d5306*/
      return 0; /*0x5d537a*/
    if ( this->MSFont_18_field_0x4 ) /*0x5d5308*/
    {
      v5 = this->MSFont_18_field_0x8; /*0x5d530f*/
      if ( a2 < v5 ) /*0x5d5314*/
        v5 = a2; /*0x5d5316*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(this->MSFont_18_field_0x4 + 4 * i - 4) ) /*0x5d531c*/
        ++i; /*0x5d5321*/
      if ( *((_BYTE *)this + 13) ) /*0x5d532e*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x5d5339*/
        this->MSFont_18_field_0x4 = 0; /*0x5d5341*/
      }
    }
    this->MSFont_18_field_0x4 = v4; /*0x5d534a*/
    this->MSFont_18_field_0x8 = a2; /*0x5d5352*/
    *((_BYTE *)this + 13) = a3 == 0; /*0x5d5355*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(*(_DWORD *)this + 12))(this); /*0x5d535e*/
  }
  v7 = this->MSFont_18_field_0x8; /*0x5d5361*/
  if ( v7 < this->MSFont_18_field_0x10 ) /*0x5d5369*/
    this->MSFont_18_field_0x10 = v7; /*0x5d536b*/
  return 1; /*0x5d536e*/
}
}
} // namespace gamemd

// 0x5D5380
namespace gamemd {
int MSFont_18::FindItem(unsigned int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall MSFont_18_::sub_5D5380(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = *(this + 4); /*0x5d5380*/
  result = 0; /*0x5d5383*/
  if ( v2 <= 0 ) /*0x5d5388*/
    return -1; /*0x5d539f*/
  for ( i = (_DWORD *)*(this + 1); *i != *a2; ++i ) /*0x5d538e*/
  {
    if ( ++result >= v2 ) /*0x5d539d*/
      return -1; /*0x5d539d*/
  }
  return result; /*0x5d53a2*/
}
}
} // namespace gamemd

// 0x5D55A0
namespace gamemd {
char MSFont_18::SetCapacity8(int a2, unsigned int * a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall MSFont_18_::sub_5D55A0(void *this, int a2, _DWORD *a3)
{
  int v3; // ebp
  _DWORD *v5; // edi
  _DWORD *v6; // eax
  _DWORD *v7; // ecx
  int v8; // edx
  _DWORD *v9; // eax
  int v10; // ecx
  int v11; // edx
  int v12; // ecx
  int v13; // eax
  _DWORD *v14; // ebx
  int v15; // eax

  v3 = a2; /*0x5d55a2*/
  if ( a2 ) /*0x5d55ae*/
  {
    v5 = a3; /*0x5d55b4*/
    *((_BYTE *)this + 12) = 0; /*0x5d55b8*/
    if ( a3 ) /*0x5d55bd*/
    {
      v9 = a3; /*0x5d55f3*/
      if ( a2 - 1 >= 0 ) /*0x5d55f7*/
      {
        v10 = a2; /*0x5d55f9*/
        do /*0x5d5603*/
        {
          *v9 = 0; /*0x5d55fa*/
          v9[1] = 0; /*0x5d55fc*/
          v9 += 2; /*0x5d55ff*/
          --v10; /*0x5d5602*/
        }
        while ( v10 ); /*0x5d5603*/
      }
    }
    else
    {
      v6 = __2_YAPAXI_Z(8 * a2); /*0x5d55c7*/
      if ( v6 ) /*0x5d55d1*/
      {
        v7 = v6; /*0x5d55d6*/
        if ( a2 - 1 >= 0 ) /*0x5d55da*/
        {
          v8 = a2; /*0x5d55dc*/
          do /*0x5d55e6*/
          {
            *v7 = 0; /*0x5d55dd*/
            v7[1] = 0; /*0x5d55df*/
            v7 += 2; /*0x5d55e2*/
            --v8; /*0x5d55e5*/
          }
          while ( v8 ); /*0x5d55e6*/
        }
        v5 = v6; /*0x5d55e8*/
      }
      else
      {
        v5 = 0; /*0x5d55ec*/
      }
    }
    *((_BYTE *)this + 12) = 1; /*0x5d5607*/
    if ( !v5 ) /*0x5d560b*/
      return 0; /*0x5d5694*/
    if ( this->MSFont_18_field_0x4 ) /*0x5d5611*/
    {
      v11 = this->MSFont_18_field_0x8; /*0x5d5616*/
      if ( a2 < v11 ) /*0x5d561b*/
        v11 = a2; /*0x5d561d*/
      v12 = 0; /*0x5d561f*/
      if ( v11 > 0 ) /*0x5d5623*/
      {
        do /*0x5d5642*/
        {
          v13 = 2 * v12; /*0x5d5628*/
          v14 = (_DWORD *)(this->MSFont_18_field_0x4 + 8 * v12++); /*0x5d5631*/
          v5[v13] = *v14; /*0x5d5638*/
          v5[v13 + 1] = v14[1]; /*0x5d563e*/
        }
        while ( v12 < v11 ); /*0x5d5642*/
        v3 = a2; /*0x5d5644*/
      }
      if ( *((_BYTE *)this + 13) ) /*0x5d564a*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x5d5653*/
        this->MSFont_18_field_0x4 = 0; /*0x5d565b*/
      }
    }
    this->MSFont_18_field_0x4 = v5; /*0x5d5666*/
    this->MSFont_18_field_0x8 = v3; /*0x5d566c*/
    *((_BYTE *)this + 13) = a3 == 0; /*0x5d566f*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(*(_DWORD *)this + 12))(this); /*0x5d5678*/
  }
  v15 = this->MSFont_18_field_0x8; /*0x5d567b*/
  if ( v15 < this->MSFont_18_field_0x10 ) /*0x5d5683*/
    this->MSFont_18_field_0x10 = v15; /*0x5d5685*/
  return 1; /*0x5d5688*/
}
}
} // namespace gamemd

// 0x5D56A0
namespace gamemd {
int MSFont_18::FindPair8(unsigned int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall MSFont_18_::sub_5D56A0(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = *(this + 4); /*0x5d56a0*/
  result = 0; /*0x5d56a5*/
  if ( v2 <= 0 ) /*0x5d56ab*/
    return -1; /*0x5d56cc*/
  for ( i = (_DWORD *)*(this + 1); *i != *a2 || i[1] != a2[1]; i += 2 ) /*0x5d56b1*/
  {
    if ( ++result >= v2 ) /*0x5d56ca*/
      return -1; /*0x5d56ca*/
  }
  return result; /*0x5d56cf*/
}
}
} // namespace gamemd

// 0x5D56E0
namespace gamemd {
VectorClass * MSFont_18::QueryInterface(char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
VectorClass *__thiscall MSFont_18_::QueryInterface(_DWORD *this, char a2)
{
  void *v3; // eax

  v3 = (void *)*(this + 1); /*0x5d56e3*/
  *this = &vt_VectorClass_HWND; /*0x5d56e6*/
  if ( v3 && *((_BYTE *)this + 13) ) /*0x5d56f0*/
  {
    __3_YAXPAX_Z(v3); /*0x5d56f8*/
    *(this + 1) = 0; /*0x5d5700*/
  }
  *((_BYTE *)this + 13) = 0; /*0x5d570b*/
  *(this + 2) = 0; /*0x5d5711*/
  if ( (a2 & 1) != 0 ) /*0x5d5718*/
    __3_YAXPAX_Z(this); /*0x5d571b*/
  return (VectorClass *)this; /*0x5d5725*/
}
}
} // namespace gamemd

// 0x5D5730
namespace gamemd {
DynamicVector * MSFont_18::Constructor_VectorClass_HWND_____(char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
DynamicVector *__thiscall MSFont_18_::Constructor_VectorClass_HWND_____(_DWORD *this, char a2)
{
  void *v3; // eax

  v3 = (void *)*(this + 1); /*0x5d5733*/
  *this = &vt_VectorClass_HWND; /*0x5d5736*/
  if ( v3 && *((_BYTE *)this + 13) ) /*0x5d5740*/
  {
    __3_YAXPAX_Z(v3); /*0x5d5748*/
    *(this + 1) = 0; /*0x5d5750*/
  }
  *((_BYTE *)this + 13) = 0; /*0x5d575b*/
  *(this + 2) = 0; /*0x5d5761*/
  if ( (a2 & 1) != 0 ) /*0x5d5768*/
    __3_YAXPAX_Z(this); /*0x5d576b*/
  return (DynamicVector *)this; /*0x5d5775*/
}
}
} // namespace gamemd

// 0x5D57D0
namespace gamemd {
DynamicVector * MSFont_18::Constructor_VectorClass_AcceleratorTracker_(char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
DynamicVector *__thiscall MSFont_18_::Constructor_VectorClass_AcceleratorTracker_(_DWORD *this, char a2)
{
  void *v3; // eax

  v3 = (void *)*(this + 1); /*0x5d57d3*/
  *this = &vt_VectorClass_AcceleratorTracker; /*0x5d57d6*/
  if ( v3 && *((_BYTE *)this + 13) ) /*0x5d57e0*/
  {
    __3_YAXPAX_Z(v3); /*0x5d57e8*/
    *(this + 1) = 0; /*0x5d57f0*/
  }
  *((_BYTE *)this + 13) = 0; /*0x5d57fb*/
  *(this + 2) = 0; /*0x5d5801*/
  if ( (a2 & 1) != 0 ) /*0x5d5808*/
    __3_YAXPAX_Z(this); /*0x5d580b*/
  return (DynamicVector *)this; /*0x5d5815*/
}
}
} // namespace gamemd
