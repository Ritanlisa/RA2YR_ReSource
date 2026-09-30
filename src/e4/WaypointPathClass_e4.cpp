// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Power_e4.hpp"
#include "e4/classes/WaypointPathClass_e4.hpp"
#include "e4/classes/Waypoint_e4.hpp"
#include "e4/classes/WaypointClass_e4.hpp"
#include "e4/classes/Weapon_e4.hpp"
#include "e4/classes/Array_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/WaveClass_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/SuperWeaponTypeClass_e4.hpp"

// 0x763730
namespace gamemd {
int WaypointPathClass::Init()
{
    unsigned int v2 = 0;  /* G37 hoist */
    unsigned int v2 = 0;  /* G37 hoist */
    unsigned int v2 = 0;  /* G37 hoist */
    unsigned int v2 = 0;  /* G37 hoist */
    unsigned int v2 = 0;  /* G37 hoist */
    unsigned int v2 = 0;  /* G37 hoist */
    unsigned int v2 = 0;  /* G37 hoist */
    unsigned int v2 = 0;  /* G37 hoist */
    unsigned int v2 = 0;  /* G37 hoist */
  WaypointPathClass * v2;

  AbstractClass::Constructor(); /*0x763733*/
  this->idxArray = -1; /*0x76373a*/
  this-((unsigned int *)(>waypoints))[1] = 0; /*0x763741*/
  this-((unsigned int *)(>waypoints))[2] = 0; /*0x763744*/
  IDA_LOBYTE(this->waypoints[3]) = 1; /*0x763747*/
  IDA_BYTE1(this->waypoints[3]) = 0; /*0x76374b*/
  this-((unsigned int *)(>waypoints))[0] = (int)&DynamicVectorClass_WaypointClass_vftable; /*0x76374e*/
  this-((unsigned int *)(>waypoints))[5] = 10; /*0x763755*/
  this-((unsigned int *)(>waypoints))[4] = 0; /*0x76375c*/
  this->AbstractClass = (void*)&WaypointPathClass_vftable; /*0x76375f*/
  *(void **)&this->vtable2 = (void*)&WaypointPathClass_vftable; /*0x763765*/
  *(void **)&this->vtable3 = (void*)&WaypointPathClass_vftable; /*0x76376c*/
  *(void **)&this->vtable4 = (void*)&WaypointPathClass_vftable; /*0x763773*/
  if ( dword_B72618 < dword_B72610 /*0x7637ac*/
    || (byte_B72615 || !dword_B72610)
    && dword_B7261C > 0
    && (*(uint8_t (**)(int *, int, unsigned int))(dword_B72608 + 8))(
         &dword_B72608,
         dword_B72610 + dword_B7261C,
         0) )
  {
    v2 = (unsigned int)(dword_B72618++);
    *((unsigned int *)dword_B7260C + v2) = this; /*0x7637c8*/
  }
  return (int)this; /*0x7637cd*/
}
}
// 0x763810
namespace gamemd {
int WaypointPathClass::Construct(WaypointClass * aP1)
{
  WaypointPathClass * v3;

  AbstractClass::Constructor(); /*0x763813*/
  this->idxArray = (unsigned int)(-1);
  this->u32_2C = (unsigned int)(0);
  this->u32_30 = (unsigned int)(0);
  this->q034 = (unsigned int)(1);
  this->u32_35 = (unsigned int)(0);
  this->u32_28 = (unsigned int)((void*)&DynamicVectorClass_WaypointClass_vftable);
  this->q03C = (unsigned int)(10);
  this->q038 = (unsigned int)(0);
  *(unsigned int *)this = (void*)&WaypointPathClass_vftable; /*0x763845*/
  this->vtable2 = (void*)&WaypointPathClass_vftable; /*0x76384b*/
  this->vtable3 = (void*)&WaypointPathClass_vftable; /*0x763852*/
  this->vtable4 = (void*)&WaypointPathClass_vftable; /*0x763859*/
  if ( aP1 < (gamemd::WaypointClass *)(0xC) /*0x76389a*/
    && (dword_B72618 < dword_B72610
     || (byte_B72615 || !dword_B72610)
     && dword_B7261C > 0
     && (*(uint8_t (**)(int *, int, unsigned int))(dword_B72608 + 8))(
          &dword_B72608,
          dword_B72610 + dword_B7261C,
          0)) )
  {
    v3 = (gamemd::WaypointPathClass *)((unsigned int)((int)(dword_B72618++)));
    *((unsigned int *)(unsigned int)(dword_B7260C)+ v3) = this; /*0x7638b6*/
  }
  return (int)(this);
}
}
// 0x763C70
namespace gamemd {
int WaypointPathClass::LoadState(unsigned int * a1, int a2)
{
  AbstractClass *v2; // esi
  int v3; // edi
  void * result;
  WaypointPathClass *p_vtable1; // esi
  int v6; // ebp
  int v7; // eax
  void *vtable2; // ecx
  int abstractFlags; // eax
  int uniqueId; // eax
  int v11; // ecx
  int v12; // edx
  char *vtable1; // eax
  char *v14; // ecx
  int v15; // [esp+28h] [ebp-Ch] BYREF
  int v16; // [esp+2Ch] [ebp-8h]
  void * v17;

  v2 = (void *)((AbstractClass *)a1);
  v3 = (void *)(a2);
  result = AbstractClass::SaveLoad_Prefix_0(a1, a2); /*0x763c81*/
  if ( result >= 0 ) /*0x763c8a*/
  {
    if ( v2 ) /*0x763c92*/
    {
      AbstractClass::InitVtables(v2, (int)&a2); /*0x763c9b*/
      v2[1].vtable1 = (void*)&DynamicVectorClass_WaypointClass_vftable; /*0x763ca0*/
      v2->vtable0 = (void*)&WaypointPathClass_vftable; /*0x763ca7*/
      v2->vtable1 = (void*)&WaypointPathClass_vftable; /*0x763cad*/
      v2->vtable2 = (void*)&WaypointPathClass_vftable; /*0x763cb4*/
      v2->vtable3 = (void*)&WaypointPathClass_vftable; /*0x763cbb*/
    }
    result = (void *)((*(int (__stdcall **)(int, WaypointPathClass **, int, unsigned int))(*(unsigned int *)v3 + 12))(v3, &a1, 4, 0));
    if ( result >= 0 ) /*0x763cd2*/
    {
      p_vtable1 = (unsigned int)((WaypointPathClass *)&v2[1].vtable1);
      if ( p_vtable1 ) /*0x763cdd*/
      {
        WaypointPathClass::computePath(p_vtable1, 0, 0); /*0x763ce3*/
        p_vtable1->AbstractClass = (void*)&DynamicVectorClass_WaypointClass_vftable; /*0x763ce8*/
        *(unsigned short *)&p_vtable1->abstractFlags = 10; /*0x763cee*/
        p_vtable1->uniqueId = 0; /*0x763cf5*/
      }
      v6 = 0; /*0x763cfc*/
      if ( (int)a1 <= 0 ) /*0x763d00*/
      {
        return 0; /*0x763d78*/
      }
      else
      {
        while ( 1 ) /*0x763d02*/
        {
          v7 = (int)(*(unsigned int *)v3);
          v15 = (int)(0);
          v16 = (int)(0);
          v17 = (void *)((int)(0));
          result = (void *)((int)((void *)((*(int (__stdcall **)(int, int *, int, unsigned int))(v7 + 12))(v3, &v15, 12, 0))));
          if ( result < 0 ) /*0x763d1e*/
            break; /*0x763d1e*/
          vtable2 = *(unsigned int *)&p_vtable1->vtable3; /*0x763d20*/
          if ( *(unsigned short *)&p_vtable1->vtable3 < (int)vtable2 /*0x763d42*/
            || (IDA_BYTE1(p_vtable1->vtable2) || !vtable2)
            && (abstractFlags = p_vtable1->vtable3, abstractFlags > 0)
            && (*((uint8_t (**)(WaypointPathClass *, int, unsigned int))p_vtable1->AbstractClass + 2))(
                 p_vtable1,
                 (int)vtable2 + abstractFlags,
                 0) )
          {
            uniqueId = (unsigned int)(p_vtable1->uniqueId);
            v11 = (unsigned int)(uniqueId + 1);
            v12 = (unsigned int)(3 * uniqueId);
            vtable1 = (char *)p_vtable1->vtable2; /*0x763d52*/
            p_vtable1->uniqueId = v11; /*0x763d55*/
            v14 = &vtable1[4 * v12]; /*0x763d58*/
            *(unsigned int *)v14 = v15; /*0x763d5f*/
            *((unsigned int *)v14 + 1) = v16; /*0x763d65*/
            *((unsigned int *)v14 + 2) = v17; /*0x763d6c*/
          }
          if ( ++v6 >= (int)a1 ) /*0x763d76*/
            return 0; /*0x763d76*/
        }
      }
    }
  }
  return (int)(result);
}
}
// 0x764760
namespace gamemd {
unsigned int * WaypointPathClass::computePath(int a2, unsigned int * a2)
{
  unsigned int *v4; // eax
  int v5; // ecx
  int *v7; // eax
  void *v8; // edx
  unsigned int *v9; // eax
  int v10; // ecx

  *(unsigned int *)&this->vtable2 = 0; /*0x76476d*/
  this->vtable3 = (void *)a2; /*0x764770*/
  IDA_LOBYTE(this->vtable4) = 1; /*0x764773*/
  IDA_BYTE1(this->vtable4) = 0; /*0x764777*/
  this->AbstractClass = (void*)&VectorClass_WaypointClass_vftable; /*0x76477a*/
  if ( !a2 ) /*0x764780*/
    return &this->AbstractClass; /*0x764780*/
  if ( !a2 ) /*0x764788*/
  {
    v7 = (int *)RA2_OPNEW(12 * a2 + 4); /*0x7647bd*/
    if ( v7 ) /*0x7647c7*/
    {
      v8 = (unsigned int *)(v7 + 1);
      *v7 = (int)((unsigned int *)(a2));
      v9 = (unsigned int *)(v7 + 1);
      if ( a2 - 1 >= 0 ) /*0x7647d5*/
      {
        v10 = a2; /*0x7647d7*/
        do /*0x7647e4*/
        {
          *v9 = 0; /*0x7647d8*/
          v9[1] = 0; /*0x7647da*/
          v9[2] = 0; /*0x7647dd*/
          v9 += 3; /*0x7647e0*/
          --v10; /*0x7647e3*/
        }
        while ( v10 ); /*0x7647e4*/
        *(void **)&this->vtable2 = v8; /*0x7647e6*/
        IDA_BYTE1(this->vtable4) = 1; /*0x7647e9*/
        return &this->AbstractClass; /*0x7647f2*/
      }
    }
    else
    {
      v8 = 0; /*0x7647f5*/
    }
    *(void **)&this->vtable2 = v8; /*0x7647f7*/
    IDA_BYTE1(this->vtable4) = 1; /*0x7647fa*/
    return &this->AbstractClass; /*0x7647fe*/
  }
  *(int *)(a2) = (unsigned int *)(a2);
  v4 = (unsigned int *)(a2 + 1);
  if ( a2 - 1 >= 0 ) /*0x764796*/
  {
    v5 = a2; /*0x764798*/
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
  *(unsigned int *)&this->vtable2 = a2 + 1; /*0x7647a7*/
  return &this->AbstractClass; /*0x7647ac*/
}
}
// 0x763C00
namespace gamemd {
int WaypointPathClass::PowerDrainUpdate(int a2)
{
  AbstractClass::ProcessPower(); /*0x763c09*/
  Power::TimerProcess(this->idxArray); /*0x763c14*/
// 0x4a1d50
  return Power::TimerProcess(this-((unsigned int *)(>waypoints))[4]); /*0x763c24*/
}
} // namespace gamemd

// 0x763C30
namespace gamemd {
int WaypointPathClass::ddtor(int a1, unsigned int * a2)
{
  if ( !a2 ) /*0x763c36*/
    return -2147467261; /*0x763c38*/
  *a2 = -147774022; /*0x763c46*/
  a2[1] = 298979412; /*0x763c4e*/
  a2[2] = 1610642049; /*0x763c57*/
  a2[3] = unk_7E985C; /*0x763c60*/
  return 0; /*0x763c3d*/
}
} // namespace gamemd

// 0x763D90
namespace gamemd {
int WaypointPathClass::SaveState(TechnoTypeClass * aP0, int * a1, int aP2)
{
  int result; // eax
  int v4; // edx
  int v5; // ebp
  int i; // edi

  result = AbstractClass::SaveLoad_Prefix((int *)aP0, a1, aP2); /*0x763da3*/
  if ( result >= 0 ) /*0x763daa*/
  {
    v4 = *a1; /*0x763daf*/
    aP2 = aP0->waypoints[4]; /*0x763dbb*/
    result = (*(int (__stdcall **)(int *, int *, int, unsigned int))(v4 + 16))(a1, &aP2, 4, 0); /*0x763dbf*/
    if ( result >= 0 ) /*0x763dc4*/
    {
      v5 = 0; /*0x763dca*/
      if ( aP2 <= 0 ) /*0x763dce*/
      {
        return 0; /*0x763df4*/
      }
      else
      {
        for ( i = 0; ; i += 12 ) /*0x763dd0*/
        {
          result = (*(int (__stdcall **)(int *, int, int, unsigned int))(*a1 + 16))(a1, aP0->waypoints[1] + i, 12, 0); /*0x763de1*/
          if ( result < 0 ) /*0x763de6*/
            break; /*0x763de6*/
          if ( ++v5 >= aP2 ) /*0x763df2*/
            return 0; /*0x763df2*/
        }
      }
    }
  }
  return result; /*0x763df6*/
}
} // namespace gamemd

// 0x763E00
namespace gamemd {
int WaypointPathClass::StubReturn64()
{
  return 64; /*0x763e05*/
}
} // namespace gamemd

// 0x763E10
namespace gamemd {
int WaypointPathClass::StubReturn51()
{
  return 51; /*0x763e15*/
}
} // namespace gamemd

// 0x763E20
namespace gamemd {
WaypointPathClass * WaypointPathClass::ProcessEvent(char a2)
{
  int v3; // eax
  int v4; // eax
  WaypointPathClass *v6; // [esp+4h] [ebp-4h] BYREF

  this->AbstractClass = (unsigned int)((void*)&WaypointPathClass_vftable);
  *(void **)&this->vtable2 = (void*)&WaypointPathClass_vftable; /*0x763e2c*/
  *(void **)&this->vtable3 = (void*)&WaypointPathClass_vftable; /*0x763e33*/
  *(void **)&this->vtable4 = (void*)&WaypointPathClass_vftable; /*0x763e3a*/
  AbstractClass::AnnounceExpiredPointer(1); /*0x763e41*/
  v6 = this; /*0x763e56*/
  v3 = (*(int (**)(int *, WaypointPathClass **))(dword_B72608 + 16))(&dword_B72608, &v6); /*0x763e5a*/
  if ( v3 != -1 && v3 < dword_B72618 && v3 < --dword_B72618 ) /*0x763e75*/
  {
    do /*0x763e8d*/
    {
      ++v3; /*0x763e7d*/
      *((unsigned int *)dword_B7260C + v3 - 1) = *((unsigned int *)dword_B7260C + v3); /*0x763e81*/
    }
    while ( v3 < dword_B72618 ); /*0x763e8d*/
  }
  v4 = this-((unsigned int *)(>waypoints))[1]; /*0x763e8f*/
  this-((unsigned int *)(>waypoints))[0] = (int)&VectorClass_WaypointClass_vftable; /*0x763e92*/
  if ( v4 && IDA_BYTE1(this->waypoints[3]) ) /*0x763e9d*/
  {
    RA2_OPDEL((void *)(v4 - 4)); /*0x763eb0*/
    this-((unsigned int *)(>waypoints))[1] = 0; /*0x763eb8*/
  }
  IDA_BYTE1(this->waypoints[3]) = 0; /*0x763ec1*/
  this-((unsigned int *)(>waypoints))[2] = 0; /*0x763ec5*/
  this->AbstractClass::DTOR(); /*0x763ecc*/
  if ( (a2 & 1) != 0 ) /*0x763ed6*/
    RA2_OPDEL(); /*0x763ed9*/
  return &this->AbstractClass; /*0x763ee3*/
}
} // namespace gamemd
