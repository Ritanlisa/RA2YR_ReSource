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
#include "e4/classes/AbstractTypeClass_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"

// 0x4A2CD0
namespace gamemd {
int CStreamClass::CopyStreamToBuffer()
{
  IStream *v4; // ebp
  size_t v5; // edi
  signed int v6; // ebx
  int result; // eax
  int CStreamClass_field_0x14; // ecx
  int v9; // eax
  ULONG v10; // [esp+0h] [ebp-10h]

  v4 = Src; /*0x4a2cd2*/
  v5 = Size; /*0x4a2cd8*/
  v6 = Size; /*0x4a2cde*/
  if ( !Src ) /*0x4a2ce0*/
    return -2147467261; /*0x4a2ceb*/
  if ( Size < 0 ) /*0x4a2cf0*/
    return -2147024809; /*0x4a2cfb*/
    if ( !*(unsigned int *)(a1 + 8) )
    return -2147467259; /*0x4a2d12*/
    if ( *(unsigned char *)(a1 + 16) )
    return -2147467259; /*0x4a2d25*/
    *(unsigned char *)(a1 + 17) = 1;
  if ( !Size ) /*0x4a2d2e*/
    return 0; /*0x4a2d2e*/
  if ( a4 ) /*0x4a2d3a*/
    *a4 = 0; /*0x4a2d3c*/
    v8 = *(unsigned int *)(a1 + 20);
  if ( CStreamClass_field_0x14 > 0 ) /*0x4a2d47*/
  {
    if ( Size >= 0x10000 - CStreamClass_field_0x14 ) /*0x4a2d52*/
      v5 = 0x10000 - CStreamClass_field_0x14; /*0x4a2d54*/
        memcpy((void *)(*(unsigned int *)(a1 + 24) + *(unsigned int *)(a1 + 20)), Src, v5);
        v9 = v5 + *(unsigned int *)(a1 + 20);
    v4 = (IStream *)((char *)Src + v5); /*0x4a2d74*/
    v6 = Size - v5; /*0x4a2d76*/
        *(unsigned int *)(a1 + 20) = v9;
    if ( v9 == 0x10000 ) /*0x4a2d80*/
    {
      result = IStream::Read((IStream *)a1->CStreamClass_field_0x18, (void *)0x10000, v10); /*0x4a2d8d*/
      if ( result < 0 ) /*0x4a2d94*/
        return result; /*0x4a2d94*/
      a1->CStreamClass_field_0x14 = 0; /*0x4a2d96*/
    }
    v5 = Size; /*0x4a2d9d*/
  }
  if ( v6 < 0x10000 ) /*0x4a2da7*/
  {
  LABEL_23:
    if ( v6 > 0 ) /*0x4a2dd4*/
    {
      memcpy((void *)a1->CStreamClass_field_0x18, v4, v6); /*0x4a2ddc*/
      v5 = Size; /*0x4a2de1*/
      a1->CStreamClass_field_0x14 = v6; /*0x4a2de8*/
    }
    if ( a4 ) /*0x4a2df1*/
      *a4 = v5; /*0x4a2df3*/
    return 0; /*0x4a2df5*/
  }
  while ( 1 ) /*0x4a2db1*/
  {
    result = ((IStream *)(v4))->Read((void *)0x10000, v10); /*0x4a2db1*/
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
} // namespace gamemd
// 0x4A3110
namespace gamemd {
CStreamClass * CStreamClass::ddtor(int a2, char a3)
{
  int v3; // ecx
  int v4; // esi
  void ** v5;
  void *v6; // ecx
  void *v7; // edx
  int v8; // eax

  v4 = (unsigned int)(v3);
  v5 = (void **)(*(unsigned int *)(v3 + 8));
  *(unsigned int *)v3 = (void*)&CStreamClass_vftable; /*0x4a3119*/
  *(unsigned int *)(v3 + 4) = (void*)&CStreamClass_vftable; /*0x4a3121*/
  if ( v5 ) /*0x4a3128*/
  {
    if ( *(unsigned char *)(v3 + 17) /*0x4a314b*/
      && *(int *)(v3 + 20) > 0
      && !CStreamClass::IsEmpty((CStreamClass *)(v3 + 8), 0)
      && *(int *)(v4 + 20) > 0 )
    {
      ((IStream *)(*(IStream **)(v4 + 24)))->Read(*(void **)(v4 + 20), a2); /*0x4a3154*/
    }
    if ( *(unsigned int *)(v4 + 8) /*0x4a317b*/
      && (*(int (__stdcall **)(unsigned int, unsigned int))(**(unsigned int **)(v4 + 8) + 32))(*(unsigned int *)(v4 + 8), 0) >= 0 )
    {
      if ( !*(unsigned int *)(v4 + 8) ) /*0x4a317d*/
        WinAPI::Wrapper(-2147467261); /*0x4a3187*/
      (*(void (__stdcall **)(unsigned int))(**(unsigned int **)(v4 + 8) + 8))(*(unsigned int *)(v4 + 8)); /*0x4a3192*/
      *(unsigned int *)(v4 + 8) = 0; /*0x4a3195*/
    }
  }
  RA2_OPDEL(*(void **)(v4 + 32)); /*0x4a319c*/
  v6 = *(void **)(v4 + 24); /*0x4a31a1*/
  *(unsigned int *)(v4 + 32) = 0; /*0x4a31a4*/
  RA2_OPDEL(v6); /*0x4a31a8*/
  v7 = *(void **)(v4 + 28); /*0x4a31ad*/
  *(unsigned int *)(v4 + 24) = 0; /*0x4a31b0*/
  RA2_OPDEL(v7); /*0x4a31b4*/
  *(unsigned int *)(v4 + 28) = 0; /*0x4a31b9*/
  v8 = *(unsigned int *)(v4 + 8); /*0x4a31bc*/
  if ( v8 ) /*0x4a31c4*/
    (*(void (__stdcall **)(unsigned int))(*(unsigned int *)v8 + 8))(*(unsigned int *)(v4 + 8)); /*0x4a31c9*/
  if ( ((uint8_t)a2 & 1) != 0 ) /*0x4a31d1*/
    RA2_OPDEL((void *)v4); /*0x4a31d4*/
  return (void *)v4; /*0x4a31de*/
}
} // namespace gamemd

// 0x4A2E00
int CStreamClass::Read(int a1, int a2, int a3, int a4, int a5)
{
    if ( *(unsigned char *)(a1 + 16) || *(unsigned char *)(a1 + 17) )
    return -2147467259; /*0x4a2e45*/
    if ( !*(unsigned int *)(a1 + 8) )
    WinAPI::Wrapper(-2147467261); /*0x4a2e1f*/
  return (*(int (__stdcall **)(int, int, int, int, int))(*(unsigned int *)a1->CStreamClass_field_0x08 + 20))( /*0x4a2e41*/
           a1->CStreamClass_field_0x08,
           a2,
           a3,
           a4,
           a5);
}
// 0x4A2E50
int CStreamClass::Write(int a1, int a2, int a3)
{
    if ( *(unsigned char *)(a1 + 16) || *(unsigned char *)(a1 + 17) )
    return -2147467259; /*0x4a2e8b*/
    if ( !*(unsigned int *)(a1 + 8) )
    WinAPI::Wrapper(-2147467261); /*0x4a2e6f*/
  return (*(int (__stdcall **)(int, int, int))(*(unsigned int *)a1->CStreamClass_field_0x08 + 24))( /*0x4a2e87*/
           a1->CStreamClass_field_0x08,
           a2,
           a3);
}
// 0x4A2EA0
int CStreamClass::Seek(int a1, int a2, int a3, int a4, int a5, int a6)
{
    if ( !*(unsigned int *)(a1 + 8) )
    WinAPI::Wrapper(-2147467261); /*0x4a2eb1*/
  return (*(int (__stdcall **)(int, int, int, int, int, int))(*(unsigned int *)a1->CStreamClass_field_0x08 + 28))( /*0x4a2ed8*/
           a1->CStreamClass_field_0x08,
           a2,
           a3,
           a4,
           a5,
           a6);
}
// 0x4A2EE0
int CStreamClass::SetSize(int a1, int a2)
{
    if ( !*(unsigned int *)(a1 + 8) )
    WinAPI::Wrapper(-2147467261); /*0x4a2ef1*/
  return (*(int (__stdcall **)(int, int))(*(unsigned int *)a1->CStreamClass_field_0x08 + 32))( /*0x4a2f04*/
           a1->CStreamClass_field_0x08,
           a2);
}
// 0x4A2F10
int CStreamClass::Commit(int a1)
{
    if ( !*(unsigned int *)(a1 + 8) )
    WinAPI::Wrapper(-2147467261); /*0x4a2f21*/
  return (*(int (__stdcall **)(int))(*(unsigned int *)a1->CStreamClass_field_0x08 + 36))(a1->CStreamClass_field_0x08); /*0x4a2f2f*/
}
// 0x4A2F40
int CStreamClass::Revert(int a1, int a2, int a3, int a4, int a5, int a6)
{
    if ( !*(unsigned int *)(a1 + 8) )
    WinAPI::Wrapper(-2147467261); /*0x4a2f51*/
  return (*(int (__stdcall **)(int, int, int, int, int, int))(*(unsigned int *)a1->CStreamClass_field_0x08 + 40))( /*0x4a2f78*/
           a1->CStreamClass_field_0x08,
           a2,
           a3,
           a4,
           a5,
           a6);
}
// 0x4A2F80
int CStreamClass::LockRegion(int a1, int a2, int a3, int a4, int a5, int a6)
{
    if ( !*(unsigned int *)(a1 + 8) )
    WinAPI::Wrapper(-2147467261); /*0x4a2f91*/
  return (*(int (__stdcall **)(int, int, int, int, int, int))(*(unsigned int *)a1->CStreamClass_field_0x08 + 44))( /*0x4a2fb8*/
           a1->CStreamClass_field_0x08,
           a2,
           a3,
           a4,
           a5,
           a6);
}
// 0x4A2FC0
int CStreamClass::UnlockRegion(int a1, int a2, int a3)
{
    if ( !*(unsigned int *)(a1 + 8) )
    WinAPI::Wrapper(-2147467261); /*0x4a2fd1*/
  return (*(int (__stdcall **)(int, int, int))(*(unsigned int *)a1->CStreamClass_field_0x08 + 48))( /*0x4a2fe9*/
           a1->CStreamClass_field_0x08,
           a2,
           a3);
}
// 0x4A2FF0
int CStreamClass::Stat(int a1, int a2)
{
    if ( !*(unsigned int *)(a1 + 8) )
    WinAPI::Wrapper(-2147467261); /*0x4a3001*/
  return (*(int (__stdcall **)(int, int))(*(unsigned int *)a1->CStreamClass_field_0x08 + 52))( /*0x4a3014*/
           a1->CStreamClass_field_0x08,
           a2);
}
// 0x4A3220
int CStreamClass::IStreamQueryInterface(int a1, const void * a2, unsigned int * a3)
{
  return CStreamClass::QueryInterface((CStreamClass *)((char *)a1 - 4), a2, a3);
}
// 0x4A3230
LONG CStreamClass::IStreamAddRef(int a1)
{
  return CStreamClass::AddRef((CStreamClass *)((char *)a1 - 4));
}
// 0x4A3240
LONG CStreamClass::IStreamRelease(int a1)
{
  return CStreamClass::Release((CStreamClass *)((char *)a1 - 4));
}
// 0x4A4B20
namespace gamemd {
int CStreamClass_16::Seek(int a2, void *a1 = 0)
{
    return *(unsigned int *)(*((unsigned int *)this + 4) + 4 * a2);
}
} // namespace gamemd

// 0x4A4B30
namespace gamemd {
char CStreamClass_16::AddRef(int a2)
{
  int m_8; // esi
  int v3; // edx
  unsigned int *v4; // eax
  int v5; // ecx

    v2 = *((unsigned int *)this + 8);
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x4a4b3d*/
  {
    v3 = 0; /*0x4a4b3f*/
    if ( m_8 <= 0 ) /*0x4a4b43*/
      return 1; /*0x4a4b63*/
        v4 = (unsigned int *)*((unsigned int *)this + 4);
    v5 = *(unsigned int *)(a2 + 4) - (unsigned int)v4; /*0x4a4b4b*/
    while ( *v4 == *(unsigned int *)((char *)v4 + v5) ) /*0x4a4b54*/
    {
      ++v3; /*0x4a4b56*/
      ++v4; /*0x4a4b57*/
      if ( v3 >= m_8 ) /*0x4a4b5c*/
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
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x4a4b7c*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x4a4b8c*/
      v4 = a3; /*0x4a4ba2*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x4a4b9e*/
        *((unsigned char *)this + 12) = 1;
    if ( v4 ) /*0x4a4baa*/
    {
            if ( *((unsigned int *)this + 1) )
      {
                v6 = *((unsigned int *)this + 2);
        if ( a2 < m_8 ) /*0x4a4bc1*/
          m_8 = a2; /*0x4a4bc3*/
                for ( i = 0; i < v6; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
          ++i; /*0x4a4bce*/
                if ( *((unsigned char *)this + 13) )
        {
          RA2_OPDEL(*(void **)&this->q004); /*0x4a4be6*/
                    *((unsigned int *)this + 1) = 0;
        }
      }
            *((unsigned int *)this + 1) = v4;
            *((unsigned int *)this + 2) = a2;
            *((unsigned char *)this + 13) = a3 == 0;
      return 1; /*0x4a4c08*/
    }
    else
    {
      return 0; /*0x4a4baf*/
    }
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
    return 1; /*0x4a4c18*/
  }
}
} // namespace gamemd

// 0x4A4C20
namespace gamemd {
int CStreamClass_16::ddtor(int a2, void *a1 = 0)
{
    if ( *((unsigned int *)this + 16) && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(*(void **)&this->q004); /*0x4a4c33*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x4A4C50
namespace gamemd {
int CStreamClass_16::Read(int a2, void *a1 = 0)
{
  int result; // eax
  int m_8; // edx
  unsigned int *i; // ecx

    if ( !*((unsigned char *)this + 48) )
    return 0; /*0x4a4c58*/
    v3 = *((unsigned int *)this + 32);
  result = 0; /*0x4a4c61*/
  if ( m_8 <= 0 ) /*0x4a4c65*/
    return -1; /*0x4a4c7c*/
  for ( i = *(unsigned int **)&this->q004; *i != *a2; ++i ) /*0x4a4c6b*/
  {
    if ( ++result >= m_8 ) /*0x4a4c7a*/
      return -1; /*0x4a4c7a*/
  }
  return result; /*0x4a4c5a*/
}
} // namespace gamemd

// 0x4A4C90
namespace gamemd {
unsigned int CStreamClass_16::Write(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x4a4c97*/
}
} // namespace gamemd

// 0x4A4D90
namespace gamemd {
VectorClass_flat * CStreamClass_16::QueryInterface(char a2)
{
  void ** v3;

  v3 = (unsigned int)(*(void **)&this-((unsigned int *)(>m_1))[3]);
  *(unsigned int *)this->__pad_0 = (void*)&VectorClass__DDSURFACEDESC___vftable; /*0x4a4d96*/
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x4a4da8*/
        *(Block + 1) = 0;
  }
  this->IsAllocated = (gamemd::VectorClass_flat *)(0);
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x4a4dc8*/
    RA2_OPDEL(); /*0x4a4dcb*/
  return this; /*0x4a4dd5*/
}
} // namespace gamemd
