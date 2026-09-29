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

// 0x658B10
namespace gamemd {
AbstractClass * * RadarHashVector::ComputeHashIndex(int a2, char * a3)
{
  int v3; // ebp
  char *v5; // edi
  void * v6;
  unsigned int *v7; // ecx
  int v8; // edx
  char *v9; // eax
  int v10; // ecx
  int m_8; // ecx
  int v12; // eax
  unsigned int *v13; // edx
  char *v14; // ebx
  AbstractClass ** v15;

  v3 = a2; /*0x658b12*/
  if ( a2 ) /*0x658b1e*/
  {
    v5 = a3; /*0x658b24*/
    this->q00C = 0; /*0x658b28*/
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
      v6 = (void *)((int)(RA2_OPNEW(16 * a2)));
      if ( v6 ) /*0x658b3f*/
      {
        if ( a2 - 1 >= 0 ) /*0x658b46*/
        {
          v7 = (unsigned int *)(v6 + 4); /*0x658b48*/
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
    this->q00C = 1; /*0x658b7d*/
    if ( !v5 ) /*0x658b81*/
      return 0; /*0x658c11*/
    if ( *(unsigned int *)&this->q004 ) /*0x658b87*/
    {
      m_8 = *(unsigned int *)&this->q008; /*0x658b8c*/
      if ( a2 < m_8 ) /*0x658b91*/
        m_8 = a2; /*0x658b93*/
      if ( m_8 > 0 ) /*0x658b97*/
      {
        v12 = 0; /*0x658b99*/
        do /*0x658bbf*/
        {
          v13 = (unsigned int *)(*(unsigned int *)&this->q004 + v12); /*0x658ba0*/
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
      if ( this->IsAllocated ) /*0x658bc7*/
      {
        RA2_OPDEL(*(void **)&this->q004); /*0x658bd0*/
        *(unsigned int *)&this->q004 = 0; /*0x658bd8*/
      }
    }
    *(void **)&this->q004 = v5; /*0x658be3*/
    *(unsigned int *)&this->q008 = v3; /*0x658be9*/
    this->IsAllocated = a3 == 0; /*0x658bec*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_U_HashObject_URadarTrackingStruct_PAVTechnoClass *))(*(unsigned int *)this->__pad_0 + 12))(this); /*0x658bf5*/
  }
  v15 = (gamemd::AbstractClass **)((int)((gamemd::AbstractClass **)(*(unsigned short *)&this->q00C)));
  if ( v15 < *(unsigned int *)&this->q010 ) /*0x658c00*/
    *(void **)&this->q010 = v15; /*0x658c02*/
  return 1; /*0x658c05*/
}
} // namespace gamemd
// 0x658DE0
namespace gamemd {
unsigned int * RadarHashVector::Construct(MapClass * aP1, MapClass * aP2)
{
  unsigned int *v4; // eax
  MapClass * v5;
  int v6; // eax
  unsigned int *v7; // ecx
  MapClass * v8;

  this->RadarHashVector_field_0x04 = (unsigned int)(0);
  this->RadarHashVector_field_0x08 = (unsigned int)(aP1);
  IDA_LOBYTE(this->RadarHashVector_field_0x0C) = 1; /*0x658df3*/
  IDA_BYTE1(this->RadarHashVector_field_0x0C) = 0; /*0x658df7*/
  *(unsigned int *)this->__pad_0 = (void*)&VectorClass_HashObject_RadarTrackingStruct_TechnoClass___vftable; /*0x658dfa*/
  if ( aP1 ) /*0x658e00*/
  {
    if ( aP2 ) /*0x658e08*/
    {
      if ( aP1 - 1 >= 0 ) /*0x658e0f*/
      {
        v4 = (int)((unsigned int *)(aP2 + 4));
        v5 = aP1; /*0x658e14*/
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
      this->RadarHashVector_field_0x04 = (unsigned int)(aP2);
    }
    else
    {
      v6 = RA2_OPNEW(16 * aP1); /*0x658e2e*/
      if ( v6 ) /*0x658e38*/
      {
        if ( aP1 - 1 >= 0 ) /*0x658e3f*/
        {
          v7 = (int)((unsigned int *)(v6 + 4));
          v8 = aP1; /*0x658e44*/
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
      this->RadarHashVector_field_0x04 = v6; /*0x658e57*/
      IDA_BYTE1(this->RadarHashVector_field_0x0C) = 1; /*0x658e5a*/
    }
  }
  *(unsigned int *)this->__pad_0 = (void*)&DynamicVectorClass_HashObject_RadarTrackingStruct_TechnoClass___vftable; /*0x658e5e*/
  this->RadarHashVector_field_0x14 = 10; /*0x658e64*/
  this->RadarHashVector_field_0x10 = 0; /*0x658e6b*/
  return this; /*0x658e70*/
}
} // namespace gamemd
// 0x658A70
namespace gamemd {
void RadarHashVector::ddtor()
{
  if ( *(unsigned int *)&this->IsAllocated && this->IsAllocated ) /*0x658a7d*/
  {
    RA2_OPDEL(*(void **)&this->q004); /*0x658a83*/
    *(unsigned int *)&this->q004 = 0; /*0x658a8b*/
  }
  this->IsAllocated = 0; /*0x658a8e*/
  *(unsigned int *)&this->q008 = 0; /*0x658a91*/
}
} // namespace gamemd
// 0x658AA0
namespace gamemd {
int RadarHashVector::Read(unsigned int * a2)
{
  int result; // eax
  int m_8; // edx
  unsigned int *i; // ecx

  if ( !this->q00C ) /*0x658aa0*/
    return 0; /*0x658aae*/
  m_8 = *(unsigned int *)&this->q008; /*0x658ab4*/
  result = 0; /*0x658ab7*/
  if ( m_8 <= 0 ) /*0x658abb*/
    return -1; /*0x658ae6*/
  for ( i = *(unsigned int **)&this->q004; *i != *a2 || i[1] != a2[1] || i[2] != a2[2]; i += 4 ) /*0x658ac1*/
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
  if ( this->q00C ) /*0x658af0*/
    return (unsigned int)(a2 - *(unsigned int *)&this->q004) >> 4; /*0x658b05*/
  else
    return 0; /*0x658af7*/
}
} // namespace gamemd
// 0x658C20
namespace gamemd {
int RadarHashVector::FindItemIndex(unsigned int * a2)
{
  int m_10; // edx
  int result; // eax
  unsigned int *i; // ecx

  m_10 = *(unsigned int *)&this->q010; /*0x658c20*/
  result = 0; /*0x658c25*/
  if ( m_10 <= 0 ) /*0x658c2b*/
    return -1; /*0x658c56*/
  for ( i = *(unsigned int **)&this->q004; *i != *a2 || i[1] != a2[1] || i[2] != a2[2]; i += 4 ) /*0x658c31*/
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
        v9 = (void *)((unsigned int)((void *)*((unsigned int *)v7 - 5)));
        v7 -= 24; /*0x658c85*/
        *(unsigned int *)v7 = (void*)&VectorClass_HashObject_RadarTrackingStruct_TechnoClass___vftable; /*0x658c8a*/
        if ( v9 && v7[13] ) /*0x658c92*/
        {
          RA2_OPDEL(v9); /*0x658c98*/
          *((unsigned int *)v7 + 1) = 0; /*0x658ca0*/
        }
        --v8; /*0x658ca3*/
        v7[13] = 0; /*0x658ca4*/
        *((unsigned int *)v7 + 2) = 0; /*0x658ca7*/
      }
      while ( v8 ); /*0x658caa*/
    }
    if ( (a2 & 1) != 0 ) /*0x658cb2*/
      RA2_OPDEL(v4); /*0x658cb5*/
    return v4; /*0x658cbd*/
  }
  else
  {
    v11 = (unsigned int)(*(void **)&this->q004);
    *(unsigned int *)this->__pad_0 = (void*)&VectorClass_HashObject_RadarTrackingStruct_TechnoClass___vftable; /*0x658ccc*/
    if ( v11 && this->IsAllocated ) /*0x658cd4*/
    {
      RA2_OPDEL(v11); /*0x658cda*/
      *(unsigned int *)&this->q004 = 0; /*0x658ce2*/
    }
    this->IsAllocated = 0; /*0x658ce9*/
    *(unsigned int *)&this->q008 = 0; /*0x658cee*/
    if ( (a2 & 1) != 0 ) /*0x658cf1*/
      RA2_OPDEL(); /*0x658cf4*/
    return this; /*0x658cfc*/
  }
}
} // namespace gamemd
// 0x658D10
namespace gamemd {
VectorClass_flat * RadarHashVector::QueryInterface(char a2)
{
  void *v3; // eax

  v3 = (unsigned int)(*(void **)&this->m_1[3]);
  *(unsigned int *)this->__pad_0 = (void*)&VectorClass_HashObject_RadarTrackingStruct_TechnoClass___vftable; /*0x658d16*/
  if ( v3 && this->IsAllocated ) /*0x658d20*/
  {
    RA2_OPDEL(v3); /*0x658d28*/
    *(unsigned int *)&this->q004 = 0; /*0x658d30*/
  }
  this->IsAllocated = 0; /*0x658d3b*/
  *(unsigned short *)&this->q008 = 0; /*0x658d41*/
  if ( (a2 & 1) != 0 ) /*0x658d48*/
    RA2_OPDEL(); /*0x658d4b*/
  return this; /*0x658d55*/
}
} // namespace gamemd