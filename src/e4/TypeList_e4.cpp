// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/TypeList_BuildingType_e4.hpp"
#include "e4/classes/TypeList_Infantry_e4.hpp"
#include "e4/classes/TypeList_Particle_e4.hpp"
#include "e4/classes/TypeList_TechnoType_e4.hpp"
#include "e4/classes/TypeList_VoxelAnim_e4.hpp"
#include "e4/classes/TypeList_cptr_ParticleSystemTypeClass_e4.hpp"
#include "e4/classes/TypeList_cptr_TerrainTypeClass_e4.hpp"
#include "e4/classes/Vector_e4.hpp"
#include "e4/classes/TypeList_flat_e4.hpp"
#include "e4/classes/Type_e4.hpp"
#include "e4/classes/VectorClass_flat_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/Count_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/ProgressTimer_e4.hpp"
#include "e4/classes/LocomotionClass_e4.hpp"
#include "e4/classes/Matrix3x4_e4.hpp"
#include "e4/classes/File_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"

// 0x459F90
namespace gamemd {
void TypeList_cptr_ParticleSystemTypeClass::GetClassIdentifier()
{
  void *v2; // eax

  v2 = *(void **)&this->Items; /*0x459f96*/
    *((unsigned int *)this + 64) = 0;
    if ( v2 && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(v2); /*0x459fa6*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x459FC0
namespace gamemd {
unsigned int TypeList_cptr_ParticleSystemTypeClass::LoadTypeData(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x459fc7*/
}
} // namespace gamemd

// 0x459FE0
namespace gamemd {
int TypeList_Particle::GetIndex(int a2)
{
    return *(unsigned int *)(*((unsigned int *)this + 4) + 4 * a2);
}
} // namespace gamemd

// 0x45A180
namespace gamemd {
char TypeList_Particle::AddRef(int a2)
{
  int m_8; // esi
  int v3; // edx
  unsigned int *v4; // eax
  int v5; // ecx

    v2 = *((unsigned int *)this + 8);
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x45a18d*/
  {
    v3 = 0; /*0x45a18f*/
    if ( m_8 <= 0 ) /*0x45a193*/
      return 1; /*0x45a1b3*/
        v4 = (unsigned int *)*((unsigned int *)this + 4);
    v5 = *(unsigned int *)(a2 + 4) - (unsigned int)v4; /*0x45a19b*/
    while ( *v4 == *(unsigned int *)((char *)v4 + v5) ) /*0x45a1a4*/
    {
      ++v3; /*0x45a1a6*/
      ++v4; /*0x45a1a7*/
      if ( v3 >= m_8 ) /*0x45a1ac*/
        return 1; /*0x45a1ac*/
    }
  }
  return 0; /*0x45a1ae*/
}
} // namespace gamemd

// 0x45A1C0
namespace gamemd {
char TypeList_Particle::Remove(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x45a1cc*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x45a1dc*/
      v4 = a3; /*0x45a1f2*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x45a1ee*/
        *((unsigned char *)this + 12) = 1;
    if ( v4 ) /*0x45a1fa*/
    {
            if ( *((unsigned int *)this + 1) )
      {
                v6 = *((unsigned int *)this + 2);
        if ( a2 < m_8 ) /*0x45a211*/
          m_8 = a2; /*0x45a213*/
                for ( i = 0; i < v6; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
          ++i; /*0x45a21e*/
                if ( *((unsigned char *)this + 13) )
        {
          RA2_OPDEL(*(void **)&this->Items); /*0x45a236*/
                    *((unsigned int *)this + 1) = 0;
        }
      }
            *((unsigned int *)this + 1) = v4;
            *((unsigned int *)this + 2) = a2;
            *((unsigned char *)this + 13) = a3 == 0;
      return 1; /*0x45a258*/
    }
    else
    {
      return 0; /*0x45a1ff*/
    }
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
    return 1; /*0x45a268*/
  }
}
} // namespace gamemd

// 0x45A2A0
namespace gamemd {
int TypeList_Particle::GetSize(unsigned int * a2)
{
  int result; // eax
  int m_8; // edx
  unsigned int *i; // ecx

    if ( !*((unsigned char *)this + 48) )
    return 0; /*0x45a2a8*/
    v3 = *((unsigned int *)this + 32);
  result = 0; /*0x45a2b1*/
  if ( m_8 <= 0 ) /*0x45a2b5*/
    return -1; /*0x45a2cc*/
  for ( i = *(unsigned int **)&this->Items; *i != *a2; ++i ) /*0x45a2bb*/
  {
    if ( ++result >= m_8 ) /*0x45a2ca*/
      return -1; /*0x45a2ca*/
  }
  return result; /*0x45a2aa*/
}
} // namespace gamemd

// 0x45A2E0
namespace gamemd {
unsigned int TypeList_Particle::GetCapacity(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x45a2e7*/
}
} // namespace gamemd

// 0x45A300
namespace gamemd {
char TypeList_cptr_ParticleSystemTypeClass::Add(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x45a30c*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x45a318*/
      v4 = a3; /*0x45a32e*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x45a32a*/
        *((unsigned char *)this + 12) = 1;
    if ( !v4 ) /*0x45a336*/
      return 0; /*0x45a3aa*/
        if ( *((unsigned int *)this + 1) )
    {
            v5 = *((unsigned int *)this + 2);
      if ( a2 < m_8 ) /*0x45a344*/
        m_8 = a2; /*0x45a346*/
            for ( i = 0; i < v5; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
        ++i; /*0x45a351*/
            if ( *((unsigned char *)this + 13) )
      {
        RA2_OPDEL(*(void **)&this->Items); /*0x45a369*/
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
  v7 = this-(int)((int))(>Capacity); /*0x45a391*/
    if ( v7 < *((unsigned int *)this + 4) )
        *((unsigned int *)this + 4) = v7;
  return 1; /*0x45a39e*/
}
} // namespace gamemd

// 0x45A3B0
namespace gamemd {
int TypeList_cptr_ParticleSystemTypeClass::Remove(unsigned int * a2)
{
  int m_10; // edx
  int result; // eax
  unsigned int *i; // ecx

    v2 = *((unsigned int *)this + 16);
  result = 0; /*0x45a3b3*/
  if ( m_10 <= 0 ) /*0x45a3b8*/
    return -1; /*0x45a3cf*/
    for ( i = (unsigned int *)*((unsigned int *)this + 4); *i != *a2; ++i )
  {
    if ( ++result >= m_10 ) /*0x45a3cd*/
      return -1; /*0x45a3cd*/
  }
  return result; /*0x45a3d2*/
}
}
// 0x45A9C0
namespace gamemd {
VectorClass_flat * TypeList_Particle::Add(char a2)
{
  void *v3; // eax

  v3 = (unsigned int)(*(void **)&this-((unsigned int *)(>m_1))[3]);
  *(unsigned int *)this->__pad_0 = (void*)&VectorClass_ParticleSystemTypeClass_const___vftable; /*0x45a9c6*/
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x45a9d8*/
        *(Block + 1) = 0;
  }
  this->IsAllocated = (unsigned char)((gamemd::VectorClass_flat *)(0));
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x45a9f8*/
    RA2_OPDEL(); /*0x45a9fb*/
  return this; /*0x45aa05*/
}
} // namespace gamemd

// 0x477840
void TypeList_flat::ddtor()
{
  void *v2; // eax

  v2 = *(void **)&this->u32_4; /*0x477846*/
    *((unsigned int *)this + 64) = 0;
    if ( v2 && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(v2); /*0x477856*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
// 0x477870
unsigned int TypeList_flat::GetCapacity(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x477877*/
}
// 0x4778F0
namespace gamemd {
int TypeList_TechnoType::Clear(int a2)
{
    return *(unsigned int *)(*((unsigned int *)this + 4) + 4 * a2);
}
} // namespace gamemd

// 0x477990
TypeList_flat * TypeList_flat::QueryInterface(char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
  *(unsigned int *)this = (void*)&VectorClass_int_vftable; /*0x477996*/
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x4779a8*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x4779c8*/
    RA2_OPDEL(); /*0x4779cb*/
  return this; /*0x4779d5*/
}
// 0x477F10
int TypeList_flat::GetSize(unsigned int * a2)
{
  int m_10; // edx
  int result; // eax
  unsigned int *i; // ecx

    v2 = *((unsigned int *)this + 16);
  result = 0; /*0x477f13*/
  if ( m_10 <= 0 ) /*0x477f18*/
    return -1; /*0x477f2f*/
    for ( i = (unsigned int *)*((unsigned int *)this + 4); *i != *a2; ++i )
  {
    if ( ++result >= m_10 ) /*0x477f2d*/
      return -1; /*0x477f2d*/
  }
  return result; /*0x477f32*/
}
// 0x477FC0
namespace gamemd {
char TypeList_TechnoType::AddRef(int a2)
{
  int m_8; // esi
  int v3; // edx
  unsigned int *v4; // eax
  int v5; // ecx

    v2 = *((unsigned int *)this + 8);
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x477fcd*/
  {
    v3 = 0; /*0x477fcf*/
    if ( m_8 <= 0 ) /*0x477fd3*/
      return 1; /*0x477ff3*/
        v4 = (unsigned int *)*((unsigned int *)this + 4);
    v5 = *(unsigned int *)(a2 + 4) - (unsigned int)v4; /*0x477fdb*/
    while ( *v4 == *(unsigned int *)((char *)v4 + v5) ) /*0x477fe4*/
    {
      ++v3; /*0x477fe6*/
      ++v4; /*0x477fe7*/
      if ( v3 >= m_8 ) /*0x477fec*/
        return 1; /*0x477fec*/
    }
  }
  return 0; /*0x477fee*/
}
} // namespace gamemd

// 0x478000
namespace gamemd {
char TypeList_TechnoType::Remove(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x47800c*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x47801c*/
      v4 = a3; /*0x478032*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x47802e*/
        *((unsigned char *)this + 12) = 1;
    if ( v4 ) /*0x47803a*/
    {
            if ( *((unsigned int *)this + 1) )
      {
                v6 = *((unsigned int *)this + 2);
        if ( a2 < m_8 ) /*0x478051*/
          m_8 = a2; /*0x478053*/
                for ( i = 0; i < v6; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
          ++i; /*0x47805e*/
                if ( *((unsigned char *)this + 13) )
        {
          RA2_OPDEL(*(void **)&this->Items); /*0x478076*/
                    *((unsigned int *)this + 1) = 0;
        }
      }
            *((unsigned int *)this + 1) = v4;
            *((unsigned int *)this + 2) = a2;
            *((unsigned char *)this + 13) = a3 == 0;
      return 1; /*0x478098*/
    }
    else
    {
      return 0; /*0x47803f*/
    }
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
    return 1; /*0x4780a8*/
  }
}
} // namespace gamemd

// 0x4780B0
namespace gamemd {
void TypeList_TechnoType::ddtor()
{
    if ( *((unsigned int *)this + 16) && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(*(void **)&this->Items); /*0x4780c3*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x4780E0
namespace gamemd {
int TypeList_TechnoType::GetSize(unsigned int * a2)
{
  int result; // eax
  int m_8; // edx
  unsigned int *i; // ecx

    if ( !*((unsigned char *)this + 48) )
    return 0; /*0x4780e8*/
    v3 = *((unsigned int *)this + 32);
  result = 0; /*0x4780f1*/
  if ( m_8 <= 0 ) /*0x4780f5*/
    return -1; /*0x47810c*/
  for ( i = *(unsigned int **)&this->Items; *i != *a2; ++i ) /*0x4780fb*/
  {
    if ( ++result >= m_8 ) /*0x47810a*/
      return -1; /*0x47810a*/
  }
  return result; /*0x4780ea*/
}
} // namespace gamemd

// 0x478120
namespace gamemd {
unsigned int TypeList_TechnoType::GetIndex(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x478127*/
}
} // namespace gamemd

// 0x478680
namespace gamemd {
VectorClass_flat * TypeList_TechnoType::Add(char a2)
{
  void *v3; // eax

  v3 = (unsigned int)(*(void **)&this-((unsigned int *)(>m_1))[3]);
  *(unsigned int *)this->__pad_0 = (void*)&VectorClass_TechnoTypeClass___vftable; /*0x478686*/
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x478698*/
        *(Block + 1) = 0;
  }
  this->IsAllocated = (unsigned char)((gamemd::VectorClass_flat *)(0));
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x4786b8*/
    RA2_OPDEL(); /*0x4786bb*/
  return this; /*0x4786c5*/
}
} // namespace gamemd

// 0x478720
unsigned int * TypeList_flat::Copy(unsigned int * a2)
{
  int v3; // eax
  void *v4; // eax
  int Capacity; // ecx
  int v6; // eax

  if ( this == (TypeList *)a2 ) /*0x47872a*/
      if ( this == a2 )
    (*(void (**)(unsigned int *))(*(char *)this + 48))(this);
  v3 = a2[2]; /*0x478731*/
    *((unsigned int *)this + 8) = v3;
  if ( !v3 ) /*0x478739*/
  {
        *((unsigned int *)this + 4) = 0;
        *((unsigned char *)this + 13) = 0;
        return this;
  }
  v4 = (void *)RA2_OPNEW(4 * v3); /*0x478743*/
    *((unsigned int *)this + 4) = v4;
  if ( !v4 ) /*0x478750*/
      if ( !v4 )
    v5 = *((unsigned int *)this + 8);
  v6 = 0; /*0x478755*/
    *((unsigned char *)this + 13) = 1;
  if ( Capacity <= 0 ) /*0x47875d*/
      if ( v5 <= 0 )
  do /*0x478771*/
  {
        *(unsigned int *)(*((unsigned int *)this + 4) + 4 * v6) = *(unsigned int *)(a2[1] + 4 * v6);
    ++v6; /*0x47876e*/
  }
  while ( v6 < this->? ); /*0x478771*/
    return this;
}
// 0x478790
unsigned int * TypeList_flat::TechnoTypeConstructor(int a2, int a3)
{
    *((unsigned int *)this + 4) = 0;
    *((unsigned int *)this + 8) = a2;
    *((unsigned char *)this + 12) = 1;
    *((unsigned char *)this + 13) = 0;
    *this = &vt_VectorClass_TechnoTypeClass;
  if ( a2 ) /*0x4787ae*/
  {
    if ( a3 ) /*0x4787b6*/
    {
            *((unsigned int *)this + 4) = a3;
            return this;
    }
    *(void **)&this->u32_4 = (void *)RA2_OPNEW(4 * a2); /*0x4787cd*/
        *((unsigned char *)this + 13) = 1;
  }
    return this;
}
// 0x5128A0
namespace gamemd {
void TypeList_Infantry::ddtor()
{
  void *v2; // eax

  v2 = *(void **)&this->Items; /*0x5128a6*/
    *((unsigned int *)this + 64) = 0;
    if ( v2 && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(v2); /*0x5128b6*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x5128D0
namespace gamemd {
unsigned int TypeList_Infantry::GetIndex(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x5128d7*/
}
} // namespace gamemd

// 0x5128F0
namespace gamemd {
int TypeList_Infantry::Clear(int a2)
{
    return *(unsigned int *)(*((unsigned int *)this + 4) + 4 * a2);
}
} // namespace gamemd

// 0x5129F0
namespace gamemd {
TypeList_flat * TypeList_Infantry::Add(char a2)
{
  void *v3; // eax
v3 = (void *)((unsigned int)((void *)((unsigned int)((void *)this->Items))));
  *(unsigned int *)this = (void*)&VectorClass_InfantryTypeClass_const___vftable; /*0x5129f6*/
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x512a08*/
        *(Block + 1) = 0;
  }
  this->IsAllocated = (unsigned char)((gamemd::TypeList_flat *)(0));
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x512a28*/
    RA2_OPDEL(); /*0x512a2b*/
  return this; /*0x512a35*/
}
} // namespace gamemd

// 0x512C40
namespace gamemd {
char TypeList_Infantry::AddRef(int a2)
{
  int m_8; // esi
  int v3; // edx
  unsigned int *v4; // eax
  int v5; // ecx

    v2 = *((unsigned int *)this + 8);
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x512c4d*/
  {
    v3 = 0; /*0x512c4f*/
    if ( m_8 <= 0 ) /*0x512c53*/
      return 1; /*0x512c73*/
        v4 = (unsigned int *)*((unsigned int *)this + 4);
    v5 = *(unsigned int *)(a2 + 4) - (unsigned int)v4; /*0x512c5b*/
    while ( *v4 == *(unsigned int *)((char *)v4 + v5) ) /*0x512c64*/
    {
      ++v3; /*0x512c66*/
      ++v4; /*0x512c67*/
      if ( v3 >= m_8 ) /*0x512c6c*/
        return 1; /*0x512c6c*/
    }
  }
  return 0; /*0x512c6e*/
}
} // namespace gamemd

// 0x512E20
namespace gamemd {
DynamicVector * TypeList_Infantry::Constructor(char a2)
{
  void *v3; // eax

  v3 = (void *)((unsigned int)((void *)((unsigned int)(*(void **)&this->Items))));
  *(unsigned int *)this->__pad_0 = (void*)&VectorClass_InfantryTypeClass_const___vftable; /*0x512e26*/
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x512e38*/
        *(Block + 1) = 0;
  }
  this->IsAllocated = (unsigned char)((gamemd::DynamicVector *)(0));
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x512e58*/
    RA2_OPDEL(); /*0x512e5b*/
  return this; /*0x512e65*/
}
} // namespace gamemd

// 0x512E70
namespace gamemd {
char TypeList_Infantry::Remove(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x512e7c*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x512e88*/
      v4 = a3; /*0x512e9e*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x512e9a*/
        *((unsigned char *)this + 12) = 1;
    if ( !v4 ) /*0x512ea6*/
      return 0; /*0x512f1a*/
        if ( *((unsigned int *)this + 1) )
    {
            v5 = *((unsigned int *)this + 2);
      if ( a2 < m_8 ) /*0x512eb4*/
        m_8 = a2; /*0x512eb6*/
            for ( i = 0; i < v5; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
        ++i; /*0x512ec1*/
            if ( *((unsigned char *)this + 13) )
      {
        RA2_OPDEL(*(void **)&this->Items); /*0x512ed9*/
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
  return 1; /*0x512f0e*/
}
} // namespace gamemd

// 0x512F70
namespace gamemd {
int TypeList_Infantry::GetSize(unsigned int * a2)
{
  int m_10; // edx
  int result; // eax
  unsigned int *i; // ecx

    v2 = *((unsigned int *)this + 16);
  result = 0; /*0x512f73*/
  if ( m_10 <= 0 ) /*0x512f78*/
    return -1; /*0x512f8f*/
    for ( i = (unsigned int *)*((unsigned int *)this + 4); *i != *a2; ++i )
  {
    if ( ++result >= m_10 ) /*0x512f8d*/
      return -1; /*0x512f8d*/
  }
  return result; /*0x512f92*/
}
} // namespace gamemd

// 0x5131F0
namespace gamemd {
DynamicVector * TypeList_Infantry::Constructor_0(char a2)
{
  void *v3; // eax

  v3 = (void *)((unsigned int)((void *)((unsigned int)(*(void **)&this->Items))));
  *(unsigned int *)this->__pad_0 = (void*)&VectorClass_UnitTypeClass_const___vftable; /*0x5131f6*/
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x513208*/
        *(Block + 1) = 0;
  }
  this->IsAllocated = (unsigned char)((gamemd::DynamicVector *)(0));
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x513228*/
    RA2_OPDEL(); /*0x51322b*/
  return this; /*0x513235*/
}
} // namespace gamemd

// 0x5135C0
namespace gamemd {
DynamicVector * TypeList_Infantry::Constructor_1(char a2)
{
  void *v3; // eax

  v3 = (void *)((unsigned int)((void *)((unsigned int)(*(void **)&this->Items))));
  *(unsigned int *)this->__pad_0 = (void*)&VectorClass_AircraftTypeClass_const___vftable; /*0x5135c6*/
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x5135d8*/
        *(Block + 1) = 0;
  }
  this->IsAllocated = (unsigned char)((gamemd::DynamicVector *)(0));
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x5135f8*/
    RA2_OPDEL(); /*0x5135fb*/
  return this; /*0x513605*/
}
} // namespace gamemd

// 0x513740
unsigned int * TypeList_flat::CopyConstructor(VectorClass_flat * aP1)
{
  int v3; // eax
  void *v4; // eax
  int Capacity; // ecx
  int v6; // eax

    *((unsigned int *)this + 4) = 0;
    *((unsigned int *)this + 8) = 0;
    *((unsigned char *)this + 12) = 1;
    *((unsigned char *)this + 13) = 0;
    *this = &vt_VectorClass_UnitTypeClass_const;
  if ( this != (TypeList *)aP1 ) /*0x513760*/
  {
    Vector::Destructor(); /*0x513762*/
    v3 = aP1[2]; /*0x513768*/
        *((unsigned int *)this + 8) = v3;
    if ( v3 ) /*0x513770*/
    {
      v4 = (void *)RA2_OPNEW(4 * v3); /*0x513776*/
            *((unsigned int *)this + 4) = v4;
      if ( v4 ) /*0x513783*/
      {
                v5 = *((unsigned int *)this + 8);
        v6 = 0; /*0x513788*/
                *((unsigned char *)this + 13) = 1;
        if ( Capacity > 0 ) /*0x513790*/
        {
          do /*0x5137a4*/
          {
                        *(unsigned int *)(*((unsigned int *)this + 4) + 4 * v6) = *((unsigned int *)aP1->Items + v6);
            ++v6; /*0x5137a1*/
          }
          while ( v6 < this->? ); /*0x5137a4*/
        }
      }
    }
    else
    {
            *((unsigned int *)this + 4) = 0;
            *((unsigned char *)this + 13) = 0;
    }
  }
    *((unsigned int *)this + 16) = aP1[1].vtable0;
    *((unsigned int *)this + 20) = aP1[1].Items;
    *this = &vt_TypeList_UnitTypeClass_const;
    return this;
}
// 0x5255F0
unsigned int * TypeList_flat::AnimTypeCopy(VectorClass_flat * aP1)
{
  int v3; // eax
  void *v4; // eax
  int Capacity; // ecx
  int v6; // eax

    *((unsigned int *)this + 4) = 0;
    *((unsigned int *)this + 8) = 0;
    *((unsigned char *)this + 12) = 1;
    *((unsigned char *)this + 13) = 0;
    *this = &vt_VectorClass_AnimTypeClass_const;
  if ( this != (TypeList *)aP1 ) /*0x525610*/
  {
    DynamicVectorClass::Destroy_Alt(); /*0x525612*/
    v3 = aP1[2]; /*0x525618*/
        *((unsigned int *)this + 8) = v3;
    if ( v3 ) /*0x525620*/
    {
      v4 = (void *)RA2_OPNEW(4 * v3); /*0x525626*/
            *((unsigned int *)this + 4) = v4;
      if ( v4 ) /*0x525633*/
      {
                v5 = *((unsigned int *)this + 8);
        v6 = 0; /*0x525638*/
                *((unsigned char *)this + 13) = 1;
        if ( Capacity > 0 ) /*0x525640*/
        {
          do /*0x525654*/
          {
                        *(unsigned int *)(*((unsigned int *)this + 4) + 4 * v6) = *((unsigned int *)aP1->Items + v6);
            ++v6; /*0x525651*/
          }
          while ( v6 < this->? ); /*0x525654*/
        }
      }
    }
    else
    {
            *((unsigned int *)this + 4) = 0;
            *((unsigned char *)this + 13) = 0;
    }
  }
    *((unsigned int *)this + 16) = aP1[1].vtable0;
    *((unsigned int *)this + 20) = aP1[1].Items;
    *this = &vt_TypeList_AnimTypeClass_const;
    return this;
}
// 0x5AC400
CCINIClass * TypeList_flat::BuildingTypeConstructor()
{
    *((unsigned int *)this + 4) = 0;
    *((unsigned int *)this + 8) = 0;
    *((unsigned char *)this + 12) = 1;
    *((unsigned char *)this + 13) = 0;
    *((unsigned int *)this + 20) = 10;
    *((unsigned int *)this + 16) = 0;
    *this = &vt_TypeList_BuildingTypeClass_const;
    return (CCINIClass *)this;
}
// 0x5AC650
namespace gamemd {
TypeList_flat * TypeList_BuildingType::Add(char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
  *(unsigned int *)this = (void*)&VectorClass_BuildingTypeClass_const___vftable; /*0x5ac656*/
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x5ac668*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x5ac688*/
    RA2_OPDEL(); /*0x5ac68b*/
  return this; /*0x5ac695*/
}
} // namespace gamemd

// 0x5AD660
unsigned int * TypeList_flat::BuildingTypeCopy(VectorClass_flat * aP1)
{
  int v3; // eax
  void *v4; // eax
  int Capacity; // ecx
  int v6; // eax

    *((unsigned int *)this + 4) = 0;
    *((unsigned int *)this + 8) = 0;
    *((unsigned char *)this + 12) = 1;
    *((unsigned char *)this + 13) = 0;
    *this = &vt_VectorClass_BuildingTypeClass_const;
  if ( this != (TypeList *)aP1 ) /*0x5ad680*/
  {
    DynamicVectorClass::Destroy(); /*0x5ad682*/
    v3 = aP1[2]; /*0x5ad688*/
        *((unsigned int *)this + 8) = v3;
    if ( v3 ) /*0x5ad690*/
    {
      v4 = (void *)RA2_OPNEW(4 * v3); /*0x5ad696*/
            *((unsigned int *)this + 4) = v4;
      if ( v4 ) /*0x5ad6a3*/
      {
                v5 = *((unsigned int *)this + 8);
        v6 = 0; /*0x5ad6a8*/
                *((unsigned char *)this + 13) = 1;
        if ( Capacity > 0 ) /*0x5ad6b0*/
        {
          do /*0x5ad6c4*/
          {
                        *(unsigned int *)(*((unsigned int *)this + 4) + 4 * v6) = *((unsigned int *)aP1->Items + v6);
            ++v6; /*0x5ad6c1*/
          }
          while ( v6 < this->? ); /*0x5ad6c4*/
        }
      }
    }
    else
    {
            *((unsigned int *)this + 4) = 0;
            *((unsigned char *)this + 13) = 0;
    }
  }
    *((unsigned int *)this + 16) = aP1[1].vtable0;
    *((unsigned int *)this + 20) = aP1[1].Items;
    *this = &vt_TypeList_BuildingTypeClass_const;
    return this;
}
// 0x67A030
void TypeList_flat::InfantryCleanup()
{
  void *Items; // eax

    v2 = (void *)*((unsigned int *)this + 4);
    *this = &vt_VectorClass_InfantryTypeClass_const;
    if ( v2 && *((unsigned char *)this + 13) )
  {
    RA2_OPDEL(Items); /*0x67a049*/
        *((unsigned int *)this + 4) = 0;
  }
    *((unsigned char *)this + 13) = 0;
    *((unsigned int *)this + 8) = 0;
}
// 0x67A090
int *  TypeList_flat::CopyFull()
{
  int v3; // eax
  void *v4; // eax
  int Capacity; // ecx
  int v6; // eax

  if ( this != (TypeList *)this ) /*0x67a09a*/
  {
        (*(void (**)(int *))(*(char *)this + 48))(this);
    v3 = this[2]; /*0x67a0a1*/
        *((unsigned int *)this + 8) = v3;
    if ( v3 ) /*0x67a0a9*/
    {
      v4 = (void *)RA2_OPNEW(4 * v3); /*0x67a0b3*/
            *((unsigned int *)this + 4) = v4;
      if ( v4 ) /*0x67a0c0*/
      {
                v5 = *((unsigned int *)this + 8);
        v6 = 0; /*0x67a0c5*/
                *((unsigned char *)this + 13) = 1;
        if ( Capacity > 0 ) /*0x67a0cd*/
        {
          do /*0x67a0e1*/
          {
                        *(unsigned int *)(*((unsigned int *)this + 4) + 4 * v6) = *((unsigned int *)aP1->Items + v6);
            ++v6; /*0x67a0de*/
          }
          while ( v6 < this->? ); /*0x67a0e1*/
        }
      }
    }
    else
    {
            *((unsigned int *)this + 4) = 0;
            *((unsigned char *)this + 13) = 0;
    }
  }
    *((unsigned int *)this + 16) = (int)aP1[1].vtable0;
    *((unsigned int *)this + 20) = (int)aP1[1].Items;
    *((unsigned int *)this + 24) = aP1[1].Capacity;
  return (int *)this; /*0x67a104*/
}
// 0x67A110
int * TypeList_flat::CopyAircraft(VectorClass_flat * aP1)
{
  int v3; // eax
  void *v4; // eax
  int Capacity; // ecx
  int v6; // eax

  if ( this != (TypeList *)aP1 ) /*0x67a11a*/
  {
        (*(void (**)(int *))(*(char *)this + 48))(this);
    v3 = aP1[2]; /*0x67a121*/
        *((unsigned int *)this + 8) = v3;
    if ( v3 ) /*0x67a129*/
    {
      v4 = (void *)RA2_OPNEW(4 * v3); /*0x67a133*/
            *((unsigned int *)this + 4) = v4;
      if ( v4 ) /*0x67a140*/
      {
                v5 = *((unsigned int *)this + 8);
        v6 = 0; /*0x67a145*/
                *((unsigned char *)this + 13) = 1;
        if ( Capacity > 0 ) /*0x67a14d*/
        {
          do /*0x67a161*/
          {
                        *(unsigned int *)(*((unsigned int *)this + 4) + 4 * v6) = *((unsigned int *)aP1->Items + v6);
            ++v6; /*0x67a15e*/
          }
          while ( v6 < this->? ); /*0x67a161*/
        }
      }
    }
    else
    {
            *((unsigned int *)this + 4) = 0;
            *((unsigned char *)this + 13) = 0;
    }
  }
    *((unsigned int *)this + 16) = (int)aP1[1].vtable0;
    *((unsigned int *)this + 20) = (int)aP1[1].Items;
    *((unsigned int *)this + 24) = aP1[1].Capacity;
  return (int *)this; /*0x67a184*/
}
// 0x67A290
int * TypeList_flat::CopyInfantry(CCINIClass * aP1)
{
  int v3; // eax
  void *v4; // eax
  int Capacity; // ecx
  int v6; // eax

  if ( this != (TypeList *)aP1 ) /*0x67a29a*/
  {
        (*(void (**)(int *))(*(char *)this + 48))(this);
    v3 = aP1[2]; /*0x67a2a1*/
        *((unsigned int *)this + 8) = v3;
    if ( v3 ) /*0x67a2a9*/
    {
      v4 = (void *)RA2_OPNEW(4 * v3); /*0x67a2b3*/
            *((unsigned int *)this + 4) = v4;
      if ( v4 ) /*0x67a2c0*/
      {
                v5 = *((unsigned int *)this + 8);
        v6 = 0; /*0x67a2c5*/
                *((unsigned char *)this + 13) = 1;
        if ( Capacity > 0 ) /*0x67a2cd*/
        {
          do /*0x67a2e1*/
          {
                        *(unsigned int *)(*((unsigned int *)this + 4) + 4 * v6) = *(unsigned int *)(aP1->headNode[0] + 4 * v6);
            ++v6; /*0x67a2de*/
          }
          while ( v6 < this->? ); /*0x67a2e1*/
        }
      }
    }
    else
    {
            *((unsigned int *)this + 4) = 0;
            *((unsigned char *)this + 13) = 0;
    }
  }
    *((unsigned int *)this + 16) = aP1->sectionHead[0];
    *((unsigned int *)this + 20) = aP1->sectionHead[1];
    *((unsigned int *)this + 24) = aP1->sectionHead[2];
  return (int *)this; /*0x67a304*/
}
// 0x67A390
CCINIClass * TypeList_flat::VoxelAnimConstructor()
{
    *((unsigned int *)this + 4) = 0;
    *((unsigned int *)this + 8) = 0;
    *((unsigned char *)this + 12) = 1;
    *((unsigned char *)this + 13) = 0;
    *((unsigned int *)this + 20) = 10;
    *((unsigned int *)this + 16) = 0;
    *this = &vt_TypeList_VoxelAnimTypeClass_const;
    return (CCINIClass *)this;
}
// 0x67A410
namespace gamemd {
void TypeList_VoxelAnim::ddtor()
{
  void *v2; // eax

  v2 = *(void **)&this->Items; /*0x67a416*/
    *((unsigned int *)this + 64) = 0;
    if ( v2 && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(v2); /*0x67a426*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x67A440
namespace gamemd {
unsigned int TypeList_VoxelAnim::GetIndex(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x67a447*/
}
} // namespace gamemd

// 0x67A460
namespace gamemd {
int TypeList_VoxelAnim::Clear(int a2)
{
    return *(unsigned int *)(*((unsigned int *)this + 4) + 4 * a2);
}
} // namespace gamemd

// 0x67A4F0
DynamicVector * TypeList_flat::Construct()
{
    *((unsigned int *)this + 4) = 0;
    *((unsigned int *)this + 8) = 0;
    *((unsigned char *)this + 12) = 1;
    *((unsigned char *)this + 13) = 0;
    *((unsigned int *)this + 20) = 10;
    *((unsigned int *)this + 16) = 0;
    *this = &vt_TypeList_int;
    return (DynamicVector *)this;
}
// 0x67A600
CCINIClass * TypeList_flat::ConstructSmudge()
{
    *((unsigned int *)this + 4) = 0;
    *((unsigned int *)this + 8) = 0;
    *((unsigned char *)this + 12) = 1;
    *((unsigned char *)this + 13) = 0;
    *((unsigned int *)this + 20) = 10;
    *((unsigned int *)this + 16) = 0;
    *this = &vt_TypeList_SmudgeTypeClass_const;
    return (CCINIClass *)this;
}
// 0x67A680
namespace gamemd {
void TypeList_VoxelAnim::TypeList_vt03()
{
  void *v2; // eax

  v2 = *(void **)&this->Items; /*0x67a686*/
    *((unsigned int *)this + 64) = 0;
    if ( v2 && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(v2); /*0x67a696*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x67A6B0
namespace gamemd {
unsigned int TypeList_VoxelAnim::TypeList_vt05(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x67a6b7*/
}
} // namespace gamemd

// 0x67A6D0
int TypeList_flat::Clear(int a2)
{
    return *(unsigned int *)(*((unsigned int *)this + 4) + 4 * a2);
}
// 0x67A820
unsigned int * TypeList_flat::InfantryConstructor()
{
    *((unsigned int *)this + 4) = 0;
    *((unsigned int *)this + 8) = 0;
    *((unsigned char *)this + 12) = 1;
    *((unsigned char *)this + 13) = 0;
    *((unsigned int *)this + 20) = 10;
    *((unsigned int *)this + 16) = 0;
    *this = &vt_TypeList_InfantryTypeClass_const;
    return this;
}
// 0x67A930
namespace gamemd {
void TypeList_cptr_TerrainTypeClass::GetClassIdentifier()
{
  void *v2; // eax

  v2 = *(void **)&this->Items; /*0x67a936*/
    *((unsigned int *)this + 64) = 0;
    if ( v2 && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(v2); /*0x67a946*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x67A960
namespace gamemd {
unsigned int TypeList_cptr_TerrainTypeClass::GetIndex(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x67a967*/
}
} // namespace gamemd

// 0x67A980
namespace gamemd {
int TypeList_cptr_TerrainTypeClass::SaveToINI(int a2)
{
    return *(unsigned int *)(*((unsigned int *)this + 4) + 4 * a2);
}
} // namespace gamemd

// 0x67A990
namespace gamemd {
TypeList_flat * TypeList_VoxelAnim::Add(char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
  *(unsigned int *)this = (void*)&VectorClass_VoxelAnimTypeClass_const___vftable; /*0x67a996*/
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x67a9a8*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x67a9c8*/
    RA2_OPDEL(); /*0x67a9cb*/
  return this; /*0x67a9d5*/
}
} // namespace gamemd

// 0x67A9E0
namespace gamemd {
TypeList_flat * TypeList_VoxelAnim::TypeList_vt00(char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
  *(unsigned int *)this = (void*)&VectorClass_SmudgeTypeClass_const___vftable; /*0x67a9e6*/
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x67a9f8*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x67aa18*/
    RA2_OPDEL(); /*0x67aa1b*/
  return this; /*0x67aa25*/
}
} // namespace gamemd

// 0x67AA30
namespace gamemd {
TypeList_flat * TypeList_cptr_TerrainTypeClass::Add(char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
  *(unsigned int *)this = (void*)&VectorClass_TerrainTypeClass_const___vftable; /*0x67aa36*/
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x67aa48*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x67aa68*/
    RA2_OPDEL(); /*0x67aa6b*/
  return this; /*0x67aa75*/
}
} // namespace gamemd

// 0x67AAF0
namespace gamemd {
char TypeList_VoxelAnim::AddRef(int a2)
{
  int m_8; // esi
  int v3; // edx
  unsigned int *v4; // eax
  int v5; // ecx

    v2 = *((unsigned int *)this + 8);
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x67aafd*/
  {
    v3 = 0; /*0x67aaff*/
    if ( m_8 <= 0 ) /*0x67ab03*/
      return 1; /*0x67ab23*/
        v4 = (unsigned int *)*((unsigned int *)this + 4);
    v5 = *(unsigned int *)(a2 + 4) - (unsigned int)v4; /*0x67ab0b*/
    while ( *v4 == *(unsigned int *)((char *)v4 + v5) ) /*0x67ab14*/
    {
      ++v3; /*0x67ab16*/
      ++v4; /*0x67ab17*/
      if ( v3 >= m_8 ) /*0x67ab1c*/
        return 1; /*0x67ab1c*/
    }
  }
  return 0; /*0x67ab1e*/
}
} // namespace gamemd

// 0x67AB30
namespace gamemd {
char TypeList_VoxelAnim::SetCapacity(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x67ab3c*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x67ab4c*/
      v4 = a3; /*0x67ab62*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x67ab5e*/
        *((unsigned char *)this + 12) = 1;
    if ( v4 ) /*0x67ab6a*/
    {
            if ( *((unsigned int *)this + 1) )
      {
                v6 = *((unsigned int *)this + 2);
        if ( a2 < m_8 ) /*0x67ab81*/
          m_8 = a2; /*0x67ab83*/
                for ( i = 0; i < v6; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
          ++i; /*0x67ab8e*/
                if ( *((unsigned char *)this + 13) )
        {
          RA2_OPDEL(*(void **)&this->Items); /*0x67aba6*/
                    *((unsigned int *)this + 1) = 0;
        }
      }
            *((unsigned int *)this + 1) = v4;
            *((unsigned int *)this + 2) = a2;
            *((unsigned char *)this + 13) = a3 == 0;
      return 1; /*0x67abc8*/
    }
    else
    {
      return 0; /*0x67ab6f*/
    }
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
    return 1; /*0x67abd8*/
  }
}
} // namespace gamemd

// 0x67AC10
namespace gamemd {
int TypeList_VoxelAnim::IndexOf(unsigned int * a2)
{
  int result; // eax
  int m_8; // edx
  unsigned int *i; // ecx

    if ( !*((unsigned char *)this + 48) )
    return 0; /*0x67ac18*/
    v3 = *((unsigned int *)this + 32);
  result = 0; /*0x67ac21*/
  if ( m_8 <= 0 ) /*0x67ac25*/
    return -1; /*0x67ac3c*/
  for ( i = *(unsigned int **)&this->Items; *i != *a2; ++i ) /*0x67ac2b*/
  {
    if ( ++result >= m_8 ) /*0x67ac3a*/
      return -1; /*0x67ac3a*/
  }
  return result; /*0x67ac1a*/
}
} // namespace gamemd

// 0x67AC50
namespace gamemd {
unsigned int TypeList_VoxelAnim::PointerToIndex(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x67ac57*/
}
} // namespace gamemd

// 0x67ACD0
namespace gamemd {
char TypeList_VoxelAnim::Remove(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x67acdc*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x67ace8*/
      v4 = a3; /*0x67acfe*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x67acfa*/
        *((unsigned char *)this + 12) = 1;
    if ( !v4 ) /*0x67ad06*/
      return 0; /*0x67ad7a*/
        if ( *((unsigned int *)this + 1) )
    {
            v5 = *((unsigned int *)this + 2);
      if ( a2 < m_8 ) /*0x67ad14*/
        m_8 = a2; /*0x67ad16*/
            for ( i = 0; i < v5; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
        ++i; /*0x67ad21*/
            if ( *((unsigned char *)this + 13) )
      {
        RA2_OPDEL(*(void **)&this->Items); /*0x67ad39*/
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
  return 1; /*0x67ad6e*/
}
} // namespace gamemd

// 0x67ADD0
namespace gamemd {
int TypeList_VoxelAnim::GetSize(unsigned int * a2)
{
  int m_10; // edx
  int result; // eax
  unsigned int *i; // ecx

    v2 = *((unsigned int *)this + 16);
  result = 0; /*0x67add3*/
  if ( m_10 <= 0 ) /*0x67add8*/
    return -1; /*0x67adef*/
    for ( i = (unsigned int *)*((unsigned int *)this + 4); *i != *a2; ++i )
  {
    if ( ++result >= m_10 ) /*0x67aded*/
      return -1; /*0x67aded*/
  }
  return result; /*0x67adf2*/
}
} // namespace gamemd

// 0x67AE70
char TypeList_flat::AddRef(int a2)
{
  int m_8; // esi
  int v3; // edx
  unsigned int *v4; // eax
  int v5; // ecx

    v2 = *((unsigned int *)this + 8);
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x67ae7d*/
  {
    v3 = 0; /*0x67ae7f*/
    if ( m_8 <= 0 ) /*0x67ae83*/
      return 1; /*0x67aea3*/
        v4 = (unsigned int *)*((unsigned int *)this + 4);
    v5 = *(unsigned int *)(a2 + 4) - (unsigned int)v4; /*0x67ae8b*/
    while ( *v4 == *(unsigned int *)((char *)v4 + v5) ) /*0x67ae94*/
    {
      ++v3; /*0x67ae96*/
      ++v4; /*0x67ae97*/
      if ( v3 >= m_8 ) /*0x67ae9c*/
        return 1; /*0x67ae9c*/
    }
  }
  return 0; /*0x67ae9e*/
}
// 0x67B050
char TypeList_flat::Release(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x67b05c*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x67b068*/
      v4 = a3; /*0x67b07e*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x67b07a*/
        *((unsigned char *)this + 12) = 1;
    if ( !v4 ) /*0x67b086*/
      return 0; /*0x67b0fa*/
        if ( *((unsigned int *)this + 1) )
    {
            v5 = *((unsigned int *)this + 2);
      if ( a2 < m_8 ) /*0x67b094*/
        m_8 = a2; /*0x67b096*/
            for ( i = 0; i < v5; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
        ++i; /*0x67b0a1*/
            if ( *((unsigned char *)this + 13) )
      {
        RA2_OPDEL(*(void **)&this->u32_4); /*0x67b0b9*/
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
  return 1; /*0x67b0ee*/
}
// 0x67B150
namespace gamemd {
int TypeList_VoxelAnim::TypeList_vt04(unsigned int * a2)
{
  int m_10; // edx
  int result; // eax
  unsigned int *i; // ecx

    v2 = *((unsigned int *)this + 16);
  result = 0; /*0x67b153*/
  if ( m_10 <= 0 ) /*0x67b158*/
    return -1; /*0x67b16f*/
    for ( i = (unsigned int *)*((unsigned int *)this + 4); *i != *a2; ++i )
  {
    if ( ++result >= m_10 ) /*0x67b16d*/
      return -1; /*0x67b16d*/
  }
  return result; /*0x67b172*/
}
} // namespace gamemd

// 0x67B1F0
namespace gamemd {
char TypeList_cptr_TerrainTypeClass::AddRef(int a2)
{
  int m_8; // esi
  int v3; // edx
  unsigned int *v4; // eax
  int v5; // ecx

    v2 = *((unsigned int *)this + 8);
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x67b1fd*/
  {
    v3 = 0; /*0x67b1ff*/
    if ( m_8 <= 0 ) /*0x67b203*/
      return 1; /*0x67b223*/
        v4 = (unsigned int *)*((unsigned int *)this + 4);
    v5 = *(unsigned int *)(a2 + 4) - (unsigned int)v4; /*0x67b20b*/
    while ( *v4 == *(unsigned int *)((char *)v4 + v5) ) /*0x67b214*/
    {
      ++v3; /*0x67b216*/
      ++v4; /*0x67b217*/
      if ( v3 >= m_8 ) /*0x67b21c*/
        return 1; /*0x67b21c*/
    }
  }
  return 0; /*0x67b21e*/
}
} // namespace gamemd

// 0x67B230
namespace gamemd {
char TypeList_cptr_TerrainTypeClass::SetCapacity(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x67b23c*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x67b24c*/
      v4 = a3; /*0x67b262*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x67b25e*/
        *((unsigned char *)this + 12) = 1;
    if ( v4 ) /*0x67b26a*/
    {
            if ( *((unsigned int *)this + 1) )
      {
                v6 = *((unsigned int *)this + 2);
        if ( a2 < m_8 ) /*0x67b281*/
          m_8 = a2; /*0x67b283*/
                for ( i = 0; i < v6; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
          ++i; /*0x67b28e*/
                if ( *((unsigned char *)this + 13) )
        {
          RA2_OPDEL(*(void **)&this->Items); /*0x67b2a6*/
                    *((unsigned int *)this + 1) = 0;
        }
      }
            *((unsigned int *)this + 1) = v4;
            *((unsigned int *)this + 2) = a2;
            *((unsigned char *)this + 13) = a3 == 0;
      return 1; /*0x67b2c8*/
    }
    else
    {
      return 0; /*0x67b26f*/
    }
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
    return 1; /*0x67b2d8*/
  }
}
} // namespace gamemd

// 0x67B2E0
namespace gamemd {
void TypeList_cptr_TerrainTypeClass::TryFreeAndClear()
{
    if ( *((unsigned int *)this + 16) && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(*(void **)&this->Items); /*0x67b2f3*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x67B310
namespace gamemd {
int TypeList_cptr_TerrainTypeClass::IndexOf(unsigned int * a2)
{
  int result; // eax
  int m_8; // edx
  unsigned int *i; // ecx

    if ( !*((unsigned char *)this + 48) )
    return 0; /*0x67b318*/
    v3 = *((unsigned int *)this + 32);
  result = 0; /*0x67b321*/
  if ( m_8 <= 0 ) /*0x67b325*/
    return -1; /*0x67b33c*/
  for ( i = *(unsigned int **)&this->Items; *i != *a2; ++i ) /*0x67b32b*/
  {
    if ( ++result >= m_8 ) /*0x67b33a*/
      return -1; /*0x67b33a*/
  }
  return result; /*0x67b31a*/
}
} // namespace gamemd

// 0x67B350
namespace gamemd {
unsigned int TypeList_cptr_TerrainTypeClass::PointerToIndex(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x67b357*/
}
} // namespace gamemd

// 0x67B3D0
namespace gamemd {
char TypeList_cptr_TerrainTypeClass::Remove(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x67b3dc*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x67b3e8*/
      v4 = a3; /*0x67b3fe*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x67b3fa*/
        *((unsigned char *)this + 12) = 1;
    if ( !v4 ) /*0x67b406*/
      return 0; /*0x67b47a*/
        if ( *((unsigned int *)this + 1) )
    {
            v5 = *((unsigned int *)this + 2);
      if ( a2 < m_8 ) /*0x67b414*/
        m_8 = a2; /*0x67b416*/
            for ( i = 0; i < v5; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
        ++i; /*0x67b421*/
            if ( *((unsigned char *)this + 13) )
      {
        RA2_OPDEL(*(void **)&this->Items); /*0x67b439*/
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
  return 1; /*0x67b46e*/
}
} // namespace gamemd

// 0x67B4D0
namespace gamemd {
int TypeList_cptr_TerrainTypeClass::GetSize(unsigned int * a2)
{
  int m_10; // edx
  int result; // eax
  unsigned int *i; // ecx

    v2 = *((unsigned int *)this + 16);
  result = 0; /*0x67b4d3*/
  if ( m_10 <= 0 ) /*0x67b4d8*/
    return -1; /*0x67b4ef*/
    for ( i = (unsigned int *)*((unsigned int *)this + 4); *i != *a2; ++i )
  {
    if ( ++result >= m_10 ) /*0x67b4ed*/
      return -1; /*0x67b4ed*/
  }
  return result; /*0x67b4f2*/
}
} // namespace gamemd

// 0x67C010
namespace gamemd {
VectorClass_flat * TypeList_VoxelAnim::Constructor(char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_VoxelAnimTypeClass_const;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x67c028*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x67c048*/
    RA2_OPDEL(); /*0x67c04b*/
  return this; /*0x67c055*/
}
} // namespace gamemd

// 0x67C100
namespace gamemd {
DynamicVector * TypeList_VoxelAnim::Constructor_0(char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_SmudgeTypeClass_const;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x67c118*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x67c138*/
    RA2_OPDEL(); /*0x67c13b*/
  return this; /*0x67c145*/
}
} // namespace gamemd

// 0x67C150
namespace gamemd {
VectorClass_flat * TypeList_cptr_TerrainTypeClass::Constructor(char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_TerrainTypeClass_const;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x67c168*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x67c188*/
    RA2_OPDEL(); /*0x67c18b*/
  return this; /*0x67c195*/
}
} // namespace gamemd

// 0x67C1A0
namespace gamemd {
DynamicVector * TypeList_VoxelAnim::Constructor_1(char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
    *Block = &vt_VectorClass_TerrainTypeClass_const;
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x67c1b8*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x67c1d8*/
    RA2_OPDEL(); /*0x67c1db*/
  return this; /*0x67c1e5*/
}
} // namespace gamemd

// 0x67C1F0
unsigned int * TypeList_flat::CopyVoxelAnim(VectorClass_flat * aP1)
{
  int v3; // eax
  void *v4; // eax
  int Capacity; // ecx
  int v6; // eax

    *((unsigned int *)this + 4) = 0;
    *((unsigned int *)this + 8) = 0;
    *((unsigned char *)this + 12) = 1;
    *((unsigned char *)this + 13) = 0;
    *this = &vt_VectorClass_VoxelAnimTypeClass_const;
  if ( this != (TypeList *)aP1 ) /*0x67c210*/
  {
    Vector::Cleanup2(); /*0x67c212*/
    v3 = aP1[2]; /*0x67c218*/
        *((unsigned int *)this + 8) = v3;
    if ( v3 ) /*0x67c220*/
    {
      v4 = (void *)RA2_OPNEW(4 * v3); /*0x67c226*/
            *((unsigned int *)this + 4) = v4;
      if ( v4 ) /*0x67c233*/
      {
                v5 = *((unsigned int *)this + 8);
        v6 = 0; /*0x67c238*/
                *((unsigned char *)this + 13) = 1;
        if ( Capacity > 0 ) /*0x67c240*/
        {
          do /*0x67c254*/
          {
                        *(unsigned int *)(*((unsigned int *)this + 4) + 4 * v6) = *((unsigned int *)aP1->Items + v6);
            ++v6; /*0x67c251*/
          }
          while ( v6 < this->? ); /*0x67c254*/
        }
      }
    }
    else
    {
            *((unsigned int *)this + 4) = 0;
            *((unsigned char *)this + 13) = 0;
    }
  }
    *((unsigned int *)this + 16) = aP1[1].vtable0;
    *((unsigned int *)this + 20) = aP1[1].Items;
    *this = &vt_TypeList_VoxelAnimTypeClass_const;
    return this;
}
// 0x717B70
namespace gamemd {
TypeList_flat * TypeList_cptr_ParticleSystemTypeClass::QueryInterface(char a2)
{
  void *v3; // eax

    v3 = (void *)*(Block + 1);
  *(unsigned int *)this = (void*)&VectorClass_ParticleSystemTypeClass_const___vftable; /*0x717b76*/
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x717b88*/
        *(Block + 1) = 0;
  }
    *((unsigned char *)Block + 13) = 0;
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x717ba8*/
    RA2_OPDEL(); /*0x717bab*/
  return this; /*0x717bb5*/
}
} // namespace gamemd

// 0x717C70
unsigned int * TypeList_flat::ParticleConstructor(int a2, int a3)
{
    *((unsigned int *)this + 4) = 0;
    *((unsigned int *)this + 8) = a2;
    *((unsigned char *)this + 12) = 1;
    *((unsigned char *)this + 13) = 0;
    *this = &vt_VectorClass_ParticleSystemTypeClass_const;
  if ( a2 ) /*0x717c91*/
  {
    if ( a3 ) /*0x717c99*/
    {
            *((unsigned int *)this + 4) = a3;
    }
    else
    {
      *(void **)&this->u32_4 = (void *)RA2_OPNEW(4 * a2); /*0x717cac*/
            *((unsigned char *)this + 13) = 1;
    }
  }
    *this = &vt_DynamicVectorClass_ParticleSystemTypeClass_const;
    *((unsigned int *)this + 20) = 10;
    *((unsigned int *)this + 16) = 0;
    return this;
}
// 0x717CD0
char TypeList_flat::PushBack(VectorClass_flat * aP1)
{
  int Capacity; // ecx
  int CapacityIncrement; // eax
  int Count; // eax
  unsigned int *Items; // edx

    v3 = *((unsigned int *)this + 8);
    if ( *((unsigned int *)this + 16) >= v3 )
  {
        if ( !*((unsigned char *)this + 13) && v3 )
      return 0; /*0x717ce6*/
        v4 = *((unsigned int *)this + 20);
    if ( CapacityIncrement <= 0 /*0x717cf8*/
      || !(*((uint8_t (**)(TypeList *, int, unsigned int))this->DynamicVectorClass + 2))(
            this,
            Capacity + CapacityIncrement,
            0) )
    {
      return 0; /*0x717cff*/
    }
  }
    v6 = *((unsigned int *)this + 16);
    v7 = *((unsigned int *)this + 4);
    *((unsigned int *)this + 16) = v6 + 1;
  Items[Count] = *aP1; /*0x717d18*/
  return 1; /*0x717d01*/
}