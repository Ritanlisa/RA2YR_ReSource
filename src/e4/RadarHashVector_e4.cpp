// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/RadarHashVector_e4.hpp"
#include "e4/classes/MapClass_e4.hpp"
#include "e4/classes/TechnoClass_e4.hpp"
#include "e4/classes/VectorClass_flat_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/Block_e4.hpp"  // G42.36 C2027 supply

// 0x658B10
namespace gamemd {  // G42.18 ns repair
AbstractClass * * RadarHashVector::ComputeHashIndex(int a2, char * a3)
{

  int v3; // ebp
  char *v5; // edi
  int v6; // eax
  unsigned int *v7; // ecx
  int v8; // edx
  char *v9; // eax
  int v10; // ecx
  int m_8; // ecx
  int v12; // eax
  unsigned int *v13; // edx
  char *v14; // ebx
  int v15; // eax

  v3 = a2; /*0x658b12*/
  if ( a2 ) /*0x658b1e*/
  {
    v5 = a3; /*0x658b24*/
    (this->m_C) = ((this->m_C) & ~0xFF) | ((0) & 0xFF); /*0x658b28*/
    if ( a3 ) /*0x658b2d*/
    {
      if ( a2 - 1 >= 0 ) /*0x658b67*/
      {
        v9 = a3 + 4; /*0x658b69*/
        v10 = a2; /*0x658b6c*/
        do /*0x658b79*/
        {
          *((unsigned int *)v9 - 1) = 0; /*0x658b6d*/
          *(unsigned int *)v9 = 0; /*0x658b70*/
          *((unsigned int *)v9 + 1) = 0; /*0x658b72*/
          v9 += 16; /*0x658b75*/
          --v10; /*0x658b78*/
        }
        while ( v10 ); /*0x658b79*/
      }
    }
    else
    {
      v6 = __2_YAPAXI_Z(16 * a2); /*0x658b35*/
      if ( v6 ) /*0x658b3f*/
      {
        if ( a2 - 1 >= 0 ) /*0x658b46*/
        {
          v7 = &v6->vtable2; /*0x658b48*/
          v8 = a2; /*0x658b4b*/
          do /*0x658b58*/
          {
            *(v7 - 1) = 0; /*0x658b4c*/
            *v7 = 0; /*0x658b4f*/
            v7[1] = 0; /*0x658b51*/
            v7 += 4; /*0x658b54*/
            --v8; /*0x658b57*/
          }
          while ( v8 ); /*0x658b58*/
        }
        v5 = (char *)v6; /*0x658b5a*/
      }
      else
      {
        v5 = 0; /*0x658b5e*/
      }
    }
    (this->m_C) = ((this->m_C) & ~0xFF) | ((1) & 0xFF); /*0x658b7d*/
    if ( !v5 ) /*0x658b81*/
      return 0; /*0x658c11*/
    if ( *&this->q004 ) /*0x658b87*/
    {
      m_8 = this->m_8; /*0x658b8c*/
      if ( a2 < m_8 ) /*0x658b91*/
        m_8 = a2; /*0x658b93*/
      if ( m_8 > 0 ) /*0x658b97*/
      {
        v12 = 0; /*0x658b99*/
        do /*0x658bbf*/
        {
          v13 = (unsigned int *)(*&this->q004 + v12); /*0x658ba0*/
          v14 = &v5[v12]; /*0x658ba2*/
          v12 += 16; /*0x658ba5*/
          --m_8; /*0x658ba8*/
          *(unsigned int *)v14 = *v13; /*0x658bab*/
          *((unsigned int *)v14 + 1) = v13[1]; /*0x658bb0*/
          *((unsigned int *)v14 + 2) = v13[2]; /*0x658bb6*/
          *((unsigned int *)v14 + 3) = v13[3]; /*0x658bbc*/
        }
        while ( m_8 ); /*0x658bbf*/
        v3 = a2; /*0x658bc1*/
      }
      if ( (((this->m_C) >> 8) & 0xFF) ) /*0x658bc7*/
      {
        __3_YAXPAX_Z(*&this->q004); /*0x658bd0*/
        *&this->q004 = 0; /*0x658bd8*/
      }
    }
    *&this->q004 = v5; /*0x658be3*/
    this->m_8 = v3; /*0x658be9*/
    BYTE1(this->m_C) = a3 == 0; /*0x658bec*/
  }
  else
  {
    (*(void (**)(_DynamicVectorClass_U_HashObject_URadarTrackingStruct_PAVTechnoClass *))(*(unsigned int *)this->__pad_0 + 12))(this); /*0x658bf5*/
  }
  v15 = this->m_8; /*0x658bf8*/
  if ( v15 < this->m_10 ) /*0x658c00*/
    this->m_10 = v15; /*0x658c02*/
  return 1; /*0x658c05*/

}
} // namespace gamemd
// 0x658DE0
namespace gamemd {
unsigned int * RadarHashVector::Construct(MapClass * aP1, MapClass * aP2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8, void *a9)
{


  aP1->__pad_004 = 0; /*0x658ded*/
  aP1->q008 = (int)(aP2); /*0x658df0*/
  LOBYTE(aP1->u32_C) = 1; /*0x658df3*/
  BYTE1(aP1->u32_C) = 0; /*0x658df7*/
  /* X11: vtable install elided (implicit via VectorClass virtuals 0x658dfa) */
  if ( aP2 ) /*0x658e00*/
  {
    if ( a3 ) /*0x658e08*/
    {
      if ( aP2 - 1 >= 0 ) /*0x658e0f*/
      {
        unsigned int *v4; // eax
        v4 = (unsigned int *)(a3 + 4); /*0x658e11*/
        int v5; // ecx
        v5 = (int)(aP2); /*0x658e14*/
        do /*0x658e21*/
        {
          *(v4 - 1) = 0; /*0x658e15*/
          *v4 = 0; /*0x658e18*/
          v4[1] = 0; /*0x658e1a*/
          v4 += 4; /*0x658e1d*/
          --v5; /*0x658e20*/
        }
        while ( v5 ); /*0x658e21*/
      }
      aP1->RadarHashVector_field_0x04 = a3; /*0x658e23*/
    }
    else
    {
      int v6; // eax
      v6 = __2_YAPAXI_Z(16 * aP2); /*0x658e2e*/
      if ( v6 ) /*0x658e38*/
      {
        if ( aP2 - 1 >= 0 ) /*0x658e3f*/
        {
          unsigned int *v7 = &v6->vtable2; // ecx /*0x658e41*/
          int v8; // edx
          v8 = (int)(aP2); /*0x658e44*/
          do /*0x658e51*/
          {
            *(v7 - 1) = 0; /*0x658e45*/
            *v7 = 0; /*0x658e48*/
            v7[1] = 0; /*0x658e4a*/
            v7 += 4; /*0x658e4d*/
            --v8; /*0x658e50*/
          }
          while ( v8 ); /*0x658e51*/
        }
      }
      else
      {
        v6 = 0; /*0x658e55*/
      }
      aP1->RadarHashVector_field_0x04 = v6; /*0x658e57*/
      BYTE1(aP1->RadarHashVector_field_0x0C) = 1; /*0x658e5a*/
    }
  }
  *(unsigned int *)aP1->__pad_0 = &vt_DynamicVectorClassHashObject; /*0x658e5e*/
  aP1->q014 = 10; /*0x658e64*/
  aP1->q010 = 0; /*0x658e6b*/
  return (unsigned int *)(aP1->vtable1); /*0x658e70*/

}
} // namespace gamemd
// 0x658A70
namespace gamemd {
void RadarHashVector::ddtor(void *a1)
{
  if ( *&this->IsAllocated && (((unsigned char *)&(*&this->IsAllocated))[1]) ) /*0x658a7d*/
  {
    operator delete((void *)(*&this->q004)); /*0x658a83*/
    *&this->q004 = 0; /*0x658a8b*/
  }
  (((unsigned char *)&(*&this->m_C))[1]) = 0; /*0x658a8e*/
  *&this->m_8 = 0; /*0x658a91*/
}
} // namespace gamemd
// 0x658AA0
namespace gamemd {
int RadarHashVector::Read(unsigned int * a2, void *a2_2, void *a3)
{

  if ( !(*((unsigned char *)&(*(unsigned int *)&a2_2->q00C))) ) /*0x658aa0*/
    return 0; /*0x658aae*/
  int m_8; // edx
  m_8 = *(unsigned int *)&a2_2->q008; /*0x658ab4*/
  int result = 0; // eax /*0x658ab7*/
  if ( m_8 <= 0 ) /*0x658abb*/
    return -1; /*0x658ae6*/
  unsigned int *i; // ecx
  for ( i = *(unsigned int **)&a2_2->q004; *(unsigned int)(i) != *(unsigned (unsigned int)(int)*)(a2_2) || i[1] != a2_2[1] || i[2] != a2_2[2]; i += 4 ) /*0x658ac1*/
  {
    if ( ++result >= m_8 ) /*0x658ae4*/
      return -1; /*0x658ae4*/
  }
  return result; /*0x658aab*/
}
} // namespace gamemd
// 0x658AF0
namespace gamemd {
unsigned int RadarHashVector::Write(int a2)
{
  if ( (*((unsigned char *)&(*&this->m_C))) ) /*0x658af0*/
    return (unsigned int)(a2 - *&this->q004) >> 4; /*0x658b05*/
  else
    return 0; /*0x658af7*/
}
} // namespace gamemd
// 0x658C20
namespace gamemd {
int RadarHashVector::FindItemIndex(unsigned int * a2)
{

  int m_10; // edx
  m_10 = *&this->m_10; /*0x658c20*/
  int result = 0; // eax /*0x658c25*/
  if ( m_10 <= 0 ) /*0x658c2b*/
    return -1; /*0x658c56*/
  unsigned int *i; // ecx
  for ( i = *&this->q004; *i != *a2 || i->vtable2 != a2[1] || i[2] != a2[2]; i += 4 ) /*0x658c31*/
  {
    if ( ++result >= m_10 ) /*0x658c54*/
      return -1; /*0x658c54*/
  }
  return result; /*0x658c59*/
}
} // namespace gamemd
// 0x658C60
namespace gamemd {
char * RadarHashVector::Destructor(char a2)
{

  int v3; // eax
  char *v4; // ebp
  int v5; // ecx
  int v6; // eax
  char *v7; // esi
  int v8; // edi
  void *v9; // eax
  void *v11; // eax

  if ( (a2 & 2) != 0 ) /*0x658c6a*/
  {
    v3 = *((unsigned int *)this - 1); /*0x658c6c*/
    v4 = (char *)this - 4; /*0x658c70*/
    v5 = 3 * v3; /*0x658c73*/
    v6 = v3 - 1; /*0x658c76*/
    v7 = &this->__pad_0[8 * v5]; /*0x658c77*/
    if ( v6 >= 0 ) /*0x658c7a*/
    {
      v8 = v6 + 1; /*0x658c7d*/
      do /*0x658caa*/
      {
        v9 = (void *)*((unsigned int *)v7 - 5); /*0x658c82*/
        v7 -= 24; /*0x658c85*/
        *(unsigned int *)v7 = &vt_VectorClass_HashObject_RadarTrackingStruct_TechnoClass; /*0x658c8a*/
        if ( v9 && v7[13] ) /*0x658c92*/
        {
          __3_YAXPAX_Z(v9); /*0x658c98*/
          *((unsigned int *)v7 + 1) = 0; /*0x658ca0*/
        }
        --v8; /*0x658ca3*/
        v7[13] = 0; /*0x658ca4*/
        *((unsigned int *)v7 + 2) = 0; /*0x658ca7*/
      }
      while ( v8 ); /*0x658caa*/
    }
    if ( (a2 & 1) != 0 ) /*0x658cb2*/
      __3_YAXPAX_Z(v4); /*0x658cb5*/
    return v4; /*0x658cbd*/
  }
  else
  {
    v11 = *&this->q004; /*0x658cc5*/
    *(unsigned int *)this->__pad_0 = &vt_VectorClass_HashObject_RadarTrackingStruct_TechnoClass; /*0x658ccc*/
    if ( v11 && (((this->m_C) >> 8) & 0xFF) ) /*0x658cd4*/
    {
      __3_YAXPAX_Z(v11); /*0x658cda*/
      *&this->q004 = 0; /*0x658ce2*/
    }
    (this->m_C) = ((this->m_C) & ~(0xFF << 8)) | (((0) & 0xFF) << 8); /*0x658ce9*/
    this->m_8 = 0; /*0x658cee*/
    if ( (a2 & 1) != 0 ) /*0x658cf1*/
      __3_YAXPAX_Z(this); /*0x658cf4*/
    return this->__pad_0; /*0x658cfc*/
  }

}
} // namespace gamemd
// 0x658D10
namespace gamemd {
VectorClass_flat * RadarHashVector::QueryInterface(unsigned int * Block, char a2)
{

  void *v3 = *&Block->__pad_004; // eax /*0x658d13*/
  *(unsigned int *)Block->tail_0 = &vt_VectorClassHashObject; /*0x658d16*/
  if ( v3 && (((unsigned char *)&(*&Block->u32_D))[1]) ) /*0x658d20*/
  {
    operator delete((v3)); /*0x658d28*/
    *&Block->__pad_004 = 0; /*0x658d30*/
  }
  (((unsigned char *)&(*&Block->u32_C))[1]) = 0; /*0x658d3b*/
  *&Block->u32_8 = 0; /*0x658d41*/
  if ( (a2 & 1) != 0 ) /*0x658d48*/
    operator delete((Block)); /*0x658d4b*/
  return Block->tail_0; /*0x658d55*/
}
} // namespace gamemd