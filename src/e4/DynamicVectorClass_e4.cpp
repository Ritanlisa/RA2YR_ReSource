// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/DynamicVectorClass_AnimType_e4.hpp"
#include "e4/classes/DynamicVectorClass_PAD_16_e4.hpp"
#include "e4/classes/DynamicVectorClass_PAD_e4.hpp"
#include "e4/classes/DynamicVectorClass_SubzoneConn_e4.hpp"
#include "e4/classes/DynamicVectorClass_UHashObject_HashString__ptr_SchemeNode_e4.hpp"
#include "e4/classes/DynamicVectorClass_cptr_AnimTypeClass_e4.hpp"
#include "e4/classes/DynamicVectorClass_cptr_VoxelAnimTypeClass_e4.hpp"
#include "e4/classes/DynamicVectorClass_ptr_NodeNameType_e4.hpp"
#include "e4/classes/DynamicVectorClass_uint_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/DynamicVectorClass_flat_e4.hpp"
#include "e4/classes/AnimClass_e4.hpp"
#include "e4/classes/Byte_e4.hpp"
#include "e4/classes/CCINIClass_e4.hpp"
#include "e4/classes/Return_e4.hpp"
#include "e4/classes/DroppodLocomotionClass_e4.hpp"
#include "e4/classes/DynamicVector_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/Count_e4.hpp"
#include "e4/classes/BulletClass_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/VectorClass_flat_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"

// 0x525110
namespace gamemd {
AbstractClass * * DynamicVectorClass_AnimType::Release(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x52511c*/
  {
    IDA_LOBYTE(this->m_C) = 0; /*0x525126*/
    if ( a3 ) /*0x52512c*/
      v4 = a3; /*0x525142*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x52513e*/
    IDA_LOBYTE(this->m_C) = 1; /*0x525146*/
    if ( v4 ) /*0x52514a*/
    {
      if ( *(unsigned int *)&this->m_1[3] ) /*0x525155*/
      {
        m_8 = this->m_8; /*0x52515c*/
        if ( a2 < m_8 ) /*0x525161*/
          m_8 = a2; /*0x525163*/
        for ( i = 0; i < m_8; v4[i - 1] = *(unsigned int *)(*(unsigned int *)&this->m_1[3] + 4 * i - 4) ) /*0x525169*/
          ++i; /*0x52516e*/
        if ( IDA_BYTE1(this->m_C) ) /*0x52517b*/
        {
          RA2_OPDEL(*(void **)&this->m_1[3]); /*0x525186*/
          *(unsigned int *)&this->m_1[3] = 0; /*0x52518e*/
        }
      }
      *(unsigned int *)&this->m_1[3] = v4; /*0x525197*/
      this->m_8 = a2; /*0x52519f*/
      IDA_BYTE1(this->m_C) = a3 == 0; /*0x5251a2*/
      return 1; /*0x5251a8*/
    }
    else
    {
      return 0; /*0x52514f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_PBVAnimTypeClass *))(*(unsigned int *)this->__pad_0 + 12))(this); /*0x5251b2*/
    return 1; /*0x5251b8*/
  }
}
}
// 0x589190
namespace gamemd {
AbstractClass * * DynamicVectorClass_SubzoneConn::Release(int a2, char * a3)
{
  int v3; // ebp
  char *v5; // edi
  void * v6;
  void * v7;
  char *v9; // eax
  int v11; // edx
  int v12; // ecx
  int v13; // eax
  unsigned int *v14; // ebx
  int v15; // eax

  v3 = a2; /*0x589192*/
  if ( a2 ) /*0x58919e*/
  {
    v5 = a3; /*0x5891a4*/
    IDA_LOBYTE(this->m_C) = 0; /*0x5891a8*/
    if ( a3 ) /*0x5891ad*/
    {
      v9 = a3; /*0x5891e3*/
      if ( a2 - 1 >= 0 ) /*0x5891e7*/
      {
        a2 = a2; /*0x5891e9*/
        do /*0x5891f3*/
        {
          *(unsigned int *)v9 = 0; /*0x5891ea*/
          v9[4] = 0; /*0x5891ec*/
          v9 += 8; /*0x5891ef*/
          --a2; /*0x5891f2*/
        }
        while ( a2 ); /*0x5891f3*/
      }
    }
    else
    {
      v6 = (void *)((int)(RA2_OPNEW(8 * a2)));
      if ( v6 ) /*0x5891c1*/
      {
        v7 = (void *)((int)(v6));
        if ( a2 - 1 >= 0 ) /*0x5891ca*/
        {
          a2 = a2; /*0x5891cc*/
          do /*0x5891d6*/
          {
            *(unsigned int *)v7 = 0; /*0x5891cd*/
            v7->vtable2 = 0; /*0x5891cf*/
            v7 += 8; /*0x5891d2*/
            --a2; /*0x5891d5*/
          }
          while ( a2 ); /*0x5891d6*/
        }
        v5 = (char *)v6; /*0x5891d8*/
      }
      else
      {
        v5 = 0; /*0x5891dc*/
      }
    }
    IDA_LOBYTE(this->m_C) = 1; /*0x5891f7*/
    if ( !v5 ) /*0x5891fb*/
      return 0; /*0x589284*/
    if ( *(unsigned int *)&this->m_1[3] ) /*0x589201*/
    {
      v11 = *(unsigned int *)&this->__pad_5[3]; /*0x589206*/
      if ( a2 < v11 ) /*0x58920b*/
        v11 = a2; /*0x58920d*/
      v12 = 0; /*0x58920f*/
      if ( v11 > 0 ) /*0x589213*/
      {
        do /*0x589232*/
        {
          v13 = 8 * v12; /*0x589218*/
          v14 = (unsigned int *)(*(unsigned int *)&this->m_1[3] + 8 * v12++); /*0x589221*/
          *(unsigned int *)&v5[v13] = *v14; /*0x589228*/
          *(unsigned int *)&v5[v13 + 4] = v14[1]; /*0x58922e*/
        }
        while ( v12 < v11 ); /*0x589232*/
        v3 = a2; /*0x589234*/
      }
      if ( IDA_BYTE1(this->m_C) ) /*0x58923a*/
      {
        RA2_OPDEL(*(void **)&this->m_1[3]); /*0x589243*/
        *(unsigned int *)&this->m_1[3] = 0; /*0x58924b*/
      }
    }
    *(unsigned int *)&this->m_1[3] = v5; /*0x589256*/
    *(unsigned int *)&this->__pad_5[3] = v3; /*0x58925c*/
    IDA_BYTE1(this->m_C) = a3 == 0; /*0x58925f*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_USubzoneConnectionStruct *))(*(unsigned int *)this->__pad_0 + 12))(this); /*0x589268*/
  }
  v15 = *(unsigned int *)&this->__pad_5[3]; /*0x58926b*/
  if ( v15 < *(unsigned int *)this->__tail_10 ) /*0x589273*/
    *(unsigned int *)this->__tail_10 = v15; /*0x589275*/
  return 1; /*0x589278*/
}
}
// 0x517590
namespace gamemd {
int DynamicVectorClass_UHashObject_HashString__ptr_SchemeNode::HashEntryCompare(unsigned char * a2)
{
  return this->__pad_0[0] != *a2 || this->__pad_0[1] != a2[1] || this->__pad_0[2] != a2[2]; /*0x5175bd*/
}
}
// 0x6284A0
namespace gamemd {
AbstractClass * * DynamicVectorClass_UHashObject_HashString__ptr_SchemeNode::SetCapacity_0(int a2, char * a3)
{
  int v3; // ebp
  char *v5; // edi
  void * v6;
  unsigned char *v7; // ecx
  int v8; // edx
  char *v9; // eax
  int v10; // ecx
  int m_8; // ecx
  int v12; // eax
  int v13; // edx
  char *v14; // ebx
  int v15; // eax

  v3 = a2; /*0x6284a2*/
  if ( a2 ) /*0x6284ae*/
  {
    v5 = a3; /*0x6284b4*/
    IDA_LOBYTE(this->m_C) = 0; /*0x6284b8*/
    if ( a3 ) /*0x6284bd*/
    {
      if ( a2 - 1 >= 0 ) /*0x6284f6*/
      {
        v9 = a3 + 2; /*0x6284f8*/
        v10 = a2; /*0x6284fb*/
        do /*0x628508*/
        {
          *(v9 - 2) = 0; /*0x6284fc*/
          *(v9 - 1) = 0; /*0x6284ff*/
          *v9 = 0; /*0x628502*/
          v9 += 3; /*0x628504*/
          --v10; /*0x628507*/
        }
        while ( v10 ); /*0x628508*/
      }
    }
    else
    {
      v6 = (void *)((int)(RA2_OPNEW(3 * a2)));
      if ( v6 ) /*0x6284ce*/
      {
        if ( a2 - 1 >= 0 ) /*0x6284d5*/
        {
          v7 = (unsigned char *)(v6 + 2); /*0x6284d7*/
          v8 = a2; /*0x6284da*/
          do /*0x6284e7*/
          {
            *(v7 - 2) = 0; /*0x6284db*/
            *(v7 - 1) = 0; /*0x6284de*/
            *v7 = 0; /*0x6284e1*/
            v7 += 3; /*0x6284e3*/
            --v8; /*0x6284e6*/
          }
          while ( v8 ); /*0x6284e7*/
        }
        v5 = (char *)v6; /*0x6284e9*/
      }
      else
      {
        v5 = 0; /*0x6284ed*/
      }
    }
    IDA_LOBYTE(this->m_C) = 1; /*0x62850c*/
    if ( !v5 ) /*0x628510*/
      return 0; /*0x628592*/
    if ( *(unsigned int *)&this->m_1[3] ) /*0x628512*/
    {
      m_8 = this->m_8; /*0x628517*/
      if ( a2 < m_8 ) /*0x62851c*/
        m_8 = a2; /*0x62851e*/
      if ( m_8 > 0 ) /*0x628522*/
      {
        v12 = 0; /*0x628524*/
        do /*0x628540*/
        {
          v13 = *(unsigned int *)&this->m_1[3] + v12; /*0x62852b*/
          v14 = &v5[v12]; /*0x62852d*/
          v12 += 3; /*0x628530*/
          --m_8; /*0x628533*/
          *(unsigned short *)v14 = *(unsigned short *)v13; /*0x628537*/
          v14[2] = *(unsigned char *)(v13 + 2); /*0x62853d*/
        }
        while ( m_8 ); /*0x628540*/
        v3 = a2; /*0x628542*/
      }
      if ( IDA_BYTE1(this->m_C) ) /*0x628548*/
      {
        RA2_OPDEL(*(void **)&this->m_1[3]); /*0x628551*/
        *(unsigned int *)&this->m_1[3] = 0; /*0x628559*/
      }
    }
    *(unsigned int *)&this->m_1[3] = v5; /*0x628564*/
    this->m_8 = v3; /*0x62856a*/
    IDA_BYTE1(this->m_C) = a3 == 0; /*0x62856d*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_VHSVClass *))(*(unsigned int *)this->__pad_0 + 12))(this); /*0x628576*/
  }
  v15 = this->m_8; /*0x628579*/
  if ( v15 < this->m_10 ) /*0x628581*/
    this->m_10 = v15; /*0x628583*/
  return 1; /*0x628586*/
}
}
// 0x628BB0
namespace gamemd {
AbstractClass * * DynamicVectorClass_UHashObject_HashString__ptr_SchemeNode::Remove(CCINIClass * aP1, unsigned char * a2)
{
  CCINIClass * v3;
  Byte *v5; // esi
  int v6; // ebx
  Byte *v7; // esi
  CCINIClass * v8;
  CCINIClass * m_8;
  int v10; // ebx
  char *v11; // edi
  int v12; // esi
  int v13; // eax
  CCINIClass * v15;
  char *v16; // [esp+10h] [ebp-8h]
  CCINIClass * v17;

  v3 = (gamemd::CCINIClass *)((int)(aP1));
  if ( aP1 ) /*0x628bbf*/
  {
    v5 = (Byte *)a2; /*0x628bc5*/
    IDA_LOBYTE(this->m_C) = 0; /*0x628bc9*/
    if ( a2 ) /*0x628bcf*/
    {
      if ( aP1 - 1 >= 0 ) /*0x628c25*/
      {
        v8 = (gamemd::CCINIClass *)((int)(aP1));
        do /*0x628c38*/
        {
          Byte::Zero(v5); /*0x628c2c*/
          v5 += 65; /*0x628c31*/
          --v8; /*0x628c37*/
        }
        while ( v8 ); /*0x628c38*/
      }
      v16 = (char *)(a2);
    }
    else
    {
      v6 = RA2_OPNEW(260 * aP1); /*0x628be1*/
      if ( v6 ) /*0x628be8*/
      {
        v7 = (Byte *)v6; /*0x628bed*/
        if ( aP1 - 1 >= 0 ) /*0x628bf1*/
        {
          v15 = (gamemd::CCINIClass *)((int)(aP1));
          do /*0x628c0e*/
          {
            Byte::Zero(v7); /*0x628bfa*/
            v7 += 65; /*0x628c03*/
            --v15; /*0x628c0a*/
          }
          while ( v15 ); /*0x628c0e*/
        }
        v16 = (char *)v6; /*0x628c10*/
      }
      else
      {
        v16 = 0; /*0x628c16*/
      }
    }
    IDA_LOBYTE(this->m_C) = 1; /*0x628c46*/
    if ( !v16 ) /*0x628c4c*/
      return 0; /*0x628cfa*/
    if ( *(unsigned int *)&this->m_1[3] ) /*0x628c52*/
    {
      m_8 = (gamemd::CCINIClass *)((int)(this->m_8));
      if ( aP1 < m_8 ) /*0x628c5e*/
        m_8 = aP1; /*0x628c60*/
      if ( m_8 > 0 ) /*0x628c64*/
      {
        v10 = (int)(0);
        v11 = v16; /*0x628c68*/
        v17 = m_8; /*0x628c6a*/
        do /*0x628c9c*/
        {
          v12 = v10 + *(unsigned int *)&this->m_1[3]; /*0x628c73*/
          String::CopyChecked(v11, (const char *)v12); /*0x628c76*/
          *((unsigned int *)v11 + 64) = *(unsigned int *)(v12 + 256); /*0x628c85*/
          v10 += 260; /*0x628c8b*/
          v11 += 260; /*0x628c91*/
          --v17; /*0x628c98*/
        }
        while ( v17 ); /*0x628c9c*/
        v3 = aP1; /*0x628c9e*/
      }
      if ( IDA_BYTE1(this->m_C) ) /*0x628ca2*/
      {
        RA2_OPDEL(*(void **)&this->m_1[3]); /*0x628cad*/
        *(unsigned int *)&this->m_1[3] = 0; /*0x628cb5*/
      }
    }
    *(unsigned int *)&this->m_1[3] = v16; /*0x628cc2*/
    this->m_8 = v3; /*0x628cce*/
    IDA_BYTE1(this->m_C) = a2 == 0; /*0x628cd1*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_U_HashObject_VHashString_PAVSchemeNode *))(*(unsigned int *)this->__pad_0 + 12))(this); /*0x628cdb*/
  }
  v13 = this->m_8; /*0x628cde*/
  if ( v13 < this->m_10 ) /*0x628ce6*/
    this->m_10 = v13; /*0x628ce8*/
  return 1; /*0x628ceb*/
}
}
// 0x42D540
namespace gamemd {
void DynamicVectorClass_uint::ddtor()
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x42d546*/
  this->m_10 = 0; /*0x42d549*/
  if ( v2 && IDA_BYTE1(this->m_C) ) /*0x42d550*/
  {
    RA2_OPDEL(v2); /*0x42d556*/
    *(unsigned int *)&this->m_1[3] = 0; /*0x42d55e*/
  }
  IDA_BYTE1(this->m_C) = 0; /*0x42d561*/
  this->m_8 = 0; /*0x42d564*/
}
} // namespace gamemd

// 0x42D590
namespace gamemd {
int DynamicVectorClass_uint::Clear(int a2)
{
  return *(unsigned int *)(*(unsigned int *)&this->m_1[3] + 4 * a2); /*0x42d59a*/
}
} // namespace gamemd

// 0x42D600
namespace gamemd {
char DynamicVectorClass_uint::AddRef(int a2)
{
  int m_8; // esi
  int v3; // edx
  unsigned int *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x42d602*/
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x42d60d*/
  {
    v3 = 0; /*0x42d60f*/
    if ( m_8 <= 0 ) /*0x42d613*/
      return 1; /*0x42d633*/
    v4 = *(unsigned int **)&this->m_1[3]; /*0x42d615*/
    v5 = *(unsigned int *)(a2 + 4) - (unsigned int)v4; /*0x42d61b*/
    while ( *v4 == *(unsigned int *)((char *)v4 + v5) ) /*0x42d624*/
    {
      ++v3; /*0x42d626*/
      ++v4; /*0x42d627*/
      if ( v3 >= m_8 ) /*0x42d62c*/
        return 1; /*0x42d62c*/
    }
  }
  return 0; /*0x42d62e*/
}
} // namespace gamemd

// 0x42D640
namespace gamemd {
char DynamicVectorClass_uint::SetCapacity(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x42d64c*/
  {
    IDA_LOBYTE(this->m_C) = 0; /*0x42d656*/
    if ( a3 ) /*0x42d65c*/
      v4 = a3; /*0x42d672*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x42d66e*/
    IDA_LOBYTE(this->m_C) = 1; /*0x42d676*/
    if ( v4 ) /*0x42d67a*/
    {
      if ( *(unsigned int *)&this->m_1[3] ) /*0x42d685*/
      {
        m_8 = this->m_8; /*0x42d68c*/
        if ( a2 < m_8 ) /*0x42d691*/
          m_8 = a2; /*0x42d693*/
        for ( i = 0; i < m_8; v4[i - 1] = *(unsigned int *)(*(unsigned int *)&this->m_1[3] + 4 * i - 4) ) /*0x42d699*/
          ++i; /*0x42d69e*/
        if ( IDA_BYTE1(this->m_C) ) /*0x42d6ab*/
        {
          RA2_OPDEL(*(void **)&this->m_1[3]); /*0x42d6b6*/
          *(unsigned int *)&this->m_1[3] = 0; /*0x42d6be*/
        }
      }
      *(unsigned int *)&this->m_1[3] = v4; /*0x42d6c7*/
      this->m_8 = a2; /*0x42d6cf*/
      IDA_BYTE1(this->m_C) = a3 == 0; /*0x42d6d2*/
      return 1; /*0x42d6d8*/
    }
    else
    {
      return 0; /*0x42d67f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_I *))(*(unsigned int *)this->__pad_0 + 12))(this); /*0x42d6e2*/
    return 1; /*0x42d6e8*/
  }
}
} // namespace gamemd

// 0x42D6F0
namespace gamemd {
void DynamicVectorClass_uint::Clear_0()
{
  if ( *(unsigned int *)&this->m_1[3] && IDA_BYTE1(this->m_C) ) /*0x42d6fd*/
  {
    RA2_OPDEL(*(void **)&this->m_1[3]); /*0x42d703*/
    *(unsigned int *)&this->m_1[3] = 0; /*0x42d70b*/
  }
  IDA_BYTE1(this->m_C) = 0; /*0x42d70e*/
  this->m_8 = 0; /*0x42d711*/
}
} // namespace gamemd

// 0x42D720
namespace gamemd {
int DynamicVectorClass_uint::FindItemIndex(unsigned int * a2)
{
  int result; // eax
  int m_8; // edx
  unsigned int *i; // ecx

  if ( !IDA_LOBYTE(this->m_C) ) /*0x42d720*/
    return 0; /*0x42d728*/
  m_8 = this->m_8; /*0x42d72e*/
  result = 0; /*0x42d731*/
  if ( m_8 <= 0 ) /*0x42d735*/
    return -1; /*0x42d74c*/
  for ( i = *(unsigned int **)&this->m_1[3]; *i != *a2; ++i ) /*0x42d73b*/
  {
    if ( ++result >= m_8 ) /*0x42d74a*/
      return -1; /*0x42d74a*/
  }
  return result; /*0x42d72a*/
}
} // namespace gamemd

// 0x42D760
namespace gamemd {
unsigned int DynamicVectorClass_uint::GetCapacity(int a2)
{
  if ( IDA_LOBYTE(this->m_C) ) /*0x42d760*/
    return (unsigned int)(a2 - *(unsigned int *)&this->m_1[3]) >> 2; /*0x42d775*/
  else
    return 0; /*0x42d767*/
}
} // namespace gamemd

// 0x42D780
namespace gamemd {
char DynamicVectorClass_uint::Remove(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x42d78c*/
  {
    IDA_LOBYTE(this->m_C) = 0; /*0x42d792*/
    if ( a3 ) /*0x42d798*/
      v4 = a3; /*0x42d7ae*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x42d7aa*/
    IDA_LOBYTE(this->m_C) = 1; /*0x42d7b2*/
    if ( !v4 ) /*0x42d7b6*/
      return 0; /*0x42d82a*/
    if ( *(unsigned int *)&this->m_1[3] ) /*0x42d7b8*/
    {
      m_8 = this->m_8; /*0x42d7bf*/
      if ( a2 < m_8 ) /*0x42d7c4*/
        m_8 = a2; /*0x42d7c6*/
      for ( i = 0; i < m_8; v4[i - 1] = *(unsigned int *)(*(unsigned int *)&this->m_1[3] + 4 * i - 4) ) /*0x42d7cc*/
        ++i; /*0x42d7d1*/
      if ( IDA_BYTE1(this->m_C) ) /*0x42d7de*/
      {
        RA2_OPDEL(*(void **)&this->m_1[3]); /*0x42d7e9*/
        *(unsigned int *)&this->m_1[3] = 0; /*0x42d7f1*/
      }
    }
    *(unsigned int *)&this->m_1[3] = v4; /*0x42d7fa*/
    this->m_8 = a2; /*0x42d802*/
    IDA_BYTE1(this->m_C) = a3 == 0; /*0x42d805*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_I *))(*(unsigned int *)this->__pad_0 + 12))(this); /*0x42d80e*/
  }
  v7 = this->m_8; /*0x42d811*/
  if ( v7 < this->m_10 ) /*0x42d819*/
    this->m_10 = v7; /*0x42d81b*/
  return 1; /*0x42d81e*/
}
} // namespace gamemd

// 0x42D880
namespace gamemd {
int DynamicVectorClass_uint::GetSize(unsigned int * a2)
{
  int m_10; // edx
  int result; // eax
  unsigned int *i; // ecx

  m_10 = this->m_10; /*0x42d880*/
  result = 0; /*0x42d883*/
  if ( m_10 <= 0 ) /*0x42d888*/
    return -1; /*0x42d89f*/
  for ( i = *(unsigned int **)&this->m_1[3]; *i != *a2; ++i ) /*0x42d88e*/
  {
    if ( ++result >= m_10 ) /*0x42d89d*/
      return -1; /*0x42d89d*/
  }
  return result; /*0x42d8a2*/
}
}
// 0x42DB10
namespace gamemd {
VectorClass_flat * DynamicVectorClass_uint::Destructor(char a2)
{
  void *v3; // eax

  v3 = (unsigned int)(*(void **)&this->m_1[3]);
  *(unsigned int *)this->__pad_0 = (void*)&VectorClass_unsigned_int_vftable; /*0x42db16*/
  if ( v3 && IDA_BYTE1(this->m_C) ) /*0x42db20*/
  {
    RA2_OPDEL(v3); /*0x42db28*/
    *(unsigned int *)&this->m_1[3] = 0; /*0x42db30*/
  }
  IDA_BYTE1(this->m_C) = 0; /*0x42db3b*/
  this->m_8 = 0; /*0x42db41*/
  if ( (a2 & 1) != 0 ) /*0x42db48*/
    RA2_OPDEL(); /*0x42db4b*/
  return this->__pad_0; /*0x42db55*/
}
} // namespace gamemd

// 0x42DB60
namespace gamemd {
DynamicVectorClass_uint * DynamicVectorClass_uint::Add(char a2)
{
  void *v3; // eax

  v3 = (unsigned int)(*(void **)&this->m_1[3]);
  *(unsigned int *)this->__pad_0 = (void*)&VectorClass_unsigned_int_vftable; /*0x42db66*/
  if ( v3 && IDA_BYTE1(this->m_C) ) /*0x42db70*/
  {
    RA2_OPDEL(v3); /*0x42db78*/
    *(unsigned int *)&this->m_1[3] = 0; /*0x42db80*/
  }
  IDA_BYTE1(this->m_C) = 0; /*0x42db8b*/
  this->m_8 = 0; /*0x42db91*/
  if ( (a2 & 1) != 0 ) /*0x42db98*/
    RA2_OPDEL(); /*0x42db9b*/
  return this->__pad_0; /*0x42dba5*/
}
} // namespace gamemd

// 0x4779E0
unsigned int * DynamicVectorClass_flat::Copy(DynamicVector * aP1)
{
  int v3; // eax
  int v4; // eax
  int v5; // ecx
  int v6; // eax

  *(unsigned int *)&this->?[3] = 0; /*0x4779ed*/
  *(unsigned int *)&this->?[3] = 0; /*0x4779f0*/
  IDA_LOBYTE(this->?) = 1; /*0x4779f3*/
  IDA_BYTE1(this->?) = 0; /*0x4779f7*/
  *(unsigned int *)this->VectorClass = (void*)&VectorClass_int_vftable; /*0x4779fa*/
  if ( this != (DynamicVectorClass *)aP1 ) /*0x477a00*/
  {
    VectorClass::Destroy(); /*0x477a02*/
    v3 = aP1[2]; /*0x477a08*/
    *(unsigned int *)&this->?[3] = v3; /*0x477a0d*/
    if ( v3 ) /*0x477a10*/
    {
      v4 = RA2_OPNEW(4 * v3); /*0x477a16*/
      *(unsigned int *)&this->?[3] = v4; /*0x477a20*/
      if ( v4 ) /*0x477a23*/
      {
        v5 = *(unsigned int *)&this->?[3]; /*0x477a25*/
        v6 = 0; /*0x477a28*/
        IDA_BYTE1(this->?) = 1; /*0x477a2c*/
        if ( v5 > 0 ) /*0x477a30*/
        {
          do /*0x477a44*/
          {
            *(unsigned int *)(*(unsigned int *)&this->?[3] + 4 * v6) = *(unsigned int *)(aP1[1] + 4 * v6); /*0x477a3b*/
            ++v6; /*0x477a41*/
          }
          while ( v6 < *(unsigned int *)&this->?[3] ); /*0x477a44*/
        }
      }
    }
    else
    {
      *(unsigned int *)&this->?[3] = 0; /*0x477a48*/
      IDA_BYTE1(this->?) = 0; /*0x477a4b*/
    }
  }
  this->Count = aP1[4]; /*0x477a51*/
  this->CapacityIncrement = aP1[5]; /*0x477a57*/
  *(unsigned int *)this->VectorClass = (void*)&DynamicVectorClass_int_vftable; /*0x477a5a*/
  return this->VectorClass; /*0x477a62*/
}
// 0x477DB0
unsigned int * DynamicVectorClass_flat::Construct(int a2, int a3)
{
  *(unsigned int *)&this->?[3] = 0; /*0x477db9*/
  *(unsigned int *)&this->?[3] = a2; /*0x477dc0*/
  IDA_LOBYTE(this->?) = 1; /*0x477dc3*/
  IDA_BYTE1(this->?) = 0; /*0x477dc7*/
  *(unsigned int *)this->VectorClass = (void*)&VectorClass_int_vftable; /*0x477dcb*/
  if ( a2 ) /*0x477dd1*/
  {
    if ( a3 ) /*0x477dd9*/
    {
      *(unsigned int *)&this->?[3] = a3; /*0x477ddb*/
    }
    else
    {
      *(unsigned int *)&this->?[3] = RA2_OPNEW(4 * a2); /*0x477dec*/
      IDA_BYTE1(this->?) = 1; /*0x477def*/
    }
  }
  *(unsigned int *)this->VectorClass = (void*)&DynamicVectorClass_int_vftable; /*0x477df3*/
  this->CapacityIncrement = 10; /*0x477df9*/
  this->Count = 0; /*0x477e00*/
  return this->VectorClass; /*0x477e09*/
}
// 0x49E950
namespace gamemd {
void DynamicVectorClass_PAD::ddtor()
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x49e956*/
  this->m_10 = 0; /*0x49e959*/
  if ( v2 && IDA_BYTE1(this->m_C) ) /*0x49e960*/
  {
    RA2_OPDEL(v2); /*0x49e966*/
    *(unsigned int *)&this->m_1[3] = 0; /*0x49e96e*/
  }
  IDA_BYTE1(this->m_C) = 0; /*0x49e971*/
  this->m_8 = 0; /*0x49e974*/
}
} // namespace gamemd

// 0x49E980
namespace gamemd {
unsigned int DynamicVectorClass_PAD::Get(int a2)
{
  if ( IDA_LOBYTE(this->m_C) ) /*0x49e980*/
    return (unsigned int)(a2 - *(unsigned int *)&this->m_1[3]) >> 2; /*0x49e995*/
  else
    return 0; /*0x49e987*/
}
} // namespace gamemd

// 0x49E9A0
namespace gamemd {
int DynamicVectorClass_PAD::Clear(int a2)
{
  return *(unsigned int *)(*(unsigned int *)&this->m_1[3] + 4 * a2); /*0x49e9aa*/
}
} // namespace gamemd

// 0x49E9B0
namespace gamemd {
void DynamicVectorClass_PAD::Clear_49E9B0()
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x49e9b6*/
  this->m_10 = 0; /*0x49e9b9*/
  if ( v2 && IDA_BYTE1(this->m_C) ) /*0x49e9c0*/
  {
    RA2_OPDEL(v2); /*0x49e9c6*/
    *(unsigned int *)&this->m_1[3] = 0; /*0x49e9ce*/
  }
  IDA_BYTE1(this->m_C) = 0; /*0x49e9d1*/
  this->m_8 = 0; /*0x49e9d4*/
}
} // namespace gamemd

// 0x49E9E0
namespace gamemd {
unsigned int DynamicVectorClass_PAD::GetCount(int a2)
{
  if ( IDA_LOBYTE(this->m_C) ) /*0x49e9e0*/
    return (unsigned int)(a2 - *(unsigned int *)&this->m_1[3]) >> 2; /*0x49e9f5*/
  else
    return 0; /*0x49e9e7*/
}
} // namespace gamemd

// 0x49EA00
namespace gamemd {
int DynamicVectorClass_PAD_16::Get(int a2)
{
  return *(unsigned int *)(*(unsigned int *)&this->m_1[3] + 4 * a2); /*0x49ea0a*/
}
} // namespace gamemd

// 0x49EA30
namespace gamemd {
char DynamicVectorClass_PAD::AddRef(int a2)
{
  int m_8; // esi
  int v3; // edx
  unsigned int *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x49ea32*/
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x49ea3d*/
  {
    v3 = 0; /*0x49ea3f*/
    if ( m_8 <= 0 ) /*0x49ea43*/
      return 1; /*0x49ea63*/
    v4 = *(unsigned int **)&this->m_1[3]; /*0x49ea45*/
    v5 = *(unsigned int *)(a2 + 4) - (unsigned int)v4; /*0x49ea4b*/
    while ( *v4 == *(unsigned int *)((char *)v4 + v5) ) /*0x49ea54*/
    {
      ++v3; /*0x49ea56*/
      ++v4; /*0x49ea57*/
      if ( v3 >= m_8 ) /*0x49ea5c*/
        return 1; /*0x49ea5c*/
    }
  }
  return 0; /*0x49ea5e*/
}
} // namespace gamemd

// 0x49EA70
namespace gamemd {
char DynamicVectorClass_PAD::Remove(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x49ea7c*/
  {
    IDA_LOBYTE(this->m_C) = 0; /*0x49ea82*/
    if ( a3 ) /*0x49ea88*/
      v4 = a3; /*0x49ea9e*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x49ea9a*/
    IDA_LOBYTE(this->m_C) = 1; /*0x49eaa2*/
    if ( !v4 ) /*0x49eaa6*/
      return 0; /*0x49eb1a*/
    if ( *(unsigned int *)&this->m_1[3] ) /*0x49eaa8*/
    {
      m_8 = this->m_8; /*0x49eaaf*/
      if ( a2 < m_8 ) /*0x49eab4*/
        m_8 = a2; /*0x49eab6*/
      for ( i = 0; i < m_8; v4[i - 1] = *(unsigned int *)(*(unsigned int *)&this->m_1[3] + 4 * i - 4) ) /*0x49eabc*/
        ++i; /*0x49eac1*/
      if ( IDA_BYTE1(this->m_C) ) /*0x49eace*/
      {
        RA2_OPDEL(*(void **)&this->m_1[3]); /*0x49ead9*/
        *(unsigned int *)&this->m_1[3] = 0; /*0x49eae1*/
      }
    }
    *(unsigned int *)&this->m_1[3] = v4; /*0x49eaea*/
    this->m_8 = a2; /*0x49eaf2*/
    IDA_BYTE1(this->m_C) = a3 == 0; /*0x49eaf5*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_PAD *))(*(unsigned int *)this->__pad_0 + 12))(this); /*0x49eafe*/
  }
  v7 = this->m_8; /*0x49eb01*/
  if ( v7 < this->m_10 ) /*0x49eb09*/
    this->m_10 = v7; /*0x49eb0b*/
  return 1; /*0x49eb0e*/
}
} // namespace gamemd

// 0x49EB20
namespace gamemd {
int DynamicVectorClass_PAD::GetSize(unsigned int * a2)
{
  int m_10; // edx
  int result; // eax
  unsigned int *i; // ecx

  m_10 = this->m_10; /*0x49eb20*/
  result = 0; /*0x49eb23*/
  if ( m_10 <= 0 ) /*0x49eb28*/
    return -1; /*0x49eb3f*/
  for ( i = *(unsigned int **)&this->m_1[3]; *i != *a2; ++i ) /*0x49eb2e*/
  {
    if ( ++result >= m_10 ) /*0x49eb3d*/
      return -1; /*0x49eb3d*/
  }
  return result; /*0x49eb42*/
}
}
// 0x49EB50
namespace gamemd {
char DynamicVectorClass_PAD_16::Add(int a2)
{
  int m_8; // esi
  int v3; // edx
  unsigned int *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x49eb52*/
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x49eb5d*/
  {
    v3 = 0; /*0x49eb5f*/
    if ( m_8 <= 0 ) /*0x49eb63*/
      return 1; /*0x49eb83*/
    v4 = *(unsigned int **)&this->m_1[3]; /*0x49eb65*/
    v5 = *(unsigned int *)(a2 + 4) - (unsigned int)v4; /*0x49eb6b*/
    while ( *v4 == *(unsigned int *)((char *)v4 + v5) ) /*0x49eb74*/
    {
      ++v3; /*0x49eb76*/
      ++v4; /*0x49eb77*/
      if ( v3 >= m_8 ) /*0x49eb7c*/
        return 1; /*0x49eb7c*/
    }
  }
  return 0; /*0x49eb7e*/
}
} // namespace gamemd

// 0x49EB90
namespace gamemd {
char DynamicVectorClass_PAD_16::Release(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x49eb9c*/
  {
    IDA_LOBYTE(this->m_C) = 0; /*0x49eba6*/
    if ( a3 ) /*0x49ebac*/
      v4 = a3; /*0x49ebc2*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x49ebbe*/
    IDA_LOBYTE(this->m_C) = 1; /*0x49ebc6*/
    if ( v4 ) /*0x49ebca*/
    {
      if ( *(unsigned int *)&this->m_1[3] ) /*0x49ebd5*/
      {
        m_8 = this->m_8; /*0x49ebdc*/
        if ( a2 < m_8 ) /*0x49ebe1*/
          m_8 = a2; /*0x49ebe3*/
        for ( i = 0; i < m_8; v4[i - 1] = *(unsigned int *)(*(unsigned int *)&this->m_1[3] + 4 * i - 4) ) /*0x49ebe9*/
          ++i; /*0x49ebee*/
        if ( IDA_BYTE1(this->m_C) ) /*0x49ebfb*/
        {
          RA2_OPDEL(*(void **)&this->m_1[3]); /*0x49ec06*/
          *(unsigned int *)&this->m_1[3] = 0; /*0x49ec0e*/
        }
      }
      *(unsigned int *)&this->m_1[3] = v4; /*0x49ec17*/
      this->m_8 = a2; /*0x49ec1f*/
      IDA_BYTE1(this->m_C) = a3 == 0; /*0x49ec22*/
      return 1; /*0x49ec28*/
    }
    else
    {
      return 0; /*0x49ebcf*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_PAV_DynamicVectorClass_PAD *))(*(unsigned int *)this->__pad_0 + 12))(this); /*0x49ec32*/
    return 1; /*0x49ec38*/
  }
}
} // namespace gamemd

// 0x49EC40
namespace gamemd {
void DynamicVectorClass_PAD_16::Remove()
{
  if ( *(unsigned int *)&this->m_1[3] && IDA_BYTE1(this->m_C) ) /*0x49ec4d*/
  {
    RA2_OPDEL(*(void **)&this->m_1[3]); /*0x49ec53*/
    *(unsigned int *)&this->m_1[3] = 0; /*0x49ec5b*/
  }
  IDA_BYTE1(this->m_C) = 0; /*0x49ec5e*/
  this->m_8 = 0; /*0x49ec61*/
}
} // namespace gamemd

// 0x49EC70
namespace gamemd {
int DynamicVectorClass_PAD_16::GetSize(unsigned int * a2)
{
  int result; // eax
  int m_8; // edx
  unsigned int *i; // ecx

  if ( !IDA_LOBYTE(this->m_C) ) /*0x49ec70*/
    return 0; /*0x49ec78*/
  m_8 = this->m_8; /*0x49ec7e*/
  result = 0; /*0x49ec81*/
  if ( m_8 <= 0 ) /*0x49ec85*/
    return -1; /*0x49ec9c*/
  for ( i = *(unsigned int **)&this->m_1[3]; *i != *a2; ++i ) /*0x49ec8b*/
  {
    if ( ++result >= m_8 ) /*0x49ec9a*/
      return -1; /*0x49ec9a*/
  }
  return result; /*0x49ec7a*/
}
} // namespace gamemd

// 0x49ECB0
namespace gamemd {
unsigned int DynamicVectorClass_PAD_16::GetCapacity(int a2)
{
  if ( IDA_LOBYTE(this->m_C) ) /*0x49ecb0*/
    return (unsigned int)(a2 - *(unsigned int *)&this->m_1[3]) >> 2; /*0x49ecc5*/
  else
    return 0; /*0x49ecb7*/
}
} // namespace gamemd

// 0x49ED30
namespace gamemd {
char DynamicVectorClass_PAD::SetCapacity(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x49ed3c*/
  {
    IDA_LOBYTE(this->m_C) = 0; /*0x49ed42*/
    if ( a3 ) /*0x49ed48*/
      v4 = a3; /*0x49ed5e*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x49ed5a*/
    IDA_LOBYTE(this->m_C) = 1; /*0x49ed62*/
    if ( !v4 ) /*0x49ed66*/
      return 0; /*0x49edda*/
    if ( *(unsigned int *)&this->m_1[3] ) /*0x49ed68*/
    {
      m_8 = this->m_8; /*0x49ed6f*/
      if ( a2 < m_8 ) /*0x49ed74*/
        m_8 = a2; /*0x49ed76*/
      for ( i = 0; i < m_8; v4[i - 1] = *(unsigned int *)(*(unsigned int *)&this->m_1[3] + 4 * i - 4) ) /*0x49ed7c*/
        ++i; /*0x49ed81*/
      if ( IDA_BYTE1(this->m_C) ) /*0x49ed8e*/
      {
        RA2_OPDEL(*(void **)&this->m_1[3]); /*0x49ed99*/
        *(unsigned int *)&this->m_1[3] = 0; /*0x49eda1*/
      }
    }
    *(unsigned int *)&this->m_1[3] = v4; /*0x49edaa*/
    this->m_8 = a2; /*0x49edb2*/
    IDA_BYTE1(this->m_C) = a3 == 0; /*0x49edb5*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_PAV_DynamicVectorClass_PAD *))(*(unsigned int *)this->__pad_0 + 12))(this); /*0x49edbe*/
  }
  v7 = this->m_8; /*0x49edc1*/
  if ( v7 < this->m_10 ) /*0x49edc9*/
    this->m_10 = v7; /*0x49edcb*/
  return 1; /*0x49edce*/
}
} // namespace gamemd

// 0x49EDE0
namespace gamemd {
int DynamicVectorClass_PAD::FindItemIndex(unsigned int * a2)
{
  int m_10; // edx
  int result; // eax
  unsigned int *i; // ecx

  m_10 = this->m_10; /*0x49ede0*/
  result = 0; /*0x49ede3*/
  if ( m_10 <= 0 ) /*0x49ede8*/
    return -1; /*0x49edff*/
  for ( i = *(unsigned int **)&this->m_1[3]; *i != *a2; ++i ) /*0x49edee*/
  {
    if ( ++result >= m_10 ) /*0x49edfd*/
      return -1; /*0x49edfd*/
  }
  return result; /*0x49ee02*/
}
} // namespace gamemd

// 0x49EE10
namespace gamemd {
DynamicVector * DynamicVectorClass_PAD::Add(char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x49ee13*/
  *(unsigned int *)this->__pad_0 = (void*)&VectorClass_char___vftable; /*0x49ee16*/
  if ( v3 && IDA_BYTE1(this->m_C) ) /*0x49ee20*/
  {
    RA2_OPDEL(v3); /*0x49ee28*/
    *(unsigned int *)&this->m_1[3] = 0; /*0x49ee30*/
  }
  IDA_BYTE1(this->m_C) = 0; /*0x49ee3b*/
  this->m_8 = 0; /*0x49ee41*/
  if ( (a2 & 1) != 0 ) /*0x49ee48*/
    RA2_OPDEL(); /*0x49ee4b*/
  return this->__pad_0; /*0x49ee55*/
}
} // namespace gamemd

// 0x49EFF0
namespace gamemd {
VectorClass_flat * DynamicVectorClass_PAD_16::QueryInterface(char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x49eff3*/
  *(unsigned int *)this->__pad_0 = (void*)&VectorClass_DynamicVectorClass_char_____vftable; /*0x49eff6*/
  if ( v3 && IDA_BYTE1(this->m_C) ) /*0x49f000*/
  {
    RA2_OPDEL(v3); /*0x49f008*/
    *(unsigned int *)&this->m_1[3] = 0; /*0x49f010*/
  }
  IDA_BYTE1(this->m_C) = 0; /*0x49f01b*/
  this->m_8 = 0; /*0x49f021*/
  if ( (a2 & 1) != 0 ) /*0x49f028*/
    RA2_OPDEL(); /*0x49f02b*/
  return this->__pad_0; /*0x49f035*/
}
} // namespace gamemd

// 0x49F040
namespace gamemd {
DynamicVector * DynamicVectorClass_PAD::Destructor(char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x49f043*/
  *(unsigned int *)this->__pad_0 = (void*)&VectorClass_DynamicVectorClass_char_____vftable; /*0x49f046*/
  if ( v3 && IDA_BYTE1(this->m_C) ) /*0x49f050*/
  {
    RA2_OPDEL(v3); /*0x49f058*/
    *(unsigned int *)&this->m_1[3] = 0; /*0x49f060*/
  }
  IDA_BYTE1(this->m_C) = 0; /*0x49f06b*/
  this->m_8 = 0; /*0x49f071*/
  if ( (a2 & 1) != 0 ) /*0x49f078*/
    RA2_OPDEL(); /*0x49f07b*/
  return this->__pad_0; /*0x49f085*/
}
} // namespace gamemd

// 0x50EA00
void DynamicVectorClass_flat::Destroy()
{
  int result; // eax

  result = *(unsigned int *)&this->m_1[3]; /*0x50ea06*/
  if ( result && IDA_BYTE1(this->m_C) ) /*0x50ea0d*/
  {
    RA2_OPDEL(*(void **)&this->m_1[3]); /*0x50ea13*/
    *(unsigned int *)&this->m_1[3] = 0; /*0x50ea1b*/
  }
  IDA_BYTE1(this->m_C) = 0; /*0x50ea1e*/
  this->m_8 = 0; /*0x50ea21*/
  return result; /*0x50ea24*/
}
// 0x525010
namespace gamemd {
VectorClass_flat * DynamicVectorClass_AnimType::Add(char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x525013*/
  *(unsigned int *)this->__pad_0 = (void*)&VectorClass_AnimTypeClass_const___vftable; /*0x525016*/
  if ( v3 && IDA_BYTE1(this->m_C) ) /*0x525020*/
  {
    RA2_OPDEL(v3); /*0x525028*/
    *(unsigned int *)&this->m_1[3] = 0; /*0x525030*/
  }
  IDA_BYTE1(this->m_C) = 0; /*0x52503b*/
  this->m_8 = 0; /*0x525041*/
  if ( (a2 & 1) != 0 ) /*0x525048*/
    RA2_OPDEL(); /*0x52504b*/
  return this->__pad_0; /*0x525055*/
}
} // namespace gamemd

// 0x5251C0
void DynamicVectorClass_flat::Destroy_Alt()
{
  int result; // eax

  result = *(unsigned int *)&this->m_1[3]; /*0x5251c6*/
  if ( result && IDA_BYTE1(this->m_C) ) /*0x5251cd*/
  {
    RA2_OPDEL(*(void **)&this->m_1[3]); /*0x5251d3*/
    *(unsigned int *)&this->m_1[3] = 0; /*0x5251db*/
  }
  IDA_BYTE1(this->m_C) = 0; /*0x5251de*/
  this->m_8 = 0; /*0x5251e1*/
  return result; /*0x5251e4*/
}
// 0x5251F0
namespace gamemd {
int DynamicVectorClass_AnimType::GetSize(unsigned int * a2)
{
  int result; // eax
  int m_8; // edx
  unsigned int *i; // ecx

  if ( !IDA_LOBYTE(this->m_C) ) /*0x5251f0*/
    return 0; /*0x5251f8*/
  m_8 = this->m_8; /*0x5251fe*/
  result = 0; /*0x525201*/
  if ( m_8 <= 0 ) /*0x525205*/
    return -1; /*0x52521c*/
  for ( i = *(unsigned int **)&this->m_1[3]; *i != *a2; ++i ) /*0x52520b*/
  {
    if ( ++result >= m_8 ) /*0x52521a*/
      return -1; /*0x52521a*/
  }
  return result; /*0x5251fa*/
}
} // namespace gamemd

// 0x525230
namespace gamemd {
unsigned int DynamicVectorClass_AnimType::Remove(int a2)
{
  if ( IDA_LOBYTE(this->m_C) ) /*0x525230*/
    return (unsigned int)(a2 - *(unsigned int *)&this->m_1[3]) >> 2; /*0x525245*/
  else
    return 0; /*0x525237*/
}
} // namespace gamemd

// 0x525250
unsigned int * DynamicVectorClass_flat::AnimTypeConstructor(DynamicVector * aP1, DynamicVector * aP2)
{
  *(unsigned int *)&this->?[3] = 0; /*0x525259*/
  *(unsigned int *)&this->?[3] = aP1; /*0x525260*/
  IDA_LOBYTE(this->?) = 1; /*0x525263*/
  IDA_BYTE1(this->?) = 0; /*0x525267*/
  *(unsigned int *)this->VectorClass = (void*)&VectorClass_AnimTypeClass_const___vftable; /*0x52526b*/
  if ( aP1 ) /*0x525271*/
  {
    if ( aP2 ) /*0x525279*/
    {
      *(unsigned int *)&this->?[3] = aP2; /*0x52527b*/
    }
    else
    {
      *(unsigned int *)&this->?[3] = RA2_OPNEW(4 * aP1); /*0x52528c*/
      IDA_BYTE1(this->?) = 1; /*0x52528f*/
    }
  }
  *(unsigned int *)this->VectorClass = (void*)&DynamicVectorClass_AnimTypeClass_const___vftable; /*0x525293*/
  this->CapacityIncrement = 10; /*0x525299*/
  this->Count = 0; /*0x5252a0*/
  return this->VectorClass; /*0x5252a9*/
}
// 0x5252B0
namespace gamemd {
DynamicVector * DynamicVectorClass_cptr_AnimTypeClass::Add(char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x5252b3*/
  *(unsigned int *)this->__pad_0 = (void*)&VectorClass_AnimTypeClass_const___vftable; /*0x5252b6*/
  if ( v3 && IDA_BYTE1(this->m_C) ) /*0x5252c0*/
  {
    RA2_OPDEL(v3); /*0x5252c8*/
    *(unsigned int *)&this->m_1[3] = 0; /*0x5252d0*/
  }
  IDA_BYTE1(this->m_C) = 0; /*0x5252db*/
  this->m_8 = 0; /*0x5252e1*/
  if ( (a2 & 1) != 0 ) /*0x5252e8*/
    RA2_OPDEL(); /*0x5252eb*/
  return this->__pad_0; /*0x5252f5*/
}
} // namespace gamemd

// 0x588CC0
namespace gamemd {
unsigned int DynamicVectorClass_SubzoneConn::Remove(int a2)
{
  if ( IDA_LOBYTE(this->m_C) ) /*0x588cc0*/
    return (unsigned int)(a2 - *(unsigned int *)&this->m_1[3]) >> 3; /*0x588cd5*/
  else
    return 0; /*0x588cc7*/
}
} // namespace gamemd

// 0x5890B0
namespace gamemd {
DynamicVector * DynamicVectorClass_SubzoneConn::Add(char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x5890b3*/
  *(unsigned int *)this->__pad_0 = (void*)&VectorClass_SubzoneConnectionStruct_vftable; /*0x5890b6*/
  if ( v3 && IDA_BYTE1(this->m_C) ) /*0x5890c0*/
  {
    RA2_OPDEL(v3); /*0x5890c8*/
    *(unsigned int *)&this->m_1[3] = 0; /*0x5890d0*/
  }
  IDA_BYTE1(this->m_C) = 0; /*0x5890db*/
  *(unsigned int *)&this->__pad_5[3] = 0; /*0x5890e1*/
  if ( (a2 & 1) != 0 ) /*0x5890e8*/
    RA2_OPDEL(); /*0x5890eb*/
  return this->__pad_0; /*0x5890f5*/
}
} // namespace gamemd

// 0x5892D0
namespace gamemd {
int DynamicVectorClass_SubzoneConn::GetSize(unsigned int * a2)
{
  int v2; // edx
  int result; // eax
  unsigned int *i; // ecx

  v2 = *(unsigned int *)this->__tail_10; /*0x5892d0*/
  result = 0; /*0x5892d3*/
  if ( v2 <= 0 ) /*0x5892d8*/
    return -1; /*0x5892ef*/
  for ( i = *(unsigned int **)&this->m_1[3]; *i != *a2; i += 2 ) /*0x5892de*/
  {
    if ( ++result >= v2 ) /*0x5892ed*/
      return -1; /*0x5892ed*/
  }
  return result; /*0x5892f2*/
}
} // namespace gamemd

// 0x5AC900
unsigned int * DynamicVectorClass_flat::BuildingTypeConstructor(int a2, int a3)
{
  *(unsigned int *)&this->?[3] = 0; /*0x5ac909*/
  *(unsigned int *)&this->?[3] = a2; /*0x5ac910*/
  IDA_LOBYTE(this->?) = 1; /*0x5ac913*/
  IDA_BYTE1(this->?) = 0; /*0x5ac917*/
  *(unsigned int *)this->VectorClass = (void*)&VectorClass_BuildingTypeClass_const___vftable; /*0x5ac91b*/
  if ( a2 ) /*0x5ac921*/
  {
    if ( a3 ) /*0x5ac929*/
    {
      *(unsigned int *)&this->?[3] = a3; /*0x5ac92b*/
    }
    else
    {
      *(unsigned int *)&this->?[3] = RA2_OPNEW(4 * a2); /*0x5ac93c*/
      IDA_BYTE1(this->?) = 1; /*0x5ac93f*/
    }
  }
  *(unsigned int *)this->VectorClass = (void*)&DynamicVectorClass_BuildingTypeClass_const___vftable; /*0x5ac943*/
  this->CapacityIncrement = 10; /*0x5ac949*/
  this->Count = 0; /*0x5ac950*/
  return this->VectorClass; /*0x5ac959*/
}
// 0x5C5070
namespace gamemd {
void DynamicVectorClass_ptr_NodeNameType::ddtor()
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x5c5076*/
  this->m_10 = 0; /*0x5c5079*/
  if ( v2 && IDA_BYTE1(this->m_C) ) /*0x5c5080*/
  {
    RA2_OPDEL(v2); /*0x5c5086*/
    *(unsigned int *)&this->m_1[3] = 0; /*0x5c508e*/
  }
  IDA_BYTE1(this->m_C) = 0; /*0x5c5091*/
  this->m_8 = 0; /*0x5c5094*/
}
} // namespace gamemd

// 0x5C50A0
namespace gamemd {
unsigned int DynamicVectorClass_ptr_NodeNameType::Get(int a2)
{
  if ( IDA_LOBYTE(this->m_C) ) /*0x5c50a0*/
    return (unsigned int)(a2 - *(unsigned int *)&this->m_1[3]) >> 2; /*0x5c50b5*/
  else
    return 0; /*0x5c50a7*/
}
} // namespace gamemd

// 0x5C50C0
namespace gamemd {
int DynamicVectorClass_ptr_NodeNameType::Clear(int a2)
{
  return *(unsigned int *)(*(unsigned int *)&this->m_1[3] + 4 * a2); /*0x5c50ca*/
}
} // namespace gamemd

// 0x5C5390
namespace gamemd {
char DynamicVectorClass_ptr_NodeNameType::AddRef(int a2)
{
  int v2; // esi
  int v3; // edx
  unsigned int *v4; // eax
  int v5; // ecx

  v2 = this->Capacity; /*0x5c5392*/
  if ( v2 == *(unsigned int *)(a2 + 8) ) /*0x5c539d*/
  {
    v3 = 0; /*0x5c539f*/
    if ( v2 <= 0 ) /*0x5c53a3*/
      return 1; /*0x5c53c3*/
    v4 = *(unsigned int **)&this->m_1[3]; /*0x5c53a5*/
    v5 = *(unsigned int *)(a2 + 4) - (unsigned int)v4; /*0x5c53ab*/
    while ( *v4 == *(unsigned int *)((char *)v4 + v5) ) /*0x5c53b4*/
    {
      ++v3; /*0x5c53b6*/
      ++v4; /*0x5c53b7*/
      if ( v3 >= v2 ) /*0x5c53bc*/
        return 1; /*0x5c53bc*/
    }
  }
  return 0; /*0x5c53be*/
}
} // namespace gamemd

// 0x5C5510
namespace gamemd {
char DynamicVectorClass_ptr_NodeNameType::Remove(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x5c551c*/
  {
    IDA_LOBYTE(this->m_C) = 0; /*0x5c5522*/
    if ( a3 ) /*0x5c5528*/
      v4 = a3; /*0x5c553e*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x5c553a*/
    IDA_LOBYTE(this->m_C) = 1; /*0x5c5542*/
    if ( !v4 ) /*0x5c5546*/
      return 0; /*0x5c55ba*/
    if ( *(unsigned int *)&this->m_1[3] ) /*0x5c5548*/
    {
      m_8 = this->m_8; /*0x5c554f*/
      if ( a2 < m_8 ) /*0x5c5554*/
        m_8 = a2; /*0x5c5556*/
      for ( i = 0; i < m_8; v4[i - 1] = *(unsigned int *)(*(unsigned int *)&this->m_1[3] + 4 * i - 4) ) /*0x5c555c*/
        ++i; /*0x5c5561*/
      if ( IDA_BYTE1(this->m_C) ) /*0x5c556e*/
      {
        RA2_OPDEL(*(void **)&this->m_1[3]); /*0x5c5579*/
        *(unsigned int *)&this->m_1[3] = 0; /*0x5c5581*/
      }
    }
    *(unsigned int *)&this->m_1[3] = v4; /*0x5c558a*/
    this->m_8 = a2; /*0x5c5592*/
    IDA_BYTE1(this->m_C) = a3 == 0; /*0x5c5595*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_PAUNodeNameType *))(*(unsigned int *)this->__pad_0 + 12))(this); /*0x5c559e*/
  }
  v7 = this->m_8; /*0x5c55a1*/
  if ( v7 < this->m_10 ) /*0x5c55a9*/
    this->m_10 = v7; /*0x5c55ab*/
  return 1; /*0x5c55ae*/
}
} // namespace gamemd

// 0x5C55C0
namespace gamemd {
int DynamicVectorClass_ptr_NodeNameType::GetSize(unsigned int * a2)
{
  int m_10; // edx
  int result; // eax
  unsigned int *i; // ecx

  m_10 = this->m_10; /*0x5c55c0*/
  result = 0; /*0x5c55c3*/
  if ( m_10 <= 0 ) /*0x5c55c8*/
    return -1; /*0x5c55df*/
  for ( i = *(unsigned int **)&this->m_1[3]; *i != *a2; ++i ) /*0x5c55ce*/
  {
    if ( ++result >= m_10 ) /*0x5c55dd*/
      return -1; /*0x5c55dd*/
  }
  return result; /*0x5c55e2*/
}
} // namespace gamemd

// 0x5C58F0
namespace gamemd {
DynamicVector * DynamicVectorClass_ptr_NodeNameType::Add(char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x5c58f3*/
  *(unsigned int *)this->__pad_0 = (void*)&VectorClass_NodeNameType___vftable; /*0x5c58f6*/
  if ( v3 && IDA_BYTE1(this->m_C) ) /*0x5c5900*/
  {
    RA2_OPDEL(v3); /*0x5c5908*/
    *(unsigned int *)&this->m_1[3] = 0; /*0x5c5910*/
  }
  IDA_BYTE1(this->m_C) = 0; /*0x5c591b*/
  this->m_8 = 0; /*0x5c5921*/
  if ( (a2 & 1) != 0 ) /*0x5c5928*/
    RA2_OPDEL(); /*0x5c592b*/
  return this->__pad_0; /*0x5c5935*/
}
} // namespace gamemd

// 0x6244A0
namespace gamemd {
unsigned int * DynamicVectorClass_UHashObject_HashString__ptr_SchemeNode::Destructor(char a2)
{
  *(unsigned int *)this = (void*)&OwnerDraw_DialogControl_vftable; /*0x6244a9*/
  if ( (a2 & 1) != 0 ) /*0x6244af*/
    RA2_OPDEL(); /*0x6244b2*/
  return this; /*0x6244bc*/
}
} // namespace gamemd

// 0x6244C0
namespace gamemd {
unsigned int * DynamicVectorClass_UHashObject_HashString__ptr_SchemeNode::Destructor_0(char a2)
{
  *(unsigned int *)this = (void*)&OwnerDraw_DialogControl_vftable; /*0x6244c9*/
  if ( (a2 & 1) != 0 ) /*0x6244cf*/
    RA2_OPDEL(); /*0x6244d2*/
  return this; /*0x6244dc*/
}
} // namespace gamemd

// 0x627D20
namespace gamemd {
void DynamicVectorClass_UHashObject_HashString__ptr_SchemeNode::Clear_627D20()
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x627d26*/
  this->m_10 = 0; /*0x627d29*/
  if ( v2 && IDA_BYTE1(this->m_C) ) /*0x627d30*/
  {
    RA2_OPDEL(v2); /*0x627d36*/
    *(unsigned int *)&this->m_1[3] = 0; /*0x627d3e*/
  }
  IDA_BYTE1(this->m_C) = 0; /*0x627d41*/
  this->m_8 = 0; /*0x627d44*/
}
} // namespace gamemd

// 0x627D50
namespace gamemd {
unsigned int DynamicVectorClass_UHashObject_HashString__ptr_SchemeNode::GetCount(int a2)
{
  if ( IDA_LOBYTE(this->m_C) ) /*0x627d50*/
    return (unsigned int)(a2 - *(unsigned int *)&this->m_1[3]) >> 2; /*0x627d65*/
  else
    return 0; /*0x627d57*/
}
} // namespace gamemd

// 0x627D80
namespace gamemd {
void DynamicVectorClass_UHashObject_HashString__ptr_SchemeNode::Clear_627D80()
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x627d86*/
  this->m_10 = 0; /*0x627d89*/
  if ( v2 && IDA_BYTE1(this->m_C) ) /*0x627d90*/
  {
    RA2_OPDEL(v2); /*0x627d96*/
    *(unsigned int *)&this->m_1[3] = 0; /*0x627d9e*/
  }
  IDA_BYTE1(this->m_C) = 0; /*0x627da1*/
  this->m_8 = 0; /*0x627da4*/
}
} // namespace gamemd

// 0x627DB0
namespace gamemd {
unsigned int DynamicVectorClass_UHashObject_HashString__ptr_SchemeNode::GetItemIndex(int a2)
{
  if ( IDA_LOBYTE(this->m_C) ) /*0x627db0*/
    return (a2 - *(unsigned int *)&this->m_1[3]) / 3u; /*0x627dce*/
  else
    return 0; /*0x627db7*/
}
} // namespace gamemd

// 0x627DE0
namespace gamemd {
int DynamicVectorClass_UHashObject_HashString__ptr_SchemeNode::GetItem(int a2, int a3)
{
  int v3; // ecx

  v3 = *(unsigned int *)&this->m_1[3] + 3 * a3; /*0x627ded*/
  *(unsigned short *)a2 = *(unsigned short *)v3; /*0x627df8*/
  *(unsigned char *)(a2 + 2) = *(unsigned char *)(v3 + 2); /*0x627dff*/
  return a2; /*0x627dfb*/
}
} // namespace gamemd

// 0x627F90
namespace gamemd {
char DynamicVectorClass_UHashObject_HashString__ptr_SchemeNode::SetCapacity(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x627f9c*/
  {
    IDA_LOBYTE(this->m_C) = 0; /*0x627fa2*/
    if ( a3 ) /*0x627fa8*/
      v4 = a3; /*0x627fbe*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x627fba*/
    IDA_LOBYTE(this->m_C) = 1; /*0x627fc2*/
    if ( !v4 ) /*0x627fc6*/
      return 0; /*0x62803a*/
    if ( *(unsigned int *)&this->m_1[3] ) /*0x627fc8*/
    {
      m_8 = this->m_8; /*0x627fcf*/
      if ( a2 < m_8 ) /*0x627fd4*/
        m_8 = a2; /*0x627fd6*/
      for ( i = 0; i < m_8; v4[i - 1] = *(unsigned int *)(*(unsigned int *)&this->m_1[3] + 4 * i - 4) ) /*0x627fdc*/
        ++i; /*0x627fe1*/
      if ( IDA_BYTE1(this->m_C) ) /*0x627fee*/
      {
        RA2_OPDEL(*(void **)&this->m_1[3]); /*0x627ff9*/
        *(unsigned int *)&this->m_1[3] = 0; /*0x628001*/
      }
    }
    *(unsigned int *)&this->m_1[3] = v4; /*0x62800a*/
    this->m_8 = a2; /*0x628012*/
    IDA_BYTE1(this->m_C) = a3 == 0; /*0x628015*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_PAVColorScheme *))(*(unsigned int *)this->__pad_0 + 12))(this); /*0x62801e*/
  }
  v7 = this->m_8; /*0x628021*/
  if ( v7 < this->m_10 ) /*0x628029*/
    this->m_10 = v7; /*0x62802b*/
  return 1; /*0x62802e*/
}
} // namespace gamemd

// 0x628040
namespace gamemd {
int DynamicVectorClass_UHashObject_HashString__ptr_SchemeNode::FindItemIndex(unsigned int * a2)
{
  int m_10; // edx
  int result; // eax
  unsigned int *i; // ecx

  m_10 = this->m_10; /*0x628040*/
  result = 0; /*0x628043*/
  if ( m_10 <= 0 ) /*0x628048*/
    return -1; /*0x62805f*/
  for ( i = *(unsigned int **)&this->m_1[3]; *i != *a2; ++i ) /*0x62804e*/
  {
    if ( ++result >= m_10 ) /*0x62805d*/
      return -1; /*0x62805d*/
  }
  return result; /*0x628062*/
}
} // namespace gamemd

// 0x6281F0
namespace gamemd {
char DynamicVectorClass_UHashObject_HashString__ptr_SchemeNode::IsEqualTo(int a2)
{
  int m_8; // eax
  int v4; // ebx
  int i; // esi

  m_8 = this->m_8; /*0x6281fd*/
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x628202*/
  {
    v4 = 0; /*0x628204*/
    if ( m_8 <= 0 ) /*0x628208*/
      return 1; /*0x628231*/
    for ( i = 0; /*0x62820a*/
          !DynamicVectorClass_UHashObject_HashString__ptr_SchemeNode::HashEntryCompare(
             (DynamicVectorClass_UHashObject_HashString__ptr_SchemeNode *)(i + *(unsigned int *)&this->m_1[3]),
             (unsigned char *)(i + *(unsigned int *)(a2 + 4)));
          i += 3 )
    {
      if ( ++v4 >= this->m_8 ) /*0x628229*/
        return 1; /*0x628229*/
    }
  }
  return 0; /*0x62822b*/
}
} // namespace gamemd

// 0x6285A0
namespace gamemd {
int DynamicVectorClass_UHashObject_HashString__ptr_SchemeNode::ProcessAll(int a2)
{
  if ( (int)this->q010 > 0 ) /*0x6285ad*/
    VtableStub::5175D0(this->Items, a2); /*0x6285bc*/
  return -1; /*0x6285d0*/
}
} // namespace gamemd

// 0x628640
namespace gamemd {
DynamicVector * DynamicVectorClass_UHashObject_HashString__ptr_SchemeNode::Destructor_1(char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x628643*/
  *(unsigned int *)this->__pad_0 = (void*)&VectorClass_ColorScheme___vftable; /*0x628646*/
  if ( v3 && IDA_BYTE1(this->m_C) ) /*0x628650*/
  {
    RA2_OPDEL(v3); /*0x628658*/
    *(unsigned int *)&this->m_1[3] = 0; /*0x628660*/
  }
  IDA_BYTE1(this->m_C) = 0; /*0x62866b*/
  this->m_8 = 0; /*0x628671*/
  if ( (a2 & 1) != 0 ) /*0x628678*/
    RA2_OPDEL(); /*0x62867b*/
  return this->__pad_0; /*0x628685*/
}
} // namespace gamemd

// 0x628690
namespace gamemd {
char * DynamicVectorClass_UHashObject_HashString__ptr_SchemeNode::Add(char a2)
{
  int v3; // eax
  char *v4; // ebp
  int v5; // ecx
  int v6; // eax
  char *v7; // esi
  int v8; // edi
  void *v9; // eax
  void *v11; // eax

  if ( (a2 & 2) != 0 ) /*0x62869a*/
  {
    v3 = *((unsigned int *)this - 1); /*0x62869c*/
    v4 = (char *)this - 4; /*0x6286a0*/
    v5 = 3 * v3; /*0x6286a3*/
    v6 = v3 - 1; /*0x6286a6*/
    v7 = &this->__pad_0[8 * v5]; /*0x6286a7*/
    if ( v6 >= 0 ) /*0x6286aa*/
    {
      v8 = v6 + 1; /*0x6286ad*/
      do /*0x6286da*/
      {
        v9 = (void *)*((unsigned int *)v7 - 5); /*0x6286b2*/
        v7 -= 24; /*0x6286b5*/
        *(unsigned int *)v7 = (void*)&VectorClass_HashObject_HashString_SchemeNode___vftable; /*0x6286ba*/
        if ( v9 && v7[13] ) /*0x6286c2*/
        {
          RA2_OPDEL(v9); /*0x6286c8*/
          *((unsigned int *)v7 + 1) = 0; /*0x6286d0*/
        }
        --v8; /*0x6286d3*/
        v7[13] = 0; /*0x6286d4*/
        *((unsigned int *)v7 + 2) = 0; /*0x6286d7*/
      }
      while ( v8 ); /*0x6286da*/
    }
    if ( (a2 & 1) != 0 ) /*0x6286e2*/
      RA2_OPDEL(v4); /*0x6286e5*/
    return v4; /*0x6286ed*/
  }
  else
  {
    v11 = *(void **)&this->m_1[3]; /*0x6286f5*/
    *(unsigned int *)this->__pad_0 = (void*)&VectorClass_HashObject_HashString_SchemeNode___vftable; /*0x6286fc*/
    if ( v11 && IDA_BYTE1(this->m_C) ) /*0x628704*/
    {
      RA2_OPDEL(v11); /*0x62870a*/
      *(unsigned int *)&this->m_1[3] = 0; /*0x628712*/
    }
    IDA_BYTE1(this->m_C) = 0; /*0x628719*/
    this->m_8 = 0; /*0x62871e*/
    if ( (a2 & 1) != 0 ) /*0x628721*/
      RA2_OPDEL(); /*0x628724*/
    return this->__pad_0; /*0x62872c*/
  }
}
} // namespace gamemd

// 0x6287B0
namespace gamemd {
DynamicVector * DynamicVectorClass_UHashObject_HashString__ptr_SchemeNode::Destructor_2(char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x6287b3*/
  *(unsigned int *)this->__pad_0 = (void*)&VectorClass_HSVClass_vftable; /*0x6287b6*/
  if ( v3 && IDA_BYTE1(this->m_C) ) /*0x6287c0*/
  {
    RA2_OPDEL(v3); /*0x6287c8*/
    *(unsigned int *)&this->m_1[3] = 0; /*0x6287d0*/
  }
  IDA_BYTE1(this->m_C) = 0; /*0x6287db*/
  this->m_8 = 0; /*0x6287e1*/
  if ( (a2 & 1) != 0 ) /*0x6287e8*/
    RA2_OPDEL(); /*0x6287eb*/
  return this->__pad_0; /*0x6287f5*/
}
} // namespace gamemd

// 0x628800
namespace gamemd {
void DynamicVectorClass_UHashObject_HashString__ptr_SchemeNode::ddtor()
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x628806*/
  this->m_10 = 0; /*0x628809*/
  if ( v2 && IDA_BYTE1(this->m_C) ) /*0x628810*/
  {
    RA2_OPDEL(v2); /*0x628816*/
    *(unsigned int *)&this->m_1[3] = 0; /*0x62881e*/
  }
  IDA_BYTE1(this->m_C) = 0; /*0x628821*/
  this->m_8 = 0; /*0x628824*/
}
} // namespace gamemd

// 0x628830
namespace gamemd {
unsigned int DynamicVectorClass_UHashObject_HashString__ptr_SchemeNode::Get(int a2)
{
  if ( IDA_LOBYTE(this->m_C) ) /*0x628830*/
    return (a2 - *(unsigned int *)&this->m_1[3]) / 0x104u; /*0x62884e*/
  else
    return 0; /*0x628837*/
}
} // namespace gamemd

// 0x628860
namespace gamemd {
int DynamicVectorClass_UHashObject_HashString__ptr_SchemeNode::Clear(int a2, int a3)
{
  int v3; // esi

  v3 = *(unsigned int *)&this->m_1[3] + 260 * a3; /*0x628876*/
  String::Copy((char *)a2, (const char *)v3); /*0x62887a*/
  *(unsigned int *)(a2 + 256) = *(unsigned int *)(v3 + 256); /*0x628887*/
  return a2; /*0x62888d*/
}
} // namespace gamemd

// 0x6288A0
namespace gamemd {
char DynamicVectorClass_UHashObject_HashString__ptr_SchemeNode::AddRef(int a2)
{
  int m_8; // eax

  m_8 = this->m_8; /*0x6288ad*/
  if ( m_8 != *(unsigned int *)(a2 + 8) ) /*0x6288b2*/
    return 0; /*0x6288e9*/
  if ( m_8 > 0 ) /*0x6288b8*/
    j_Stub_InfiniteLoop(*(unsigned int *)&this->m_1[3], *(unsigned int *)(a2 + 4)); /*0x6288c6*/
  return 1; /*0x6288dd*/
}
} // namespace gamemd

// 0x628D80
namespace gamemd {
int DynamicVectorClass_UHashObject_HashString__ptr_SchemeNode::GetSize(int a2)
{
  if ( this->m_10 > 0 ) /*0x628d8d*/
    Stub::InfiniteLoop(*(unsigned int *)&this->m_1[3], a2); /*0x628d9c*/
  return -1; /*0x628db3*/
}
} // namespace gamemd

// 0x67C060
namespace gamemd {
DynamicVector * DynamicVectorClass_cptr_VoxelAnimTypeClass::Add(char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x67c063*/
  *(unsigned int *)this->__pad_0 = (void*)&VectorClass_VoxelAnimTypeClass_const___vftable; /*0x67c066*/
  if ( v3 && IDA_BYTE1(this->m_C) ) /*0x67c070*/
  {
    RA2_OPDEL(v3); /*0x67c078*/
    *(unsigned int *)&this->m_1[3] = 0; /*0x67c080*/
  }
  IDA_BYTE1(this->m_C) = 0; /*0x67c08b*/
  this->m_8 = 0; /*0x67c091*/
  if ( (a2 & 1) != 0 ) /*0x67c098*/
    RA2_OPDEL(); /*0x67c09b*/
  return this->__pad_0; /*0x67c0a5*/
}
} // namespace gamemd
