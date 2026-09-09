// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/SwizzleManagerClass_19_e4.hpp"

// 0x6CF490
int SwizzleManagerClass::Add(SwizzleManagerClass * aP0, SwizzleManagerClass * aP1, unsigned int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall SwizzleManagerClass::Add(SwizzleManagerClass *aP0, SwizzleManagerClass *aP1, _DWORD *a2)
{
  if ( !aP1 || !a2 ) /*0x6cf49e*/
    return -2147467261; /*0x6cf4a7*/
  *a2 = aP1; /*0x6cf4a0*/
  return 0; /*0x6cf4a4*/
}
}

// 0x6CF4D0
int SwizzleManagerClass::Remove(int a1, int a2, int a3)
{
return -2147467263;
}

// 0x6CF4E0
int SwizzleManagerClass::Lookup(int a1, int a2, int a3, int a4)
{
return -2147467263;
}

// 0x6CF4F0
namespace gamemd {
void SwizzleManagerClass_19::ClearBuffer()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall SwizzleManagerClass_19_::sub_6CF4F0(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x6cf4f6*/
  this->SwizzleManagerClass_19_field_0x10 = 0; /*0x6cf4f9*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x6cf500*/
  {
    __3_YAXPAX_Z(v2); /*0x6cf506*/
    this->SwizzleManagerClass_19_field_0x4 = 0; /*0x6cf50e*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x6cf511*/
  this->SwizzleManagerClass_19_field_0x8 = 0; /*0x6cf514*/
}
}
} // namespace gamemd

// 0x6CF520
namespace gamemd {
unsigned int SwizzleManagerClass_19::PointerToIndex(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
unsigned int __thiscall SwizzleManagerClass_19_::sub_6CF520(int this, int a2)
{
  if ( (unsigned char)this->SwizzleManagerClass_19_field_0xC ) /*0x6cf520*/
    return (unsigned int)(a2 - this->SwizzleManagerClass_19_field_0x4) >> 3; /*0x6cf535*/
  else
    return 0; /*0x6cf527*/
}
}
} // namespace gamemd

// 0x6CF540
namespace gamemd {
unsigned int * SwizzleManagerClass_19::Lookup(unsigned int * a2, int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall SwizzleManagerClass_19_::_vt06(_DWORD *this, _DWORD *a2, int a3)
{
  int v3; // edx

  v3 = *(this + 1); /*0x6cf540*/
  *a2 = *(_DWORD *)(v3 + 8 * a3); /*0x6cf54f*/
  a2[1] = *(_DWORD *)(v3 + 8 * a3 + 4); /*0x6cf556*/
  return a2; /*0x6cf551*/
}
}
} // namespace gamemd

// 0x6CF560
namespace gamemd {
char SwizzleManagerClass_19::AddRef(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall SwizzleManagerClass_19_::_vt01(int *this, int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = *(this + 2); /*0x6cf562*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x6cf56d*/
  {
    v3 = 0; /*0x6cf56f*/
    if ( v2 <= 0 ) /*0x6cf573*/
      return 1; /*0x6cf593*/
    v4 = (_DWORD *)*(this + 1); /*0x6cf575*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x6cf57b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x6cf584*/
    {
      ++v3; /*0x6cf586*/
      v4 += 2; /*0x6cf587*/
      if ( v3 >= v2 ) /*0x6cf58c*/
        return 1; /*0x6cf58c*/
    }
  }
  return 0; /*0x6cf58e*/
}
}
} // namespace gamemd

// 0x6CF5A0
namespace gamemd {
char SwizzleManagerClass_19::Release(int a2, unsigned int * a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall SwizzleManagerClass_19_::_vt02(void *this, int a2, _DWORD *a3)
{
  int v3; // ebp
  _DWORD *v5; // esi
  _DWORD *v6; // eax
  _DWORD *v7; // ecx
  int v8; // edx
  _DWORD *v9; // eax
  int v10; // ecx
  int v12; // edx
  int v13; // ecx
  int v14; // eax
  _DWORD *v15; // ebx

  v3 = a2; /*0x6cf5a2*/
  if ( a2 ) /*0x6cf5ae*/
  {
    v5 = a3; /*0x6cf5b4*/
    *((_BYTE *)this + 12) = 0; /*0x6cf5b8*/
    if ( a3 ) /*0x6cf5bd*/
    {
      v9 = a3; /*0x6cf5f3*/
      if ( a2 - 1 >= 0 ) /*0x6cf5f7*/
      {
        v10 = a2; /*0x6cf5f9*/
        do /*0x6cf603*/
        {
          *v9 = 0; /*0x6cf5fa*/
          v9[1] = 0; /*0x6cf5fc*/
          v9 += 2; /*0x6cf5ff*/
          --v10; /*0x6cf602*/
        }
        while ( v10 ); /*0x6cf603*/
      }
    }
    else
    {
      v6 = __2_YAPAXI_Z(8 * a2); /*0x6cf5c7*/
      if ( v6 ) /*0x6cf5d1*/
      {
        v7 = v6; /*0x6cf5d6*/
        if ( a2 - 1 >= 0 ) /*0x6cf5da*/
        {
          v8 = a2; /*0x6cf5dc*/
          do /*0x6cf5e6*/
          {
            *v7 = 0; /*0x6cf5dd*/
            v7[1] = 0; /*0x6cf5df*/
            v7 += 2; /*0x6cf5e2*/
            --v8; /*0x6cf5e5*/
          }
          while ( v8 ); /*0x6cf5e6*/
        }
        v5 = v6; /*0x6cf5e8*/
      }
      else
      {
        v5 = 0; /*0x6cf5ec*/
      }
    }
    *((_BYTE *)this + 12) = 1; /*0x6cf607*/
    if ( v5 ) /*0x6cf60b*/
    {
      if ( this->SwizzleManagerClass_19_field_0x4 ) /*0x6cf616*/
      {
        v12 = this->SwizzleManagerClass_19_field_0x8; /*0x6cf61b*/
        if ( a2 < v12 ) /*0x6cf620*/
          v12 = a2; /*0x6cf622*/
        v13 = 0; /*0x6cf624*/
        if ( v12 > 0 ) /*0x6cf628*/
        {
          do /*0x6cf647*/
          {
            v14 = 2 * v13; /*0x6cf62d*/
            v15 = (_DWORD *)(this->SwizzleManagerClass_19_field_0x4 + 8 * v13++); /*0x6cf636*/
            v5[v14] = *v15; /*0x6cf63d*/
            v5[v14 + 1] = v15[1]; /*0x6cf643*/
          }
          while ( v13 < v12 ); /*0x6cf647*/
          v3 = a2; /*0x6cf649*/
        }
        if ( *((_BYTE *)this + 13) ) /*0x6cf64f*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x6cf658*/
          this->SwizzleManagerClass_19_field_0x4 = 0; /*0x6cf660*/
        }
      }
      this->SwizzleManagerClass_19_field_0x4 = v5; /*0x6cf66b*/
      this->SwizzleManagerClass_19_field_0x8 = v3; /*0x6cf671*/
      *((_BYTE *)this + 13) = a3 == 0; /*0x6cf674*/
      return 1; /*0x6cf67a*/
    }
    else
    {
      return 0; /*0x6cf610*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(*(_DWORD *)this + 12))(this); /*0x6cf684*/
    return 1; /*0x6cf68a*/
  }
}
}
} // namespace gamemd

// 0x6CF690
namespace gamemd {
void SwizzleManagerClass_19::ddtor()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall SwizzleManagerClass_19_::_vt03(int this)
{
  if ( this->SwizzleManagerClass_19_field_0x4 && *(_BYTE *)(this + 13) ) /*0x6cf69d*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x6cf6a3*/
    this->SwizzleManagerClass_19_field_0x4 = 0; /*0x6cf6ab*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x6cf6ae*/
  this->SwizzleManagerClass_19_field_0x8 = 0; /*0x6cf6b1*/
}
}
} // namespace gamemd

// 0x6CF6C0
namespace gamemd {
int SwizzleManagerClass_19::Init(unsigned int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall SwizzleManagerClass_19_::_vt04(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !(unsigned char)this->SwizzleManagerClass_19_field_0xC ) /*0x6cf6c0*/
    return 0; /*0x6cf6c8*/
  v3 = this->SwizzleManagerClass_19_field_0x8; /*0x6cf6ce*/
  result = 0; /*0x6cf6d1*/
  if ( v3 <= 0 ) /*0x6cf6d5*/
    return -1; /*0x6cf6ec*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2; i += 2 ) /*0x6cf6db*/
  {
    if ( ++result >= v3 ) /*0x6cf6ea*/
      return -1; /*0x6cf6ea*/
  }
  return result; /*0x6cf6ca*/
}
}
} // namespace gamemd

// 0x6CF700
namespace gamemd {
unsigned int SwizzleManagerClass_19::Add(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
unsigned int __thiscall SwizzleManagerClass_19_::_vt05(int this, int a2)
{
  if ( (unsigned char)this->SwizzleManagerClass_19_field_0xC ) /*0x6cf700*/
    return (unsigned int)(a2 - this->SwizzleManagerClass_19_field_0x4) >> 3; /*0x6cf715*/
  else
    return 0; /*0x6cf707*/
}
}
} // namespace gamemd

// 0x6CF720
namespace gamemd {
char SwizzleManagerClass_19::SetCapacity(int a2, unsigned int * a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall SwizzleManagerClass_19_::sub_6CF720(void *this, int a2, _DWORD *a3)
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

  v3 = a2; /*0x6cf722*/
  if ( a2 ) /*0x6cf72e*/
  {
    v5 = a3; /*0x6cf734*/
    *((_BYTE *)this + 12) = 0; /*0x6cf738*/
    if ( a3 ) /*0x6cf73d*/
    {
      v9 = a3; /*0x6cf773*/
      if ( a2 - 1 >= 0 ) /*0x6cf777*/
      {
        v10 = a2; /*0x6cf779*/
        do /*0x6cf783*/
        {
          *v9 = 0; /*0x6cf77a*/
          v9[1] = 0; /*0x6cf77c*/
          v9 += 2; /*0x6cf77f*/
          --v10; /*0x6cf782*/
        }
        while ( v10 ); /*0x6cf783*/
      }
    }
    else
    {
      v6 = __2_YAPAXI_Z(8 * a2); /*0x6cf747*/
      if ( v6 ) /*0x6cf751*/
      {
        v7 = v6; /*0x6cf756*/
        if ( a2 - 1 >= 0 ) /*0x6cf75a*/
        {
          v8 = a2; /*0x6cf75c*/
          do /*0x6cf766*/
          {
            *v7 = 0; /*0x6cf75d*/
            v7[1] = 0; /*0x6cf75f*/
            v7 += 2; /*0x6cf762*/
            --v8; /*0x6cf765*/
          }
          while ( v8 ); /*0x6cf766*/
        }
        v5 = v6; /*0x6cf768*/
      }
      else
      {
        v5 = 0; /*0x6cf76c*/
      }
    }
    *((_BYTE *)this + 12) = 1; /*0x6cf787*/
    if ( !v5 ) /*0x6cf78b*/
      return 0; /*0x6cf814*/
    if ( this->SwizzleManagerClass_19_field_0x4 ) /*0x6cf791*/
    {
      v11 = this->SwizzleManagerClass_19_field_0x8; /*0x6cf796*/
      if ( a2 < v11 ) /*0x6cf79b*/
        v11 = a2; /*0x6cf79d*/
      v12 = 0; /*0x6cf79f*/
      if ( v11 > 0 ) /*0x6cf7a3*/
      {
        do /*0x6cf7c2*/
        {
          v13 = 2 * v12; /*0x6cf7a8*/
          v14 = (_DWORD *)(this->SwizzleManagerClass_19_field_0x4 + 8 * v12++); /*0x6cf7b1*/
          v5[v13] = *v14; /*0x6cf7b8*/
          v5[v13 + 1] = v14[1]; /*0x6cf7be*/
        }
        while ( v12 < v11 ); /*0x6cf7c2*/
        v3 = a2; /*0x6cf7c4*/
      }
      if ( *((_BYTE *)this + 13) ) /*0x6cf7ca*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x6cf7d3*/
        this->SwizzleManagerClass_19_field_0x4 = 0; /*0x6cf7db*/
      }
    }
    this->SwizzleManagerClass_19_field_0x4 = v5; /*0x6cf7e6*/
    this->SwizzleManagerClass_19_field_0x8 = v3; /*0x6cf7ec*/
    *((_BYTE *)this + 13) = a3 == 0; /*0x6cf7ef*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(*(_DWORD *)this + 12))(this); /*0x6cf7f8*/
  }
  v15 = this->SwizzleManagerClass_19_field_0x8; /*0x6cf7fb*/
  if ( v15 < this->SwizzleManagerClass_19_field_0x10 ) /*0x6cf803*/
    this->SwizzleManagerClass_19_field_0x10 = v15; /*0x6cf805*/
  return 1; /*0x6cf808*/
}
}
} // namespace gamemd

// 0x6CF820
namespace gamemd {
int SwizzleManagerClass_19::FindItem(unsigned int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall SwizzleManagerClass_19_::sub_6CF820(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = *(this + 4); /*0x6cf820*/
  result = 0; /*0x6cf823*/
  if ( v2 <= 0 ) /*0x6cf828*/
    return -1; /*0x6cf83f*/
  for ( i = (_DWORD *)*(this + 1); *i != *a2; i += 2 ) /*0x6cf82e*/
  {
    if ( ++result >= v2 ) /*0x6cf83d*/
      return -1; /*0x6cf83d*/
  }
  return result; /*0x6cf842*/
}
}
} // namespace gamemd

// 0x6CF850
namespace gamemd {
VectorClass * SwizzleManagerClass_19::QueryInterface(unsigned int * Block, char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
VectorClass *__thiscall SwizzleManagerClass_19_::QueryInterface(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x6cf853*/
  *Block = &VectorClass<SwizzlePointerClass>::`vftable'; /*0x6cf856*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x6cf860*/
  {
    __3_YAXPAX_Z(v3); /*0x6cf868*/
    *(Block + 1) = 0; /*0x6cf870*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x6cf87b*/
  *(Block + 2) = 0; /*0x6cf881*/
  if ( (a2 & 1) != 0 ) /*0x6cf888*/
    __3_YAXPAX_Z(Block); /*0x6cf88b*/
  return (VectorClass *)Block; /*0x6cf895*/
}
}
} // namespace gamemd

// 0x6CF8A0
namespace gamemd {
DynamicVector * SwizzleManagerClass_19::Constructor_VectorClass_SwizzlePointerClass_(unsigned int * Block, char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
DynamicVector *__thiscall SwizzleManagerClass_19_::Constructor_VectorClass_SwizzlePointerClass_(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x6cf8a3*/
  *Block = &VectorClass<SwizzlePointerClass>::`vftable'; /*0x6cf8a6*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x6cf8b0*/
  {
    __3_YAXPAX_Z(v3); /*0x6cf8b8*/
    *(Block + 1) = 0; /*0x6cf8c0*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x6cf8cb*/
  *(Block + 2) = 0; /*0x6cf8d1*/
  if ( (a2 & 1) != 0 ) /*0x6cf8d8*/
    __3_YAXPAX_Z(Block); /*0x6cf8db*/
  return (DynamicVector *)Block; /*0x6cf8e5*/
}
}
} // namespace gamemd

// 0x6CF4B0
int SwizzleManagerClass::AddRef(int a1)
{
return 1;
}

// 0x6CF4C0
int SwizzleManagerClass::Release(int a1)
{
return 1;
}
