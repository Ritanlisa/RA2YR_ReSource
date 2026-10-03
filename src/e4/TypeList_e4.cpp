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
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x45A9C0)
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

  v3 = (void *)*((unsigned int *)Block + 1); /*0x477993*/
  *(unsigned int *)Block = (unsigned int)(&vt_VectorClass); /*0x477996*/
  if ( v3 && *((unsigned char *)Block + 13) ) /*0x4779a0*/
  {
    __3_YAXPAX_Z(v3); /*0x4779a8*/
    *((unsigned int *)Block + 1) = 0; /*0x4779b0*/
  }
  *((unsigned char *)Block + 13) = 0; /*0x4779bb*/
  *((unsigned int *)Block + 2) = 0; /*0x4779c1*/
  if ( (a2 & 1) != 0 ) /*0x4779c8*/
    __3_YAXPAX_Z(Block); /*0x4779cb*/
  return (gamemd::TypeList_flat *)(Block); /*0x4779d5*/

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
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x478680)
}
} // namespace gamemd

// 0x478720
namespace gamemd {  // G42.18c ns repair
unsigned int * TypeList_flat::Copy(unsigned int * a2, void *a2_2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x478720)
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
    // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5128A0)
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

  v3 = (void *)*((unsigned int *)Block + 1); /*0x5129f3*/
  *(unsigned int *)Block = (unsigned int)(&vt_VectorClass); /*0x5129f6*/
  if ( v3 && *((unsigned char *)Block + 13) ) /*0x512a00*/
  {
    __3_YAXPAX_Z(v3); /*0x512a08*/
    *((unsigned int *)Block + 1) = 0; /*0x512a10*/
  }
  *((unsigned char *)Block + 13) = 0; /*0x512a1b*/
  *((unsigned int *)Block + 2) = 0; /*0x512a21*/
  if ( (a2 & 1) != 0 ) /*0x512a28*/
    __3_YAXPAX_Z(Block); /*0x512a2b*/
  return (gamemd::TypeList_flat *)(Block); /*0x512a35*/

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
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x512E20)
}
} // namespace gamemd

// 0x512E70
namespace gamemd {
char TypeList_Infantry::Remove(int a2, unsigned int * a3)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x512E70)
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
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5131F0)
}
} // namespace gamemd

// 0x5135C0
namespace gamemd {
DynamicVector * TypeList_Infantry::Constructor_1(unsigned int * Block, char a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5135C0)
}
} // namespace gamemd

// 0x513740
namespace gamemd {  // G42.18c ns repair
unsigned int * TypeList_flat::CopyConstructor(VectorClass_flat * aP1)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x513740)
}
}  // G42.18c ns repair
// 0x5255F0
namespace gamemd {  // G42.18c ns repair
unsigned int * TypeList_flat::AnimTypeCopy(VectorClass_flat * aP1)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5255F0)
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

  v3 = (void *)*((unsigned int *)Block + 1); /*0x5ac653*/
  *(unsigned int *)Block = (unsigned int)(&vt_VectorClass); /*0x5ac656*/
  if ( v3 && *((unsigned char *)Block + 13) ) /*0x5ac660*/
  {
    __3_YAXPAX_Z(v3); /*0x5ac668*/
    *((unsigned int *)Block + 1) = 0; /*0x5ac670*/
  }
  *((unsigned char *)Block + 13) = 0; /*0x5ac67b*/
  *((unsigned int *)Block + 2) = 0; /*0x5ac681*/
  if ( (a2 & 1) != 0 ) /*0x5ac688*/
    __3_YAXPAX_Z(Block); /*0x5ac68b*/
  return (gamemd::TypeList_flat *)(Block); /*0x5ac695*/

}
} // namespace gamemd

// 0x5AD660
namespace gamemd {  // G42.18c ns repair
unsigned int * TypeList_flat::BuildingTypeCopy(VectorClass_flat * aP1)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5AD660)
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
int * TypeList_CopyFull_free(void * aP1)
{
    return nullptr; // TODO stub - quarantined G42 T9 (truth = 0x67A090)
}
}  // G42.18c ns repair
// 0x67A110
namespace gamemd {  // G42.18c ns repair
int * TypeList_flat::CopyAircraft(VectorClass_flat * aP1)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x67A110)
}
}  // G42.18c ns repair
// 0x67A290
namespace gamemd {  // G42.18c ns repair
int * TypeList_flat::CopyInfantry(CCINIClass * aP1)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x67A290)
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

  v3 = (void *)*((unsigned int *)Block + 1); /*0x67a993*/
  *(unsigned int *)Block =(unsigned int)(&vt_VectorClass); /*0x67a996*/
  if ( v3 && *((unsigned char *)Block + 13) ) /*0x67a9a0*/
  {
    __3_YAXPAX_Z(v3); /*0x67a9a8*/
    *((unsigned int *)Block + 1) = 0; /*0x67a9b0*/
  }
  *((unsigned char *)Block + 13) = 0; /*0x67a9bb*/
  *((unsigned int *)Block + 2) = 0; /*0x67a9c1*/
  if ( (a2 & 1) != 0 ) /*0x67a9c8*/
    __3_YAXPAX_Z(Block); /*0x67a9cb*/
return (gamemd::TypeList_flat *)Block; /*0x67a9d5*/

}
} // namespace gamemd

// 0x67A9E0
namespace gamemd {
TypeList_flat * TypeList_VoxelAnim::TypeList_vt00(unsigned int * Block, char a2)
{

  void *v3; // eax

  v3 = (void *)*((unsigned int *)Block + 1); /*0x67a9e3*/
  *(unsigned int *)Block =(unsigned int)(&vt_VectorClass); /*0x67a9e6*/
  if ( v3 && *((unsigned char *)Block + 13) ) /*0x67a9f0*/
  {
    __3_YAXPAX_Z(v3); /*0x67a9f8*/
    *((unsigned int *)Block + 1) = 0; /*0x67aa00*/
  }
  *((unsigned char *)Block + 13) = 0; /*0x67aa0b*/
  *((unsigned int *)Block + 2) = 0; /*0x67aa11*/
  if ( (a2 & 1) != 0 ) /*0x67aa18*/
    __3_YAXPAX_Z(Block); /*0x67aa1b*/
return (gamemd::TypeList_flat *)Block; /*0x67aa25*/

}
} // namespace gamemd

// 0x67AA30
namespace gamemd {
TypeList_flat * TypeList_cptr_TerrainTypeClass::Add(unsigned int * Block, char a2, void *a3_1)
{

  void *v3; // eax

  v3 = (void *)*((unsigned int *)Block + 1); /*0x67aa33*/
  *(unsigned int *)Block =(unsigned int)(&vt_VectorClass); /*0x67aa36*/
  if ( v3 && *((unsigned char *)Block + 13) ) /*0x67aa40*/
  {
    __3_YAXPAX_Z(v3); /*0x67aa48*/
    *((unsigned int *)Block + 1) = 0; /*0x67aa50*/
  }
  *((unsigned char *)Block + 13) = 0; /*0x67aa5b*/
  *((unsigned int *)Block + 2) = 0; /*0x67aa61*/
  if ( (a2 & 1) != 0 ) /*0x67aa68*/
    __3_YAXPAX_Z(Block); /*0x67aa6b*/
return (gamemd::TypeList_flat *)Block; /*0x67aa75*/

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
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x67ACD0)
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
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x67AE70)
}
}  // G42.18c ns repair
// 0x67B050
namespace gamemd {  // G42.18c ns repair
char TypeList_flat::Release(int a2, unsigned int * a3)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x67B050)
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
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x67B230)
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
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x67B3D0)
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
    return nullptr; // TODO stub - quarantined G42 T9 (raw body; truth = 0x67C010)
}
} // namespace gamemd

// 0x67C100
namespace gamemd {
DynamicVector * TypeList_VoxelAnim::Constructor_0(unsigned int * Block, char a2, void *a3_1)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw body; truth = ida_cache)
}
} // namespace gamemd

// 0x67C150
namespace gamemd {
VectorClass_flat * TypeList_cptr_TerrainTypeClass::Constructor(unsigned int * Block, char a2, void *a3_1)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw body)
}
} // namespace gamemd

// 0x67C1A0
namespace gamemd {
DynamicVector * TypeList_VoxelAnim::Constructor_1(unsigned int * Block, char a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw body)
}
} // namespace gamemd

// 0x67C1F0
namespace gamemd {  // G42.18c ns repair
unsigned int * TypeList_flat::CopyVoxelAnim(VectorClass_flat * aP1)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x67C1F0)
}
}  // G42.18c ns repair
// 0x717B70
namespace gamemd {
TypeList_flat * TypeList_cptr_ParticleSystemTypeClass::QueryInterface(unsigned int * Block, char a2)
{

  void *v3; // eax

  v3 = (void *)*((unsigned int *)Block + 1); /*0x717b73*/
  *(unsigned int *)Block =(unsigned int)(&vt_VectorClass); /*0x717b76*/
  if ( v3 && *((unsigned char *)Block + 13) ) /*0x717b80*/
  {
    __3_YAXPAX_Z(v3); /*0x717b88*/
    *((unsigned int *)Block + 1) = 0; /*0x717b90*/
  }
  *((unsigned char *)Block + 13) = 0; /*0x717b9b*/
  *((unsigned int *)Block + 2) = 0; /*0x717ba1*/
  if ( (a2 & 1) != 0 ) /*0x717ba8*/
    __3_YAXPAX_Z(Block); /*0x717bab*/
return (gamemd::TypeList_flat *)Block; /*0x717bb5*/

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
char TypeList_PushBack_free(void * aP1)
{
    return 0; // TODO stub - quarantined G42 T9 (truth = .omo/ida_cache/func_0x717CD0.json)
}
} // namespace gamemd
