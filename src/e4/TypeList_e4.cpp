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
{
    void *v2;
    v2 = *(void **)(this + 4);
    this->Count = 0;
    if ( v2 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v2);
    this->Items = 0;
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}

// 0x459F90
namespace gamemd {
void TypeList_cptr_ParticleSystemTypeClass::GetClassIdentifier()
{
{
    void *v2;
    v2 = *(void **)(this + 4);
    this->Count = 0;
    if ( v2 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v2);
    this->Items = 0;
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x459FC0
namespace gamemd {
unsigned int TypeList_cptr_ParticleSystemTypeClass::LoadTypeData(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x459FE0
namespace gamemd {
int TypeList_Particle::GetIndex(int a2)
{
{
    return *(int *)(this->Items + 4 * a2);
}
}
} // namespace gamemd

// 0x45A180
namespace gamemd {
char TypeList_Particle::AddRef(int a2)
{
{
    int v2;
    int v3;
    int *v4;
    int v5;
    v2 = this->Capacity;
    if ( v2 == *(int *)(a2 + 8) )
  {
    v3 = 0;
    if ( v2 <= 0 )
    return 1;
    v4 = (int *)this->Items;
    v5 = *(int *)(a2 + 4) - (int)v4;
    while ( *v4 == *(int *)((char *)(v4) + v5) )
    {
    ++v3;
    ++v4;
    if ( v3 >= v2 )
    return 1;
    }
  }
    return 0;
}
}
} // namespace gamemd

// 0x45A1C0
namespace gamemd {
char TypeList_Particle::Remove(int a2, unsigned int * a3)
{
{
    int *v4;
    int v6;
    int i;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( v4 )
    {
    if ( this->Items )
      {
    v6 = this->Capacity;
    if ( a2 < v6 )
    v6 = a2;
    for ( i = 0; i < v6; v4[i - 1] = *(int *)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
        {
    __3_YAXPAX_Z(*((void **)(this) + 1));
    this->Items = 0;
        }
      }
    this->Items = v4;
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
    return 1;
    }
    else
    {
    return 0;
    }
  }
    else
  {
    this->Cleanup();
    return 1;
  }
}
}
} // namespace gamemd

// 0x45A2A0
namespace gamemd {
int TypeList_Particle::GetSize(unsigned int * a2)
{
{
    int result;
    int v3;
    int *i;
    if ( !this->IsInitialized )
    return 0;
    v3 = this->Capacity;
    result = 0;
    if ( v3 <= 0 )
    return -1;
    for ( i = *(int **)(this + 4); *i != *a2; ++i )
  {
    if ( ++result >= v3 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x45A2E0
namespace gamemd {
unsigned int TypeList_Particle::GetCapacity(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x45A300
namespace gamemd {
char TypeList_cptr_ParticleSystemTypeClass::Add(int a2, unsigned int * a3)
{
{
    int *v4;
    int v5;
    int i;
    int v7;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( !v4 )
    return 0;
    if ( this->Items )
    {
    v5 = this->Capacity;
    if ( a2 < v5 )
    v5 = a2;
    for ( i = 0; i < v5; v4[i - 1] = *(int *)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
      {
    __3_YAXPAX_Z(*((void **)(this) + 1));
    this->Items = 0;
      }
    }
    this->Items = v4;
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
  }
    else
  {
    this->GetClassIdentifier();
  }
    v7 = this->Capacity;
    if ( v7 < this->Count )
    this->Count = v7;
    return 1;
}
}
} // namespace gamemd

// 0x45A3B0
namespace gamemd {
int TypeList_cptr_ParticleSystemTypeClass::Remove(unsigned int * a2)
{
{
    int v2;
    int result;
    int *i;
    v2 = this->Count;
    result = 0;
    if ( v2 <= 0 )
    return -1;
    for ( i = (int *)this->Items; *i != *a2; ++i )
  {
    if ( ++result >= v2 )
    return -1;
  }
    return result;
}
} // namespace gamemd

// 0x45A9C0
namespace gamemd {
VectorClass * TypeList_Particle::Add(char a2)
{
{
    void *v3;
    v3 = (void *)*(this + 1);
    *(void**)this = &vt_VectorClass_ParticleSystemTypeClass_const;
    if ( v3 && *(int *)(this + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(this + 1) = 0;
  }
    *(int *)(this + 13) = 0;
    *(this + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (VectorClass *)this;
}
}
} // namespace gamemd

// 0x477870
unsigned int TypeList::GetCapacity(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}

// 0x4778F0
namespace gamemd {
int TypeList_TechnoType::Clear(int a2)
{
{
    return *(int *)(this->Items + 4 * a2);
}
}
} // namespace gamemd

// 0x477990
TypeList * TypeList::QueryInterface(char a2)
{
{
    void *v3;
    v3 = (void *)*(this + 1);
    *(void**)this = &vt_VectorClass_int;
    if ( v3 && *(char *)(this + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(this + 1) = 0;
  }
    *(char *)(this + 13) = 0;
    *(this + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (TypeList *)this;
}
}

// 0x477F10
int TypeList::GetSize(unsigned int * a2)
{
{
    int v2;
    int result;
    int *i;
    v2 = this->Count;
    result = 0;
    if ( v2 <= 0 )
    return -1;
    for ( i = (int *)this->Items; *i != *a2; ++i )
  {
    if ( ++result >= v2 )
    return -1;
  }
    return result;
}

// 0x477FC0
namespace gamemd {
char TypeList_TechnoType::AddRef(int a2)
{
{
    int v2;
    int v3;
    int *v4;
    int v5;
    v2 = this->Capacity;
    if ( v2 == *(int *)(a2 + 8) )
  {
    v3 = 0;
    if ( v2 <= 0 )
    return 1;
    v4 = (int *)this->Items;
    v5 = *(int *)(a2 + 4) - (int)v4;
    while ( *v4 == *(int *)((char *)(v4) + v5) )
    {
    ++v3;
    ++v4;
    if ( v3 >= v2 )
    return 1;
    }
  }
    return 0;
}
}
} // namespace gamemd

// 0x478000
namespace gamemd {
char TypeList_TechnoType::Remove(int a2, unsigned int * a3)
{
{
    int *v4;
    int v6;
    int i;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( v4 )
    {
    if ( this->Items )
      {
    v6 = this->Capacity;
    if ( a2 < v6 )
    v6 = a2;
    for ( i = 0; i < v6; v4[i - 1] = *(int *)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
        {
    __3_YAXPAX_Z(*((void **)(this) + 1));
    this->Items = 0;
        }
      }
    this->Items = v4;
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
    return 1;
    }
    else
    {
    return 0;
    }
  }
    else
  {
    this->ddtor();
    return 1;
  }
}
}
} // namespace gamemd

// 0x4780B0
namespace gamemd {
void TypeList_TechnoType::ddtor()
{
{
    if ( this->Items && this->IsAllocated )
  {
    __3_YAXPAX_Z(*(void **)(this + 4));
    this->Items = 0;
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x4780E0
namespace gamemd {
int TypeList_TechnoType::GetSize(unsigned int * a2)
{
{
    int result;
    int v3;
    int *i;
    if ( !this->IsInitialized )
    return 0;
    v3 = this->Capacity;
    result = 0;
    if ( v3 <= 0 )
    return -1;
    for ( i = *(int **)(this + 4); *i != *a2; ++i )
  {
    if ( ++result >= v3 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x478120
namespace gamemd {
unsigned int TypeList_TechnoType::GetIndex(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x478680
namespace gamemd {
VectorClass * TypeList_TechnoType::Add(char a2)
{
{
    void *v3;
    v3 = (void *)*(this + 1);
    *(void**)this = &vt_VectorClass_TechnoTypeClass;
    if ( v3 && *(int *)(this + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(this + 1) = 0;
  }
    *(int *)(this + 13) = 0;
    *(this + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (VectorClass *)this;
}
}
} // namespace gamemd

// 0x478720
unsigned int * TypeList::Copy(unsigned int * a2)
{
{
    int v3;
    void *v4;
    int v5;
    int v6;
    if ( this == a2 )
    return this;
    this->Clear();
    v3 = *((int*)(a2) + 2);
    this->Capacity = v3;
    if ( !v3 )
  {
    this->Items = 0;
    this->IsAllocated = 0;
    return this;
  }
    v4 = __2_YAPAXI_Z(4 * v3);
    this->Items = v4;
    if ( !v4 )
    return this;
    v5 = this->Capacity;
    v6 = 0;
    this->IsAllocated = 1;
    if ( v5 <= 0 )
    return this;
    do
  {
    *(int *)(this->Items + 4 * v6) = *(int *)(*((int*)(a2) + 1) + 4 * v6);
    ++v6;
  }
    while ( v6 < this->Capacity );
    return this;
}
}

// 0x478790
unsigned int * TypeList::TechnoTypeConstructor(int a2, int a3)
{
{
    this->Items = 0;
    this->Capacity = a2;
    this->IsInitialized = 1;
    this->IsAllocated = 0;
    *(void**)this = &vt_VectorClass_TechnoTypeClass;
    if ( a2 )
  {
    if ( a3 )
    {
    this->Items = a3;
    return this;
    }
    this->Items = __2_YAPAXI_Z(4 * a2);
    this->IsAllocated = 1;
  }
    return this;
}
}

// 0x5128A0
namespace gamemd {
void TypeList_Infantry::ddtor()
{
{
    void *v2;
    v2 = *(void **)(this + 4);
    this->Count = 0;
    if ( v2 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v2);
    this->Items = 0;
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x5128D0
namespace gamemd {
unsigned int TypeList_Infantry::GetIndex(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x5128F0
namespace gamemd {
int TypeList_Infantry::Clear(int a2)
{
{
    return *(int *)(this->Items + 4 * a2);
}
}
} // namespace gamemd

// 0x5129F0
namespace gamemd {
TypeList * TypeList_Infantry::Add(char a2)
{
{
    void *v3;
    v3 = (void *)*(this + 1);
    *(void**)this = &vt_VectorClass_InfantryTypeClass_const;
    if ( v3 && *(int *)(this + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(this + 1) = 0;
  }
    *(int *)(this + 13) = 0;
    *(this + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (TypeList *)this;
}
}
} // namespace gamemd

// 0x512C40
namespace gamemd {
char TypeList_Infantry::AddRef(int a2)
{
{
    int v2;
    int v3;
    int *v4;
    int v5;
    v2 = this->Capacity;
    if ( v2 == *(int *)(a2 + 8) )
  {
    v3 = 0;
    if ( v2 <= 0 )
    return 1;
    v4 = (int *)this->Items;
    v5 = *(int *)(a2 + 4) - (int)v4;
    while ( *v4 == *(int *)((char *)(v4) + v5) )
    {
    ++v3;
    ++v4;
    if ( v3 >= v2 )
    return 1;
    }
  }
    return 0;
}
}
} // namespace gamemd

// 0x512E20
namespace gamemd {
DynamicVector * TypeList_Infantry::Constructor(char a2)
{
{
    void *v3;
    v3 = (void *)*(this + 1);
    *(void**)this = &vt_VectorClass_InfantryTypeClass_const;
    if ( v3 && *(int *)(this + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(this + 1) = 0;
  }
    *(int *)(this + 13) = 0;
    *(this + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (DynamicVector *)this;
}
}
} // namespace gamemd

// 0x512E70
namespace gamemd {
char TypeList_Infantry::Remove(int a2, unsigned int * a3)
{
{
    int *v4;
    int v5;
    int i;
    int v7;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( !v4 )
    return 0;
    if ( this->Items )
    {
    v5 = this->Capacity;
    if ( a2 < v5 )
    v5 = a2;
    for ( i = 0; i < v5; v4[i - 1] = *(int *)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
      {
    __3_YAXPAX_Z(*((void **)(this) + 1));
    this->Items = 0;
      }
    }
    this->Items = v4;
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
  }
    else
  {
    this->ddtor();
  }
    v7 = this->Capacity;
    if ( v7 < this->Count )
    this->Count = v7;
    return 1;
}
}
} // namespace gamemd

// 0x512F70
namespace gamemd {
int TypeList_Infantry::GetSize(unsigned int * a2)
{
{
    int v2;
    int result;
    int *i;
    v2 = this->Count;
    result = 0;
    if ( v2 <= 0 )
    return -1;
    for ( i = (int *)this->Items; *i != *a2; ++i )
  {
    if ( ++result >= v2 )
    return -1;
  }
    return result;
}
} // namespace gamemd

// 0x5131F0
namespace gamemd {
DynamicVector * TypeList_Infantry::Constructor_0(char a2)
{
{
    void *v3;
    v3 = (void *)*(this + 1);
    *(void**)this = &vt_VectorClass_UnitTypeClass_const;
    if ( v3 && *(int *)(this + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(this + 1) = 0;
  }
    *(int *)(this + 13) = 0;
    *(this + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (DynamicVector *)this;
}
}
} // namespace gamemd

// 0x5135C0
namespace gamemd {
DynamicVector * TypeList_Infantry::Constructor_1(char a2)
{
{
    void *v3;
    v3 = (void *)*(this + 1);
    *(void**)this = &vt_VectorClass_AircraftTypeClass_const;
    if ( v3 && *(int *)(this + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(this + 1) = 0;
  }
    *(int *)(this + 13) = 0;
    *(this + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (DynamicVector *)this;
}
}
} // namespace gamemd

// 0x513740
unsigned int * TypeList::CopyConstructor(VectorClass * aP1)
{
{
    int v3;
    int v4;
    int v5;
    int v6;
    this->Items = 0;
    this->Capacity = 0;
    this->IsInitialized = 1;
    this->IsAllocated = 0;
    *(void**)this = &vt_VectorClass_UnitTypeClass_const;
    if ( this != (int *)aP1 )
  {
    Vector::Destructor((int)this);
    v3 = aP1->Capacity;
    this->Capacity = v3;
    if ( v3 )
    {
    v4 = __2_YAPAXI_Z(4 * v3);
    this->Items = v4;
    if ( v4 )
      {
    v5 = this->Capacity;
    v6 = 0;
    this->IsAllocated = 1;
    if ( v5 > 0 )
        {
    do
          {
    *(int *)(this->Items + 4 * v6) = *((int *)aP1->Items + v6);
    ++v6;
          }
    while ( v6 < this->Capacity );
        }
      }
    }
    else
    {
    this->Items = 0;
    this->IsAllocated = 0;
    }
  }
    this->Count = aP1[1].vtable0;
    this->CapacityIncrement = aP1[1].Items;
    *(void**)this = &vt_TypeList_UnitTypeClass_const;
    return this;
}
}

// 0x5255F0
unsigned int * TypeList::AnimTypeCopy(VectorClass * aP1)
{
{
    int v3;
    int v4;
    int v5;
    int v6;
    this->Items = 0;
    this->Capacity = 0;
    this->IsInitialized = 1;
    this->IsAllocated = 0;
    *(void**)this = &vt_VectorClass_AnimTypeClass_const;
    if ( this != (int *)aP1 )
  {
    DynamicVectorClass::Destroy_Alt((int)this);
    v3 = aP1->Capacity;
    this->Capacity = v3;
    if ( v3 )
    {
    v4 = __2_YAPAXI_Z(4 * v3);
    this->Items = v4;
    if ( v4 )
      {
    v5 = this->Capacity;
    v6 = 0;
    this->IsAllocated = 1;
    if ( v5 > 0 )
        {
    do
          {
    *(int *)(this->Items + 4 * v6) = *((int *)aP1->Items + v6);
    ++v6;
          }
    while ( v6 < this->Capacity );
        }
      }
    }
    else
    {
    this->Items = 0;
    this->IsAllocated = 0;
    }
  }
    this->Count = aP1[1].vtable0;
    this->CapacityIncrement = aP1[1].Items;
    *(void**)this = &vt_TypeList_AnimTypeClass_const;
    return this;
}
}

// 0x5AC400
CCINIClass * TypeList::BuildingTypeConstructor()
{
{
    this->Items = 0;
    this->Capacity = 0;
    this->IsInitialized = 1;
    this->IsAllocated = 0;
    this->CapacityIncrement = 10;
    this->Count = 0;
    *(void**)this = &vt_TypeList_BuildingTypeClass_const;
    return (CCINIClass *)this;
}
}

// 0x5AC650
namespace gamemd {
TypeList * TypeList_BuildingType::Add(char a2)
{
{
    void *v3;
    v3 = (void *)*(this + 1);
    *(void**)this = &vt_VectorClass_BuildingTypeClass_const;
    if ( v3 && *((char *)(this) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(this + 1) = 0;
  }
    *((char *)(this) + 13) = 0;
    *(this + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (TypeList *)this;
}
}
} // namespace gamemd

// 0x5AD660
unsigned int * TypeList::BuildingTypeCopy(VectorClass * aP1)
{
{
    int v3;
    int v4;
    int v5;
    int v6;
    this->Items = 0;
    this->Capacity = 0;
    this->IsInitialized = 1;
    this->IsAllocated = 0;
    *(void**)this = &vt_VectorClass_BuildingTypeClass_const;
    if ( this != (int *)aP1 )
  {
    DynamicVectorClass::Destroy((int)this);
    v3 = aP1->Capacity;
    this->Capacity = v3;
    if ( v3 )
    {
    v4 = __2_YAPAXI_Z(4 * v3);
    this->Items = v4;
    if ( v4 )
      {
    v5 = this->Capacity;
    v6 = 0;
    this->IsAllocated = 1;
    if ( v5 > 0 )
        {
    do
          {
    *(int *)(this->Items + 4 * v6) = *((int *)aP1->Items + v6);
    ++v6;
          }
    while ( v6 < this->Capacity );
        }
      }
    }
    else
    {
    this->Items = 0;
    this->IsAllocated = 0;
    }
  }
    this->Count = aP1[1].vtable0;
    this->CapacityIncrement = aP1[1].Items;
    *(void**)this = &vt_TypeList_BuildingTypeClass_const;
    return this;
}
}

// 0x67A030
void TypeList::InfantryCleanup()
{
{
    void *v2;
    v2 = (void *)this->Items;
    *(void**)this = &vt_VectorClass_InfantryTypeClass_const;
    if ( v2 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v2);
    this->Items = 0;
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}

// 0x67A090
int * TypeList::CopyFull(VectorClass * aP1)
{
{
    int v3;
    int v4;
    int v5;
    int v6;
    if ( this != (int *)aP1 )
  {
    this->Clear();
    v3 = aP1->Capacity;
    this->Capacity = v3;
    if ( v3 )
    {
    v4 = __2_YAPAXI_Z(4 * v3);
    this->Items = v4;
    if ( v4 )
      {
    v5 = this->Capacity;
    v6 = 0;
    this->IsAllocated = 1;
    if ( v5 > 0 )
        {
    do
          {
    *(int *)(this->Items + 4 * v6) = *((int *)aP1->Items + v6);
    ++v6;
          }
    while ( v6 < this->Capacity );
        }
      }
    }
    else
    {
    this->Items = 0;
    this->IsAllocated = 0;
    }
  }
    this->Count = (int)aP1[1].vtable0;
    this->CapacityIncrement = (int)aP1[1].Items;
    this->unknown_18 = aP1[1].Capacity;
    return this;
}
}

// 0x67A110
int * TypeList::CopyAircraft(VectorClass * aP1)
{
{
    int v3;
    int v4;
    int v5;
    int v6;
    if ( this != (int *)aP1 )
  {
    this->Clear();
    v3 = aP1->Capacity;
    this->Capacity = v3;
    if ( v3 )
    {
    v4 = __2_YAPAXI_Z(4 * v3);
    this->Items = v4;
    if ( v4 )
      {
    v5 = this->Capacity;
    v6 = 0;
    this->IsAllocated = 1;
    if ( v5 > 0 )
        {
    do
          {
    *(int *)(this->Items + 4 * v6) = *((int *)aP1->Items + v6);
    ++v6;
          }
    while ( v6 < this->Capacity );
        }
      }
    }
    else
    {
    this->Items = 0;
    this->IsAllocated = 0;
    }
  }
    this->Count = (int)aP1[1].vtable0;
    this->CapacityIncrement = (int)aP1[1].Items;
    this->unknown_18 = aP1[1].Capacity;
    return this;
}
}

// 0x67A290
int * TypeList::CopyInfantry(CCINIClass * aP1)
{
{
    int v3;
    int v4;
    int v5;
    int v6;
    if ( this != (int *)aP1 )
  {
    this->Clear();
    v3 = aP1->headNode[1];
    this->Capacity = v3;
    if ( v3 )
    {
    v4 = __2_YAPAXI_Z(4 * v3);
    this->Items = v4;
    if ( v4 )
      {
    v5 = this->Capacity;
    v6 = 0;
    this->IsAllocated = 1;
    if ( v5 > 0 )
        {
    do
          {
    *(int *)(this->Items + 4 * v6) = *(int *)(aP1->headNode[0] + 4 * v6);
    ++v6;
          }
    while ( v6 < this->Capacity );
        }
      }
    }
    else
    {
    this->Items = 0;
    this->IsAllocated = 0;
    }
  }
    this->Count = aP1->sectionHead[0];
    this->CapacityIncrement = aP1->sectionHead[1];
    this->unknown_18 = aP1->sectionHead[2];
    return this;
}
}

// 0x67A390
CCINIClass * TypeList::VoxelAnimConstructor()
{
{
    this->Items = 0;
    this->Capacity = 0;
    this->IsInitialized = 1;
    this->IsAllocated = 0;
    this->CapacityIncrement = 10;
    this->Count = 0;
    *(void**)this = &vt_TypeList_VoxelAnimTypeClass_const;
    return (CCINIClass *)this;
}
}

// 0x67A410
namespace gamemd {
void TypeList_VoxelAnim::ddtor()
{
{
    void *v2;
    v2 = *(void **)(this + 4);
    this->Count = 0;
    if ( v2 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v2);
    this->Items = 0;
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x67A440
namespace gamemd {
unsigned int TypeList_VoxelAnim::GetIndex(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x67A460
namespace gamemd {
int TypeList_VoxelAnim::Clear(int a2)
{
{
    return *(int *)(this->Items + 4 * a2);
}
}
} // namespace gamemd

// 0x67A4F0
DynamicVector * TypeList::Construct()
{
{
    this->Items = 0;
    this->Capacity = 0;
    this->IsInitialized = 1;
    this->IsAllocated = 0;
    this->CapacityIncrement = 10;
    this->Count = 0;
    *(void**)this = &vt_TypeList_int;
    return (DynamicVector *)this;
}
}

// 0x67A600
CCINIClass * TypeList::ConstructSmudge()
{
{
    this->Items = 0;
    this->Capacity = 0;
    this->IsInitialized = 1;
    this->IsAllocated = 0;
    this->CapacityIncrement = 10;
    this->Count = 0;
    *(void**)this = &vt_TypeList_SmudgeTypeClass_const;
    return (CCINIClass *)this;
}
}

// 0x67A680
namespace gamemd {
void TypeList_VoxelAnim::TypeList_vt03()
{
{
    void *v2;
    v2 = *(void **)(this + 4);
    this->Count = 0;
    if ( v2 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v2);
    this->Items = 0;
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x67A6B0
namespace gamemd {
unsigned int TypeList_VoxelAnim::TypeList_vt05(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x67A6D0
int TypeList::Clear(int a2)
{
{
    return *(int *)(this->Items + 4 * a2);
}
}

// 0x67A820
unsigned int * TypeList::InfantryConstructor()
{
{
    this->Items = 0;
    this->Capacity = 0;
    this->IsInitialized = 1;
    this->IsAllocated = 0;
    this->CapacityIncrement = 10;
    this->Count = 0;
    *(void**)this = &vt_TypeList_InfantryTypeClass_const;
    return this;
}
}

// 0x67A930
namespace gamemd {
void TypeList_cptr_TerrainTypeClass::GetClassIdentifier()
{
{
    void *v2;
    v2 = *(void **)(this + 4);
    this->Count = 0;
    if ( v2 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v2);
    this->Items = 0;
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x67A960
namespace gamemd {
unsigned int TypeList_cptr_TerrainTypeClass::GetIndex(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x67A980
namespace gamemd {
int TypeList_cptr_TerrainTypeClass::SaveToINI(int a2)
{
{
    return *(int *)(this->Items + 4 * a2);
}
}
} // namespace gamemd

// 0x67A990
namespace gamemd {
TypeList * TypeList_VoxelAnim::Add(char a2)
{
{
    void *v3;
    v3 = (void *)*(this + 1);
    *(void**)this = &vt_VectorClass_VoxelAnimTypeClass_const;
    if ( v3 && *(int *)(this + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(this + 1) = 0;
  }
    *(int *)(this + 13) = 0;
    *(this + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (TypeList *)this;
}
}
} // namespace gamemd

// 0x67A9E0
namespace gamemd {
TypeList * TypeList_VoxelAnim::TypeList_vt00(char a2)
{
{
    void *v3;
    v3 = (void *)*(this + 1);
    *(void**)this = &vt_VectorClass_SmudgeTypeClass_const;
    if ( v3 && *(int *)(this + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(this + 1) = 0;
  }
    *(int *)(this + 13) = 0;
    *(this + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (TypeList *)this;
}
}
} // namespace gamemd

// 0x67AA30
namespace gamemd {
TypeList * TypeList_cptr_TerrainTypeClass::Add(char a2)
{
{
    void *v3;
    v3 = (void *)*(this + 1);
    *(void**)this = &vt_VectorClass_TerrainTypeClass_const;
    if ( v3 && *(int *)(this + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(this + 1) = 0;
  }
    *(int *)(this + 13) = 0;
    *(this + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (TypeList *)this;
}
}
} // namespace gamemd

// 0x67AAF0
namespace gamemd {
char TypeList_VoxelAnim::AddRef(int a2)
{
{
    int v2;
    int v3;
    int *v4;
    int v5;
    v2 = this->Capacity;
    if ( v2 == *(int *)(a2 + 8) )
  {
    v3 = 0;
    if ( v2 <= 0 )
    return 1;
    v4 = (int *)this->Items;
    v5 = *(int *)(a2 + 4) - (int)v4;
    while ( *v4 == *(int *)((char *)(v4) + v5) )
    {
    ++v3;
    ++v4;
    if ( v3 >= v2 )
    return 1;
    }
  }
    return 0;
}
}
} // namespace gamemd

// 0x67AB30
namespace gamemd {
char TypeList_VoxelAnim::SetCapacity(int a2, unsigned int * a3)
{
{
    int *v4;
    int v6;
    int i;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( v4 )
    {
    if ( this->Items )
      {
    v6 = this->Capacity;
    if ( a2 < v6 )
    v6 = a2;
    for ( i = 0; i < v6; v4[i - 1] = *(int *)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
        {
    __3_YAXPAX_Z(*((void **)(this) + 1));
    this->Items = 0;
        }
      }
    this->Items = v4;
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
    return 1;
    }
    else
    {
    return 0;
    }
  }
    else
  {
    this->ddtor();
    return 1;
  }
}
}
} // namespace gamemd

// 0x67AC10
namespace gamemd {
int TypeList_VoxelAnim::IndexOf(unsigned int * a2)
{
{
    int result;
    int v3;
    int *i;
    if ( !this->IsInitialized )
    return 0;
    v3 = this->Capacity;
    result = 0;
    if ( v3 <= 0 )
    return -1;
    for ( i = *(int **)(this + 4); *i != *a2; ++i )
  {
    if ( ++result >= v3 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x67AC50
namespace gamemd {
unsigned int TypeList_VoxelAnim::PointerToIndex(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x67ACD0
namespace gamemd {
char TypeList_VoxelAnim::Remove(int a2, unsigned int * a3)
{
{
    int *v4;
    int v5;
    int i;
    int v7;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( !v4 )
    return 0;
    if ( this->Items )
    {
    v5 = this->Capacity;
    if ( a2 < v5 )
    v5 = a2;
    for ( i = 0; i < v5; v4[i - 1] = *(int *)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
      {
    __3_YAXPAX_Z(*((void **)(this) + 1));
    this->Items = 0;
      }
    }
    this->Items = v4;
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
  }
    else
  {
    this->ddtor();
  }
    v7 = this->Capacity;
    if ( v7 < this->Count )
    this->Count = v7;
    return 1;
}
}
} // namespace gamemd

// 0x67ADD0
namespace gamemd {
int TypeList_VoxelAnim::GetSize(unsigned int * a2)
{
{
    int v2;
    int result;
    int *i;
    v2 = this->Count;
    result = 0;
    if ( v2 <= 0 )
    return -1;
    for ( i = (int *)this->Items; *i != *a2; ++i )
  {
    if ( ++result >= v2 )
    return -1;
  }
    return result;
}
} // namespace gamemd

// 0x67AE70
char TypeList::AddRef(int a2)
{
{
    int v2;
    int v3;
    int *v4;
    int v5;
    v2 = this->Capacity;
    if ( v2 == *(int *)(a2 + 8) )
  {
    v3 = 0;
    if ( v2 <= 0 )
    return 1;
    v4 = (int *)this->Items;
    v5 = *(int *)(a2 + 4) - (int)v4;
    while ( *v4 == *(int *)((char *)(v4) + v5) )
    {
    ++v3;
    ++v4;
    if ( v3 >= v2 )
    return 1;
    }
  }
    return 0;
}
}

// 0x67B050
char TypeList::Release(int a2, unsigned int * a3)
{
{
    int *v4;
    int v5;
    int i;
    int v7;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( !v4 )
    return 0;
    if ( this->Items )
    {
    v5 = this->Capacity;
    if ( a2 < v5 )
    v5 = a2;
    for ( i = 0; i < v5; v4[i - 1] = *(int *)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
      {
    __3_YAXPAX_Z(*((void **)(this) + 1));
    this->Items = 0;
      }
    }
    this->Items = v4;
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
  }
    else
  {
    this->Clear();
  }
    v7 = this->Capacity;
    if ( v7 < this->Count )
    this->Count = v7;
    return 1;
}
}

// 0x67B150
namespace gamemd {
int TypeList_VoxelAnim::TypeList_vt04(unsigned int * a2)
{
{
    int v2;
    int result;
    int *i;
    v2 = this->Count;
    result = 0;
    if ( v2 <= 0 )
    return -1;
    for ( i = (int *)this->Items; *i != *a2; ++i )
  {
    if ( ++result >= v2 )
    return -1;
  }
    return result;
}
} // namespace gamemd

// 0x67B1F0
namespace gamemd {
char TypeList_cptr_TerrainTypeClass::AddRef(int a2)
{
{
    int v2;
    int v3;
    int *v4;
    int v5;
    v2 = this->Capacity;
    if ( v2 == *(int *)(a2 + 8) )
  {
    v3 = 0;
    if ( v2 <= 0 )
    return 1;
    v4 = (int *)this->Items;
    v5 = *(int *)(a2 + 4) - (int)v4;
    while ( *v4 == *(int *)((char *)(v4) + v5) )
    {
    ++v3;
    ++v4;
    if ( v3 >= v2 )
    return 1;
    }
  }
    return 0;
}
}
} // namespace gamemd

// 0x67B230
namespace gamemd {
char TypeList_cptr_TerrainTypeClass::SetCapacity(int a2, unsigned int * a3)
{
{
    int *v4;
    int v6;
    int i;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( v4 )
    {
    if ( this->Items )
      {
    v6 = this->Capacity;
    if ( a2 < v6 )
    v6 = a2;
    for ( i = 0; i < v6; v4[i - 1] = *(int *)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
        {
    __3_YAXPAX_Z(*((void **)(this) + 1));
    this->Items = 0;
        }
      }
    this->Items = v4;
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
    return 1;
    }
    else
    {
    return 0;
    }
  }
    else
  {
    this->GetClassIdentifier();
    return 1;
  }
}
}
} // namespace gamemd

// 0x67B2E0
namespace gamemd {
void TypeList_cptr_TerrainTypeClass::TryFreeAndClear()
{
{
    if ( this->Items && this->IsAllocated )
  {
    __3_YAXPAX_Z(*(void **)(this + 4));
    this->Items = 0;
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x67B310
namespace gamemd {
int TypeList_cptr_TerrainTypeClass::IndexOf(unsigned int * a2)
{
{
    int result;
    int v3;
    int *i;
    if ( !this->IsInitialized )
    return 0;
    v3 = this->Capacity;
    result = 0;
    if ( v3 <= 0 )
    return -1;
    for ( i = *(int **)(this + 4); *i != *a2; ++i )
  {
    if ( ++result >= v3 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x67B350
namespace gamemd {
unsigned int TypeList_cptr_TerrainTypeClass::PointerToIndex(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x67B3D0
namespace gamemd {
char TypeList_cptr_TerrainTypeClass::Remove(int a2, unsigned int * a3)
{
{
    int *v4;
    int v5;
    int i;
    int v7;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( !v4 )
    return 0;
    if ( this->Items )
    {
    v5 = this->Capacity;
    if ( a2 < v5 )
    v5 = a2;
    for ( i = 0; i < v5; v4[i - 1] = *(int *)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
      {
    __3_YAXPAX_Z(*((void **)(this) + 1));
    this->Items = 0;
      }
    }
    this->Items = v4;
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
  }
    else
  {
    this->GetClassIdentifier();
  }
    v7 = this->Capacity;
    if ( v7 < this->Count )
    this->Count = v7;
    return 1;
}
}
} // namespace gamemd

// 0x67B4D0
namespace gamemd {
int TypeList_cptr_TerrainTypeClass::GetSize(unsigned int * a2)
{
{
    int v2;
    int result;
    int *i;
    v2 = this->Count;
    result = 0;
    if ( v2 <= 0 )
    return -1;
    for ( i = (int *)this->Items; *i != *a2; ++i )
  {
    if ( ++result >= v2 )
    return -1;
  }
    return result;
}
} // namespace gamemd

// 0x67C010
namespace gamemd {
VectorClass * TypeList_VoxelAnim::Constructor(char a2)
{
{
    void *v3;
    v3 = (void *)*(this + 1);
    *(void**)this = &vt_VectorClass_VoxelAnimTypeClass_const;
    if ( v3 && *(int *)(this + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(this + 1) = 0;
  }
    *(int *)(this + 13) = 0;
    *(this + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (VectorClass *)this;
}
}
} // namespace gamemd

// 0x67C100
namespace gamemd {
DynamicVector * TypeList_VoxelAnim::Constructor_0(char a2)
{
{
    void *v3;
    v3 = (void *)*(this + 1);
    *(void**)this = &vt_VectorClass_SmudgeTypeClass_const;
    if ( v3 && *(int *)(this + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(this + 1) = 0;
  }
    *(int *)(this + 13) = 0;
    *(this + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (DynamicVector *)this;
}
}
} // namespace gamemd

// 0x67C150
namespace gamemd {
VectorClass * TypeList_cptr_TerrainTypeClass::Constructor(char a2)
{
{
    void *v3;
    v3 = (void *)*(this + 1);
    *(void**)this = &vt_VectorClass_TerrainTypeClass_const;
    if ( v3 && *(int *)(this + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(this + 1) = 0;
  }
    *(int *)(this + 13) = 0;
    *(this + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (VectorClass *)this;
}
}
} // namespace gamemd

// 0x67C1A0
namespace gamemd {
DynamicVector * TypeList_VoxelAnim::Constructor_1(char a2)
{
{
    void *v3;
    v3 = (void *)*(this + 1);
    *(void**)this = &vt_VectorClass_TerrainTypeClass_const;
    if ( v3 && *(int *)(this + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(this + 1) = 0;
  }
    *(int *)(this + 13) = 0;
    *(this + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (DynamicVector *)this;
}
}
} // namespace gamemd

// 0x67C1F0
unsigned int * TypeList::CopyVoxelAnim(VectorClass * aP1)
{
{
    int v3;
    int v4;
    int v5;
    int v6;
    this->Items = 0;
    this->Capacity = 0;
    this->IsInitialized = 1;
    this->IsAllocated = 0;
    *(void**)this = &vt_VectorClass_VoxelAnimTypeClass_const;
    if ( this != (int *)aP1 )
  {
    Vector::Cleanup2((int)this);
    v3 = aP1->Capacity;
    this->Capacity = v3;
    if ( v3 )
    {
    v4 = __2_YAPAXI_Z(4 * v3);
    this->Items = v4;
    if ( v4 )
      {
    v5 = this->Capacity;
    v6 = 0;
    this->IsAllocated = 1;
    if ( v5 > 0 )
        {
    do
          {
    *(int *)(this->Items + 4 * v6) = *((int *)aP1->Items + v6);
    ++v6;
          }
    while ( v6 < this->Capacity );
        }
      }
    }
    else
    {
    this->Items = 0;
    this->IsAllocated = 0;
    }
  }
    this->Count = aP1[1].vtable0;
    this->CapacityIncrement = aP1[1].Items;
    *(void**)this = &vt_TypeList_VoxelAnimTypeClass_const;
    return this;
}
}

// 0x717B70
namespace gamemd {
TypeList * TypeList_cptr_ParticleSystemTypeClass::QueryInterface(char a2)
{
{
    void *v3;
    v3 = (void *)*(this + 1);
    *(void**)this = &vt_VectorClass_ParticleSystemTypeClass_const;
    if ( v3 && *(int *)(this + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(this + 1) = 0;
  }
    *(int *)(this + 13) = 0;
    *(this + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (TypeList *)this;
}
}
} // namespace gamemd

// 0x717C70
unsigned int * TypeList::ParticleConstructor(int a2, int a3)
{
{
    this->Items = 0;
    this->Capacity = a2;
    this->IsInitialized = 1;
    this->IsAllocated = 0;
    *(void**)this = &vt_VectorClass_ParticleSystemTypeClass_const;
    if ( a2 )
  {
    if ( a3 )
    {
    this->Items = a3;
    }
    else
    {
    this->Items = __2_YAPAXI_Z(4 * a2);
    this->IsAllocated = 1;
    }
  }
    *(void**)this = &vt_DynamicVectorClass_ParticleSystemTypeClass_const;
    this->CapacityIncrement = 10;
    this->Count = 0;
    return this;
}
}

// 0x717CD0
char TypeList::PushBack(VectorClass * aP1)
{
{
    int v3;
    int v4;
    int v6;
    int v7;
    v3 = this->Capacity;
    if ( this->Count >= v3 )
  {
    if ( !this->IsAllocated && v3 )
    return 0;
    v4 = this->CapacityIncrement;
    if ( v4 <= 0 || !this->SetCapacity(v3 + v4, 0) )
    return 0;
  }
    v6 = this->Count;
    v7 = this->Items;
    this->Count = v6 + 1;
    *(int *)(v7 + 4 * v6) = *(int *)aP1->vtable0;
    return 1;
}
}
