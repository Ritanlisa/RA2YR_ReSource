// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/RocketLocomotionClass_17_e4.hpp"

// 0x661EC0
int RocketLocomotionClass::RocketLocomotionClass()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall RocketLocomotionClass::RocketLocomotionClass(int this)
{
  wchar_t *v2; // ecx

  LocomotionClass::Init((_DWORD *)this); /*0x661ec3*/
  this->MovingDestination = dword_B04E38; /*0x661ed1*/
  *(_DWORD *)(this + 28) = dword_B04E3C; /*0x661eda*/
  *(_DWORD *)(this + 32) = dword_B04E40; /*0x661ee3*/
  this->MissionTimer = MEMORY[0xA8ED84]; /*0x661eee*/
  this->MissionTimer.TimeLeft = 0; /*0x661ef1*/
  this->MissionTimer.Rate = 0; /*0x661ef4*/
  v2 = MEMORY[0xA8ED84]; /*0x661ef7*/
  this->TrailerTimer.TimeLeft = 0; /*0x661efd*/
  this->TrailerTimer = v2; /*0x661f00*/
  this->CurrentSpeed = 0; /*0x661f03*/
  this->MissionState = 0; /*0x661f06*/
  *(_DWORD *)(this + 76) = 0; /*0x661f09*/
  this->SpawnerIsElite = 0; /*0x661f0c*/
  this->CurrentPitch = 0; /*0x661f0f*/
  this->RocketLocomotionClass_field_58 = 0; /*0x661f12*/
  this->RocketLocomotionClass_field_bool_4C = 1; /*0x661f15*/
  *(_DWORD *)this = &RocketLocomotionClass::`vftable'; /*0x661f19*/
  *(_DWORD *)(this + 4) = &vt_RocketLocomotionClass; /*0x661f1f*/
  return this; /*0x661f28*/
}
}

// 0x663410
int RocketLocomotionClass::BeginMove(int * a1, int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall RocketLocomotionClass::_vt05(int *a1, int *a2)
{
  int result; // eax
  wchar_t *v3; // ecx

  result = SwizzleManager::SaveLoad(a1, a2); /*0x66341b*/
  if ( result >= 0 ) /*0x663422*/
  {
    if ( a1 ) /*0x663426*/
    {
      *a1 = (int)&LocomotionClass::`vftable'; /*0x663428*/
      a1[1] = (int)&vt_LocomotionClass; /*0x66342e*/
      v3 = MEMORY[0xA8ED84]; /*0x663435*/
      a1[15] = 0; /*0x66343b*/
      a1[13] = (int)v3; /*0x663442*/
      *a1 = (int)&RocketLocomotionClass::`vftable'; /*0x663445*/
      a1[1] = (int)&vt_RocketLocomotionClass; /*0x66344b*/
    }
  }
  return result; /*0x663452*/
}
}

// 0x6635C0
RocketLocomotionClass * RocketLocomotionClass::ProcessMove(char a2)
{
{
    *(void**)this = vt_RocketLocomotionClass;
    *(this + 1) = &vt_RocketLocomotionClass;
    LocomotionClass::Construct(this);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (RocketLocomotionClass *)this;
}
}

// 0x6647B0
namespace gamemd {
void RocketLocomotionClass_17::ddtor()
{
{
    void *v2;
    v2 = *(void **)(this + 4);
    this->RocketLocomotionClass_17_field_0x10 = 0;
    if ( v2 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v2);
    this->RocketLocomotionClass_17_field_0x4 = 0;
  }
    this->IsAllocated = 0;
    this->RocketLocomotionClass_17_field_0x8 = 0;
}
}
} // namespace gamemd

// 0x664800
namespace gamemd {
int RocketLocomotionClass_17::UpdateMovement(int a2)
{
{
    return *(int *)(this->Items + 4 * a2);
}
}
} // namespace gamemd

// 0x664810
namespace gamemd {
char RocketLocomotionClass_17::AddRef(int a2)
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

// 0x664850
namespace gamemd {
char RocketLocomotionClass_17::SetCapacity(int a2, unsigned int * a3)
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
    if ( this->RocketLocomotionClass_17_field_0x4 )
      {
    v6 = this->RocketLocomotionClass_17_field_0x8;
    if ( a2 < v6 )
    v6 = a2;
    for ( i = 0; i < v6; v4[i - 1] = *(int *)(this->RocketLocomotionClass_17_field_0x4 + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
        {
    __3_YAXPAX_Z(*((void **)(this) + 1));
    this->RocketLocomotionClass_17_field_0x4 = 0;
        }
      }
    this->RocketLocomotionClass_17_field_0x4 = v4;
    this->RocketLocomotionClass_17_field_0x8 = a2;
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

// 0x664900
namespace gamemd {
void RocketLocomotionClass_17::Destroy()
{
{
    if ( this->RocketLocomotionClass_17_field_0x4 && this->IsAllocated )
  {
    __3_YAXPAX_Z(*(void **)(this + 4));
    this->RocketLocomotionClass_17_field_0x4 = 0;
  }
    this->IsAllocated = 0;
    this->RocketLocomotionClass_17_field_0x8 = 0;
}
}
} // namespace gamemd

// 0x664930
namespace gamemd {
int RocketLocomotionClass_17::IndexOf(unsigned int * a2)
{
{
    int result;
    int v3;
    int *i;
    if ( !(unsigned char)this->RocketLocomotionClass_17_field_0xC )
    return 0;
    v3 = this->RocketLocomotionClass_17_field_0x8;
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

// 0x664990
namespace gamemd {
char RocketLocomotionClass_17::Release(int a2, unsigned int * a3)
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
    if ( this->RocketLocomotionClass_17_field_0x4 )
    {
    v5 = this->RocketLocomotionClass_17_field_0x8;
    if ( a2 < v5 )
    v5 = a2;
    for ( i = 0; i < v5; v4[i - 1] = *(int *)(this->RocketLocomotionClass_17_field_0x4 + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
      {
    __3_YAXPAX_Z(*((void **)(this) + 1));
    this->RocketLocomotionClass_17_field_0x4 = 0;
      }
    }
    this->RocketLocomotionClass_17_field_0x4 = v4;
    this->RocketLocomotionClass_17_field_0x8 = a2;
    this->IsAllocated = a3 == 0;
  }
    else
  {
    this->ddtor();
  }
    v7 = this->RocketLocomotionClass_17_field_0x8;
    if ( v7 < this->RocketLocomotionClass_17_field_0x10 )
    this->RocketLocomotionClass_17_field_0x10 = v7;
    return 1;
}
}
} // namespace gamemd

// 0x664A40
namespace gamemd {
int RocketLocomotionClass_17::Launch(unsigned int * a2)
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

// 0x664A70
namespace gamemd {
VectorClass * RocketLocomotionClass_17::Constructor(char a2)
{
{
    void *v3;
    v3 = (void *)*(this + 1);
    *(void**)this = &vt_VectorClass_OwnerTalkClass_ConnectionListStruct;
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

// 0x664AC0
namespace gamemd {
DynamicVector * RocketLocomotionClass_17::QueryInterface(char a2)
{
{
    void *v3;
    v3 = (void *)*(this + 1);
    *(void**)this = &vt_VectorClass_OwnerTalkClass_ConnectionListStruct;
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

// 0x6633D0
int RocketLocomotionClass::ddtor(int a1, unsigned int * a2)
{
  if ( !a2 )
    return -2147467261;
  *a2 = -1212901530;
  a2[1] = 299099510;
  a2[2] = 268491163;
  a2[3] = -399534261;
  return 0;
}

// 0x6635B0
int RocketLocomotionClass::StubReturn96()
{
return 96;
}

// 0x6647E0
namespace gamemd {
unsigned int RocketLocomotionClass_17::BeginMove(int a2)
{
{
    if ( (unsigned char)this->RocketLocomotionClass_17_field_0xC )
    return (unsigned int)(a2 - this->RocketLocomotionClass_17_field_0x4) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x664970
namespace gamemd {
unsigned int RocketLocomotionClass_17::PointerToIndex(int a2)
{
{
    if ( (unsigned char)this->RocketLocomotionClass_17_field_0xC )
    return (unsigned int)(a2 - this->RocketLocomotionClass_17_field_0x4) >> 2;
    else
    return 0;
}
}
} // namespace gamemd
