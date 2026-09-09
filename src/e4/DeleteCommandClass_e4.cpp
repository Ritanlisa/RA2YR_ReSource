// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/DeleteCommandClass_28_e4.hpp"

// 0x537F10
unsigned int * DeleteCommandClass::Constructor()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall sub_537F10(_DWORD *this)
{
  *this = &DeleteCommandClass::`vftable'; /*0x537f12*/
  return this; /*0x537f18*/
}
}

// 0x537F20
char * DeleteCommandClass::AddRef()
{
return aDelete;
}

// 0x537F30
wchar_t * DeleteCommandClass::Release()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
wchar_t *DeleteCommandClass::_vt02()
{
  return GetStringCSF(aCmndDelete, 0, g_Str_File_Init_CPP, 6559); /*0x537f46*/
}
}

// 0x537F50
wchar_t * DeleteCommandClass::ddtor()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
wchar_t *DeleteCommandClass::_vt03()
{
  return GetStringCSF(MEMORY[0x826FEC], 0, g_Str_File_Init_CPP, 6561); /*0x537f66*/
}
}

// 0x537F70
wchar_t * DeleteCommandClass::Read()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
wchar_t *DeleteCommandClass::_vt04()
{
  return GetStringCSF(aCmndDeletedesc, 0, g_Str_File_Init_CPP, 6563); /*0x537f86*/
}
}

// 0x537F90
namespace gamemd {
int DeleteCommandClass_Undo()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// attributes: thunk
char __stdcall DeleteCommandClass::_vt08(int a1)
{
  return UI_Delete(); /*0x537f95*/
}
}
} // namespace gamemd

// 0x53C4C0
namespace gamemd {
void DeleteCommandClass_28::ClearBuffer()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall DeleteCommandClass_28_::sub_53C4C0(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x53c4c6*/
  this->DeleteCommandClass_28_field_0x10 = 0; /*0x53c4c9*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x53c4d0*/
  {
    __3_YAXPAX_Z(v2); /*0x53c4d6*/
    this->DeleteCommandClass_28_field_0x4 = 0; /*0x53c4de*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x53c4e1*/
  this->DeleteCommandClass_28_field_0x8 = 0; /*0x53c4e4*/
}
}
} // namespace gamemd

// 0x53C4F0
namespace gamemd {
unsigned int DeleteCommandClass_28::PointerToIndex(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
unsigned int __thiscall DeleteCommandClass_28_::sub_53C4F0(int this, int a2)
{
  if ( (unsigned char)this->DeleteCommandClass_28_field_0xC ) /*0x53c4f0*/
    return (unsigned int)(a2 - this->DeleteCommandClass_28_field_0x4) >> 2; /*0x53c505*/
  else
    return 0; /*0x53c4f7*/
}
}
} // namespace gamemd

// 0x53C510
namespace gamemd {
int DeleteCommandClass_28::Seek(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall DeleteCommandClass_28_::_vt06(_DWORD *this, int a2)
{
  return *(_DWORD *)(*(this + 1) + 4 * a2); /*0x53c51a*/
}
}
} // namespace gamemd

// 0x53C520
namespace gamemd {
char DeleteCommandClass_28::AddRef(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall DeleteCommandClass_28_::_vt01(int *this, int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = *(this + 2); /*0x53c522*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x53c52d*/
  {
    v3 = 0; /*0x53c52f*/
    if ( v2 <= 0 ) /*0x53c533*/
      return 1; /*0x53c553*/
    v4 = (_DWORD *)*(this + 1); /*0x53c535*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x53c53b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x53c544*/
    {
      ++v3; /*0x53c546*/
      ++v4; /*0x53c547*/
      if ( v3 >= v2 ) /*0x53c54c*/
        return 1; /*0x53c54c*/
    }
  }
  return 0; /*0x53c54e*/
}
}
} // namespace gamemd

// 0x53C560
namespace gamemd {
char DeleteCommandClass_28::Release(int a2, unsigned int * a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall DeleteCommandClass_28_::_vt02(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x53c56c*/
  {
    *((_BYTE *)this + 12) = 0; /*0x53c576*/
    if ( a3 ) /*0x53c57c*/
      v4 = a3; /*0x53c592*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x53c58e*/
    *((_BYTE *)this + 12) = 1; /*0x53c596*/
    if ( v4 ) /*0x53c59a*/
    {
      if ( this->DeleteCommandClass_28_field_0x4 ) /*0x53c5a5*/
      {
        v6 = this->DeleteCommandClass_28_field_0x8; /*0x53c5ac*/
        if ( a2 < v6 ) /*0x53c5b1*/
          v6 = a2; /*0x53c5b3*/
        for ( i = 0; i < v6; v4[i - 1] = *(_DWORD *)(this->DeleteCommandClass_28_field_0x4 + 4 * i - 4) ) /*0x53c5b9*/
          ++i; /*0x53c5be*/
        if ( *((_BYTE *)this + 13) ) /*0x53c5cb*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x53c5d6*/
          this->DeleteCommandClass_28_field_0x4 = 0; /*0x53c5de*/
        }
      }
      this->DeleteCommandClass_28_field_0x4 = v4; /*0x53c5e7*/
      this->DeleteCommandClass_28_field_0x8 = a2; /*0x53c5ef*/
      *((_BYTE *)this + 13) = a3 == 0; /*0x53c5f2*/
      return 1; /*0x53c5f8*/
    }
    else
    {
      return 0; /*0x53c59f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(*(_DWORD *)this + 12))(this); /*0x53c602*/
    return 1; /*0x53c608*/
  }
}
}
} // namespace gamemd

// 0x53C610
namespace gamemd {
void DeleteCommandClass_28::ddtor()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall DeleteCommandClass_28_::_vt03(int this)
{
  if ( this->DeleteCommandClass_28_field_0x4 && *(_BYTE *)(this + 13) ) /*0x53c61d*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x53c623*/
    this->DeleteCommandClass_28_field_0x4 = 0; /*0x53c62b*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x53c62e*/
  this->DeleteCommandClass_28_field_0x8 = 0; /*0x53c631*/
}
}
} // namespace gamemd

// 0x53C640
namespace gamemd {
int DeleteCommandClass_28::Read(unsigned int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall DeleteCommandClass_28_::_vt04(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !(unsigned char)this->DeleteCommandClass_28_field_0xC ) /*0x53c640*/
    return 0; /*0x53c648*/
  v3 = this->DeleteCommandClass_28_field_0x8; /*0x53c64e*/
  result = 0; /*0x53c651*/
  if ( v3 <= 0 ) /*0x53c655*/
    return -1; /*0x53c66c*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2; ++i ) /*0x53c65b*/
  {
    if ( ++result >= v3 ) /*0x53c66a*/
      return -1; /*0x53c66a*/
  }
  return result; /*0x53c64a*/
}
}
} // namespace gamemd

// 0x53C680
namespace gamemd {
unsigned int DeleteCommandClass_28::Write(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
unsigned int __thiscall DeleteCommandClass_28_::_vt05(int this, int a2)
{
  if ( (unsigned char)this->DeleteCommandClass_28_field_0xC ) /*0x53c680*/
    return (unsigned int)(a2 - this->DeleteCommandClass_28_field_0x4) >> 2; /*0x53c695*/
  else
    return 0; /*0x53c687*/
}
}
} // namespace gamemd

// 0x53C6A0
namespace gamemd {
char DeleteCommandClass_28::SetCapacity(int a2, unsigned int * a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall DeleteCommandClass_28_::sub_53C6A0(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x53c6ac*/
  {
    *((_BYTE *)this + 12) = 0; /*0x53c6b2*/
    if ( a3 ) /*0x53c6b8*/
      v4 = a3; /*0x53c6ce*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x53c6ca*/
    *((_BYTE *)this + 12) = 1; /*0x53c6d2*/
    if ( !v4 ) /*0x53c6d6*/
      return 0; /*0x53c74a*/
    if ( this->DeleteCommandClass_28_field_0x4 ) /*0x53c6d8*/
    {
      v5 = this->DeleteCommandClass_28_field_0x8; /*0x53c6df*/
      if ( a2 < v5 ) /*0x53c6e4*/
        v5 = a2; /*0x53c6e6*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(this->DeleteCommandClass_28_field_0x4 + 4 * i - 4) ) /*0x53c6ec*/
        ++i; /*0x53c6f1*/
      if ( *((_BYTE *)this + 13) ) /*0x53c6fe*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x53c709*/
        this->DeleteCommandClass_28_field_0x4 = 0; /*0x53c711*/
      }
    }
    this->DeleteCommandClass_28_field_0x4 = v4; /*0x53c71a*/
    this->DeleteCommandClass_28_field_0x8 = a2; /*0x53c722*/
    *((_BYTE *)this + 13) = a3 == 0; /*0x53c725*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(*(_DWORD *)this + 12))(this); /*0x53c72e*/
  }
  v7 = this->DeleteCommandClass_28_field_0x8; /*0x53c731*/
  if ( v7 < this->DeleteCommandClass_28_field_0x10 ) /*0x53c739*/
    this->DeleteCommandClass_28_field_0x10 = v7; /*0x53c73b*/
  return 1; /*0x53c73e*/
}
}
} // namespace gamemd

// 0x53C750
namespace gamemd {
int DeleteCommandClass_28::FindItem(unsigned int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall DeleteCommandClass_28_::sub_53C750(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = *(this + 4); /*0x53c750*/
  result = 0; /*0x53c753*/
  if ( v2 <= 0 ) /*0x53c758*/
    return -1; /*0x53c76f*/
  for ( i = (_DWORD *)*(this + 1); *i != *a2; ++i ) /*0x53c75e*/
  {
    if ( ++result >= v2 ) /*0x53c76d*/
      return -1; /*0x53c76d*/
  }
  return result; /*0x53c772*/
}
}
} // namespace gamemd

// 0x53C780
namespace gamemd {
VectorClass * DeleteCommandClass_28::QueryInterface(unsigned int * Block, char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
VectorClass *__thiscall DeleteCommandClass_28_::QueryInterface(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x53c783*/
  *Block = &VectorClass<AnimClass const *>::`vftable'; /*0x53c786*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x53c790*/
  {
    __3_YAXPAX_Z(v3); /*0x53c798*/
    *(Block + 1) = 0; /*0x53c7a0*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x53c7ab*/
  *(Block + 2) = 0; /*0x53c7b1*/
  if ( (a2 & 1) != 0 ) /*0x53c7b8*/
    __3_YAXPAX_Z(Block); /*0x53c7bb*/
  return (VectorClass *)Block; /*0x53c7c5*/
}
}
} // namespace gamemd

// 0x53C7D0
namespace gamemd {
DynamicVector * DeleteCommandClass_28::Constructor(unsigned int * Block, char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
DynamicVector *__thiscall DeleteCommandClass_28_::Constructor(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x53c7d3*/
  *Block = &VectorClass<AnimClass const *>::`vftable'; /*0x53c7d6*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x53c7e0*/
  {
    __3_YAXPAX_Z(v3); /*0x53c7e8*/
    *(Block + 1) = 0; /*0x53c7f0*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x53c7fb*/
  *(Block + 2) = 0; /*0x53c801*/
  if ( (a2 & 1) != 0 ) /*0x53c808*/
    __3_YAXPAX_Z(Block); /*0x53c80b*/
  return (DynamicVector *)Block; /*0x53c815*/
}
}
} // namespace gamemd
