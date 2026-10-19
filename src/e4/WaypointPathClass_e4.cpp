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
#include "e4/classes/TechnoTypeClass_e4.hpp"
#include "e4/classes/Block_e4.hpp"  // G42.36 C2027 supply

// 0x763730
namespace gamemd {  // G42.18 ns repair
int WaypointPathClass::Init(void *a1, void *a2)
{


  ((AbstractClass *)this)->Constructor(); /*0x763733*/
  this->idxArray = -1; /*0x76373a*/
  this->waypoints[1] = 0; /*0x763741*/
  this->waypoints[2] = 0; /*0x763744*/
  (this->waypoints[3]) = ((this->waypoints[3]) & ~0xFF) | ((1) & 0xFF); /*0x763747*/
  (this->waypoints[3]) = ((this->waypoints[3]) & ~(0xFF << 8)) | (((0) & 0xFF) << 8); /*0x76374b*/
  /* X11: vtable install elided (X67 recv-slot, RHS g_ptr_7E3238) */  /*0x76374e*/
  this->waypoints[5] = 10; /*0x763755*/
  this->waypoints[4] = 0; /*0x76375c*/
  /* X11: vtable install elided (base-interface slot, RHS g_ptr_7F6E44) */  /*0x76375f*/
  /* X11: vtable install elided (implicit via WaypointPathClass virtuals 0x763765) */
  /* X11: vtable install elided (implicit via WaypointPathClass virtuals 0x76376c) */
  /* X11: vtable install elided (implicit via WaypointPathClass virtuals 0x763773) */
  if ( dword_B72618 < dword_B72610 /*0x7637ac*/
    || (byte_B72615 || !dword_B72610)
    && dword_B7261C > 0
    && (*(unsigned __int8 (**)(int *, int, unsigned int))(dword_B72608 + 8))(
         &dword_B72608,
         dword_B72610 + dword_B7261C,
         0) )
  {
    int v2; // eax
    v2 = dword_B72618++; /*0x7637b9*/
    *((unsigned int *)dword_B7260C + v2) = this; /*0x7637c8*/
  }
  return (int)this; /*0x7637cd*/

}
}  // G42.18 ns repair
// 0x763810
namespace gamemd {
int WaypointPathClass::Construct(unsigned int aP1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8, void *a9)
{

  AbstractClass::Constructor(); /*0x763813*/
  this->idxArray = -1; /*0x76381e*/
  this->u32_2C = 0; /*0x763825*/
  this->ptr_C = 0; /*0x763828*/
  this->WaypointClass_field_34 = 1; /*0x76382b*/
  this->WaypointClass_field_35 = 0; /*0x76382f*/
  /* X11: vtable install elided (X67 recv-slot, RHS g_ptr_7E3238) */  /*0x763832*/
  this->waypointCapacity = 10; /*0x763839*/
  this->waypointCount = 0; /*0x763840*/
  /* X11: vtable install elided (implicit via WaypointPathClass virtuals 0x763845) */
  /* X11: vtable install elided (implicit via WaypointPathClass virtuals 0x76384b) */
  /* X11: vtable install elided (implicit via WaypointPathClass virtuals 0x763852) */
  /* X11: vtable install elided (implicit via WaypointPathClass virtuals 0x763859) */
  if ( aP1 < 0xC /*0x76389a*/
    && (dword_B72618 < dword_B72610
     || (byte_B72615 || !dword_B72610)
     && dword_B7261C > 0
     && (*(uint8_t (**)(int *, int, unsigned int))(dword_B72608 + 8))(
          &dword_B72608,
          dword_B72610 + dword_B7261C,
          0)) )
  {
    int v3; // eax
    v3 = dword_B72618++; /*0x7638a7*/
    *((unsigned int *)dword_B7260C + v3) = (unsigned int)(this); /*0x7638b6*/
  }
  return (int)(this); /*0x7638bb*/
}
}
// 0x763C70
namespace gamemd {
int WaypointPathClass::LoadState(unsigned int * a1, int a2)
{

  AbstractClass *v2; // esi
  unsigned int *v3; // edi
  int result; // eax
  WaypointPathClass *p_vfptr1; // esi
  int v6; // ebp
  unsigned int v7; // eax
  int ptr_8; // ecx
  int abstractFlags; // eax
  int uniqueId; // eax
  int v11; // ecx
  int v12; // edx
  int ptr_4; // eax
  unsigned int *v14; // ecx
  int v15; // [esp+28h] [ebp-Ch] BYREF
  int v16; // [esp+2Ch] [ebp-8h]
  int v17; // [esp+30h] [ebp-4h]

  v2 = (AbstractClass *)this; /*0x763c76*/
  v3 = (unsigned int *)a2; /*0x763c7b*/
  result = AbstractClass::SaveLoad_Prefix_0(this, a2); /*0x763c81*/
  if ( result >= 0 ) /*0x763c8a*/
  {
    if ( v2 ) /*0x763c92*/
    {
      AbstractClass::InitVtables(v2, (int)&a2); /*0x763c9b*/
      /* X11: vtable install elided (X67 recv-slot, RHS g_ptr_7F6ED4) */  /*0x763ca0*/
      /* X11: vtable install elided (X67 recv-slot, RHS g_var_b7cf51) */  /*0x763ca7*/
      /* X11: vtable install elided (X67 recv-slot, RHS g_var_b7cf51) */  /*0x763cad*/
      /* X11: vtable install elided (X67 recv-slot, RHS g_var_b7cf51) */  /*0x763cb4*/
      /* X11: vtable install elided (X67 recv-slot, RHS g_var_b7cf51) */  /*0x763cbb*/
    }
    result = v3->sub_763CCD(&this, 4, 0); /*0x763ccd*/
    if ( result >= 0 ) /*0x763cd2*/
    {
      p_vfptr1 = (WaypointPathClass *)&v2[1].ptr_4; /*0x763cd8*/
      if ( p_vfptr1 ) /*0x763cdd*/
      {
        WaypointPathClass::computePath(p_vfptr1, 0, 0); /*0x763ce3*/
        /* X11: vtable install elided (X67 recv-slot, RHS g_ptr_7F6ED4) */  /*0x763ce8*/
        p_vfptr1->abstractFlags = 10; /*0x763cee*/
        p_vfptr1->uniqueId = 0; /*0x763cf5*/
      }
      v6 = 0; /*0x763cfc*/
      if ( (int)this <= 0 ) /*0x763d00*/
      {
        return 0; /*0x763d78*/
      }
      else
      {
        while ( 1 ) /*0x763d02*/
        {
          v7 = *v3; /*0x763d02*/
          v15 = 0; /*0x763d0d*/
          v16 = 0; /*0x763d11*/
          v17 = 0; /*0x763d15*/
          result = (*(int (**)(unsigned int *, int *, int, unsigned int))(v7 + 12))(v3, &v15, 12, 0); /*0x763d19*/
          if ( result < 0 ) /*0x763d1e*/
            break; /*0x763d1e*/
          ptr_8 = p_vfptr1->ptr_8; /*0x763d20*/
          if ( p_vfptr1->uniqueId < ptr_8 /*0x763d42*/
            || (BYTE1(p_vfptr1->ptr_C) || !ptr_8)
            && (abstractFlags = p_vfptr1->abstractFlags, abstractFlags > 0)
            && (*(unsigned __int8 (**)(WaypointPathClass *, int, unsigned int))(p_vfptr1->ptr_0 + 8))(
                 p_vfptr1,
                 ptr_8 + abstractFlags,
                 0) )
          {
            uniqueId = p_vfptr1->uniqueId; /*0x763d49*/
            v11 = uniqueId + 1; /*0x763d4c*/
            v12 = 3 * uniqueId; /*0x763d4f*/
            ptr_4 = p_vfptr1->ptr_4; /*0x763d52*/
            p_vfptr1->uniqueId = v11; /*0x763d55*/
            v14 = (unsigned int *)(ptr_4 + 4 * v12); /*0x763d58*/
            *v14 = v15; /*0x763d5f*/
            v14[1] = v16; /*0x763d65*/
            v14[2] = v17; /*0x763d6c*/
          }
          if ( ++v6 >= (int)this ) /*0x763d76*/
            return 0; /*0x763d76*/
        }
      }
    }
  }
  return result; /*0x763d7a*/

}
}
// 0x764760
namespace gamemd {
unsigned int * WaypointPathClass::computePath(int a2, unsigned int *a3, void *a3_1)
{

  unsigned int *v4; // eax
  int v5; // ecx
  int *v7; // eax
  void *v8; // edx
  unsigned int *v9; // eax
  int v10; // ecx

  this->ptr_4 = 0; /*0x76476d*/
  this->ptr_8 = (void *)a2; /*0x764770*/
  LOBYTE(this->ptr_C) = 1; /*0x764773*/
  BYTE1(this->ptr_C) = 0; /*0x764777*/
  /* X11: vtable install elided (legacy slot spelling slot, RHS g_ptr_7F6EF4) */  /*0x76477a*/
  if ( !a2 ) /*0x764780*/
    return &this->ptr_0; /*0x764780*/
  if ( !a3 ) /*0x764788*/
  {
    v7 = (int *)__2_YAPAXI_Z(12 * a2 + 4); /*0x7647bd*/
    if ( v7 ) /*0x7647c7*/
    {
      v8 = v7 + 1; /*0x7647cc*/
      *v7 = a2; /*0x7647cf*/
      v9 = v7 + 1; /*0x7647d3*/
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
        this->ptr_4 = v8; /*0x7647e6*/
        BYTE1(this->ptr_C) = 1; /*0x7647e9*/
        return &this->ptr_0; /*0x7647f2*/
      }
    }
    else
    {
      v8 = 0; /*0x7647f5*/
    }
    this->ptr_4 = v8; /*0x7647f7*/
    BYTE1(this->ptr_C) = 1; /*0x7647fa*/
    return &this->ptr_0; /*0x7647fe*/
  }
  *a3 = a2; /*0x764790*/
  v4 = a3 + 1; /*0x764794*/
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
  this->ptr_4 = a3 + 1; /*0x7647a7*/
  return &this->ptr_0; /*0x7647ac*/

}
}
// 0x763C00
namespace gamemd {
int WaypointPathClass::PowerDrainUpdate(int a2)
{

  ((AbstractClass *)this)->ProcessPower(); /*0x763c09*/
  Power::TimerProcess(this->idxArray); /*0x763c14*/
  return Power::TimerProcess(this->waypoints[4]); /*0x763c24*/

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
  result = AbstractClass::SaveLoad_Prefix((int *)aP0, a1, aP2); /*0x763da3*/
  if ( result >= 0 ) /*0x763daa*/
  {
    int v4 = *a1; // edx /*0x763daf*/
    aP2 = aP0->waypoints[4]; /*0x763dbb*/
    result = (*(int (**)(int *, int *, int, unsigned int))(v4 + 16))(a1, &aP2, 4, 0); /*0x763dbf*/
    if ( result >= 0 ) /*0x763dc4*/
    {
      int v5 = 0; // ebp /*0x763dca*/
      if ( aP2 <= 0 ) /*0x763dce*/
      {
        return 0; /*0x763df4*/
      }
      else
      {
        int i; // edi
        for ( i = 0; ; i += 12 ) /*0x763dd0*/
        {
          result = (*(int (**)(int *, int, int, unsigned int))(*a1 + 16))(a1, aP0->waypoints[1] + i, 12, 0); /*0x763de1*/
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


  /* X11: vtable install elided (base-interface slot, RHS g_ptr_7F6E44) */  /*0x763e26*/
  /* X11: vtable install elided (implicit via WaypointPathClass virtuals 0x763e2c) */
  /* X11: vtable install elided (implicit via WaypointPathClass virtuals 0x763e33) */
  /* X11: vtable install elided (implicit via WaypointPathClass virtuals 0x763e3a) */
  AbstractClass::AnnounceExpiredPointer((AbstractClass *)this, 1); /*0x763e41*/
  WaypointPathClass *v6; // [esp+4h] [ebp-4h] BYREF
  v6 = this; /*0x763e56*/
  int v3; // eax
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
  int v4; // eax
  v4 = this->waypoints[1]; /*0x763e8f*/
  /* X11: vtable install elided (X67 recv-slot, RHS g_ptr_7E8500) */  /*0x763e92*/
  if ( v4 && BYTE1(this->waypoints[3]) ) /*0x763e9d*/
  {
    __3_YAXPAX_Z((void *)(v4 - 4)); /*0x763eb0*/
    this->waypoints[1] = 0; /*0x763eb8*/
  }
  BYTE1(this->waypoints[3]) = 0; /*0x763ec1*/
  this->waypoints[2] = 0; /*0x763ec5*/
  ((AbstractClass *)this)->DTOR(); /*0x763ecc*/
  if ( (a2 & 1) != 0 ) /*0x763ed6*/
    __3_YAXPAX_Z(this); /*0x763ed9*/
  return &this->AbstractClass; /*0x763ee3*/

}
} // namespace gamemd
