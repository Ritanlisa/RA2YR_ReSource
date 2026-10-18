// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Conflict_WorldDominationTour_12__e4.hpp"
#include "e4/classes/Conflict_WorldDominationTour_12_e4.hpp"
#include "e4/classes/Conflict_WorldDominationTour_26_e4.hpp"
#include "e4/classes/ComPtr_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/GameOption_e4.hpp"
#include "e4/minimal_carriers.hpp"  // G42.42q minimal carriers
#include "e4/classes/DynamicVector_e4.hpp"

// 0x766C10
namespace gamemd {  // G42.18 ns repair
int Conflict_WorldDominationTour_12::Release(int a2, unsigned int * a3)
{

  int m_8; // ebp
  int *v5; // eax
  ComPtr *v6; // esi
  int v7; // ebx
  ComPtr *v8; // ebx
  int v9; // ebx
  int i; // esi
  void (***v12)(unsigned int, int); // ecx
  ComPtr *v13; // [esp+10h] [ebp-4h]

  m_8 = a2; /*0x766c13*/
  if ( !a2 ) /*0x766c1d*/
  {
    (*(void (**)(_VectorClass_V_rc_ptr_VGameOption_WorldDominationTour *))(*(unsigned int *)this->__pad_0 + 12))(this); /*0x766d1d*/
    return 1; /*0x766d23*/
  }
  (this->m_C) = ((this->m_C) & ~0xFF) | ((0) & 0xFF); /*0x766c27*/
  if ( a3 ) /*0x766c2d*/
  {
    *a3 = a2; /*0x766c73*/
    v6 = (ComPtr *)(a3 + 1); /*0x766c75*/
    if ( a2 - 1 >= 0 ) /*0x766c81*/
    {
      v9 = a2; /*0x766c83*/
      do /*0x766c97*/
      {
        ComPtr::Constructor(v6); /*0x766c88*/
        /* X11: vtable install elided (X67 star-deref, RHS vt_rc_ptr_WorldDominationTour_GameOption) */  /*0x766c8d*/
        v6 = (ComPtr *)((char *)v6 + 8); /*0x766c93*/
        --v9; /*0x766c96*/
      }
      while ( v9 ); /*0x766c97*/
      v6 = (ComPtr *)(a3 + 1); /*0x766c99*/
    }
  }
  else
  {
    v5 = (int *)__2_YAPAXI_Z(8 * a2 + 4); /*0x766c37*/
    if ( !v5 ) /*0x766c41*/
    {
      v8 = 0; /*0x766c6f*/
      goto LABEL_14; /*0x766c71*/
    }
    *v5 = a2; /*0x766c43*/
    v6 = (ComPtr *)(v5 + 1); /*0x766c45*/
    v13 = (ComPtr *)(v5 + 1); /*0x766c4b*/
    if ( a2 - 1 >= 0 ) /*0x766c51*/
    {
      v7 = a2; /*0x766c53*/
      do /*0x766c67*/
      {
        ComPtr::Constructor(v6); /*0x766c58*/
        /* X11: vtable install elided (X67 star-deref, RHS vt_rc_ptr_WorldDominationTour_GameOption) */  /*0x766c5d*/
        v6 = (ComPtr *)((char *)v6 + 8); /*0x766c63*/
        --v7; /*0x766c66*/
      }
      while ( v7 ); /*0x766c67*/
      v6 = v13; /*0x766c69*/
    }
  }
  v8 = v6; /*0x766c9d*/
LABEL_14:
  LOBYTE(this->m_C) = 1; /*0x766c9f*/
  if ( !v8 ) /*0x766ca5*/
    return 0; /*0x766caa*/
  if ( *&this->u32_4 ) /*0x766cb1*/
  {
    if ( a2 >= this->m_8 ) /*0x766cbd*/
      m_8 = this->m_8; /*0x766cbf*/
    for ( i = 0; i < m_8; ++i ) /*0x766cc5*/
      ComPtr::Set((ComPtr *)((char *)v8 + 8 * i), *(unsigned int *)(*&this->u32_4 + 8 * i + 4)); /*0x766cd2*/
    if ( BYTE1(this->m_C) ) /*0x766cdc*/
    {
      v12 = *(void (****)(unsigned int, int))&this->u32_4; /*0x766ce3*/
      if ( v12 ) /*0x766ce8*/
        (**v12)(v12, 3); /*0x766cee*/
      *&this->u32_4 = 0; /*0x766cf0*/
    }
    m_8 = a2; /*0x766cf7*/
  }
  *&this->u32_4 = v8; /*0x766d06*/
  this->m_8 = m_8; /*0x766d09*/
  BYTE1(this->m_C) = a3 == 0; /*0x766d0c*/
  return 1; /*0x766ca7*/

}
}  // G42.18 ns repair
// 0x766DC0
namespace gamemd {
AbstractClass * * Conflict_WorldDominationTour_12::Constructor_1(int a2, unsigned int * a3)
{

  int m_8; // ebp
  int *v5; // eax
  ComPtr *v6; // ebx
  Conflict_WorldDominationTour *v7; // esi
  ComPtr *v8; // esi
  int v9; // ebx
  int i; // esi
  void (***v11)(unsigned int, int); // ecx
  int v12; // eax
  int v14; // [esp+10h] [ebp-4h]

  m_8 = a2; /*0x766dc3*/
  if ( a2 ) /*0x766dcd*/
  {
    (this->m_C) = ((this->m_C) & ~0xFF) | ((0) & 0xFF); /*0x766dd7*/
    if ( a3 ) /*0x766ddd*/
    {
      *a3 = a2; /*0x766e21*/
      v8 = (ComPtr *)(a3 + 1); /*0x766e23*/
      if ( a2 - 1 >= 0 ) /*0x766e2f*/
      {
        v9 = a2; /*0x766e31*/
        do /*0x766e45*/
        {
          ComPtr::Constructor(v8); /*0x766e36*/
          /* X11: vtable install elided (X67 star-deref, RHS vt_rc_ptr_WorldDominationTour_GameOption) */  /*0x766e3b*/
          v8 = (ComPtr *)((char *)v8 + 8); /*0x766e41*/
          --v9; /*0x766e44*/
        }
        while ( v9 ); /*0x766e45*/
        v8 = (ComPtr *)(a3 + 1); /*0x766e47*/
      }
      v6 = v8; /*0x766e4b*/
    }
    else
    {
      v5 = (int *)__2_YAPAXI_Z(8 * a2 + 4); /*0x766de7*/
      if ( v5 ) /*0x766df1*/
      {
        *v5 = a2; /*0x766df3*/
        v6 = (ComPtr *)(v5 + 1); /*0x766df5*/
        v7 = (Conflict_WorldDominationTour *)(v5 + 1); /*0x766dfb*/
        if ( a2 - 1 >= 0 ) /*0x766dff*/
        {
          v14 = a2; /*0x766e02*/
          do /*0x766e19*/
          {
            Conflict_WorldDominationTour_12::Constructor_3(v7); /*0x766e08*/
            v7 += 2; /*0x766e11*/
            --v14; /*0x766e15*/
          }
          while ( v14 ); /*0x766e19*/
        }
      }
      else
      {
        v6 = 0; /*0x766e1d*/
      }
    }
    (this->m_C) = ((this->m_C) & ~0xFF) | ((1) & 0xFF); /*0x766e4f*/
    if ( !v6 ) /*0x766e53*/
      return 0; /*0x766ed6*/
    if ( *&this->u32_4 ) /*0x766e55*/
    {
      if ( a2 >= this->m_8 ) /*0x766e61*/
        m_8 = this->m_8; /*0x766e63*/
      for ( i = 0; i < m_8; ++i ) /*0x766e69*/
        ComPtr::Set((ComPtr *)((char *)v6 + 8 * i), *(unsigned int *)(*&this->u32_4 + 8 * i + 4)); /*0x766e76*/
      if ( BYTE1(this->m_C) ) /*0x766e80*/
      {
        v11 = *(void (****)(unsigned int, int))&this->u32_4; /*0x766e87*/
        if ( v11 ) /*0x766e8c*/
          (**v11)(v11, 3); /*0x766e92*/
        *&this->u32_4 = 0; /*0x766e94*/
      }
      m_8 = a2; /*0x766e9b*/
    }
    *&this->u32_4 = v6; /*0x766eaa*/
    this->m_8 = m_8; /*0x766ead*/
    BYTE1(this->m_C) = a3 == 0; /*0x766eb0*/
  }
  else
  {
    (*(void (**)(_DynamicVectorClass_V_rc_ptr_VGameOption_WorldDominationTour *))(*(unsigned int *)this->__pad_0 /*0x766eb9*/
                                                                                           + 12))(this);
  }
  v12 = this->m_8; /*0x766ebc*/
  if ( v12 < this->m_10 ) /*0x766ec4*/
    this->m_10 = v12; /*0x766ec6*/
  return 1; /*0x766ec9*/

}
}
// 0x766800
namespace gamemd {
int Conflict_WorldDominationTour_12_::ReleaseBuffer(void *a1_1, void *a2_1)
{
  int (***v2)(unsigned int, int); // ecx
  int result; // eax

  v2 = *(int (****)(unsigned int, int))&this->ptr_4; /*0x766806*/
  *&this->ptr_10 = 0; /*0x766809*/
  if ( v2 && (((unsigned char *)&(*&this->u8_D))[1]) ) /*0x766810*/
  {
    result = (**v2)(v2, 3); /*0x76681d*/
    *&this->ptr_4 = 0; /*0x76681f*/
  }
  (this->u8_D) = 0; /*0x766822*/
  *&this->ptr_8 = 0; /*0x766825*/
  return result; /*0x766828*/
}
}
// 0x766920
namespace gamemd {
BOOL Conflict_WorldDominationTour_26::AddRef(void *a1_1)
{

  return *((unsigned int *)a1_1 + 2) < *(unsigned int *)(*(unsigned int *)&a1_1->m_1[3] + 16); /*0x76692d*/

}
}
// 0x766FA0
namespace gamemd {
BOOL Conflict_WorldDominationTour_26::Release(void *a1_1)
{
  ++*((unsigned int *)a1_1 + 2); /*0x766fa2*/
  return a1_1->__pad_0; /*0x766fa5*/
}
}
// 0x766FB0
namespace gamemd {
BOOL Conflict_WorldDominationTour_26::ddtor()
{

  --this->RefCount; /*0x766fb2*/
  return this->q000; /*0x766fb5*/

}
}
// 0x766830
namespace gamemd {
unsigned int Conflict_WorldDominationTour_12::PointerToIndex(int a2)
{
  if ( (this->m_C) ) /*0x766830*/
    return (unsigned int)(a2 - *&this->u32_4) >> 3; /*0x766845*/
  else
    return 0; /*0x766837*/
}
} // namespace gamemd

// 0x766850
namespace gamemd {
unsigned int * Conflict_WorldDominationTour_12::Seek(unsigned int * a2, int a3, void *a3_2)
{

  int v3 = *&a3_2->u32_4 + 8 * a3_2; // edi /*0x76685d*/
  ComPtr::Constructor((ComPtr *)a3_2); /*0x766862*/
  /* X11: vtable install elided (X68 star-paren-named, RHS vt_rc_ptr) */  /*0x766867*/
  ComPtr::Set((ComPtr *)a3_2, v3->u32_4); /*0x766873*/
  return a3_2; /*0x76687a*/
}
} // namespace gamemd

// 0x766960
namespace gamemd {
unsigned int * Conflict_WorldDominationTour_12::Constructor(char a2, void *a2_1, void *a3, void *a4)
{

  /* X11: vtable install elided (X67 star-deref, RHS vt_rc_ptr_WorldDominationTour_ValueGameOption_unsigned_char) */  /*0x766963*/
  ComPtr::Release((ComPtr *)this); /*0x766969*/
  if ( (a2 & 1) != 0 ) /*0x766973*/
    __3_YAXPAX_Z(this); /*0x766976*/
  return (unsigned int *)(this); /*0x766980*/

}
} // namespace gamemd

// 0x766990
namespace gamemd {
unsigned int * Conflict_WorldDominationTour_12::Constructor_0(char a2)
{

  /* X11: vtable install elided (X67 star-deref, RHS vt_rc_ptr) */  /*0x766993*/
  ComPtr::Release((ComPtr *)this); /*0x766999*/
  if ( (a2 & 1) != 0 ) /*0x7669a3*/
    __3_YAXPAX_Z(this); /*0x7669a6*/
  return (unsigned int *)(this); /*0x7669b0*/

}
} // namespace gamemd

// 0x766BC0
namespace gamemd {
char Conflict_WorldDominationTour_12::AddRef(int a2)
{

  int m_8; // esi
  m_8 = this->m_8; /*0x766bc6*/
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x766bcf*/
  {
    int v3 = 0; // edx /*0x766bd1*/
    if ( m_8 <= 0 ) /*0x766bd5*/
      return 1; /*0x766bfb*/
    unsigned int *v4; // ecx
    v4 = (unsigned int *)(*&this->u32_4 + 4); /*0x766bdd*/
    unsigned int *i; // eax
    for ( i = (unsigned int *)(*(unsigned int *)(a2 + 4) + 4); *v4 == *i; i += 2 ) /*0x766be0*/
    {
      ++v3; /*0x766beb*/
      v4 += 2; /*0x766bef*/
      if ( v3 >= m_8 ) /*0x766bf4*/
        return 1; /*0x766bf4*/
    }
  }
  return 0; /*0x766bf6*/
}
} // namespace gamemd

// 0x766D30
namespace gamemd {
int Conflict_WorldDominationTour_12::ddtor(void *a1)
{
  int (***v2)(unsigned int, int); // ecx
  int result; // eax

  v2 = *(int (****)(unsigned int, int))&this->m_10; /*0x766d36*/
  if ( v2 && this->IsAllocated ) /*0x766d3d*/
  {
    result = (**v2)(v2, 3); /*0x766d4a*/
    this->u32_4 = 0; /*0x766d4c*/
  }
  this->IsAllocated = 0; /*0x766d4f*/
  this->m_8 = 0; /*0x766d52*/
  return result; /*0x766d55*/
}
} // namespace gamemd

// 0x766D60
namespace gamemd {
int Conflict_WorldDominationTour_12::Read(int a2, void *a2_2, void *a3)
{

  if ( !(*((unsigned char *)&(a2_2->q00C))) ) /*0x766d60*/
    return 0; /*0x766d68*/
  int m_8 = a2_2->q008; // edx /*0x766d6e*/
  int result = 0; // eax /*0x766d71*/
  if ( m_8 <= 0 ) /*0x766d75*/
    return -1; /*0x766d90*/
  unsigned int *i; // ecx
  for ( i = (unsigned int *)(*(unsigned int *)&a2_2->q004 + 4); *i != *(unsigned int *)((unsigned int)(a2_2)+ 4); i += 2 ) /*0x766d7e*/
  {
    if ( ++result >= m_8 ) /*0x766d8e*/
      return -1; /*0x766d8e*/
  }
  return result; /*0x766d6a*/
}
}
// 0x766DA0
namespace gamemd {
unsigned int Conflict_WorldDominationTour_12::Write(int a2)
{
  if ( (this->m_C) ) /*0x766da0*/
    return (unsigned int)(a2 - *&this->u32_4) >> 3; /*0x766db5*/
  else
    return 0; /*0x766da7*/
}
} // namespace gamemd

// 0x766F40
namespace gamemd {
int Conflict_WorldDominationTour_12::IndexOf(int a2)
{

  int m_10; // edx
  m_10 = this->m_10; /*0x766f40*/
  int result = 0; // eax /*0x766f43*/
  if ( m_10 <= 0 ) /*0x766f48*/
    return -1; /*0x766f63*/
  unsigned int *i; // ecx
  for ( i = (unsigned int *)(*&this->u32_4 + 4); *i != *(unsigned int *)(a2 + 4); i += 2 ) /*0x766f51*/
  {
    if ( ++result >= m_10 ) /*0x766f61*/
      return -1; /*0x766f61*/
  }
  return result; /*0x766f66*/
}
}
// 0x766FC0
namespace gamemd {
VectorClass_flat * Conflict_WorldDominationTour_12::QueryInterface(unsigned int * Block, char a2)
{
  void (***v3)(unsigned int, int); // ecx

  v3 = *(void (****)(unsigned int, int))&Block->__pad_004; /*0x766fc3*/
  /* X11: vtable install elided (X67 star-deref, RHS vt_VectorClassrc_ptr) */  /*0x766fc6*/
  if ( v3 && (((unsigned char *)&(*&Block->u32_D))[1]) ) /*0x766fd0*/
  {
    (**v3)(v3, 3); /*0x766fdf*/
    *&Block->__pad_004 = 0; /*0x766fe1*/
  }
  (Block->u32_D) = 0; /*0x766fec*/
  Block->u32_8 = 0; /*0x766ff2*/
  if ( (a2 & 1) != 0 ) /*0x766ff9*/
    operator delete((Block)); /*0x766ffc*/
  return Block->tail_0; /*0x767006*/
}
} // namespace gamemd

// 0x767080
namespace gamemd {
DynamicVector * Conflict_WorldDominationTour_12::Constructor_2(unsigned int * Block, char a2)
{
  void (***v3)(unsigned int, int); // ecx

  v3 = *(void (****)(unsigned int, int))&Block->__pad_004; /*0x767083*/
  /* X11: vtable install elided (X67 star-deref, RHS vt_VectorClassrc_ptr) */  /*0x767086*/
  if ( v3 && (((unsigned char *)&(*&Block->u32_D))[1]) ) /*0x767090*/
  {
    (**v3)(v3, 3); /*0x76709f*/
    *&Block->__pad_004 = 0; /*0x7670a1*/
  }
  (Block->u32_D) = 0; /*0x7670ac*/
  Block->u32_8 = 0; /*0x7670b2*/
  if ( (a2 & 1) != 0 ) /*0x7670b9*/
    operator delete((Block)); /*0x7670bc*/
  return Block->tail_0; /*0x7670c6*/
}
} // namespace gamemd

// 0x7670D0
namespace gamemd {
int Conflict_WorldDominationTour_12::Constructor_3(void *a1_1)
{
  ComPtr::Constructor((ComPtr *)a1_1); /*0x7670d3*/
  /* X11: vtable install elided (X67 star-deref, RHS vt_rc_ptr) */  /*0x7670d8*/
  return (int)(a1_1); /*0x7670e0*/
}
} // namespace gamemd
