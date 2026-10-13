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
#include "e4/classes/CheckListClass_e4.hpp"

// 0x4A2CD0
namespace gamemd {  // G42.18 ns repair
int CStreamClass::CopyStreamToBuffer(IStream *Src, signed int Size, size_t *a4, int a1, int a2, int a3, int a5, int a6)
{

  IStream *v4; // ebp
  size_t v5; // edi
  signed int v6; // ebx
  int result; // eax
  int CStreamClass_field_0x14; // ecx
  int v9; // eax
  ULONG v10; // [esp+0h] [ebp-10h]

  v4 = a1; /*0x4a2cd2*/
  v5 = a1; /*0x4a2cd8*/
  v6 = a1; /*0x4a2cde*/
  if ( !a1 ) /*0x4a2ce0*/
    return -2147467261; /*0x4a2ceb*/
  if ( a1 < 0 ) /*0x4a2cf0*/
    return -2147024809; /*0x4a2cfb*/
  if ( !a1->Y ) /*0x4a2d02*/
    return -2147467259; /*0x4a2d12*/
  if ( LOBYTE(a1->Height) ) /*0x4a2d15*/
    return -2147467259; /*0x4a2d25*/
  BYTE1(a1->Height) = 1; /*0x4a2d2a*/
  if ( !a1 ) /*0x4a2d2e*/
    return 0; /*0x4a2d2e*/
  if ( a1 ) /*0x4a2d3a*/
    *a1 = 0; /*0x4a2d3c*/
  CStreamClass_field_0x14 = a1->Visible; /*0x4a2d42*/
  if ( CStreamClass_field_0x14 > 0 ) /*0x4a2d47*/
  {
    if ( a1 >= 0x10000 - CStreamClass_field_0x14 ) /*0x4a2d52*/
      v5 = 0x10000 - CStreamClass_field_0x14; /*0x4a2d54*/
    memcpy((void *)(a1->ID + a1->Visible), a1, v5); /*0x4a2d61*/
    v9 = v5 + a1->Visible; /*0x4a2d72*/
    v4 = (IStream *)((char *)a1 + v5); /*0x4a2d74*/
    v6 = a1 - v5; /*0x4a2d76*/
    a1->Visible = v9; /*0x4a2d7d*/
    if ( v9 == 0x10000 ) /*0x4a2d80*/
    {
      result = IStream::Read((IStream *)a1->ID, (void *)0x10000, v10); /*0x4a2d8d*/
      if ( result < 0 ) /*0x4a2d94*/
        return result; /*0x4a2d94*/
      a1->Visible = 0; /*0x4a2d96*/
    }
    v5 = a1; /*0x4a2d9d*/
  }
  if ( v6 < 0x10000 ) /*0x4a2da7*/
  {
LABEL_23:
    if ( v6 > 0 ) /*0x4a2dd4*/
    {
      memcpy((void *)a1->ID, v4, v6); /*0x4a2ddc*/
      v5 = a1; /*0x4a2de1*/
      a1->Visible = v6; /*0x4a2de8*/
    }
    if ( a1 ) /*0x4a2df1*/
      *a1 = v5; /*0x4a2df3*/
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
      v5 = a1; /*0x4a2dce*/
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
  int v5; // eax
  void *v6; // ecx
  void *v7; // edx
  int v8; // eax

  v4 = v3; /*0x4a3112*/
  v5 = *(unsigned int *)(v3 + 8); /*0x4a3116*/
  *(unsigned int *)v3 = &vt_CStreamClass; /*0x4a3119*/
  *(unsigned int *)(v3 + 4) = &vt_CStreamClass; /*0x4a3121*/
  if ( v5 ) /*0x4a3128*/
  {
    if ( *(unsigned char *)(v3 + 17) /*0x4a314b*/
      && *(int *)(v3 + 20) > 0
      && !CStreamClass::IsEmpty((CStreamClass *)(v3 + 8), 0)
      && v4->q014 > 0 )
    {
      IStream::Read(v4->q018, v4->q014, a2); /*0x4a3154*/
    }
    if ( v4->__pad_008 /*0x4a317b*/
      && (*(int (__stdcall **)(unsigned int, unsigned int))(*v4->__pad_008 + 32))(v4->__pad_008, 0) >= 0 )
    {
      if ( !*&v4->__pad_008 ) /*0x4a317d*/
        sub_7DC720(-2147467261); /*0x4a3187*/
      (*(void (__stdcall **)(unsigned int))(*v4->__pad_008 + 8))(v4->__pad_008); /*0x4a3192*/
      v4->__pad_008 = 0; /*0x4a3195*/
    }
  }
  operator delete((void *)(*&v4->q020)); /*0x4a319c*/
  v6 = v4->q018; /*0x4a31a1*/
  v4->q020 = 0; /*0x4a31a4*/
  operator delete((void *)(v6)); /*0x4a31a8*/
  v7 = v4->q01C; /*0x4a31ad*/
  v4->q018 = 0; /*0x4a31b0*/
  operator delete((void *)(v7)); /*0x4a31b4*/
  v4->q01C = 0; /*0x4a31b9*/
  v8 = v4->__pad_008; /*0x4a31bc*/
  if ( v8 ) /*0x4a31c4*/
    (*(void (__stdcall **)(unsigned int))(*(unsigned int *)v8 + 8))(v4->__pad_008); /*0x4a31c9*/
  if ( ((uint8_t)a2 & 1) != 0 ) /*0x4a31d1*/
    operator delete((void *)((void *)v4)); /*0x4a31d4*/
  return (void *)v4; /*0x4a31de*/
}
} // namespace gamemd

// 0x4A2E00
namespace gamemd {  // G42.18c ns repair
int CStreamClass::Read(int a1, int a2, int a3, int a4, int a5)
{
  if ( (*((unsigned char *)&(a1->CStreamClass_field_0x10))) || (((unsigned char *)&(a1->CStreamClass_field_0x10))[1]) ) /*0x4a2e0c*/
    return -2147467259; /*0x4a2e45*/
  if ( !a1->CStreamClass_field_0x08 ) /*0x4a2e13*/
    sub_7DC720(-2147467261); /*0x4a2e1f*/
  return (*(int (__stdcall **)(int, int, int, int, int))(*(unsigned int *)a1->CStreamClass_field_0x08 + 20))( /*0x4a2e41*/
           a1->CStreamClass_field_0x08,
           a2,
           a3,
           a4,
           a5);
}
}  // G42.18c ns repair
// 0x4A2E50
namespace gamemd {  // G42.18c ns repair
int CStreamClass::Write(int a1, int a2, int a3)
{
  if ( (*((unsigned char *)&(a1->CStreamClass_field_0x10))) || (((unsigned char *)&(a1->CStreamClass_field_0x10))[1]) ) /*0x4a2e5c*/
    return -2147467259; /*0x4a2e8b*/
  if ( !a1->CStreamClass_field_0x08 ) /*0x4a2e63*/
    sub_7DC720(-2147467261); /*0x4a2e6f*/
  return (*(int (__stdcall **)(int, int, int))(*(unsigned int *)a1->CStreamClass_field_0x08 + 24))( /*0x4a2e87*/
           a1->CStreamClass_field_0x08,
           a2,
           a3);
}
}  // G42.18c ns repair
// 0x4A2EA0
namespace gamemd {  // G42.18c ns repair
int CStreamClass::Seek(int a1, int a2, int a3, int a4, int a5, int a6)
{
  if ( !a1->CStreamClass_field_0x08 ) /*0x4a2ea5*/
    sub_7DC720(-2147467261); /*0x4a2eb1*/
  return (*(int (__stdcall **)(int, int, int, int, int, int))(*(unsigned int *)a1->CStreamClass_field_0x08 + 28))( /*0x4a2ed8*/
           a1->CStreamClass_field_0x08,
           a2,
           a3,
           a4,
           a5,
           a6);
}
}  // G42.18c ns repair
// 0x4A2EE0
namespace gamemd {  // G42.18c ns repair
int CStreamClass::SetSize(int a1, int a2)
{
  if ( !a1->CStreamClass_field_0x08 ) /*0x4a2ee5*/
    sub_7DC720(-2147467261); /*0x4a2ef1*/
  return (*(int (__stdcall **)(int, int))(*(unsigned int *)a1->CStreamClass_field_0x08 + 32))( /*0x4a2f04*/
           a1->CStreamClass_field_0x08,
           a2);
}
}  // G42.18c ns repair
// 0x4A2F10
namespace gamemd {  // G42.18c ns repair
int CStreamClass::Commit(int a1)
{
  if ( !a1->CStreamClass_field_0x08 ) /*0x4a2f15*/
    sub_7DC720(-2147467261); /*0x4a2f21*/
  return (*(int (__stdcall **)(int))(*(unsigned int *)a1->CStreamClass_field_0x08 + 36))(a1->CStreamClass_field_0x08); /*0x4a2f2f*/
}
}  // G42.18c ns repair
// 0x4A2F40
namespace gamemd {  // G42.18c ns repair
int CStreamClass::Revert(int a1, int a2, int a3, int a4, int a5, int a6)
{
  if ( !a1->CStreamClass_field_0x08 ) /*0x4a2f45*/
    sub_7DC720(-2147467261); /*0x4a2f51*/
  return (*(int (__stdcall **)(int, int, int, int, int, int))(*(unsigned int *)a1->CStreamClass_field_0x08 + 40))( /*0x4a2f78*/
           a1->CStreamClass_field_0x08,
           a2,
           a3,
           a4,
           a5,
           a6);
}
}  // G42.18c ns repair
// 0x4A2F80
namespace gamemd {  // G42.18c ns repair
int CStreamClass::LockRegion(int a1, int a2, int a3, int a4, int a5, int a6)
{
  if ( !a1->CStreamClass_field_0x08 ) /*0x4a2f85*/
    sub_7DC720(-2147467261); /*0x4a2f91*/
  return (*(int (__stdcall **)(int, int, int, int, int, int))(*(unsigned int *)a1->CStreamClass_field_0x08 + 44))( /*0x4a2fb8*/
           a1->CStreamClass_field_0x08,
           a2,
           a3,
           a4,
           a5,
           a6);
}
}  // G42.18c ns repair
// 0x4A2FC0
namespace gamemd {  // G42.18c ns repair
int CStreamClass::UnlockRegion(int a1, int a2, int a3)
{
  if ( !a1->CStreamClass_field_0x08 ) /*0x4a2fc5*/
    sub_7DC720(-2147467261); /*0x4a2fd1*/
  return (*(int (__stdcall **)(int, int, int))(*(unsigned int *)a1->CStreamClass_field_0x08 + 48))( /*0x4a2fe9*/
           a1->CStreamClass_field_0x08,
           a2,
           a3);
}
}  // G42.18c ns repair
// 0x4A2FF0
namespace gamemd {  // G42.18c ns repair
int CStreamClass::Stat(int a1, int a2)
{
  if ( !a1->CStreamClass_field_0x08 ) /*0x4a2ff5*/
    sub_7DC720(-2147467261); /*0x4a3001*/
  return (*(int (__stdcall **)(int, int))(*(unsigned int *)a1->CStreamClass_field_0x08 + 52))( /*0x4a3014*/
           a1->CStreamClass_field_0x08,
           a2);
}
}  // G42.18c ns repair
// 0x4A3220
namespace gamemd {  // G42.18c ns repair
int CStreamClass::IStreamQueryInterface(int a1, const void * a2, unsigned int * a3)
{
  return CStreamClass::QueryInterface((CStreamClass *)((char *)a1 - 4), a2, a3);
}
}  // G42.18c ns repair
// 0x4A3230
namespace gamemd {  // G42.18c ns repair
LONG CStreamClass::IStreamAddRef(int a1)
{
  return CStreamClass::AddRef((CStreamClass *)((char *)a1 - 4));
}
}  // G42.18c ns repair
// 0x4A3240
namespace gamemd {  // G42.18c ns repair
LONG CStreamClass::IStreamRelease(int a1)
{
  return CStreamClass::Release((CStreamClass *)((char *)a1 - 4));
}
}  // G42.18c ns repair
// 0x4A4B20
namespace gamemd {
int CStreamClass_16::Seek(int a2, void *a2_2, void *a3_1)
{
  return *(unsigned int *)(*&this->q004 + 4 * a2); /*0x4a4b2a*/
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

  m_8 = this->m_8; /*0x4a4b32*/
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x4a4b3d*/
  {
    v3 = 0; /*0x4a4b3f*/
    if ( m_8 <= 0 ) /*0x4a4b43*/
      return 1; /*0x4a4b63*/
    v4 = *&this->q004; /*0x4a4b45*/
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
    LOBYTE(this->m_C) = 0; /*0x4a4b86*/
    if ( a3 ) /*0x4a4b8c*/
      v4 = a3; /*0x4a4ba2*/
    else
      v4 = (unsigned int *)__2_YAPAXI_Z(4 * a2); /*0x4a4b9e*/
    LOBYTE(this->m_C) = 1; /*0x4a4ba6*/
    if ( v4 ) /*0x4a4baa*/
    {
      if ( *&this->q004 ) /*0x4a4bb5*/
      {
        m_8 = this->m_8; /*0x4a4bbc*/
        if ( a2 < m_8 ) /*0x4a4bc1*/
          m_8 = a2; /*0x4a4bc3*/
        for ( i = 0; i < m_8; v4[i - 1] = *(unsigned int *)(*&this->q004 + 4 * i - 4) ) /*0x4a4bc9*/
          ++i; /*0x4a4bce*/
        if ( BYTE1(this->m_C) ) /*0x4a4bdb*/
        {
          __3_YAXPAX_Z(*&this->q004); /*0x4a4be6*/
          *&this->q004 = 0; /*0x4a4bee*/
        }
      }
      *&this->q004 = v4; /*0x4a4bf7*/
      this->m_8 = a2; /*0x4a4bff*/
      BYTE1(this->m_C) = a3 == 0; /*0x4a4c02*/
      return 1; /*0x4a4c08*/
    }
    else
    {
      return 0; /*0x4a4baf*/
    }
  }
  else
  {
    (*(void (**)(_VectorClass_PAU_DDSURFACEDESC *))(*(unsigned int *)this->__pad_000 + 12))(this); /*0x4a4c12*/
    return 1; /*0x4a4c18*/
  }

}
} // namespace gamemd

// 0x4A4C20
namespace gamemd {
int CStreamClass_16::ddtor()
{
  if ( *&this->IsAllocated && (((unsigned char *)&(*&this->IsAllocated))[1]) ) /*0x4a4c2d*/
  {
    operator delete((void *)(*&this->q004)); /*0x4a4c33*/
    *&this->q004 = 0; /*0x4a4c3b*/
  }
  (((unsigned char *)&(*&this->m_C))[1]) = 0; /*0x4a4c3e*/
  this->m_8 = 0; /*0x4a4c41*/
}
} // namespace gamemd

// 0x4A4C50
namespace gamemd {
int CStreamClass_16::Read(unsigned int * a2, void *a2_2)
{
  int result; // eax
  int m_8; // edx
  unsigned int *i; // ecx

  if ( !(*((unsigned char *)&(*(unsigned int *)&a2_2->q00C))) ) /*0x4a4c50*/
    return 0; /*0x4a4c58*/
  m_8 = a2_2->q008; /*0x4a4c5e*/
  result = 0; /*0x4a4c61*/
  if ( m_8 <= 0 ) /*0x4a4c65*/
    return -1; /*0x4a4c7c*/
  for ( i = *(unsigned int **)&a2_2->q004; *(unsigned int)(i) != *(unsigned int *)(a2_2); ++i ) /*0x4a4c6b*/
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
  if ( (*((unsigned char *)&(*&this->m_C))) ) /*0x4a4c90*/
    return (unsigned int)(a2 - *&this->q004) >> 2; /*0x4a4ca5*/
  else
    return 0; /*0x4a4c97*/
}
} // namespace gamemd

// 0x4A4D90
namespace gamemd {
VectorClass_flat * CStreamClass_16::QueryInterface(unsigned int * Block, char a2)
{
  void *v3; // eax

  v3 = *&Block->__pad_004; /*0x4a4d93*/
  *(unsigned int *)Block->tail_0 = &vt_VectorClass; /*0x4a4d96*/
  if ( v3 && (((unsigned char *)&(*&Block->u32_D))[1]) ) /*0x4a4da0*/
  {
    operator delete((void *)(v3)); /*0x4a4da8*/
    *&Block->__pad_004 = 0; /*0x4a4db0*/
  }
  (((unsigned char *)&(*&Block->u32_C))[1]) = 0; /*0x4a4dbb*/
  Block->u32_8 = 0; /*0x4a4dc1*/
  if ( (a2 & 1) != 0 ) /*0x4a4dc8*/
    operator delete((void *)(Block)); /*0x4a4dcb*/
  return Block->tail_0; /*0x4a4dd5*/
}
} // namespace gamemd
