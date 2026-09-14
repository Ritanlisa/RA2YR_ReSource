// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Dial8Class_48_e4.hpp"

// 0x4A7D20
namespace gamemd {
void Dial8Class_48::ClearBuffer()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall Dial8Class_48_::sub_4A7D20(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x4a7d26*/
  this->Dial8Class_48_field_0x10 = 0; /*0x4a7d29*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x4a7d30*/
  {
    __3_YAXPAX_Z(v2); /*0x4a7d36*/
    this->Dial8Class_48_field_0x4 = 0; /*0x4a7d3e*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x4a7d41*/
  this->Dial8Class_48_field_0x8 = 0; /*0x4a7d44*/
}
}
} // namespace gamemd

// 0x4A7D70
namespace gamemd {
int Dial8Class_48::Seek(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall Dial8Class_48_::_vt06(_DWORD *this, int a2)
{
  return *(_DWORD *)(*(this + 1) + 4 * a2); /*0x4a7d7a*/
}
}
} // namespace gamemd

// 0x4A7D80
namespace gamemd {
char Dial8Class_48::AddRef(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall Dial8Class_48_::_vt01(int *this, int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = *(this + 2); /*0x4a7d82*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x4a7d8d*/
  {
    v3 = 0; /*0x4a7d8f*/
    if ( v2 <= 0 ) /*0x4a7d93*/
      return 1; /*0x4a7db3*/
    v4 = (_DWORD *)*(this + 1); /*0x4a7d95*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x4a7d9b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x4a7da4*/
    {
      ++v3; /*0x4a7da6*/
      ++v4; /*0x4a7da7*/
      if ( v3 >= v2 ) /*0x4a7dac*/
        return 1; /*0x4a7dac*/
    }
  }
  return 0; /*0x4a7dae*/
}
}
} // namespace gamemd

// 0x4A7DC0
namespace gamemd {
char Dial8Class_48::Release(int a2, unsigned int * a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall Dial8Class_48_::_vt02(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x4a7dcc*/
  {
    *((_BYTE *)this + 12) = 0; /*0x4a7dd6*/
    if ( a3 ) /*0x4a7ddc*/
      v4 = a3; /*0x4a7df2*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x4a7dee*/
    *((_BYTE *)this + 12) = 1; /*0x4a7df6*/
    if ( v4 ) /*0x4a7dfa*/
    {
      if ( this->Dial8Class_48_field_0x4 ) /*0x4a7e05*/
      {
        v6 = this->Dial8Class_48_field_0x8; /*0x4a7e0c*/
        if ( a2 < v6 ) /*0x4a7e11*/
          v6 = a2; /*0x4a7e13*/
        for ( i = 0; i < v6; v4[i - 1] = *(_DWORD *)(this->Dial8Class_48_field_0x4 + 4 * i - 4) ) /*0x4a7e19*/
          ++i; /*0x4a7e1e*/
        if ( *((_BYTE *)this + 13) ) /*0x4a7e2b*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x4a7e36*/
          this->Dial8Class_48_field_0x4 = 0; /*0x4a7e3e*/
        }
      }
      this->Dial8Class_48_field_0x4 = v4; /*0x4a7e47*/
      this->Dial8Class_48_field_0x8 = a2; /*0x4a7e4f*/
      *((_BYTE *)this + 13) = a3 == 0; /*0x4a7e52*/
      return 1; /*0x4a7e58*/
    }
    else
    {
      return 0; /*0x4a7dff*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(*(_DWORD *)this + 12))(this); /*0x4a7e62*/
    return 1; /*0x4a7e68*/
  }
}
}
} // namespace gamemd

// 0x4A7E70
namespace gamemd {
void Dial8Class_48::ddtor()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall Dial8Class_48_::_vt03(int this)
{
  if ( this->Dial8Class_48_field_0x4 && *(_BYTE *)(this + 13) ) /*0x4a7e7d*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x4a7e83*/
    this->Dial8Class_48_field_0x4 = 0; /*0x4a7e8b*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x4a7e8e*/
  this->Dial8Class_48_field_0x8 = 0; /*0x4a7e91*/
}
}
} // namespace gamemd

// 0x4A7EA0
namespace gamemd {
int Dial8Class_48::Read(unsigned int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall Dial8Class_48_::_vt04(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !(unsigned char)this->Dial8Class_48_field_0xC ) /*0x4a7ea0*/
    return 0; /*0x4a7ea8*/
  v3 = this->Dial8Class_48_field_0x8; /*0x4a7eae*/
  result = 0; /*0x4a7eb1*/
  if ( v3 <= 0 ) /*0x4a7eb5*/
    return -1; /*0x4a7ecc*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2; ++i ) /*0x4a7ebb*/
  {
    if ( ++result >= v3 ) /*0x4a7eca*/
      return -1; /*0x4a7eca*/
  }
  return result; /*0x4a7eaa*/
}
}
} // namespace gamemd

// 0x4A7F00
namespace gamemd {
char Dial8Class_48::SetCapacity(int a2, unsigned int * a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall Dial8Class_48_::sub_4A7F00(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x4a7f0c*/
  {
    *((_BYTE *)this + 12) = 0; /*0x4a7f12*/
    if ( a3 ) /*0x4a7f18*/
      v4 = a3; /*0x4a7f2e*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x4a7f2a*/
    *((_BYTE *)this + 12) = 1; /*0x4a7f32*/
    if ( !v4 ) /*0x4a7f36*/
      return 0; /*0x4a7faa*/
    if ( this->Dial8Class_48_field_0x4 ) /*0x4a7f38*/
    {
      v5 = this->Dial8Class_48_field_0x8; /*0x4a7f3f*/
      if ( a2 < v5 ) /*0x4a7f44*/
        v5 = a2; /*0x4a7f46*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(this->Dial8Class_48_field_0x4 + 4 * i - 4) ) /*0x4a7f4c*/
        ++i; /*0x4a7f51*/
      if ( *((_BYTE *)this + 13) ) /*0x4a7f5e*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x4a7f69*/
        this->Dial8Class_48_field_0x4 = 0; /*0x4a7f71*/
      }
    }
    this->Dial8Class_48_field_0x4 = v4; /*0x4a7f7a*/
    this->Dial8Class_48_field_0x8 = a2; /*0x4a7f82*/
    *((_BYTE *)this + 13) = a3 == 0; /*0x4a7f85*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(*(_DWORD *)this + 12))(this); /*0x4a7f8e*/
  }
  v7 = this->Dial8Class_48_field_0x8; /*0x4a7f91*/
  if ( v7 < this->Dial8Class_48_field_0x10 ) /*0x4a7f99*/
    this->Dial8Class_48_field_0x10 = v7; /*0x4a7f9b*/
  return 1; /*0x4a7f9e*/
}
}
} // namespace gamemd

// 0x4A7FB0
namespace gamemd {
int Dial8Class_48::FindItem(unsigned int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall Dial8Class_48_::sub_4A7FB0(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = *(this + 4); /*0x4a7fb0*/
  result = 0; /*0x4a7fb3*/
  if ( v2 <= 0 ) /*0x4a7fb8*/
    return -1; /*0x4a7fcf*/
  for ( i = (_DWORD *)*(this + 1); *i != *a2; ++i ) /*0x4a7fbe*/
  {
    if ( ++result >= v2 ) /*0x4a7fcd*/
      return -1; /*0x4a7fcd*/
  }
  return result; /*0x4a7fd2*/
}
}
} // namespace gamemd

// 0x4A8030
namespace gamemd {
VectorClass * Dial8Class_48::QueryInterface(char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
VectorClass *__thiscall Dial8Class_48_::QueryInterface(_DWORD *this, char a2)
{
  void *v3; // eax

  v3 = (void *)*(this + 1); /*0x4a8033*/
  *this = &vt_VectorClass_DiskLaserClass; /*0x4a8036*/
  if ( v3 && *((_BYTE *)this + 13) ) /*0x4a8040*/
  {
    __3_YAXPAX_Z(v3); /*0x4a8048*/
    *(this + 1) = 0; /*0x4a8050*/
  }
  *((_BYTE *)this + 13) = 0; /*0x4a805b*/
  *(this + 2) = 0; /*0x4a8061*/
  if ( (a2 & 1) != 0 ) /*0x4a8068*/
    __3_YAXPAX_Z(this); /*0x4a806b*/
  return (VectorClass *)this; /*0x4a8075*/
}
}
} // namespace gamemd

// 0x4A8080
namespace gamemd {
DynamicVector * Dial8Class_48::Constructor_VectorClass_DiskLaserClass___(char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
DynamicVector *__thiscall Dial8Class_48_::Constructor_VectorClass_DiskLaserClass___(_DWORD *this, char a2)
{
  void *v3; // eax

  v3 = (void *)*(this + 1); /*0x4a8083*/
  *this = &vt_VectorClass_DiskLaserClass; /*0x4a8086*/
  if ( v3 && *((_BYTE *)this + 13) ) /*0x4a8090*/
  {
    __3_YAXPAX_Z(v3); /*0x4a8098*/
    *(this + 1) = 0; /*0x4a80a0*/
  }
  *((_BYTE *)this + 13) = 0; /*0x4a80ab*/
  *(this + 2) = 0; /*0x4a80b1*/
  if ( (a2 & 1) != 0 ) /*0x4a80b8*/
    __3_YAXPAX_Z(this); /*0x4a80bb*/
  return (DynamicVector *)this; /*0x4a80c5*/
}
}
} // namespace gamemd

// 0x4A7D50
namespace gamemd {
unsigned int Dial8Class_48::PointerToIndex(int a2)
{
{
    if ( (unsigned char)this->Dial8Class_48_field_0xC )
    return (unsigned int)(a2 - this->Dial8Class_48_field_0x4) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x4A7EE0
namespace gamemd {
unsigned int Dial8Class_48::Write(int a2)
{
{
    if ( (unsigned char)this->Dial8Class_48_field_0xC )
    return (unsigned int)(a2 - this->Dial8Class_48_field_0x4) >> 2;
    else
    return 0;
}
}
} // namespace gamemd
