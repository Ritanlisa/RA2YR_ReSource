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

// 0x763730
namespace gamemd {
int WaypointPathClass::Init(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    unsigned int v2 = 0;  /* G37 hoist */

  int v2; // eax

  AbstractClass::Constructor((AbstractClass *)this); /*0x763733*/
  this->idxArray = -1; /*0x76373a*/
  (&this->waypoints)[1] = 0; /*0x763741*/
  (&this->waypoints)[2] = 0; /*0x763744*/
  LOBYTE((&this->waypoints)[3]) = 1; /*0x763747*/
  BYTE1((&this->waypoints)[3]) = 0; /*0x76374b*/
  (&this->waypoints)[0] = (int)&vt_DynamicVectorClass; /*0x76374e*/
  (&this->waypoints)[5] = 10; /*0x763755*/
  (&this->waypoints)[4] = 0; /*0x76375c*/
  this->vtable1 = (void *)((unsigned int)(&vt_WaypointPathClass)); /*0x76375f*/
  ((unsigned int *)this)[0] = (unsigned int)(&vt_WaypointPathClass); /*0x763765*/
  ((unsigned int *)this)[0] = (unsigned int)(&vt_WaypointPathClass); /*0x76376c*/
  ((unsigned int *)this)[0] = (unsigned int)(&vt_WaypointPathClass); /*0x763773*/
  if ( dword_B72618 < dword_B72610 /*0x7637ac*/
    || (byte_B72615 || !dword_B72610)
    && dword_B7261C > 0
    && (*(uint8_t (**)(int *, int, unsigned int))(dword_B72608 + 8))(
         &dword_B72608,
         dword_B72610 + dword_B7261C,
         0) )
  {
    v2 = (unsigned int)(dword_B72618++);
    *((unsigned int *)dword_B7260C + v2) = (unsigned int)(this); /*0x7637c8*/
  }
  return (int)this; /*0x7637cd*/

}
}
// 0x763810
namespace gamemd {
int WaypointPathClass::Construct(WaypointClass * aP1, void *a2, void *a3, void *a4, void *a5, void *a6)
{

  int v3; // eax

  AbstractClass::Constructor((AbstractClass *)this); /*0x763813*/
  *((unsigned int *)this + 9) = -1; /*0x76381e*/
  *((unsigned int *)this + 11) = 0; /*0x763825*/
  *((unsigned int *)this + 12) = 0; /*0x763828*/
  *((unsigned char *)this + 52) = 1; /*0x76382b*/
  *((unsigned char *)this + 53) = 0; /*0x76382f*/
  *((unsigned int *)this + 10) = (unsigned int)(&vt_DynamicVectorClass); /*0x763832*/
  *((unsigned int *)this + 15) = 10; /*0x763839*/
  *((unsigned int *)this + 14) = 0; /*0x763840*/
  *(unsigned int *)this = (unsigned int)(&vt_WaypointPathClass); /*0x763845*/
  *((unsigned int *)this + 1) = (unsigned int)(&vt_WaypointPathClass); /*0x76384b*/
  *((unsigned int *)this + 2) = (unsigned int)(&vt_WaypointPathClass); /*0x763852*/
  *((unsigned int *)this + 3) = (unsigned int)(&vt_WaypointPathClass); /*0x763859*/
  if ( aP1 < (gamemd::WaypointClass *)(0xC) /*0x76389a*/
    && (dword_B72618 < dword_B72610
     || (byte_B72615 || !dword_B72610)
     && dword_B7261C > 0
     && (*(uint8_t (**)(int *, int, unsigned int))(dword_B72608 + 8))(
          &dword_B72608,
          dword_B72610 + dword_B7261C,
          0)) )
  {
    v3 = (unsigned int)(dword_B72618++);
    *((unsigned int *)dword_B7260C + v3) = (unsigned int)(this); /*0x7638b6*/
  }
  return this; /*0x7638bb*/

}
}
// 0x763C70
namespace gamemd {
int WaypointPathClass::LoadState(unsigned int * a1, int a2)
{

  AbstractClass *v2; // esi
  int v3; // edi
  int result; // eax
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
  int v17; // [esp+30h] [ebp-4h]

  v2 = (AbstractClass *)a1; /*0x763c76*/
  v3 = a2; /*0x763c7b*/
  result = AbstractClass::SaveLoad_Prefix_0((gamemd::AbstractClass *)(a1),(gamemd::AbstractClass *)(a2)); /*0x763c81*/
  if ( result >= 0 ) /*0x763c8a*/
  {
    if ( v2 ) /*0x763c92*/
    {
      AbstractClass::InitVtables(v2, (int)&a2); /*0x763c9b*/
      v2[1].vtable1 = &vt_DynamicVectorClass; /*0x763ca0*/
      v2->vtable1 = &vt_WaypointPathClass; /*0x763ca7*/
      v2->vtable1 = &vt_WaypointPathClass; /*0x763cad*/
      v2->vtable2 = &vt_WaypointPathClass; /*0x763cb4*/
      v2->vtable3 = &vt_WaypointPathClass; /*0x763cbb*/
    }
    result = (*(int (**)(int, WaypointPathClass **, int, unsigned int))(*(unsigned int *)v3 + 12))(v3, &a1, 4, 0); /*0x763ccd*/
    if ( result >= 0 ) /*0x763cd2*/
    {
      p_vtable1 = (WaypointPathClass *)&v2[1].vtable1; /*0x763cd8*/
      if ( p_vtable1 ) /*0x763cdd*/
      {
        ((WaypointPathClass *)(p_vtable1))->computePath(0, 0); /*0x763ce3*/
        p_vtable1->vtable1 = (void *)((unsigned int)(&vt_DynamicVectorClass)); /*0x763ce8*/
        ((unsigned int *)p_vtable1)[0] = 10; /*0x763cee*/
        ((unsigned int *)p_vtable1)[0] = 0; /*0x763cf5*/
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
          v7 = *(unsigned int *)v3; /*0x763d02*/
          v15 = 0; /*0x763d0d*/
          v16 = 0; /*0x763d11*/
          v17 = 0; /*0x763d15*/
          result = (*(int (**)(int, int *, int, unsigned int))(v7 + 12))(v3, &v15, 12, 0); /*0x763d19*/
          if ( result < 0 ) /*0x763d1e*/
            break; /*0x763d1e*/
          vtable2 = (void *)(((unsigned int *)p_vtable1)[0]); /*0x763d20*/
          if ( ((unsigned int *)p_vtable1)[0] < (int)vtable2 /*0x763d42*/
            || (BYTE1(((unsigned int *)p_vtable1)[0]) || !vtable2)
            && (abstractFlags = ((unsigned int *)p_vtable1)[0], abstractFlags > 0)
            && (*((uint8_t (**)(WaypointPathClass *, int, unsigned int))p_vtable1->vtable1 + 2))(
                 p_vtable1,
                 (int)vtable2 + abstractFlags,
                 0) )
          {
            uniqueId = ((unsigned int *)p_vtable1)[0]; /*0x763d49*/
            v11 = uniqueId + 1; /*0x763d4c*/
            v12 = 3 * uniqueId; /*0x763d4f*/
            vtable1 = (char *)((unsigned int *)p_vtable1)[0]; /*0x763d52*/
            ((unsigned int *)p_vtable1)[0] = v11; /*0x763d55*/
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
  return result; /*0x763d7a*/

}
}
// 0x764760
namespace gamemd {
_DWORD * WaypointPathClass::computePath(int a2, unsigned int *a3)
{

  unsigned int *v4; // eax
  int v5; // ecx
  int *v7; // eax
  void *v8; // edx
  unsigned int *v9; // eax
  int v10; // ecx

  ((unsigned int *)this)[0] = 0; /*0x76476d*/
  ((unsigned int *)this)[0] = (unsigned int)((void *)a2); /*0x764770*/
  LOBYTE(((unsigned int *)this)[0]) = 1; /*0x764773*/
  BYTE1(((unsigned int *)this)[0]) = 0; /*0x764777*/
  this->vtable1 = (void *)((unsigned int)(&vt_VectorClass)); /*0x76477a*/
  if ( !a2 ) /*0x764780*/
    return (_DWORD *)(this); /*0x764780*/
  if ( !a3 ) /*0x764788*/
  {
    v7 = (int *)__2_YAPAXI_Z(12 * a2 + 4); /*0x7647bd*/
    if ( v7 ) /*0x7647c7*/
    {
      v8 = v7 + 1; /*0x7647cc*/
      *v7 = a2; /*0x7647cf*/
      v9 = (unsigned int *)(v7 + 1); /*0x7647d3*/
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
        ((unsigned int *)this)[0] = (unsigned int)(v8); /*0x7647e6*/
        BYTE1(((unsigned int *)this)[0]) = 1; /*0x7647e9*/
        return (_DWORD *)(this); /*0x7647f2*/
      }
    }
    else
    {
      v8 = 0; /*0x7647f5*/
    }
    ((unsigned int *)this)[0] = (unsigned int)(v8); /*0x7647f7*/
    BYTE1(((unsigned int *)this)[0]) = 1; /*0x7647fa*/
    return (_DWORD *)(this); /*0x7647fe*/
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
  ((unsigned int *)this)[0] = (unsigned int)(a3 + 1); /*0x7647a7*/
  return (_DWORD *)(this); /*0x7647ac*/

}
}
// 0x763C00
namespace gamemd {
int WaypointPathClass::PowerDrainUpdate(int a2)
{

  AbstractClass::ProcessPower((AbstractClass *)this); /*0x763c09*/
  Power::TimerProcess(this->idxArray); /*0x763c14*/
  return Power::TimerProcess((&this->waypoints)[4]); /*0x763c24*/

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

  result = AbstractClass::SaveLoad_Prefix((gamemd::ObjectTypeClass *)((int *)aP0),(gamemd::ObjectTypeClass *)(a1),(gamemd::ObjectTypeClass *)(aP2)); /*0x763da3*/
  if ( result >= 0 ) /*0x763daa*/
  {
    v4 = *a1; /*0x763daf*/
    aP2 = aP0->waypoints[4]; /*0x763dbb*/
    result = (*(int (**)(int *, int *, int, unsigned int))(v4 + 16))(a1, &aP2, 4, 0); /*0x763dbf*/
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
WaypointPathClass * WaypointPathClass::ProcessEvent(char a2 a2)
{

  int v3; // eax
  int v4; // eax
  WaypointPathClass *v6; // [esp+4h] [ebp-4h] BYREF

  Block->vtable1 = &vt_WaypointPathClass; /*0x763e26*/
  ((unsigned int *)Block)[0] = (unsigned int)(&vt_WaypointPathClass); /*0x763e2c*/
  ((unsigned int *)Block)[0] = (unsigned int)(&vt_WaypointPathClass); /*0x763e33*/
  ((unsigned int *)Block)[0] = (unsigned int)(&vt_WaypointPathClass); /*0x763e3a*/
  AbstractClass::AnnounceExpiredPointer((AbstractClass *)Block, 1); /*0x763e41*/
  v6 = (gamemd::WaypointPathClass *)(Block); /*0x763e56*/
  v3 = (*(int ((int *)(**))(int *, WaypointPathClass **))(dword_B72608 + 16))(&dword_B72608, &v6); /*0x763e5a*/
  if ( v3 != -1 && v3 < dword_B72618 && v3 < --dword_B72618 ) /*0x763e75*/
  {
    do /*0x763e8d*/
    {
      ++v3; /*0x763e7d*/
      *((unsigned int *)dword_B7260C + v3 - 1) = *((unsigned int *)dword_B7260C + v3); /*0x763e81*/
    }
    while ( v3 < dword_B72618 ); /*0x763e8d*/
  }
  v4 = Block->waypoints[1]; /*0x763e8f*/
  Block->waypoints[0] = (int)&vt_VectorClass; /*0x763e92*/
  if ( v4 && BYTE1(Block->waypoints[3]) ) /*0x763e9d*/
  {
    __3_YAXPAX_Z((void *)(v4 - 4)); /*0x763eb0*/
    Block->waypoints[1] = 0; /*0x763eb8*/
  }
  BYTE1(Block->waypoints[3]) = 0; /*0x763ec1*/
  Block->waypoints[2] = 0; /*0x763ec5*/
  AbstractClass::DTOR((AbstractClass *)Block); /*0x763ecc*/
  if ( (a2 & 1) != 0 ) /*0x763ed6*/
    __3_YAXPAX_Z(Block); /*0x763ed9*/
  return Block; /*0x763ee3*/

}
} // namespace gamemd
