// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/NeuronClass_25_e4.hpp"

// 0x43A350
int NeuronClass::NeuronClass()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall NeuronClass::NeuronClass(int this)
{
  int v2; // eax
  int v3; // eax

  AbstractClass::Constructor((AbstractClass *)this); /*0x43a353*/
  *(_DWORD *)(this + 36) = 0; /*0x43a358*/
  *(_DWORD *)(this + 40) = 0; /*0x43a35f*/
  *(_DWORD *)(this + 44) = 0; /*0x43a366*/
  *(_DWORD *)(this + 48) = MEMORY[0xA8ED84]; /*0x43a372*/
  *(_DWORD *)this = &NeuronClass::`vftable'; /*0x43a375*/
  this->NeuronClass_field_0x04 = &NeuronClass::`vftable'; /*0x43a37b*/
  this->NeuronClass_field_0x08 = &NeuronClass::`vftable'; /*0x43a382*/
  this->NeuronClass_field_0x0C = &vt_NeuronClass; /*0x43a389*/
  if ( MEMORY[0xB0F5E8] < MEMORY[0xB0F5E0] /*0x43a3c5*/
    || (MEMORY[0xB0F5E5] || !MEMORY[0xB0F5E0])
    && MEMORY[0xB0F5EC] > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(MEMORY[0xB0F5D8] + 8))(
         &MEMORY[0xB0F5D8],
         MEMORY[0xB0F5E0] + MEMORY[0xB0F5EC],
         0) )
  {
    v2 = MEMORY[0xB0F5E8]++; /*0x43a3d2*/
    *((_DWORD *)MEMORY[0xB0F5DC] + v2) = this; /*0x43a3e1*/
  }
  if ( MEMORY[0xB0F680] < MEMORY[0xB0F678] /*0x43a41b*/
    || (MEMORY[0xB0F67D] || !MEMORY[0xB0F678])
    && MEMORY[0xB0F684] > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(MEMORY[0xB0F670] + 8))(
         &MEMORY[0xB0F670],
         MEMORY[0xB0F678] + MEMORY[0xB0F684],
         0) )
  {
    v3 = MEMORY[0xB0F680]++; /*0x43a428*/
    *((_DWORD *)MEMORY[0xB0F674] + v3) = this; /*0x43a437*/
  }
  return this; /*0x43a43c*/
}
}

// 0x43A9C0
NeuronClass * NeuronClass::Reset(char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
NeuronClass *__thiscall NeuronClass::Reset(_DWORD *this, char a2)
{
  int v3; // eax
  int v4; // eax
  _DWORD *v6; // [esp+4h] [ebp-4h] BYREF

  *this = &NeuronClass::`vftable'; /*0x43a9cd*/
  *(this + 1) = &NeuronClass::`vftable'; /*0x43a9d3*/
  *(this + 2) = &NeuronClass::`vftable'; /*0x43a9da*/
  *(this + 3) = &vt_NeuronClass; /*0x43a9e1*/
  v6 = this; /*0x43a9ef*/
  v3 = (*(int (__thiscall **)(int *, _DWORD **))(MEMORY[0xB0F670] + 16))(&MEMORY[0xB0F670], &v6); /*0x43a9f3*/
  if ( v3 != -1 && v3 < MEMORY[0xB0F680] && v3 < --MEMORY[0xB0F680] ) /*0x43aa0e*/
  {
    do /*0x43aa26*/
    {
      ++v3; /*0x43aa16*/
      *((_DWORD *)MEMORY[0xB0F674] + v3 - 1) = *((_DWORD *)MEMORY[0xB0F674] + v3); /*0x43aa1a*/
    }
    while ( v3 < MEMORY[0xB0F680] ); /*0x43aa26*/
  }
  v6 = this; /*0x43aa38*/
  v4 = (*(int (__thiscall **)(int *, _DWORD **))(MEMORY[0xB0F5D8] + 16))(&MEMORY[0xB0F5D8], &v6); /*0x43aa3c*/
  if ( v4 != -1 && v4 < MEMORY[0xB0F5E8] && v4 < --MEMORY[0xB0F5E8] ) /*0x43aa57*/
  {
    do /*0x43aa6f*/
    {
      ++v4; /*0x43aa5f*/
      *((_DWORD *)MEMORY[0xB0F5DC] + v4 - 1) = *((_DWORD *)MEMORY[0xB0F5DC] + v4); /*0x43aa63*/
    }
    while ( v4 < MEMORY[0xB0F5E8] ); /*0x43aa6f*/
  }
  AbstractClass::DTOR(this); /*0x43aa73*/
  if ( (a2 & 1) != 0 ) /*0x43aa7d*/
    __3_YAXPAX_Z(this); /*0x43aa80*/
  return (NeuronClass *)this; /*0x43aa8a*/
}
}

// 0x43AB20
namespace gamemd {
int NeuronClass_25::Update(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall NeuronClass_25_::_vt06(_DWORD *this, int a2)
{
  return *(_DWORD *)(*(this + 1) + 4 * a2); /*0x43ab2a*/
}
}
} // namespace gamemd

// 0x43AB30
namespace gamemd {
char NeuronClass_25::AddRef(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall NeuronClass_25_::_vt01(int *this, int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = *(this + 2); /*0x43ab32*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x43ab3d*/
  {
    v3 = 0; /*0x43ab3f*/
    if ( v2 <= 0 ) /*0x43ab43*/
      return 1; /*0x43ab63*/
    v4 = (_DWORD *)*(this + 1); /*0x43ab45*/
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
}
} // namespace gamemd

// 0x43AB70
namespace gamemd {
char NeuronClass_25::Release(int a2, unsigned int * a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall NeuronClass_25_::_vt02(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x43ab7c*/
  {
    *((_BYTE *)this + 12) = 0; /*0x43ab86*/
    if ( a3 ) /*0x43ab8c*/
      v4 = a3; /*0x43aba2*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x43ab9e*/
    *((_BYTE *)this + 12) = 1; /*0x43aba6*/
    if ( v4 ) /*0x43abaa*/
    {
      if ( this->NeuronClass_25_field_0x4 ) /*0x43abb5*/
      {
        v6 = this->NeuronClass_25_field_0x8; /*0x43abbc*/
        if ( a2 < v6 ) /*0x43abc1*/
          v6 = a2; /*0x43abc3*/
        for ( i = 0; i < v6; v4[i - 1] = *(_DWORD *)(this->NeuronClass_25_field_0x4 + 4 * i - 4) ) /*0x43abc9*/
          ++i; /*0x43abce*/
        if ( *((_BYTE *)this + 13) ) /*0x43abdb*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x43abe6*/
          this->NeuronClass_25_field_0x4 = 0; /*0x43abee*/
        }
      }
      this->NeuronClass_25_field_0x4 = v4; /*0x43abf7*/
      this->NeuronClass_25_field_0x8 = a2; /*0x43abff*/
      *((_BYTE *)this + 13) = a3 == 0; /*0x43ac02*/
      return 1; /*0x43ac08*/
    }
    else
    {
      return 0; /*0x43abaf*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(*(_DWORD *)this + 12))(this); /*0x43ac12*/
    return 1; /*0x43ac18*/
  }
}
}
} // namespace gamemd

// 0x43AC20
namespace gamemd {
void NeuronClass_25::ddtor()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall NeuronClass_25_::_vt03(int this)
{
  if ( this->NeuronClass_25_field_0x4 && *(_BYTE *)(this + 13) ) /*0x43ac2d*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x43ac33*/
    this->NeuronClass_25_field_0x4 = 0; /*0x43ac3b*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x43ac3e*/
  this->NeuronClass_25_field_0x8 = 0; /*0x43ac41*/
}
}
} // namespace gamemd

// 0x43AC50
namespace gamemd {
int NeuronClass_25::Activate(unsigned int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall NeuronClass_25_::_vt04(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !(unsigned char)this->NeuronClass_25_field_0xC ) /*0x43ac50*/
    return 0; /*0x43ac58*/
  v3 = this->NeuronClass_25_field_0x8; /*0x43ac5e*/
  result = 0; /*0x43ac61*/
  if ( v3 <= 0 ) /*0x43ac65*/
    return -1; /*0x43ac7c*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2; ++i ) /*0x43ac6b*/
  {
    if ( ++result >= v3 ) /*0x43ac7a*/
      return -1; /*0x43ac7a*/
  }
  return result; /*0x43ac5a*/
}
}
} // namespace gamemd

// 0x43AC90
namespace gamemd {
unsigned int NeuronClass_25::Fire(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
unsigned int __thiscall NeuronClass_25_::_vt05(int this, int a2)
{
  if ( (unsigned char)this->NeuronClass_25_field_0xC ) /*0x43ac90*/
    return (unsigned int)(a2 - this->NeuronClass_25_field_0x4) >> 2; /*0x43aca5*/
  else
    return 0; /*0x43ac97*/
}
}
} // namespace gamemd

// 0x43ACB0
namespace gamemd {
VectorClass * NeuronClass_25::QueryInterface(char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
VectorClass *__thiscall NeuronClass_25_::QueryInterface(_DWORD *this, char a2)
{
  void *v3; // eax

  v3 = (void *)*(this + 1); /*0x43acb3*/
  *this = &vt_VectorClass_NeuronClass; /*0x43acb6*/
  if ( v3 && *((_BYTE *)this + 13) ) /*0x43acc0*/
  {
    __3_YAXPAX_Z(v3); /*0x43acc8*/
    *(this + 1) = 0; /*0x43acd0*/
  }
  *((_BYTE *)this + 13) = 0; /*0x43acdb*/
  *(this + 2) = 0; /*0x43ace1*/
  if ( (a2 & 1) != 0 ) /*0x43ace8*/
    __3_YAXPAX_Z(this); /*0x43aceb*/
  return (VectorClass *)this; /*0x43acf5*/
}
}
} // namespace gamemd
