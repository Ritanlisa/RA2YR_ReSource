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
#include "e4/classes/CCINIClass_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/TypeList_e4.hpp"  // G57w10 D supply (bare TypeList carrier)

// 0x459F90
namespace gamemd {
void TypeList_cptr_ParticleSystemTypeClass::GetClassIdentifier()
{

  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x459f96*/
  this->m_10 = 0; /*0x459f99*/
  if ( v2 && BYTE1(this->m_C) ) /*0x459fa0*/
  {
    __3_YAXPAX_Z(v2); /*0x459fa6*/
    *(unsigned int *)&this->m_1[3] = 0; /*0x459fae*/
  }
  BYTE1(this->m_C) = 0; /*0x459fb1*/
  this->m_8 = 0; /*0x459fb4*/

}
} // namespace gamemd

// 0x459FC0
namespace gamemd {
unsigned int TypeList_cptr_ParticleSystemTypeClass::LoadTypeData(int a2)
{

  if ( LOBYTE(this->m_C) ) /*0x459fc0*/
    return (unsigned int)(a2 - *(unsigned int *)&this->m_1[3]) >> 2; /*0x459fd5*/
  else
    return 0; /*0x459fc7*/

}
} // namespace gamemd

// 0x459FE0
namespace gamemd {
int TypeList_Particle::GetIndex(int a2)
{

  return *(unsigned int *)(*(unsigned int *)&this->m_1[3] + 4 * a2); /*0x459fea*/

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

  m_8 = this->m_8; /*0x45a182*/
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x45a18d*/
  {
    v3 = 0; /*0x45a18f*/
    if ( m_8 <= 0 ) /*0x45a193*/
      return 1; /*0x45a1b3*/
    v4 = *(unsigned int **)&this->m_1[3]; /*0x45a195*/
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
    LOBYTE(this->m_C) = 0; /*0x45a1d6*/
    if ( a3 ) /*0x45a1dc*/
      v4 = a3; /*0x45a1f2*/
    else
      v4 = (unsigned int *)__2_YAPAXI_Z(4 * a2); /*0x45a1ee*/
    LOBYTE(this->m_C) = 1; /*0x45a1f6*/
    if ( v4 ) /*0x45a1fa*/
    {
      if ( *(unsigned int *)&this->m_1[3] ) /*0x45a205*/
      {
        m_8 = this->m_8; /*0x45a20c*/
        if ( a2 < m_8 ) /*0x45a211*/
          m_8 = a2; /*0x45a213*/
        for ( i = 0; i < m_8; v4[i - 1] = *(unsigned int *)(*(unsigned int *)&this->m_1[3] + 4 * i - 4) ) /*0x45a219*/
          ++i; /*0x45a21e*/
        if ( BYTE1(this->m_C) ) /*0x45a22b*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x45a236*/
          *(unsigned int *)&this->m_1[3] = 0; /*0x45a23e*/
        }
      }
      *(unsigned int *)&this->m_1[3] = (unsigned int)(v4); /*0x45a247*/
      this->m_8 = a2; /*0x45a24f*/
      BYTE1(this->m_C) = a3 == 0; /*0x45a252*/
      return 1; /*0x45a258*/
    }
    else
    {
      return 0; /*0x45a1ff*/
    }
  }
  else
  {
    (*(void (**)(_VectorClass_PBVParticleSystemTypeClass *))(*(unsigned int *)this->__pad_0 + 12))((_VectorClass_PBVParticleSystemTypeClass *)this); /*0x45a262*/
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

  if ( !LOBYTE(this->m_C) ) /*0x45a2a0*/
    return 0; /*0x45a2a8*/
  m_8 = this->m_8; /*0x45a2ae*/
  result = 0; /*0x45a2b1*/
  if ( m_8 <= 0 ) /*0x45a2b5*/
    return -1; /*0x45a2cc*/
  for ( i = *(unsigned int **)&this->m_1[3]; *i != *a2; ++i ) /*0x45a2bb*/
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

  if ( LOBYTE(this->m_C) ) /*0x45a2e0*/
    return (unsigned int)(a2 - *(unsigned int *)&this->m_1[3]) >> 2; /*0x45a2f5*/
  else
    return 0; /*0x45a2e7*/

}
} // namespace gamemd

// 0x45A300
namespace gamemd {
char TypeList_cptr_ParticleSystemTypeClass::Add(int a2, unsigned int * a3, void *a3_2)
{

  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x45a30c*/
  {
    LOBYTE(this->m_C) = 0; /*0x45a312*/
    if ( a3 ) /*0x45a318*/
      v4 = a3; /*0x45a32e*/
    else
      v4 = (unsigned int *)__2_YAPAXI_Z(4 * a2); /*0x45a32a*/
    LOBYTE(this->m_C) = 1; /*0x45a332*/
    if ( !v4 ) /*0x45a336*/
      return 0; /*0x45a3aa*/
    if ( *(unsigned int *)&this->m_1[3] ) /*0x45a338*/
    {
      m_8 = this->m_8; /*0x45a33f*/
      if ( a2 < m_8 ) /*0x45a344*/
        m_8 = a2; /*0x45a346*/
      for ( i = 0; i < m_8; v4[i - 1] = *(unsigned int *)(*(unsigned int *)&this->m_1[3] + 4 * i - 4) ) /*0x45a34c*/
        ++i; /*0x45a351*/
      if ( BYTE1(this->m_C) ) /*0x45a35e*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x45a369*/
        *(unsigned int *)&this->m_1[3] = 0; /*0x45a371*/
      }
    }
    *(unsigned int *)&this->m_1[3] = (unsigned int)(v4); /*0x45a37a*/
    this->m_8 = a2; /*0x45a382*/
    BYTE1(this->m_C) = a3 == 0; /*0x45a385*/
  }
  else
  {
    (*(void (**)(_DynamicVectorClass_PBVParticleSystemTypeClass *))(*(unsigned int *)this->__pad_0 + 12))((_DynamicVectorClass_PBVParticleSystemTypeClass *)this); /*0x45a38e*/
  }
  v7 = this->m_8; /*0x45a391*/
  if ( v7 < this->m_10 ) /*0x45a399*/
    this->m_10 = v7; /*0x45a39b*/
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

  m_10 = this->m_10; /*0x45a3b0*/
  result = 0; /*0x45a3b3*/
  if ( m_10 <= 0 ) /*0x45a3b8*/
    return -1; /*0x45a3cf*/
  for ( i = *(unsigned int **)&this->m_1[3]; *i != *a2; ++i ) /*0x45a3be*/
  {
    if ( ++result >= m_10 ) /*0x45a3cd*/
      return -1; /*0x45a3cd*/
  }
  return result; /*0x45a3d2*/

}
}
// 0x45A9C0
namespace gamemd {
VectorClass_flat * TypeList_Particle::Add(unsigned int * Block, char a2, void *a3_1)
{

  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x45a9c3*/
  *(unsigned int *)this->__pad_0 = (unsigned int)&vt_VectorClass;
  if ( v3 && BYTE1(this->m_C) ) /*0x45a9d0*/
  {
    __3_YAXPAX_Z(v3); /*0x45a9d8*/
    *(unsigned int *)&this->m_1[3] = 0; /*0x45a9e0*/
  }
  BYTE1(this->m_C) = 0; /*0x45a9eb*/
  this->m_8 = 0; /*0x45a9f1*/
  if ( (a2 & 1) != 0 ) /*0x45a9f8*/
    __3_YAXPAX_Z(this); /*0x45a9fb*/
  return (gamemd::VectorClass_flat *)(this->__pad_0); /*0x45aa05*/

}
} // namespace gamemd

// 0x477840
namespace gamemd {  // G42.18c ns repair
void TypeList_flat::ddtor()
{

  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x477846*/
  this->u32_10 = 0; /*0x477849*/
  if ( v2 && BYTE1(this->u32_C) ) /*0x477850*/
  {
    __3_YAXPAX_Z(v2); /*0x477856*/
    *(unsigned int *)&this->m_1[3] = 0; /*0x47785e*/
  }
  BYTE1(this->u32_C) = 0; /*0x477861*/
  this->u32_8 = 0; /*0x477864*/

}
}  // G42.18c ns repair
// 0x477870
namespace gamemd {  // G42.18c ns repair
unsigned int TypeList_flat::GetCapacity(int a2)
{

  if ( LOBYTE(this->u32_C) ) /*0x477870*/
    return (unsigned int)(a2 - *(unsigned int *)&this->m_1[3]) >> 2; /*0x477885*/
  else
    return 0; /*0x477877*/

}
}  // G42.18c ns repair
// 0x4778F0
namespace gamemd {
int TypeList_TechnoType::Clear(int a2)
{

  return *(unsigned int *)(*(unsigned int *)&this->m_1[3] + 4 * a2); /*0x4778fa*/

}
} // namespace gamemd

// 0x477990
namespace gamemd {  // G42.18c ns repair
TypeList_flat * TypeList_flat::QueryInterface(unsigned int * Block, char a2)
{

  void *v3; // eax

  v3 = (void *)*((unsigned int *)this + 1); /*0x477993*/
  *(unsigned int *)this = (unsigned int)(&vt_VectorClass); /*0x477996*/
  if ( v3 && *((unsigned char *)this + 13) ) /*0x4779a0*/
  {
    __3_YAXPAX_Z(v3); /*0x4779a8*/
    *((unsigned int *)this + 1) = 0; /*0x4779b0*/
  }
  *((unsigned char *)this + 13) = 0; /*0x4779bb*/
  *((unsigned int *)this + 2) = 0; /*0x4779c1*/
  if ( (a2 & 1) != 0 ) /*0x4779c8*/
    __3_YAXPAX_Z(this); /*0x4779cb*/
  return (gamemd::TypeList_flat *)(this); /*0x4779d5*/

}
}  // G42.18c ns repair
// 0x477F10
namespace gamemd {  // G42.18c ns repair
int TypeList_flat::GetSize(unsigned int * a2)
{

  int m_10; // edx
  int result; // eax
  unsigned int *i; // ecx

  m_10 = this->u32_10; /*0x477f10*/
  result = 0; /*0x477f13*/
  if ( m_10 <= 0 ) /*0x477f18*/
    return -1; /*0x477f2f*/
  for ( i = *(unsigned int **)&this->m_1[3]; *i != *a2; ++i ) /*0x477f1e*/
  {
    if ( ++result >= m_10 ) /*0x477f2d*/
      return -1; /*0x477f2d*/
  }
  return result; /*0x477f32*/

}
}  // G42.18c ns repair
// 0x477FC0
namespace gamemd {
char TypeList_TechnoType::AddRef(int a2)
{

  int m_8; // esi
  int v3; // edx
  unsigned int *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x477fc2*/
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x477fcd*/
  {
    v3 = 0; /*0x477fcf*/
    if ( m_8 <= 0 ) /*0x477fd3*/
      return 1; /*0x477ff3*/
    v4 = *(unsigned int **)&this->m_1[3]; /*0x477fd5*/
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
    LOBYTE(this->m_C) = 0; /*0x478016*/
    if ( a3 ) /*0x47801c*/
      v4 = a3; /*0x478032*/
    else
      v4 = (unsigned int *)__2_YAPAXI_Z(4 * a2); /*0x47802e*/
    LOBYTE(this->m_C) = 1; /*0x478036*/
    if ( v4 ) /*0x47803a*/
    {
      if ( *(unsigned int *)&this->m_1[3] ) /*0x478045*/
      {
        m_8 = this->m_8; /*0x47804c*/
        if ( a2 < m_8 ) /*0x478051*/
          m_8 = a2; /*0x478053*/
        for ( i = 0; i < m_8; v4[i - 1] = *(unsigned int *)(*(unsigned int *)&this->m_1[3] + 4 * i - 4) ) /*0x478059*/
          ++i; /*0x47805e*/
        if ( BYTE1(this->m_C) ) /*0x47806b*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x478076*/
          *(unsigned int *)&this->m_1[3] = 0; /*0x47807e*/
        }
      }
      *(unsigned int *)&this->m_1[3] = (unsigned int)(v4); /*0x478087*/
      this->m_8 = a2; /*0x47808f*/
      BYTE1(this->m_C) = a3 == 0; /*0x478092*/
      return 1; /*0x478098*/
    }
    else
    {
      return 0; /*0x47803f*/
    }
  }
  else
  {
    (*(void (**)(void *))(*(unsigned int *)this->__pad_0 + 12))(this); /*0x4780a2*/
    return 1; /*0x4780a8*/
  }

}
} // namespace gamemd

// 0x4780B0
namespace gamemd {
void TypeList_TechnoType::ddtor()
{

  if ( *(unsigned int *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x4780bd*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x4780c3*/
    *(unsigned int *)&this->m_1[3] = 0; /*0x4780cb*/
  }
  BYTE1(this->m_C) = 0; /*0x4780ce*/
  this->m_8 = 0; /*0x4780d1*/

}
} // namespace gamemd

// 0x4780E0
namespace gamemd {
int TypeList_TechnoType::GetSize(unsigned int * a2)
{

  int result; // eax
  int m_8; // edx
  unsigned int *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x4780e0*/
    return 0; /*0x4780e8*/
  m_8 = this->m_8; /*0x4780ee*/
  result = 0; /*0x4780f1*/
  if ( m_8 <= 0 ) /*0x4780f5*/
    return -1; /*0x47810c*/
  for ( i = *(unsigned int **)&this->m_1[3]; *i != *a2; ++i ) /*0x4780fb*/
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

  if ( LOBYTE(this->m_C) ) /*0x478120*/
    return (unsigned int)(a2 - *(unsigned int *)&this->m_1[3]) >> 2; /*0x478135*/
  else
    return 0; /*0x478127*/

}
} // namespace gamemd

// 0x478680
namespace gamemd {
VectorClass_flat * TypeList_TechnoType::Add(unsigned int * Block, char a2, void *a3_1)
{

  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x478683*/
  *(unsigned int *)this->__pad_0 = (unsigned int)&vt_VectorClass;
  if ( v3 && BYTE1(this->m_C) ) /*0x478690*/
  {
    __3_YAXPAX_Z(v3); /*0x478698*/
    *(unsigned int *)&this->m_1[3] = 0; /*0x4786a0*/
  }
  BYTE1(this->m_C) = 0; /*0x4786ab*/
  this->m_8 = 0; /*0x4786b1*/
  if ( (a2 & 1) != 0 ) /*0x4786b8*/
    __3_YAXPAX_Z(this); /*0x4786bb*/
  return (gamemd::VectorClass_flat *)(this->__pad_0); /*0x4786c5*/

}
} // namespace gamemd

// 0x478720
namespace gamemd {  // G42.18c ns repair
unsigned int * TypeList_flat::Copy(unsigned int * a2, void *a2_2)
{

  int v3; // eax
  void *v4; // eax
  int Capacity; // ecx
  int v6; // eax

  if ( (TypeList *)this == (TypeList *)a2 ) /*0x47872a*/
    return (unsigned int *)(&this->DynamicVectorClass; /*0x47872a*/);
  (*((void (**)(TypeList *))this->DynamicVectorClass + 3))((TypeList *)this); /*0x47872e*/
  v3 = a2[2]; /*0x478731*/
  ((unsigned int *)this)[0] = v3; /*0x478736*/
  if ( !v3 ) /*0x478739*/
  {
    ((unsigned int *)this)[0] = 0; /*0x47877a*/
    ((unsigned int *)this)[0] = 0; /*0x478781*/
return (unsigned int *)&this->DynamicVectorClass; /*0x478785*/
  }
  v4 = (void *)__2_YAPAXI_Z(4 * v3); /*0x478743*/
  ((unsigned int *)this)[0] = (unsigned int)(v4); /*0x47874b*/
  if ( !v4 ) /*0x478750*/
return (unsigned int *)&this->DynamicVectorClass; /*0x478750*/
  Capacity = ((unsigned int *)this)[0]; /*0x478752*/
  v6 = 0; /*0x478755*/
  ((unsigned int *)this)[0] = 1; /*0x478759*/
  if ( Capacity <= 0 ) /*0x47875d*/
return (unsigned int *)&this->DynamicVectorClass; /*0x47875d*/
  do /*0x478771*/
  {
    *((unsigned int *)((unsigned int *)this)[0] + v6) = *(unsigned int *)(a2[1] + 4 * v6); /*0x478768*/
    ++v6; /*0x47876e*/
  }
  while ( v6 < ((unsigned int *)this)[0] ); /*0x478771*/
return (unsigned int *)&this->DynamicVectorClass; /*0x478775*/

}
}  // G42.18c ns repair
// 0x478790
namespace gamemd {  // G42.18c ns repair
unsigned int * TypeList_flat::TechnoTypeConstructor(int a2, int a3)
{

  ((unsigned int *)this)[0] = 0; /*0x47879b*/
  ((unsigned int *)this)[0] = a2; /*0x47879e*/
  ((unsigned int *)this)[0] = 1; /*0x4787a1*/
  ((unsigned int *)this)[0] = 0; /*0x4787a5*/
  this->DynamicVectorClass = &vt_VectorClass; /*0x4787a8*/
  if ( a2 ) /*0x4787ae*/
  {
    if ( a3 ) /*0x4787b6*/
    {
      ((unsigned int *)this)[0] = (unsigned int)((void *)a3); /*0x4787b8*/
return (unsigned int *)&this->DynamicVectorClass; /*0x4787be*/
    }
    ((unsigned int *)this)[0] = (unsigned int)((void *)__2_YAPAXI_Z(4 * a2)); /*0x4787cd*/
    ((unsigned int *)this)[0] = 1; /*0x4787d0*/
  }
return (unsigned int *)&this->DynamicVectorClass; /*0x4787bd*/

}
}  // G42.18c ns repair
// 0x5128A0
namespace gamemd {
void TypeList_Infantry::ddtor()
{

  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x5128a6*/
  this->m_10 = 0; /*0x5128a9*/
  if ( v2 && ((unsigned char*)&this->IsInitialized)[1] ) /*0x5128b0*/
  {
    __3_YAXPAX_Z(v2); /*0x5128b6*/
    *(unsigned int *)&this->m_1[3] = 0; /*0x5128be*/
  }
  ((unsigned char*)&this->IsInitialized)[1] = 0; /*0x5128c1*/
  this->m_8 = 0; /*0x5128c4*/

}
} // namespace gamemd

// 0x5128D0
namespace gamemd {
unsigned int TypeList_Infantry::GetIndex(int a2)
{

  if ( ((unsigned char*)&this->IsInitialized)[0] ) /*0x5128d0*/
    return (unsigned int)(a2 - *(unsigned int *)&this->m_1[3]) >> 2; /*0x5128e5*/
  else
    return 0; /*0x5128d7*/

}
} // namespace gamemd

// 0x5128F0
namespace gamemd {
int TypeList_Infantry::Clear(int a2)
{

  return *(unsigned int *)(*(unsigned int *)&this->m_1[3] + 4 * a2); /*0x5128fa*/

}
} // namespace gamemd

// 0x5129F0
namespace gamemd {
TypeList_flat * TypeList_Infantry::Add(unsigned int * Block, char a2, void *a3_1)
{

  void *v3; // eax

  v3 = (void *)*((unsigned int *)this + 1); /*0x5129f3*/
  *(unsigned int *)this = (unsigned int)(&vt_VectorClass); /*0x5129f6*/
  if ( v3 && *((unsigned char *)this + 13) ) /*0x512a00*/
  {
    __3_YAXPAX_Z(v3); /*0x512a08*/
    *((unsigned int *)this + 1) = 0; /*0x512a10*/
  }
  *((unsigned char *)this + 13) = 0; /*0x512a1b*/
  *((unsigned int *)this + 2) = 0; /*0x512a21*/
  if ( (a2 & 1) != 0 ) /*0x512a28*/
    __3_YAXPAX_Z(this); /*0x512a2b*/
  return (gamemd::TypeList_flat *)(this); /*0x512a35*/

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

  m_8 = (int)(this->m_8); /*0x512c42*/
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x512c4d*/
  {
    v3 = 0; /*0x512c4f*/
    if ( m_8 <= 0 ) /*0x512c53*/
      return 1; /*0x512c73*/
    v4 = *(unsigned int **)&this->m_1[3]; /*0x512c55*/
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
DynamicVector * TypeList_Infantry::Constructor(unsigned int * Block, char a2, void *a3_1)
{

  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x512e23*/
  *(unsigned int *)this->__pad_0 = (unsigned int)&vt_VectorClass;
  if ( v3 && BYTE1(this->IsInitialized) ) /*0x512e30*/
  {
    __3_YAXPAX_Z(v3); /*0x512e38*/
    *(unsigned int *)&this->m_1[3] = 0; /*0x512e40*/
  }
  BYTE1(this->IsInitialized) = 0; /*0x512e4b*/
  this->m_8 = 0; /*0x512e51*/
  if ( (a2 & 1) != 0 ) /*0x512e58*/
    __3_YAXPAX_Z(this); /*0x512e5b*/
  return (gamemd::DynamicVector *)(this->__pad_0); /*0x512e65*/

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
    ((unsigned char*)&this->IsInitialized)[0] = 0; /*0x512e82*/
    if ( a3 ) /*0x512e88*/
      v4 = a3; /*0x512e9e*/
    else
      v4 = (unsigned int *)__2_YAPAXI_Z(4 * a2); /*0x512e9a*/
    ((unsigned char*)&this->IsInitialized)[0] = 1; /*0x512ea2*/
    if ( !v4 ) /*0x512ea6*/
      return 0; /*0x512f1a*/
    if ( *(unsigned int *)&this->m_1[3] ) /*0x512ea8*/
    {
      m_8 = (int)(this->m_8); /*0x512eaf*/
      if ( a2 < m_8 ) /*0x512eb4*/
        m_8 = a2; /*0x512eb6*/
      for ( i = 0; i < m_8; v4[i - 1] = *(unsigned int *)(*(unsigned int *)&this->m_1[3] + 4 * i - 4) ) /*0x512ebc*/
        ++i; /*0x512ec1*/
      if ( ((unsigned char*)&this->IsInitialized)[1] ) /*0x512ece*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x512ed9*/
        *(unsigned int *)&this->m_1[3] = 0; /*0x512ee1*/
      }
    }
    *(unsigned int *)&this->m_1[3] = (unsigned int)(v4); /*0x512eea*/
    this->m_8 = a2; /*0x512ef2*/
    ((unsigned char*)&this->IsInitialized)[1] = a3 == 0; /*0x512ef5*/
  }
  else
  {
    (*(void (**)(_DynamicVectorClass_PBVInfantryTypeClass *))(*(unsigned int *)this->__pad_0 + 12))((_DynamicVectorClass_PBVInfantryTypeClass *)this); /*0x512efe*/
  }
  v7 = (int)(this->m_8); /*0x512f01*/
  if ( v7 < this->m_10 ) /*0x512f09*/
    this->m_10 = v7; /*0x512f0b*/
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

  m_10 = (int)(this->m_10); /*0x512f70*/
  result = 0; /*0x512f73*/
  if ( m_10 <= 0 ) /*0x512f78*/
    return -1; /*0x512f8f*/
  for ( i = *(unsigned int **)&this->m_1[3]; *i != *a2; ++i ) /*0x512f7e*/
  {
    if ( ++result >= m_10 ) /*0x512f8d*/
      return -1; /*0x512f8d*/
  }
  return result; /*0x512f92*/

}
} // namespace gamemd

// 0x5131F0
namespace gamemd {
DynamicVector * TypeList_Infantry::Constructor_0(unsigned int * Block, char a2, void *a3_1)
{

  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x5131f3*/
  *(unsigned int *)this->__pad_0 = (unsigned int)&vt_VectorClass;
  if ( v3 && BYTE1(this->IsInitialized) ) /*0x513200*/
  {
    __3_YAXPAX_Z(v3); /*0x513208*/
    *(unsigned int *)&this->m_1[3] = 0; /*0x513210*/
  }
  BYTE1(this->IsInitialized) = 0; /*0x51321b*/
  this->m_8 = 0; /*0x513221*/
  if ( (a2 & 1) != 0 ) /*0x513228*/
    __3_YAXPAX_Z(this); /*0x51322b*/
  return (gamemd::DynamicVector *)(this->__pad_0); /*0x513235*/

}
} // namespace gamemd

// 0x5135C0
namespace gamemd {
DynamicVector * TypeList_Infantry::Constructor_1(unsigned int * Block, char a2)
{

  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x5135c3*/
  *(unsigned int *)this->__pad_0 = (unsigned int)&vt_VectorClass;
  if ( v3 && BYTE1(this->m_C) ) /*0x5135d0*/
  {
    __3_YAXPAX_Z(v3); /*0x5135d8*/
    *(unsigned int *)&this->m_1[3] = 0; /*0x5135e0*/
  }
  BYTE1(this->m_C) = 0; /*0x5135eb*/
  this->m_8 = 0; /*0x5135f1*/
  if ( (a2 & 1) != 0 ) /*0x5135f8*/
    __3_YAXPAX_Z(this); /*0x5135fb*/
  return (gamemd::DynamicVector *)(this->__pad_0); /*0x513605*/

}
} // namespace gamemd

// 0x513740
namespace gamemd {  // G42.18c ns repair
unsigned int * TypeList_flat::CopyConstructor(VectorClass_flat * aP1)
{

  int v3; // eax
  void *v4; // eax
  int Capacity; // ecx
  int v6; // eax

  ((unsigned int *)this)[0] = 0; /*0x51374d*/
  ((unsigned int *)this)[0] = 0; /*0x513750*/
  ((unsigned int *)this)[0] = 1; /*0x513753*/
  ((unsigned int *)this)[0] = 0; /*0x513757*/
  this->DynamicVectorClass = &vt_VectorClass; /*0x51375a*/
  if ( (TypeList *)this != (TypeList *)aP1 ) /*0x513760*/
  {
    ((Vector*)(_VectorClass_PBVUnitTypeClass *)this)->Destructor(); /*0x513762*/
    v3 = ((int *)aP1)[2]; /*0x513768*/
    ((unsigned int *)this)[0] = v3; /*0x51376d*/
    if ( v3 ) /*0x513770*/
    {
      v4 = (void *)__2_YAPAXI_Z(4 * v3); /*0x513776*/
      ((unsigned int *)this)[0] = (unsigned int)(v4); /*0x513780*/
      if ( v4 ) /*0x513783*/
      {
        Capacity = ((unsigned int *)this)[0]; /*0x513785*/
        v6 = 0; /*0x513788*/
        ((unsigned int *)this)[0] = 1; /*0x51378c*/
        if ( Capacity > 0 ) /*0x513790*/
        {
          do /*0x5137a4*/
          {
            *((unsigned int *)((unsigned int *)this)[0] + v6) = *(unsigned int *)(aP1[1] + 4 * v6); /*0x51379b*/
            ++v6; /*0x5137a1*/
          }
          while ( v6 < ((unsigned int *)this)[0] ); /*0x5137a4*/
        }
      }
    }
    else
    {
      ((unsigned int *)this)[0] = 0; /*0x5137a8*/
      ((unsigned int *)this)[0] = 0; /*0x5137ab*/
    }
  }
  ((unsigned int *)this)[0] = ((unsigned int *)aP1)[4]; /*0x5137b1*/
  ((unsigned int *)this)[0] = ((unsigned int *)aP1)[5]; /*0x5137b7*/
  this->DynamicVectorClass = &vt_TypeList; /*0x5137ba*/
return (unsigned int *)&this->DynamicVectorClass; /*0x5137c2*/

}
}  // G42.18c ns repair
// 0x5255F0
namespace gamemd {  // G42.18c ns repair
unsigned int * TypeList_flat::AnimTypeCopy(VectorClass_flat * aP1)
{

  int v3; // eax
  void *v4; // eax
  int Capacity; // ecx
  int v6; // eax

  ((unsigned int *)this)[0] = 0; /*0x5255fd*/
  ((unsigned int *)this)[0] = 0; /*0x525600*/
  ((unsigned int *)this)[0] = 1; /*0x525603*/
  ((unsigned int *)this)[0] = 0; /*0x525607*/
  this->DynamicVectorClass = &vt_VectorClass; /*0x52560a*/
  if ( (TypeList *)this != (TypeList *)aP1 ) /*0x525610*/
  {
    DynamicVectorClass::Destroy_Alt(  (_VectorClass_PBVAnimTypeClass *)this); /*0x525612*/
    v3 = ((int *)aP1)[2]; /*0x525618*/
    ((unsigned int *)this)[0] = v3; /*0x52561d*/
    if ( v3 ) /*0x525620*/
    {
      v4 = (void *)__2_YAPAXI_Z(4 * v3); /*0x525626*/
      ((unsigned int *)this)[0] = (unsigned int)(v4); /*0x525630*/
      if ( v4 ) /*0x525633*/
      {
        Capacity = ((unsigned int *)this)[0]; /*0x525635*/
        v6 = 0; /*0x525638*/
        ((unsigned int *)this)[0] = 1; /*0x52563c*/
        if ( Capacity > 0 ) /*0x525640*/
        {
          do /*0x525654*/
          {
            *((unsigned int *)((unsigned int *)this)[0] + v6) = *(unsigned int *)(aP1[1] + 4 * v6); /*0x52564b*/
            ++v6; /*0x525651*/
          }
          while ( v6 < ((unsigned int *)this)[0] ); /*0x525654*/
        }
      }
    }
    else
    {
      ((unsigned int *)this)[0] = 0; /*0x525658*/
      ((unsigned int *)this)[0] = 0; /*0x52565b*/
    }
  }
  ((unsigned int *)this)[0] = ((unsigned int *)aP1)[4]; /*0x525661*/
  ((unsigned int *)this)[0] = ((unsigned int *)aP1)[5]; /*0x525667*/
  this->DynamicVectorClass = &vt_TypeList; /*0x52566a*/
return (unsigned int *)&this->DynamicVectorClass; /*0x525672*/

}
}  // G42.18c ns repair
// 0x5AC400
namespace gamemd {  // G42.18c ns repair
CCINIClass * TypeList_flat::BuildingTypeConstructor()
{

  ((unsigned int *)this)[0] = 0; /*0x5ac404*/
  ((unsigned int *)this)[0] = 0; /*0x5ac407*/
  ((unsigned int *)this)[0] = 1; /*0x5ac40a*/
  ((unsigned int *)this)[0] = 0; /*0x5ac40e*/
  ((unsigned int *)this)[0] = 10; /*0x5ac411*/
  ((unsigned int *)this)[0] = 0; /*0x5ac418*/
  this->DynamicVectorClass = &vt_TypeList; /*0x5ac41b*/
return (gamemd::CCINIClass *)&this->DynamicVectorClass; /*0x5ac421*/

}
}  // G42.18c ns repair
// 0x5AC650
namespace gamemd {
TypeList_flat * TypeList_BuildingType::Add(unsigned int * Block, char a2, void *a3_1)
{

  void *v3; // eax

  v3 = (void *)*((unsigned int *)this + 1); /*0x5ac653*/
  *(unsigned int *)this = (unsigned int)(&vt_VectorClass); /*0x5ac656*/
  if ( v3 && *((unsigned char *)this + 13) ) /*0x5ac660*/
  {
    __3_YAXPAX_Z(v3); /*0x5ac668*/
    *((unsigned int *)this + 1) = 0; /*0x5ac670*/
  }
  *((unsigned char *)this + 13) = 0; /*0x5ac67b*/
  *((unsigned int *)this + 2) = 0; /*0x5ac681*/
  if ( (a2 & 1) != 0 ) /*0x5ac688*/
    __3_YAXPAX_Z(this); /*0x5ac68b*/
  return (gamemd::TypeList_flat *)(this); /*0x5ac695*/

}
} // namespace gamemd

// 0x5AD660
namespace gamemd {  // G42.18c ns repair
unsigned int * TypeList_flat::BuildingTypeCopy(VectorClass_flat * aP1)
{

  int v3; // eax
  void *v4; // eax
  int Capacity; // ecx
  int v6; // eax

  ((unsigned int *)this)[0] = 0; /*0x5ad66d*/
  ((unsigned int *)this)[0] = 0; /*0x5ad670*/
  ((unsigned int *)this)[0] = 1; /*0x5ad673*/
  ((unsigned int *)this)[0] = 0; /*0x5ad677*/
  this->DynamicVectorClass = &vt_VectorClass; /*0x5ad67a*/
  if ( (TypeList *)this != (TypeList *)aP1 ) /*0x5ad680*/
  {
    DynamicVectorClass::Destroy((HWND)((_VectorClass_PBVBuildingTypeClass *)this)); /*0x5ad682*/
    v3 = ((int *)aP1)[2]; /*0x5ad688*/
    ((unsigned int *)this)[0] = v3; /*0x5ad68d*/
    if ( v3 ) /*0x5ad690*/
    {
      v4 = (void *)__2_YAPAXI_Z(4 * v3); /*0x5ad696*/
      ((unsigned int *)this)[0] = (unsigned int)(v4); /*0x5ad6a0*/
      if ( v4 ) /*0x5ad6a3*/
      {
        Capacity = ((unsigned int *)this)[0]; /*0x5ad6a5*/
        v6 = 0; /*0x5ad6a8*/
        ((unsigned int *)this)[0] = 1; /*0x5ad6ac*/
        if ( Capacity > 0 ) /*0x5ad6b0*/
        {
          do /*0x5ad6c4*/
          {
            *((unsigned int *)((unsigned int *)this)[0] + v6) = *(unsigned int *)(aP1[1] + 4 * v6); /*0x5ad6bb*/
            ++v6; /*0x5ad6c1*/
          }
          while ( v6 < ((unsigned int *)this)[0] ); /*0x5ad6c4*/
        }
      }
    }
    else
    {
      ((unsigned int *)this)[0] = 0; /*0x5ad6c8*/
      ((unsigned int *)this)[0] = 0; /*0x5ad6cb*/
    }
  }
  ((unsigned int *)this)[0] = ((unsigned int *)aP1)[4]; /*0x5ad6d1*/
  ((unsigned int *)this)[0] = ((unsigned int *)aP1)[5]; /*0x5ad6d7*/
  this->DynamicVectorClass = &vt_TypeList; /*0x5ad6da*/
return (unsigned int *)&this->DynamicVectorClass; /*0x5ad6e2*/

}
}  // G42.18c ns repair
// 0x67A030
namespace gamemd {  // G42.18c ns repair
void TypeList_flat::InfantryCleanup()
{

  void *Items; // eax

  Items = (void *)(((unsigned int *)this)[0]); /*0x67a036*/
  this->DynamicVectorClass = &vt_VectorClass; /*0x67a039*/
  if ( Items && ((unsigned int *)this)[0] ) /*0x67a043*/
  {
    __3_YAXPAX_Z(Items); /*0x67a049*/
    ((unsigned int *)this)[0] = 0; /*0x67a051*/
  }
  ((unsigned int *)this)[0] = 0; /*0x67a054*/
  ((unsigned int *)this)[0] = 0; /*0x67a057*/

}
}  // G42.18c ns repair
// 0x67A090
namespace gamemd {  // G42.18c ns repair
int *  TypeList_flat::CopyFull( VectorClass * aP1)
{

  int v3; // eax
  void *v4; // eax
  int Capacity; // ecx
  int v6; // eax

  if ( (TypeList *)this != (TypeList *)aP1 ) /*0x67a09a*/
  {
    (*((void (**)(TypeList *))this->DynamicVectorClass + 3))((TypeList *)this); /*0x67a09e*/
    v3 = (int)(aP1[2]); /*0x67a0a1*/
    ((unsigned int *)this)[0] = v3; /*0x67a0a6*/
    if ( v3 ) /*0x67a0a9*/
    {
      v4 = (void *)__2_YAPAXI_Z(4 * v3); /*0x67a0b3*/
      ((unsigned int *)this)[0] = (unsigned int)v4; /*0x67a0bb*/
      if ( v4 ) /*0x67a0c0*/
      {
        Capacity = ((unsigned int *)this)[0]; /*0x67a0c2*/
        v6 = 0; /*0x67a0c5*/
        ((unsigned int *)this)[0] = 1; /*0x67a0c9*/
        if ( Capacity > 0 ) /*0x67a0cd*/
        {
          do /*0x67a0e1*/
          {
            *((unsigned int *)((unsigned int *)this)[0] + v6) = *(unsigned int *)(aP1[1] + 4 * v6); /*0x67a0d8*/
            ++v6; /*0x67a0de*/
          }
          while ( v6 < ((unsigned int *)this)[0] ); /*0x67a0e1*/
        }
      }
    }
    else
    {
      ((unsigned int *)this)[0] = 0; /*0x67a0e5*/
      ((unsigned int *)this)[0] = 0; /*0x67a0ec*/
    }
  }
  ((unsigned int *)this)[0] = aP1[4]; /*0x67a0f3*/
  ((unsigned int *)this)[0] = aP1[5]; /*0x67a0f9*/
  this->unknown_18 = aP1[6]; /*0x67a0ff*/
  return (int *)this; /*0x67a104*/

}
}  // G42.18c ns repair
// 0x67A110
namespace gamemd {  // G42.18c ns repair
int * TypeList_flat::CopyAircraft(VectorClass_flat * aP1)
{

  int v3; // eax
  void *v4; // eax
  int Capacity; // ecx
  int v6; // eax

  if ( (TypeList *)this != (TypeList *)aP1 ) /*0x67a11a*/
  {
    (*((void (**)(TypeList *))this->DynamicVectorClass + 3))((TypeList *)this); /*0x67a11e*/
    v3 = aP1[2]; /*0x67a121*/
    ((unsigned int *)this)[0] = v3; /*0x67a126*/
    if ( v3 ) /*0x67a129*/
    {
      v4 = (void *)__2_YAPAXI_Z(4 * v3); /*0x67a133*/
      ((unsigned int *)this)[0] =(unsigned int)v4; /*0x67a13b*/
      if ( v4 ) /*0x67a140*/
      {
        Capacity = ((unsigned int *)this)[0]; /*0x67a142*/
        v6 = 0; /*0x67a145*/
        ((unsigned int *)this)[0] = 1; /*0x67a149*/
        if ( Capacity > 0 ) /*0x67a14d*/
        {
          do /*0x67a161*/
          {
            *((unsigned int *)((unsigned int *)this)[0] + v6) = *(unsigned int *)(aP1[1] + 4 * v6); /*0x67a158*/
            ++v6; /*0x67a15e*/
          }
          while ( v6 < ((unsigned int *)this)[0] ); /*0x67a161*/
        }
      }
    }
    else
    {
      ((unsigned int *)this)[0] = 0; /*0x67a165*/
      ((unsigned int *)this)[0] = 0; /*0x67a16c*/
    }
  }
  ((unsigned int *)this)[0] = aP1[4]; /*0x67a173*/
  ((unsigned int *)this)[0] = aP1[5]; /*0x67a179*/
  this->unknown_18 = aP1[6]; /*0x67a17f*/
  return (int *)this; /*0x67a184*/

}
}  // G42.18c ns repair
// 0x67A290
namespace gamemd {  // G42.18c ns repair
int * TypeList_flat::CopyInfantry(CCINIClass * aP1)
{

  int v3; // eax
  void *v4; // eax
  int Capacity; // ecx
  int v6; // eax

  if ( (TypeList *)this != (TypeList *)aP1 ) /*0x67a29a*/
  {
    (*((void (**)(TypeList *))this->DynamicVectorClass + 3))((TypeList *)this); /*0x67a29e*/
    v3 = aP1[2]; /*0x67a2a1*/
    ((unsigned int *)this)[0] = v3; /*0x67a2a6*/
    if ( v3 ) /*0x67a2a9*/
    {
      v4 = (void *)__2_YAPAXI_Z(4 * v3); /*0x67a2b3*/
      ((unsigned int *)this)[0] =(unsigned int)v4; /*0x67a2bb*/
      if ( v4 ) /*0x67a2c0*/
      {
        Capacity = ((unsigned int *)this)[0]; /*0x67a2c2*/
        v6 = 0; /*0x67a2c5*/
        ((unsigned int *)this)[0] = 1; /*0x67a2c9*/
        if ( Capacity > 0 ) /*0x67a2cd*/
        {
          do /*0x67a2e1*/
          {
            *((unsigned int *)((unsigned int *)this)[0] + v6) = *(unsigned int *)(aP1[1] + 4 * v6); /*0x67a2d8*/
            ++v6; /*0x67a2de*/
          }
          while ( v6 < ((unsigned int *)this)[0] ); /*0x67a2e1*/
        }
      }
    }
    else
    {
      ((unsigned int *)this)[0] = 0; /*0x67a2e5*/
      ((unsigned int *)this)[0] = 0; /*0x67a2ec*/
    }
  }
  ((unsigned int *)this)[0] = aP1[4]; /*0x67a2f3*/
  ((unsigned int *)this)[0] = aP1[5]; /*0x67a2f9*/
  this->unknown_18 = aP1[6]; /*0x67a2ff*/
  return (int *)this; /*0x67a304*/

}
}  // G42.18c ns repair
// 0x67A390
namespace gamemd {  // G42.18c ns repair
CCINIClass * TypeList_flat::VoxelAnimConstructor()
{

  ((unsigned int *)this)[0] = 0; /*0x67a394*/
  ((unsigned int *)this)[0] = 0; /*0x67a397*/
  ((unsigned int *)this)[0] = 1; /*0x67a39a*/
  ((unsigned int *)this)[0] = 0; /*0x67a39e*/
  ((unsigned int *)this)[0] = 10; /*0x67a3a1*/
  ((unsigned int *)this)[0] = 0; /*0x67a3a8*/
  this->DynamicVectorClass = &vt_TypeList; /*0x67a3ab*/
return (gamemd::CCINIClass *)&this->DynamicVectorClass; /*0x67a3b1*/

}
}  // G42.18c ns repair
// 0x67A410
namespace gamemd {
void TypeList_VoxelAnim::ddtor()
{

  void *v2; // eax

  v2 = *(void **)&this->Items; /*0x67a416*/
  this->Count = 0; /*0x67a419*/
  if ( v2 && BYTE1(this->IsInitialized) ) /*0x67a420*/
  {
    __3_YAXPAX_Z(v2); /*0x67a426*/
    *(unsigned int *)&this->Items = 0; /*0x67a42e*/
  }
  BYTE1(this->IsInitialized) = 0; /*0x67a431*/
  this->Capacity = 0; /*0x67a434*/

}
} // namespace gamemd

// 0x67A440
namespace gamemd {
unsigned int TypeList_VoxelAnim::GetIndex(int a2)
{

  if ( LOBYTE(this->IsInitialized) ) /*0x67a440*/
    return (unsigned int)(a2 - *(unsigned int *)&this->Items) >> 2; /*0x67a455*/
  else
    return 0; /*0x67a447*/

}
} // namespace gamemd

// 0x67A460
namespace gamemd {
int TypeList_VoxelAnim::Clear(int a2)
{

  return *(unsigned int *)(*(unsigned int *)&this->Items + 4 * a2); /*0x67a46a*/

}
} // namespace gamemd

// 0x67A4F0
namespace gamemd {  // G42.18c ns repair
DynamicVector * TypeList_flat::Construct(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6)
{

  ((unsigned int *)this)[0] = 0; /*0x67a4f4*/
  ((unsigned int *)this)[0] = 0; /*0x67a4f7*/
  ((unsigned int *)this)[0] = 1; /*0x67a4fa*/
  ((unsigned int *)this)[0] = 0; /*0x67a4fe*/
  ((unsigned int *)this)[0] = 10; /*0x67a501*/
  ((unsigned int *)this)[0] = 0; /*0x67a508*/
  this->DynamicVectorClass = &vt_TypeList; /*0x67a50b*/
return (gamemd::DynamicVector *)&this->DynamicVectorClass; /*0x67a511*/

}
}  // G42.18c ns repair
// 0x67A600
namespace gamemd {  // G42.18c ns repair
CCINIClass * TypeList_flat::ConstructSmudge()
{

  ((unsigned int *)this)[0] = 0; /*0x67a604*/
  ((unsigned int *)this)[0] = 0; /*0x67a607*/
  ((unsigned int *)this)[0] = 1; /*0x67a60a*/
  ((unsigned int *)this)[0] = 0; /*0x67a60e*/
  ((unsigned int *)this)[0] = 10; /*0x67a611*/
  ((unsigned int *)this)[0] = 0; /*0x67a618*/
  this->DynamicVectorClass = &vt_TypeList; /*0x67a61b*/
return (gamemd::CCINIClass *)&this->DynamicVectorClass; /*0x67a621*/

}
}  // G42.18c ns repair
// 0x67A680
namespace gamemd {
void TypeList_VoxelAnim::TypeList_vt03()
{

  void *v2; // eax

  v2 = *(void **)&this->Items; /*0x67a686*/
  this->Count = 0; /*0x67a689*/
  if ( v2 && BYTE1(this->IsInitialized) ) /*0x67a690*/
  {
    __3_YAXPAX_Z(v2); /*0x67a696*/
    *(unsigned int *)&this->Items = 0; /*0x67a69e*/
  }
  BYTE1(this->IsInitialized) = 0; /*0x67a6a1*/
  this->Capacity = 0; /*0x67a6a4*/

}
} // namespace gamemd

// 0x67A6B0
namespace gamemd {
unsigned int TypeList_VoxelAnim::TypeList_vt05(int a2)
{

  if ( LOBYTE(this->IsInitialized) ) /*0x67a6b0*/
    return (unsigned int)(a2 - *(unsigned int *)&this->Items) >> 2; /*0x67a6c5*/
  else
    return 0; /*0x67a6b7*/

}
} // namespace gamemd

// 0x67A6D0
namespace gamemd {  // G42.18c ns repair
int TypeList_flat::Clear(int a2)
{

  return *(unsigned int *)(*(unsigned int *)&this->m_1[3] + 4 * a2); /*0x67a6da*/

}
}  // G42.18c ns repair
// 0x67A820
namespace gamemd {  // G42.18c ns repair
unsigned int * TypeList_flat::InfantryConstructor()
{

  ((unsigned int *)this)[0] = 0; /*0x67a824*/
  ((unsigned int *)this)[0] = 0; /*0x67a827*/
  ((unsigned int *)this)[0] = 1; /*0x67a82a*/
  ((unsigned int *)this)[0] = 0; /*0x67a82e*/
  ((unsigned int *)this)[0] = 10; /*0x67a831*/
  ((unsigned int *)this)[0] = 0; /*0x67a838*/
  this->DynamicVectorClass = &vt_TypeList; /*0x67a83b*/
return (unsigned int *)&this->DynamicVectorClass; /*0x67a841*/

}
}  // G42.18c ns repair
// 0x67A930
namespace gamemd {
void TypeList_cptr_TerrainTypeClass::GetClassIdentifier()
{

  void *v2; // eax

  v2 = *(void **)&this->Items; /*0x67a936*/
  this->Count = 0; /*0x67a939*/
  if ( v2 && BYTE1(this->IsInitialized) ) /*0x67a940*/
  {
    __3_YAXPAX_Z(v2); /*0x67a946*/
    *(unsigned int *)&this->Items = 0; /*0x67a94e*/
  }
  BYTE1(this->IsInitialized) = 0; /*0x67a951*/
  this->Capacity = 0; /*0x67a954*/

}
} // namespace gamemd

// 0x67A960
namespace gamemd {
unsigned int TypeList_cptr_TerrainTypeClass::GetIndex(int a2)
{

  if ( LOBYTE(this->IsInitialized) ) /*0x67a960*/
    return (unsigned int)(a2 - *(unsigned int *)&this->Items) >> 2; /*0x67a975*/
  else
    return 0; /*0x67a967*/

}
} // namespace gamemd

// 0x67A980
namespace gamemd {
int TypeList_cptr_TerrainTypeClass::SaveToINI(int a2)
{

  return *(unsigned int *)(*(unsigned int *)&this->Items + 4 * a2); /*0x67a98a*/

}
} // namespace gamemd

// 0x67A990
namespace gamemd {
TypeList_flat * TypeList_VoxelAnim::Add(unsigned int * Block, char a2, void *a3_1)
{

  void *v3; // eax

  v3 = (void *)*((unsigned int *)this + 1); /*0x67a993*/
  *(unsigned int *)this =(unsigned int)(&vt_VectorClass); /*0x67a996*/
  if ( v3 && *((unsigned char *)this + 13) ) /*0x67a9a0*/
  {
    __3_YAXPAX_Z(v3); /*0x67a9a8*/
    *((unsigned int *)this + 1) = 0; /*0x67a9b0*/
  }
  *((unsigned char *)this + 13) = 0; /*0x67a9bb*/
  *((unsigned int *)this + 2) = 0; /*0x67a9c1*/
  if ( (a2 & 1) != 0 ) /*0x67a9c8*/
    __3_YAXPAX_Z(this); /*0x67a9cb*/
return (gamemd::TypeList_flat *)this; /*0x67a9d5*/

}
} // namespace gamemd

// 0x67A9E0
namespace gamemd {
TypeList_flat * TypeList_VoxelAnim::TypeList_vt00(unsigned int * Block, char a2)
{

  void *v3; // eax

  v3 = (void *)*((unsigned int *)this + 1); /*0x67a9e3*/
  *(unsigned int *)this =(unsigned int)(&vt_VectorClass); /*0x67a9e6*/
  if ( v3 && *((unsigned char *)this + 13) ) /*0x67a9f0*/
  {
    __3_YAXPAX_Z(v3); /*0x67a9f8*/
    *((unsigned int *)this + 1) = 0; /*0x67aa00*/
  }
  *((unsigned char *)this + 13) = 0; /*0x67aa0b*/
  *((unsigned int *)this + 2) = 0; /*0x67aa11*/
  if ( (a2 & 1) != 0 ) /*0x67aa18*/
    __3_YAXPAX_Z(this); /*0x67aa1b*/
return (gamemd::TypeList_flat *)this; /*0x67aa25*/

}
} // namespace gamemd

// 0x67AA30
namespace gamemd {
TypeList_flat * TypeList_cptr_TerrainTypeClass::Add(unsigned int * Block, char a2, void *a3_1)
{

  void *v3; // eax

  v3 = (void *)*((unsigned int *)this + 1); /*0x67aa33*/
  *(unsigned int *)this =(unsigned int)(&vt_VectorClass); /*0x67aa36*/
  if ( v3 && *((unsigned char *)this + 13) ) /*0x67aa40*/
  {
    __3_YAXPAX_Z(v3); /*0x67aa48*/
    *((unsigned int *)this + 1) = 0; /*0x67aa50*/
  }
  *((unsigned char *)this + 13) = 0; /*0x67aa5b*/
  *((unsigned int *)this + 2) = 0; /*0x67aa61*/
  if ( (a2 & 1) != 0 ) /*0x67aa68*/
    __3_YAXPAX_Z(this); /*0x67aa6b*/
return (gamemd::TypeList_flat *)this; /*0x67aa75*/

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

  m_8 =(int)this->Capacity; /*0x67aaf2*/
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x67aafd*/
  {
    v3 = 0; /*0x67aaff*/
    if ( m_8 <= 0 ) /*0x67ab03*/
      return 1; /*0x67ab23*/
    v4 = *(unsigned int **)&this->Items; /*0x67ab05*/
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
    LOBYTE(this->IsInitialized) = 0; /*0x67ab46*/
    if ( a3 ) /*0x67ab4c*/
      v4 = a3; /*0x67ab62*/
    else
      v4 = (unsigned int *)__2_YAPAXI_Z(4 * a2); /*0x67ab5e*/
    LOBYTE(this->IsInitialized) = 1; /*0x67ab66*/
    if ( v4 ) /*0x67ab6a*/
    {
      if ( *(unsigned int *)&this->Items ) /*0x67ab75*/
      {
        m_8 =(int)this->Capacity; /*0x67ab7c*/
        if ( a2 < m_8 ) /*0x67ab81*/
          m_8 = a2; /*0x67ab83*/
        for ( i = 0; i < m_8; v4[i - 1] = *(unsigned int *)(*(unsigned int *)&this->Items + 4 * i - 4) ) /*0x67ab89*/
          ++i; /*0x67ab8e*/
        if ( BYTE1(this->IsInitialized) ) /*0x67ab9b*/
        {
          __3_YAXPAX_Z(*(void **)&this->Items); /*0x67aba6*/
          *(unsigned int *)&this->Items = 0; /*0x67abae*/
        }
      }
      *(unsigned int *)&this->Items =(unsigned int)v4; /*0x67abb7*/
      this->Capacity =(void *)a2; /*0x67abbf*/
      BYTE1(this->IsInitialized) = a3 == 0; /*0x67abc2*/
      return 1; /*0x67abc8*/
    }
    else
    {
      return 0; /*0x67ab6f*/
    }
  }
  else
  {
    (*(void (**)(_VectorClass_PBVVoxelAnimTypeClass *))(*(unsigned int *)this->vfptr + 12))((_VectorClass_PBVVoxelAnimTypeClass *)this); /*0x67abd2*/
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

  if ( !LOBYTE(this->IsInitialized) ) /*0x67ac10*/
    return 0; /*0x67ac18*/
  m_8 =(int)this->Capacity; /*0x67ac1e*/
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

  if ( LOBYTE(this->IsInitialized) ) /*0x67ac50*/
    return (unsigned int)(a2 - *(unsigned int *)&this->Items) >> 2; /*0x67ac65*/
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
    LOBYTE(this->IsInitialized) = 0; /*0x67ace2*/
    if ( a3 ) /*0x67ace8*/
      v4 = a3; /*0x67acfe*/
    else
      v4 = (unsigned int *)__2_YAPAXI_Z(4 * a2); /*0x67acfa*/
    LOBYTE(this->IsInitialized) = 1; /*0x67ad02*/
    if ( !v4 ) /*0x67ad06*/
      return 0; /*0x67ad7a*/
    if ( *(unsigned int *)&this->Items ) /*0x67ad08*/
    {
      m_8 =(int)this->Capacity; /*0x67ad0f*/
      if ( a2 < m_8 ) /*0x67ad14*/
        m_8 = a2; /*0x67ad16*/
      for ( i = 0; i < m_8; v4[i - 1] = *(unsigned int *)(*(unsigned int *)&this->Items + 4 * i - 4) ) /*0x67ad1c*/
        ++i; /*0x67ad21*/
      if ( BYTE1(this->IsInitialized) ) /*0x67ad2e*/
      {
        __3_YAXPAX_Z(*(void **)&this->Items); /*0x67ad39*/
        *(unsigned int *)&this->Items = 0; /*0x67ad41*/
      }
    }
    *(unsigned int *)&this->Items =(unsigned int)v4; /*0x67ad4a*/
    this->Capacity =(void *)a2; /*0x67ad52*/
    BYTE1(this->IsInitialized) = a3 == 0; /*0x67ad55*/
  }
  else
  {
    (*(void (**)(_DynamicVectorClass_PBVVoxelAnimTypeClass *))(*(unsigned int *)this->vfptr + 12))((_DynamicVectorClass_PBVVoxelAnimTypeClass *)this); /*0x67ad5e*/
  }
  v7 =(int)this->Capacity; /*0x67ad61*/
  if ( v7   <   (int)((int)(this->Count ))) /*0x67ad69*/
    this->Count =(void *)v7; /*0x67ad6b*/
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

  m_10 =(int)this->Count; /*0x67add0*/
  result = 0; /*0x67add3*/
  if ( m_10 <= 0 ) /*0x67add8*/
    return -1; /*0x67adef*/
  for ( i = *(unsigned int **)&this->Items; *i != *a2; ++i ) /*0x67adde*/
  {
    if ( ++result >= m_10 ) /*0x67aded*/
      return -1; /*0x67aded*/
  }
  return result; /*0x67adf2*/

}
} // namespace gamemd

// 0x67AE70
namespace gamemd {  // G42.18c ns repair
char TypeList_flat::AddRef(int a2)
{

  int m_8; // esi
  int v3; // edx
  unsigned int *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x67ae72*/
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x67ae7d*/
  {
    v3 = 0; /*0x67ae7f*/
    if ( m_8 <= 0 ) /*0x67ae83*/
      return 1; /*0x67aea3*/
    v4 = *(unsigned int **)&this->m_1[3]; /*0x67ae85*/
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
}  // G42.18c ns repair
// 0x67B050
namespace gamemd {  // G42.18c ns repair
char TypeList_flat::Release(int a2, unsigned int * a3)
{

  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x67b05c*/
  {
    LOBYTE(this->m_C) = 0; /*0x67b062*/
    if ( a3 ) /*0x67b068*/
      v4 = a3; /*0x67b07e*/
    else
      v4 = (unsigned int *)__2_YAPAXI_Z(4 * a2); /*0x67b07a*/
    LOBYTE(this->m_C) = 1; /*0x67b082*/
    if ( !v4 ) /*0x67b086*/
      return 0; /*0x67b0fa*/
    if ( *(unsigned int *)&this->m_1[3] ) /*0x67b088*/
    {
      m_8 = this->m_8; /*0x67b08f*/
      if ( a2 < m_8 ) /*0x67b094*/
        m_8 = a2; /*0x67b096*/
      for ( i = 0; i < m_8; v4[i - 1] = *(unsigned int *)(*(unsigned int *)&this->m_1[3] + 4 * i - 4) ) /*0x67b09c*/
        ++i; /*0x67b0a1*/
      if ( BYTE1(this->m_C) ) /*0x67b0ae*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x67b0b9*/
        *(unsigned int *)&this->m_1[3] = 0; /*0x67b0c1*/
      }
    }
    *(unsigned int *)&this->m_1[3] =(unsigned int)v4; /*0x67b0ca*/
    this->m_8 = a2; /*0x67b0d2*/
    BYTE1(this->m_C) = a3 == 0; /*0x67b0d5*/
  }
  else
  {
    (*(void (**)(_DynamicVectorClass_PBVSmudgeTypeClass *))(*(unsigned int *)this->__pad_0 + 12))(this); /*0x67b0de*/
  }
  v7 = this->m_8; /*0x67b0e1*/
  if ( v7 < this->m_10 ) /*0x67b0e9*/
    this->m_10 = v7; /*0x67b0eb*/
  return 1; /*0x67b0ee*/

}
}  // G42.18c ns repair
// 0x67B150
namespace gamemd {
int TypeList_VoxelAnim::TypeList_vt04(unsigned int * a2)
{

  int m_10; // edx
  int result; // eax
  unsigned int *i; // ecx

  m_10 =(int)this->Count; /*0x67b150*/
  result = 0; /*0x67b153*/
  if ( m_10 <= 0 ) /*0x67b158*/
    return -1; /*0x67b16f*/
  for ( i = *(unsigned int **)&this->Items; *i != *a2; ++i ) /*0x67b15e*/
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

  m_8 =(int)this->Capacity; /*0x67b1f2*/
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x67b1fd*/
  {
    v3 = 0; /*0x67b1ff*/
    if ( m_8 <= 0 ) /*0x67b203*/
      return 1; /*0x67b223*/
    v4 = *(unsigned int **)&this->Items; /*0x67b205*/
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
    LOBYTE(this->IsInitialized) = 0; /*0x67b246*/
    if ( a3 ) /*0x67b24c*/
      v4 = a3; /*0x67b262*/
    else
      v4 = (unsigned int *)__2_YAPAXI_Z(4 * a2); /*0x67b25e*/
    LOBYTE(this->IsInitialized) = 1; /*0x67b266*/
    if ( v4 ) /*0x67b26a*/
    {
      if ( *(unsigned int *)&this->Items ) /*0x67b275*/
      {
        m_8 =(int)this->Capacity; /*0x67b27c*/
        if ( a2 < m_8 ) /*0x67b281*/
          m_8 = a2; /*0x67b283*/
        for ( i = 0; i < m_8; v4[i - 1] = *(unsigned int *)(*(unsigned int *)&this->Items + 4 * i - 4) ) /*0x67b289*/
          ++i; /*0x67b28e*/
        if ( BYTE1(this->IsInitialized) ) /*0x67b29b*/
        {
          __3_YAXPAX_Z(*(void **)&this->Items); /*0x67b2a6*/
          *(unsigned int *)&this->Items = 0; /*0x67b2ae*/
        }
      }
      *(unsigned int *)&this->Items =(unsigned int)v4; /*0x67b2b7*/
      this->Capacity =(void *)a2; /*0x67b2bf*/
      BYTE1(this->IsInitialized) = a3 == 0; /*0x67b2c2*/
      return 1; /*0x67b2c8*/
    }
    else
    {
      return 0; /*0x67b26f*/
    }
  }
  else
  {
    (*(void (**)(_VectorClass_PBVTerrainTypeClass *))(*(unsigned int *)this->__pad_0 + 12))(this); /*0x67b2d2*/
    return 1; /*0x67b2d8*/
  }

}
} // namespace gamemd

// 0x67B2E0
namespace gamemd {
void TypeList_cptr_TerrainTypeClass::TryFreeAndClear()
{

  if ( *(unsigned int *)&this->Items && BYTE1(this->IsInitialized) ) /*0x67b2ed*/
  {
    __3_YAXPAX_Z(*(void **)&this->Items); /*0x67b2f3*/
    *(unsigned int *)&this->Items = 0; /*0x67b2fb*/
  }
  BYTE1(this->IsInitialized) = 0; /*0x67b2fe*/
  this->Capacity = 0; /*0x67b301*/

}
} // namespace gamemd

// 0x67B310
namespace gamemd {
int TypeList_cptr_TerrainTypeClass::IndexOf(unsigned int * a2)
{

  int result; // eax
  int m_8; // edx
  unsigned int *i; // ecx

  if ( !LOBYTE(this->IsInitialized) ) /*0x67b310*/
    return 0; /*0x67b318*/
  m_8 =(int)this->Capacity; /*0x67b31e*/
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

  if ( LOBYTE(this->IsInitialized) ) /*0x67b350*/
    return (unsigned int)(a2 - *(unsigned int *)&this->Items) >> 2; /*0x67b365*/
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
    LOBYTE(this->IsInitialized) = 0; /*0x67b3e2*/
    if ( a3 ) /*0x67b3e8*/
      v4 = a3; /*0x67b3fe*/
    else
      v4 = (unsigned int *)__2_YAPAXI_Z(4 * a2); /*0x67b3fa*/
    LOBYTE(this->IsInitialized) = 1; /*0x67b402*/
    if ( !v4 ) /*0x67b406*/
      return 0; /*0x67b47a*/
    if ( *(unsigned int *)&this->Items ) /*0x67b408*/
    {
      m_8 =(int)this->Capacity; /*0x67b40f*/
      if ( a2 < m_8 ) /*0x67b414*/
        m_8 = a2; /*0x67b416*/
      for ( i = 0; i < m_8; v4[i - 1] = *(unsigned int *)(*(unsigned int *)&this->Items + 4 * i - 4) ) /*0x67b41c*/
        ++i; /*0x67b421*/
      if ( BYTE1(this->IsInitialized) ) /*0x67b42e*/
      {
        __3_YAXPAX_Z(*(void **)&this->Items); /*0x67b439*/
        *(unsigned int *)&this->Items = 0; /*0x67b441*/
      }
    }
    *(unsigned int *)&this->Items =(unsigned int)v4; /*0x67b44a*/
    this->Capacity =(void *)a2; /*0x67b452*/
    BYTE1(this->IsInitialized) = a3 == 0; /*0x67b455*/
  }
  else
  {
    (*(void (**)(_DynamicVectorClass_PBVTerrainTypeClass *))(*(unsigned int *)this->__pad_0 + 12))(this); /*0x67b45e*/
  }
  v7 =(int)this->Capacity; /*0x67b461*/
  if ( v7   <   (int)((int)(this->Count ))) /*0x67b469*/
    this->Count =(void *)v7; /*0x67b46b*/
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

  m_10 =(int)this->Count; /*0x67b4d0*/
  result = 0; /*0x67b4d3*/
  if ( m_10 <= 0 ) /*0x67b4d8*/
    return -1; /*0x67b4ef*/
  for ( i = *(unsigned int **)&this->Items; *i != *a2; ++i ) /*0x67b4de*/
  {
    if ( ++result >= m_10 ) /*0x67b4ed*/
      return -1; /*0x67b4ed*/
  }
  return result; /*0x67b4f2*/

}
} // namespace gamemd

// 0x67C010
namespace gamemd {
VectorClass_flat * TypeList_VoxelAnim::Constructor(unsigned int * Block, char a2, void *a3_1)
{

  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x67c013*/
  *(unsigned int *)this->__pad_0 = (unsigned int)&vt_VectorClass;
  if ( v3 && BYTE1(this->m_C) ) /*0x67c020*/
  {
    __3_YAXPAX_Z(v3); /*0x67c028*/
    *(unsigned int *)&this->m_1[3] = 0; /*0x67c030*/
  }
  BYTE1(this->m_C) = 0; /*0x67c03b*/
  this->m_8 = 0; /*0x67c041*/
  if ( (a2 & 1) != 0 ) /*0x67c048*/
    __3_YAXPAX_Z(this); /*0x67c04b*/
  return this->__pad_0; /*0x67c055*/

}
} // namespace gamemd

// 0x67C100
namespace gamemd {
DynamicVector * TypeList_VoxelAnim::Constructor_0(unsigned int * Block, char a2, void *a3_1)
{
    void *v3; // eax

    v3 = *(void **)&this->m_1[3]; /*0x67c103*/
    *(unsigned int *)this->__pad_0 = (unsigned int)(void*)&VectorClass_SmudgeTypeClass_const___vftable; /*0x67c106*/
    if ( v3 && IDA_BYTE1(this->m_C) ) /*0x67c110*/
    {
      RA2_OPDEL(v3); /*0x67c118*/
      *(unsigned int *)&this->m_1[3] = 0; /*0x67c120*/
    }
    IDA_BYTE1(this->m_C) = 0; /*0x67c12b*/
    this->m_8 = 0; /*0x67c131*/
    if ( (a2 & 1) != 0 ) /*0x67c138*/
      RA2_OPDEL(this); /*0x67c13b*/
    return this->__pad_0; /*0x67c145*/
}
} // namespace gamemd

// 0x67C150
namespace gamemd {
VectorClass_flat * TypeList_cptr_TerrainTypeClass::Constructor(unsigned int * Block, char a2, void *a3_1)
{
    void *v3; // eax

    v3 = *(void **)&this->m_1[3]; /*0x67c153*/
    *(unsigned int *)this->__pad_0 = (unsigned int)(void*)&VectorClass_TerrainTypeClass_const___vftable; /*0x67c156*/
    if ( v3 && IDA_BYTE1(this->m_C) ) /*0x67c160*/
    {
      RA2_OPDEL(v3); /*0x67c168*/
      *(unsigned int *)&this->m_1[3] = 0; /*0x67c170*/
    }
    IDA_BYTE1(this->m_C) = 0; /*0x67c17b*/
    this->m_8 = 0; /*0x67c181*/
    if ( (a2 & 1) != 0 ) /*0x67c188*/
      RA2_OPDEL(this); /*0x67c18b*/
    return this->__pad_0; /*0x67c195*/
}
} // namespace gamemd

// 0x67C1A0
namespace gamemd {
DynamicVector * TypeList_VoxelAnim::Constructor_1(unsigned int * Block, char a2)
{
    void *v3; // eax

    v3 = *(void **)&this->m_1[3]; /*0x67c1a3*/
    *(unsigned int *)this->__pad_0 = (unsigned int)(void*)&VectorClass_TerrainTypeClass_const___vftable; /*0x67c1a6*/
    if ( v3 && IDA_BYTE1(this->m_C) ) /*0x67c1b0*/
    {
      RA2_OPDEL(v3); /*0x67c1b8*/
      *(unsigned int *)&this->m_1[3] = 0; /*0x67c1c0*/
    }
    IDA_BYTE1(this->m_C) = 0; /*0x67c1cb*/
    this->m_8 = 0; /*0x67c1d1*/
    if ( (a2 & 1) != 0 ) /*0x67c1d8*/
      RA2_OPDEL(this); /*0x67c1db*/
    return this->__pad_0; /*0x67c1e5*/
}
} // namespace gamemd

// 0x67C1F0
namespace gamemd {  // G42.18c ns repair
unsigned int * TypeList_flat::CopyVoxelAnim(VectorClass_flat * aP1)
{

  int v3; // eax
  void *v4; // eax
  int Capacity; // ecx
  int v6; // eax

  ((unsigned int *)this)[0] = 0; /*0x67c1fd*/
  ((unsigned int *)this)[0] = 0; /*0x67c200*/
  ((unsigned int *)this)[0] = 1; /*0x67c203*/
  ((unsigned int *)this)[0] = 0; /*0x67c207*/
  this->DynamicVectorClass = &vt_VectorClass; /*0x67c20a*/
  if ( (TypeList *)this != (TypeList *)aP1 ) /*0x67c210*/
  {
    ((Vector*)((_VectorClass_PBVVoxelAnimTypeClass *)this))->Cleanup2(); /*0x67c212*/
    v3 = aP1[2]; /*0x67c218*/
    ((unsigned int *)this)[0] = v3; /*0x67c21d*/
    if ( v3 ) /*0x67c220*/
    {
      v4 = (void *)__2_YAPAXI_Z(4 * v3); /*0x67c226*/
      ((unsigned int *)this)[0] =(unsigned int)v4; /*0x67c230*/
      if ( v4 ) /*0x67c233*/
      {
        Capacity = ((unsigned int *)this)[0]; /*0x67c235*/
        v6 = 0; /*0x67c238*/
        ((unsigned int *)this)[0] = 1; /*0x67c23c*/
        if ( Capacity > 0 ) /*0x67c240*/
        {
          do /*0x67c254*/
          {
            *((unsigned int *)((unsigned int *)this)[0] + v6) = *(unsigned int *)(aP1[1] + 4 * v6); /*0x67c24b*/
            ++v6; /*0x67c251*/
          }
          while ( v6 < ((unsigned int *)this)[0] ); /*0x67c254*/
        }
      }
    }
    else
    {
      ((unsigned int *)this)[0] = 0; /*0x67c258*/
      ((unsigned int *)this)[0] = 0; /*0x67c25b*/
    }
  }
  ((unsigned int *)this)[0] = aP1[4]; /*0x67c261*/
  ((unsigned int *)this)[0] = aP1[5]; /*0x67c267*/
  this->DynamicVectorClass = &vt_TypeList; /*0x67c26a*/
return (unsigned int *)&this->DynamicVectorClass; /*0x67c272*/

}
}  // G42.18c ns repair
// 0x717B70
namespace gamemd {
TypeList_flat * TypeList_cptr_ParticleSystemTypeClass::QueryInterface(unsigned int * Block, char a2)
{

  void *v3; // eax

  v3 = (void *)*((unsigned int *)this + 1); /*0x717b73*/
  *(unsigned int *)this =(unsigned int)(&vt_VectorClass); /*0x717b76*/
  if ( v3 && *((unsigned char *)this + 13) ) /*0x717b80*/
  {
    __3_YAXPAX_Z(v3); /*0x717b88*/
    *((unsigned int *)this + 1) = 0; /*0x717b90*/
  }
  *((unsigned char *)this + 13) = 0; /*0x717b9b*/
  *((unsigned int *)this + 2) = 0; /*0x717ba1*/
  if ( (a2 & 1) != 0 ) /*0x717ba8*/
    __3_YAXPAX_Z(this); /*0x717bab*/
return (gamemd::TypeList_flat *)this; /*0x717bb5*/

}
} // namespace gamemd

// 0x717C70
namespace gamemd {  // G42.18c ns repair
unsigned int * TypeList_flat::ParticleConstructor(int a2, int a3)
{

  ((unsigned int *)this)[0] = 0; /*0x717c79*/
  ((unsigned int *)this)[0] = a2; /*0x717c80*/
  ((unsigned int *)this)[0] = 1; /*0x717c83*/
  ((unsigned int *)this)[0] = 0; /*0x717c87*/
  this->DynamicVectorClass = &vt_VectorClass; /*0x717c8b*/
  if ( a2 ) /*0x717c91*/
  {
    if ( a3 ) /*0x717c99*/
    {
      ((unsigned int *)this)[0] =(unsigned int)(void *)a3; /*0x717c9b*/
    }
    else
    {
      ((unsigned int *)this)[0] =(unsigned int)(void *)__2_YAPAXI_Z(4 * a2); /*0x717cac*/
      ((unsigned int *)this)[0] = 1; /*0x717caf*/
    }
  }
  this->DynamicVectorClass = &vt_DynamicVectorClass; /*0x717cb3*/
  ((unsigned int *)this)[0] = 10; /*0x717cb9*/
  ((unsigned int *)this)[0] = 0; /*0x717cc0*/
return (unsigned int *)&this->DynamicVectorClass; /*0x717cc9*/

}
}  // G42.18c ns repair
// 0x717CD0
namespace gamemd {
char TypeList_PushBack_free(void * aP1, unsigned int * a2)
{
    int Capacity; // ecx
    int CapacityIncrement; // eax
    int Count; // eax
    unsigned int *Items; // edx

    Capacity = this->?; /*0x717cd3*/
    if ( this->? >= Capacity ) /*0x717cdb*/
    {
      if ( !this->? && Capacity ) /*0x717ce6*/
        return 0; /*0x717ce6*/
      CapacityIncrement = this->?; /*0x717ce8*/
      if ( CapacityIncrement <= 0 /*0x717cf8*/
        || !(*((unsigned __int8 (**)(TypeList *, int, unsigned int))this->DynamicVectorClass + 2))(
              (TypeList *)this,
              Capacity + CapacityIncrement,
              0) )
      {
        return 0; /*0x717cff*/
      }
    }
    Count = this->?; /*0x717d05*/
    Items = this->?; /*0x717d08*/
    this->? = Count + 1; /*0x717d0e*/
    Items[Count] = *a2; /*0x717d18*/
    return 1; /*0x717d01*/
}
} // namespace gamemd
