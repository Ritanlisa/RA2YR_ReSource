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
#include "e4/classes/EMPulseClass_e4.hpp"

// 0x525110
namespace gamemd {
AbstractClass * * DynamicVectorClass_AnimType::Release(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x52511c*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x52512c*/
      v4 = a3; /*0x525142*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x52513e*/
        *((unsigned char *)this + 12) = 1;
    if ( v4 ) /*0x52514a*/
    {
            if ( *((unsigned int *)this + 1) )
      {
                v6 = *((unsigned int *)this + 2);
        if ( a2 < m_8 ) /*0x525161*/
          m_8 = a2; /*0x525163*/
                for ( i = 0; i < v6; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
          ++i; /*0x52516e*/
                if ( *((unsigned char *)this + 13) )
        {
          RA2_OPDEL(*(void **)&this->Items); /*0x525186*/
                    *((unsigned int *)this + 1) = 0;
        }
      }
            *((unsigned int *)this + 1) = v4;
            *((unsigned int *)this + 2) = a2;
            *((unsigned char *)this + 13) = a3 == 0;
      return 1; /*0x5251a8*/
    }
    else
    {
      return 0; /*0x52514f*/
    }
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
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
        *((unsigned char *)this + 12) = 0;
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
            (unsigned int)(v7)->vtable2 = 0; /*0x5891cf*/
            (unsigned int)(v7)+= 8; /*0x5891d2*/
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
        *((unsigned char *)this + 12) = 1;
    if ( !v5 ) /*0x5891fb*/
      return 0; /*0x589284*/
        if ( *((unsigned int *)this + 1) )
    {
            v11 = *((unsigned int *)this + 2);
      if ( a2 < v11 ) /*0x58920b*/
        v11 = a2; /*0x58920d*/
      v12 = 0; /*0x58920f*/
      if ( v11 > 0 ) /*0x589213*/
      {
        do /*0x589232*/
        {
          v13 = 8 * v12; /*0x589218*/
                    v14 = (unsigned int *)(*((unsigned int *)this + 1) + 8 * v12++);
          *(unsigned int *)&v5[v13] = *v14; /*0x589228*/
          *(unsigned int *)&v5[v13 + 4] = v14[1]; /*0x58922e*/
        }
        while ( v12 < v11 ); /*0x589232*/
        v3 = a2; /*0x589234*/
      }
            if ( *((unsigned char *)this + 13) )
      {
        RA2_OPDEL(*(void **)&this->Items); /*0x589243*/
                *((unsigned int *)this + 1) = 0;
      }
    }
        *((unsigned int *)this + 1) = v5;
    *(unsigned int *)&this-((unsigned int *)(>__pad_5))[3] = v3; /*0x58925c*/
        *((unsigned char *)this + 13) = a3 == 0;
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
  }
  v15 = *(unsigned int *)&this-((unsigned int *)(>__pad_5))[3]; /*0x58926b*/
    if ( v15 < *((unsigned int *)this + 4) )
        *((unsigned int *)this + 4) = v15;
  return 1; /*0x589278*/
}
}
// 0x517590
namespace gamemd {
int DynamicVectorClass_UHashObject_HashString__ptr_SchemeNode::HashEntryCompare(unsigned char * a2)
{
    return *this != *a2 || *((unsigned int *)this + 4) != a2[1] || *((unsigned int *)this + 8) != a2[2];
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
        *((unsigned char *)this + 12) = 0;
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
          v7 = (unsigned char *)((unsigned int)(v6)+ 2); /*0x6284d7*/
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
        *((unsigned char *)this + 12) = 1;
    if ( !v5 ) /*0x628510*/
      return 0; /*0x628592*/
        if ( *((unsigned int *)this + 1) )
    {
            v11 = *((unsigned int *)this + 2);
      if ( a2 < m_8 ) /*0x62851c*/
        m_8 = a2; /*0x62851e*/
      if ( m_8 > 0 ) /*0x628522*/
      {
        v12 = 0; /*0x628524*/
        do /*0x628540*/
        {
                    v13 = *((unsigned int *)this + 1) + v12;
          v14 = &v5[v12]; /*0x62852d*/
          v12 += 3; /*0x628530*/
          --m_8; /*0x628533*/
          *(unsigned short *)v14 = *(unsigned short *)v13; /*0x628537*/
          v14[2] = *(unsigned char *)(v13 + 2); /*0x62853d*/
        }
        while ( m_8 ); /*0x628540*/
        v3 = a2; /*0x628542*/
      }
            if ( *((unsigned char *)this + 13) )
      {
        RA2_OPDEL(*(void **)&this->Items); /*0x628551*/
                *((unsigned int *)this + 1) = 0;
      }
    }
        *((unsigned int *)this + 1) = v5;
        *((unsigned int *)this + 2) = v3;
        *((unsigned char *)this + 13) = a3 == 0;
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
  }
  v15 = this-(int)(>Capacity); /*0x628579*/
    if ( v15 < *((unsigned int *)this + 4) )
        *((unsigned int *)this + 4) = v15;
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
        *((unsigned char *)this + 12) = 0;
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
        *((unsigned char *)this + 12) = 1;
    if ( !v16 ) /*0x628c4c*/
      return 0; /*0x628cfa*/
        if ( *((unsigned int *)this + 1) )
    {
      m_8 = (gamemd::CCINIClass *)((int)(this->Items));
      if ( aP1 < m_8 ) /*0x628c5e*/
        m_8 = aP1; /*0x628c60*/
      if ( m_8 > 0 ) /*0x628c64*/
      {
        v10 = (int)(0);
        v11 = v16; /*0x628c68*/
        v17 = m_8; /*0x628c6a*/
        do /*0x628c9c*/
        {
                    v12 = v10 + *((unsigned int *)this + 1);
          String::CopyChecked(v11, (const char *)v12); /*0x628c76*/
          *((unsigned int *)v11 + 64) = *(unsigned int *)(v12 + 256); /*0x628c85*/
          v10 += 260; /*0x628c8b*/
          v11 += 260; /*0x628c91*/
          --v17; /*0x628c98*/
        }
        while ( v17 ); /*0x628c9c*/
        v3 = aP1; /*0x628c9e*/
      }
            if ( *((unsigned char *)this + 13) )
      {
        RA2_OPDEL(*(void **)&this->Items); /*0x628cad*/
                *((unsigned int *)this + 1) = 0;
      }
    }
        *((unsigned int *)this + 1) = v16;
        *((unsigned int *)this + 2) = v3;
        *((unsigned char *)this + 13) = a2 == 0;
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
  }
  v13 = this-(int)(>Capacity); /*0x628cde*/
    if ( v13 < *((unsigned int *)this + 4) )
        *((unsigned int *)this + 4) = v13;
  return 1; /*0x628ceb*/
}
}
// 0x42D540
namespace gamemd {
void DynamicVectorClass_uint::ddtor()
{
  void *v2; // eax

  v2 = *(void **)&this->Items; /*0x42d546*/
    *((unsigned int *)this + 64) = 0;
    if ( v2 && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(v2); /*0x42d556*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x42D590
namespace gamemd {
int DynamicVectorClass_uint::Clear(int a2)
{
    return *(unsigned int *)(*((unsigned int *)this + 4) + 4 * a2);
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

    v2 = *((unsigned int *)this + 8);
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x42d60d*/
  {
    v3 = 0; /*0x42d60f*/
    if ( m_8 <= 0 ) /*0x42d613*/
      return 1; /*0x42d633*/
        v4 = (unsigned int *)*((unsigned int *)this + 4);
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
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x42d65c*/
      v4 = a3; /*0x42d672*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x42d66e*/
        *((unsigned char *)this + 12) = 1;
    if ( v4 ) /*0x42d67a*/
    {
            if ( *((unsigned int *)this + 1) )
      {
                v6 = *((unsigned int *)this + 2);
        if ( a2 < m_8 ) /*0x42d691*/
          m_8 = a2; /*0x42d693*/
                for ( i = 0; i < v6; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
          ++i; /*0x42d69e*/
                if ( *((unsigned char *)this + 13) )
        {
          RA2_OPDEL(*(void **)&this->Items); /*0x42d6b6*/
                    *((unsigned int *)this + 1) = 0;
        }
      }
            *((unsigned int *)this + 1) = v4;
            *((unsigned int *)this + 2) = a2;
            *((unsigned char *)this + 13) = a3 == 0;
      return 1; /*0x42d6d8*/
    }
    else
    {
      return 0; /*0x42d67f*/
    }
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
    return 1; /*0x42d6e8*/
  }
}
} // namespace gamemd

// 0x42D6F0
namespace gamemd {
void DynamicVectorClass_uint::Clear_0()
{
    if ( *((unsigned int *)this + 16) && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(*(void **)&this->Items); /*0x42d703*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x42D720
namespace gamemd {
int DynamicVectorClass_uint::FindItemIndex(unsigned int * a2)
{
  int result; // eax
  int m_8; // edx
  unsigned int *i; // ecx

    if ( !*((unsigned char *)this + 48) )
    return 0; /*0x42d728*/
    v3 = *((unsigned int *)this + 32);
  result = 0; /*0x42d731*/
  if ( m_8 <= 0 ) /*0x42d735*/
    return -1; /*0x42d74c*/
  for ( i = *(unsigned int **)&this->Items; *i != *a2; ++i ) /*0x42d73b*/
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
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
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
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x42d798*/
      v4 = a3; /*0x42d7ae*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x42d7aa*/
        *((unsigned char *)this + 12) = 1;
    if ( !v4 ) /*0x42d7b6*/
      return 0; /*0x42d82a*/
        if ( *((unsigned int *)this + 1) )
    {
            v5 = *((unsigned int *)this + 2);
      if ( a2 < m_8 ) /*0x42d7c4*/
        m_8 = a2; /*0x42d7c6*/
            for ( i = 0; i < v5; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
        ++i; /*0x42d7d1*/
            if ( *((unsigned char *)this + 13) )
      {
        RA2_OPDEL(*(void **)&this->Items); /*0x42d7e9*/
                *((unsigned int *)this + 1) = 0;
      }
    }
        *((unsigned int *)this + 1) = v4;
        *((unsigned int *)this + 2) = a2;
        *((unsigned char *)this + 13) = a3 == 0;
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
  }
    v7 = *((unsigned int *)this + 2);
    if ( v7 < *((unsigned int *)this + 4) )
        *((unsigned int *)this + 4) = v7;
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

    v2 = *((unsigned int *)this + 16);
  result = 0; /*0x42d883*/
  if ( m_10 <= 0 ) /*0x42d888*/
    return -1; /*0x42d89f*/
    for ( i = (unsigned int *)*((unsigned int *)this + 4); *i != *a2; ++i )
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

  v3 = (unsigned int)(*(void **)&this-((unsigned int *)(>m_1))[3]);
  *(unsigned int *)this->__pad_0 = (void*)&VectorClass_unsigned_int_vftable; /*0x42db16*/
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x42db28*/
        *(Block + 1) = 0;
  }
  this->IsAllocated = (unsigned char)((gamemd::VectorClass_flat *)(0));
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x42db48*/
    RA2_OPDEL(); /*0x42db4b*/
  return this; /*0x42db55*/
}
} // namespace gamemd

// 0x42DB60
namespace gamemd {
DynamicVectorClass_uint * DynamicVectorClass_uint::Add(char a2)
{
  void *v3; // eax

  v3 = (unsigned int)(*(void **)&this-((unsigned int *)(>m_1))[3]);
  *(unsigned int *)this->__pad_0 = (void*)&VectorClass_unsigned_int_vftable; /*0x42db66*/
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x42db78*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x42db98*/
    RA2_OPDEL(); /*0x42db9b*/
  return this; /*0x42dba5*/
}
} // namespace gamemd

// 0x4779E0
unsigned int * DynamicVectorClass_flat::Copy(DynamicVector * aP1)
{
  int v3; // eax
  int v4; // eax
  int v5; // ecx
  int v6; // eax

    *((unsigned int *)this + 4) = 0;
    *((unsigned int *)this + 8) = 0;
    *((unsigned char *)this + 12) = 1;
    *((unsigned char *)this + 13) = 0;
    *this = &vt_VectorClass_int;
  if ( this != (DynamicVectorClass *)aP1 ) /*0x477a00*/
  {
    VectorClass::Destroy(); /*0x477a02*/
    v3 = aP1[2]; /*0x477a08*/
        *((unsigned int *)this + 8) = v3;
    if ( v3 ) /*0x477a10*/
    {
      v4 = RA2_OPNEW(4 * v3); /*0x477a16*/
            *((unsigned int *)this + 4) = v4;
      if ( v4 ) /*0x477a23*/
      {
                v5 = *((unsigned int *)this + 8);
        v6 = 0; /*0x477a28*/
                *((unsigned char *)this + 13) = 1;
        if ( v5 > 0 ) /*0x477a30*/
        {
          do /*0x477a44*/
          {
                        *(unsigned int *)(*((unsigned int *)this + 4) + 4 * v6) = *(unsigned int *)(*(unsigned int *)&aP1->field_1[3] + 4 * v6);
            ++v6; /*0x477a41*/
          }
          while ( v6 < *(unsigned int *)&this->?[3] ); /*0x477a44*/
        }
      }
    }
    else
    {
            *((unsigned int *)this + 4) = 0;
            *((unsigned char *)this + 13) = 0;
    }
  }
    *((unsigned int *)this + 16) = aP1->field_10;
    *((unsigned int *)this + 20) = *(unsigned int *)aP1->__pad_14;
    *this = &vt_DynamicVectorClass_int;
    return this;
}
// 0x477DB0
unsigned int * DynamicVectorClass_flat::Construct(int a2, int a3)
{
    *((unsigned int *)this + 4) = 0;
    *((unsigned int *)this + 8) = a2;
    *((unsigned char *)this + 12) = 1;
    *((unsigned char *)this + 13) = 0;
    *this = &vt_VectorClass_int;
  if ( a2 ) /*0x477dd1*/
  {
    if ( a3 ) /*0x477dd9*/
    {
            *((unsigned int *)this + 4) = a3;
    }
    else
    {
      *(unsigned int *)&this->Items = RA2_OPNEW(4 * a2); /*0x477dec*/
            *((unsigned char *)this + 13) = 1;
    }
  }
    *this = &vt_DynamicVectorClass_int;
    *((unsigned int *)this + 20) = 10;
    *((unsigned int *)this + 16) = 0;
    return this;
}
// 0x49E950
namespace gamemd {
void DynamicVectorClass_PAD::ddtor()
{
  void *v2; // eax

  v2 = *(void **)&this->Items; /*0x49e956*/
    *((unsigned int *)this + 64) = 0;
    if ( v2 && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(v2); /*0x49e966*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x49E980
namespace gamemd {
unsigned int DynamicVectorClass_PAD::Get(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x49e987*/
}
} // namespace gamemd

// 0x49E9A0
namespace gamemd {
int DynamicVectorClass_PAD::Clear(int a2)
{
    return *(unsigned int *)(*((unsigned int *)this + 4) + 4 * a2);
}
} // namespace gamemd

// 0x49E9B0
namespace gamemd {
void DynamicVectorClass_PAD::Clear_49E9B0()
{
  void *v2; // eax

  v2 = *(void **)&this->Items; /*0x49e9b6*/
    *((unsigned int *)this + 64) = 0;
    if ( v2 && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(v2); /*0x49e9c6*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x49E9E0
namespace gamemd {
unsigned int DynamicVectorClass_PAD::GetCount(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x49e9e7*/
}
} // namespace gamemd

// 0x49EA00
namespace gamemd {
int DynamicVectorClass_PAD_16::Get(int a2)
{
    return *(unsigned int *)(*((unsigned int *)this + 4) + 4 * a2);
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

    v2 = *((unsigned int *)this + 8);
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x49ea3d*/
  {
    v3 = 0; /*0x49ea3f*/
    if ( m_8 <= 0 ) /*0x49ea43*/
      return 1; /*0x49ea63*/
        v4 = (unsigned int *)*((unsigned int *)this + 4);
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
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x49ea88*/
      v4 = a3; /*0x49ea9e*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x49ea9a*/
        *((unsigned char *)this + 12) = 1;
    if ( !v4 ) /*0x49eaa6*/
      return 0; /*0x49eb1a*/
        if ( *((unsigned int *)this + 1) )
    {
            v5 = *((unsigned int *)this + 2);
      if ( a2 < m_8 ) /*0x49eab4*/
        m_8 = a2; /*0x49eab6*/
            for ( i = 0; i < v5; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
        ++i; /*0x49eac1*/
            if ( *((unsigned char *)this + 13) )
      {
        RA2_OPDEL(*(void **)&this->Items); /*0x49ead9*/
                *((unsigned int *)this + 1) = 0;
      }
    }
        *((unsigned int *)this + 1) = v4;
        *((unsigned int *)this + 2) = a2;
        *((unsigned char *)this + 13) = a3 == 0;
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
  }
    v7 = *((unsigned int *)this + 2);
    if ( v7 < *((unsigned int *)this + 4) )
        *((unsigned int *)this + 4) = v7;
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

    v2 = *((unsigned int *)this + 16);
  result = 0; /*0x49eb23*/
  if ( m_10 <= 0 ) /*0x49eb28*/
    return -1; /*0x49eb3f*/
    for ( i = (unsigned int *)*((unsigned int *)this + 4); *i != *a2; ++i )
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

    v2 = *((unsigned int *)this + 8);
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x49eb5d*/
  {
    v3 = 0; /*0x49eb5f*/
    if ( m_8 <= 0 ) /*0x49eb63*/
      return 1; /*0x49eb83*/
        v4 = (unsigned int *)*((unsigned int *)this + 4);
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
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x49ebac*/
      v4 = a3; /*0x49ebc2*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x49ebbe*/
        *((unsigned char *)this + 12) = 1;
    if ( v4 ) /*0x49ebca*/
    {
            if ( *((unsigned int *)this + 1) )
      {
                v6 = *((unsigned int *)this + 2);
        if ( a2 < m_8 ) /*0x49ebe1*/
          m_8 = a2; /*0x49ebe3*/
                for ( i = 0; i < v6; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
          ++i; /*0x49ebee*/
                if ( *((unsigned char *)this + 13) )
        {
          RA2_OPDEL(*(void **)&this->Items); /*0x49ec06*/
                    *((unsigned int *)this + 1) = 0;
        }
      }
            *((unsigned int *)this + 1) = v4;
            *((unsigned int *)this + 2) = a2;
            *((unsigned char *)this + 13) = a3 == 0;
      return 1; /*0x49ec28*/
    }
    else
    {
      return 0; /*0x49ebcf*/
    }
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
    return 1; /*0x49ec38*/
  }
}
} // namespace gamemd

// 0x49EC40
namespace gamemd {
void DynamicVectorClass_PAD_16::Remove()
{
    if ( *((unsigned int *)this + 16) && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(*(void **)&this->Items); /*0x49ec53*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x49EC70
namespace gamemd {
int DynamicVectorClass_PAD_16::GetSize(unsigned int * a2)
{
  int result; // eax
  int m_8; // edx
  unsigned int *i; // ecx

    if ( !*((unsigned char *)this + 48) )
    return 0; /*0x49ec78*/
    v3 = *((unsigned int *)this + 32);
  result = 0; /*0x49ec81*/
  if ( m_8 <= 0 ) /*0x49ec85*/
    return -1; /*0x49ec9c*/
  for ( i = *(unsigned int **)&this->Items; *i != *a2; ++i ) /*0x49ec8b*/
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
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
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
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x49ed48*/
      v4 = a3; /*0x49ed5e*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x49ed5a*/
        *((unsigned char *)this + 12) = 1;
    if ( !v4 ) /*0x49ed66*/
      return 0; /*0x49edda*/
        if ( *((unsigned int *)this + 1) )
    {
            v5 = *((unsigned int *)this + 2);
      if ( a2 < m_8 ) /*0x49ed74*/
        m_8 = a2; /*0x49ed76*/
            for ( i = 0; i < v5; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
        ++i; /*0x49ed81*/
            if ( *((unsigned char *)this + 13) )
      {
        RA2_OPDEL(*(void **)&this->Items); /*0x49ed99*/
                *((unsigned int *)this + 1) = 0;
      }
    }
        *((unsigned int *)this + 1) = v4;
        *((unsigned int *)this + 2) = a2;
        *((unsigned char *)this + 13) = a3 == 0;
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
  }
    v7 = *((unsigned int *)this + 2);
    if ( v7 < *((unsigned int *)this + 4) )
        *((unsigned int *)this + 4) = v7;
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

    v2 = *((unsigned int *)this + 16);
  result = 0; /*0x49ede3*/
  if ( m_10 <= 0 ) /*0x49ede8*/
    return -1; /*0x49edff*/
    for ( i = (unsigned int *)*((unsigned int *)this + 4); *i != *a2; ++i )
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

  v3 = (void *)((unsigned int)(*(void **)&this->Items));
  *(unsigned int *)this->__pad_0 = (void*)&VectorClass_char___vftable; /*0x49ee16*/
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x49ee28*/
        *(Block + 1) = 0;
  }
  this->IsAllocated = (unsigned char)((gamemd::DynamicVector *)(0));
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x49ee48*/
    RA2_OPDEL(); /*0x49ee4b*/
  return this; /*0x49ee55*/
}
} // namespace gamemd

// 0x49EFF0
namespace gamemd {
VectorClass_flat * DynamicVectorClass_PAD_16::QueryInterface(char a2)
{
  void *v3; // eax

  v3 = (void *)((unsigned int)(*(void **)&this->Items));
  *(unsigned int *)this->__pad_0 = (void*)&VectorClass_DynamicVectorClass_char_____vftable; /*0x49eff6*/
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x49f008*/
        *(Block + 1) = 0;
  }
  this->IsAllocated = (unsigned char)((gamemd::VectorClass_flat *)(0));
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x49f028*/
    RA2_OPDEL(); /*0x49f02b*/
  return this; /*0x49f035*/
}
} // namespace gamemd

// 0x49F040
namespace gamemd {
DynamicVector * DynamicVectorClass_PAD::Destructor(char a2)
{
  void *v3; // eax

  v3 = (void *)((unsigned int)(*(void **)&this->Items));
  *(unsigned int *)this->__pad_0 = (void*)&VectorClass_DynamicVectorClass_char_____vftable; /*0x49f046*/
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x49f058*/
        *(Block + 1) = 0;
  }
  this->IsAllocated = (unsigned char)((gamemd::DynamicVector *)(0));
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x49f078*/
    RA2_OPDEL(); /*0x49f07b*/
  return this; /*0x49f085*/
}
} // namespace gamemd

// 0x50EA00
void DynamicVectorClass_flat::Destroy()
{
  int result; // eax

  result = *(unsigned int *)&this->Items; /*0x50ea06*/
    if ( *((unsigned int *)this + 16) && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(*(void **)&this->Items); /*0x50ea13*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
  return result; /*0x50ea24*/
}
// 0x525010
namespace gamemd {
VectorClass_flat * DynamicVectorClass_AnimType::Add(char a2)
{
  void *v3; // eax

  v3 = (void *)((unsigned int)(*(void **)&this->Items));
  *(unsigned int *)this->__pad_0 = (void*)&VectorClass_AnimTypeClass_const___vftable; /*0x525016*/
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x525028*/
        *(Block + 1) = 0;
  }
  this->IsAllocated = (unsigned char)((gamemd::VectorClass_flat *)(0));
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x525048*/
    RA2_OPDEL(); /*0x52504b*/
  return this; /*0x525055*/
}
} // namespace gamemd

// 0x5251C0
void DynamicVectorClass_flat::Destroy_Alt()
{
  int result; // eax

  result = *(unsigned int *)&this->Items; /*0x5251c6*/
    if ( *((unsigned int *)this + 16) && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(*(void **)&this->Items); /*0x5251d3*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
  return result; /*0x5251e4*/
}
// 0x5251F0
namespace gamemd {
int  DynamicVectorClass_AnimType::GetSize()
{
  int result; // eax
  int m_8; // edx
  unsigned int *i; // ecx

    if ( !*((unsigned char *)this + 48) )
    return 0; /*0x5251f8*/
    v3 = *((unsigned int *)this + 32);
  result = 0; /*0x525201*/
  if ( m_8 <= 0 ) /*0x525205*/
    return -1; /*0x52521c*/
  for ( i = *(unsigned int **)&this->Items; *i != *this; ++i ) /*0x52520b*/
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
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x525237*/
}
} // namespace gamemd

// 0x525250
unsigned int * DynamicVectorClass_flat::AnimTypeConstructor(DynamicVector * aP1, DynamicVector * aP2)
{
    *((unsigned int *)this + 4) = 0;
    *((unsigned int *)this + 8) = aP1;
    *((unsigned char *)this + 12) = 1;
    *((unsigned char *)this + 13) = 0;
    *this = &vt_VectorClass_AnimTypeClass_const;
  if ( aP1 ) /*0x525271*/
  {
    if ( aP2 ) /*0x525279*/
    {
            *((unsigned int *)this + 4) = aP2;
    }
    else
    {
      *(unsigned int *)&this->Items = RA2_OPNEW(4 * aP1); /*0x52528c*/
            *((unsigned char *)this + 13) = 1;
    }
  }
    *this = &vt_DynamicVectorClass_AnimTypeClass_const;
    *((unsigned int *)this + 20) = 10;
    *((unsigned int *)this + 16) = 0;
    return this;
}
// 0x5252B0
namespace gamemd {
DynamicVector * DynamicVectorClass_cptr_AnimTypeClass::Add(char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_AnimTypeClass_const;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x5252c8*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x5252e8*/
    RA2_OPDEL(); /*0x5252eb*/
  return this; /*0x5252f5*/
}
} // namespace gamemd

// 0x588CC0
namespace gamemd {
unsigned int DynamicVectorClass_SubzoneConn::Remove(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 3;
  else
    return 0; /*0x588cc7*/
}
} // namespace gamemd

// 0x5890B0
namespace gamemd {
DynamicVector * DynamicVectorClass_SubzoneConn::Add(char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_SubzoneConnectionStruct;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x5890c8*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x5890e8*/
    RA2_OPDEL(); /*0x5890eb*/
  return this; /*0x5890f5*/
}
} // namespace gamemd

// 0x5892D0
namespace gamemd {
int DynamicVectorClass_SubzoneConn::GetSize(unsigned int * a2)
{
  int v2; // edx
  int result; // eax
  unsigned int *i; // ecx

    v2 = *((unsigned int *)this + 16);
  result = 0; /*0x5892d3*/
  if ( v2 <= 0 ) /*0x5892d8*/
    return -1; /*0x5892ef*/
    for ( i = (unsigned int *)*((unsigned int *)this + 4); *i != *a2; i += 2 )
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
    *((unsigned int *)this + 4) = 0;
    *((unsigned int *)this + 8) = a2;
    *((unsigned char *)this + 12) = 1;
    *((unsigned char *)this + 13) = 0;
    *this = &vt_VectorClass_BuildingTypeClass_const;
  if ( a2 ) /*0x5ac921*/
  {
    if ( a3 ) /*0x5ac929*/
    {
            *((unsigned int *)this + 4) = a3;
    }
    else
    {
      *(unsigned int *)&this->Items = RA2_OPNEW(4 * a2); /*0x5ac93c*/
            *((unsigned char *)this + 13) = 1;
    }
  }
    *this = &vt_DynamicVectorClass_BuildingTypeClass_const;
    *((unsigned int *)this + 20) = 10;
    *((unsigned int *)this + 16) = 0;
    return this;
}
// 0x5C5070
namespace gamemd {
void DynamicVectorClass_ptr_NodeNameType::ddtor()
{
  void *v2; // eax

  v2 = *(void **)&this->Items; /*0x5c5076*/
    *((unsigned int *)this + 64) = 0;
    if ( v2 && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(v2); /*0x5c5086*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x5C50A0
namespace gamemd {
unsigned int DynamicVectorClass_ptr_NodeNameType::Get(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x5c50a7*/
}
} // namespace gamemd

// 0x5C50C0
namespace gamemd {
int DynamicVectorClass_ptr_NodeNameType::Clear(int a2)
{
    return *(unsigned int *)(*((unsigned int *)this + 4) + 4 * a2);
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

    v2 = *((unsigned int *)this + 8);
  if ( v2 == *(unsigned int *)(a2 + 8) ) /*0x5c539d*/
  {
    v3 = 0; /*0x5c539f*/
    if ( v2 <= 0 ) /*0x5c53a3*/
      return 1; /*0x5c53c3*/
        v4 = (unsigned int *)*((unsigned int *)this + 4);
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
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x5c5528*/
      v4 = a3; /*0x5c553e*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x5c553a*/
        *((unsigned char *)this + 12) = 1;
    if ( !v4 ) /*0x5c5546*/
      return 0; /*0x5c55ba*/
        if ( *((unsigned int *)this + 1) )
    {
            v5 = *((unsigned int *)this + 2);
      if ( a2 < m_8 ) /*0x5c5554*/
        m_8 = a2; /*0x5c5556*/
            for ( i = 0; i < v5; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
        ++i; /*0x5c5561*/
            if ( *((unsigned char *)this + 13) )
      {
        RA2_OPDEL(*(void **)&this->Items); /*0x5c5579*/
                *((unsigned int *)this + 1) = 0;
      }
    }
        *((unsigned int *)this + 1) = v4;
        *((unsigned int *)this + 2) = a2;
        *((unsigned char *)this + 13) = a3 == 0;
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
  }
    v7 = *((unsigned int *)this + 2);
    if ( v7 < *((unsigned int *)this + 4) )
        *((unsigned int *)this + 4) = v7;
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

    v2 = *((unsigned int *)this + 16);
  result = 0; /*0x5c55c3*/
  if ( m_10 <= 0 ) /*0x5c55c8*/
    return -1; /*0x5c55df*/
    for ( i = (unsigned int *)*((unsigned int *)this + 4); *i != *a2; ++i )
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

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_NodeNameType;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x5c5908*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x5c5928*/
    RA2_OPDEL(); /*0x5c592b*/
  return this; /*0x5c5935*/
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

  v2 = *(void **)&this->Items; /*0x627d26*/
    *((unsigned int *)this + 64) = 0;
    if ( v2 && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(v2); /*0x627d36*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x627D50
namespace gamemd {
unsigned int DynamicVectorClass_UHashObject_HashString__ptr_SchemeNode::GetCount(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x627d57*/
}
} // namespace gamemd

// 0x627D80
namespace gamemd {
void DynamicVectorClass_UHashObject_HashString__ptr_SchemeNode::Clear_627D80()
{
  void *v2; // eax

  v2 = *(void **)&this->Items; /*0x627d86*/
    *((unsigned int *)this + 64) = 0;
    if ( v2 && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(v2); /*0x627d96*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x627DB0
namespace gamemd {
unsigned int DynamicVectorClass_UHashObject_HashString__ptr_SchemeNode::GetItemIndex(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (a2 - *((unsigned int *)this + 16)) / 3u;
  else
    return 0; /*0x627db7*/
}
} // namespace gamemd

// 0x627DE0
namespace gamemd {
int DynamicVectorClass_UHashObject_HashString__ptr_SchemeNode::GetItem(int a2, int a3)
{
  int v3; // ecx

    v3 = *((unsigned int *)this + 4) + 3 * a3;
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
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x627fa8*/
      v4 = a3; /*0x627fbe*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x627fba*/
        *((unsigned char *)this + 12) = 1;
    if ( !v4 ) /*0x627fc6*/
      return 0; /*0x62803a*/
        if ( *((unsigned int *)this + 1) )
    {
            v5 = *((unsigned int *)this + 2);
      if ( a2 < m_8 ) /*0x627fd4*/
        m_8 = a2; /*0x627fd6*/
            for ( i = 0; i < v5; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
        ++i; /*0x627fe1*/
            if ( *((unsigned char *)this + 13) )
      {
        RA2_OPDEL(*(void **)&this->Items); /*0x627ff9*/
                *((unsigned int *)this + 1) = 0;
      }
    }
        *((unsigned int *)this + 1) = v4;
        *((unsigned int *)this + 2) = a2;
        *((unsigned char *)this + 13) = a3 == 0;
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
  }
    v7 = *((unsigned int *)this + 2);
    if ( v7 < *((unsigned int *)this + 4) )
        *((unsigned int *)this + 4) = v7;
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

    v2 = *((unsigned int *)this + 16);
  result = 0; /*0x628043*/
  if ( m_10 <= 0 ) /*0x628048*/
    return -1; /*0x62805f*/
    for ( i = (unsigned int *)*((unsigned int *)this + 4); *i != *a2; ++i )
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

    v3 = *((unsigned int *)this + 8);
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x628202*/
  {
    v4 = 0; /*0x628204*/
    if ( m_8 <= 0 ) /*0x628208*/
      return 1; /*0x628231*/
    for ( i = 0; /*0x62820a*/
          !DynamicVectorClass_UHashObject_HashString__ptr_SchemeNode::HashEntryCompare(
             (DynamicVectorClass_UHashObject_HashString__ptr_SchemeNode *)(i + *(unsigned int *)&this->Items),
             (unsigned char *)(i + *(unsigned int *)(a2 + 4)));
          i += 3 )
    {
            if ( ++v4 >= *((unsigned int *)this + 8) )
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
    if ( (int)*((unsigned int *)this + 16) > 0 )
        VtableStub::Method_5175D0(*((unsigned int *)this + 4), a2);
  return -1; /*0x6285d0*/
}
} // namespace gamemd

// 0x628640
namespace gamemd {
DynamicVector * DynamicVectorClass_UHashObject_HashString__ptr_SchemeNode::Destructor_1(char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
  *(unsigned int *)this->__pad_0 = (void*)&VectorClass_ColorScheme___vftable; /*0x628646*/
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x628658*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x628678*/
    RA2_OPDEL(); /*0x62867b*/
  return this; /*0x628685*/
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
        v11 = (void *)*(Block + 1);
    *(unsigned int *)this->__pad_0 = (void*)&VectorClass_HashObject_HashString_SchemeNode___vftable; /*0x6286fc*/
        if ( v11 && *((unsigned char *)Block + 13) )
    {
      RA2_OPDEL(v11); /*0x62870a*/
            *(Block + 1) = 0;
    }
        *((unsigned char *)Block + 13) = 0;
        *(Block + 2) = 0;
    if ( (a2 & 1) != 0 ) /*0x628721*/
      RA2_OPDEL(); /*0x628724*/
    return this; /*0x62872c*/
  }
}
} // namespace gamemd

// 0x6287B0
namespace gamemd {
DynamicVector * DynamicVectorClass_UHashObject_HashString__ptr_SchemeNode::Destructor_2(char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
  *(unsigned int *)this->__pad_0 = (void*)&VectorClass_HSVClass_vftable; /*0x6287b6*/
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x6287c8*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x6287e8*/
    RA2_OPDEL(); /*0x6287eb*/
  return this; /*0x6287f5*/
}
} // namespace gamemd

// 0x628800
namespace gamemd {
void DynamicVectorClass_UHashObject_HashString__ptr_SchemeNode::ddtor()
{
  void *v2; // eax

  v2 = *(void **)&this->Items; /*0x628806*/
    *((unsigned int *)this + 64) = 0;
    if ( v2 && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(v2); /*0x628816*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x628830
namespace gamemd {
unsigned int DynamicVectorClass_UHashObject_HashString__ptr_SchemeNode::Get(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (a2 - *((unsigned int *)this + 16)) / 0x104u;
  else
    return 0; /*0x628837*/
}
} // namespace gamemd

// 0x628860
namespace gamemd {
int DynamicVectorClass_UHashObject_HashString__ptr_SchemeNode::Clear(int a2, int a3)
{
  int v3; // esi

    v3 = *((unsigned int *)this + 4) + 260 * a3;
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

    v2 = *((unsigned int *)this + 8);
  if ( m_8 != *(unsigned int *)(a2 + 8) ) /*0x6288b2*/
    return 0; /*0x6288e9*/
  if ( m_8 > 0 ) /*0x6288b8*/
    j_Stub_InfiniteLoop(*(unsigned int *)&this->Items, *(unsigned int *)(a2 + 4)); /*0x6288c6*/
  return 1; /*0x6288dd*/
}
} // namespace gamemd

// 0x628D80
namespace gamemd {
int DynamicVectorClass_UHashObject_HashString__ptr_SchemeNode::GetSize(int a2)
{
    if ( (int)*((unsigned int *)this + 16) > 0 )
        Stub::InfiniteLoop(*((unsigned int *)this + 4), a2);
  return -1; /*0x628db3*/
}
} // namespace gamemd

// 0x67C060
namespace gamemd {
DynamicVector * DynamicVectorClass_cptr_VoxelAnimTypeClass::Add(char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_VoxelAnimTypeClass_const;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x67c078*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x67c098*/
    RA2_OPDEL(); /*0x67c09b*/
  return this; /*0x67c0a5*/
}
} // namespace gamemd
