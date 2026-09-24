// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Power_e4.hpp"

// 0x679A10
namespace gamemd {
int SideClass::LoadAllFromINI(CCINIClass * aP0)
{
  int i; // edi
  int j; // edi
  int k; // edi
  int m; // edi
  int n; // edi
  int ii; // edi
  int jj; // edi
  int kk; // edi
  int mm; // edi
  int nn; // edi
  int i1; // edi
  int i2; // edi
  int i3; // edi
  int i4; // edi
  int i5; // edi
  int i6; // edi
  int i7; // edi
  int i8; // edi
  int v19; // ebx
  int *v20; // edi

  for ( i = 0; i < g_SuperWeaponTypeArray; ++i ) /*0x679a20*/
    (*(void (__thiscall **)(_DWORD, int))(**((_DWORD **)g_SuperWeaponTypeCount + i) + 100))( /*0x679a2d*/
      *((_DWORD *)g_SuperWeaponTypeCount + i),
      aP0);
  for ( j = 0; j < g_HouseClassInitState; ++j ) /*0x679a43*/
    (*(void (__thiscall **)(_DWORD, int))(**((_DWORD **)g_SuperWeaponPool + j) + 100))( /*0x679a50*/
      *((_DWORD *)g_SuperWeaponPool + j),
      aP0);
  for ( k = 0; k < g_BuildingTypeCount2; ++k ) /*0x679a66*/
    (*(void (__thiscall **)(_DWORD, int *))(**((_DWORD **)g_AnimTypeCount + k) + 100))( /*0x679a77*/
      *((_DWORD *)g_AnimTypeCount + k),
      &CCINIClass_INI_Art);
  for ( m = 0; m < g_TriggerClassCount; ++m ) /*0x679a8d*/
    (*(void (__thiscall **)(_DWORD, int))(**((_DWORD **)g_TriggerTypeCount + m) + 100))( /*0x679a9a*/
      *((_DWORD *)g_TriggerTypeCount + m),
      aP0);
  for ( n = 0; n < g_TypeClass_FindCache; ++n ) /*0x679ab0*/
    (*(void (__thiscall **)(_DWORD, int))(**((_DWORD **)g_AircraftTypeCount + n) + 100))( /*0x679abd*/
      *((_DWORD *)g_AircraftTypeCount + n),
      aP0);
  for ( ii = 0; ii < g_CrateCount; ++ii ) /*0x679ad3*/
    (*(void (__thiscall **)(_DWORD, int))(**((_DWORD **)g_UnitTypeCount2 + ii) + 100))( /*0x679ae0*/
      *((_DWORD *)g_UnitTypeCount2 + ii),
      aP0);
  for ( jj = 0; jj < g_LoadScreenProgress; ++jj ) /*0x679af6*/
    (*(void (__thiscall **)(_DWORD, int))(**((_DWORD **)Factory_ExitCellTable + jj) + 100))( /*0x679b03*/
      *((_DWORD *)Factory_ExitCellTable + jj),
      aP0);
  for ( kk = 0; kk < g_WeaponTypePool; ++kk ) /*0x679b19*/
    (*(void (__thiscall **)(_DWORD, int))(**((_DWORD **)g_WeaponTypeConfig + kk) + 100))( /*0x679b26*/
      *((_DWORD *)g_WeaponTypeConfig + kk),
      aP0);
  for ( mm = 0; mm < g_BulletTypeInitState; ++mm ) /*0x679b3c*/
    (*(void (__thiscall **)(_DWORD, int))(**((_DWORD **)dword_A83C84 + mm) + 100))(*((_DWORD *)dword_A83C84 + mm), aP0); /*0x679b49*/
  for ( nn = 0; nn < g_WarheadTypePool; ++nn ) /*0x679b5f*/
    (*(void (__thiscall **)(_DWORD, int))(**((_DWORD **)dword_8874C4 + nn) + 100))(*((_DWORD *)dword_8874C4 + nn), aP0); /*0x679b6c*/
  for ( i1 = 0; i1 < g_WeaponTypePool; ++i1 ) /*0x679b82*/
    WeaponTypeClass::CalculateSpeed(*((_DWORD *)g_WeaponTypeConfig + i1)); /*0x679b8c*/
  for ( i2 = 0; i2 < g_TriggerClassCount; ++i2 ) /*0x679ba4*/
    nullsub_7(*((_DWORD *)g_TriggerTypeCount + i2)); /*0x679baf*/
  for ( i3 = 0; i3 < g_RulesClassInitState; ++i3 ) /*0x679bc7*/
    (*(void (__thiscall **)(_DWORD, int))(**((_DWORD **)dword_A8E31C + i3) + 100))(*((_DWORD *)dword_A8E31C + i3), aP0); /*0x679bd5*/
  for ( i4 = 0; i4 < FactoryClass_Count; ++i4 ) /*0x679beb*/
    (*(void (__thiscall **)(_DWORD, int))(**((_DWORD **)FactoryClass_Array + i4) + 100))( /*0x679bf9*/
      *((_DWORD *)FactoryClass_Array + i4),
      aP0);
  for ( i5 = 0; i5 < g_ObjectTypeConfig; ++i5 ) /*0x679c0f*/
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)&g_BuildingTypeClass_Array->gap0[4 * i5] + 100))( /*0x679c1c*/
      *(_DWORD *)&g_BuildingTypeClass_Array->gap0[4 * i5],
      aP0);
  for ( i6 = 0; i6 < g_BuildingTypeInitState; ++i6 ) /*0x679c32*/
    (*(void (__thiscall **)(_DWORD, int))(**((_DWORD **)g_BuildingProductionQueue + i6) + 100))( /*0x679c3f*/
      *((_DWORD *)g_BuildingProductionQueue + i6),
      aP0);
  for ( i7 = 0; i7 < g_InfantryTypeInitState; ++i7 ) /*0x679c55*/
    (*(void (__thiscall **)(_DWORD, int))(**((_DWORD **)dword_A83D6C + i7) + 100))(*((_DWORD *)dword_A83D6C + i7), aP0); /*0x679c62*/
  for ( i8 = 0; i8 < g_MultiplayerPool; ++i8 ) /*0x679c78*/
    (*(void (__thiscall **)(_DWORD, int))(**((_DWORD **)dword_A8EB2C + i8) + 100))(*((_DWORD *)dword_A8EB2C + i8), aP0); /*0x679c85*/
  v19 = 0; /*0x679c92*/
  v20 = (int *)&unk_A8E3A8; /*0x679c94*/
  do /*0x679cad*/
  {
    *v20 = v19; /*0x679c9c*/
    MissionClass::LoadFromINI(aP0); /*0x679c9e*/
    v20 += 8; /*0x679ca3*/
    ++v19; /*0x679ca6*/
  }
  while ( (int)v20 < (int)&dword_A8E7A8 ); /*0x679cad*/
  return 1; /*0x679caf*/
}
}
// 0x6A4550
namespace gamemd {
unsigned int * SideClass::Construct(CCINIClass * aP1)
{
  int v3; // eax

  AbstractTypeClass::Constructor((int)this, aP1); /*0x6a4559*/
  *(this + 39) = 0; /*0x6a4563*/
  *(this + 40) = 0; /*0x6a4569*/
  *((_BYTE *)this + 164) = 1; /*0x6a456f*/
  *((_BYTE *)this + 165) = 0; /*0x6a4576*/
  *(this + 43) = 10; /*0x6a457c*/
  *(this + 42) = 0; /*0x6a4586*/
  *(this + 38) = &TypeList<int>::`vftable'; /*0x6a458c*/
  *this = &SideClass::`vftable'; /*0x6a4597*/
  *(this + 1) = &SideClass::`vftable'; /*0x6a459d*/
  *(this + 2) = &SideClass::`vftable'; /*0x6a45a3*/
  *(this + 3) = &SideClass::`vftable'; /*0x6a45aa*/
  AbstractClass::GenerateUniqueID((int)(this + 1)); /*0x6a45b1*/
  if ( g_ObjectTypeList < dword_8B4128 /*0x6a45ea*/
    || (byte_8B412D || !dword_8B4128)
    && dword_8B4134 > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_8B4120 + 8))(
         &dword_8B4120,
         dword_8B4128 + dword_8B4134,
         0) )
  {
    v3 = g_ObjectTypeList++; /*0x6a45f7*/
    *((_DWORD *)dword_8B4124 + v3) = this; /*0x6a4606*/
  }
  return this; /*0x6a460b*/
}
}
// 0x6A4710
namespace gamemd {
int SideClass::GetCountry(int * a2)
{
  AbstractTypeClass::ProcessPower((char *)this, a2); /*0x6a4719*/
  return Power::TimerProcess(*(_DWORD *)(this + 168)); /*0x6a472c*/
}
}
// 0x6A4780
namespace gamemd {
int SideClass::SaveLoad_Prefix(unsigned int * a0, AbstractTypeClass * aP1)
{
  int v2; // esi
  int v3; // edi
  int result; // eax
  int v5; // esi
  int i; // ebp
  int v7; // eax
  int v8; // ecx
  int v9; // eax
  int v10; // edx

  v2 = (int)a0; /*0x6a4782*/
  v3 = aP1; /*0x6a4787*/
  result = AbstractClass::SaveLoad_Prefix_0(a0, aP1); /*0x6a478d*/
  if ( result >= 0 ) /*0x6a4796*/
  {
    if ( v2 ) /*0x6a47a4*/
    {
      AbstractTypeClass::Init(v2, (int)&aP1); /*0x6a47ad*/
      *(_DWORD *)(v2 + 156) = 0; /*0x6a47b2*/
      *(_DWORD *)(v2 + 160) = 0; /*0x6a47b8*/
      *(_BYTE *)(v2 + 164) = 1; /*0x6a47be*/
      *(_BYTE *)(v2 + 165) = 0; /*0x6a47c5*/
      *(_DWORD *)(v2 + 172) = 10; /*0x6a47cb*/
      *(_DWORD *)(v2 + 168) = 0; /*0x6a47d1*/
      *(_DWORD *)(v2 + 152) = &TypeList<int>::`vftable'; /*0x6a47d7*/
      *(_DWORD *)v2 = &SideClass::`vftable'; /*0x6a47e1*/
      *(_DWORD *)(v2 + 4) = &SideClass::`vftable'; /*0x6a47e7*/
      *(_DWORD *)(v2 + 8) = &SideClass::`vftable'; /*0x6a47ee*/
      *(_DWORD *)(v2 + 12) = &SideClass::`vftable'; /*0x6a47f5*/
    }
    v5 = v2 + 152; /*0x6a47fc*/
    if ( v5 ) /*0x6a4804*/
    {
      *(_DWORD *)(v5 + 4) = 0; /*0x6a4806*/
      *(_DWORD *)(v5 + 8) = 0; /*0x6a4809*/
      *(_BYTE *)(v5 + 12) = 1; /*0x6a480c*/
      *(_BYTE *)(v5 + 13) = 0; /*0x6a4810*/
      *(_DWORD *)(v5 + 20) = 10; /*0x6a4813*/
      *(_DWORD *)(v5 + 16) = 0; /*0x6a4816*/
      *(_DWORD *)v5 = &TypeList<int>::`vftable'; /*0x6a4819*/
    }
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v3 + 12))(v3, &aP1, 4, 0); /*0x6a482a*/
    for ( i = 0; i < aP1; ++i ) /*0x6a4833*/
    {
      (*(void (__stdcall **)(int, _DWORD **, int, _DWORD))(*(_DWORD *)v3 + 12))(v3, &a0, 4, 0); /*0x6a4840*/
      v7 = *(_DWORD *)(v5 + 8); /*0x6a4843*/
      if ( *(_DWORD *)(v5 + 16) >= v7 ) /*0x6a484b*/
      {
        if ( !*(_BYTE *)(v5 + 13) && v7 ) /*0x6a4854*/
          continue; /*0x6a4854*/
        v8 = *(_DWORD *)(v5 + 20); /*0x6a4856*/
        if ( v8 <= 0 || !(*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v5 + 8))(v5, v7 + v8, 0) ) /*0x6a4865*/
          continue; /*0x6a4865*/
      }
      v9 = *(_DWORD *)(v5 + 16); /*0x6a486c*/
      v10 = *(_DWORD *)(v5 + 4); /*0x6a486f*/
      *(_DWORD *)(v5 + 16) = v9 + 1; /*0x6a4875*/
      *(_DWORD *)(v10 + 4 * v9) = a0; /*0x6a487c*/
    }
    return 0; /*0x6a4888*/
  }
  return result; /*0x6a488b*/
}
}
// 0x6A4930
namespace gamemd {
void * SideClass::Init(char a2)
{
  int v3; // eax
  void *v4; // eax
  void **v6; // [esp+4h] [ebp-4h] BYREF

  *this = &SideClass::`vftable'; /*0x6a4936*/
  *(this + 1) = &SideClass::`vftable'; /*0x6a493c*/
  *(this + 2) = &SideClass::`vftable'; /*0x6a4943*/
  *(this + 3) = &SideClass::`vftable'; /*0x6a494a*/
  AbstractClass::AnnounceExpiredPointer(this, 1); /*0x6a4951*/
  v6 = this; /*0x6a4966*/
  v3 = (*(int (__thiscall **)(int *, void ***))(dword_8B4120 + 16))(&dword_8B4120, &v6); /*0x6a496a*/
  if ( v3 != -1 && v3 < g_ObjectTypeList && v3 < --g_ObjectTypeList ) /*0x6a4985*/
  {
    do /*0x6a499d*/
    {
      ++v3; /*0x6a498d*/
      *((_DWORD *)dword_8B4124 + v3 - 1) = *((_DWORD *)dword_8B4124 + v3); /*0x6a4991*/
    }
    while ( v3 < g_ObjectTypeList ); /*0x6a499d*/
  }
  v4 = *(this + 39); /*0x6a499f*/
  *(this + 38) = &VectorClass<int>::`vftable'; /*0x6a49a5*/
  if ( v4 && *((_BYTE *)this + 165) ) /*0x6a49b3*/
  {
    __3_YAXPAX_Z(v4); /*0x6a49be*/
    *(this + 39) = 0; /*0x6a49c6*/
  }
  *((_BYTE *)this + 165) = 0; /*0x6a49d2*/
  *(this + 40) = 0; /*0x6a49d9*/
  AbstractTypeClass::Dtor(this); /*0x6a49e3*/
  if ( (a2 & 1) != 0 ) /*0x6a49ed*/
    __3_YAXPAX_Z(this); /*0x6a49f0*/
  return this; /*0x6a49fa*/
}
}
// 0x49D9F0
namespace gamemd {
int SideClass::FindByName()
{
  int v3; // ebx
  int v4; // esi

  if ( !_strcmpi(this, g_Str__random_) ) /*0x49d9fb*/
    return -2; /*0x49da09*/
  if ( !this ) /*0x49da12*/
    return -1; /*0x49da12*/
  v3 = 0; /*0x49da19*/
  if ( g_SuperWeaponTypeArray <= 0 ) /*0x49da1d*/
    return -1; /*0x49da53*/
  while ( 1 ) /*0x49da25*/
  {
    v4 = *((_DWORD *)g_SuperWeaponTypeCount + v3); /*0x49da25*/
    if ( !_strcmpi((const void *)(v4 + 100), this) || !_strcmpi((const void *)(v4 + 36), this) ) /*0x49da3d*/
      break; /*0x49da3d*/
    if ( ++v3 >= g_SuperWeaponTypeArray ) /*0x49da51*/
      return -1; /*0x49da51*/
  }
  return v3; /*0x49da07*/
}
} // namespace gamemd

// 0x4E38A0
namespace gamemd {
wchar_t * SideClass::GetName()
{
  if ( this == (void *)-2 ) /*0x4e38a3*/
    return GetStringCSF(aSttPlayersider, 0, g_Str_File_GDlgSupp_cpp, 237); /*0x4e38b6*/
  if ( this == (void *)-3 ) /*0x4e38bf*/
    return GetStringCSF(aSttPlayersideo, 0, g_Str_File_GDlgSupp_cpp, 239); /*0x4e38d2*/
  if ( !this ) /*0x4e38da*/
    return GetStringCSF(aSttPlayersidea, 0, g_Str_File_GDlgSupp_cpp, 241); /*0x4e38ed*/
  if ( this == (void *)1 ) /*0x4e38f6*/
    return GetStringCSF(aSttPlayersidek, 0, g_Str_File_GDlgSupp_cpp, 243); /*0x4e3909*/
  if ( this == (void *)2 ) /*0x4e3912*/
    return GetStringCSF(aSttPlayersidef, 0, g_Str_File_GDlgSupp_cpp, 245); /*0x4e3925*/
  if ( this == (void *)3 ) /*0x4e392e*/
    return GetStringCSF(aSttPlayersideg, 0, g_Str_File_GDlgSupp_cpp, 247); /*0x4e3941*/
  if ( this == (void *)4 ) /*0x4e394a*/
    return GetStringCSF(aSttPlayersideb, 0, g_Str_File_GDlgSupp_cpp, 249); /*0x4e395d*/
  if ( this == (void *)5 ) /*0x4e3966*/
    return GetStringCSF(aSttPlayersidel, 0, g_Str_File_GDlgSupp_cpp, 251); /*0x4e3979*/
  if ( this == (void *)6 ) /*0x4e3982*/
    return GetStringCSF(aSttPlayersidei, 0, g_Str_File_GDlgSupp_cpp, 253); /*0x4e3995*/
  if ( this == (void *)7 ) /*0x4e399e*/
    return GetStringCSF(aSttPlayersidec, 0, g_Str_File_GDlgSupp_cpp, 255); /*0x4e39b1*/
  if ( this == (void *)8 ) /*0x4e39ba*/
    return GetStringCSF(aSttPlayersider_0, 0, g_Str_File_GDlgSupp_cpp, 257); /*0x4e39cd*/
  if ( this == (void *)9 ) /*0x4e39d6*/
    return GetStringCSF(aSttPlayersidey, 0, g_Str_File_GDlgSupp_cpp, 259); /*0x4e39e9*/
  return 0; /*0x4e38bb*/
}
} // namespace gamemd

// 0x6A4740
namespace gamemd {
int SideClass::ddtor(int a1, unsigned int * a2)
{
  if ( !a2 ) /*0x6a4746*/
    return -2147467261; /*0x6a4748*/
  *a2 = -985803918; /*0x6a4756*/
  a2[1] = 298980638; /*0x6a475e*/
  a2[2] = 1610642817; /*0x6a4767*/
  a2[3] = -1252326136; /*0x6a4770*/
  return 0; /*0x6a474d*/
}
} // namespace gamemd

// 0x6A48A0
namespace gamemd {
int SideClass::SaveLoad_Prefix_0(TechnoTypeClass * aP0, int * a1, int aP2)
{
  int result; // eax
  int v4; // edx
  int i; // esi

  result = AbstractClass::SaveLoad_Prefix(aP0, a1, aP2); /*0x6a48b1*/
  if ( result >= 0 ) /*0x6a48b8*/
  {
    v4 = *a1; /*0x6a48c0*/
    aP2 = aP0[42]; /*0x6a48cd*/
    (*(void (__stdcall **)(int *, int *, int, _DWORD))(v4 + 16))(a1, &aP2, 4, 0); /*0x6a48d1*/
    for ( i = 0; i < aP2; ++i ) /*0x6a48dc*/
      (*(void (__stdcall **)(int *, int, int, _DWORD))(*a1 + 16))(a1, aP0[39] + 4 * i, 4, 0); /*0x6a48ef*/
    return 0; /*0x6a48f9*/
  }
  return result; /*0x6a48fc*/
}
} // namespace gamemd

// 0x6A4910
namespace gamemd {
int SideClass::StubReturn180()
{
  return 180; /*0x6a4915*/
}
} // namespace gamemd

// 0x6A4920
namespace gamemd {
int SideClass::StubReturn28()
{
  return 28; /*0x6a4925*/
}
} // namespace gamemd
