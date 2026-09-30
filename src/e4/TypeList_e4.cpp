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

  v2 = *(void **)((char *)this + 4); /*0x459f96*/
  *((unsigned int *)this + 4) = 0; /*0x459f99*/
  if ( v2 && *((unsigned char *)this + 13) ) /*0x459fa0*/
  {
    RA2_OPDEL(v2); /*0x459fa6*/
    *((unsigned int *)this + 1) = 0; /*0x459fae*/
  }
  *((unsigned char *)this + 13) = 0; /*0x459fb1*/
  *((unsigned int *)this + 2) = 0; /*0x459fb4*/

}
} // namespace gamemd

// 0x459FC0
namespace gamemd {
unsigned int TypeList_cptr_ParticleSystemTypeClass::LoadTypeData(int a2)
{

  if ( *((unsigned char *)this + 12) ) /*0x459fc0*/
    return (unsigned int)(a2 - *((unsigned int *)this + 1)) >> 2; /*0x459fd5*/
  else
    return 0; /*0x459fc7*/

}
} // namespace gamemd

// 0x459FE0
namespace gamemd {
int TypeList_Particle::GetIndex(int a2)
{

  return *(unsigned int *)(*((unsigned int *)this + 1) + 4 * a2); /*0x459fea*/

}
} // namespace gamemd

// 0x45A180
namespace gamemd {
char TypeList_Particle::AddRef(int a2)
{

  int v2; // esi
  int v3; // edx
  unsigned int *v4; // eax
  int v5; // ecx

  v2 = *((char *)this + 2); /*0x45a182*/
  if ( v2 == *(unsigned int *)(a2 + 8) ) /*0x45a18d*/
  {
    v3 = 0; /*0x45a18f*/
    if ( v2 <= 0 ) /*0x45a193*/
      return 1; /*0x45a1b3*/
    v4 = (unsigned int *)*((char *)this + 1); /*0x45a195*/
    v5 = *(unsigned int *)(a2 + 4) - (unsigned int)v4; /*0x45a19b*/
    while ( *v4 == *(unsigned int *)((char *)v4 + v5) ) /*0x45a1a4*/
    {
      ++v3; /*0x45a1a6*/
      ++v4; /*0x45a1a7*/
      if ( v3 >= v2 ) /*0x45a1ac*/
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
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x45a1cc*/
  {
    *((unsigned char *)this + 12) = 0; /*0x45a1d6*/
    if ( a3 ) /*0x45a1dc*/
      v4 = a3; /*0x45a1f2*/
    else
      v4 = RA2_OPNEW(4 * a2); /*0x45a1ee*/
    *((unsigned char *)this + 12) = 1; /*0x45a1f6*/
    if ( v4 ) /*0x45a1fa*/
    {
      if ( *((unsigned int *)this + 1) ) /*0x45a205*/
      {
        v6 = *((unsigned int *)this + 2); /*0x45a20c*/
        if ( a2 < v6 ) /*0x45a211*/
          v6 = a2; /*0x45a213*/
        for ( i = 0; i < v6; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) ) /*0x45a219*/
          ++i; /*0x45a21e*/
        if ( *((unsigned char *)this + 13) ) /*0x45a22b*/
        {
          RA2_OPDEL(*((void **)this + 1)); /*0x45a236*/
          *((unsigned int *)this + 1) = 0; /*0x45a23e*/
        }
      }
      *((unsigned int *)this + 1) = v4; /*0x45a247*/
      *((unsigned int *)this + 2) = a2; /*0x45a24f*/
      *((unsigned char *)this + 13) = a3 == 0; /*0x45a252*/
      return 1; /*0x45a258*/
    }
    else
    {
      return 0; /*0x45a1ff*/
    }
  }
  else
  {
    char TypeList_Particle::Remove(_VectorClass_PBVParticleSystemTypeClass *this, int a2, unsigned int *a3)
    return 1; /*0x45a268*/
  }

}
} // namespace gamemd

// 0x45A2A0
namespace gamemd {
int TypeList_Particle::GetSize(unsigned int * a2)
{

  int result; // eax
  int v3; // edx
  unsigned int *i; // ecx

  if ( !*((unsigned char *)this + 12) ) /*0x45a2a0*/
    return 0; /*0x45a2a8*/
  v3 = *((unsigned int *)this + 2); /*0x45a2ae*/
  result = 0; /*0x45a2b1*/
  if ( v3 <= 0 ) /*0x45a2b5*/
    return -1; /*0x45a2cc*/
  for ( i = *(unsigned int **)((char *)this + 4); *i != *a2; ++i ) /*0x45a2bb*/
  {
    if ( ++result >= v3 ) /*0x45a2ca*/
      return -1; /*0x45a2ca*/
  }
  return result; /*0x45a2aa*/

}
} // namespace gamemd

// 0x45A2E0
namespace gamemd {
unsigned int TypeList_Particle::GetCapacity(int a2)
{

  if ( *((unsigned char *)this + 12) ) /*0x45a2e0*/
    return (unsigned int)(a2 - *((unsigned int *)this + 1)) >> 2; /*0x45a2f5*/
  else
    return 0; /*0x45a2e7*/

}
} // namespace gamemd

// 0x45A300
namespace gamemd {
char TypeList_cptr_ParticleSystemTypeClass::Add(int a2, unsigned int * a3)
{

  unsigned int *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x45a30c*/
  {
    *((unsigned char *)this + 12) = 0; /*0x45a312*/
    if ( a3 ) /*0x45a318*/
      v4 = a3; /*0x45a32e*/
    else
      v4 = RA2_OPNEW(4 * a2); /*0x45a32a*/
    *((unsigned char *)this + 12) = 1; /*0x45a332*/
    if ( !v4 ) /*0x45a336*/
      return 0; /*0x45a3aa*/
    if ( *((unsigned int *)this + 1) ) /*0x45a338*/
    {
      v5 = *((unsigned int *)this + 2); /*0x45a33f*/
      if ( a2 < v5 ) /*0x45a344*/
        v5 = a2; /*0x45a346*/
      for ( i = 0; i < v5; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) ) /*0x45a34c*/
        ++i; /*0x45a351*/
      if ( *((unsigned char *)this + 13) ) /*0x45a35e*/
      {
        RA2_OPDEL(*((void **)this + 1)); /*0x45a369*/
        *((unsigned int *)this + 1) = 0; /*0x45a371*/
      }
    }
    *((unsigned int *)this + 1) = v4; /*0x45a37a*/
    *((unsigned int *)this + 2) = a2; /*0x45a382*/
    *((unsigned char *)this + 13) = a3 == 0; /*0x45a385*/
  }
  else
  {
    char TypeList_cptr_ParticleSystemTypeClass::Add( _DynamicVectorClass_PBVParticleSystemTypeClass *this, int a2, unsigned int *a3)
  }
  v7 = *((unsigned int *)this + 2); /*0x45a391*/
  if ( v7 < *((unsigned int *)this + 4) ) /*0x45a399*/
    *((unsigned int *)this + 4) = v7; /*0x45a39b*/
  return 1; /*0x45a39e*/

}
} // namespace gamemd

// 0x45A3B0
namespace gamemd {
int TypeList_cptr_ParticleSystemTypeClass::Remove(unsigned int * a2)
{

  int v2; // edx
  int result; // eax
  unsigned int *i; // ecx

  v2 = *((char *)this + 4); /*0x45a3b0*/
  result = 0; /*0x45a3b3*/
  if ( v2 <= 0 ) /*0x45a3b8*/
    return -1; /*0x45a3cf*/
  for ( i = (unsigned int *)*((char *)this + 1); *i != *a2; ++i ) /*0x45a3be*/
  {
    if ( ++result >= v2 ) /*0x45a3cd*/
      return -1; /*0x45a3cd*/
  }
  return result; /*0x45a3d2*/

}
}
// 0x45A9C0
namespace gamemd {
VectorClass_flat * TypeList_Particle::Add(unsigned int * Block, char a2)
{

  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x45a9c3*/
  *Block = &vt_VectorClass_ParticleSystemTypeClass_const; /*0x45a9c6*/
  if ( v3 && *((unsigned char *)Block + 13) ) /*0x45a9d0*/
  {
    RA2_OPDEL(v3); /*0x45a9d8*/
    *(Block + 1) = 0; /*0x45a9e0*/
  }
  *((unsigned char *)Block + 13) = 0; /*0x45a9eb*/
  *(Block + 2) = 0; /*0x45a9f1*/
  if ( (Block & 1) != 0 ) /*0x45a9f8*/
    RA2_OPDEL(Block); /*0x45a9fb*/
  return (VectorClass *)Block; /*0x45aa05*/

}
} // namespace gamemd

// 0x477840
void TypeList_flat::ddtor()
{

  void *v2; // eax

  v2 = *(void **)((char *)this + 4); /*0x477846*/
  *((unsigned int *)this + 4) = 0; /*0x477849*/
  if ( v2 && *((unsigned char *)this + 13) ) /*0x477850*/
  {
    RA2_OPDEL(v2); /*0x477856*/
    *((unsigned int *)this + 1) = 0; /*0x47785e*/
  }
  *((unsigned char *)this + 13) = 0; /*0x477861*/
  *((unsigned int *)this + 2) = 0; /*0x477864*/

}
// 0x477870
unsigned int TypeList_flat::GetCapacity(int a2)
{

  if ( *((unsigned char *)this + 12) ) /*0x477870*/
    return (unsigned int)(a2 - *((unsigned int *)this + 1)) >> 2; /*0x477885*/
  else
    return 0; /*0x477877*/

}
// 0x4778F0
namespace gamemd {
int TypeList_TechnoType::Clear(int a2)
{

  return *(unsigned int *)(*((unsigned int *)this + 1) + 4 * a2); /*0x4778fa*/

}
} // namespace gamemd

// 0x477990
TypeList_flat * TypeList_flat::QueryInterface(unsigned int * Block, char a2)
{

  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x477993*/
  *Block = &vt_VectorClass_int; /*0x477996*/
  if ( v3 && *((unsigned char *)Block + 13) ) /*0x4779a0*/
  {
    RA2_OPDEL(v3); /*0x4779a8*/
    *(Block + 1) = 0; /*0x4779b0*/
  }
  *((unsigned char *)Block + 13) = 0; /*0x4779bb*/
  *(Block + 2) = 0; /*0x4779c1*/
  if ( (Block & 1) != 0 ) /*0x4779c8*/
    RA2_OPDEL(Block); /*0x4779cb*/
  return (TypeList *)Block; /*0x4779d5*/

}
// 0x477F10
int TypeList_flat::GetSize(unsigned int * a2)
{

  int v2; // edx
  int result; // eax
  unsigned int *i; // ecx

  v2 = *((char *)this + 4); /*0x477f10*/
  result = 0; /*0x477f13*/
  if ( v2 <= 0 ) /*0x477f18*/
    return -1; /*0x477f2f*/
  for ( i = (unsigned int *)*((char *)this + 1); *i != *a2; ++i ) /*0x477f1e*/
  {
    if ( ++result >= v2 ) /*0x477f2d*/
      return -1; /*0x477f2d*/
  }
  return result; /*0x477f32*/

}
// 0x477FC0
namespace gamemd {
char TypeList_TechnoType::AddRef(int a2)
{

  int v2; // esi
  int v3; // edx
  unsigned int *v4; // eax
  int v5; // ecx

  v2 = *((char *)this + 2); /*0x477fc2*/
  if ( v2 == *(unsigned int *)(a2 + 8) ) /*0x477fcd*/
  {
    v3 = 0; /*0x477fcf*/
    if ( v2 <= 0 ) /*0x477fd3*/
      return 1; /*0x477ff3*/
    v4 = (unsigned int *)*((char *)this + 1); /*0x477fd5*/
    v5 = *(unsigned int *)(a2 + 4) - (unsigned int)v4; /*0x477fdb*/
    while ( *v4 == *(unsigned int *)((char *)v4 + v5) ) /*0x477fe4*/
    {
      ++v3; /*0x477fe6*/
      ++v4; /*0x477fe7*/
      if ( v3 >= v2 ) /*0x477fec*/
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
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x47800c*/
  {
    *((unsigned char *)this + 12) = 0; /*0x478016*/
    if ( a3 ) /*0x47801c*/
      v4 = a3; /*0x478032*/
    else
      v4 = RA2_OPNEW(4 * a2); /*0x47802e*/
    *((unsigned char *)this + 12) = 1; /*0x478036*/
    if ( v4 ) /*0x47803a*/
    {
      if ( *((unsigned int *)this + 1) ) /*0x478045*/
      {
        v6 = *((unsigned int *)this + 2); /*0x47804c*/
        if ( a2 < v6 ) /*0x478051*/
          v6 = a2; /*0x478053*/
        for ( i = 0; i < v6; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) ) /*0x478059*/
          ++i; /*0x47805e*/
        if ( *((unsigned char *)this + 13) ) /*0x47806b*/
        {
          RA2_OPDEL(*((void **)this + 1)); /*0x478076*/
          *((unsigned int *)this + 1) = 0; /*0x47807e*/
        }
      }
      *((unsigned int *)this + 1) = v4; /*0x478087*/
      *((unsigned int *)this + 2) = a2; /*0x47808f*/
      *((unsigned char *)this + 13) = a3 == 0; /*0x478092*/
      return 1; /*0x478098*/
    }
    else
    {
      return 0; /*0x47803f*/
    }
  }
  else
  {
    char TypeList_TechnoType::Remove(_VectorClass_PAVTechnoTypeClass *this, int a2, unsigned int *a3)
    return 1; /*0x4780a8*/
  }

}
} // namespace gamemd

// 0x4780B0
namespace gamemd {
void TypeList_TechnoType::ddtor()
{

  if ( *((unsigned int *)this + 1) && *((unsigned char *)this + 13) ) /*0x4780bd*/
  {
    RA2_OPDEL(*(void **)((char *)this + 4)); /*0x4780c3*/
    *((unsigned int *)this + 1) = 0; /*0x4780cb*/
  }
  *((unsigned char *)this + 13) = 0; /*0x4780ce*/
  *((unsigned int *)this + 2) = 0; /*0x4780d1*/

}
} // namespace gamemd

// 0x4780E0
namespace gamemd {
int TypeList_TechnoType::GetSize(unsigned int * a2)
{

  int result; // eax
  int v3; // edx
  unsigned int *i; // ecx

  if ( !*((unsigned char *)this + 12) ) /*0x4780e0*/
    return 0; /*0x4780e8*/
  v3 = *((unsigned int *)this + 2); /*0x4780ee*/
  result = 0; /*0x4780f1*/
  if ( v3 <= 0 ) /*0x4780f5*/
    return -1; /*0x47810c*/
  for ( i = *(unsigned int **)((char *)this + 4); *i != *a2; ++i ) /*0x4780fb*/
  {
    if ( ++result >= v3 ) /*0x47810a*/
      return -1; /*0x47810a*/
  }
  return result; /*0x4780ea*/

}
} // namespace gamemd

// 0x478120
namespace gamemd {
unsigned int TypeList_TechnoType::GetIndex(int a2)
{

  if ( *((unsigned char *)this + 12) ) /*0x478120*/
    return (unsigned int)(a2 - *((unsigned int *)this + 1)) >> 2; /*0x478135*/
  else
    return 0; /*0x478127*/

}
} // namespace gamemd

// 0x478680
namespace gamemd {
VectorClass_flat * TypeList_TechnoType::Add(unsigned int * Block, char a2)
{

  void *v3; // eax

  v3 = (void *)((unsigned int)((void *)*(Block + 1)));
  *Block = (unsigned int)(&vt_VectorClass_TechnoTypeClass);
  if ( v3 && *((unsigned char *)Block + 13) ) /*0x478690*/
  {
    RA2_OPDEL(v3); /*0x478698*/
    *(Block + 1) = 0; /*0x4786a0*/
  }
  *((unsigned char *)Block + 13) = 0; /*0x4786ab*/
  *(Block + 2) = 0; /*0x4786b1*/
  if ( ((unsigned int)(Block)& 1) != 0 ) /*0x4786b8*/
    RA2_OPDEL(Block); /*0x4786bb*/
  return (VectorClass *)Block; /*0x4786c5*/

}
} // namespace gamemd

// 0x478720
unsigned int * TypeList_flat::Copy(unsigned int * a2)
{

  int v3; // eax
  void *v4; // eax
  int v5; // ecx
  int v6; // eax

  if ( this == (gamemd::TypeList_flat *)(a2) ) /*0x47872a*/
    return this; /*0x47872a*/
  unsigned int *TypeList::Copy(TypeList *this, unsigned int *a2)
  v3 = a2[2]; /*0x478731*/
  *((unsigned int *)this + 2) = v3; /*0x478736*/
  if ( !v3 ) /*0x478739*/
  {
    *((unsigned int *)this + 1) = 0; /*0x47877a*/
    *((unsigned char *)this + 13) = 0; /*0x478781*/
    return this; /*0x478785*/
  }
  v4 = (unsigned int *)(RA2_OPNEW(4 * v3));
  *((unsigned int *)this + 1) = v4; /*0x47874b*/
  if ( !v4 ) /*0x478750*/
    return this; /*0x478750*/
  v5 = *((unsigned int *)this + 2); /*0x478752*/
  v6 = 0; /*0x478755*/
  *((unsigned char *)this + 13) = 1; /*0x478759*/
  if ( v5 <= 0 ) /*0x47875d*/
    return this; /*0x47875d*/
  do /*0x478771*/
  {
    *(unsigned int *)(*((unsigned int *)this + 1) + 4 * v6) = *(unsigned int *)(a2[1] + 4 * v6); /*0x478768*/
    ++v6; /*0x47876e*/
  }
  while ( v6 < *((unsigned int *)this + 2) ); /*0x478771*/
  return this; /*0x478775*/

}
// 0x478790
unsigned int * TypeList_flat::TechnoTypeConstructor(int a2, int a3)
{

  *((unsigned int *)this + 1) = 0; /*0x47879b*/
  *((unsigned int *)this + 2) = a2; /*0x47879e*/
  *((unsigned char *)this + 12) = 1; /*0x4787a1*/
  *((unsigned char *)this + 13) = 0; /*0x4787a5*/
  *this = &vt_VectorClass_TechnoTypeClass; /*0x4787a8*/
  if ( a2 ) /*0x4787ae*/
  {
    if ( a3 ) /*0x4787b6*/
    {
      *((unsigned int *)this + 1) = a3; /*0x4787b8*/
      return this; /*0x4787be*/
    }
    *((unsigned int *)this + 1) = RA2_OPNEW(4 * a2); /*0x4787cd*/
    *((unsigned char *)this + 13) = 1; /*0x4787d0*/
  }
  return (unsigned int *)(this);

}
// 0x5128A0
namespace gamemd {
void TypeList_Infantry::ddtor()
{

  void *v2; // eax

  v2 = *(void **)((char *)this + 4); /*0x5128a6*/
  *((unsigned int *)this + 4) = 0; /*0x5128a9*/
  if ( v2 && *((unsigned char *)this + 13) ) /*0x5128b0*/
  {
    RA2_OPDEL(v2); /*0x5128b6*/
    *((unsigned int *)this + 1) = 0; /*0x5128be*/
  }
  *((unsigned char *)this + 13) = 0; /*0x5128c1*/
  *((unsigned int *)this + 2) = 0; /*0x5128c4*/

}
} // namespace gamemd

// 0x5128D0
namespace gamemd {
unsigned int TypeList_Infantry::GetIndex(int a2)
{

  if ( *((unsigned char *)this + 12) ) /*0x5128d0*/
    return (unsigned int)(a2 - *((unsigned int *)this + 1)) >> 2; /*0x5128e5*/
  else
    return 0; /*0x5128d7*/

}
} // namespace gamemd

// 0x5128F0
namespace gamemd {
int TypeList_Infantry::Clear(int a2)
{

  return *(unsigned int *)(*((unsigned int *)this + 1) + 4 * a2); /*0x5128fa*/

}
} // namespace gamemd

// 0x5129F0
namespace gamemd {
TypeList_flat * TypeList_Infantry::Add(unsigned int * Block, char a2)
{

  void *v3; // eax

  v3 = (unsigned int)((void *)*(Block + 1));
  *Block = &vt_VectorClass_InfantryTypeClass_const; /*0x5129f6*/
  if ( v3 && *((unsigned char *)Block + 13) ) /*0x512a00*/
  {
    RA2_OPDEL(v3); /*0x512a08*/
    *(Block + 1) = 0; /*0x512a10*/
  }
  *((unsigned char *)Block + 13) = 0; /*0x512a1b*/
  *(Block + 2) = 0; /*0x512a21*/
  if ( ((unsigned int)(Block)& 1) != 0 ) /*0x512a28*/
    RA2_OPDEL(Block); /*0x512a2b*/
  return (TypeList *)Block; /*0x512a35*/

}
} // namespace gamemd

// 0x512C40
namespace gamemd {
char TypeList_Infantry::AddRef(int a2)
{

  int v2; // esi
  int v3; // edx
  unsigned int *v4; // eax
  int v5; // ecx

  v2 = *((char *)this + 2); /*0x512c42*/
  if ( v2 == *(unsigned int *)(a2 + 8) ) /*0x512c4d*/
  {
    v3 = 0; /*0x512c4f*/
    if ( v2 <= 0 ) /*0x512c53*/
      return 1; /*0x512c73*/
    v4 = (unsigned int *)*((char *)this + 1); /*0x512c55*/
    v5 = *(unsigned int *)(a2 + 4) - (unsigned int)v4; /*0x512c5b*/
    while ( *v4 == *(unsigned int *)((char *)v4 + v5) ) /*0x512c64*/
    {
      ++v3; /*0x512c66*/
      ++v4; /*0x512c67*/
      if ( v3 >= v2 ) /*0x512c6c*/
        return 1; /*0x512c6c*/
    }
  }
  return 0; /*0x512c6e*/

}
} // namespace gamemd

// 0x512E20
namespace gamemd {
DynamicVector * TypeList_Infantry::Constructor(unsigned int * Block, char a2)
{

  void *v3; // eax

  v3 = (unsigned int)((void *)*(Block + 1));
  *Block = &vt_VectorClass_InfantryTypeClass_const; /*0x512e26*/
  if ( v3 && *((unsigned char *)Block + 13) ) /*0x512e30*/
  {
    RA2_OPDEL(v3); /*0x512e38*/
    *(Block + 1) = 0; /*0x512e40*/
  }
  *((unsigned char *)Block + 13) = 0; /*0x512e4b*/
  *(Block + 2) = 0; /*0x512e51*/
  if ( ((unsigned int)(Block)& 1) != 0 ) /*0x512e58*/
    RA2_OPDEL(Block); /*0x512e5b*/
  return (DynamicVector *)Block; /*0x512e65*/

}
} // namespace gamemd

// 0x512E70
namespace gamemd {
char TypeList_Infantry::Remove(int a2, unsigned int * a3)
{

  unsigned int *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x512e7c*/
  {
    *((unsigned char *)this + 12) = 0; /*0x512e82*/
    if ( a3 ) /*0x512e88*/
      v4 = a3; /*0x512e9e*/
    else
      v4 = RA2_OPNEW(4 * a2); /*0x512e9a*/
    *((unsigned char *)this + 12) = 1; /*0x512ea2*/
    if ( !v4 ) /*0x512ea6*/
      return 0; /*0x512f1a*/
    if ( *((unsigned int *)this + 1) ) /*0x512ea8*/
    {
      v5 = *((unsigned int *)this + 2); /*0x512eaf*/
      if ( a2 < v5 ) /*0x512eb4*/
        v5 = a2; /*0x512eb6*/
      for ( i = 0; i < v5; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) ) /*0x512ebc*/
        ++i; /*0x512ec1*/
      if ( *((unsigned char *)this + 13) ) /*0x512ece*/
      {
        RA2_OPDEL(*((void **)this + 1)); /*0x512ed9*/
        *((unsigned int *)this + 1) = 0; /*0x512ee1*/
      }
    }
    *((unsigned int *)this + 1) = v4; /*0x512eea*/
    *((unsigned int *)this + 2) = a2; /*0x512ef2*/
    *((unsigned char *)this + 13) = a3 == 0; /*0x512ef5*/
  }
  else
  {
    char TypeList_Infantry::Remove(_DynamicVectorClass_PBVInfantryTypeClass *this, int a2, unsigned int *a3)
  }
  v7 = *((unsigned int *)this + 2); /*0x512f01*/
  if ( v7 < *((unsigned int *)this + 4) ) /*0x512f09*/
    *((unsigned int *)this + 4) = v7; /*0x512f0b*/
  return 1; /*0x512f0e*/

}
} // namespace gamemd

// 0x512F70
namespace gamemd {
int TypeList_Infantry::GetSize(unsigned int * a2)
{

  int v2; // edx
  int result; // eax
  unsigned int *i; // ecx

  v2 = *((char *)this + 4); /*0x512f70*/
  result = 0; /*0x512f73*/
  if ( v2 <= 0 ) /*0x512f78*/
    return -1; /*0x512f8f*/
  for ( i = (unsigned int *)*((char *)this + 1); *i != *a2; ++i ) /*0x512f7e*/
  {
    if ( ++result >= v2 ) /*0x512f8d*/
      return -1; /*0x512f8d*/
  }
  return result; /*0x512f92*/

}
} // namespace gamemd

// 0x5131F0
namespace gamemd {
DynamicVector * TypeList_Infantry::Constructor_0(unsigned int * Block, char a2)
{

  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x5131f3*/
  *Block = &vt_VectorClass_UnitTypeClass_const; /*0x5131f6*/
  if ( v3 && *((unsigned char *)Block + 13) ) /*0x513200*/
  {
    RA2_OPDEL(v3); /*0x513208*/
    *(Block + 1) = 0; /*0x513210*/
  }
  *((unsigned char *)Block + 13) = 0; /*0x51321b*/
  *(Block + 2) = 0; /*0x513221*/
  if ( (Block & 1) != 0 ) /*0x513228*/
    RA2_OPDEL(Block); /*0x51322b*/
  return (DynamicVector *)Block; /*0x513235*/

}
} // namespace gamemd

// 0x5135C0
namespace gamemd {
DynamicVector * TypeList_Infantry::Constructor_1(unsigned int * Block, char a2)
{

  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x5135c3*/
  *Block = &vt_VectorClass_AircraftTypeClass_const; /*0x5135c6*/
  if ( v3 && *((unsigned char *)Block + 13) ) /*0x5135d0*/
  {
    RA2_OPDEL(v3); /*0x5135d8*/
    *(Block + 1) = 0; /*0x5135e0*/
  }
  *((unsigned char *)Block + 13) = 0; /*0x5135eb*/
  *(Block + 2) = 0; /*0x5135f1*/
  if ( (Block & 1) != 0 ) /*0x5135f8*/
    RA2_OPDEL(Block); /*0x5135fb*/
  return (DynamicVector *)Block; /*0x513605*/

}
} // namespace gamemd

// 0x513740
unsigned int * TypeList_flat::CopyConstructor(VectorClass_flat * aP1)
{

  int v3; // eax
  int v4; // eax
  int v5; // ecx
  int v6; // eax

  *((unsigned int *)this + 1) = 0; /*0x51374d*/
  *((unsigned int *)this + 2) = 0; /*0x513750*/
  *((unsigned char *)this + 12) = 1; /*0x513753*/
  *((unsigned char *)this + 13) = 0; /*0x513757*/
  *this = &vt_VectorClass_UnitTypeClass_const; /*0x51375a*/
  if ( this != (unsigned int *)aP1 ) /*0x513760*/
  {
    Vector::Destructor((int)this); /*0x513762*/
    v3 = aP1->Capacity; /*0x513768*/
    *((unsigned int *)this + 2) = v3; /*0x51376d*/
    if ( v3 ) /*0x513770*/
    {
      v4 = RA2_OPNEW(4 * v3); /*0x513776*/
      *((unsigned int *)this + 1) = v4; /*0x513780*/
      if ( v4 ) /*0x513783*/
      {
        v5 = *((unsigned int *)this + 2); /*0x513785*/
        v6 = 0; /*0x513788*/
        *((unsigned char *)this + 13) = 1; /*0x51378c*/
        if ( v5 > 0 ) /*0x513790*/
        {
          do /*0x5137a4*/
          {
            *(unsigned int *)(*((unsigned int *)this + 1) + 4 * v6) = *((unsigned int *)aP1->Items + v6); /*0x51379b*/
            ++v6; /*0x5137a1*/
          }
          while ( v6 < *((unsigned int *)this + 2) ); /*0x5137a4*/
        }
      }
    }
    else
    {
      *((unsigned int *)this + 1) = 0; /*0x5137a8*/
      *((unsigned char *)this + 13) = 0; /*0x5137ab*/
    }
  }
  *((unsigned int *)this + 4) = aP1[1].vtable0; /*0x5137b1*/
  *((unsigned int *)this + 5) = aP1[1].Items; /*0x5137b7*/
  *this = &vt_TypeList_UnitTypeClass_const; /*0x5137ba*/
  return this; /*0x5137c2*/

}
// 0x5255F0
unsigned int * TypeList_flat::AnimTypeCopy(VectorClass_flat * aP1)
{

  int v3; // eax
  int v4; // eax
  int v5; // ecx
  int v6; // eax

  *((unsigned int *)this + 1) = 0; /*0x5255fd*/
  *((unsigned int *)this + 2) = 0; /*0x525600*/
  *((unsigned char *)this + 12) = 1; /*0x525603*/
  *((unsigned char *)this + 13) = 0; /*0x525607*/
  *this = &vt_VectorClass_AnimTypeClass_const; /*0x52560a*/
  if ( this != (unsigned int *)aP1 ) /*0x525610*/
  {
    DynamicVectorClass::Destroy_Alt((int)this); /*0x525612*/
    v3 = aP1->Capacity; /*0x525618*/
    *((unsigned int *)this + 2) = v3; /*0x52561d*/
    if ( v3 ) /*0x525620*/
    {
      v4 = RA2_OPNEW(4 * v3); /*0x525626*/
      *((unsigned int *)this + 1) = v4; /*0x525630*/
      if ( v4 ) /*0x525633*/
      {
        v5 = *((unsigned int *)this + 2); /*0x525635*/
        v6 = 0; /*0x525638*/
        *((unsigned char *)this + 13) = 1; /*0x52563c*/
        if ( v5 > 0 ) /*0x525640*/
        {
          do /*0x525654*/
          {
            *(unsigned int *)(*((unsigned int *)this + 1) + 4 * v6) = *((unsigned int *)aP1->Items + v6); /*0x52564b*/
            ++v6; /*0x525651*/
          }
          while ( v6 < *((unsigned int *)this + 2) ); /*0x525654*/
        }
      }
    }
    else
    {
      *((unsigned int *)this + 1) = 0; /*0x525658*/
      *((unsigned char *)this + 13) = 0; /*0x52565b*/
    }
  }
  *((unsigned int *)this + 4) = aP1[1].vtable0; /*0x525661*/
  *((unsigned int *)this + 5) = aP1[1].Items; /*0x525667*/
  *this = &vt_TypeList_AnimTypeClass_const; /*0x52566a*/
  return this; /*0x525672*/

}
// 0x5AC400
CCINIClass * TypeList_flat::BuildingTypeConstructor()
{

  *((unsigned int *)this + 1) = 0; /*0x5ac404*/
  *((unsigned int *)this + 2) = 0; /*0x5ac407*/
  *((unsigned char *)this + 12) = 1; /*0x5ac40a*/
  *((unsigned char *)this + 13) = 0; /*0x5ac40e*/
  *((unsigned int *)this + 5) = 10; /*0x5ac411*/
  *((unsigned int *)this + 4) = 0; /*0x5ac418*/
  *this = &vt_TypeList_BuildingTypeClass_const; /*0x5ac41b*/
  return (CCINIClass *)this; /*0x5ac421*/

}
// 0x5AC650
namespace gamemd {
TypeList_flat * TypeList_BuildingType::Add(unsigned int * Block, char a2)
{

  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x5ac653*/
  *Block = &vt_VectorClass_BuildingTypeClass_const; /*0x5ac656*/
  if ( v3 && *((unsigned char *)Block + 13) ) /*0x5ac660*/
  {
    RA2_OPDEL(v3); /*0x5ac668*/
    *(Block + 1) = 0; /*0x5ac670*/
  }
  *((unsigned char *)Block + 13) = 0; /*0x5ac67b*/
  *(Block + 2) = 0; /*0x5ac681*/
  if ( (Block & 1) != 0 ) /*0x5ac688*/
    RA2_OPDEL(Block); /*0x5ac68b*/
  return (TypeList *)Block; /*0x5ac695*/

}
} // namespace gamemd

// 0x5AD660
unsigned int * TypeList_flat::BuildingTypeCopy(VectorClass_flat * aP1)
{

  int v3; // eax
  int v4; // eax
  int v5; // ecx
  int v6; // eax

  *((unsigned int *)this + 1) = 0; /*0x5ad66d*/
  *((unsigned int *)this + 2) = 0; /*0x5ad670*/
  *((unsigned char *)this + 12) = 1; /*0x5ad673*/
  *((unsigned char *)this + 13) = 0; /*0x5ad677*/
  *this = &vt_VectorClass_BuildingTypeClass_const; /*0x5ad67a*/
  if ( this != (unsigned int *)aP1 ) /*0x5ad680*/
  {
    DynamicVectorClass::Destroy((int)this); /*0x5ad682*/
    v3 = aP1->Capacity; /*0x5ad688*/
    *((unsigned int *)this + 2) = v3; /*0x5ad68d*/
    if ( v3 ) /*0x5ad690*/
    {
      v4 = RA2_OPNEW(4 * v3); /*0x5ad696*/
      *((unsigned int *)this + 1) = v4; /*0x5ad6a0*/
      if ( v4 ) /*0x5ad6a3*/
      {
        v5 = *((unsigned int *)this + 2); /*0x5ad6a5*/
        v6 = 0; /*0x5ad6a8*/
        *((unsigned char *)this + 13) = 1; /*0x5ad6ac*/
        if ( v5 > 0 ) /*0x5ad6b0*/
        {
          do /*0x5ad6c4*/
          {
            *(unsigned int *)(*((unsigned int *)this + 1) + 4 * v6) = *((unsigned int *)aP1->Items + v6); /*0x5ad6bb*/
            ++v6; /*0x5ad6c1*/
          }
          while ( v6 < *((unsigned int *)this + 2) ); /*0x5ad6c4*/
        }
      }
    }
    else
    {
      *((unsigned int *)this + 1) = 0; /*0x5ad6c8*/
      *((unsigned char *)this + 13) = 0; /*0x5ad6cb*/
    }
  }
  *((unsigned int *)this + 4) = aP1[1].vtable0; /*0x5ad6d1*/
  *((unsigned int *)this + 5) = aP1[1].Items; /*0x5ad6d7*/
  *this = &vt_TypeList_BuildingTypeClass_const; /*0x5ad6da*/
  return this; /*0x5ad6e2*/

}
// 0x67A030
void TypeList_flat::InfantryCleanup()
{

  void *v2; // eax

  v2 = (void *)*((unsigned int *)this + 1); /*0x67a036*/
  *this = &vt_VectorClass_InfantryTypeClass_const; /*0x67a039*/
  if ( v2 && *((unsigned char *)this + 13) ) /*0x67a043*/
  {
    RA2_OPDEL(v2); /*0x67a049*/
    *((unsigned int *)this + 1) = 0; /*0x67a051*/
  }
  *((unsigned char *)this + 13) = 0; /*0x67a054*/
  *((unsigned int *)this + 2) = 0; /*0x67a057*/

}
// 0x67A090
int *  TypeList_flat::CopyFull( VectorClass * aP1)
{

  int v3; // eax
  int v4; // eax
  int v5; // ecx
  int v6; // eax

  if ( this != (int *)aP1 ) /*0x67a09a*/
  {
    (*(void (**)(int *))(*this + 12))(this); /*0x67a09e*/
    v3 = aP1->Capacity; /*0x67a0a1*/
    *(this + 2) = v3; /*0x67a0a6*/
    if ( v3 ) /*0x67a0a9*/
    {
      v4 = RA2_OPNEW(4 * v3); /*0x67a0b3*/
      *(this + 1) = v4; /*0x67a0bb*/
      if ( v4 ) /*0x67a0c0*/
      {
        v5 = *(this + 2); /*0x67a0c2*/
        v6 = 0; /*0x67a0c5*/
        *((unsigned char *)this + 13) = 1; /*0x67a0c9*/
        if ( v5 > 0 ) /*0x67a0cd*/
        {
          do /*0x67a0e1*/
          {
            *(unsigned int *)(*(this + 1) + 4 * v6) = *((unsigned int *)aP1->Items + v6); /*0x67a0d8*/
            ++v6; /*0x67a0de*/
          }
          while ( v6 < *(this + 2) ); /*0x67a0e1*/
        }
      }
    }
    else
    {
      *(this + 1) = 0; /*0x67a0e5*/
      *((unsigned char *)this + 13) = 0; /*0x67a0ec*/
    }
  }
  *(this + 4) = (int)aP1[1].vtable0; /*0x67a0f3*/
  *(this + 5) = (int)aP1[1].Items; /*0x67a0f9*/
  *(this + 6) = aP1[1].Capacity; /*0x67a0ff*/
  return this; /*0x67a104*/

}
// 0x67A110
int * TypeList_flat::CopyAircraft(VectorClass_flat * aP1)
{

  int v3; // eax
  int v4; // eax
  int v5; // ecx
  int v6; // eax

  if ( this != (int *)aP1 ) /*0x67a11a*/
  {
    int *TypeList::CopyAircraft(TypeList *this, int *a2)
    v3 = aP1->Capacity; /*0x67a121*/
    *((char *)this + 2) = v3; /*0x67a126*/
    if ( v3 ) /*0x67a129*/
    {
      v4 = RA2_OPNEW(4 * v3); /*0x67a133*/
      *((char *)this + 1) = v4; /*0x67a13b*/
      if ( v4 ) /*0x67a140*/
      {
        v5 = *((char *)this + 2); /*0x67a142*/
        v6 = 0; /*0x67a145*/
        *((unsigned char *)this + 13) = 1; /*0x67a149*/
        if ( v5 > 0 ) /*0x67a14d*/
        {
          do /*0x67a161*/
          {
            *(unsigned int *)(*((char *)this + 1) + 4 * v6) = *((unsigned int *)aP1->Items + v6); /*0x67a158*/
            ++v6; /*0x67a15e*/
          }
          while ( v6 < *((char *)this + 2) ); /*0x67a161*/
        }
      }
    }
    else
    {
      *((char *)this + 1) = 0; /*0x67a165*/
      *((unsigned char *)this + 13) = 0; /*0x67a16c*/
    }
  }
  *((char *)this + 4) = (int)aP1[1].vtable0; /*0x67a173*/
  *((char *)this + 5) = (int)aP1[1].Items; /*0x67a179*/
  *((char *)this + 6) = aP1[1].Capacity; /*0x67a17f*/
  return this; /*0x67a184*/

}
// 0x67A290
int * TypeList_flat::CopyInfantry(CCINIClass * aP1)
{

  int v3; // eax
  int v4; // eax
  int v5; // ecx
  int v6; // eax

  if ( this != (int *)aP1 ) /*0x67a29a*/
  {
    int *TypeList::CopyInfantry(TypeList *this, int *a2)
    v3 = aP1->headNode[1]; /*0x67a2a1*/
    *((char *)this + 2) = v3; /*0x67a2a6*/
    if ( v3 ) /*0x67a2a9*/
    {
      v4 = RA2_OPNEW(4 * v3); /*0x67a2b3*/
      *((char *)this + 1) = v4; /*0x67a2bb*/
      if ( v4 ) /*0x67a2c0*/
      {
        v5 = *((char *)this + 2); /*0x67a2c2*/
        v6 = 0; /*0x67a2c5*/
        *((unsigned char *)this + 13) = 1; /*0x67a2c9*/
        if ( v5 > 0 ) /*0x67a2cd*/
        {
          do /*0x67a2e1*/
          {
            *(unsigned int *)(*((char *)this + 1) + 4 * v6) = *(unsigned int *)(aP1->headNode[0] + 4 * v6); /*0x67a2d8*/
            ++v6; /*0x67a2de*/
          }
          while ( v6 < *((char *)this + 2) ); /*0x67a2e1*/
        }
      }
    }
    else
    {
      *((char *)this + 1) = 0; /*0x67a2e5*/
      *((unsigned char *)this + 13) = 0; /*0x67a2ec*/
    }
  }
  *((char *)this + 4) = aP1->sectionHead[0]; /*0x67a2f3*/
  *((char *)this + 5) = aP1->sectionHead[1]; /*0x67a2f9*/
  *((char *)this + 6) = aP1->sectionHead[2]; /*0x67a2ff*/
  return this; /*0x67a304*/

}
// 0x67A390
CCINIClass * TypeList_flat::VoxelAnimConstructor()
{

  *((unsigned int *)this + 1) = 0; /*0x67a394*/
  *((unsigned int *)this + 2) = 0; /*0x67a397*/
  *((unsigned char *)this + 12) = 1; /*0x67a39a*/
  *((unsigned char *)this + 13) = 0; /*0x67a39e*/
  *((unsigned int *)this + 5) = 10; /*0x67a3a1*/
  *((unsigned int *)this + 4) = 0; /*0x67a3a8*/
  *this = &vt_TypeList_VoxelAnimTypeClass_const; /*0x67a3ab*/
  return (CCINIClass *)this; /*0x67a3b1*/

}
// 0x67A410
namespace gamemd {
void TypeList_VoxelAnim::ddtor()
{

  void *v2; // eax

  v2 = *(void **)((char *)this + 4); /*0x67a416*/
  *((unsigned int *)this + 4) = 0; /*0x67a419*/
  if ( v2 && *((unsigned char *)this + 13) ) /*0x67a420*/
  {
    RA2_OPDEL(v2); /*0x67a426*/
    *((unsigned int *)this + 1) = 0; /*0x67a42e*/
  }
  *((unsigned char *)this + 13) = 0; /*0x67a431*/
  *((unsigned int *)this + 2) = 0; /*0x67a434*/

}
} // namespace gamemd

// 0x67A440
namespace gamemd {
unsigned int TypeList_VoxelAnim::GetIndex(int a2)
{

  if ( *((unsigned char *)this + 12) ) /*0x67a440*/
    return (unsigned int)(a2 - *((unsigned int *)this + 1)) >> 2; /*0x67a455*/
  else
    return 0; /*0x67a447*/

}
} // namespace gamemd

// 0x67A460
namespace gamemd {
int TypeList_VoxelAnim::Clear(int a2)
{

  return *(unsigned int *)(*((unsigned int *)this + 1) + 4 * a2); /*0x67a46a*/

}
} // namespace gamemd

// 0x67A4F0
DynamicVector * TypeList_flat::Construct()
{

  *((unsigned int *)this + 1) = 0; /*0x67a4f4*/
  *((unsigned int *)this + 2) = 0; /*0x67a4f7*/
  *((unsigned char *)this + 12) = 1; /*0x67a4fa*/
  *((unsigned char *)this + 13) = 0; /*0x67a4fe*/
  *((unsigned int *)this + 5) = 10; /*0x67a501*/
  *((unsigned int *)this + 4) = 0; /*0x67a508*/
  *this = &vt_TypeList_int; /*0x67a50b*/
  return (DynamicVector *)this; /*0x67a511*/

}
// 0x67A600
CCINIClass * TypeList_flat::ConstructSmudge()
{

  *((unsigned int *)this + 1) = 0; /*0x67a604*/
  *((unsigned int *)this + 2) = 0; /*0x67a607*/
  *((unsigned char *)this + 12) = 1; /*0x67a60a*/
  *((unsigned char *)this + 13) = 0; /*0x67a60e*/
  *((unsigned int *)this + 5) = 10; /*0x67a611*/
  *((unsigned int *)this + 4) = 0; /*0x67a618*/
  *this = &vt_TypeList_SmudgeTypeClass_const; /*0x67a61b*/
  return (CCINIClass *)this; /*0x67a621*/

}
// 0x67A680
namespace gamemd {
void TypeList_VoxelAnim::TypeList_vt03()
{

  void *v2; // eax

  v2 = *(void **)((char *)this + 4); /*0x67a686*/
  *((unsigned int *)this + 4) = 0; /*0x67a689*/
  if ( v2 && *((unsigned char *)this + 13) ) /*0x67a690*/
  {
    RA2_OPDEL(v2); /*0x67a696*/
    *((unsigned int *)this + 1) = 0; /*0x67a69e*/
  }
  *((unsigned char *)this + 13) = 0; /*0x67a6a1*/
  *((unsigned int *)this + 2) = 0; /*0x67a6a4*/

}
} // namespace gamemd

// 0x67A6B0
namespace gamemd {
unsigned int TypeList_VoxelAnim::TypeList_vt05(int a2)
{

  if ( *((unsigned char *)this + 12) ) /*0x67a6b0*/
    return (unsigned int)(a2 - *((unsigned int *)this + 1)) >> 2; /*0x67a6c5*/
  else
    return 0; /*0x67a6b7*/

}
} // namespace gamemd

// 0x67A6D0
int TypeList_flat::Clear(int a2)
{

  return *(unsigned int *)(*((unsigned int *)this + 1) + 4 * a2); /*0x67a6da*/

}
// 0x67A820
unsigned int * TypeList_flat::InfantryConstructor()
{

  *((unsigned int *)this + 1) = 0; /*0x67a824*/
  *((unsigned int *)this + 2) = 0; /*0x67a827*/
  *((unsigned char *)this + 12) = 1; /*0x67a82a*/
  *((unsigned char *)this + 13) = 0; /*0x67a82e*/
  *((unsigned int *)this + 5) = 10; /*0x67a831*/
  *((unsigned int *)this + 4) = 0; /*0x67a838*/
  *this = &vt_TypeList_InfantryTypeClass_const; /*0x67a83b*/
  return this; /*0x67a841*/

}
// 0x67A930
namespace gamemd {
void TypeList_cptr_TerrainTypeClass::GetClassIdentifier()
{

  void *v2; // eax

  v2 = *(void **)((char *)this + 4); /*0x67a936*/
  *((unsigned int *)this + 4) = 0; /*0x67a939*/
  if ( v2 && *((unsigned char *)this + 13) ) /*0x67a940*/
  {
    RA2_OPDEL(v2); /*0x67a946*/
    *((unsigned int *)this + 1) = 0; /*0x67a94e*/
  }
  *((unsigned char *)this + 13) = 0; /*0x67a951*/
  *((unsigned int *)this + 2) = 0; /*0x67a954*/

}
} // namespace gamemd

// 0x67A960
namespace gamemd {
unsigned int TypeList_cptr_TerrainTypeClass::GetIndex(int a2)
{

  if ( *((unsigned char *)this + 12) ) /*0x67a960*/
    return (unsigned int)(a2 - *((unsigned int *)this + 1)) >> 2; /*0x67a975*/
  else
    return 0; /*0x67a967*/

}
} // namespace gamemd

// 0x67A980
namespace gamemd {
int TypeList_cptr_TerrainTypeClass::SaveToINI(int a2)
{

  return *(unsigned int *)(*((unsigned int *)this + 1) + 4 * a2); /*0x67a98a*/

}
} // namespace gamemd

// 0x67A990
namespace gamemd {
TypeList_flat * TypeList_VoxelAnim::Add(unsigned int * Block, char a2)
{

  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x67a993*/
  *Block = &vt_VectorClass_VoxelAnimTypeClass_const; /*0x67a996*/
  if ( v3 && *((unsigned char *)Block + 13) ) /*0x67a9a0*/
  {
    RA2_OPDEL(v3); /*0x67a9a8*/
    *(Block + 1) = 0; /*0x67a9b0*/
  }
  *((unsigned char *)Block + 13) = 0; /*0x67a9bb*/
  *(Block + 2) = 0; /*0x67a9c1*/
  if ( (Block & 1) != 0 ) /*0x67a9c8*/
    RA2_OPDEL(Block); /*0x67a9cb*/
  return (TypeList *)Block; /*0x67a9d5*/

}
} // namespace gamemd

// 0x67A9E0
namespace gamemd {
TypeList_flat * TypeList_VoxelAnim::TypeList_vt00(unsigned int * Block, char a2)
{

  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x67a9e3*/
  *Block = &vt_VectorClass_SmudgeTypeClass_const; /*0x67a9e6*/
  if ( v3 && *((unsigned char *)Block + 13) ) /*0x67a9f0*/
  {
    RA2_OPDEL(v3); /*0x67a9f8*/
    *(Block + 1) = 0; /*0x67aa00*/
  }
  *((unsigned char *)Block + 13) = 0; /*0x67aa0b*/
  *(Block + 2) = 0; /*0x67aa11*/
  if ( (Block & 1) != 0 ) /*0x67aa18*/
    RA2_OPDEL(Block); /*0x67aa1b*/
  return (TypeList *)Block; /*0x67aa25*/

}
} // namespace gamemd

// 0x67AA30
namespace gamemd {
TypeList_flat * TypeList_cptr_TerrainTypeClass::Add(unsigned int * Block, char a2)
{

  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x67aa33*/
  *Block = &vt_VectorClass_TerrainTypeClass_const; /*0x67aa36*/
  if ( v3 && *((unsigned char *)Block + 13) ) /*0x67aa40*/
  {
    RA2_OPDEL(v3); /*0x67aa48*/
    *(Block + 1) = 0; /*0x67aa50*/
  }
  *((unsigned char *)Block + 13) = 0; /*0x67aa5b*/
  *(Block + 2) = 0; /*0x67aa61*/
  if ( (Block & 1) != 0 ) /*0x67aa68*/
    RA2_OPDEL(Block); /*0x67aa6b*/
  return (TypeList *)Block; /*0x67aa75*/

}
} // namespace gamemd

// 0x67AAF0
namespace gamemd {
char TypeList_VoxelAnim::AddRef(int a2)
{

  int v2; // esi
  int v3; // edx
  unsigned int *v4; // eax
  int v5; // ecx

  v2 = *((char *)this + 2); /*0x67aaf2*/
  if ( v2 == *(unsigned int *)(a2 + 8) ) /*0x67aafd*/
  {
    v3 = 0; /*0x67aaff*/
    if ( v2 <= 0 ) /*0x67ab03*/
      return 1; /*0x67ab23*/
    v4 = (unsigned int *)*((char *)this + 1); /*0x67ab05*/
    v5 = *(unsigned int *)(a2 + 4) - (unsigned int)v4; /*0x67ab0b*/
    while ( *v4 == *(unsigned int *)((char *)v4 + v5) ) /*0x67ab14*/
    {
      ++v3; /*0x67ab16*/
      ++v4; /*0x67ab17*/
      if ( v3 >= v2 ) /*0x67ab1c*/
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
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x67ab3c*/
  {
    *((unsigned char *)this + 12) = 0; /*0x67ab46*/
    if ( a3 ) /*0x67ab4c*/
      v4 = a3; /*0x67ab62*/
    else
      v4 = RA2_OPNEW(4 * a2); /*0x67ab5e*/
    *((unsigned char *)this + 12) = 1; /*0x67ab66*/
    if ( v4 ) /*0x67ab6a*/
    {
      if ( *((unsigned int *)this + 1) ) /*0x67ab75*/
      {
        v6 = *((unsigned int *)this + 2); /*0x67ab7c*/
        if ( a2 < v6 ) /*0x67ab81*/
          v6 = a2; /*0x67ab83*/
        for ( i = 0; i < v6; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) ) /*0x67ab89*/
          ++i; /*0x67ab8e*/
        if ( *((unsigned char *)this + 13) ) /*0x67ab9b*/
        {
          RA2_OPDEL(*((void **)this + 1)); /*0x67aba6*/
          *((unsigned int *)this + 1) = 0; /*0x67abae*/
        }
      }
      *((unsigned int *)this + 1) = v4; /*0x67abb7*/
      *((unsigned int *)this + 2) = a2; /*0x67abbf*/
      *((unsigned char *)this + 13) = a3 == 0; /*0x67abc2*/
      return 1; /*0x67abc8*/
    }
    else
    {
      return 0; /*0x67ab6f*/
    }
  }
  else
  {
    char TypeList_VoxelAnim::SetCapacity(_VectorClass_PBVVoxelAnimTypeClass *this, int a2, unsigned int *a3)
    return 1; /*0x67abd8*/
  }

}
} // namespace gamemd

// 0x67AC10
namespace gamemd {
int TypeList_VoxelAnim::IndexOf(unsigned int * a2)
{

  int result; // eax
  int v3; // edx
  unsigned int *i; // ecx

  if ( !*((unsigned char *)this + 12) ) /*0x67ac10*/
    return 0; /*0x67ac18*/
  v3 = *((unsigned int *)this + 2); /*0x67ac1e*/
  result = 0; /*0x67ac21*/
  if ( v3 <= 0 ) /*0x67ac25*/
    return -1; /*0x67ac3c*/
  for ( i = *(unsigned int **)((char *)this + 4); *i != *a2; ++i ) /*0x67ac2b*/
  {
    if ( ++result >= v3 ) /*0x67ac3a*/
      return -1; /*0x67ac3a*/
  }
  return result; /*0x67ac1a*/

}
} // namespace gamemd

// 0x67AC50
namespace gamemd {
unsigned int TypeList_VoxelAnim::PointerToIndex(int a2)
{

  if ( *((unsigned char *)this + 12) ) /*0x67ac50*/
    return (unsigned int)(a2 - *((unsigned int *)this + 1)) >> 2; /*0x67ac65*/
  else
    return 0; /*0x67ac57*/

}
} // namespace gamemd

// 0x67ACD0
namespace gamemd {
char TypeList_VoxelAnim::Remove(int a2, unsigned int * a3)
{

  unsigned int *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x67acdc*/
  {
    *((unsigned char *)this + 12) = 0; /*0x67ace2*/
    if ( a3 ) /*0x67ace8*/
      v4 = a3; /*0x67acfe*/
    else
      v4 = RA2_OPNEW(4 * a2); /*0x67acfa*/
    *((unsigned char *)this + 12) = 1; /*0x67ad02*/
    if ( !v4 ) /*0x67ad06*/
      return 0; /*0x67ad7a*/
    if ( *((unsigned int *)this + 1) ) /*0x67ad08*/
    {
      v5 = *((unsigned int *)this + 2); /*0x67ad0f*/
      if ( a2 < v5 ) /*0x67ad14*/
        v5 = a2; /*0x67ad16*/
      for ( i = 0; i < v5; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) ) /*0x67ad1c*/
        ++i; /*0x67ad21*/
      if ( *((unsigned char *)this + 13) ) /*0x67ad2e*/
      {
        RA2_OPDEL(*((void **)this + 1)); /*0x67ad39*/
        *((unsigned int *)this + 1) = 0; /*0x67ad41*/
      }
    }
    *((unsigned int *)this + 1) = v4; /*0x67ad4a*/
    *((unsigned int *)this + 2) = a2; /*0x67ad52*/
    *((unsigned char *)this + 13) = a3 == 0; /*0x67ad55*/
  }
  else
  {
    char TypeList_VoxelAnim::Remove(_DynamicVectorClass_PBVVoxelAnimTypeClass *this, int a2, unsigned int *a3)
  }
  v7 = *((unsigned int *)this + 2); /*0x67ad61*/
  if ( v7 < *((unsigned int *)this + 4) ) /*0x67ad69*/
    *((unsigned int *)this + 4) = v7; /*0x67ad6b*/
  return 1; /*0x67ad6e*/

}
} // namespace gamemd

// 0x67ADD0
namespace gamemd {
int TypeList_VoxelAnim::GetSize(unsigned int * a2)
{

  int v2; // edx
  int result; // eax
  unsigned int *i; // ecx

  v2 = *((char *)this + 4); /*0x67add0*/
  result = 0; /*0x67add3*/
  if ( v2 <= 0 ) /*0x67add8*/
    return -1; /*0x67adef*/
  for ( i = (unsigned int *)*((char *)this + 1); *i != *a2; ++i ) /*0x67adde*/
  {
    if ( ++result >= v2 ) /*0x67aded*/
      return -1; /*0x67aded*/
  }
  return result; /*0x67adf2*/

}
} // namespace gamemd

// 0x67AE70
char TypeList_flat::AddRef(int a2)
{

  int v2; // esi
  int v3; // edx
  unsigned int *v4; // eax
  int v5; // ecx

  v2 = *((char *)this + 2); /*0x67ae72*/
  if ( v2 == *(unsigned int *)(a2 + 8) ) /*0x67ae7d*/
  {
    v3 = 0; /*0x67ae7f*/
    if ( v2 <= 0 ) /*0x67ae83*/
      return 1; /*0x67aea3*/
    v4 = (unsigned int *)*((char *)this + 1); /*0x67ae85*/
    v5 = *(unsigned int *)(a2 + 4) - (unsigned int)v4; /*0x67ae8b*/
    while ( *v4 == *(unsigned int *)((char *)v4 + v5) ) /*0x67ae94*/
    {
      ++v3; /*0x67ae96*/
      ++v4; /*0x67ae97*/
      if ( v3 >= v2 ) /*0x67ae9c*/
        return 1; /*0x67ae9c*/
    }
  }
  return 0; /*0x67ae9e*/

}
// 0x67B050
char TypeList_flat::Release(int a2, unsigned int * a3)
{

  unsigned int *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x67b05c*/
  {
    *((unsigned char *)this + 12) = 0; /*0x67b062*/
    if ( a3 ) /*0x67b068*/
      v4 = a3; /*0x67b07e*/
    else
      v4 = RA2_OPNEW(4 * a2); /*0x67b07a*/
    *((unsigned char *)this + 12) = 1; /*0x67b082*/
    if ( !v4 ) /*0x67b086*/
      return 0; /*0x67b0fa*/
    if ( *((unsigned int *)this + 1) ) /*0x67b088*/
    {
      v5 = *((unsigned int *)this + 2); /*0x67b08f*/
      if ( a2 < v5 ) /*0x67b094*/
        v5 = a2; /*0x67b096*/
      for ( i = 0; i < v5; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) ) /*0x67b09c*/
        ++i; /*0x67b0a1*/
      if ( *((unsigned char *)this + 13) ) /*0x67b0ae*/
      {
        RA2_OPDEL(*((void **)this + 1)); /*0x67b0b9*/
        *((unsigned int *)this + 1) = 0; /*0x67b0c1*/
      }
    }
    *((unsigned int *)this + 1) = v4; /*0x67b0ca*/
    *((unsigned int *)this + 2) = a2; /*0x67b0d2*/
    *((unsigned char *)this + 13) = a3 == 0; /*0x67b0d5*/
  }
  else
  {
    char TypeList::Release(_DynamicVectorClass_PBVSmudgeTypeClass *this, int a2, unsigned int *a3)
  }
  v7 = *((unsigned int *)this + 2); /*0x67b0e1*/
  if ( v7 < *((unsigned int *)this + 4) ) /*0x67b0e9*/
    *((unsigned int *)this + 4) = v7; /*0x67b0eb*/
  return 1; /*0x67b0ee*/

}
// 0x67B150
namespace gamemd {
int TypeList_VoxelAnim::TypeList_vt04(unsigned int * a2)
{

  int v2; // edx
  int result; // eax
  unsigned int *i; // ecx

  v2 = *((char *)this + 4); /*0x67b150*/
  result = 0; /*0x67b153*/
  if ( v2 <= 0 ) /*0x67b158*/
    return -1; /*0x67b16f*/
  for ( i = (unsigned int *)*((char *)this + 1); *i != *a2; ++i ) /*0x67b15e*/
  {
    if ( ++result >= v2 ) /*0x67b16d*/
      return -1; /*0x67b16d*/
  }
  return result; /*0x67b172*/

}
} // namespace gamemd

// 0x67B1F0
namespace gamemd {
char TypeList_cptr_TerrainTypeClass::AddRef(int a2)
{

  int v2; // esi
  int v3; // edx
  unsigned int *v4; // eax
  int v5; // ecx

  v2 = *((char *)this + 2); /*0x67b1f2*/
  if ( v2 == *(unsigned int *)(a2 + 8) ) /*0x67b1fd*/
  {
    v3 = 0; /*0x67b1ff*/
    if ( v2 <= 0 ) /*0x67b203*/
      return 1; /*0x67b223*/
    v4 = (unsigned int *)*((char *)this + 1); /*0x67b205*/
    v5 = *(unsigned int *)(a2 + 4) - (unsigned int)v4; /*0x67b20b*/
    while ( *v4 == *(unsigned int *)((char *)v4 + v5) ) /*0x67b214*/
    {
      ++v3; /*0x67b216*/
      ++v4; /*0x67b217*/
      if ( v3 >= v2 ) /*0x67b21c*/
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
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x67b23c*/
  {
    *((unsigned char *)this + 12) = 0; /*0x67b246*/
    if ( a3 ) /*0x67b24c*/
      v4 = a3; /*0x67b262*/
    else
      v4 = RA2_OPNEW(4 * a2); /*0x67b25e*/
    *((unsigned char *)this + 12) = 1; /*0x67b266*/
    if ( v4 ) /*0x67b26a*/
    {
      if ( *((unsigned int *)this + 1) ) /*0x67b275*/
      {
        v6 = *((unsigned int *)this + 2); /*0x67b27c*/
        if ( a2 < v6 ) /*0x67b281*/
          v6 = a2; /*0x67b283*/
        for ( i = 0; i < v6; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) ) /*0x67b289*/
          ++i; /*0x67b28e*/
        if ( *((unsigned char *)this + 13) ) /*0x67b29b*/
        {
          RA2_OPDEL(*((void **)this + 1)); /*0x67b2a6*/
          *((unsigned int *)this + 1) = 0; /*0x67b2ae*/
        }
      }
      *((unsigned int *)this + 1) = v4; /*0x67b2b7*/
      *((unsigned int *)this + 2) = a2; /*0x67b2bf*/
      *((unsigned char *)this + 13) = a3 == 0; /*0x67b2c2*/
      return 1; /*0x67b2c8*/
    }
    else
    {
      return 0; /*0x67b26f*/
    }
  }
  else
  {
    char TypeList_cptr_TerrainTypeClass::SetCapacity(_VectorClass_PBVTerrainTypeClass *this, int a2, unsigned int *a3)
    return 1; /*0x67b2d8*/
  }

}
} // namespace gamemd

// 0x67B2E0
namespace gamemd {
void TypeList_cptr_TerrainTypeClass::TryFreeAndClear()
{

  if ( *((unsigned int *)this + 1) && *((unsigned char *)this + 13) ) /*0x67b2ed*/
  {
    RA2_OPDEL(*(void **)((char *)this + 4)); /*0x67b2f3*/
    *((unsigned int *)this + 1) = 0; /*0x67b2fb*/
  }
  *((unsigned char *)this + 13) = 0; /*0x67b2fe*/
  *((unsigned int *)this + 2) = 0; /*0x67b301*/

}
} // namespace gamemd

// 0x67B310
namespace gamemd {
int TypeList_cptr_TerrainTypeClass::IndexOf(unsigned int * a2)
{

  int result; // eax
  int v3; // edx
  unsigned int *i; // ecx

  if ( !*((unsigned char *)this + 12) ) /*0x67b310*/
    return 0; /*0x67b318*/
  v3 = *((unsigned int *)this + 2); /*0x67b31e*/
  result = 0; /*0x67b321*/
  if ( v3 <= 0 ) /*0x67b325*/
    return -1; /*0x67b33c*/
  for ( i = *(unsigned int **)((char *)this + 4); *i != *a2; ++i ) /*0x67b32b*/
  {
    if ( ++result >= v3 ) /*0x67b33a*/
      return -1; /*0x67b33a*/
  }
  return result; /*0x67b31a*/

}
} // namespace gamemd

// 0x67B350
namespace gamemd {
unsigned int TypeList_cptr_TerrainTypeClass::PointerToIndex(int a2)
{

  if ( *((unsigned char *)this + 12) ) /*0x67b350*/
    return (unsigned int)(a2 - *((unsigned int *)this + 1)) >> 2; /*0x67b365*/
  else
    return 0; /*0x67b357*/

}
} // namespace gamemd

// 0x67B3D0
namespace gamemd {
char TypeList_cptr_TerrainTypeClass::Remove(int a2, unsigned int * a3)
{

  unsigned int *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x67b3dc*/
  {
    *((unsigned char *)this + 12) = 0; /*0x67b3e2*/
    if ( a3 ) /*0x67b3e8*/
      v4 = a3; /*0x67b3fe*/
    else
      v4 = RA2_OPNEW(4 * a2); /*0x67b3fa*/
    *((unsigned char *)this + 12) = 1; /*0x67b402*/
    if ( !v4 ) /*0x67b406*/
      return 0; /*0x67b47a*/
    if ( *((unsigned int *)this + 1) ) /*0x67b408*/
    {
      v5 = *((unsigned int *)this + 2); /*0x67b40f*/
      if ( a2 < v5 ) /*0x67b414*/
        v5 = a2; /*0x67b416*/
      for ( i = 0; i < v5; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) ) /*0x67b41c*/
        ++i; /*0x67b421*/
      if ( *((unsigned char *)this + 13) ) /*0x67b42e*/
      {
        RA2_OPDEL(*((void **)this + 1)); /*0x67b439*/
        *((unsigned int *)this + 1) = 0; /*0x67b441*/
      }
    }
    *((unsigned int *)this + 1) = v4; /*0x67b44a*/
    *((unsigned int *)this + 2) = a2; /*0x67b452*/
    *((unsigned char *)this + 13) = a3 == 0; /*0x67b455*/
  }
  else
  {
    char TypeList_cptr_TerrainTypeClass::Remove( _DynamicVectorClass_PBVTerrainTypeClass *this, int a2, unsigned int *a3)
  }
  v7 = *((unsigned int *)this + 2); /*0x67b461*/
  if ( v7 < *((unsigned int *)this + 4) ) /*0x67b469*/
    *((unsigned int *)this + 4) = v7; /*0x67b46b*/
  return 1; /*0x67b46e*/

}
} // namespace gamemd

// 0x67B4D0
namespace gamemd {
int TypeList_cptr_TerrainTypeClass::GetSize(unsigned int * a2)
{

  int v2; // edx
  int result; // eax
  unsigned int *i; // ecx

  v2 = *((char *)this + 4); /*0x67b4d0*/
  result = 0; /*0x67b4d3*/
  if ( v2 <= 0 ) /*0x67b4d8*/
    return -1; /*0x67b4ef*/
  for ( i = (unsigned int *)*((char *)this + 1); *i != *a2; ++i ) /*0x67b4de*/
  {
    if ( ++result >= v2 ) /*0x67b4ed*/
      return -1; /*0x67b4ed*/
  }
  return result; /*0x67b4f2*/

}
} // namespace gamemd

// 0x67C010
namespace gamemd {
VectorClass_flat * TypeList_VoxelAnim::Constructor(unsigned int * Block, char a2)
{

  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x67c013*/
  *Block = &vt_VectorClass_VoxelAnimTypeClass_const; /*0x67c016*/
  if ( v3 && *((unsigned char *)Block + 13) ) /*0x67c020*/
  {
    RA2_OPDEL(v3); /*0x67c028*/
    *(Block + 1) = 0; /*0x67c030*/
  }
  *((unsigned char *)Block + 13) = 0; /*0x67c03b*/
  *(Block + 2) = 0; /*0x67c041*/
  if ( (Block & 1) != 0 ) /*0x67c048*/
    RA2_OPDEL(Block); /*0x67c04b*/
  return (VectorClass *)Block; /*0x67c055*/

}
} // namespace gamemd

// 0x67C100
namespace gamemd {
DynamicVector * TypeList_VoxelAnim::Constructor_0(unsigned int * Block, char a2)
{

  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x67c103*/
  *Block = &vt_VectorClass_SmudgeTypeClass_const; /*0x67c106*/
  if ( v3 && *((unsigned char *)Block + 13) ) /*0x67c110*/
  {
    RA2_OPDEL(v3); /*0x67c118*/
    *(Block + 1) = 0; /*0x67c120*/
  }
  *((unsigned char *)Block + 13) = 0; /*0x67c12b*/
  *(Block + 2) = 0; /*0x67c131*/
  if ( (Block & 1) != 0 ) /*0x67c138*/
    RA2_OPDEL(Block); /*0x67c13b*/
  return (DynamicVector *)Block; /*0x67c145*/

}
} // namespace gamemd

// 0x67C150
namespace gamemd {
VectorClass_flat * TypeList_cptr_TerrainTypeClass::Constructor(unsigned int * Block, char a2)
{

  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x67c153*/
  *Block = &vt_VectorClass_TerrainTypeClass_const; /*0x67c156*/
  if ( v3 && *((unsigned char *)Block + 13) ) /*0x67c160*/
  {
    RA2_OPDEL(v3); /*0x67c168*/
    *(Block + 1) = 0; /*0x67c170*/
  }
  *((unsigned char *)Block + 13) = 0; /*0x67c17b*/
  *(Block + 2) = 0; /*0x67c181*/
  if ( (Block & 1) != 0 ) /*0x67c188*/
    RA2_OPDEL(Block); /*0x67c18b*/
  return (VectorClass *)Block; /*0x67c195*/

}
} // namespace gamemd

// 0x67C1A0
namespace gamemd {
DynamicVector * TypeList_VoxelAnim::Constructor_1(unsigned int * Block, char a2)
{

  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x67c1a3*/
  *Block = &vt_VectorClass_TerrainTypeClass_const; /*0x67c1a6*/
  if ( v3 && *((unsigned char *)Block + 13) ) /*0x67c1b0*/
  {
    RA2_OPDEL(v3); /*0x67c1b8*/
    *(Block + 1) = 0; /*0x67c1c0*/
  }
  *((unsigned char *)Block + 13) = 0; /*0x67c1cb*/
  *(Block + 2) = 0; /*0x67c1d1*/
  if ( (Block & 1) != 0 ) /*0x67c1d8*/
    RA2_OPDEL(Block); /*0x67c1db*/
  return (DynamicVector *)Block; /*0x67c1e5*/

}
} // namespace gamemd

// 0x67C1F0
unsigned int * TypeList_flat::CopyVoxelAnim(VectorClass_flat * aP1)
{

  int v3; // eax
  int v4; // eax
  int v5; // ecx
  int v6; // eax

  *((unsigned int *)this + 1) = 0; /*0x67c1fd*/
  *((unsigned int *)this + 2) = 0; /*0x67c200*/
  *((unsigned char *)this + 12) = 1; /*0x67c203*/
  *((unsigned char *)this + 13) = 0; /*0x67c207*/
  *this = &vt_VectorClass_VoxelAnimTypeClass_const; /*0x67c20a*/
  if ( this != (unsigned int *)aP1 ) /*0x67c210*/
  {
    Vector::Cleanup2((int)this); /*0x67c212*/
    v3 = aP1->Capacity; /*0x67c218*/
    *((unsigned int *)this + 2) = v3; /*0x67c21d*/
    if ( v3 ) /*0x67c220*/
    {
      v4 = RA2_OPNEW(4 * v3); /*0x67c226*/
      *((unsigned int *)this + 1) = v4; /*0x67c230*/
      if ( v4 ) /*0x67c233*/
      {
        v5 = *((unsigned int *)this + 2); /*0x67c235*/
        v6 = 0; /*0x67c238*/
        *((unsigned char *)this + 13) = 1; /*0x67c23c*/
        if ( v5 > 0 ) /*0x67c240*/
        {
          do /*0x67c254*/
          {
            *(unsigned int *)(*((unsigned int *)this + 1) + 4 * v6) = *((unsigned int *)aP1->Items + v6); /*0x67c24b*/
            ++v6; /*0x67c251*/
          }
          while ( v6 < *((unsigned int *)this + 2) ); /*0x67c254*/
        }
      }
    }
    else
    {
      *((unsigned int *)this + 1) = 0; /*0x67c258*/
      *((unsigned char *)this + 13) = 0; /*0x67c25b*/
    }
  }
  *((unsigned int *)this + 4) = aP1[1].vtable0; /*0x67c261*/
  *((unsigned int *)this + 5) = aP1[1].Items; /*0x67c267*/
  *this = &vt_TypeList_VoxelAnimTypeClass_const; /*0x67c26a*/
  return this; /*0x67c272*/

}
// 0x717B70
namespace gamemd {
TypeList_flat * TypeList_cptr_ParticleSystemTypeClass::QueryInterface(unsigned int * Block, char a2)
{

  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x717b73*/
  *Block = &vt_VectorClass_ParticleSystemTypeClass_const; /*0x717b76*/
  if ( v3 && *((unsigned char *)Block + 13) ) /*0x717b80*/
  {
    RA2_OPDEL(v3); /*0x717b88*/
    *(Block + 1) = 0; /*0x717b90*/
  }
  *((unsigned char *)Block + 13) = 0; /*0x717b9b*/
  *(Block + 2) = 0; /*0x717ba1*/
  if ( (Block & 1) != 0 ) /*0x717ba8*/
    RA2_OPDEL(Block); /*0x717bab*/
  return (TypeList *)Block; /*0x717bb5*/

}
} // namespace gamemd

// 0x717C70
unsigned int * TypeList_flat::ParticleConstructor(int a2, int a3)
{

  *((unsigned int *)this + 1) = 0; /*0x717c79*/
  *((unsigned int *)this + 2) = a2; /*0x717c80*/
  *((unsigned char *)this + 12) = 1; /*0x717c83*/
  *((unsigned char *)this + 13) = 0; /*0x717c87*/
  *this = &vt_VectorClass_ParticleSystemTypeClass_const; /*0x717c8b*/
  if ( a2 ) /*0x717c91*/
  {
    if ( a3 ) /*0x717c99*/
    {
      *((unsigned int *)this + 1) = a3; /*0x717c9b*/
    }
    else
    {
      *((unsigned int *)this + 1) = RA2_OPNEW(4 * a2); /*0x717cac*/
      *((unsigned char *)this + 13) = 1; /*0x717caf*/
    }
  }
  *this = &vt_DynamicVectorClass_ParticleSystemTypeClass_const; /*0x717cb3*/
  *((unsigned int *)this + 5) = 10; /*0x717cb9*/
  *((unsigned int *)this + 4) = 0; /*0x717cc0*/
  return this; /*0x717cc9*/

}
// 0x717CD0
char TypeList_flat::PushBack(VectorClass_flat * aP1)
{

  int v3; // ecx
  int v4; // eax
  int v6; // eax
  int v7; // edx

  v3 = *((unsigned int *)this + 2); /*0x717cd3*/
  if ( *((unsigned int *)this + 4) >= v3 ) /*0x717cdb*/
  {
    if ( !*((unsigned char *)this + 13) && v3 ) /*0x717ce6*/
      return 0; /*0x717ce6*/
    v4 = *((unsigned int *)this + 5); /*0x717ce8*/
    if ( CapacityIncrement <= 0 || !(*((unsigned __int8 (**)(TypeList *, int, unsigned int))this->DynamicVectorClass + 2))( this, Capacity + CapacityIncrement, 0) )
      return 0; /*0x717cff*/
  }
  v6 = *((unsigned int *)this + 4); /*0x717d05*/
  v7 = *((unsigned int *)this + 1); /*0x717d08*/
  *((unsigned int *)this + 4) = v6 + 1; /*0x717d0e*/
  *(unsigned int *)(v7 + 4 * v6) = *(unsigned int *)aP1->vtable0; /*0x717d18*/
  return 1; /*0x717d01*/

}