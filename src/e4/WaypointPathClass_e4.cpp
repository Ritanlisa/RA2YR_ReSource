// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Power_e4.hpp"

// 0x763730
namespace gamemd {
int WaypointPathClass::Init()
{
  int v2; // eax

  AbstractClass::Constructor((AbstractClass *)this); /*0x763733*/
  *(_DWORD *)(this + 36) = -1; /*0x76373a*/
  *(_DWORD *)(this + 44) = 0; /*0x763741*/
  *(_DWORD *)(this + 48) = 0; /*0x763744*/
  *(_BYTE *)(this + 52) = 1; /*0x763747*/
  *(_BYTE *)(this + 53) = 0; /*0x76374b*/
  *(_DWORD *)(this + 40) = &DynamicVectorClass<WaypointClass>::`vftable'; /*0x76374e*/
  *(_DWORD *)(this + 60) = 10; /*0x763755*/
  *(_DWORD *)(this + 56) = 0; /*0x76375c*/
  *(_DWORD *)this = &WaypointPathClass::`vftable'; /*0x76375f*/
  *(_DWORD *)(this + 4) = &WaypointPathClass::`vftable'; /*0x763765*/
  *(_DWORD *)(this + 8) = &WaypointPathClass::`vftable'; /*0x76376c*/
  *(_DWORD *)(this + 12) = &WaypointPathClass::`vftable'; /*0x763773*/
  if ( dword_B72618 < dword_B72610 /*0x7637ac*/
    || (byte_B72615 || !dword_B72610)
    && dword_B7261C > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_B72608 + 8))(
         &dword_B72608,
         dword_B72610 + dword_B7261C,
         0) )
  {
    v2 = dword_B72618++; /*0x7637b9*/
    *((_DWORD *)dword_B7260C + v2) = this; /*0x7637c8*/
  }
  return this; /*0x7637cd*/
}
}
// 0x763810
namespace gamemd {
int WaypointPathClass::Construct(WaypointClass * aP1)
{
  int v3; // eax

  AbstractClass::Constructor((AbstractClass *)this); /*0x763813*/
  *(_DWORD *)(this + 36) = -1; /*0x76381e*/
  *(_DWORD *)(this + 44) = 0; /*0x763825*/
  *(_DWORD *)(this + 48) = 0; /*0x763828*/
  *(_BYTE *)(this + 52) = 1; /*0x76382b*/
  *(_BYTE *)(this + 53) = 0; /*0x76382f*/
  *(_DWORD *)(this + 40) = &DynamicVectorClass<WaypointClass>::`vftable'; /*0x763832*/
  *(_DWORD *)(this + 60) = 10; /*0x763839*/
  *(_DWORD *)(this + 56) = 0; /*0x763840*/
  *(_DWORD *)this = &WaypointPathClass::`vftable'; /*0x763845*/
  *(_DWORD *)(this + 4) = &WaypointPathClass::`vftable'; /*0x76384b*/
  *(_DWORD *)(this + 8) = &WaypointPathClass::`vftable'; /*0x763852*/
  *(_DWORD *)(this + 12) = &WaypointPathClass::`vftable'; /*0x763859*/
  if ( aP1 < 0xC /*0x76389a*/
    && (dword_B72618 < dword_B72610
     || (byte_B72615 || !dword_B72610)
     && dword_B7261C > 0
     && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_B72608 + 8))(
          &dword_B72608,
          dword_B72610 + dword_B7261C,
          0)) )
  {
    v3 = dword_B72618++; /*0x7638a7*/
    *((_DWORD *)dword_B7260C + v3) = this; /*0x7638b6*/
  }
  return this; /*0x7638bb*/
}
}
// 0x763C70
namespace gamemd {
int WaypointPathClass::LoadState(unsigned int * a1, int a2)
{
  _DWORD *v2; // esi
  int v3; // edi
  int result; // eax
  _DWORD *v5; // esi
  int v6; // ebp
  int v7; // eax
  int v8; // ecx
  int v9; // eax
  int v10; // eax
  int v11; // ecx
  int v12; // edx
  int v13; // eax
  _DWORD *v14; // ecx
  int v15; // [esp+28h] [ebp-Ch] BYREF
  int v16; // [esp+2Ch] [ebp-8h]
  int v17; // [esp+30h] [ebp-4h]

  v2 = a1; /*0x763c76*/
  v3 = a2; /*0x763c7b*/
  result = AbstractClass::SaveLoad_Prefix_0(a1, a2); /*0x763c81*/
  if ( result >= 0 ) /*0x763c8a*/
  {
    if ( v2 ) /*0x763c92*/
    {
      AbstractClass::InitVtables(v2, (int)&a2); /*0x763c9b*/
      v2[10] = &DynamicVectorClass<WaypointClass>::`vftable'; /*0x763ca0*/
      *v2 = &WaypointPathClass::`vftable'; /*0x763ca7*/
      v2[1] = &WaypointPathClass::`vftable'; /*0x763cad*/
      v2[2] = &WaypointPathClass::`vftable'; /*0x763cb4*/
      v2[3] = &WaypointPathClass::`vftable'; /*0x763cbb*/
    }
    result = (*(int (__stdcall **)(int, _DWORD **, int, _DWORD))(*(_DWORD *)v3 + 12))(v3, &a1, 4, 0); /*0x763ccd*/
    if ( result >= 0 ) /*0x763cd2*/
    {
      v5 = v2 + 10; /*0x763cd8*/
      if ( v5 ) /*0x763cdd*/
      {
        WaypointPathClass::computePath(v5, 0, 0); /*0x763ce3*/
        *v5 = &DynamicVectorClass<WaypointClass>::`vftable'; /*0x763ce8*/
        v5[5] = 10; /*0x763cee*/
        v5[4] = 0; /*0x763cf5*/
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
          v7 = *(_DWORD *)v3; /*0x763d02*/
          v15 = 0; /*0x763d0d*/
          v16 = 0; /*0x763d11*/
          v17 = 0; /*0x763d15*/
          result = (*(int (__stdcall **)(int, int *, int, _DWORD))(v7 + 12))(v3, &v15, 12, 0); /*0x763d19*/
          if ( result < 0 ) /*0x763d1e*/
            break; /*0x763d1e*/
          v8 = v5[2]; /*0x763d20*/
          if ( v5[4] < v8 /*0x763d42*/
            || (*((_BYTE *)v5 + 13) || !v8)
            && (v9 = v5[5], v9 > 0)
            && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*v5 + 8))(v5, v8 + v9, 0) )
          {
            v10 = v5[4]; /*0x763d49*/
            v11 = v10 + 1; /*0x763d4c*/
            v12 = 3 * v10; /*0x763d4f*/
            v13 = v5[1]; /*0x763d52*/
            v5[4] = v11; /*0x763d55*/
            v14 = (_DWORD *)(v13 + 4 * v12); /*0x763d58*/
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
// 0x764760
namespace gamemd {
unsigned int * WaypointPathClass::computePath(int a2, unsigned int * a3)
{
  _DWORD *v4; // eax
  int v5; // ecx
  _DWORD *v7; // eax
  _DWORD *v8; // edx
  _DWORD *v9; // eax
  int v10; // ecx

  *(this + 1) = 0; /*0x76476d*/
  *(this + 2) = a2; /*0x764770*/
  *((_BYTE *)this + 12) = 1; /*0x764773*/
  *((_BYTE *)this + 13) = 0; /*0x764777*/
  *this = &VectorClass<WaypointClass>::`vftable'; /*0x76477a*/
  if ( !a2 ) /*0x764780*/
    return this; /*0x764780*/
  if ( !a3 ) /*0x764788*/
  {
    v7 = __2_YAPAXI_Z(12 * a2 + 4); /*0x7647bd*/
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
        *(this + 1) = v8; /*0x7647e6*/
        *((_BYTE *)this + 13) = 1; /*0x7647e9*/
        return this; /*0x7647f2*/
      }
    }
    else
    {
      v8 = 0; /*0x7647f5*/
    }
    *(this + 1) = v8; /*0x7647f7*/
    *((_BYTE *)this + 13) = 1; /*0x7647fa*/
    return this; /*0x7647fe*/
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
  *(this + 1) = a3 + 1; /*0x7647a7*/
  return this; /*0x7647ac*/
}
}
// 0x763C00
namespace gamemd {
int WaypointPathClass::PowerDrainUpdate(int a2)
{
  AbstractClass::ProcessPower((#378 *)this); /*0x763c09*/
  Power::TimerProcess(*(_DWORD *)(this + 36)); /*0x763c14*/
  return Power::TimerProcess(*(_DWORD *)(this + 56)); /*0x763c24*/
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
  a2[3] = -1252326136; /*0x763c60*/
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

  result = AbstractClass::SaveLoad_Prefix(aP0, a1, aP2); /*0x763da3*/
  if ( result >= 0 ) /*0x763daa*/
  {
    v4 = *a1; /*0x763daf*/
    aP2 = aP0[14]; /*0x763dbb*/
    result = (*(int (__stdcall **)(int *, int *, int, _DWORD))(v4 + 16))(a1, &aP2, 4, 0); /*0x763dbf*/
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
          result = (*(int (__stdcall **)(int *, int, int, _DWORD))(*a1 + 16))(a1, aP0[11] + i, 12, 0); /*0x763de1*/
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
  void **v6; // [esp+4h] [ebp-4h] BYREF

  *this = &WaypointPathClass::`vftable'; /*0x763e26*/
  *(this + 1) = &WaypointPathClass::`vftable'; /*0x763e2c*/
  *(this + 2) = &WaypointPathClass::`vftable'; /*0x763e33*/
  *(this + 3) = &WaypointPathClass::`vftable'; /*0x763e3a*/
  AbstractClass::AnnounceExpiredPointer(this, 1); /*0x763e41*/
  v6 = this; /*0x763e56*/
  v3 = (*(int (__thiscall **)(int *, void ***))(dword_B72608 + 16))(&dword_B72608, &v6); /*0x763e5a*/
  if ( v3 != -1 && v3 < dword_B72618 && v3 < --dword_B72618 ) /*0x763e75*/
  {
    do /*0x763e8d*/
    {
      ++v3; /*0x763e7d*/
      *((_DWORD *)dword_B7260C + v3 - 1) = *((_DWORD *)dword_B7260C + v3); /*0x763e81*/
    }
    while ( v3 < dword_B72618 ); /*0x763e8d*/
  }
  v4 = (int)*(this + 11); /*0x763e8f*/
  *(this + 10) = &VectorClass<WaypointClass>::`vftable'; /*0x763e92*/
  if ( v4 && *((_BYTE *)this + 53) ) /*0x763e9d*/
  {
    __3_YAXPAX_Z((void *)(v4 - 4)); /*0x763eb0*/
    *(this + 11) = 0; /*0x763eb8*/
  }
  *((_BYTE *)this + 53) = 0; /*0x763ec1*/
  *(this + 12) = 0; /*0x763ec5*/
  AbstractClass::DTOR(this); /*0x763ecc*/
  if ( (a2 & 1) != 0 ) /*0x763ed6*/
    __3_YAXPAX_Z(this); /*0x763ed9*/
  return this; /*0x763ee3*/
}
} // namespace gamemd
