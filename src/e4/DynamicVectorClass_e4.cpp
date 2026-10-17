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
#include "e4/classes/VtableStub_e4.hpp"
#include "e4/minimal_carriers.hpp"  // G42.42q minimal carriers

// 0x525110
namespace gamemd {  // G42.18 ns repair
AbstractClass * * DynamicVectorClass_AnimType::Release(int a2, unsigned int * a3)
{


  if ( a2 ) /*0x52511c*/
  {
    LOBYTE(this->IsInitialized) = 0; /*0x525126*/
    unsigned int *v4; // edi
    if ( a3 ) /*0x52512c*/
      v4 = a3; /*0x525142*/
    else
      v4 = (unsigned int *)__2_YAPAXI_Z(4 * a2); /*0x52513e*/
    LOBYTE(this->IsInitialized) = 1; /*0x525146*/
    if ( v4 ) /*0x52514a*/
    {
      if ( *&this->Items ) /*0x525155*/
      {
        int m_8; // ecx
        m_8 = (int)(this->Capacity); /*0x52515c*/
        if ( a2 < m_8 ) /*0x525161*/
          m_8 = a2; /*0x525163*/
        int i; // eax
        for ( i = 0; i < m_8; v4[i - 1] = *(unsigned int *)(*&this->Items + 4 * i - 4) ) /*0x525169*/
          ++i; /*0x52516e*/
        if ( BYTE1(this->IsInitialized) ) /*0x52517b*/
        {
          __3_YAXPAX_Z(*&this->Items); /*0x525186*/
          *&this->Items = 0; /*0x52518e*/
        }
      }
      *&this->Items = v4; /*0x525197*/
      this->Capacity = (void *)(a2); /*0x52519f*/
      BYTE1(this->IsInitialized) = a3 == 0; /*0x5251a2*/
      return (gamemd::AbstractClass **)(1); /*0x5251a8*/
    }
    else
    {
      return 0; /*0x52514f*/
    }
  }
  else
  {
    (*(void (**)(_VectorClass_PBVAnimTypeClass *))(*(unsigned int *)this->vfptr + 12))(this); /*0x5251b2*/
    return (gamemd::AbstractClass **)(1); /*0x5251b8*/
  }

}
}  // G42.18 ns repair
// 0x589190
namespace gamemd {
AbstractClass * * DynamicVectorClass_SubzoneConn::Release(int a2, char * a3)
{

  int v3; // ebp
  char *v5; // edi
  char *v6; // eax
  unsigned int *v7; // ecx
  int v8; // edx
  char *v9; // eax
  int v10; // ecx
  int v11; // edx
  int v12; // ecx
  int v13; // eax
  unsigned int *v14; // ebx
  int v15; // eax

  v3 = a2; /*0x589192*/
  if ( a2 ) /*0x58919e*/
  {
    v5 = a3; /*0x5891a4*/
    LOBYTE(this->IsInitialized) = 0; /*0x5891a8*/
    if ( a3 ) /*0x5891ad*/
    {
      v9 = a3; /*0x5891e3*/
      if ( a2 - 1 >= 0 ) /*0x5891e7*/
      {
        v10 = a2; /*0x5891e9*/
        do /*0x5891f3*/
        {
          *(unsigned int *)v9 = 0; /*0x5891ea*/
          v9[4] = 0; /*0x5891ec*/
          v9 += 8; /*0x5891ef*/
          --v10; /*0x5891f2*/
        }
        while ( v10 ); /*0x5891f3*/
      }
    }
    else
    {
      v6 = (char *)__2_YAPAXI_Z(8 * a2); /*0x5891b7*/
      if ( v6 ) /*0x5891c1*/
      {
        v7 = (unsigned int *)v6; /*0x5891c6*/
        if ( a2 - 1 >= 0 ) /*0x5891ca*/
        {
          v8 = a2; /*0x5891cc*/
          do /*0x5891d6*/
          {
            *v7 = 0; /*0x5891cd*/
            v7->vtable2 = 0; /*0x5891cf*/
            v7 += 2; /*0x5891d2*/
            --v8; /*0x5891d5*/
          }
          while ( v8 ); /*0x5891d6*/
        }
        v5 = v6; /*0x5891d8*/
      }
      else
      {
        v5 = 0; /*0x5891dc*/
      }
    }
    LOBYTE(this->IsInitialized) = 1; /*0x5891f7*/
    if ( !v5 ) /*0x5891fb*/
      return 0; /*0x589284*/
    if ( *&this->Items ) /*0x589201*/
    {
      v11 = *&this->Capacity; /*0x589206*/
      if ( a2 < v11 ) /*0x58920b*/
        v11 = a2; /*0x58920d*/
      v12 = 0; /*0x58920f*/
      if ( v11 > 0 ) /*0x589213*/
      {
        do /*0x589232*/
        {
          v13 = 8 * v12; /*0x589218*/
          v14 = (unsigned int *)(*&this->Items + 8 * v12++); /*0x589221*/
          *(unsigned int *)&v5[v13] = *v14; /*0x589228*/
          *(unsigned int *)&v5[v13 + 4] = v14[1]; /*0x58922e*/
        }
        while ( v12 < v11 ); /*0x589232*/
        v3 = a2; /*0x589234*/
      }
      if ( BYTE1(this->IsInitialized) ) /*0x58923a*/
      {
        __3_YAXPAX_Z(*&this->Items); /*0x589243*/
        *&this->Items = 0; /*0x58924b*/
      }
    }
    *&this->Items = v5; /*0x589256*/
    *&this->Capacity = v3; /*0x58925c*/
    BYTE1(this->IsInitialized) = a3 == 0; /*0x58925f*/
  }
  else
  {
    (*(void (**)(_DynamicVectorClass_USubzoneConnectionStruct *))(*(unsigned int *)this->__pad_0 + 12))(this); /*0x589268*/
  }
  v15 = *&this->Capacity; /*0x58926b*/
  if ( v15 < *(unsigned int *)this->Count ) /*0x589273*/
    *(unsigned int *)this->Count = v15; /*0x589275*/
  return 1; /*0x589278*/

}
}
// 0x517590
namespace gamemd {
int DynamicVectorClass_UHashObject_HashString__ptr_SchemeNode::HashEntryCompare(unsigned char * a2)
{

  return this->vfptr != *a2 || this->m_1 != a2[1] || this->__pad_0[2] != a2[2]; /*0x5175bd*/

}
}
// 0x6284A0
namespace gamemd {
AbstractClass * * DynamicVectorClass_UHashObject_HashString__ptr_SchemeNode::SetCapacity_0(int a2, char * a3)
{

  int v3; // ebp
  char *v5; // edi
  int v6; // eax
  unsigned char *v7; // ecx
  int v8; // edx
  char *v9; // eax
  int v10; // ecx
  int m_8; // ecx
  int v12; // eax
  int v13; // edx
  char *v14; // ebx
  void *v15; // eax

  v3 = a2; /*0x6284a2*/
  if ( a2 ) /*0x6284ae*/
  {
    v5 = a3; /*0x6284b4*/
    LOBYTE(this->IsInitialized) = 0; /*0x6284b8*/
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
      v6 = __2_YAPAXI_Z(3 * a2); /*0x6284c4*/
      if ( v6 ) /*0x6284ce*/
      {
        if ( a2 - 1 >= 0 ) /*0x6284d5*/
        {
          v7 = &v6->ptr_2; /*0x6284d7*/
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
    LOBYTE(this->IsInitialized) = 1; /*0x62850c*/
    if ( !v5 ) /*0x628510*/
      return 0; /*0x628592*/
    if ( *&this->Items ) /*0x628512*/
    {
      m_8 = this->Capacity; /*0x628517*/
      if ( a2 < m_8 ) /*0x62851c*/
        m_8 = a2; /*0x62851e*/
      if ( m_8 > 0 ) /*0x628522*/
      {
        v12 = 0; /*0x628524*/
        do /*0x628540*/
        {
          v13 = *&this->Items + v12; /*0x62852b*/
          v14 = &v5[v12]; /*0x62852d*/
          v12 += 3; /*0x628530*/
          --m_8; /*0x628533*/
          *(unsigned short *)v14 = *(unsigned short *)v13; /*0x628537*/
          v14[2] = *(unsigned char *)(v13 + 2); /*0x62853d*/
        }
        while ( m_8 ); /*0x628540*/
        v3 = a2; /*0x628542*/
      }
      if ( BYTE1(this->IsInitialized) ) /*0x628548*/
      {
        __3_YAXPAX_Z(*&this->Items); /*0x628551*/
        *&this->Items = 0; /*0x628559*/
      }
    }
    *&this->Items = v5; /*0x628564*/
    this->Capacity = v3; /*0x62856a*/
    BYTE1(this->IsInitialized) = a3 == 0; /*0x62856d*/
  }
  else
  {
    (*(void (**)(_DynamicVectorClass_VHSVClass *))(*(unsigned int *)this->__pad_0 + 12))(this); /*0x628576*/
  }
  v15 = (void *)this->Capacity; /*0x628579*/
  if ( (int)v15 < this->Count ) /*0x628581*/
    this->Count = (int)v15; /*0x628583*/
  return 1; /*0x628586*/

}
}
// 0x628BB0
namespace gamemd {
AbstractClass * * DynamicVectorClass_UHashObject_HashString__ptr_SchemeNode::Remove(CCINIClass * aP1, unsigned char * a2)
{

  int v3; // edi
  Byte *v5; // esi
  Byte *v6; // ebx
  Byte *v7; // esi
  int v8; // ebx
  int m_8; // eax
  int v10; // ebx
  char *v11; // edi
  int v12; // esi
  void *v13; // eax
  int v15; // [esp+10h] [ebp-8h]
  char *v16; // [esp+10h] [ebp-8h]
  int v17; // [esp+14h] [ebp-4h]

  v3 = aP1; /*0x628bb7*/
  if ( aP1 ) /*0x628bbf*/
  {
    v5 = (Byte *)a2; /*0x628bc5*/
    LOBYTE(this->IsInitialized) = 0; /*0x628bc9*/
    if ( a2 ) /*0x628bcf*/
    {
      if ( aP1 - 1 >= 0 ) /*0x628c25*/
      {
        v8 = aP1; /*0x628c27*/
        do /*0x628c38*/
        {
          Byte::Zero(v5); /*0x628c2c*/
          v5 += 65; /*0x628c31*/
          --v8; /*0x628c37*/
        }
        while ( v8 ); /*0x628c38*/
      }
      v16 = a2; /*0x628c3e*/
    }
    else
    {
      v6 = (Byte *)__2_YAPAXI_Z(260 * aP1); /*0x628be1*/
      if ( v6 ) /*0x628be8*/
      {
        v7 = v6; /*0x628bed*/
        if ( aP1 - 1 >= 0 ) /*0x628bf1*/
        {
          v15 = aP1; /*0x628bf4*/
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
    LOBYTE(this->IsInitialized) = 1; /*0x628c46*/
    if ( !v16 ) /*0x628c4c*/
      return 0; /*0x628cfa*/
    if ( *&this->Items ) /*0x628c52*/
    {
      m_8 = this->Capacity; /*0x628c59*/
      if ( aP1 < m_8 ) /*0x628c5e*/
        m_8 = aP1; /*0x628c60*/
      if ( m_8 > 0 ) /*0x628c64*/
      {
        v10 = 0; /*0x628c66*/
        v11 = v16; /*0x628c68*/
        v17 = m_8; /*0x628c6a*/
        do /*0x628c9c*/
        {
          v12 = v10 + *&this->Items; /*0x628c73*/
          String::CopyChecked(v11, (const char *)v12); /*0x628c76*/
          v11->u32_100 = *(unsigned int *)(v12 + 256); /*0x628c85*/
          v10 += 260; /*0x628c8b*/
          v11 += 260; /*0x628c91*/
          --v17; /*0x628c98*/
        }
        while ( v17 ); /*0x628c9c*/
        v3 = aP1; /*0x628c9e*/
      }
      if ( BYTE1(this->IsInitialized) ) /*0x628ca2*/
      {
        __3_YAXPAX_Z(*&this->Items); /*0x628cad*/
        *&this->Items = 0; /*0x628cb5*/
      }
    }
    *&this->Items = v16; /*0x628cc2*/
    this->Capacity = v3; /*0x628cce*/
    BYTE1(this->IsInitialized) = a2 == 0; /*0x628cd1*/
  }
  else
  {
    (*(void (**)(_DynamicVectorClass_U_HashObject_VHashString_PAVSchemeNode *))(*(unsigned int *)this->__pad_0 + 12))(this); /*0x628cdb*/
  }
  v13 = (void *)this->Capacity; /*0x628cde*/
  if ( (int)v13 < this->Count ) /*0x628ce6*/
    this->Count = (int)v13; /*0x628ce8*/
  return 1; /*0x628ceb*/

}
}
// 0x42D540
namespace gamemd {
void DynamicVectorClass_uint::ddtor(void *a1_1)
{

  void *v2; // eax
  v2 = *(void **)&a1_1->Items; /*0x42d546*/
  *(unsigned int *)&a1_1->Count = 0; /*0x42d549*/
  if ( v2 && (((unsigned char *)&(*(unsigned int *)&a1_1->IsAllocated))[1]) ) /*0x42d550*/
  {
    operator delete((v2)); /*0x42d556*/
    a1_1->Items = (unsigned int)(0); /*0x42d55e*/
  }
  (((unsigned char *)&(a1_1->IsInitialized))[1]) = 0; /*0x42d561*/
  *(unsigned int *)&a1_1->Capacity = 0; /*0x42d564*/
}
} // namespace gamemd

// 0x42D590
namespace gamemd {
int DynamicVectorClass_uint::Clear(int a2)
{
  return *(unsigned int *)(*&this->Items + 4 * a2); /*0x42d59a*/
}
} // namespace gamemd

// 0x42D600
namespace gamemd {
char DynamicVectorClass_uint::AddRef(int a2)
{

  int m_8; // esi
  m_8 = (int)(*&this->Capacity); /*0x42d602*/
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x42d60d*/
  {
    int v3 = 0; // edx /*0x42d60f*/
    if ( m_8 <= 0 ) /*0x42d613*/
      return 1; /*0x42d633*/
    unsigned int *v4; // eax
    v4 = (unsigned int *)(*&this->Items); /*0x42d615*/
    int v5; // ecx
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


  if ( a2 ) /*0x42d64c*/
  {
    LOBYTE(this->IsInitialized) = 0; /*0x42d656*/
    unsigned int *v4; // edi
    if ( a3 ) /*0x42d65c*/
      v4 = a3; /*0x42d672*/
    else
      v4 = (unsigned int *)__2_YAPAXI_Z(4 * a2); /*0x42d66e*/
    LOBYTE(this->IsInitialized) = 1; /*0x42d676*/
    if ( v4 ) /*0x42d67a*/
    {
      if ( *&this->Items ) /*0x42d685*/
      {
        int m_8; // ecx
        m_8 = (int)(this->Capacity); /*0x42d68c*/
        if ( a2 < m_8 ) /*0x42d691*/
          m_8 = a2; /*0x42d693*/
        int i; // eax
        for ( i = 0; i < m_8; v4[i - 1] = *(unsigned int *)(*&this->Items + 4 * i - 4) ) /*0x42d699*/
          ++i; /*0x42d69e*/
        if ( BYTE1(this->IsInitialized) ) /*0x42d6ab*/
        {
          __3_YAXPAX_Z(*&this->Items); /*0x42d6b6*/
          *&this->Items = 0; /*0x42d6be*/
        }
      }
      *&this->Items = v4; /*0x42d6c7*/
      this->Capacity = (void *)(a2); /*0x42d6cf*/
      BYTE1(this->IsInitialized) = a3 == 0; /*0x42d6d2*/
      return 1; /*0x42d6d8*/
    }
    else
    {
      return 0; /*0x42d67f*/
    }
  }
  else
  {
    (*(void (**)(_VectorClass_I *))(*(unsigned int *)this->vtable1 + 12))(this); /*0x42d6e2*/
    return 1; /*0x42d6e8*/
  }

}
} // namespace gamemd

// 0x42D6F0
namespace gamemd {
void DynamicVectorClass_uint::Clear_0()
{
  if ( *&this->IsAllocated && (((unsigned char *)&(*&this->IsAllocated))[1]) ) /*0x42d6fd*/
  {
    operator delete((*&this->Items)); /*0x42d703*/
    *&this->Items = 0; /*0x42d70b*/
  }
  (this->IsAllocated) = 0; /*0x42d70e*/
  *&this->Capacity = 0; /*0x42d711*/
}
} // namespace gamemd

// 0x42D720
namespace gamemd {
int DynamicVectorClass_uint::FindItemIndex(unsigned int * a2)
{

  if ( !(this->IsInitialized) ) /*0x42d720*/
    return 0; /*0x42d728*/
  int m_8; // edx
  m_8 = (int)(*&this->Capacity); /*0x42d72e*/
  int result = 0; // eax /*0x42d731*/
  if ( m_8 <= 0 ) /*0x42d735*/
    return -1; /*0x42d74c*/
  unsigned int *i; // ecx
  for ( i = *&this->Items; *i != *a2; ++i ) /*0x42d73b*/
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
  if ( (this->IsInitialized) ) /*0x42d760*/
    return (unsigned int)(a2 - *&this->Items) >> 2; /*0x42d775*/
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
  void *v7; // eax

  if ( a2 ) /*0x42d78c*/
  {
    LOBYTE(this->IsInitialized) = 0; /*0x42d792*/
    if ( a3 ) /*0x42d798*/
      v4 = a3; /*0x42d7ae*/
    else
      v4 = (unsigned int *)__2_YAPAXI_Z(4 * a2); /*0x42d7aa*/
    LOBYTE(this->IsInitialized) = 1; /*0x42d7b2*/
    if ( !v4 ) /*0x42d7b6*/
      return 0; /*0x42d82a*/
    if ( *&this->Items ) /*0x42d7b8*/
    {
      m_8 = this->Capacity; /*0x42d7bf*/
      if ( a2 < m_8 ) /*0x42d7c4*/
        m_8 = a2; /*0x42d7c6*/
      for ( i = 0; i < m_8; v4[i - 1] = *(unsigned int *)(*&this->Items + 4 * i - 4) ) /*0x42d7cc*/
        ++i; /*0x42d7d1*/
      if ( BYTE1(this->IsInitialized) ) /*0x42d7de*/
      {
        __3_YAXPAX_Z(*&this->Items); /*0x42d7e9*/
        *&this->Items = 0; /*0x42d7f1*/
      }
    }
    *&this->Items = v4; /*0x42d7fa*/
    this->Capacity = a2; /*0x42d802*/
    BYTE1(this->IsInitialized) = a3 == 0; /*0x42d805*/
  }
  else
  {
    (*(void (**)(_DynamicVectorClass_I *))(*(unsigned int *)this->ClearAndFree2_ph + 12))(this); /*0x42d80e*/
  }
  v7 = (void *)this->Capacity; /*0x42d811*/
  if ( (int)v7 < this->Count ) /*0x42d819*/
    this->Count = (int)v7; /*0x42d81b*/
  return 1; /*0x42d81e*/

}
} // namespace gamemd

// 0x42D880
namespace gamemd {
int DynamicVectorClass_uint::GetSize(unsigned int * a2)
{


  int m_10; // edx
  m_10 = (int)(this->Count); /*0x42d880*/
  int result = 0; // eax /*0x42d883*/
  if ( m_10 <= 0 ) /*0x42d888*/
    return -1; /*0x42d89f*/
  unsigned int *i; // ecx
  for ( i = *&this->Items; *i != *a2; ++i ) /*0x42d88e*/
  {
    if ( ++result >= m_10 ) /*0x42d89d*/
      return -1; /*0x42d89d*/
  }
  return result; /*0x42d8a2*/

}
}
// 0x42DB10
namespace gamemd {
VectorClass_flat * DynamicVectorClass_uint::Destructor(unsigned int * Block, char a2)
{

  void *v3 = *&Block->u32_8; // eax /*0x42db13*/
  *(unsigned int *)Block->tail_0 = &vt_VectorClass; /*0x42db16*/
  if ( v3 && (((unsigned char *)&(*&Block->u32_8))[1]) ) /*0x42db20*/
  {
    operator delete((v3)); /*0x42db28*/
    Block->Items = (unsigned int)(0); /*0x42db30*/
  }
  (Block->u8_9) = 0; /*0x42db3b*/
  *&Block->u32_8 = 0; /*0x42db41*/
  if ( (a2 & 1) != 0 ) /*0x42db48*/
    operator delete((Block)); /*0x42db4b*/
  return Block->tail_0; /*0x42db55*/
}
} // namespace gamemd

// 0x42DB60
namespace gamemd {
DynamicVectorClass_uint * DynamicVectorClass_uint::Add(unsigned int * Block, char a2, void *a3_1)
{


  void *v3 = *&Block->__pad_004; // eax /*0x42db63*/
  *(unsigned int *)Block->tail_0 = &vt_VectorClass; /*0x42db66*/
  if ( v3 && BYTE1(Block->m_C) ) /*0x42db70*/
  {
    __3_YAXPAX_Z(v3); /*0x42db78*/
    *(unsigned int *)&Block->m_1[3] = 0; /*0x42db80*/
  }
  BYTE1(Block->m_C) = 0; /*0x42db8b*/
  Block->m_8 = 0; /*0x42db91*/
  if ( (a2 & 1) != 0 ) /*0x42db98*/
    __3_YAXPAX_Z(Block); /*0x42db9b*/
  return Block->__pad_0; /*0x42dba5*/

}
} // namespace gamemd

// 0x4779E0
namespace gamemd {  // G42.18c ns repair
unsigned int * DynamicVectorClass_flat::Copy(DynamicVector * aP1, void *a2)
{

  int v3; // eax
  void *v4; // eax
  int Capacity; // ecx
  int v6; // eax

  this->Items = 0; /*0x4779ed*/
  this->Capacity = 0; /*0x4779f0*/
  this->IsInitialized[0] = 1; /*0x4779f3*/
  this->IsAllocated[0] = 0; /*0x4779f7*/
  this->vfptr = (int)&vt_VectorClass_int; /*0x4779fa*/
  if ( this != (DynamicVectorClass *)a2 ) /*0x477a00*/
  {
    VectorClass::Destroy((int)this); /*0x477a02*/
    v3 = a2[2]; /*0x477a08*/
    this->Capacity = v3; /*0x477a0d*/
    if ( v3 ) /*0x477a10*/
    {
      v4 = (void *)__2_YAPAXI_Z(4 * v3); /*0x477a16*/
      this->Items = (int)v4; /*0x477a20*/
      if ( v4 ) /*0x477a23*/
      {
        Capacity = this->Capacity; /*0x477a25*/
        v6 = 0; /*0x477a28*/
        this->IsAllocated[0] = 1; /*0x477a2c*/
        if ( Capacity > 0 ) /*0x477a30*/
        {
          do /*0x477a44*/
          {
            *(unsigned int *)(this->Items + 4 * v6) = *(unsigned int *)(a2[1] + 4 * v6); /*0x477a3b*/
            ++v6; /*0x477a41*/
          }
          while ( v6 < this->Capacity ); /*0x477a44*/
        }
      }
    }
    else
    {
      this->Items = 0; /*0x477a48*/
      this->IsAllocated[0] = 0; /*0x477a4b*/
    }
  }
  this->Count = a2[4]; /*0x477a51*/
  this->CapacityIncrement = a2[5]; /*0x477a57*/
  this->vfptr = (int)&vt_DynamicVectorClass_int; /*0x477a5a*/
  return &this->vfptr; /*0x477a62*/

}
}  // G42.18c ns repair
// 0x477DB0
namespace gamemd {  // G42.18c ns repair
unsigned int * DynamicVectorClass_flat::Construct(int a2, int a3, void *a3_2, void *a4, void *a5, void *a6, void *a7, void *a8, void *a9)
{
  *&this->Items = 0; /*0x477db9*/
  *&this->IsInitialized = a2; /*0x477dc0*/
  (this->IsInitialized) = 1; /*0x477dc3*/
  (this->IsAllocated) = 0; /*0x477dc7*/
  /* X11: vtable install elided (implicit via VectorClass virtuals 0x477dcb) */
  if ( a2 ) /*0x477dd1*/
  {
    if ( a3 ) /*0x477dd9*/
    {
      *&this->Items = (void *)(a3); /*0x477ddb*/
    }
    else
    {
      *&this->Items = (void *)((unsigned int)(operator new(4 * a2))); /*0x477dec*/
      (this->IsAllocated) = 1; /*0x477def*/
    }
  }
  /* X11: vtable install elided (implicit via DynamicVectorClass virtuals 0x477df3) */
  this->CapacityIncrement = 10; /*0x477df9*/
  this->Count = 0; /*0x477e00*/
  return (unsigned int *)(this->vfptr); /*0x477e09*/
}
}  // G42.18c ns repair
// 0x49E950
namespace gamemd {
void DynamicVectorClass_PAD::ddtor(void *a1_1)
{

  void *v2; // eax
  v2 = *(void **)&a1_1->Items; /*0x49e956*/
  *(unsigned int *)&a1_1->Count = 0; /*0x49e959*/
  if ( v2 && (((unsigned char *)&(*(unsigned int *)&a1_1->IsAllocated))[1]) ) /*0x49e960*/
  {
    operator delete((v2)); /*0x49e966*/
    a1_1->Items = (unsigned int)(0); /*0x49e96e*/
  }
  (((unsigned char *)&(a1_1->IsInitialized))[1]) = 0; /*0x49e971*/
  *(unsigned int *)&a1_1->Capacity = 0; /*0x49e974*/
}
} // namespace gamemd

// 0x49E980
namespace gamemd {
unsigned int DynamicVectorClass_PAD::Get(int a2, void *a2_2)
{
  if ( (*((unsigned char *)&(a2_2->IsInitialized))) ) /*0x49e980*/
    return (unsigned int)(a2_2 - ((unsigned int)(a2_2->Items))) >> 2; /*0x49e995*/
  else
    return 0; /*0x49e987*/
}
} // namespace gamemd

// 0x49E9A0
namespace gamemd {
int DynamicVectorClass_PAD::Clear(int a2)
{
  return *(unsigned int *)(*&this->Items + 4 * a2); /*0x49e9aa*/
}
} // namespace gamemd

// 0x49E9B0
namespace gamemd {
void DynamicVectorClass_PAD::Clear_49E9B0()
{


  void *v2 = *&this->Items; // eax /*0x49e9b6*/
  this->Count = 0; /*0x49e9b9*/
  if ( v2 && BYTE1(this->IsInitialized) ) /*0x49e9c0*/
  {
    __3_YAXPAX_Z(v2); /*0x49e9c6*/
    *&this->Items = 0; /*0x49e9ce*/
  }
  BYTE1(this->IsInitialized) = 0; /*0x49e9d1*/
  this->Capacity = 0; /*0x49e9d4*/

}
} // namespace gamemd

// 0x49E9E0
namespace gamemd {
unsigned int DynamicVectorClass_PAD::GetCount(int a2)
{

  if ( LOBYTE(this->IsInitialized) ) /*0x49e9e0*/
    return (unsigned int)(a2 - *&this->Items) >> 2; /*0x49e9f5*/
  else
    return 0; /*0x49e9e7*/

}
} // namespace gamemd

// 0x49EA00
namespace gamemd {
int DynamicVectorClass_PAD_16::Get(int a2, void *a2_2)
{
  return *(unsigned int *)(((unsigned int)(a2_2->Items)) + 4 * a2_2); /*0x49ea0a*/
}
} // namespace gamemd

// 0x49EA30
namespace gamemd {
char DynamicVectorClass_PAD::AddRef(int a2)
{

  int m_8; // esi
  m_8 = (int)(*&this->Capacity); /*0x49ea32*/
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x49ea3d*/
  {
    int v3 = 0; // edx /*0x49ea3f*/
    if ( m_8 <= 0 ) /*0x49ea43*/
      return 1; /*0x49ea63*/
    unsigned int *v4; // eax
    v4 = (unsigned int *)(*&this->Items); /*0x49ea45*/
    int v5; // ecx
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
  void *v7; // eax

  if ( a2 ) /*0x49ea7c*/
  {
    LOBYTE(this->IsInitialized) = 0; /*0x49ea82*/
    if ( a3 ) /*0x49ea88*/
      v4 = a3; /*0x49ea9e*/
    else
      v4 = (unsigned int *)__2_YAPAXI_Z(4 * a2); /*0x49ea9a*/
    LOBYTE(this->IsInitialized) = 1; /*0x49eaa2*/
    if ( !v4 ) /*0x49eaa6*/
      return 0; /*0x49eb1a*/
    if ( *&this->Items ) /*0x49eaa8*/
    {
      m_8 = this->Capacity; /*0x49eaaf*/
      if ( a2 < m_8 ) /*0x49eab4*/
        m_8 = a2; /*0x49eab6*/
      for ( i = 0; i < m_8; v4[i - 1] = *(unsigned int *)(*&this->Items + 4 * i - 4) ) /*0x49eabc*/
        ++i; /*0x49eac1*/
      if ( BYTE1(this->IsInitialized) ) /*0x49eace*/
      {
        __3_YAXPAX_Z(*&this->Items); /*0x49ead9*/
        *&this->Items = 0; /*0x49eae1*/
      }
    }
    *&this->Items = v4; /*0x49eaea*/
    this->Capacity = a2; /*0x49eaf2*/
    BYTE1(this->IsInitialized) = a3 == 0; /*0x49eaf5*/
  }
  else
  {
    (*(void (**)(_DynamicVectorClass_PAD *))(*(unsigned int *)this->__pad_0 + 12))(this); /*0x49eafe*/
  }
  v7 = (void *)this->Capacity; /*0x49eb01*/
  if ( (int)v7 < this->Count ) /*0x49eb09*/
    this->Count = (int)v7; /*0x49eb0b*/
  return 1; /*0x49eb0e*/

}
} // namespace gamemd

// 0x49EB20
namespace gamemd {
int DynamicVectorClass_PAD::GetSize(unsigned int * a2)
{

  int m_10; // edx
  m_10 = (int)(*&this->Count); /*0x49eb20*/
  int result = 0; // eax /*0x49eb23*/
  if ( m_10 <= 0 ) /*0x49eb28*/
    return -1; /*0x49eb3f*/
  unsigned int *i; // ecx
  for ( i = *&this->Items; *i != *a2; ++i ) /*0x49eb2e*/
  {
    if ( ++result >= m_10 ) /*0x49eb3d*/
      return -1; /*0x49eb3d*/
  }
  return result; /*0x49eb42*/
}
}
// 0x49EB50
namespace gamemd {
char DynamicVectorClass_PAD_16::Add(int a2, void *a2_2, void *a3_1)
{

  int m_8 = this->Capacity; // esi /*0x49eb52*/
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x49eb5d*/
  {
    int v3 = 0; // edx /*0x49eb5f*/
    if ( m_8 <= 0 ) /*0x49eb63*/
      return 1; /*0x49eb83*/
    unsigned int *v4; // eax
    v4 = (unsigned int *)(*&this->Items); /*0x49eb65*/
    int v5; // ecx
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
} // namespace gamemd

// 0x49EC40
namespace gamemd {
void DynamicVectorClass_PAD_16::Remove(void *a1_1, void *a2)
{

  if ( *(unsigned int *)&a1_1->m_1[3] && BYTE1(a1_1->m_C) ) /*0x49ec4d*/
  {
    __3_YAXPAX_Z(*(void **)&a1_1->m_1[3]); /*0x49ec53*/
    *(unsigned int *)&a1_1->m_1[3] = 0; /*0x49ec5b*/
  }
  BYTE1(a1_1->m_C) = 0; /*0x49ec5e*/
  a1_1->m_8 = 0; /*0x49ec61*/

}
} // namespace gamemd

// 0x49EC70
namespace gamemd {
} // namespace gamemd

// 0x49ECB0
namespace gamemd {
} // namespace gamemd

// 0x49ED30
namespace gamemd {
char DynamicVectorClass_PAD::SetCapacity(int a2, unsigned int * a3)
{


  if ( a2 ) /*0x49ed3c*/
  {
    LOBYTE(this->IsInitialized) = 0; /*0x49ed42*/
    unsigned int *v4; // edi
    if ( a3 ) /*0x49ed48*/
      v4 = a3; /*0x49ed5e*/
    else
      v4 = (unsigned int *)__2_YAPAXI_Z(4 * a2); /*0x49ed5a*/
    LOBYTE(this->IsInitialized) = 1; /*0x49ed62*/
    if ( !v4 ) /*0x49ed66*/
      return 0; /*0x49edda*/
    if ( *&this->Items ) /*0x49ed68*/
    {
      int m_8 = this->Capacity; // ecx /*0x49ed6f*/
      if ( a2 < m_8 ) /*0x49ed74*/
        m_8 = a2; /*0x49ed76*/
      int i; // eax
      for ( i = 0; i < m_8; v4[i - 1] = *(unsigned int *)(*&this->Items + 4 * i - 4) ) /*0x49ed7c*/
        ++i; /*0x49ed81*/
      if ( BYTE1(this->IsInitialized) ) /*0x49ed8e*/
      {
        __3_YAXPAX_Z(*&this->Items); /*0x49ed99*/
        *&this->Items = 0; /*0x49eda1*/
      }
    }
    *&this->Items = v4; /*0x49edaa*/
    this->Capacity = a2; /*0x49edb2*/
    BYTE1(this->IsInitialized) = a3 == 0; /*0x49edb5*/
  }
  else
  {
    (*(void (**)(_DynamicVectorClass_PAV_DynamicVectorClass_PAD *))(*(unsigned int *)this->vfptr + 12))(this); /*0x49edbe*/
  }
  int v7 = this->Capacity; // eax /*0x49edc1*/
  if ( v7 < this->Count ) /*0x49edc9*/
    this->Count = v7; /*0x49edcb*/
  return 1; /*0x49edce*/

}
} // namespace gamemd

// 0x49EDE0
namespace gamemd {
int DynamicVectorClass_PAD::FindItemIndex(unsigned int * a2)
{

  int m_10 = *&this->Count; // edx /*0x49ede0*/
  int result = 0; // eax /*0x49ede3*/
  if ( m_10 <= 0 ) /*0x49ede8*/
    return -1; /*0x49edff*/
  unsigned int *i; // ecx
  for ( i = *&this->Items; *i != *a2; ++i ) /*0x49edee*/
  {
    if ( ++result >= m_10 ) /*0x49edfd*/
      return -1; /*0x49edfd*/
  }
  return result; /*0x49ee02*/
}
} // namespace gamemd

// 0x49EE10
namespace gamemd {
DynamicVector * DynamicVectorClass_PAD::Add(unsigned int * Block, char a2, void *a3_1)
{


  void *v3 = *&Block->__pad_004; // eax /*0x49ee13*/
  *(unsigned int *)Block->tail_0 = &vt_VectorClass; /*0x49ee16*/
  if ( v3 && BYTE1(Block->m_C) ) /*0x49ee20*/
  {
    __3_YAXPAX_Z(v3); /*0x49ee28*/
    *(unsigned int *)&Block->m_1[3] = 0; /*0x49ee30*/
  }
  BYTE1(Block->m_C) = 0; /*0x49ee3b*/
  Block->m_8 = 0; /*0x49ee41*/
  if ( (a2 & 1) != 0 ) /*0x49ee48*/
    __3_YAXPAX_Z(Block); /*0x49ee4b*/
  return Block->__pad_0; /*0x49ee55*/

}
} // namespace gamemd

// 0x49EFF0
namespace gamemd {
VectorClass_flat * DynamicVectorClass_PAD_16::QueryInterface(unsigned int * Block, char a2)
{

  void *v3 = *&Block->__pad_004; // eax /*0x49eff3*/
  *(unsigned int *)Block->tail_0 = &vt_VectorClassDynamicVectorClass; /*0x49eff6*/
  if ( v3 && (((unsigned char *)&(*&Block->u32_D))[1]) ) /*0x49f000*/
  {
    operator delete((v3)); /*0x49f008*/
    Block->Items = (unsigned int)(0); /*0x49f010*/
  }
  (((unsigned char *)&(*&Block->u32_D))[1]) = 0; /*0x49f01b*/
  Block->Capacity = 0; /*0x49f021*/
  if ( (a2 & 1) != 0 ) /*0x49f028*/
    operator delete((Block)); /*0x49f02b*/
  return Block->tail_0; /*0x49f035*/
}
} // namespace gamemd

// 0x49F040
namespace gamemd {
DynamicVector * DynamicVectorClass_PAD::Destructor(unsigned int * Block, char a2)
{

  void *v3 = *&Block->u32_8; // eax /*0x49f043*/
  *(unsigned int *)Block->tail_0 = &vt_VectorClassDynamicVectorClass; /*0x49f046*/
  if ( v3 && (((unsigned char *)&(*&Block->u32_8))[1]) ) /*0x49f050*/
  {
    operator delete((v3)); /*0x49f058*/
    Block->Items = (unsigned int)(0); /*0x49f060*/
  }
  (Block->u8_9) = 0; /*0x49f06b*/
  *&Block->u32_8 = 0; /*0x49f071*/
  if ( (a2 & 1) != 0 ) /*0x49f078*/
    operator delete((Block)); /*0x49f07b*/
  return Block->tail_0; /*0x49f085*/
}
} // namespace gamemd

// 0x50EA00
namespace gamemd {  // G42.18c ns repair
int DynamicVectorClass_flat::Destroy(void *a1)
{

  int result; // eax
  result = ((unsigned int)(a1->Items)); /*0x50ea06*/
  if ( result && (((unsigned char *)&(*(unsigned int *)&a1->IsAllocated))[1]) ) /*0x50ea0d*/
  {
    operator delete((*(void **)&a1->Items)); /*0x50ea13*/
    a1->Items = (unsigned int)(0); /*0x50ea1b*/
  }
  (((unsigned char *)&(*(unsigned int *)&a1->IsInitialized))[1]) = 0; /*0x50ea1e*/
  a1->Capacity = 0; /*0x50ea21*/
  return result; /*0x50ea24*/
}
}  // G42.18c ns repair
// 0x525010
namespace gamemd {
} // namespace gamemd

// 0x5251C0
namespace gamemd {  // G42.18c ns repair
int DynamicVectorClass_flat::Destroy_Alt()
{


  int result = *&this->Items; // eax /*0x5251c6*/
  if ( result && (((this->IsInitialized) >> 8) & 0xFF) ) /*0x5251cd*/
  {
    __3_YAXPAX_Z(*&this->Items); /*0x5251d3*/
    *&this->Items = 0; /*0x5251db*/
  }
  (this->IsInitialized) = ((this->IsInitialized) & ~(0xFF << 8)) | (((0) & 0xFF) << 8); /*0x5251de*/
  this->Capacity = 0; /*0x5251e1*/
  return result; /*0x5251e4*/

}
}  // G42.18c ns repair
// 0x5251F0
namespace gamemd {
} // namespace gamemd

// 0x525230
namespace gamemd {
unsigned int DynamicVectorClass_AnimType::Remove(int a2, void *a2_1)
{

  if ( LOBYTE(this->IsInitialized) ) /*0x525230*/
    return (unsigned int)(a2 - *&this->Items) >> 2; /*0x525245*/
  else
    return 0; /*0x525237*/

}
} // namespace gamemd

// 0x525250
namespace gamemd {  // G42.18c ns repair
unsigned int * DynamicVectorClass_flat::AnimTypeConstructor(DynamicVector * aP1, DynamicVector * aP2, void *a3)
{
  *&this->Items = 0; /*0x525259*/
  *&this->IsInitialized = aP1; /*0x525260*/
  (this->IsInitialized) = 1; /*0x525263*/
  (this->IsAllocated) = 0; /*0x525267*/
  /* X11: vtable install elided (implicit via VectorClass virtuals 0x52526b) */
  if ( aP1 ) /*0x525271*/
  {
    if ( aP2 ) /*0x525279*/
    {
      *&this->Items = aP2; /*0x52527b*/
    }
    else
    {
      *&this->Items = operator new(4 * aP1); /*0x52528c*/
      (this->IsAllocated) = 1; /*0x52528f*/
    }
  }
  /* X11: vtable install elided (implicit via DynamicVectorClass virtuals 0x525293) */
  this->CapacityIncrement = 10; /*0x525299*/
  this->Count = 0; /*0x5252a0*/
  return this->vfptr; /*0x5252a9*/
}
}  // G42.18c ns repair
// 0x5252B0
namespace gamemd {
} // namespace gamemd

// 0x588CC0
namespace gamemd {
unsigned int DynamicVectorClass_SubzoneConn::Remove(int a2, void *a2_1)
{

  if ( LOBYTE(this->IsInitialized) ) /*0x588cc0*/
    return (unsigned int)(a2 - *&this->Items) >> 3; /*0x588cd5*/
  else
    return 0; /*0x588cc7*/

}
} // namespace gamemd

// 0x5890B0
namespace gamemd {
} // namespace gamemd

// 0x5892D0
namespace gamemd {
} // namespace gamemd

// 0x5AC900
namespace gamemd {  // G42.18c ns repair
unsigned int * DynamicVectorClass_flat::BuildingTypeConstructor(int a2, int a3)
{

  *&this->Items = 0; /*0x5ac909*/
  *&this->Capacity = a2; /*0x5ac910*/
  (this->IsInitialized) = ((this->IsInitialized) & ~0xFF) | ((1) & 0xFF); /*0x5ac913*/
  (this->IsAllocated) = ((this->IsAllocated) & ~(0xFF << 8)) | (((0) & 0xFF) << 8); /*0x5ac917*/
  *(unsigned int *)this->VectorClass = &vt_VectorClass; /*0x5ac91b*/
  if ( a2 ) /*0x5ac921*/
  {
    if ( a3 ) /*0x5ac929*/
    {
      *&this->Items = a3; /*0x5ac92b*/
    }
    else
    {
      *&this->Items = __2_YAPAXI_Z(4 * a2); /*0x5ac93c*/
      (this->IsAllocated) = ((this->IsAllocated) & ~(0xFF << 8)) | (((1) & 0xFF) << 8); /*0x5ac93f*/
    }
  }
  *(unsigned int *)this->VectorClass = &vt_DynamicVectorClass; /*0x5ac943*/
  this->CapacityIncrement = 10; /*0x5ac949*/
  this->Count = 0; /*0x5ac950*/
  return this->VectorClass; /*0x5ac959*/

}
}  // G42.18c ns repair
// 0x5C5070
namespace gamemd {
void DynamicVectorClass_ptr_NodeNameType::ddtor(void *a1_1)
{

  void *v2; // eax
  v2 = *(void **)&a1_1->Items; /*0x5c5076*/
  *(unsigned int *)&a1_1->Count = 0; /*0x5c5079*/
  if ( v2 && (((unsigned char *)&(*(unsigned int *)&a1_1->IsAllocated))[1]) ) /*0x5c5080*/
  {
    operator delete((v2)); /*0x5c5086*/
    a1_1->Items = (unsigned int)(0); /*0x5c508e*/
  }
  (((unsigned char *)&(a1_1->IsInitialized))[1]) = 0; /*0x5c5091*/
  *(unsigned int *)&a1_1->Capacity = 0; /*0x5c5094*/
}
} // namespace gamemd

// 0x5C50A0
namespace gamemd {
} // namespace gamemd

// 0x5C50C0
namespace gamemd {
int DynamicVectorClass_ptr_NodeNameType::Clear(int a2)
{

  return *(unsigned int *)(*&this->Items + 4 * a2); /*0x5c50ca*/

}
} // namespace gamemd

// 0x5C5390
namespace gamemd {
} // namespace gamemd

// 0x5C5510
namespace gamemd {
char DynamicVectorClass_ptr_NodeNameType::Remove(int a2, unsigned int * a3)
{


  if ( a2 ) /*0x5c551c*/
  {
    LOBYTE(this->IsInitialized) = 0; /*0x5c5522*/
    unsigned int *v4; // edi
    if ( a3 ) /*0x5c5528*/
      v4 = a3; /*0x5c553e*/
    else
      v4 = (unsigned int *)__2_YAPAXI_Z(4 * a2); /*0x5c553a*/
    LOBYTE(this->IsInitialized) = 1; /*0x5c5542*/
    if ( !v4 ) /*0x5c5546*/
      return 0; /*0x5c55ba*/
    if ( *&this->Items ) /*0x5c5548*/
    {
      int m_8 = this->Capacity; // ecx /*0x5c554f*/
      if ( a2 < m_8 ) /*0x5c5554*/
        m_8 = a2; /*0x5c5556*/
      int i; // eax
      for ( i = 0; i < m_8; v4[i - 1] = *(unsigned int *)(*&this->Items + 4 * i - 4) ) /*0x5c555c*/
        ++i; /*0x5c5561*/
      if ( BYTE1(this->IsInitialized) ) /*0x5c556e*/
      {
        __3_YAXPAX_Z(*&this->Items); /*0x5c5579*/
        *&this->Items = 0; /*0x5c5581*/
      }
    }
    *&this->Items = v4; /*0x5c558a*/
    this->Capacity = a2; /*0x5c5592*/
    BYTE1(this->IsInitialized) = a3 == 0; /*0x5c5595*/
  }
  else
  {
    (*(void (**)(_DynamicVectorClass_PAUNodeNameType *))(*(unsigned int *)this->vfptr + 12))(this); /*0x5c559e*/
  }
  int v7 = this->Capacity; // eax /*0x5c55a1*/
  if ( v7 < this->Count ) /*0x5c55a9*/
    this->Count = v7; /*0x5c55ab*/
  return 1; /*0x5c55ae*/

}
} // namespace gamemd

// 0x5C55C0
namespace gamemd {
} // namespace gamemd

// 0x5C58F0
namespace gamemd {
} // namespace gamemd

// 0x6244A0
namespace gamemd {
} // namespace gamemd

// 0x6244C0
namespace gamemd {
unsigned int * DynamicVectorClass_UHashObject_HashString__ptr_SchemeNode::Destructor_0(char a2)
{

  /* X11: vtable install elided (implicit via DialogControl virtuals 0x6244c9) */
  if ( (a2 & 1) != 0 ) /*0x6244cf*/
    __3_YAXPAX_Z(this); /*0x6244d2*/
  return this; /*0x6244dc*/

}
} // namespace gamemd

// 0x627D20
namespace gamemd {
void DynamicVectorClass_UHashObject_HashString__ptr_SchemeNode::Clear_627D20()
{

  void *v2 = *&this->Items; // eax /*0x627d26*/
  *&this->Count = 0; /*0x627d29*/
  if ( v2 && (((unsigned char *)&(*&this->IsAllocated))[1]) ) /*0x627d30*/
  {
    operator delete((v2)); /*0x627d36*/
    *&this->Items = 0; /*0x627d3e*/
  }
  (this->IsAllocated) = 0; /*0x627d41*/
  this->Capacity = 0; /*0x627d44*/
}
} // namespace gamemd

// 0x627D50
namespace gamemd {
} // namespace gamemd

// 0x627D80
namespace gamemd {
void DynamicVectorClass_UHashObject_HashString__ptr_SchemeNode::Clear_627D80()
{


  void *v2 = *&this->Items; // eax /*0x627d86*/
  this->Count = 0; /*0x627d89*/
  if ( v2 && BYTE1(this->IsInitialized) ) /*0x627d90*/
  {
    __3_YAXPAX_Z(v2); /*0x627d96*/
    *&this->Items = 0; /*0x627d9e*/
  }
  BYTE1(this->IsInitialized) = 0; /*0x627da1*/
  this->Capacity = 0; /*0x627da4*/

}
} // namespace gamemd

// 0x627DB0
namespace gamemd {
unsigned int DynamicVectorClass_UHashObject_HashString__ptr_SchemeNode::GetItemIndex(int a2)
{
  if ( (this->IsInitialized) ) /*0x627db0*/
    return (a2 - *&this->Items) / 3u; /*0x627dce*/
  else
    return 0; /*0x627db7*/
}
} // namespace gamemd

// 0x627DE0
namespace gamemd {
int DynamicVectorClass_UHashObject_HashString__ptr_SchemeNode::GetItem(int a2, int a3)
{

  unsigned __int8 *v3; // ecx

  v3 = (unsigned __int8 *)(*&this->Items + 3 * a3); /*0x627ded*/
  *(unsigned short *)a2 = *(unsigned short *)v3; /*0x627df8*/
  *(unsigned char *)(a2 + 2) = v3[2]; /*0x627dff*/
  return a2; /*0x627dfb*/

}
} // namespace gamemd

// 0x627F90
namespace gamemd {
} // namespace gamemd

// 0x628040
namespace gamemd {
} // namespace gamemd

// 0x6281F0
namespace gamemd {
char DynamicVectorClass_UHashObject_HashString__ptr_SchemeNode::IsEqualTo(int a2)
{


  int m_8 = this->Capacity; // eax /*0x6281fd*/
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x628202*/
  {
    int v4 = 0; // ebx /*0x628204*/
    if ( m_8 <= 0 ) /*0x628208*/
      return 1; /*0x628231*/
    int i; // esi
    for ( i = 0; /*0x62820a*/
    !((DynamicVectorClass_UHashObject_HashString__ptr_SchemeNode *)(i + *&this->Items))->HashEntryCompare((unsigned char *)(i + *(unsigned int *)(a2 + 4)));
    i += 3 )
    {
      if ( ++v4 >= this->Capacity ) /*0x628229*/
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
  if ( this->Count > 0 ) /*0x6285ad*/
    VtableStub::sub_5175D0(); /*0x6285bc*/
  return -1; /*0x6285d0*/
}
} // namespace gamemd

// 0x628640
namespace gamemd {
DynamicVector * DynamicVectorClass_UHashObject_HashString__ptr_SchemeNode::Destructor_1(unsigned int * Block, char a2)
{

  void *v3 = *&Block->__pad_004; // eax /*0x628643*/
  *(unsigned int *)Block->tail_0 = &vt_VectorClass; /*0x628646*/
  if ( v3 && (((unsigned char *)&(*&Block->u32_D))[1]) ) /*0x628650*/
  {
    operator delete((v3)); /*0x628658*/
    Block->Items = (unsigned int)(0); /*0x628660*/
  }
  (Block->u8_E) = 0; /*0x62866b*/
  Block->Capacity = 0; /*0x628671*/
  if ( (a2 & 1) != 0 ) /*0x628678*/
    operator delete((Block)); /*0x62867b*/
  return Block->tail_0; /*0x628685*/
}
} // namespace gamemd

// 0x628690
namespace gamemd {
} // namespace gamemd

// 0x6287B0
namespace gamemd {
DynamicVector * DynamicVectorClass_UHashObject_HashString__ptr_SchemeNode::Destructor_2(unsigned int * Block, char a2)
{


  void *v3 = *&Block->__pad_004; // eax /*0x6287b3*/
  *(unsigned int *)Block->tail_0 = &vt_VectorClass; /*0x6287b6*/
  if ( v3 && BYTE1(Block->m_C) ) /*0x6287c0*/
  {
    __3_YAXPAX_Z(v3); /*0x6287c8*/
    *(unsigned int *)&Block->m_1[3] = 0; /*0x6287d0*/
  }
  BYTE1(Block->m_C) = 0; /*0x6287db*/
  Block->m_8 = 0; /*0x6287e1*/
  if ( (a2 & 1) != 0 ) /*0x6287e8*/
    __3_YAXPAX_Z(Block); /*0x6287eb*/
  return Block->__pad_0; /*0x6287f5*/

}
} // namespace gamemd

// 0x628800
namespace gamemd {
void DynamicVectorClass_UHashObject_HashString__ptr_SchemeNode::ddtor(void *a1_1)
{

  void *v2; // eax
  v2 = *(void **)&a1_1->Items; /*0x628806*/
  *(unsigned int *)&a1_1->Count = 0; /*0x628809*/
  if ( v2 && (((unsigned char *)&(*(unsigned int *)&a1_1->IsAllocated))[1]) ) /*0x628810*/
  {
    operator delete((v2)); /*0x628816*/
    a1_1->Items = (unsigned int)(0); /*0x62881e*/
  }
  (((unsigned char *)&(a1_1->IsInitialized))[1]) = 0; /*0x628821*/
  a1_1->Capacity = 0; /*0x628824*/
}
} // namespace gamemd

// 0x628830
namespace gamemd {
} // namespace gamemd

// 0x628860
namespace gamemd {
int DynamicVectorClass_UHashObject_HashString__ptr_SchemeNode::Clear(int a2, int a3)
{

  unsigned int *v3; // esi

  v3 = (unsigned int *)(*&this->Items + 260 * a3); /*0x628876*/
  String::Copy((char *)a2, (const char *)v3); /*0x62887a*/
  *(unsigned int *)(a2 + 256) = v3[64]; /*0x628887*/
  return a2; /*0x62888d*/

}
} // namespace gamemd

// 0x6288A0
namespace gamemd {
} // namespace gamemd

// 0x628D80
namespace gamemd {
} // namespace gamemd

// 0x67C060
namespace gamemd {
} // namespace gamemd
