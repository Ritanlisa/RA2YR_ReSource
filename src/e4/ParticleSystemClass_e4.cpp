// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/ParticleSystemClass_16_e4.hpp"
#include "e4/classes/ParticleSystemClass_32__e4.hpp"
#include "e4/classes/ParticleSystemClass_32_e4.hpp"

// 0x4E8470
namespace gamemd {
void ParticleSystemClass::GetClassIdentifier()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall ParticleSystemClass::_vt03(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x4e8476*/
  this->uniqueId = 0; /*0x4e8479*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x4e8480*/
  {
    __3_YAXPAX_Z(v2); /*0x4e8486*/
    this->vtable1 = 0; /*0x4e848e*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x4e8491*/
  this->vtable2 = 0; /*0x4e8494*/
}
}
} // namespace gamemd

// 0x4E84C0
namespace gamemd {
int ParticleSystemClass::SaveToINI(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall ParticleSystemClass::_vt06(_DWORD *this, int a2)
{
  return *(_DWORD *)(*(this + 1) + 4 * a2); /*0x4e84ca*/
}
}
} // namespace gamemd

// 0x4E8780
namespace gamemd {
void ParticleSystemClass::initParticleArray()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall ParticleSystemClass::sub_4E8780(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x4e8786*/
  this->uniqueId = 0; /*0x4e8789*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x4e8790*/
  {
    __3_YAXPAX_Z(v2); /*0x4e8796*/
    this->vtable1 = 0; /*0x4e879e*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x4e87a1*/
  this->vtable2 = 0; /*0x4e87a4*/
}
}
} // namespace gamemd

// 0x62FE60
namespace gamemd {
BOOL ParticleSystemClass::Draw()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
BOOL __thiscall ParticleSystemClass::_vt17(int this)
{
  return *(_BYTE *)(this + 248) && !this->Owner; /*0x62fe79*/
}
}
} // namespace gamemd

// 0x630230
namespace gamemd {
int ParticleSystemClass_ddtor()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// (no pseudocode — ASM-only function)
}
} // namespace gamemd

// 0x4E87D0
namespace gamemd {
int ParticleSystemClass_16::Write(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall ParticleSystemClass_16_::_vt06(_DWORD *this, int a2)
{
  return *(_DWORD *)(*(this + 1) + 4 * a2); /*0x4e87da*/
}
}
} // namespace gamemd

// 0x4EB260
namespace gamemd {
char ParticleSystemClass_16::AddRef(int a2)
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

// 0x4EB2A0
namespace gamemd {
char ParticleSystemClass_16::Release(int a2, unsigned int * a3)
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
    if ( this->ParticleSystemClass_16_field_0x4 )
      {
    v6 = this->ParticleSystemClass_16_field_0x8;
    if ( a2 < v6 )
    v6 = a2;
    for ( i = 0; i < v6; v4[i - 1] = *(int *)(this->ParticleSystemClass_16_field_0x4 + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
        {
    __3_YAXPAX_Z(*((void **)(this) + 1));
    this->ParticleSystemClass_16_field_0x4 = 0;
        }
      }
    this->ParticleSystemClass_16_field_0x4 = v4;
    this->ParticleSystemClass_16_field_0x8 = a2;
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

// 0x4EB350
namespace gamemd {
void ParticleSystemClass_16::ddtor()
{
{
    if ( this->ParticleSystemClass_16_field_0x4 && this->IsAllocated )
  {
    __3_YAXPAX_Z(*(void **)(this + 4));
    this->ParticleSystemClass_16_field_0x4 = 0;
  }
    this->IsAllocated = 0;
    this->ParticleSystemClass_16_field_0x8 = 0;
}
}
} // namespace gamemd

// 0x4EB380
namespace gamemd {
int ParticleSystemClass_16::Init(unsigned int * a2)
{
{
    int result;
    int v3;
    int *i;
    if ( !(unsigned char)this->ParticleSystemClass_16_field_0xC )
    return 0;
    v3 = this->ParticleSystemClass_16_field_0x8;
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

// 0x4EFD50
namespace gamemd {
VectorClass * ParticleSystemClass_16::QueryInterface(char a2)
{
{
    void *v3;
    v3 = (void *)*(this + 1);
    *(void**)this = &vt_VectorClass_SmudgeClass;
    if ( v3 && *((char *)(this) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(this + 1) = 0;
  }
    *((char *)(this) + 13) = 0;
    *(this + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (VectorClass *)this;
}
}
} // namespace gamemd

// 0x4E82F0
namespace gamemd {
void ParticleSystemClass_32::ClearBuffer()
{
{
    void *v2;
    v2 = *(void **)(this + 4);
    this->ParticleSystemClass_32_field_0x10 = 0;
    if ( v2 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v2);
    this->ParticleSystemClass_32_field_0x4 = 0;
  }
    this->IsAllocated = 0;
    this->ParticleSystemClass_32_field_0x8 = 0;
}
}
} // namespace gamemd

// 0x4E87E0
namespace gamemd {
void ParticleSystemClass_32::Destroy()
{
{
    void *v2;
    v2 = *(void **)(this + 4);
    this->ParticleSystemClass_32_field_0x10 = 0;
    if ( v2 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v2);
    this->ParticleSystemClass_32_field_0x4 = 0;
  }
    this->IsAllocated = 0;
    this->ParticleSystemClass_32_field_0x8 = 0;
}
}
} // namespace gamemd

// 0x4E8830
namespace gamemd {
int ParticleSystemClass_32::Write(int a2)
{
{
    return *(int *)(this->Items + 4 * a2);
}
}
} // namespace gamemd

// 0x4E8840
namespace gamemd {
void ParticleSystemClass_32::ReleaseBuffer()
{
{
    void *v2;
    v2 = *(void **)(this + 4);
    this->ParticleSystemClass_32_field_0x10 = 0;
    if ( v2 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v2);
    this->ParticleSystemClass_32_field_0x4 = 0;
  }
    this->IsAllocated = 0;
    this->ParticleSystemClass_32_field_0x8 = 0;
}
}
} // namespace gamemd

// 0x4E95E0
namespace gamemd {
char ParticleSystemClass_32::SetCapacity(int a2, unsigned int * a3)
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
    if ( this->ParticleSystemClass_32_field_0x4 )
    {
    v5 = this->ParticleSystemClass_32_field_0x8;
    if ( a2 < v5 )
    v5 = a2;
    for ( i = 0; i < v5; v4[i - 1] = *(int *)(this->ParticleSystemClass_32_field_0x4 + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
      {
    __3_YAXPAX_Z(*((void **)(this) + 1));
    this->ParticleSystemClass_32_field_0x4 = 0;
      }
    }
    this->ParticleSystemClass_32_field_0x4 = v4;
    this->ParticleSystemClass_32_field_0x8 = a2;
    this->IsAllocated = a3 == 0;
  }
    else
  {
    this->Destroy();
  }
    v7 = this->ParticleSystemClass_32_field_0x8;
    if ( v7 < this->ParticleSystemClass_32_field_0x10 )
    this->ParticleSystemClass_32_field_0x10 = v7;
    return 1;
}
}
} // namespace gamemd

// 0x4E9690
namespace gamemd {
int ParticleSystemClass_32::FindItem(unsigned int * a2)
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

// 0x4EB4C0
namespace gamemd {
char ParticleSystemClass_32::AddRef(int a2)
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

// 0x4EB500
namespace gamemd {
char ParticleSystemClass_32::Release(int a2, unsigned int * a3)
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
    if ( this->ParticleSystemClass_32_field_0x4 )
      {
    v6 = this->ParticleSystemClass_32_field_0x8;
    if ( a2 < v6 )
    v6 = a2;
    for ( i = 0; i < v6; v4[i - 1] = *(int *)(this->ParticleSystemClass_32_field_0x4 + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
        {
    __3_YAXPAX_Z(*((void **)(this) + 1));
    this->ParticleSystemClass_32_field_0x4 = 0;
        }
      }
    this->ParticleSystemClass_32_field_0x4 = v4;
    this->ParticleSystemClass_32_field_0x8 = a2;
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
    this->Destroy();
    return 1;
  }
}
}
} // namespace gamemd

// 0x4EB5B0
namespace gamemd {
void ParticleSystemClass_32::ddtor()
{
{
    if ( this->ParticleSystemClass_32_field_0x4 && this->IsAllocated )
  {
    __3_YAXPAX_Z(*(void **)(this + 4));
    this->ParticleSystemClass_32_field_0x4 = 0;
  }
    this->IsAllocated = 0;
    this->ParticleSystemClass_32_field_0x8 = 0;
}
}
} // namespace gamemd

// 0x4EB5E0
namespace gamemd {
int ParticleSystemClass_32::Init(unsigned int * a2)
{
{
    int result;
    int v3;
    int *i;
    if ( !(unsigned char)this->ParticleSystemClass_32_field_0xC )
    return 0;
    v3 = this->ParticleSystemClass_32_field_0x8;
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

// 0x4EB640
namespace gamemd {
char ParticleSystemClass_32::CopyParticles2(int a2, unsigned int * a3)
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
    if ( this->ParticleSystemClass_32_field_0x4 )
    {
    v5 = this->ParticleSystemClass_32_field_0x8;
    if ( a2 < v5 )
    v5 = a2;
    for ( i = 0; i < v5; v4[i - 1] = *(int *)(this->ParticleSystemClass_32_field_0x4 + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
      {
    __3_YAXPAX_Z(*((void **)(this) + 1));
    this->ParticleSystemClass_32_field_0x4 = 0;
      }
    }
    this->ParticleSystemClass_32_field_0x4 = v4;
    this->ParticleSystemClass_32_field_0x8 = a2;
    this->IsAllocated = a3 == 0;
  }
    else
  {
    this->Destroy();
  }
    v7 = this->ParticleSystemClass_32_field_0x8;
    if ( v7 < this->ParticleSystemClass_32_field_0x10 )
    this->ParticleSystemClass_32_field_0x10 = v7;
    return 1;
}
}
} // namespace gamemd

// 0x4EB6F0
namespace gamemd {
int ParticleSystemClass_32::FindParticle2(unsigned int * a2)
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

// 0x4EF5D0
namespace gamemd {
DynamicVector * ParticleSystemClass_32::Constructor_VectorClass_BuildingClass___(char a2)
{
{
    void *v3;
    v3 = (void *)*(this + 1);
    *(void**)this = &vt_VectorClass_BuildingClass;
    if ( v3 && *((char *)(this) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(this + 1) = 0;
  }
    *((char *)(this) + 13) = 0;
    *(this + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (DynamicVector *)this;
}
}
} // namespace gamemd

// 0x4EFDF0
namespace gamemd {
VectorClass * ParticleSystemClass_32::QueryInterface(char a2)
{
{
    void *v3;
    v3 = (void *)*(this + 1);
    *(void**)this = &vt_VectorClass_TerrainClass;
    if ( v3 && *((char *)(this) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(this + 1) = 0;
  }
    *((char *)(this) + 13) = 0;
    *(this + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (VectorClass *)this;
}
}
} // namespace gamemd

// 0x4EFE40
namespace gamemd {
DynamicVector * ParticleSystemClass_32::Constructor_VectorClass_TerrainClass___(char a2)
{
{
    void *v3;
    v3 = (void *)*(this + 1);
    *(void**)this = &vt_VectorClass_TerrainClass;
    if ( v3 && *((char *)(this) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(this + 1) = 0;
  }
    *((char *)(this) + 13) = 0;
    *(this + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (DynamicVector *)this;
}
}
} // namespace gamemd

// 0x4EFEE0
namespace gamemd {
DynamicVector * ParticleSystemClass_32::Constructor_VectorClass_AircraftClass___(char a2)
{
{
    void *v3;
    v3 = (void *)*(this + 1);
    *(void**)this = &vt_VectorClass_AircraftClass;
    if ( v3 && *((char *)(this) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(this + 1) = 0;
  }
    *((char *)(this) + 13) = 0;
    *(this + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (DynamicVector *)this;
}
}
} // namespace gamemd

// 0x4EB8A0
namespace gamemd {
char ParticleSystemClass_32_::ResizeDataArray(int a2, unsigned int * a3)
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
    if ( this->ParticleSystemClass_32__field_0x4 )
    {
    v5 = this->Capacity;
    if ( a2 < v5 )
    v5 = a2;
    for ( i = 0; i < v5; v4[i - 1] = *(int *)(this->ParticleSystemClass_32__field_0x4 + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
      {
    __3_YAXPAX_Z(*((void **)(this) + 1));
    this->ParticleSystemClass_32__field_0x4 = 0;
      }
    }
    this->ParticleSystemClass_32__field_0x4 = v4;
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
  }
    else
  {
    this->ReleaseBuffer();
  }
    v7 = this->Capacity;
    if ( v7 < this->ParticleSystemClass_32__field_0x10 )
    this->ParticleSystemClass_32__field_0x10 = v7;
    return 1;
}
}
} // namespace gamemd

// 0x4EB950
namespace gamemd {
int ParticleSystemClass_32_::FindElementByValue(unsigned int * a2)
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

// 0x4E8320
namespace gamemd {
unsigned int ParticleSystemClass_32::PointerToIndex(int a2)
{
{
    if ( (unsigned char)this->ParticleSystemClass_32_field_0xC )
    return (unsigned int)(a2 - this->ParticleSystemClass_32_field_0x4) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x4E84A0
namespace gamemd {
unsigned int ParticleSystemClass::LoadTypeData(int a2)
{
{
    if ( (unsigned char)this->vtable3 )
    return (unsigned int)(a2 - this->vtable1) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x4E8810
namespace gamemd {
unsigned int ParticleSystemClass_32::GetIndex2(int a2)
{
{
    if ( (unsigned char)this->ParticleSystemClass_32_field_0xC )
    return (unsigned int)(a2 - this->ParticleSystemClass_32_field_0x4) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x4E8870
namespace gamemd {
unsigned int ParticleSystemClass_32_::GetElementIndex(int a2)
{
{
    if ( (unsigned char)this->ParticleSystemClass_32__field_0xC )
    return (unsigned int)(a2 - this->ParticleSystemClass_32__field_0x4) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x4EB3C0
namespace gamemd {
unsigned int ParticleSystemClass_16::Read(int a2)
{
{
    if ( (unsigned char)this->ParticleSystemClass_16_field_0xC )
    return (unsigned int)(a2 - this->ParticleSystemClass_16_field_0x4) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x4EB620
namespace gamemd {
unsigned int ParticleSystemClass_32::Read(int a2)
{
{
    if ( (unsigned char)this->ParticleSystemClass_32_field_0xC )
    return (unsigned int)(a2 - this->ParticleSystemClass_32_field_0x4) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x62FE80
namespace gamemd {
int ParticleSystemClass::StubReturn2()
{
return 2;
}
} // namespace gamemd

// 0x630200
namespace gamemd {
int ParticleSystemClass::GetObjectSize()
{
return 256;
}
} // namespace gamemd

// 0x630210
namespace gamemd {
int ParticleSystemClass::GetTypeIdentifier()
{
return 24;
}
} // namespace gamemd
