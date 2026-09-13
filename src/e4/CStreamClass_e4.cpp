// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/CStreamClass_16_e4.hpp"

// 0x4A2CD0
HRESULT CStreamClass::CopyStreamToBuffer(int a1, IStream * Src, signed int Size, size_t * a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
HRESULT __stdcall CStreamClass::CopyStreamToBuffer(int a1, IStream *Src, signed int Size, size_t *a4)
{
  IStream *v4; // ebp
  size_t v5; // edi
  signed int v6; // ebx
  HRESULT result; // eax
  int v8; // ecx
  size_t v9; // eax
  ULONG v10; // [esp+0h] [ebp-10h]

  v4 = Src; /*0x4a2cd2*/
  v5 = Size; /*0x4a2cd8*/
  v6 = Size; /*0x4a2cde*/
  if ( !Src ) /*0x4a2ce0*/
    return -2147467261; /*0x4a2ceb*/
  if ( Size < 0 ) /*0x4a2cf0*/
    return -2147024809; /*0x4a2cfb*/
  if ( !*(_DWORD *)(a1 + 8) ) /*0x4a2d02*/
    return -2147467259; /*0x4a2d12*/
  if ( *(_BYTE *)(a1 + 16) ) /*0x4a2d15*/
    return -2147467259; /*0x4a2d25*/
  *(_BYTE *)(a1 + 17) = 1; /*0x4a2d2a*/
  if ( !Size ) /*0x4a2d2e*/
    return 0; /*0x4a2d2e*/
  if ( a4 ) /*0x4a2d3a*/
    *a4 = 0; /*0x4a2d3c*/
  v8 = *(_DWORD *)(a1 + 20); /*0x4a2d42*/
  if ( v8 > 0 ) /*0x4a2d47*/
  {
    if ( Size >= 0x10000 - v8 ) /*0x4a2d52*/
      v5 = 0x10000 - v8; /*0x4a2d54*/
    memcpy((void *)(*(_DWORD *)(a1 + 24) + *(_DWORD *)(a1 + 20)), Src, v5); /*0x4a2d61*/
    v9 = v5 + *(_DWORD *)(a1 + 20); /*0x4a2d72*/
    v4 = (IStream *)((char *)Src + v5); /*0x4a2d74*/
    v6 = Size - v5; /*0x4a2d76*/
    *(_DWORD *)(a1 + 20) = v9; /*0x4a2d7d*/
    if ( v9 == 0x10000 ) /*0x4a2d80*/
    {
      result = IStream::Read(*(IStream **)(a1 + 24), (void *)0x10000, v10); /*0x4a2d8d*/
      if ( result < 0 ) /*0x4a2d94*/
        return result; /*0x4a2d94*/
      *(_DWORD *)(a1 + 20) = 0; /*0x4a2d96*/
    }
    v5 = Size; /*0x4a2d9d*/
  }
  if ( v6 < 0x10000 ) /*0x4a2da7*/
  {
LABEL_23:
    if ( v6 > 0 ) /*0x4a2dd4*/
    {
      memcpy(*(void **)(a1 + 24), v4, v6); /*0x4a2ddc*/
      v5 = Size; /*0x4a2de1*/
      *(_DWORD *)(a1 + 20) = v6; /*0x4a2de8*/
    }
    if ( a4 ) /*0x4a2df1*/
      *a4 = v5; /*0x4a2df3*/
    return 0; /*0x4a2df5*/
  }
  while ( 1 ) /*0x4a2db1*/
  {
    result = IStream::Read(v4, (void *)0x10000, v10); /*0x4a2db1*/
    if ( result < 0 ) /*0x4a2db8*/
      return result; /*0x4a2ce2*/
    v6 -= 0x10000; /*0x4a2dba*/
    v4 += 0x2000; /*0x4a2dc0*/
    if ( v6 < 0x10000 ) /*0x4a2dcc*/
    {
      v5 = Size; /*0x4a2dce*/
      goto LABEL_23; /*0x4a2dce*/
    }
  }
}
}

// 0x4A2E00
int CStreamClass::Read(int a1, int a2, int a3, int a4, int a5)
{
{
    if ( *(char *)(a1 + 16) || *(char *)(a1 + 17) )
    return -2147467259;
    if ( !*(int *)(a1 + 8) )
    WinAPI::Wrapper(-2147467261);
    return (*(int (__stdcall **)(int, int, int, int, int))(**(int **)(a1 + 8) + 20))( *(int *)(a1 + 8), a2, a3, a4, a5);
}
}

// 0x4A2E50
int CStreamClass::Write(int a1, int a2, int a3)
{
{
    if ( *(char *)(a1 + 16) || *(char *)(a1 + 17) )
    return -2147467259;
    if ( !*(int *)(a1 + 8) )
    WinAPI::Wrapper(-2147467261);
    return (*(int (__stdcall **)(int, int, int))(**(int **)(a1 + 8) + 24))(*(int *)(a1 + 8), a2, a3);
}
}

// 0x4A2EA0
int CStreamClass::Seek(int a1, int a2, int a3, int a4, int a5, int a6)
{
{
    if ( !*(int *)(a1 + 8) )
    WinAPI::Wrapper(-2147467261);
    return (*(int (__stdcall **)(int, int, int, int, int, int))(**(int **)(a1 + 8) + 28))( *(int *)(a1 + 8), a2, a3, a4, a5, a6);
}
}

// 0x4A2EE0
int CStreamClass::SetSize(int a1, int a2)
{
{
    if ( !*(int *)(a1 + 8) )
    WinAPI::Wrapper(-2147467261);
    return (*(int (__stdcall **)(int, int))(**(int **)(a1 + 8) + 32))(*(int *)(a1 + 8), a2);
}
}

// 0x4A2F10
int CStreamClass::Commit(int a1)
{
{
    if ( !*(int *)(a1 + 8) )
    WinAPI::Wrapper(-2147467261);
    return (*(int (__stdcall **)(int))(**(int **)(a1 + 8) + 36))(*(int *)(a1 + 8));
}
}

// 0x4A2F40
int CStreamClass::Revert(int a1, int a2, int a3, int a4, int a5, int a6)
{
{
    if ( !*(int *)(a1 + 8) )
    WinAPI::Wrapper(-2147467261);
    return (*(int (__stdcall **)(int, int, int, int, int, int))(**(int **)(a1 + 8) + 40))( *(int *)(a1 + 8), a2, a3, a4, a5, a6);
}
}

// 0x4A2F80
int CStreamClass::LockRegion(int a1, int a2, int a3, int a4, int a5, int a6)
{
{
    if ( !*(int *)(a1 + 8) )
    WinAPI::Wrapper(-2147467261);
    return (*(int (__stdcall **)(int, int, int, int, int, int))(**(int **)(a1 + 8) + 44))( *(int *)(a1 + 8), a2, a3, a4, a5, a6);
}
}

// 0x4A2FC0
int CStreamClass::UnlockRegion(int a1, int a2, int a3)
{
{
    if ( !*(int *)(a1 + 8) )
    WinAPI::Wrapper(-2147467261);
    return (*(int (__stdcall **)(int, int, int))(**(int **)(a1 + 8) + 48))(*(int *)(a1 + 8), a2, a3);
}
}

// 0x4A2FF0
int CStreamClass::Stat(int a1, int a2)
{
{
    if ( !*(int *)(a1 + 8) )
    WinAPI::Wrapper(-2147467261);
    return (*(int (__stdcall **)(int, int))(**(int **)(a1 + 8) + 52))(*(int *)(a1 + 8), a2);
}
}

// 0x4A3110
namespace gamemd {
int CStreamClass_ddtor()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
CStreamClass *__userpurge CStreamClass::ddtor@<eax>(void *Block@<ecx>, ULONG a2@<edi>, char a3)
{
  int v4; // eax
  void *v5; // ecx
  void *v6; // edx
  int v7; // eax

  v4 = *((_DWORD *)Block + 2); /*0x4a3116*/
  *(_DWORD *)Block = &CStreamClass::`vftable'; /*0x4a3119*/
  *((_DWORD *)Block + 1) = &vt_CStreamClass; /*0x4a3121*/
  if ( v4 ) /*0x4a3128*/
  {
    if ( *((_BYTE *)Block + 17) /*0x4a314b*/
      && *((int *)Block + 5) > 0
      && !CStreamClass::IsEmpty((_DWORD *)Block + 2, 0)
      && *((int *)Block + 5) > 0 )
    {
      IStream::Read(*((IStream **)Block + 6), *((void **)Block + 5), a2); /*0x4a3154*/
    }
    if ( *((_DWORD *)Block + 2) /*0x4a317b*/
      && (*(int (__stdcall **)(_DWORD, _DWORD))(**((_DWORD **)Block + 2) + 32))(*((_DWORD *)Block + 2), 0) >= 0 )
    {
      if ( !*((_DWORD *)Block + 2) ) /*0x4a317d*/
        WinAPI::Wrapper(-2147467261); /*0x4a3187*/
      (*(void (__stdcall **)(_DWORD))(**((_DWORD **)Block + 2) + 8))(*((_DWORD *)Block + 2)); /*0x4a3192*/
      *((_DWORD *)Block + 2) = 0; /*0x4a3195*/
    }
  }
  __3_YAXPAX_Z(*((void **)Block + 8)); /*0x4a319c*/
  v5 = (void *)*((_DWORD *)Block + 6); /*0x4a31a1*/
  *((_DWORD *)Block + 8) = 0; /*0x4a31a4*/
  __3_YAXPAX_Z(v5); /*0x4a31a8*/
  v6 = (void *)*((_DWORD *)Block + 7); /*0x4a31ad*/
  *((_DWORD *)Block + 6) = 0; /*0x4a31b0*/
  __3_YAXPAX_Z(v6); /*0x4a31b4*/
  *((_DWORD *)Block + 7) = 0; /*0x4a31b9*/
  v7 = *((_DWORD *)Block + 2); /*0x4a31bc*/
  if ( v7 ) /*0x4a31c4*/
    (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v7 + 8))(*((_DWORD *)Block + 2)); /*0x4a31c9*/
  if ( (a3 & 1) != 0 ) /*0x4a31d1*/
    __3_YAXPAX_Z(Block); /*0x4a31d4*/
  return (CStreamClass *)Block; /*0x4a31de*/
}
}
} // namespace gamemd

// 0x4A3220
int CStreamClass::IStreamQueryInterface(int a1, const void * a2, unsigned int * a3)
{
{
    return CStreamClass::QueryInterface(a1 - 4, a2, a3);
}
}

// 0x4A3230
LONG CStreamClass::IStreamAddRef(int a1)
{
{
    return CStreamClass::AddRef(a1 - 4);
}
}

// 0x4A3240
LONG CStreamClass::IStreamRelease(int a1)
{
{
    return CStreamClass::Release((volatile LONG *)(a1 - 4));
}
}

// 0x4A4B20
namespace gamemd {
int CStreamClass_16::Seek(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall CStreamClass_16_::_vt06(_DWORD *this, int a2)
{
  return *(_DWORD *)(*(this + 1) + 4 * a2); /*0x4a4b2a*/
}
}
} // namespace gamemd

// 0x4A4B30
namespace gamemd {
char CStreamClass_16::AddRef(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall CStreamClass_16_::_vt01(int *this, int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = *(this + 2); /*0x4a4b32*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x4a4b3d*/
  {
    v3 = 0; /*0x4a4b3f*/
    if ( v2 <= 0 ) /*0x4a4b43*/
      return 1; /*0x4a4b63*/
    v4 = (_DWORD *)*(this + 1); /*0x4a4b45*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x4a4b4b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x4a4b54*/
    {
      ++v3; /*0x4a4b56*/
      ++v4; /*0x4a4b57*/
      if ( v3 >= v2 ) /*0x4a4b5c*/
        return 1; /*0x4a4b5c*/
    }
  }
  return 0; /*0x4a4b5e*/
}
}
} // namespace gamemd

// 0x4A4B70
namespace gamemd {
char CStreamClass_16::Release(int a2, unsigned int * a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall CStreamClass_16_::_vt02(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x4a4b7c*/
  {
    *((_BYTE *)this + 12) = 0; /*0x4a4b86*/
    if ( a3 ) /*0x4a4b8c*/
      v4 = a3; /*0x4a4ba2*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x4a4b9e*/
    *((_BYTE *)this + 12) = 1; /*0x4a4ba6*/
    if ( v4 ) /*0x4a4baa*/
    {
      if ( this->CStreamClass_16_field_0x4 ) /*0x4a4bb5*/
      {
        v6 = this->CStreamClass_16_field_0x8; /*0x4a4bbc*/
        if ( a2 < v6 ) /*0x4a4bc1*/
          v6 = a2; /*0x4a4bc3*/
        for ( i = 0; i < v6; v4[i - 1] = *(_DWORD *)(this->CStreamClass_16_field_0x4 + 4 * i - 4) ) /*0x4a4bc9*/
          ++i; /*0x4a4bce*/
        if ( *((_BYTE *)this + 13) ) /*0x4a4bdb*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x4a4be6*/
          this->CStreamClass_16_field_0x4 = 0; /*0x4a4bee*/
        }
      }
      this->CStreamClass_16_field_0x4 = v4; /*0x4a4bf7*/
      this->CStreamClass_16_field_0x8 = a2; /*0x4a4bff*/
      *((_BYTE *)this + 13) = a3 == 0; /*0x4a4c02*/
      return 1; /*0x4a4c08*/
    }
    else
    {
      return 0; /*0x4a4baf*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(*(_DWORD *)this + 12))(this); /*0x4a4c12*/
    return 1; /*0x4a4c18*/
  }
}
}
} // namespace gamemd

// 0x4A4C20
namespace gamemd {
void CStreamClass_16::ddtor()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall CStreamClass_16_::_vt03(int this)
{
  if ( this->CStreamClass_16_field_0x4 && *(_BYTE *)(this + 13) ) /*0x4a4c2d*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x4a4c33*/
    this->CStreamClass_16_field_0x4 = 0; /*0x4a4c3b*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x4a4c3e*/
  this->CStreamClass_16_field_0x8 = 0; /*0x4a4c41*/
}
}
} // namespace gamemd

// 0x4A4C50
namespace gamemd {
int CStreamClass_16::Read(unsigned int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall CStreamClass_16_::_vt04(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !(unsigned char)this->CStreamClass_16_field_0xC ) /*0x4a4c50*/
    return 0; /*0x4a4c58*/
  v3 = this->CStreamClass_16_field_0x8; /*0x4a4c5e*/
  result = 0; /*0x4a4c61*/
  if ( v3 <= 0 ) /*0x4a4c65*/
    return -1; /*0x4a4c7c*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2; ++i ) /*0x4a4c6b*/
  {
    if ( ++result >= v3 ) /*0x4a4c7a*/
      return -1; /*0x4a4c7a*/
  }
  return result; /*0x4a4c5a*/
}
}
} // namespace gamemd

// 0x4A4C90
namespace gamemd {
unsigned int CStreamClass_16::Write(int a2)
{
{
    if ( (unsigned char)this->CStreamClass_16_field_0xC )
    return (unsigned int)(a2 - this->CStreamClass_16_field_0x4) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x4A4D90
namespace gamemd {
VectorClass * CStreamClass_16::QueryInterface(char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
VectorClass *__thiscall CStreamClass_16_::QueryInterface(_DWORD *this, char a2)
{
  void *v3; // eax

  v3 = (void *)*(this + 1); /*0x4a4d93*/
  *this = &vt_VectorClass_DDSURFACEDESC; /*0x4a4d96*/
  if ( v3 && *((_BYTE *)this + 13) ) /*0x4a4da0*/
  {
    __3_YAXPAX_Z(v3); /*0x4a4da8*/
    *(this + 1) = 0; /*0x4a4db0*/
  }
  *((_BYTE *)this + 13) = 0; /*0x4a4dbb*/
  *(this + 2) = 0; /*0x4a4dc1*/
  if ( (a2 & 1) != 0 ) /*0x4a4dc8*/
    __3_YAXPAX_Z(this); /*0x4a4dcb*/
  return (VectorClass *)this; /*0x4a4dd5*/
}
}
} // namespace gamemd
