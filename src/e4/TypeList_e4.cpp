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

// 0x477840
void TypeList::ddtor()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall TypeList::_vt03(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x477846*/
  this->Count = 0; /*0x477849*/
  if ( v2 && this->IsAllocated ) /*0x477850*/
  {
    __3_YAXPAX_Z(v2); /*0x477856*/
    this->Items = 0; /*0x47785e*/
  }
  this->IsAllocated = 0; /*0x477861*/
  this->Capacity = 0; /*0x477864*/
}
}

// 0x477870
unsigned int TypeList::GetCapacity(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
unsigned int __thiscall TypeList::_vt05(int this, int a2)
{
  if ( this->IsInitialized ) /*0x477870*/
    return (unsigned int)(a2 - this->Items) >> 2; /*0x477885*/
  else
    return 0; /*0x477877*/
}
}

// 0x477990
TypeList * TypeList::QueryInterface(unsigned int * Block, char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
TypeList *__thiscall TypeList::QueryInterface(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x477993*/
  *Block = &VectorClass<int>::`vftable'; /*0x477996*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x4779a0*/
  {
    __3_YAXPAX_Z(v3); /*0x4779a8*/
    *(Block + 1) = 0; /*0x4779b0*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x4779bb*/
  *(Block + 2) = 0; /*0x4779c1*/
  if ( (a2 & 1) != 0 ) /*0x4779c8*/
    __3_YAXPAX_Z(Block); /*0x4779cb*/
  return (TypeList *)Block; /*0x4779d5*/
}
}

// 0x477F10
int TypeList::GetSize(unsigned int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall TypeList::_vt04(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = *(this + 4); /*0x477f10*/
  result = 0; /*0x477f13*/
  if ( v2 <= 0 ) /*0x477f18*/
    return -1; /*0x477f2f*/
  for ( i = (_DWORD *)*(this + 1); *i != *a2; ++i ) /*0x477f1e*/
  {
    if ( ++result >= v2 ) /*0x477f2d*/
      return -1; /*0x477f2d*/
  }
  return result; /*0x477f32*/
}
}

// 0x478720
unsigned int * TypeList::Copy(unsigned int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall TypeList_Copy(_DWORD *this, _DWORD *a2)
{
  int v3; // eax
  void *v4; // eax
  int v5; // ecx
  int v6; // eax

  if ( this == a2 ) /*0x47872a*/
    return this; /*0x47872a*/
  (*(void (__thiscall **)(_DWORD *))(*this + 12))(this); /*0x47872e*/
  v3 = a2[2]; /*0x478731*/
  *(this + 2) = v3; /*0x478736*/
  if ( !v3 ) /*0x478739*/
  {
    *(this + 1) = 0; /*0x47877a*/
    this->IsAllocated = 0; /*0x478781*/
    return this; /*0x478785*/
  }
  v4 = __2_YAPAXI_Z(4 * v3); /*0x478743*/
  *(this + 1) = v4; /*0x47874b*/
  if ( !v4 ) /*0x478750*/
    return this; /*0x478750*/
  v5 = *(this + 2); /*0x478752*/
  v6 = 0; /*0x478755*/
  this->IsAllocated = 1; /*0x478759*/
  if ( v5 <= 0 ) /*0x47875d*/
    return this; /*0x47875d*/
  do /*0x478771*/
  {
    *(_DWORD *)(*(this + 1) + 4 * v6) = *(_DWORD *)(a2[1] + 4 * v6); /*0x478768*/
    ++v6; /*0x47876e*/
  }
  while ( v6 < *(this + 2) ); /*0x478771*/
  return this; /*0x478775*/
}
}

// 0x478790
unsigned int * TypeList::TechnoTypeConstructor(int a2, int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall TypeList_TechnoType_Constructor(_DWORD *this, int a2, int a3)
{
  *(this + 1) = 0; /*0x47879b*/
  *(this + 2) = a2; /*0x47879e*/
  this->IsInitialized = 1; /*0x4787a1*/
  this->IsAllocated = 0; /*0x4787a5*/
  *this = &VectorClass<TechnoTypeClass *>::`vftable'; /*0x4787a8*/
  if ( a2 ) /*0x4787ae*/
  {
    if ( a3 ) /*0x4787b6*/
    {
      *(this + 1) = a3; /*0x4787b8*/
      return this; /*0x4787be*/
    }
    *(this + 1) = __2_YAPAXI_Z(4 * a2); /*0x4787cd*/
    this->IsAllocated = 1; /*0x4787d0*/
  }
  return this; /*0x4787bd*/
}
}

// 0x513740
unsigned int * TypeList::CopyConstructor(VectorClass * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall TypeList::CopyConstructor(_DWORD *this, VectorClass *aP1)
{
  void *v3; // eax
  int v4; // eax
  int v5; // ecx
  int v6; // eax

  *(this + 1) = 0; /*0x51374d*/
  *(this + 2) = 0; /*0x513750*/
  this->IsInitialized = 1; /*0x513753*/
  this->IsAllocated = 0; /*0x513757*/
  *this = &VectorClass<UnitTypeClass const *>::`vftable'; /*0x51375a*/
  if ( this != (_DWORD *)aP1 ) /*0x513760*/
  {
    Vector::Destructor((int)this); /*0x513762*/
    v3 = aP1->field_8; /*0x513768*/
    *(this + 2) = v3; /*0x51376d*/
    if ( v3 ) /*0x513770*/
    {
      v4 = __2_YAPAXI_Z(4 * (_DWORD)v3); /*0x513776*/
      *(this + 1) = v4; /*0x513780*/
      if ( v4 ) /*0x513783*/
      {
        v5 = *(this + 2); /*0x513785*/
        v6 = 0; /*0x513788*/
        this->IsAllocated = 1; /*0x51378c*/
        if ( v5 > 0 ) /*0x513790*/
        {
          do /*0x5137a4*/
          {
            *(_DWORD *)(*(this + 1) + 4 * v6) = *(_DWORD *)(*(_DWORD *)&aP1->field_1[3] + 4 * v6); /*0x51379b*/
            ++v6; /*0x5137a1*/
          }
          while ( v6 < *(this + 2) ); /*0x5137a4*/
        }
      }
    }
    else
    {
      *(this + 1) = 0; /*0x5137a8*/
      this->IsAllocated = 0; /*0x5137ab*/
    }
  }
  *(this + 4) = aP1->field_10; /*0x5137b1*/
  *(this + 5) = aP1->field_14; /*0x5137b7*/
  *this = &TypeList<UnitTypeClass const *>::`vftable'; /*0x5137ba*/
  return this; /*0x5137c2*/
}
}

// 0x5255F0
unsigned int * TypeList::AnimTypeCopy(VectorClass * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall TypeList::AnimTypeCopy(_DWORD *this, VectorClass *aP1)
{
  void *v3; // eax
  int v4; // eax
  int v5; // ecx
  int v6; // eax

  *(this + 1) = 0; /*0x5255fd*/
  *(this + 2) = 0; /*0x525600*/
  this->IsInitialized = 1; /*0x525603*/
  this->IsAllocated = 0; /*0x525607*/
  *this = &VectorClass<AnimTypeClass const *>::`vftable'; /*0x52560a*/
  if ( this != (_DWORD *)aP1 ) /*0x525610*/
  {
    DynamicVectorClass::Destroy_Alt((int)this); /*0x525612*/
    v3 = aP1->field_8; /*0x525618*/
    *(this + 2) = v3; /*0x52561d*/
    if ( v3 ) /*0x525620*/
    {
      v4 = __2_YAPAXI_Z(4 * (_DWORD)v3); /*0x525626*/
      *(this + 1) = v4; /*0x525630*/
      if ( v4 ) /*0x525633*/
      {
        v5 = *(this + 2); /*0x525635*/
        v6 = 0; /*0x525638*/
        this->IsAllocated = 1; /*0x52563c*/
        if ( v5 > 0 ) /*0x525640*/
        {
          do /*0x525654*/
          {
            *(_DWORD *)(*(this + 1) + 4 * v6) = *(_DWORD *)(*(_DWORD *)&aP1->field_1[3] + 4 * v6); /*0x52564b*/
            ++v6; /*0x525651*/
          }
          while ( v6 < *(this + 2) ); /*0x525654*/
        }
      }
    }
    else
    {
      *(this + 1) = 0; /*0x525658*/
      this->IsAllocated = 0; /*0x52565b*/
    }
  }
  *(this + 4) = aP1->field_10; /*0x525661*/
  *(this + 5) = aP1->field_14; /*0x525667*/
  *this = &TypeList<AnimTypeClass const *>::`vftable'; /*0x52566a*/
  return this; /*0x525672*/
}
}

// 0x5AC400
CCINIClass * TypeList::BuildingTypeConstructor()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
CCINIClass *__thiscall TypeList::BuildingTypeConstructor(_DWORD *this)
{
  *(this + 1) = 0; /*0x5ac404*/
  *(this + 2) = 0; /*0x5ac407*/
  this->IsInitialized = 1; /*0x5ac40a*/
  this->IsAllocated = 0; /*0x5ac40e*/
  *(this + 5) = 10; /*0x5ac411*/
  *(this + 4) = 0; /*0x5ac418*/
  *this = &TypeList<BuildingTypeClass const *>::`vftable'; /*0x5ac41b*/
  return (CCINIClass *)this; /*0x5ac421*/
}
}

// 0x5AD660
unsigned int * TypeList::BuildingTypeCopy(VectorClass * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall TypeList::BuildingTypeCopy(_DWORD *this, VectorClass *aP1)
{
  void *v3; // eax
  int v4; // eax
  int v5; // ecx
  int v6; // eax

  *(this + 1) = 0; /*0x5ad66d*/
  *(this + 2) = 0; /*0x5ad670*/
  this->IsInitialized = 1; /*0x5ad673*/
  this->IsAllocated = 0; /*0x5ad677*/
  *this = &VectorClass<BuildingTypeClass const *>::`vftable'; /*0x5ad67a*/
  if ( this != (_DWORD *)aP1 ) /*0x5ad680*/
  {
    DynamicVectorClass::Destroy((int)this); /*0x5ad682*/
    v3 = aP1->field_8; /*0x5ad688*/
    *(this + 2) = v3; /*0x5ad68d*/
    if ( v3 ) /*0x5ad690*/
    {
      v4 = __2_YAPAXI_Z(4 * (_DWORD)v3); /*0x5ad696*/
      *(this + 1) = v4; /*0x5ad6a0*/
      if ( v4 ) /*0x5ad6a3*/
      {
        v5 = *(this + 2); /*0x5ad6a5*/
        v6 = 0; /*0x5ad6a8*/
        this->IsAllocated = 1; /*0x5ad6ac*/
        if ( v5 > 0 ) /*0x5ad6b0*/
        {
          do /*0x5ad6c4*/
          {
            *(_DWORD *)(*(this + 1) + 4 * v6) = *(_DWORD *)(*(_DWORD *)&aP1->field_1[3] + 4 * v6); /*0x5ad6bb*/
            ++v6; /*0x5ad6c1*/
          }
          while ( v6 < *(this + 2) ); /*0x5ad6c4*/
        }
      }
    }
    else
    {
      *(this + 1) = 0; /*0x5ad6c8*/
      this->IsAllocated = 0; /*0x5ad6cb*/
    }
  }
  *(this + 4) = aP1->field_10; /*0x5ad6d1*/
  *(this + 5) = aP1->field_14; /*0x5ad6d7*/
  *this = &TypeList<BuildingTypeClass const *>::`vftable'; /*0x5ad6da*/
  return this; /*0x5ad6e2*/
}
}

// 0x67A030
void TypeList::InfantryCleanup()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall sub_67A030(_DWORD *this)
{
  void *v2; // eax

  v2 = (void *)*(this + 1); /*0x67a036*/
  *this = &VectorClass<InfantryTypeClass const *>::`vftable'; /*0x67a039*/
  if ( v2 && this->IsAllocated ) /*0x67a043*/
  {
    __3_YAXPAX_Z(v2); /*0x67a049*/
    *(this + 1) = 0; /*0x67a051*/
  }
  this->IsAllocated = 0; /*0x67a054*/
  *(this + 2) = 0; /*0x67a057*/
}
}

// 0x67A090
int * TypeList::CopyFull(VectorClass * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int *__thiscall TypeList::CopyFull(int *this, VectorClass *aP1)
{
  int v3; // eax
  int v4; // eax
  int v5; // ecx
  int v6; // eax

  if ( this != (int *)aP1 ) /*0x67a09a*/
  {
    (*(void (__thiscall **)(int *))(*this + 12))(this); /*0x67a09e*/
    v3 = (int)aP1->field_8; /*0x67a0a1*/
    *(this + 2) = v3; /*0x67a0a6*/
    if ( v3 ) /*0x67a0a9*/
    {
      v4 = __2_YAPAXI_Z(4 * v3); /*0x67a0b3*/
      *(this + 1) = v4; /*0x67a0bb*/
      if ( v4 ) /*0x67a0c0*/
      {
        v5 = *(this + 2); /*0x67a0c2*/
        v6 = 0; /*0x67a0c5*/
        this->IsAllocated = 1; /*0x67a0c9*/
        if ( v5 > 0 ) /*0x67a0cd*/
        {
          do /*0x67a0e1*/
          {
            *(_DWORD *)(*(this + 1) + 4 * v6) = *(_DWORD *)(*(_DWORD *)&aP1->field_1[3] + 4 * v6); /*0x67a0d8*/
            ++v6; /*0x67a0de*/
          }
          while ( v6 < *(this + 2) ); /*0x67a0e1*/
        }
      }
    }
    else
    {
      *(this + 1) = 0; /*0x67a0e5*/
      this->IsAllocated = 0; /*0x67a0ec*/
    }
  }
  *(this + 4) = (int)aP1->field_10; /*0x67a0f3*/
  *(this + 5) = aP1->field_14; /*0x67a0f9*/
  *(this + 6) = *(_DWORD *)aP1->__pad_18; /*0x67a0ff*/
  return this; /*0x67a104*/
}
}

// 0x67A110
int * TypeList::CopyAircraft(VectorClass * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int *__thiscall TypeList::CopyAircraft(int *this, VectorClass *aP1)
{
  int v3; // eax
  int v4; // eax
  int v5; // ecx
  int v6; // eax

  if ( this != (int *)aP1 ) /*0x67a11a*/
  {
    (*(void (__thiscall **)(int *))(*this + 12))(this); /*0x67a11e*/
    v3 = (int)aP1->field_8; /*0x67a121*/
    *(this + 2) = v3; /*0x67a126*/
    if ( v3 ) /*0x67a129*/
    {
      v4 = __2_YAPAXI_Z(4 * v3); /*0x67a133*/
      *(this + 1) = v4; /*0x67a13b*/
      if ( v4 ) /*0x67a140*/
      {
        v5 = *(this + 2); /*0x67a142*/
        v6 = 0; /*0x67a145*/
        this->IsAllocated = 1; /*0x67a149*/
        if ( v5 > 0 ) /*0x67a14d*/
        {
          do /*0x67a161*/
          {
            *(_DWORD *)(*(this + 1) + 4 * v6) = *(_DWORD *)(*(_DWORD *)&aP1->field_1[3] + 4 * v6); /*0x67a158*/
            ++v6; /*0x67a15e*/
          }
          while ( v6 < *(this + 2) ); /*0x67a161*/
        }
      }
    }
    else
    {
      *(this + 1) = 0; /*0x67a165*/
      this->IsAllocated = 0; /*0x67a16c*/
    }
  }
  *(this + 4) = (int)aP1->field_10; /*0x67a173*/
  *(this + 5) = aP1->field_14; /*0x67a179*/
  *(this + 6) = *(_DWORD *)aP1->__pad_18; /*0x67a17f*/
  return this; /*0x67a184*/
}
}

// 0x67A290
int * TypeList::CopyInfantry(CCINIClass * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int *__thiscall TypeList::CopyInfantry(int *this, CCINIClass *aP1)
{
  int v3; // eax
  int v4; // eax
  int v5; // ecx
  int v6; // eax

  if ( this != (int *)aP1 ) /*0x67a29a*/
  {
    (*(void (__thiscall **)(int *))(*this + 12))(this); /*0x67a29e*/
    v3 = aP1->headNode[1]; /*0x67a2a1*/
    *(this + 2) = v3; /*0x67a2a6*/
    if ( v3 ) /*0x67a2a9*/
    {
      v4 = __2_YAPAXI_Z(4 * v3); /*0x67a2b3*/
      *(this + 1) = v4; /*0x67a2bb*/
      if ( v4 ) /*0x67a2c0*/
      {
        v5 = *(this + 2); /*0x67a2c2*/
        v6 = 0; /*0x67a2c5*/
        this->IsAllocated = 1; /*0x67a2c9*/
        if ( v5 > 0 ) /*0x67a2cd*/
        {
          do /*0x67a2e1*/
          {
            *(_DWORD *)(*(this + 1) + 4 * v6) = *(_DWORD *)(aP1->headNode[0] + 4 * v6); /*0x67a2d8*/
            ++v6; /*0x67a2de*/
          }
          while ( v6 < *(this + 2) ); /*0x67a2e1*/
        }
      }
    }
    else
    {
      *(this + 1) = 0; /*0x67a2e5*/
      this->IsAllocated = 0; /*0x67a2ec*/
    }
  }
  *(this + 4) = aP1->sectionHead[0]; /*0x67a2f3*/
  *(this + 5) = aP1->sectionHead[1]; /*0x67a2f9*/
  *(this + 6) = aP1->sectionHead[2]; /*0x67a2ff*/
  return this; /*0x67a304*/
}
}

// 0x67A390
CCINIClass * TypeList::VoxelAnimConstructor()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
CCINIClass *__thiscall TypeList::VoxelAnimConstructor(_DWORD *this)
{
  *(this + 1) = 0; /*0x67a394*/
  *(this + 2) = 0; /*0x67a397*/
  this->IsInitialized = 1; /*0x67a39a*/
  this->IsAllocated = 0; /*0x67a39e*/
  *(this + 5) = 10; /*0x67a3a1*/
  *(this + 4) = 0; /*0x67a3a8*/
  *this = &TypeList<VoxelAnimTypeClass const *>::`vftable'; /*0x67a3ab*/
  return (CCINIClass *)this; /*0x67a3b1*/
}
}

// 0x67A4F0
DynamicVector * TypeList::Construct()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
DynamicVector *__thiscall TypeList::Construct(_DWORD *this)
{
  *(this + 1) = 0; /*0x67a4f4*/
  *(this + 2) = 0; /*0x67a4f7*/
  this->IsInitialized = 1; /*0x67a4fa*/
  this->IsAllocated = 0; /*0x67a4fe*/
  *(this + 5) = 10; /*0x67a501*/
  *(this + 4) = 0; /*0x67a508*/
  *this = &TypeList<int>::`vftable'; /*0x67a50b*/
  return (DynamicVector *)this; /*0x67a511*/
}
}

// 0x67A600
CCINIClass * TypeList::ConstructSmudge()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
CCINIClass *__thiscall TypeList::ConstructSmudge(_DWORD *this)
{
  *(this + 1) = 0; /*0x67a604*/
  *(this + 2) = 0; /*0x67a607*/
  this->IsInitialized = 1; /*0x67a60a*/
  this->IsAllocated = 0; /*0x67a60e*/
  *(this + 5) = 10; /*0x67a611*/
  *(this + 4) = 0; /*0x67a618*/
  *this = &TypeList<SmudgeTypeClass const *>::`vftable'; /*0x67a61b*/
  return (CCINIClass *)this; /*0x67a621*/
}
}

// 0x67A6D0
int TypeList::Clear(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall TypeList::_vt06(_DWORD *this, int a2)
{
  return *(_DWORD *)(*(this + 1) + 4 * a2); /*0x67a6da*/
}
}

// 0x67A820
unsigned int * TypeList::InfantryConstructor()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall sub_67A820(_DWORD *this)
{
  *(this + 1) = 0; /*0x67a824*/
  *(this + 2) = 0; /*0x67a827*/
  this->IsInitialized = 1; /*0x67a82a*/
  this->IsAllocated = 0; /*0x67a82e*/
  *(this + 5) = 10; /*0x67a831*/
  *(this + 4) = 0; /*0x67a838*/
  *this = &TypeList<InfantryTypeClass const *>::`vftable'; /*0x67a83b*/
  return this; /*0x67a841*/
}
}

// 0x67AE70
char TypeList::AddRef(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall TypeList::_vt01(int *this, int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = *(this + 2); /*0x67ae72*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x67ae7d*/
  {
    v3 = 0; /*0x67ae7f*/
    if ( v2 <= 0 ) /*0x67ae83*/
      return 1; /*0x67aea3*/
    v4 = (_DWORD *)*(this + 1); /*0x67ae85*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x67ae8b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x67ae94*/
    {
      ++v3; /*0x67ae96*/
      ++v4; /*0x67ae97*/
      if ( v3 >= v2 ) /*0x67ae9c*/
        return 1; /*0x67ae9c*/
    }
  }
  return 0; /*0x67ae9e*/
}
}

// 0x67B050
char TypeList::Release(int a2, unsigned int * a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall TypeList::_vt02(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x67b05c*/
  {
    this->IsInitialized = 0; /*0x67b062*/
    if ( a3 ) /*0x67b068*/
      v4 = a3; /*0x67b07e*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x67b07a*/
    this->IsInitialized = 1; /*0x67b082*/
    if ( !v4 ) /*0x67b086*/
      return 0; /*0x67b0fa*/
    if ( this->Items ) /*0x67b088*/
    {
      v5 = this->Capacity; /*0x67b08f*/
      if ( a2 < v5 ) /*0x67b094*/
        v5 = a2; /*0x67b096*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x67b09c*/
        ++i; /*0x67b0a1*/
      if ( this->IsAllocated ) /*0x67b0ae*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x67b0b9*/
        this->Items = 0; /*0x67b0c1*/
      }
    }
    this->Items = v4; /*0x67b0ca*/
    this->Capacity = a2; /*0x67b0d2*/
    this->IsAllocated = a3 == 0; /*0x67b0d5*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(*(_DWORD *)this + 12))(this); /*0x67b0de*/
  }
  v7 = this->Capacity; /*0x67b0e1*/
  if ( v7 < this->Count ) /*0x67b0e9*/
    this->Count = v7; /*0x67b0eb*/
  return 1; /*0x67b0ee*/
}
}

// 0x67C1F0
unsigned int * TypeList::CopyVoxelAnim(VectorClass * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall TypeList::CopyVoxelAnim(_DWORD *this, VectorClass *aP1)
{
  void *v3; // eax
  int v4; // eax
  int v5; // ecx
  int v6; // eax

  *(this + 1) = 0; /*0x67c1fd*/
  *(this + 2) = 0; /*0x67c200*/
  this->IsInitialized = 1; /*0x67c203*/
  this->IsAllocated = 0; /*0x67c207*/
  *this = &VectorClass<VoxelAnimTypeClass const *>::`vftable'; /*0x67c20a*/
  if ( this != (_DWORD *)aP1 ) /*0x67c210*/
  {
    Vector::Cleanup2((int)this); /*0x67c212*/
    v3 = aP1->field_8; /*0x67c218*/
    *(this + 2) = v3; /*0x67c21d*/
    if ( v3 ) /*0x67c220*/
    {
      v4 = __2_YAPAXI_Z(4 * (_DWORD)v3); /*0x67c226*/
      *(this + 1) = v4; /*0x67c230*/
      if ( v4 ) /*0x67c233*/
      {
        v5 = *(this + 2); /*0x67c235*/
        v6 = 0; /*0x67c238*/
        this->IsAllocated = 1; /*0x67c23c*/
        if ( v5 > 0 ) /*0x67c240*/
        {
          do /*0x67c254*/
          {
            *(_DWORD *)(*(this + 1) + 4 * v6) = *(_DWORD *)(*(_DWORD *)&aP1->field_1[3] + 4 * v6); /*0x67c24b*/
            ++v6; /*0x67c251*/
          }
          while ( v6 < *(this + 2) ); /*0x67c254*/
        }
      }
    }
    else
    {
      *(this + 1) = 0; /*0x67c258*/
      this->IsAllocated = 0; /*0x67c25b*/
    }
  }
  *(this + 4) = aP1->field_10; /*0x67c261*/
  *(this + 5) = aP1->field_14; /*0x67c267*/
  *this = &TypeList<VoxelAnimTypeClass const *>::`vftable'; /*0x67c26a*/
  return this; /*0x67c272*/
}
}

// 0x717C70
unsigned int * TypeList::ParticleConstructor(int a2, int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall TypeList_Particle_Constructor(_DWORD *this, int a2, int a3)
{
  *(this + 1) = 0; /*0x717c79*/
  *(this + 2) = a2; /*0x717c80*/
  this->IsInitialized = 1; /*0x717c83*/
  this->IsAllocated = 0; /*0x717c87*/
  *this = &VectorClass<ParticleSystemTypeClass const *>::`vftable'; /*0x717c8b*/
  if ( a2 ) /*0x717c91*/
  {
    if ( a3 ) /*0x717c99*/
    {
      *(this + 1) = a3; /*0x717c9b*/
    }
    else
    {
      *(this + 1) = __2_YAPAXI_Z(4 * a2); /*0x717cac*/
      this->IsAllocated = 1; /*0x717caf*/
    }
  }
  *this = &DynamicVectorClass<ParticleSystemTypeClass const *>::`vftable'; /*0x717cb3*/
  *(this + 5) = 10; /*0x717cb9*/
  *(this + 4) = 0; /*0x717cc0*/
  return this; /*0x717cc9*/
}
}

// 0x717CD0
char TypeList::PushBack(VectorClass * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall TypeList::PushBack(_DWORD *this, VectorClass *aP1)
{
  int v3; // ecx
  int v4; // eax
  int v6; // eax
  int v7; // edx

  v3 = *(this + 2); /*0x717cd3*/
  if ( *(this + 4) >= v3 ) /*0x717cdb*/
  {
    if ( !this->IsAllocated && v3 ) /*0x717ce6*/
      return 0; /*0x717ce6*/
    v4 = *(this + 5); /*0x717ce8*/
    if ( v4 <= 0 || !(*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*this + 8))(this, v3 + v4, 0) ) /*0x717cf8*/
      return 0; /*0x717cff*/
  }
  v6 = *(this + 4); /*0x717d05*/
  v7 = *(this + 1); /*0x717d08*/
  *(this + 4) = v6 + 1; /*0x717d0e*/
  *(_DWORD *)(v7 + 4 * v6) = *(_DWORD *)aP1->__pad_0; /*0x717d18*/
  return 1; /*0x717d01*/
}
}

// 0x5AC650
namespace gamemd {
TypeList * TypeList_BuildingType::Add(unsigned int * Block, char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
TypeList *__thiscall TypeList_BuildingType::Add(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x5ac653*/
  *Block = &VectorClass<BuildingTypeClass const *>::`vftable'; /*0x5ac656*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x5ac660*/
  {
    __3_YAXPAX_Z(v3); /*0x5ac668*/
    *(Block + 1) = 0; /*0x5ac670*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x5ac67b*/
  *(Block + 2) = 0; /*0x5ac681*/
  if ( (a2 & 1) != 0 ) /*0x5ac688*/
    __3_YAXPAX_Z(Block); /*0x5ac68b*/
  return (TypeList *)Block; /*0x5ac695*/
}
}
} // namespace gamemd

// 0x459F90
namespace gamemd {
void TypeList_cptr_ParticleSystemTypeClass::GetClassIdentifier()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall TypeList_cptr_ParticleSystemTypeClass::_vt03(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x459f96*/
  this->Count = 0; /*0x459f99*/
  if ( v2 && this->IsAllocated ) /*0x459fa0*/
  {
    __3_YAXPAX_Z(v2); /*0x459fa6*/
    this->Items = 0; /*0x459fae*/
  }
  this->IsAllocated = 0; /*0x459fb1*/
  this->Capacity = 0; /*0x459fb4*/
}
}
} // namespace gamemd

// 0x459FC0
namespace gamemd {
unsigned int TypeList_cptr_ParticleSystemTypeClass::LoadTypeData(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
unsigned int __thiscall TypeList_cptr_ParticleSystemTypeClass::_vt05(int this, int a2)
{
  if ( this->IsInitialized ) /*0x459fc0*/
    return (unsigned int)(a2 - this->Items) >> 2; /*0x459fd5*/
  else
    return 0; /*0x459fc7*/
}
}
} // namespace gamemd

// 0x45A300
namespace gamemd {
char TypeList_cptr_ParticleSystemTypeClass::Add(int a2, unsigned int * a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall TypeList_cptr_ParticleSystemTypeClass::Add(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x45a30c*/
  {
    this->IsInitialized = 0; /*0x45a312*/
    if ( a3 ) /*0x45a318*/
      v4 = a3; /*0x45a32e*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x45a32a*/
    this->IsInitialized = 1; /*0x45a332*/
    if ( !v4 ) /*0x45a336*/
      return 0; /*0x45a3aa*/
    if ( this->Items ) /*0x45a338*/
    {
      v5 = this->Capacity; /*0x45a33f*/
      if ( a2 < v5 ) /*0x45a344*/
        v5 = a2; /*0x45a346*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x45a34c*/
        ++i; /*0x45a351*/
      if ( this->IsAllocated ) /*0x45a35e*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x45a369*/
        this->Items = 0; /*0x45a371*/
      }
    }
    this->Items = v4; /*0x45a37a*/
    this->Capacity = a2; /*0x45a382*/
    this->IsAllocated = a3 == 0; /*0x45a385*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(*(_DWORD *)this + 12))(this); /*0x45a38e*/
  }
  v7 = this->Capacity; /*0x45a391*/
  if ( v7 < this->Count ) /*0x45a399*/
    this->Count = v7; /*0x45a39b*/
  return 1; /*0x45a39e*/
}
}
} // namespace gamemd

// 0x45A3B0
namespace gamemd {
int TypeList_cptr_ParticleSystemTypeClass::Remove(unsigned int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall TypeList_cptr_ParticleSystemTypeClass::Remove(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = *(this + 4); /*0x45a3b0*/
  result = 0; /*0x45a3b3*/
  if ( v2 <= 0 ) /*0x45a3b8*/
    return -1; /*0x45a3cf*/
  for ( i = (_DWORD *)*(this + 1); *i != *a2; ++i ) /*0x45a3be*/
  {
    if ( ++result >= v2 ) /*0x45a3cd*/
      return -1; /*0x45a3cd*/
  }
  return result; /*0x45a3d2*/
}
}
} // namespace gamemd

// 0x717B70
namespace gamemd {
TypeList * TypeList_cptr_ParticleSystemTypeClass::QueryInterface(unsigned int * Block, char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
TypeList *__thiscall TypeList_cptr_ParticleSystemTypeClass::QueryInterface(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x717b73*/
  *Block = &VectorClass<ParticleSystemTypeClass const *>::`vftable'; /*0x717b76*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x717b80*/
  {
    __3_YAXPAX_Z(v3); /*0x717b88*/
    *(Block + 1) = 0; /*0x717b90*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x717b9b*/
  *(Block + 2) = 0; /*0x717ba1*/
  if ( (a2 & 1) != 0 ) /*0x717ba8*/
    __3_YAXPAX_Z(Block); /*0x717bab*/
  return (TypeList *)Block; /*0x717bb5*/
}
}
} // namespace gamemd

// 0x67A930
namespace gamemd {
void TypeList_cptr_TerrainTypeClass::GetClassIdentifier()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall TypeList_cptr_TerrainTypeClass::_vt03(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x67a936*/
  this->Count = 0; /*0x67a939*/
  if ( v2 && this->IsAllocated ) /*0x67a940*/
  {
    __3_YAXPAX_Z(v2); /*0x67a946*/
    this->Items = 0; /*0x67a94e*/
  }
  this->IsAllocated = 0; /*0x67a951*/
  this->Capacity = 0; /*0x67a954*/
}
}
} // namespace gamemd

// 0x67A960
namespace gamemd {
unsigned int TypeList_cptr_TerrainTypeClass::GetIndex(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
unsigned int __thiscall TypeList_cptr_TerrainTypeClass::GetIndex(int this, int a2)
{
  if ( this->IsInitialized ) /*0x67a960*/
    return (unsigned int)(a2 - this->Items) >> 2; /*0x67a975*/
  else
    return 0; /*0x67a967*/
}
}
} // namespace gamemd

// 0x67A980
namespace gamemd {
int TypeList_cptr_TerrainTypeClass::SaveToINI(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall TypeList_cptr_TerrainTypeClass::_vt06(_DWORD *this, int a2)
{
  return *(_DWORD *)(*(this + 1) + 4 * a2); /*0x67a98a*/
}
}
} // namespace gamemd

// 0x67AA30
namespace gamemd {
TypeList * TypeList_cptr_TerrainTypeClass::Add(unsigned int * Block, char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
TypeList *__thiscall TypeList_cptr_TerrainTypeClass::Add(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x67aa33*/
  *Block = &VectorClass<TerrainTypeClass const *>::`vftable'; /*0x67aa36*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x67aa40*/
  {
    __3_YAXPAX_Z(v3); /*0x67aa48*/
    *(Block + 1) = 0; /*0x67aa50*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x67aa5b*/
  *(Block + 2) = 0; /*0x67aa61*/
  if ( (a2 & 1) != 0 ) /*0x67aa68*/
    __3_YAXPAX_Z(Block); /*0x67aa6b*/
  return (TypeList *)Block; /*0x67aa75*/
}
}
} // namespace gamemd

// 0x67B1F0
namespace gamemd {
char TypeList_cptr_TerrainTypeClass::AddRef(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall TypeList_cptr_TerrainTypeClass::_vt01(int *this, int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = *(this + 2); /*0x67b1f2*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x67b1fd*/
  {
    v3 = 0; /*0x67b1ff*/
    if ( v2 <= 0 ) /*0x67b203*/
      return 1; /*0x67b223*/
    v4 = (_DWORD *)*(this + 1); /*0x67b205*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x67b20b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x67b214*/
    {
      ++v3; /*0x67b216*/
      ++v4; /*0x67b217*/
      if ( v3 >= v2 ) /*0x67b21c*/
        return 1; /*0x67b21c*/
    }
  }
  return 0; /*0x67b21e*/
}
}
} // namespace gamemd

// 0x67B230
namespace gamemd {
char TypeList_cptr_TerrainTypeClass::SetCapacity(int a2, unsigned int * a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall TypeList_cptr_TerrainTypeClass::sub_67B230(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x67b23c*/
  {
    this->IsInitialized = 0; /*0x67b246*/
    if ( a3 ) /*0x67b24c*/
      v4 = a3; /*0x67b262*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x67b25e*/
    this->IsInitialized = 1; /*0x67b266*/
    if ( v4 ) /*0x67b26a*/
    {
      if ( this->Items ) /*0x67b275*/
      {
        v6 = this->Capacity; /*0x67b27c*/
        if ( a2 < v6 ) /*0x67b281*/
          v6 = a2; /*0x67b283*/
        for ( i = 0; i < v6; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x67b289*/
          ++i; /*0x67b28e*/
        if ( this->IsAllocated ) /*0x67b29b*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x67b2a6*/
          this->Items = 0; /*0x67b2ae*/
        }
      }
      this->Items = v4; /*0x67b2b7*/
      this->Capacity = a2; /*0x67b2bf*/
      this->IsAllocated = a3 == 0; /*0x67b2c2*/
      return 1; /*0x67b2c8*/
    }
    else
    {
      return 0; /*0x67b26f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(*(_DWORD *)this + 12))(this); /*0x67b2d2*/
    return 1; /*0x67b2d8*/
  }
}
}
} // namespace gamemd

// 0x67B2E0
namespace gamemd {
void TypeList_cptr_TerrainTypeClass::TryFreeAndClear()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall TypeList_cptr_TerrainTypeClass::sub_67B2E0(int this)
{
  if ( this->Items && this->IsAllocated ) /*0x67b2ed*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x67b2f3*/
    this->Items = 0; /*0x67b2fb*/
  }
  this->IsAllocated = 0; /*0x67b2fe*/
  this->Capacity = 0; /*0x67b301*/
}
}
} // namespace gamemd

// 0x67B310
namespace gamemd {
int TypeList_cptr_TerrainTypeClass::IndexOf(unsigned int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall TypeList_cptr_TerrainTypeClass::sub_67B310(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !this->IsInitialized ) /*0x67b310*/
    return 0; /*0x67b318*/
  v3 = this->Capacity; /*0x67b31e*/
  result = 0; /*0x67b321*/
  if ( v3 <= 0 ) /*0x67b325*/
    return -1; /*0x67b33c*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2; ++i ) /*0x67b32b*/
  {
    if ( ++result >= v3 ) /*0x67b33a*/
      return -1; /*0x67b33a*/
  }
  return result; /*0x67b31a*/
}
}
} // namespace gamemd

// 0x67B350
namespace gamemd {
unsigned int TypeList_cptr_TerrainTypeClass::PointerToIndex(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
unsigned int __thiscall TypeList_cptr_TerrainTypeClass::sub_67B350(int this, int a2)
{
  if ( this->IsInitialized ) /*0x67b350*/
    return (unsigned int)(a2 - this->Items) >> 2; /*0x67b365*/
  else
    return 0; /*0x67b357*/
}
}
} // namespace gamemd

// 0x67B3D0
namespace gamemd {
char TypeList_cptr_TerrainTypeClass::Remove(int a2, unsigned int * a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall TypeList_cptr_TerrainTypeClass::Remove(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x67b3dc*/
  {
    this->IsInitialized = 0; /*0x67b3e2*/
    if ( a3 ) /*0x67b3e8*/
      v4 = a3; /*0x67b3fe*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x67b3fa*/
    this->IsInitialized = 1; /*0x67b402*/
    if ( !v4 ) /*0x67b406*/
      return 0; /*0x67b47a*/
    if ( this->Items ) /*0x67b408*/
    {
      v5 = this->Capacity; /*0x67b40f*/
      if ( a2 < v5 ) /*0x67b414*/
        v5 = a2; /*0x67b416*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x67b41c*/
        ++i; /*0x67b421*/
      if ( this->IsAllocated ) /*0x67b42e*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x67b439*/
        this->Items = 0; /*0x67b441*/
      }
    }
    this->Items = v4; /*0x67b44a*/
    this->Capacity = a2; /*0x67b452*/
    this->IsAllocated = a3 == 0; /*0x67b455*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(*(_DWORD *)this + 12))(this); /*0x67b45e*/
  }
  v7 = this->Capacity; /*0x67b461*/
  if ( v7 < this->Count ) /*0x67b469*/
    this->Count = v7; /*0x67b46b*/
  return 1; /*0x67b46e*/
}
}
} // namespace gamemd

// 0x67B4D0
namespace gamemd {
int TypeList_cptr_TerrainTypeClass::GetSize(unsigned int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall TypeList_cptr_TerrainTypeClass::_vt04(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = *(this + 4); /*0x67b4d0*/
  result = 0; /*0x67b4d3*/
  if ( v2 <= 0 ) /*0x67b4d8*/
    return -1; /*0x67b4ef*/
  for ( i = (_DWORD *)*(this + 1); *i != *a2; ++i ) /*0x67b4de*/
  {
    if ( ++result >= v2 ) /*0x67b4ed*/
      return -1; /*0x67b4ed*/
  }
  return result; /*0x67b4f2*/
}
}
} // namespace gamemd

// 0x67C150
namespace gamemd {
VectorClass * TypeList_cptr_TerrainTypeClass::Constructor(unsigned int * Block, char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
VectorClass *__thiscall TypeList_cptr_TerrainTypeClass::Constructor(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x67c153*/
  *Block = &VectorClass<TerrainTypeClass const *>::`vftable'; /*0x67c156*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x67c160*/
  {
    __3_YAXPAX_Z(v3); /*0x67c168*/
    *(Block + 1) = 0; /*0x67c170*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x67c17b*/
  *(Block + 2) = 0; /*0x67c181*/
  if ( (a2 & 1) != 0 ) /*0x67c188*/
    __3_YAXPAX_Z(Block); /*0x67c18b*/
  return (VectorClass *)Block; /*0x67c195*/
}
}
} // namespace gamemd

// 0x5128A0
namespace gamemd {
void TypeList_Infantry::ddtor()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall TypeList_Infantry::_vt03(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x5128a6*/
  this->Count = 0; /*0x5128a9*/
  if ( v2 && this->IsAllocated ) /*0x5128b0*/
  {
    __3_YAXPAX_Z(v2); /*0x5128b6*/
    this->Items = 0; /*0x5128be*/
  }
  this->IsAllocated = 0; /*0x5128c1*/
  this->Capacity = 0; /*0x5128c4*/
}
}
} // namespace gamemd

// 0x5128D0
namespace gamemd {
unsigned int TypeList_Infantry::GetIndex(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
unsigned int __thiscall TypeList_Infantry::GetIndex(int this, int a2)
{
  if ( this->IsInitialized ) /*0x5128d0*/
    return (unsigned int)(a2 - this->Items) >> 2; /*0x5128e5*/
  else
    return 0; /*0x5128d7*/
}
}
} // namespace gamemd

// 0x5128F0
namespace gamemd {
int TypeList_Infantry::Clear(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall TypeList_Infantry::_vt06(_DWORD *this, int a2)
{
  return *(_DWORD *)(*(this + 1) + 4 * a2); /*0x5128fa*/
}
}
} // namespace gamemd

// 0x5129F0
namespace gamemd {
TypeList * TypeList_Infantry::Add(unsigned int * Block, char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
TypeList *__thiscall TypeList_Infantry::Add(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x5129f3*/
  *Block = &VectorClass<InfantryTypeClass const *>::`vftable'; /*0x5129f6*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x512a00*/
  {
    __3_YAXPAX_Z(v3); /*0x512a08*/
    *(Block + 1) = 0; /*0x512a10*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x512a1b*/
  *(Block + 2) = 0; /*0x512a21*/
  if ( (a2 & 1) != 0 ) /*0x512a28*/
    __3_YAXPAX_Z(Block); /*0x512a2b*/
  return (TypeList *)Block; /*0x512a35*/
}
}
} // namespace gamemd

// 0x512C40
namespace gamemd {
char TypeList_Infantry::AddRef(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall TypeList_Infantry::_vt01(int *this, int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = *(this + 2); /*0x512c42*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x512c4d*/
  {
    v3 = 0; /*0x512c4f*/
    if ( v2 <= 0 ) /*0x512c53*/
      return 1; /*0x512c73*/
    v4 = (_DWORD *)*(this + 1); /*0x512c55*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x512c5b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x512c64*/
    {
      ++v3; /*0x512c66*/
      ++v4; /*0x512c67*/
      if ( v3 >= v2 ) /*0x512c6c*/
        return 1; /*0x512c6c*/
    }
  }
  return 0; /*0x512c6e*/
}
}
} // namespace gamemd

// 0x512E20
namespace gamemd {
DynamicVector * TypeList_Infantry::Constructor(unsigned int * Block, char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
DynamicVector *__thiscall TypeList_Infantry::Constructor(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x512e23*/
  *Block = &VectorClass<InfantryTypeClass const *>::`vftable'; /*0x512e26*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x512e30*/
  {
    __3_YAXPAX_Z(v3); /*0x512e38*/
    *(Block + 1) = 0; /*0x512e40*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x512e4b*/
  *(Block + 2) = 0; /*0x512e51*/
  if ( (a2 & 1) != 0 ) /*0x512e58*/
    __3_YAXPAX_Z(Block); /*0x512e5b*/
  return (DynamicVector *)Block; /*0x512e65*/
}
}
} // namespace gamemd

// 0x512E70
namespace gamemd {
char TypeList_Infantry::Remove(int a2, unsigned int * a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall TypeList_Infantry::Remove(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x512e7c*/
  {
    this->IsInitialized = 0; /*0x512e82*/
    if ( a3 ) /*0x512e88*/
      v4 = a3; /*0x512e9e*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x512e9a*/
    this->IsInitialized = 1; /*0x512ea2*/
    if ( !v4 ) /*0x512ea6*/
      return 0; /*0x512f1a*/
    if ( this->Items ) /*0x512ea8*/
    {
      v5 = this->Capacity; /*0x512eaf*/
      if ( a2 < v5 ) /*0x512eb4*/
        v5 = a2; /*0x512eb6*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x512ebc*/
        ++i; /*0x512ec1*/
      if ( this->IsAllocated ) /*0x512ece*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x512ed9*/
        this->Items = 0; /*0x512ee1*/
      }
    }
    this->Items = v4; /*0x512eea*/
    this->Capacity = a2; /*0x512ef2*/
    this->IsAllocated = a3 == 0; /*0x512ef5*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(*(_DWORD *)this + 12))(this); /*0x512efe*/
  }
  v7 = this->Capacity; /*0x512f01*/
  if ( v7 < this->Count ) /*0x512f09*/
    this->Count = v7; /*0x512f0b*/
  return 1; /*0x512f0e*/
}
}
} // namespace gamemd

// 0x512F70
namespace gamemd {
int TypeList_Infantry::GetSize(unsigned int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall TypeList_Infantry::_vt04(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = *(this + 4); /*0x512f70*/
  result = 0; /*0x512f73*/
  if ( v2 <= 0 ) /*0x512f78*/
    return -1; /*0x512f8f*/
  for ( i = (_DWORD *)*(this + 1); *i != *a2; ++i ) /*0x512f7e*/
  {
    if ( ++result >= v2 ) /*0x512f8d*/
      return -1; /*0x512f8d*/
  }
  return result; /*0x512f92*/
}
}
} // namespace gamemd

// 0x5131F0
namespace gamemd {
DynamicVector * TypeList_Infantry::Constructor_0(unsigned int * Block, char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
DynamicVector *__thiscall TypeList_Infantry::Constructor_0(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x5131f3*/
  *Block = &VectorClass<UnitTypeClass const *>::`vftable'; /*0x5131f6*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x513200*/
  {
    __3_YAXPAX_Z(v3); /*0x513208*/
    *(Block + 1) = 0; /*0x513210*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x51321b*/
  *(Block + 2) = 0; /*0x513221*/
  if ( (a2 & 1) != 0 ) /*0x513228*/
    __3_YAXPAX_Z(Block); /*0x51322b*/
  return (DynamicVector *)Block; /*0x513235*/
}
}
} // namespace gamemd

// 0x5135C0
namespace gamemd {
DynamicVector * TypeList_Infantry::Constructor_1(unsigned int * Block, char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
DynamicVector *__thiscall TypeList_Infantry::Constructor_1(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x5135c3*/
  *Block = &VectorClass<AircraftTypeClass const *>::`vftable'; /*0x5135c6*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x5135d0*/
  {
    __3_YAXPAX_Z(v3); /*0x5135d8*/
    *(Block + 1) = 0; /*0x5135e0*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x5135eb*/
  *(Block + 2) = 0; /*0x5135f1*/
  if ( (a2 & 1) != 0 ) /*0x5135f8*/
    __3_YAXPAX_Z(Block); /*0x5135fb*/
  return (DynamicVector *)Block; /*0x513605*/
}
}
} // namespace gamemd

// 0x459FE0
namespace gamemd {
int TypeList_Particle::GetIndex(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall TypeList_Particle::GetIndex(_DWORD *this, int a2)
{
  return *(_DWORD *)(*(this + 1) + 4 * a2); /*0x459fea*/
}
}
} // namespace gamemd

// 0x45A180
namespace gamemd {
char TypeList_Particle::AddRef(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall TypeList_Particle::_vt01(int *this, int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = *(this + 2); /*0x45a182*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x45a18d*/
  {
    v3 = 0; /*0x45a18f*/
    if ( v2 <= 0 ) /*0x45a193*/
      return 1; /*0x45a1b3*/
    v4 = (_DWORD *)*(this + 1); /*0x45a195*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x45a19b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x45a1a4*/
    {
      ++v3; /*0x45a1a6*/
      ++v4; /*0x45a1a7*/
      if ( v3 >= v2 ) /*0x45a1ac*/
        return 1; /*0x45a1ac*/
    }
  }
  return 0; /*0x45a1ae*/
}
}
} // namespace gamemd

// 0x45A1C0
namespace gamemd {
char TypeList_Particle::Remove(int a2, unsigned int * a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall TypeList_Particle::Remove(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x45a1cc*/
  {
    this->IsInitialized = 0; /*0x45a1d6*/
    if ( a3 ) /*0x45a1dc*/
      v4 = a3; /*0x45a1f2*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x45a1ee*/
    this->IsInitialized = 1; /*0x45a1f6*/
    if ( v4 ) /*0x45a1fa*/
    {
      if ( this->Items ) /*0x45a205*/
      {
        v6 = this->Capacity; /*0x45a20c*/
        if ( a2 < v6 ) /*0x45a211*/
          v6 = a2; /*0x45a213*/
        for ( i = 0; i < v6; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x45a219*/
          ++i; /*0x45a21e*/
        if ( this->IsAllocated ) /*0x45a22b*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x45a236*/
          this->Items = 0; /*0x45a23e*/
        }
      }
      this->Items = v4; /*0x45a247*/
      this->Capacity = a2; /*0x45a24f*/
      this->IsAllocated = a3 == 0; /*0x45a252*/
      return 1; /*0x45a258*/
    }
    else
    {
      return 0; /*0x45a1ff*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(*(_DWORD *)this + 12))(this); /*0x45a262*/
    return 1; /*0x45a268*/
  }
}
}
} // namespace gamemd

// 0x45A2A0
namespace gamemd {
int TypeList_Particle::GetSize(unsigned int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall TypeList_Particle::_vt04(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !this->IsInitialized ) /*0x45a2a0*/
    return 0; /*0x45a2a8*/
  v3 = this->Capacity; /*0x45a2ae*/
  result = 0; /*0x45a2b1*/
  if ( v3 <= 0 ) /*0x45a2b5*/
    return -1; /*0x45a2cc*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2; ++i ) /*0x45a2bb*/
  {
    if ( ++result >= v3 ) /*0x45a2ca*/
      return -1; /*0x45a2ca*/
  }
  return result; /*0x45a2aa*/
}
}
} // namespace gamemd

// 0x45A2E0
namespace gamemd {
unsigned int TypeList_Particle::GetCapacity(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
unsigned int __thiscall TypeList_Particle::_vt05(int this, int a2)
{
  if ( this->IsInitialized ) /*0x45a2e0*/
    return (unsigned int)(a2 - this->Items) >> 2; /*0x45a2f5*/
  else
    return 0; /*0x45a2e7*/
}
}
} // namespace gamemd

// 0x45A9C0
namespace gamemd {
VectorClass * TypeList_Particle::Add(unsigned int * Block, char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
VectorClass *__thiscall TypeList_Particle::Add(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x45a9c3*/
  *Block = &VectorClass<ParticleSystemTypeClass const *>::`vftable'; /*0x45a9c6*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x45a9d0*/
  {
    __3_YAXPAX_Z(v3); /*0x45a9d8*/
    *(Block + 1) = 0; /*0x45a9e0*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x45a9eb*/
  *(Block + 2) = 0; /*0x45a9f1*/
  if ( (a2 & 1) != 0 ) /*0x45a9f8*/
    __3_YAXPAX_Z(Block); /*0x45a9fb*/
  return (VectorClass *)Block; /*0x45aa05*/
}
}
} // namespace gamemd

// 0x4778F0
namespace gamemd {
int TypeList_TechnoType::Clear(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall TypeList_TechnoType::_vt06(_DWORD *this, int a2)
{
  return *(_DWORD *)(*(this + 1) + 4 * a2); /*0x4778fa*/
}
}
} // namespace gamemd

// 0x477FC0
namespace gamemd {
char TypeList_TechnoType::AddRef(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall TypeList_TechnoType::_vt01(int *this, int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = *(this + 2); /*0x477fc2*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x477fcd*/
  {
    v3 = 0; /*0x477fcf*/
    if ( v2 <= 0 ) /*0x477fd3*/
      return 1; /*0x477ff3*/
    v4 = (_DWORD *)*(this + 1); /*0x477fd5*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x477fdb*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x477fe4*/
    {
      ++v3; /*0x477fe6*/
      ++v4; /*0x477fe7*/
      if ( v3 >= v2 ) /*0x477fec*/
        return 1; /*0x477fec*/
    }
  }
  return 0; /*0x477fee*/
}
}
} // namespace gamemd

// 0x478000
namespace gamemd {
char TypeList_TechnoType::Remove(int a2, unsigned int * a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall TypeList_TechnoType::Remove(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x47800c*/
  {
    this->IsInitialized = 0; /*0x478016*/
    if ( a3 ) /*0x47801c*/
      v4 = a3; /*0x478032*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x47802e*/
    this->IsInitialized = 1; /*0x478036*/
    if ( v4 ) /*0x47803a*/
    {
      if ( this->Items ) /*0x478045*/
      {
        v6 = this->Capacity; /*0x47804c*/
        if ( a2 < v6 ) /*0x478051*/
          v6 = a2; /*0x478053*/
        for ( i = 0; i < v6; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x478059*/
          ++i; /*0x47805e*/
        if ( this->IsAllocated ) /*0x47806b*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x478076*/
          this->Items = 0; /*0x47807e*/
        }
      }
      this->Items = v4; /*0x478087*/
      this->Capacity = a2; /*0x47808f*/
      this->IsAllocated = a3 == 0; /*0x478092*/
      return 1; /*0x478098*/
    }
    else
    {
      return 0; /*0x47803f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(*(_DWORD *)this + 12))(this); /*0x4780a2*/
    return 1; /*0x4780a8*/
  }
}
}
} // namespace gamemd

// 0x4780B0
namespace gamemd {
void TypeList_TechnoType::ddtor()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall TypeList_TechnoType::_vt03(int this)
{
  if ( this->Items && this->IsAllocated ) /*0x4780bd*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x4780c3*/
    this->Items = 0; /*0x4780cb*/
  }
  this->IsAllocated = 0; /*0x4780ce*/
  this->Capacity = 0; /*0x4780d1*/
}
}
} // namespace gamemd

// 0x4780E0
namespace gamemd {
int TypeList_TechnoType::GetSize(unsigned int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall TypeList_TechnoType::_vt04(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !this->IsInitialized ) /*0x4780e0*/
    return 0; /*0x4780e8*/
  v3 = this->Capacity; /*0x4780ee*/
  result = 0; /*0x4780f1*/
  if ( v3 <= 0 ) /*0x4780f5*/
    return -1; /*0x47810c*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2; ++i ) /*0x4780fb*/
  {
    if ( ++result >= v3 ) /*0x47810a*/
      return -1; /*0x47810a*/
  }
  return result; /*0x4780ea*/
}
}
} // namespace gamemd

// 0x478120
namespace gamemd {
unsigned int TypeList_TechnoType::GetIndex(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
unsigned int __thiscall TypeList_TechnoType::GetIndex(int this, int a2)
{
  if ( this->IsInitialized ) /*0x478120*/
    return (unsigned int)(a2 - this->Items) >> 2; /*0x478135*/
  else
    return 0; /*0x478127*/
}
}
} // namespace gamemd

// 0x478680
namespace gamemd {
VectorClass * TypeList_TechnoType::Add(unsigned int * Block, char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
VectorClass *__thiscall TypeList_TechnoType::Add(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x478683*/
  *Block = &VectorClass<TechnoTypeClass *>::`vftable'; /*0x478686*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x478690*/
  {
    __3_YAXPAX_Z(v3); /*0x478698*/
    *(Block + 1) = 0; /*0x4786a0*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x4786ab*/
  *(Block + 2) = 0; /*0x4786b1*/
  if ( (a2 & 1) != 0 ) /*0x4786b8*/
    __3_YAXPAX_Z(Block); /*0x4786bb*/
  return (VectorClass *)Block; /*0x4786c5*/
}
}
} // namespace gamemd

// 0x67A410
namespace gamemd {
void TypeList_VoxelAnim::ddtor()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall TypeList_VoxelAnim::_vt03(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x67a416*/
  this->Count = 0; /*0x67a419*/
  if ( v2 && this->IsAllocated ) /*0x67a420*/
  {
    __3_YAXPAX_Z(v2); /*0x67a426*/
    this->Items = 0; /*0x67a42e*/
  }
  this->IsAllocated = 0; /*0x67a431*/
  this->Capacity = 0; /*0x67a434*/
}
}
} // namespace gamemd

// 0x67A440
namespace gamemd {
unsigned int TypeList_VoxelAnim::GetIndex(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
unsigned int __thiscall TypeList_VoxelAnim::GetIndex(int this, int a2)
{
  if ( this->IsInitialized ) /*0x67a440*/
    return (unsigned int)(a2 - this->Items) >> 2; /*0x67a455*/
  else
    return 0; /*0x67a447*/
}
}
} // namespace gamemd

// 0x67A460
namespace gamemd {
int TypeList_VoxelAnim::Clear(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall TypeList_VoxelAnim::_vt06(_DWORD *this, int a2)
{
  return *(_DWORD *)(*(this + 1) + 4 * a2); /*0x67a46a*/
}
}
} // namespace gamemd

// 0x67A680
namespace gamemd {
void TypeList_VoxelAnim::TypeList_vt03()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall TypeList_VoxelAnim::TypeList_vt03(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x67a686*/
  this->Count = 0; /*0x67a689*/
  if ( v2 && this->IsAllocated ) /*0x67a690*/
  {
    __3_YAXPAX_Z(v2); /*0x67a696*/
    this->Items = 0; /*0x67a69e*/
  }
  this->IsAllocated = 0; /*0x67a6a1*/
  this->Capacity = 0; /*0x67a6a4*/
}
}
} // namespace gamemd

// 0x67A6B0
namespace gamemd {
unsigned int TypeList_VoxelAnim::TypeList_vt05(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
unsigned int __thiscall TypeList_VoxelAnim::TypeList_vt05(int this, int a2)
{
  if ( this->IsInitialized ) /*0x67a6b0*/
    return (unsigned int)(a2 - this->Items) >> 2; /*0x67a6c5*/
  else
    return 0; /*0x67a6b7*/
}
}
} // namespace gamemd

// 0x67A990
namespace gamemd {
TypeList * TypeList_VoxelAnim::Add(unsigned int * Block, char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
TypeList *__thiscall TypeList_VoxelAnim::Add(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x67a993*/
  *Block = &VectorClass<VoxelAnimTypeClass const *>::`vftable'; /*0x67a996*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x67a9a0*/
  {
    __3_YAXPAX_Z(v3); /*0x67a9a8*/
    *(Block + 1) = 0; /*0x67a9b0*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x67a9bb*/
  *(Block + 2) = 0; /*0x67a9c1*/
  if ( (a2 & 1) != 0 ) /*0x67a9c8*/
    __3_YAXPAX_Z(Block); /*0x67a9cb*/
  return (TypeList *)Block; /*0x67a9d5*/
}
}
} // namespace gamemd

// 0x67A9E0
namespace gamemd {
TypeList * TypeList_VoxelAnim::TypeList_vt00(unsigned int * Block, char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
TypeList *__thiscall TypeList_VoxelAnim::TypeList_vt00(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x67a9e3*/
  *Block = &VectorClass<SmudgeTypeClass const *>::`vftable'; /*0x67a9e6*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x67a9f0*/
  {
    __3_YAXPAX_Z(v3); /*0x67a9f8*/
    *(Block + 1) = 0; /*0x67aa00*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x67aa0b*/
  *(Block + 2) = 0; /*0x67aa11*/
  if ( (a2 & 1) != 0 ) /*0x67aa18*/
    __3_YAXPAX_Z(Block); /*0x67aa1b*/
  return (TypeList *)Block; /*0x67aa25*/
}
}
} // namespace gamemd

// 0x67AAF0
namespace gamemd {
char TypeList_VoxelAnim::AddRef(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall TypeList_VoxelAnim::_vt01(int *this, int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = *(this + 2); /*0x67aaf2*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x67aafd*/
  {
    v3 = 0; /*0x67aaff*/
    if ( v2 <= 0 ) /*0x67ab03*/
      return 1; /*0x67ab23*/
    v4 = (_DWORD *)*(this + 1); /*0x67ab05*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x67ab0b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x67ab14*/
    {
      ++v3; /*0x67ab16*/
      ++v4; /*0x67ab17*/
      if ( v3 >= v2 ) /*0x67ab1c*/
        return 1; /*0x67ab1c*/
    }
  }
  return 0; /*0x67ab1e*/
}
}
} // namespace gamemd

// 0x67AB30
namespace gamemd {
char TypeList_VoxelAnim::SetCapacity(int a2, unsigned int * a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall TypeList_VoxelAnim::sub_67AB30(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x67ab3c*/
  {
    this->IsInitialized = 0; /*0x67ab46*/
    if ( a3 ) /*0x67ab4c*/
      v4 = a3; /*0x67ab62*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x67ab5e*/
    this->IsInitialized = 1; /*0x67ab66*/
    if ( v4 ) /*0x67ab6a*/
    {
      if ( this->Items ) /*0x67ab75*/
      {
        v6 = this->Capacity; /*0x67ab7c*/
        if ( a2 < v6 ) /*0x67ab81*/
          v6 = a2; /*0x67ab83*/
        for ( i = 0; i < v6; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x67ab89*/
          ++i; /*0x67ab8e*/
        if ( this->IsAllocated ) /*0x67ab9b*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x67aba6*/
          this->Items = 0; /*0x67abae*/
        }
      }
      this->Items = v4; /*0x67abb7*/
      this->Capacity = a2; /*0x67abbf*/
      this->IsAllocated = a3 == 0; /*0x67abc2*/
      return 1; /*0x67abc8*/
    }
    else
    {
      return 0; /*0x67ab6f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(*(_DWORD *)this + 12))(this); /*0x67abd2*/
    return 1; /*0x67abd8*/
  }
}
}
} // namespace gamemd

// 0x67AC10
namespace gamemd {
int TypeList_VoxelAnim::IndexOf(unsigned int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall TypeList_VoxelAnim::sub_67AC10(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !this->IsInitialized ) /*0x67ac10*/
    return 0; /*0x67ac18*/
  v3 = this->Capacity; /*0x67ac1e*/
  result = 0; /*0x67ac21*/
  if ( v3 <= 0 ) /*0x67ac25*/
    return -1; /*0x67ac3c*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2; ++i ) /*0x67ac2b*/
  {
    if ( ++result >= v3 ) /*0x67ac3a*/
      return -1; /*0x67ac3a*/
  }
  return result; /*0x67ac1a*/
}
}
} // namespace gamemd

// 0x67AC50
namespace gamemd {
unsigned int TypeList_VoxelAnim::PointerToIndex(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
unsigned int __thiscall TypeList_VoxelAnim::sub_67AC50(int this, int a2)
{
  if ( this->IsInitialized ) /*0x67ac50*/
    return (unsigned int)(a2 - this->Items) >> 2; /*0x67ac65*/
  else
    return 0; /*0x67ac57*/
}
}
} // namespace gamemd

// 0x67ACD0
namespace gamemd {
char TypeList_VoxelAnim::Remove(int a2, unsigned int * a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall TypeList_VoxelAnim::Remove(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x67acdc*/
  {
    this->IsInitialized = 0; /*0x67ace2*/
    if ( a3 ) /*0x67ace8*/
      v4 = a3; /*0x67acfe*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x67acfa*/
    this->IsInitialized = 1; /*0x67ad02*/
    if ( !v4 ) /*0x67ad06*/
      return 0; /*0x67ad7a*/
    if ( this->Items ) /*0x67ad08*/
    {
      v5 = this->Capacity; /*0x67ad0f*/
      if ( a2 < v5 ) /*0x67ad14*/
        v5 = a2; /*0x67ad16*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x67ad1c*/
        ++i; /*0x67ad21*/
      if ( this->IsAllocated ) /*0x67ad2e*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x67ad39*/
        this->Items = 0; /*0x67ad41*/
      }
    }
    this->Items = v4; /*0x67ad4a*/
    this->Capacity = a2; /*0x67ad52*/
    this->IsAllocated = a3 == 0; /*0x67ad55*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(*(_DWORD *)this + 12))(this); /*0x67ad5e*/
  }
  v7 = this->Capacity; /*0x67ad61*/
  if ( v7 < this->Count ) /*0x67ad69*/
    this->Count = v7; /*0x67ad6b*/
  return 1; /*0x67ad6e*/
}
}
} // namespace gamemd

// 0x67ADD0
namespace gamemd {
int TypeList_VoxelAnim::GetSize(unsigned int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall TypeList_VoxelAnim::_vt04(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = *(this + 4); /*0x67add0*/
  result = 0; /*0x67add3*/
  if ( v2 <= 0 ) /*0x67add8*/
    return -1; /*0x67adef*/
  for ( i = (_DWORD *)*(this + 1); *i != *a2; ++i ) /*0x67adde*/
  {
    if ( ++result >= v2 ) /*0x67aded*/
      return -1; /*0x67aded*/
  }
  return result; /*0x67adf2*/
}
}
} // namespace gamemd

// 0x67B150
namespace gamemd {
int TypeList_VoxelAnim::TypeList_vt04(unsigned int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall TypeList_VoxelAnim::TypeList_vt04(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = *(this + 4); /*0x67b150*/
  result = 0; /*0x67b153*/
  if ( v2 <= 0 ) /*0x67b158*/
    return -1; /*0x67b16f*/
  for ( i = (_DWORD *)*(this + 1); *i != *a2; ++i ) /*0x67b15e*/
  {
    if ( ++result >= v2 ) /*0x67b16d*/
      return -1; /*0x67b16d*/
  }
  return result; /*0x67b172*/
}
}
} // namespace gamemd

// 0x67C010
namespace gamemd {
VectorClass * TypeList_VoxelAnim::Constructor(unsigned int * Block, char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
VectorClass *__thiscall TypeList_VoxelAnim::Constructor(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x67c013*/
  *Block = &VectorClass<VoxelAnimTypeClass const *>::`vftable'; /*0x67c016*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x67c020*/
  {
    __3_YAXPAX_Z(v3); /*0x67c028*/
    *(Block + 1) = 0; /*0x67c030*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x67c03b*/
  *(Block + 2) = 0; /*0x67c041*/
  if ( (a2 & 1) != 0 ) /*0x67c048*/
    __3_YAXPAX_Z(Block); /*0x67c04b*/
  return (VectorClass *)Block; /*0x67c055*/
}
}
} // namespace gamemd

// 0x67C100
namespace gamemd {
DynamicVector * TypeList_VoxelAnim::Constructor_0(unsigned int * Block, char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
DynamicVector *__thiscall TypeList_VoxelAnim::Constructor_0(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x67c103*/
  *Block = &VectorClass<SmudgeTypeClass const *>::`vftable'; /*0x67c106*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x67c110*/
  {
    __3_YAXPAX_Z(v3); /*0x67c118*/
    *(Block + 1) = 0; /*0x67c120*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x67c12b*/
  *(Block + 2) = 0; /*0x67c131*/
  if ( (a2 & 1) != 0 ) /*0x67c138*/
    __3_YAXPAX_Z(Block); /*0x67c13b*/
  return (DynamicVector *)Block; /*0x67c145*/
}
}
} // namespace gamemd

// 0x67C1A0
namespace gamemd {
DynamicVector * TypeList_VoxelAnim::Constructor_1(unsigned int * Block, char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
DynamicVector *__thiscall TypeList_VoxelAnim::Constructor_1(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x67c1a3*/
  *Block = &VectorClass<TerrainTypeClass const *>::`vftable'; /*0x67c1a6*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x67c1b0*/
  {
    __3_YAXPAX_Z(v3); /*0x67c1b8*/
    *(Block + 1) = 0; /*0x67c1c0*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x67c1cb*/
  *(Block + 2) = 0; /*0x67c1d1*/
  if ( (a2 & 1) != 0 ) /*0x67c1d8*/
    __3_YAXPAX_Z(Block); /*0x67c1db*/
  return (DynamicVector *)Block; /*0x67c1e5*/
}
}
} // namespace gamemd
