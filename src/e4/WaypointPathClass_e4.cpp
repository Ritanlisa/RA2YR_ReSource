// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Power_e4.hpp"

// 0x763730
namespace gamemd {
int WaypointPathClass::Init()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{

  AbstractClass::Constructor((AbstractClass *)this); /*0x763733*/
  this->idxArray = -1; /*0x76373a*/
  this->waypoints.Items = 0; /*0x763741*/
  this->waypoints.Capacity = 0; /*0x763744*/
  this->waypoints.IsInitialized = 1; /*0x763747*/
  this->waypoints.IsAllocated = 0; /*0x76374b*/
  this->waypoints = &vt_DynamicVectorClass_WaypointClass; /*0x76374e*/
  this->waypoints.CapacityIncrement = 10; /*0x763755*/
  this->waypoints.Count = 0; /*0x76375c*/
  *(_DWORD *)this = &WaypointPathClass::`vftable'; /*0x76375f*/
  this->vtable1 = &WaypointPathClass::`vftable'; /*0x763765*/
  this->vtable2 = &WaypointPathClass::`vftable'; /*0x76376c*/
  this->vtable3 = &vt_WaypointPathClass; /*0x763773*/
  if ( dword_B72618 < dword_B72610 /*0x7637ac*/
    || (byte_B72615 || !dword_B72610)
    && dword_B7261C > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_B72608 + 8))(
         &dword_B72608,
         dword_B72610 + dword_B7261C,
         0) )
  {
    int v2 = dword_B72618++; /*0x7637b9*/
    *((_DWORD *)dword_B7260C + v2) = this; /*0x7637c8*/
  }
  return this; /*0x7637cd*/
}
}
} // namespace gamemd

// 0x763810
namespace gamemd {
int WaypointPathClass::Construct(WaypointClass * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{

  AbstractClass::Constructor((AbstractClass *)this); /*0x763813*/
  this->idxArray = -1; /*0x76381e*/
  this->waypoints.Items = 0; /*0x763825*/
  this->waypoints.Capacity = 0; /*0x763828*/
  this->waypoints.IsInitialized = 1; /*0x76382b*/
  this->waypoints.IsAllocated = 0; /*0x76382f*/
  this->waypoints = &vt_DynamicVectorClass_WaypointClass; /*0x763832*/
  this->waypoints.CapacityIncrement = 10; /*0x763839*/
  this->waypoints.Count = 0; /*0x763840*/
  *(_DWORD *)this = &WaypointPathClass::`vftable'; /*0x763845*/
  this->vtable1 = &WaypointPathClass::`vftable'; /*0x76384b*/
  this->vtable2 = &WaypointPathClass::`vftable'; /*0x763852*/
  this->vtable3 = &vt_WaypointPathClass; /*0x763859*/
  if ( (unsigned int)aP1 < 0xC /*0x76389a*/
    && (dword_B72618 < dword_B72610
     || (byte_B72615 || !dword_B72610)
     && dword_B7261C > 0
     && ((unsigned __int8 (__thiscall *)(DynamicVector **, int, _DWORD))dword_B72608->field_8)(
          &dword_B72608,
          dword_B72610 + dword_B7261C,
          0)) )
  {
    int v3 = dword_B72618++; /*0x7638a7*/
    *(_DWORD *)&dword_B7260C->__pad_0[4 * v3] = this; /*0x7638b6*/
  }
  return this; /*0x7638bb*/
}
}
} // namespace gamemd

// 0x763C70
namespace gamemd {
int WaypointPathClass::LoadState(unsigned int * a1, int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  int result; // eax

  AbstractClass *v2 = a1; /*0x763c76*/
  AbstractClass *v3 = a2; /*0x763c7b*/
  result = AbstractClass::SaveLoad_Prefix_0(a1, a2); /*0x763c81*/
  if ( result >= 0 ) /*0x763c8a*/
  {
    if ( v2 ) /*0x763c92*/
    {
      AbstractClass::InitVtables(v2, (int)&a2); /*0x763c9b*/
      v2[10] = &vt_DynamicVectorClass_WaypointClass; /*0x763ca0*/
      *v2 = &WaypointPathClass::`vftable'; /*0x763ca7*/
      v2[1] = &WaypointPathClass::`vftable'; /*0x763cad*/
      v2[2] = &WaypointPathClass::`vftable'; /*0x763cb4*/
      v2[3] = &vt_WaypointPathClass; /*0x763cbb*/
    }
    result = v3->vt_entry_68(&a1, 4, 0); /*0x763ccd*/
    if ( result >= 0 ) /*0x763cd2*/
    {
      VectorClass *v5 = v2 + 10; /*0x763cd8*/
      if ( v5 ) /*0x763cdd*/
      {
        WaypointPathClass::computePath(v5, 0, 0); /*0x763ce3*/
        *v5 = &vt_DynamicVectorClass_WaypointClass; /*0x763ce8*/
        v5[5] = 10; /*0x763cee*/
        v5[4] = 0; /*0x763cf5*/
      }
      int v6 = 0; /*0x763cfc*/
      if ( (int)a1 <= 0 ) /*0x763d00*/
      {
        return 0; /*0x763d78*/
      }
      else
      {
        while ( 1 ) /*0x763d02*/
        {
          int v7 = *(_DWORD *)v3; /*0x763d02*/
          int v15 = 0; /*0x763d0d*/
          int v16 = 0; /*0x763d11*/
          int v17 = 0; /*0x763d15*/
          result = (*(int (__stdcall **)(int, int *, int, _DWORD))(v7 + 12))(v3, &v15, 12, 0); /*0x763d19*/
          if ( result < 0 ) /*0x763d1e*/
            break; /*0x763d1e*/
          int v8 = v5[2]; /*0x763d20*/
          if ( v5[4] < v8 /*0x763d42*/
            || (v5->IsAllocated || !v8)
  int v9; // eax
            && (v9 = v5[5], v9 > 0)
            && v5->Release(v8 + v9, 0) )
          {
            int v10 = v5[4]; /*0x763d49*/
            int v11 = v10 + 1; /*0x763d4c*/
            int v12 = 3 * v10; /*0x763d4f*/
            int v13 = v5[1]; /*0x763d52*/
            v5[4] = v11; /*0x763d55*/
            _DWORD * v14 = (_DWORD *)(v13 + 4 * v12); /*0x763d58*/
            *v14 = v15; /*0x763d5f*/
            v14[1] = v16; /*0x763d65*/
            v14[2] = v17; /*0x763d6c*/
          }
          if ( ++v6 >= (int)a1 ) /*0x763d76*/
            return 0; /*0x763d76*/
        }
      }
    }
  }
  return result; /*0x763d7a*/
}
}
} // namespace gamemd

// 0x764760
namespace gamemd {
unsigned int * WaypointPathClass::computePath(int a2, unsigned int * a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{

  this->vtable2 = 0; /*0x76476d*/
  this->vtable3 = a2; /*0x764770*/
  this->vtable4 = 1; /*0x764773*/
  *((_BYTE *)this + 13) = 0; /*0x764777*/
  *this = &vt_VectorClass_WaypointClass; /*0x76477a*/
  if ( !a2 ) /*0x764780*/
    return this; /*0x764780*/
  if ( !a3 ) /*0x764788*/
  {
  _DWORD *v8; // edx
    _DWORD * v7 = __2_YAPAXI_Z(12 * a2 + 4); /*0x7647bd*/
    if ( v7 ) /*0x7647c7*/
    {
      v8 = v7 + 1; /*0x7647cc*/
      *v7 = a2; /*0x7647cf*/
      _DWORD * v9 = v7 + 1; /*0x7647d3*/
      if ( a2 - 1 >= 0 ) /*0x7647d5*/
      {
        int v10 = a2; /*0x7647d7*/
        do /*0x7647e4*/
        {
          *v9 = 0; /*0x7647d8*/
          v9[1] = 0; /*0x7647da*/
          v9[2] = 0; /*0x7647dd*/
          v9 += 3; /*0x7647e0*/
          --v10; /*0x7647e3*/
        }
        while ( v10 ); /*0x7647e4*/
        this->vtable2 = v8; /*0x7647e6*/
        *((_BYTE *)this + 13) = 1; /*0x7647e9*/
        return this; /*0x7647f2*/
      }
    }
    else
    {
      v8 = 0; /*0x7647f5*/
    }
    this->vtable2 = v8; /*0x7647f7*/
    *((_BYTE *)this + 13) = 1; /*0x7647fa*/
    return this; /*0x7647fe*/
  }
  *a3 = a2; /*0x764790*/
  _DWORD * v4 = a3 + 1; /*0x764794*/
  if ( a2 - 1 >= 0 ) /*0x764796*/
  {
    int v5 = a2; /*0x764798*/
    do /*0x7647a5*/
    {
      *v4 = 0; /*0x764799*/
      v4[1] = 0; /*0x76479b*/
      v4[2] = 0; /*0x76479e*/
      v4 += 3; /*0x7647a1*/
      --v5; /*0x7647a4*/
    }
    while ( v5 ); /*0x7647a5*/
  }
  this->vtable2 = a3 + 1; /*0x7647a7*/
  return this; /*0x7647ac*/
}
}
} // namespace gamemd

// 0x763C00
namespace gamemd {
int WaypointPathClass::PowerDrainUpdate(int a2)
{
{
    AbstractClass::ProcessPower((#378 *)this);
    Power::TimerProcess(this->idxArray);
    return Power::TimerProcess(this->waypoints.Count);
}
}
} // namespace gamemd

// 0x763C30
namespace gamemd {
int WaypointPathClass::ddtor(int a1, unsigned int * a2)
{
  if ( !a2 )
    return -2147467261;
  *a2 = -147774022;
  a2[1] = 298979412;
  a2[2] = 1610642049;
  a2[3] = -1252326136;
  return 0;
}
} // namespace gamemd

// 0x763D90
namespace gamemd {
int WaypointPathClass::SaveState(TechnoTypeClass * aP0, int * a1, int aP2)
{
{
    int result;
    int v4;
    int v5;
    int i;
    result = AbstractClass::SaveLoad_Prefix((ObjectTypeClass *)aP0, (ObjectTypeClass *)a1, (ObjectTypeClass *)aP2);
    if ( result >= 0 )
  {
    v4 = *a1;
    aP2 = *(int *)&aP0->BarrelVoxel[20];
    result = (*(int (__stdcall **)(int *, int *, int, int))(v4 + 16))(a1, &aP2, 4, 0);
    if ( result >= 0 )
    {
    v5 = 0;
    if ( aP2 <= 0 )
      {
    return 0;
      }
    else
      {
    for ( i = 0; ; i += 12 )
        {
    result = (*(int (__stdcall **)(int *, int, int, int))(*a1 + 16))( a1, *(int *)&aP0->BarrelVoxel[8] + i, 12, 0);
    if ( result < 0 )
    break;
    if ( ++v5 >= aP2 )
    return 0;
        }
      }
    }
  }
    return result;
}
}
} // namespace gamemd

// 0x763E00
namespace gamemd {
int WaypointPathClass::StubReturn64()
{
return 64;
}
} // namespace gamemd

// 0x763E10
namespace gamemd {
int WaypointPathClass::StubReturn51()
{
return 51;
}
} // namespace gamemd

// 0x763E20
namespace gamemd {
WaypointPathClass * WaypointPathClass::ProcessEvent(char a2)
{
{
    int v3;
    int v4;
    void **v6;
    *(void**)this = vt_WaypointPathClass;
    *(this + 1) = (unsigned int)vt_WaypointPathClass;
    *(this + 2) = (unsigned int)vt_WaypointPathClass;
    *(this + 3) = &vt_WaypointPathClass;
    AbstractClass::AnnounceExpiredPointer(this, 1);
    v6 = this;
    v3 = (*(int (__thiscall **)(int *, void ***))(DataGlobal_B72608 + 16))(&DataGlobal_B72608, &v6);
    if ( v3 != -1 && v3 < DataGlobal_B72618 && v3 < --DataGlobal_B72618 )
  {
    do
    {
    ++v3;
    *((int *)(DataGlobal_B7260C) + v3 - 1) = *((int *)(DataGlobal_B7260C) + v3);
    }
    while ( v3 < DataGlobal_B72618 );
  }
    v4 = (int)*(this + 11);
    *(this + 10) = &vt_VectorClass_WaypointClass;
    if ( v4 && this->waypoints.IsAllocated )
  {
    __3_YAXPAX_Z((void *)(v4 - 4));
    *(this + 11) = 0;
  }
    this->waypoints.IsAllocated = 0;
    *(this + 12) = 0;
    AbstractClass::DTOR(this);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (WaypointPathClass *)this;
}
}
} // namespace gamemd
