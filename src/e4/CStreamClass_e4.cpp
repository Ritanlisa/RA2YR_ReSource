// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/CStreamClass_16_e4.hpp"
#include "e4/classes/CStreamClass_e4.hpp"
#include "e4/classes/Block_e4.hpp"
#include "e4/classes/Camera_e4.hpp"
#include "e4/classes/IStream_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"

// 0x4A2CD0
namespace gamemd {
ModemGame * * CStreamClass::CopyStreamToBuffer(int a1, IStream * Src, signed int Size, size_t * a4)
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
  if ( !*(unsigned int *)(a1 + 8) ) /*0x4a2d02*/
    return -2147467259; /*0x4a2d12*/
  if ( *(unsigned char *)(a1 + 16) ) /*0x4a2d15*/
    return -2147467259; /*0x4a2d25*/
  *(unsigned char *)(a1 + 17) = 1; /*0x4a2d2a*/
  if ( !Size ) /*0x4a2d2e*/
    return 0; /*0x4a2d2e*/
  if ( a4 ) /*0x4a2d3a*/
    *a4 = 0; /*0x4a2d3c*/
  v8 = *(unsigned int *)(a1 + 20); /*0x4a2d42*/
  if ( v8 > 0 ) /*0x4a2d47*/
  {
    if ( Size >= 0x10000 - v8 ) /*0x4a2d52*/
      v5 = 0x10000 - v8; /*0x4a2d54*/
    memcpy((void *)(*(unsigned int *)(a1 + 24) + *(unsigned int *)(a1 + 20)), Src, v5); /*0x4a2d61*/
    v9 = v5 + *(unsigned int *)(a1 + 20); /*0x4a2d72*/
    v4 = (IStream *)((char *)Src + v5); /*0x4a2d74*/
    v6 = Size - v5; /*0x4a2d76*/
    *(unsigned int *)(a1 + 20) = v9; /*0x4a2d7d*/
    if ( v9 == 0x10000 ) /*0x4a2d80*/
    {
      result = IStream::Read(*(IStream **)(a1 + 24), (void *)0x10000, v10); /*0x4a2d8d*/
      if ( result < 0 ) /*0x4a2d94*/
        return result; /*0x4a2d94*/
      *(unsigned int *)(a1 + 20) = 0; /*0x4a2d96*/
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
      *(unsigned int *)(a1 + 20) = v6; /*0x4a2de8*/
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
    v4 += 0x4000; /*0x4a2dc0*/
    if ( v6 < 0x10000 ) /*0x4a2dcc*/
    {
      v5 = Size; /*0x4a2dce*/
      goto LABEL_23; /*0x4a2dce*/
    }
  }
}
} // namespace gamemd
// 0x4A3110
namespace gamemd {
CStreamClass * CStreamClass::ddtor(int a2, char a3)
{
  int v4; // eax
  void *v5; // ecx
  void *v6; // edx
  int v7; // eax

  v4 = *((unsigned int *)Block + 2); /*0x4a3116*/
  if ( v4 ) /*0x4a3128*/
  {
    if ( *((unsigned char *)Block + 17) /*0x4a314b*/
      && *((int *)Block + 5) > 0
      && !CStreamClass::IsEmpty((unsigned int *)Block + 2, 0)
      && *((int *)Block + 5) > 0 )
    {
      IStream::Read(*((IStream **)Block + 6), *((void **)Block + 5), a2); /*0x4a3154*/
    }
    if ( *((unsigned int *)Block + 2) /*0x4a317b*/
      && (*(int (__stdcall **)(unsigned int, unsigned int))(**((unsigned int **)Block + 2) + 32))(*((unsigned int *)Block + 2), 0) >= 0 )
    {
      if ( !*((unsigned int *)Block + 2) ) /*0x4a317d*/
        WinAPI::Wrapper(-2147467261); /*0x4a3187*/
      (*(void (__stdcall **)(unsigned int))(**((unsigned int **)Block + 2) + 8))(*((unsigned int *)Block + 2)); /*0x4a3192*/
      *((unsigned int *)Block + 2) = 0; /*0x4a3195*/
    }
  }
  RA2_OPDEL(*((void **)Block + 8)); /*0x4a319c*/
  v5 = (void *)*((unsigned int *)Block + 6); /*0x4a31a1*/
  *((unsigned int *)Block + 8) = 0; /*0x4a31a4*/
  RA2_OPDEL(v5); /*0x4a31a8*/
  v6 = (void *)*((unsigned int *)Block + 7); /*0x4a31ad*/
  *((unsigned int *)Block + 6) = 0; /*0x4a31b0*/
  RA2_OPDEL(v6); /*0x4a31b4*/
  *((unsigned int *)Block + 7) = 0; /*0x4a31b9*/
  v7 = *((unsigned int *)Block + 2); /*0x4a31bc*/
  if ( v7 ) /*0x4a31c4*/
    (*(void (__stdcall **)(unsigned int))(*(unsigned int *)v7 + 8))(*((unsigned int *)Block + 2)); /*0x4a31c9*/
  if ( (a3 & 1) != 0 ) /*0x4a31d1*/
    RA2_OPDEL(Block); /*0x4a31d4*/
  return Block; /*0x4a31de*/
}
} // namespace gamemd

// 0x4A2E00
int CStreamClass::Read(int a1, int a2, int a3, int a4, int a5)
{
  if ( *(unsigned char *)(a1 + 16) || *(unsigned char *)(a1 + 17) ) /*0x4a2e0c*/
    return -2147467259; /*0x4a2e45*/
  if ( !*(unsigned int *)(a1 + 8) ) /*0x4a2e13*/
    WinAPI::Wrapper(-2147467261); /*0x4a2e1f*/
  return (*(int (__stdcall **)(unsigned int, int, int, int, int))(**(unsigned int **)(a1 + 8) + 20))( /*0x4a2e41*/
           *(unsigned int *)(a1 + 8),
           a2,
           a3,
           a4,
           a5);
}
// 0x4A2E50
int CStreamClass::Write(int a1, int a2, int a3)
{
  if ( *(unsigned char *)(a1 + 16) || *(unsigned char *)(a1 + 17) ) /*0x4a2e5c*/
    return -2147467259; /*0x4a2e8b*/
  if ( !*(unsigned int *)(a1 + 8) ) /*0x4a2e63*/
    WinAPI::Wrapper(-2147467261); /*0x4a2e6f*/
  return (*(int (__stdcall **)(unsigned int, int, int))(**(unsigned int **)(a1 + 8) + 24))(*(unsigned int *)(a1 + 8), a2, a3); /*0x4a2e87*/
}
// 0x4A2EA0
int CStreamClass::Seek(int a1, int a2, int a3, int a4, int a5, int a6)
{
  if ( !*(unsigned int *)(a1 + 8) ) /*0x4a2ea5*/
    WinAPI::Wrapper(-2147467261); /*0x4a2eb1*/
  return (*(int (__stdcall **)(unsigned int, int, int, int, int, int))(**(unsigned int **)(a1 + 8) + 28))( /*0x4a2ed8*/
           *(unsigned int *)(a1 + 8),
           a2,
           a3,
           a4,
           a5,
           a6);
}
// 0x4A2EE0
int CStreamClass::SetSize(int a1, int a2)
{
  if ( !*(unsigned int *)(a1 + 8) ) /*0x4a2ee5*/
    WinAPI::Wrapper(-2147467261); /*0x4a2ef1*/
  return (*(int (__stdcall **)(unsigned int, int))(**(unsigned int **)(a1 + 8) + 32))(*(unsigned int *)(a1 + 8), a2); /*0x4a2f04*/
}
// 0x4A2F10
int CStreamClass::Commit(int a1)
{
  if ( !*(unsigned int *)(a1 + 8) ) /*0x4a2f15*/
    WinAPI::Wrapper(-2147467261); /*0x4a2f21*/
  return (*(int (__stdcall **)(unsigned int))(**(unsigned int **)(a1 + 8) + 36))(*(unsigned int *)(a1 + 8)); /*0x4a2f2f*/
}
// 0x4A2F40
int CStreamClass::Revert(int a1, int a2, int a3, int a4, int a5, int a6)
{
  if ( !*(unsigned int *)(a1 + 8) ) /*0x4a2f45*/
    WinAPI::Wrapper(-2147467261); /*0x4a2f51*/
  return (*(int (__stdcall **)(unsigned int, int, int, int, int, int))(**(unsigned int **)(a1 + 8) + 40))( /*0x4a2f78*/
           *(unsigned int *)(a1 + 8),
           a2,
           a3,
           a4,
           a5,
           a6);
}
// 0x4A2F80
int CStreamClass::LockRegion(int a1, int a2, int a3, int a4, int a5, int a6)
{
  if ( !*(unsigned int *)(a1 + 8) ) /*0x4a2f85*/
    WinAPI::Wrapper(-2147467261); /*0x4a2f91*/
  return (*(int (__stdcall **)(unsigned int, int, int, int, int, int))(**(unsigned int **)(a1 + 8) + 44))( /*0x4a2fb8*/
           *(unsigned int *)(a1 + 8),
           a2,
           a3,
           a4,
           a5,
           a6);
}
// 0x4A2FC0
int CStreamClass::UnlockRegion(int a1, int a2, int a3)
{
  if ( !*(unsigned int *)(a1 + 8) ) /*0x4a2fc5*/
    WinAPI::Wrapper(-2147467261); /*0x4a2fd1*/
  return (*(int (__stdcall **)(unsigned int, int, int))(**(unsigned int **)(a1 + 8) + 48))(*(unsigned int *)(a1 + 8), a2, a3); /*0x4a2fe9*/
}
// 0x4A2FF0
int CStreamClass::Stat(int a1, int a2)
{
  if ( !*(unsigned int *)(a1 + 8) ) /*0x4a2ff5*/
    WinAPI::Wrapper(-2147467261); /*0x4a3001*/
  return (*(int (__stdcall **)(unsigned int, int))(**(unsigned int **)(a1 + 8) + 52))(*(unsigned int *)(a1 + 8), a2); /*0x4a3014*/
}
// 0x4A3220
int CStreamClass::IStreamQueryInterface(int a1, const void * a2, unsigned int * a3)
{
  return CStreamClass::QueryInterface(a1 - 4, a2, a3);
}
// 0x4A3230
LONG CStreamClass::IStreamAddRef(int a1)
{
  return CStreamClass::AddRef(a1 - 4);
}
// 0x4A3240
LONG CStreamClass::IStreamRelease(int a1)
{
  return CStreamClass::Release((volatile LONG *)(a1 - 4));
}
// 0x4A4B20
namespace gamemd {
int CStreamClass_16::Seek(int a2)
{
  return *(unsigned int *)(this->q004 + 4 * a2); /*0x4a4b2a*/
}
} // namespace gamemd

// 0x4A4B30
namespace gamemd {
char CStreamClass_16::AddRef(int a2)
{
  int v2; // esi
  int v3; // edx
  unsigned int *v4; // eax
  int v5; // ecx

  v2 = this->q008; /*0x4a4b32*/
  if ( v2 == *(unsigned int *)(a2 + 8) ) /*0x4a4b3d*/
  {
    v3 = 0; /*0x4a4b3f*/
    if ( v2 <= 0 ) /*0x4a4b43*/
      return 1; /*0x4a4b63*/
    v4 = (unsigned int *)this->q004; /*0x4a4b45*/
    v5 = *(unsigned int *)(a2 + 4) - (unsigned int)v4; /*0x4a4b4b*/
    while ( *v4 == *(unsigned int *)((char *)v4 + v5) ) /*0x4a4b54*/
    {
      ++v3; /*0x4a4b56*/
      ++v4; /*0x4a4b57*/
      if ( v3 >= v2 ) /*0x4a4b5c*/
        return 1; /*0x4a4b5c*/
    }
  }
  return 0; /*0x4a4b5e*/
}
} // namespace gamemd

// 0x4A4B70
namespace gamemd {
char CStreamClass_16::Release(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x4a4b7c*/
  {
    this->q00C = 0; /*0x4a4b86*/
    if ( a3 ) /*0x4a4b8c*/
      v4 = a3; /*0x4a4ba2*/
    else
      v4 = operator new(4 * a2); /*0x4a4b9e*/
    this->q00C = 1; /*0x4a4ba6*/
    if ( v4 ) /*0x4a4baa*/
    {
      if ( this->q004 ) /*0x4a4bb5*/
      {
        v6 = this->q008; /*0x4a4bbc*/
        if ( a2 < v6 ) /*0x4a4bc1*/
          v6 = a2; /*0x4a4bc3*/
        for ( i = 0; i < v6; v4[i - 1] = *(unsigned int *)(this->q004 + 4 * i - 4) ) /*0x4a4bc9*/
          ++i; /*0x4a4bce*/
        if ( this->IsAllocated ) /*0x4a4bdb*/
        {
          RA2_OPDEL(this->q004); /*0x4a4be6*/
          this->q004 = 0; /*0x4a4bee*/
        }
      }
      this->q004 = v4; /*0x4a4bf7*/
      this->q008 = a2; /*0x4a4bff*/
      this->IsAllocated = a3 == 0; /*0x4a4c02*/
      return 1; /*0x4a4c08*/
    }
    else
    {
      return 0; /*0x4a4baf*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(((unsigned int)(this->q0042))))(this); /*0x4a4c12*/
    return 1; /*0x4a4c18*/
  }
}
} // namespace gamemd

// 0x4A4C20
namespace gamemd {
void CStreamClass_16::ddtor()
{
  if ( this->q004 && this->IsAllocated ) /*0x4a4c2d*/
  {
    RA2_OPDEL(this->q004); /*0x4a4c33*/
    this->q004 = 0; /*0x4a4c3b*/
  }
  this->IsAllocated = 0; /*0x4a4c3e*/
  this->q008 = 0; /*0x4a4c41*/
}
} // namespace gamemd

// 0x4A4C50
namespace gamemd {
int CStreamClass_16::Read(unsigned int * a2)
{
  int result; // eax
  int v3; // edx
  unsigned int *i; // ecx

  if ( !this->q00C ) /*0x4a4c50*/
    return 0; /*0x4a4c58*/
  v3 = this->q008; /*0x4a4c5e*/
  result = 0; /*0x4a4c61*/
  if ( v3 <= 0 ) /*0x4a4c65*/
    return -1; /*0x4a4c7c*/
  for ( i = this->q004; *i != *a2; ++i ) /*0x4a4c6b*/
  {
    if ( ++result >= v3 ) /*0x4a4c7a*/
      return -1; /*0x4a4c7a*/
  }
  return result; /*0x4a4c5a*/
}
} // namespace gamemd

// 0x4A4C90
namespace gamemd {
unsigned int CStreamClass_16::Write(int a2)
{
  if ( this->q00C ) /*0x4a4c90*/
    return (unsigned int)(a2 - this->q004) >> 2; /*0x4a4ca5*/
  else
    return 0; /*0x4a4c97*/
}
} // namespace gamemd

// 0x4A4D90
namespace gamemd {
VectorClass_flat * CStreamClass_16::QueryInterface(char a2)
{
  void *v3; // eax

  v3 = (void *)this->q004; /*0x4a4d93*/
  if ( v3 && this->IsAllocated ) /*0x4a4da0*/
  {
    RA2_OPDEL(v3); /*0x4a4da8*/
    this->q004 = 0; /*0x4a4db0*/
  }
  this->IsAllocated = 0; /*0x4a4dbb*/
  this->q008 = 0; /*0x4a4dc1*/
  if ( (a2 & 1) != 0 ) /*0x4a4dc8*/
    RA2_OPDEL(); /*0x4a4dcb*/
  return this; /*0x4a4dd5*/
}
} // namespace gamemd
