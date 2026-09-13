// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x49D9F0
namespace gamemd {
int SideClass::FindByName()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall SideClass::FindByName(void *this)
{
  int v3; // ebx
  int v4; // esi

  if ( !_strcmpi(this, &g_INI_Key_Digest.__pad_20[8]) ) /*0x49d9fb*/
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
}
} // namespace gamemd

// 0x4E38A0
namespace gamemd {
wchar_t * SideClass::GetName()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
wchar_t *__thiscall SideClass_GetName(void *this)
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
}
} // namespace gamemd

// 0x679A10
namespace gamemd {
char SideClass::LoadAllFromINI(CCINIClass * aP0)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __stdcall SideClass::LoadAllFromINI(CCINIClass *aP0)
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
    (*(void (__thiscall **)(_DWORD, CCINIClass *))(**((_DWORD **)g_SuperWeaponTypeCount + i) + 100))( /*0x679a2d*/
      *((_DWORD *)g_SuperWeaponTypeCount + i),
      aP0);
  for ( j = 0; j < *(int *)&HouseClass_Player.__pad_5568[20620]; ++j ) /*0x679a43*/
    (*(void (__thiscall **)(_DWORD, CCINIClass *))(**(_DWORD **)(*(_DWORD *)&HouseClass_Player.__pad_5568[20608] + 4 * j) /*0x679a50*/
                                                 + 100))(
      *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[20608] + 4 * j),
      aP0);
  for ( k = 0; k < *(int *)&stru_89E138.__pad_1600D[27]; ++k ) /*0x679a66*/
    (*(void (__thiscall **)(_DWORD, char *))(**(_DWORD **)(*(_DWORD *)&stru_89E138.__pad_1600D[15] + 4 * k) + 100))( /*0x679a77*/
      *(_DWORD *)(*(_DWORD *)&stru_89E138.__pad_1600D[15] + 4 * k),
      &stru_87C374.__pad_579C[22128]);
  for ( m = 0; m < (int)g_TriggerClassCount; ++m ) /*0x679a8d*/
    (*(void (__thiscall **)(_DWORD, CCINIClass *))(**((_DWORD **)g_TriggerTypeCount + m) + 100))( /*0x679a9a*/
      *((_DWORD *)g_TriggerTypeCount + m),
      aP0);
  for ( n = 0; n < *(int *)&HouseClass_Player.__pad_5568[8052]; ++n ) /*0x679ab0*/
    (*(void (__thiscall **)(_DWORD, CCINIClass *))(**(_DWORD **)(*(_DWORD *)&HouseClass_Player.__pad_5568[8040] + 4 * n) /*0x679abd*/
                                                 + 100))(
      *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8040] + 4 * n),
      aP0);
  for ( ii = 0; ii < (int)g_CrateCount; ++ii ) /*0x679ad3*/
    (*(void (__thiscall **)(_DWORD, CCINIClass *))(**(_DWORD **)&g_UnitTypeCount2->__pad_0[4 * ii] + 100))( /*0x679ae0*/
      *(_DWORD *)&g_UnitTypeCount2->__pad_0[4 * ii],
      aP0);
  for ( jj = 0; jj < *(int *)&HouseClass_Player.__pad_5568[20644]; ++jj ) /*0x679af6*/
    (*(void (__thiscall **)(_DWORD, CCINIClass *))(**(_DWORD **)(*(_DWORD *)&HouseClass_Player.__pad_5568[20632] + 4 * jj) /*0x679b03*/
                                                 + 100))(
      *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[20632] + 4 * jj),
      aP0);
  for ( kk = 0; kk < *(int *)&stru_87C374.__pad_579C[23144]; ++kk ) /*0x679b19*/
    (*(void (__thiscall **)(_DWORD, CCINIClass *))(**(_DWORD **)(*(_DWORD *)&stru_87C374.__pad_579C[23132] + 4 * kk) /*0x679b26*/
                                                 + 100))(
      *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[23132] + 4 * kk),
      aP0);
  for ( mm = 0; mm < (int)g_BulletTypeInitState; ++mm ) /*0x679b3c*/
    (*(void (__thiscall **)(_DWORD, CCINIClass *))(**(_DWORD **)&dword_A83C84->__pad_0[4 * mm] + 100))( /*0x679b49*/
      *(_DWORD *)&dword_A83C84->__pad_0[4 * mm],
      aP0);
  for ( nn = 0; nn < *(int *)&stru_87C374.__pad_579C[22976]; ++nn ) /*0x679b5f*/
    (*(void (__thiscall **)(_DWORD, CCINIClass *))(**(_DWORD **)(*(_DWORD *)&stru_87C374.__pad_579C[22964] + 4 * nn) /*0x679b6c*/
                                                 + 100))(
      *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22964] + 4 * nn),
      aP0);
  for ( i1 = 0; i1 < *(int *)&stru_87C374.__pad_579C[23144]; ++i1 ) /*0x679b82*/
    WeaponTypeClass::CalculateSpeed(*(_DWORD **)(*(_DWORD *)&stru_87C374.__pad_579C[23132] + 4 * i1)); /*0x679b8c*/
  for ( i2 = 0; i2 < (int)g_TriggerClassCount; ++i2 ) /*0x679ba4*/
    nullsub_7(); /*0x679baf*/
  for ( i3 = 0; i3 < *(int *)&HouseClass_Player.__pad_5568[20596]; ++i3 ) /*0x679bc7*/
    (*(void (__thiscall **)(_DWORD, CCINIClass *))(**(_DWORD **)(*(_DWORD *)&HouseClass_Player.__pad_5568[20584] + 4 * i3) /*0x679bd5*/
                                                 + 100))(
      *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[20584] + 4 * i3),
      aP0);
  for ( i4 = 0; i4 < *(int *)&HouseClass_Player.__pad_5568[22900]; ++i4 ) /*0x679beb*/
    (*(void (__thiscall **)(_DWORD, CCINIClass *))(**(_DWORD **)(*(_DWORD *)&HouseClass_Player.__pad_5568[22888] + 4 * i4) /*0x679bf9*/
                                                 + 100))(
      *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[22888] + 4 * i4),
      aP0);
  for ( i5 = 0; i5 < *(int *)&HouseClass_Player.__pad_3C[8]; ++i5 ) /*0x679c0f*/
    (*(void (__thiscall **)(_DWORD, CCINIClass *))(**(_DWORD **)(HouseClass_Player.field_38 + 4 * i5) + 100))( /*0x679c1c*/
      *(_DWORD *)(HouseClass_Player.field_38 + 4 * i5),
      aP0);
  for ( i6 = 0; i6 < *(int *)&HouseClass_Player.__pad_3C[32]; ++i6 ) /*0x679c32*/
    (*(void (__thiscall **)(_DWORD, CCINIClass *))(**(_DWORD **)(*(_DWORD *)&HouseClass_Player.__pad_3C[20] + 4 * i6) /*0x679c3f*/
                                                 + 100))(
      *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_3C[20] + 4 * i6),
      aP0);
  for ( i7 = 0; i7 < *(int *)HouseClass_Player.__pad_2C; ++i7 ) /*0x679c55*/
    (*(void (__thiscall **)(_DWORD, CCINIClass *))(**(_DWORD **)(*(_DWORD *)&HouseClass_Player.__pad_18[8] + 4 * i7) /*0x679c62*/
                                                 + 100))(
      *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_18[8] + 4 * i7),
      aP0);
  for ( i8 = 0; i8 < *(int *)&HouseClass_Player.__pad_5568[22660]; ++i8 ) /*0x679c78*/
    (*(void (__thiscall **)(_DWORD, CCINIClass *))(**(_DWORD **)(*(_DWORD *)&HouseClass_Player.__pad_5568[22648] + 4 * i8) /*0x679c85*/
                                                 + 100))(
      *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[22648] + 4 * i8),
      aP0);
  v19 = 0; /*0x679c92*/
  v20 = (int *)&HouseClass_Player.__pad_5568[20724]; /*0x679c94*/
  do /*0x679cad*/
  {
    *v20 = v19; /*0x679c9c*/
    MissionClass::LoadFromINI(v20, aP0); /*0x679c9e*/
    v20 += 8; /*0x679ca3*/
    ++v19; /*0x679ca6*/
  }
  while ( (int)v20 < (int)&HouseClass_Player.__pad_5568[21748] ); /*0x679cad*/
  return 1; /*0x679caf*/
}
}
} // namespace gamemd

// 0x6A4550
namespace gamemd {
unsigned int * SideClass::Construct(CCINIClass * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall SideClass::Construct(_DWORD *this, CCINIClass *aP1)
{
  int v3; // eax

  AbstractTypeClass::Constructor((int)this, (AbstractClass *)aP1); /*0x6a4559*/
  *(this + 39) = 0; /*0x6a4563*/
  *(this + 40) = 0; /*0x6a4569*/
  *((_BYTE *)this + 164) = 1; /*0x6a456f*/
  *((_BYTE *)this + 165) = 0; /*0x6a4576*/
  *(this + 43) = 10; /*0x6a457c*/
  *(this + 42) = 0; /*0x6a4586*/
  *(this + 38) = &vt_TypeList_int; /*0x6a458c*/
  *this = &SideClass::`vftable'; /*0x6a4597*/
  *(this + 1) = &SideClass::`vftable'; /*0x6a459d*/
  *(this + 2) = &SideClass::`vftable'; /*0x6a45a3*/
  *(this + 3) = &vt_SideClass; /*0x6a45aa*/
  AbstractClass::GenerateUniqueID((int)(this + 1)); /*0x6a45b1*/
  if ( *(int *)stru_89E138.__pad_15FF8 < *(int *)&stru_89E138.__pad_579C[67668] /*0x6a45ea*/
    || (BYTE1(stru_89E138.field_15FF4) || !*(_DWORD *)&stru_89E138.__pad_579C[67668])
    && *(int *)&stru_89E138.__pad_15FF8[4] > 0
    && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&stru_89E138.__pad_579C[67660] + 8))(
         &stru_89E138.__pad_579C[67660],
         *(_DWORD *)&stru_89E138.__pad_579C[67668] + *(_DWORD *)&stru_89E138.__pad_15FF8[4],
         0) )
  {
    v3 = (*(_DWORD *)stru_89E138.__pad_15FF8)++; /*0x6a45f7*/
    *(_DWORD *)(*(_DWORD *)&stru_89E138.__pad_579C[67664] + 4 * v3) = this; /*0x6a4606*/
  }
  return this; /*0x6a460b*/
}
}
} // namespace gamemd

// 0x6A4710
namespace gamemd {
int SideClass::GetCountry(int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall SideClass::_vt13(int this, int *a2)
{
  AbstractTypeClass::ProcessPower((char *)this, a2); /*0x6a4719*/
  return Power::TimerProcess(*(_DWORD *)(this + 168)); /*0x6a472c*/
}
}
} // namespace gamemd

// 0x6A4780
namespace gamemd {
int SideClass::SaveLoad_Prefix(unsigned int * a0, AbstractTypeClass * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall SideClass::SaveLoad_Prefix(_DWORD *a0, AbstractTypeClass *aP1)
{
  AbstractTypeClass *v2; // esi
  AbstractClass *v3; // edi
  int result; // eax
  AbstractTypeClass *v5; // esi
  int i; // ebp
  int v7; // eax
  int abstractFlags; // ecx
  int uniqueId; // eax
  int v10; // edx

  v2 = (AbstractTypeClass *)a0; /*0x6a4782*/
  v3 = (AbstractClass *)aP1; /*0x6a4787*/
  result = AbstractClass::SaveLoad_Prefix_0((AbstractClass *)a0, (AbstractClass *)aP1); /*0x6a478d*/
  if ( result >= 0 ) /*0x6a4796*/
  {
    if ( v2 ) /*0x6a47a4*/
    {
      AbstractTypeClass::Init((int)v2, (AbstractTypeClass *)&aP1); /*0x6a47ad*/
      *(_DWORD *)&v2[1].__pad_0[4] = 0; /*0x6a47b2*/
      *(_DWORD *)&v2[1].__pad_0[8] = 0; /*0x6a47b8*/
      v2[1].__pad_0[12] = 1; /*0x6a47be*/
      v2[1].__pad_0[13] = 0; /*0x6a47c5*/
      v2[1].abstractFlags = 10; /*0x6a47cb*/
      v2[1].uniqueId = 0; /*0x6a47d1*/
      *(_DWORD *)v2[1].__pad_0 = &vt_TypeList_int; /*0x6a47d7*/
      *(_DWORD *)v2->__pad_0 = &SideClass::`vftable'; /*0x6a47e1*/
      *(_DWORD *)&v2->__pad_0[4] = &SideClass::`vftable'; /*0x6a47e7*/
      *(_DWORD *)&v2->__pad_0[8] = &SideClass::`vftable'; /*0x6a47ee*/
      *(_DWORD *)&v2->__pad_0[12] = &vt_SideClass; /*0x6a47f5*/
    }
    v5 = v2 + 1; /*0x6a47fc*/
    if ( v5 ) /*0x6a4804*/
    {
      *(_DWORD *)&v5->__pad_0[4] = 0; /*0x6a4806*/
      *(_DWORD *)&v5->__pad_0[8] = 0; /*0x6a4809*/
      v5->__pad_0[12] = 1; /*0x6a480c*/
      v5->__pad_0[13] = 0; /*0x6a4810*/
      v5->abstractFlags = 10; /*0x6a4813*/
      v5->uniqueId = 0; /*0x6a4816*/
      *(_DWORD *)v5->__pad_0 = &vt_TypeList_int; /*0x6a4819*/
    }
    (*(void (__stdcall **)(AbstractClass *, AbstractTypeClass **, int, _DWORD))(*(_DWORD *)v3->__pad_0 + 12))( /*0x6a482a*/
      v3,
      &aP1,
      4,
      0);
    for ( i = 0; i < (int)aP1; ++i ) /*0x6a4833*/
    {
      (*(void (__stdcall **)(AbstractClass *, _DWORD **, int, _DWORD))(*(_DWORD *)v3->__pad_0 + 12))(v3, &a0, 4, 0); /*0x6a4840*/
      v7 = *(_DWORD *)&v5->__pad_0[8]; /*0x6a4843*/
      if ( v5->uniqueId >= v7 ) /*0x6a484b*/
      {
        if ( !v5->__pad_0[13] && v7 ) /*0x6a4854*/
          continue; /*0x6a4854*/
        abstractFlags = v5->abstractFlags; /*0x6a4856*/
        if ( abstractFlags <= 0 /*0x6a4865*/
          || !(*(unsigned __int8 (__thiscall **)(AbstractTypeClass *, int, _DWORD))(*(_DWORD *)v5->__pad_0 + 8))(
                v5,
                v7 + abstractFlags,
                0) )
        {
          continue; /*0x6a4865*/
        }
      }
      uniqueId = v5->uniqueId; /*0x6a486c*/
      v10 = *(_DWORD *)&v5->__pad_0[4]; /*0x6a486f*/
      v5->uniqueId = uniqueId + 1; /*0x6a4875*/
      *(_DWORD *)(v10 + 4 * uniqueId) = a0; /*0x6a487c*/
    }
    return 0; /*0x6a4888*/
  }
  return result; /*0x6a488b*/
}
}
} // namespace gamemd

// 0x6A48A0
namespace gamemd {
int SideClass::SaveLoad_Prefix_0(TechnoTypeClass * aP0, int * a1, int aP2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall SideClass::SaveLoad_Prefix_0(TechnoTypeClass *aP0, int *a1, int aP2)
{
  int result; // eax
  int v4; // edx
  int i; // esi

  result = AbstractClass::SaveLoad_Prefix((ObjectTypeClass *)aP0, (ObjectTypeClass *)a1, (ObjectTypeClass *)aP2); /*0x6a48b1*/
  if ( result >= 0 ) /*0x6a48b8*/
  {
    v4 = *a1; /*0x6a48c0*/
    aP2 = *(_DWORD *)&aP0->ImageAllocated; /*0x6a48cd*/
    (*(void (__stdcall **)(int *, int *, int, _DWORD))(v4 + 16))(a1, &aP2, 4, 0); /*0x6a48d1*/
    for ( i = 0; i < aP2; ++i ) /*0x6a48dc*/
      (*(void (__stdcall **)(int *, int, int, _DWORD))(*a1 + 16))(a1, aP0->Armor[0] + 4 * i, 4, 0); /*0x6a48ef*/
    return 0; /*0x6a48f9*/
  }
  return result; /*0x6a48fc*/
}
}
} // namespace gamemd

// 0x6A4930
namespace gamemd {
SideClass * SideClass::Init(char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
SideClass *__thiscall SideClass::Init(void **this, char a2)
{
  int v3; // eax
  void *v4; // eax
  void **v6; // [esp+4h] [ebp-4h] BYREF

  *this = &SideClass::`vftable'; /*0x6a4936*/
  *(this + 1) = &SideClass::`vftable'; /*0x6a493c*/
  *(this + 2) = &SideClass::`vftable'; /*0x6a4943*/
  *(this + 3) = &vt_SideClass; /*0x6a494a*/
  AbstractClass::AnnounceExpiredPointer(this, 1); /*0x6a4951*/
  v6 = this; /*0x6a4966*/
  v3 = (*(int (__thiscall **)(int *, void ***))(MEMORY[0x8B4120] + 16))(&MEMORY[0x8B4120], &v6); /*0x6a496a*/
  if ( v3 != -1 && v3 < MEMORY[0x8B4130] && v3 < --MEMORY[0x8B4130] ) /*0x6a4985*/
  {
    do /*0x6a499d*/
    {
      ++v3; /*0x6a498d*/
      *((_DWORD *)MEMORY[0x8B4124] + v3 - 1) = *((_DWORD *)MEMORY[0x8B4124] + v3); /*0x6a4991*/
    }
    while ( v3 < MEMORY[0x8B4130] ); /*0x6a499d*/
  }
  v4 = *(this + 39); /*0x6a499f*/
  *(this + 38) = &vt_VectorClass_int; /*0x6a49a5*/
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
  return (SideClass *)this; /*0x6a49fa*/
}
}
} // namespace gamemd

// 0x6A4740
namespace gamemd {
int SideClass::ddtor(int a1, unsigned int * a2)
{
  if ( !a2 )
    return -2147467261;
  *a2 = -985803918;
  a2[1] = 298980638;
  a2[2] = 1610642817;
  a2[3] = -1252326136;
  return 0;
}
} // namespace gamemd

// 0x6A4910
namespace gamemd {
int SideClass::StubReturn180()
{
return 180;
}
} // namespace gamemd

// 0x6A4920
namespace gamemd {
int SideClass::StubReturn28()
{
return 28;
}
} // namespace gamemd
