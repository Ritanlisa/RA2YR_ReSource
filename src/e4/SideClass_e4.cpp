// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Power_e4.hpp"
#include "e4/classes/SideClass_e4.hpp"
#include "e4/classes/AbstractTypeClass_e4.hpp"
#include "e4/classes/CCINIClass_e4.hpp"
#include "e4/classes/MissionClass_e4.hpp"
#include "e4/classes/WeaponTypeClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/TeamTypeClass_e4.hpp"
#include "e4/classes/MouseClass_e4.hpp"
#include "e4/classes/Shroud_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/TechnoTypeClass_e4.hpp"

// 0x679A10
namespace gamemd {  // G42.18 ns repair
int SideClass::LoadAllFromINI(CCINIClass * aP0)
{


  int i; // edi
  for ( i = 0; i < dword_A83CA8; ++i ) /*0x679a20*/
    (*(void (**)(unsigned int, unsigned int *))(**((unsigned int **)dword_A83C9C + i) + 100))( /*0x679a2d*/
      *((unsigned int *)dword_A83C9C + i),
      aP0);
  int j; // edi
  for ( j = 0; j < dword_A8E340; ++j ) /*0x679a43*/
    (*(void (**)(unsigned int, unsigned int *))(**((unsigned int **)dword_A8E334 + j) + 100))( /*0x679a50*/
      *((unsigned int *)dword_A8E334 + j),
      aP0);
  int k; // edi
  for ( k = 0; k < FootClass_Array; ++k ) /*0x679a66*/
    (*(void (**)(unsigned int, char *))(**(unsigned int **)(FootClass_Array.?[3] + 4 * k) + 100))( /*0x679a77*/
      *(unsigned int *)(FootClass_Array.?[3] + 4 * k),
      &DataGlobal_887180);
  int m; // edi
  for ( m = 0; m < dword_A83C78; ++m ) /*0x679a8d*/
    (*(void (**)(unsigned int, unsigned int *))(**((unsigned int **)dword_A83C6C + m) + 100))( /*0x679a9a*/
      *((unsigned int *)dword_A83C6C + m),
      aP0);
  int n; // edi
  for ( n = 0; n < dword_A8B228; ++n ) /*0x679ab0*/
    (*(void (**)(unsigned int, unsigned int *))(**((unsigned int **)dword_A8B21C + n) + 100))( /*0x679abd*/
      *((unsigned int *)dword_A8B21C + n),
      aP0);
  int ii; // edi
  for ( ii = 0; ii < dword_A83CF0; ++ii ) /*0x679ad3*/
    (*(void (**)(unsigned int, unsigned int *))(**((unsigned int **)dword_A83CE4 + ii) + 100))( /*0x679ae0*/
      *((unsigned int *)dword_A83CE4 + ii),
      aP0);
  int jj; // edi
  for ( jj = 0; jj < dword_A8E358; ++jj ) /*0x679af6*/
    (*(void (**)(unsigned int, unsigned int *))(**((unsigned int **)dword_A8E34C + jj) + 100))( /*0x679b03*/
      *((unsigned int *)dword_A8E34C + jj),
      aP0);
  int kk; // edi
  for ( kk = 0; kk < g_WeaponTypePool; ++kk ) /*0x679b19*/
    (*(void (**)(unsigned int, unsigned int *))(**((unsigned int **)g_WeaponTypeConfig + kk) + 100))( /*0x679b26*/
      *((unsigned int *)g_WeaponTypeConfig + kk),
      aP0);
  int mm; // edi
  for ( mm = 0; mm < dword_A83C90; ++mm ) /*0x679b3c*/
    (*(void (**)(unsigned int, unsigned int *))(**((unsigned int **)dword_A83C84 + mm) + 100))( /*0x679b49*/
      *((unsigned int *)dword_A83C84 + mm),
      aP0);
  int nn; // edi
  for ( nn = 0; nn < g_WarheadTypePool; ++nn ) /*0x679b5f*/
    (*(void (**)(unsigned int, unsigned int *))(**((unsigned int **)dword_8874C4 + nn) + 100))( /*0x679b6c*/
      *((unsigned int *)dword_8874C4 + nn),
      aP0);
  int i1; // edi
  for ( i1 = 0; i1 < g_WeaponTypePool; ++i1 ) /*0x679b82*/
    (*((WeaponTypeClass **)g_WeaponTypeConfig + i1))->CalculateSpeed(); /*0x679b8c*/
  int i2; // edi
  ObjectClass *v22; // [esp+0h] [ebp-Ch]
  for ( i2 = 0; i2 < dword_A83C78; ++i2 ) /*0x679ba4*/
    nullsub_7(v22); /*0x679baf*/
  int i3; // edi
  for ( i3 = 0; i3 < dword_A8E328; ++i3 ) /*0x679bc7*/
    (*(void (**)(unsigned int, unsigned int *))(**((unsigned int **)dword_A8E31C + i3) + 100))( /*0x679bd5*/
      *((unsigned int *)dword_A8E31C + i3),
      aP0);
  int i4; // edi
  for ( i4 = 0; i4 < *(int *)&g_BuildingClass_InstanceCount; ++i4 ) /*0x679beb*/
    (*(void (**)(unsigned int, unsigned int *))(**(unsigned int **)(*(unsigned int *)&DataGlobal_A8EB00[284] + 4 * i4) + 100))( /*0x679bf9*/
      *(unsigned int *)(*(unsigned int *)&g_MultiplayerPool + 4 * i4),
      aP0);
  int i5; // edi
  for ( i5 = 0; i5 < *(int *)&g_ObjectTypeConfig; ++i5 ) /*0x679c0f*/
    (*(void (**)(unsigned int, unsigned int *))(**(unsigned int **)(*(unsigned int *)g_BuildingTypeClass_Array + 4 * i5) + 100))( /*0x679c1c*/
      *(unsigned int *)(*(unsigned int *)g_BuildingTypeClass_Array + 4 * i5),
      aP0);
  int i6; // edi
  for ( i6 = 0; i6 < *(int *)&g_BuildingTypeInitState; ++i6 ) /*0x679c32*/
    (*(void (**)(unsigned int, unsigned int *))(**(unsigned int **)(*(unsigned int *)&g_BuildingProductionQueue + 4 * i6) + 100))( /*0x679c3f*/
      *(unsigned int *)(*(unsigned int *)&g_BuildingProductionQueue + 4 * i6),
      aP0);
  int i7; // edi
  for ( i7 = 0; i7 < (int)g_InfantryTypeInitState; ++i7 ) /*0x679c55*/
    (*(void (**)(unsigned int, unsigned int *))(**(unsigned int **)(*(unsigned int *)&DataGlobal_A83D6C + 4 * i7) + 100))( /*0x679c62*/
      *(unsigned int *)(*(unsigned int *)&DataGlobal_A83D6C + 4 * i7),
      aP0);
  int i8; // edi
  for ( i8 = 0; i8 < stru_A8EB00.ObjectTypeClass[14]; ++i8 ) /*0x679c78*/
    (*(void (**)(unsigned int, unsigned int *))(**(unsigned int **)(stru_A8EB00.ObjectTypeClass[11] + 4 * i8) + 100))( /*0x679c85*/
      *(unsigned int *)(stru_A8EB00.ObjectTypeClass[11] + 4 * i8),
      aP0);
  char *v19 = 0; // ebx /*0x679c92*/
  MissionClass *v20; // edi
  v20 = (gamemd::MissionClass *)(&stru_A8E3A8); /*0x679c94*/
  do /*0x679cad*/
  {
    v20->ObjectClass = v19; /*0x679c9c*/
    (v20)->LoadFromINI(aP0); /*0x679c9e*/
    v20 = &v20->NeedsSaveOrLink; /*0x679ca3*/
    ++v19; /*0x679ca6*/
  }
  while ( (int)v20 < (int)&dword_A8E7A8 ); /*0x679cad*/
  return 1; /*0x679caf*/

}
}  // G42.18 ns repair
// 0x6A4550
namespace gamemd {
int SideClass::Construct(CCINIClass * aP1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8, void *a9)
{


  AbstractTypeClass::Constructor((int *)aP1, a2); /*0x6a4559*/
  aP1->houseTypesCount = 0; /*0x6a4563*/
  aP1->q0A0 = 0; /*0x6a4569*/
  aP1->q0A4 = 1; /*0x6a456f*/
  aP1->u32_A5 = 0; /*0x6a4576*/
  aP1->u32_AC = 10; /*0x6a457c*/
  aP1->u32_A8 = 0; /*0x6a4586*/
  /* X11: ptr_0 install elided (X67 recv-slot, RHS g_var_131447) */  /*0x6a458c*/
  /* X11: ptr_0 install elided (base-interface slot, RHS g_ptr_7F2E94) */  /*0x6a4597*/
  /* X11: ptr_0 install elided (X67 recv-slot, RHS g_ptr_7F2E94) */  /*0x6a459d*/
  /* X11: ptr_0 install elided (X67 recv-slot, RHS g_ptr_7F2E94) */  /*0x6a45a3*/
  /* X11: ptr_0 install elided (X67 recv-slot, RHS g_ptr_7F2E94) */  /*0x6a45aa*/
  AbstractClass::GenerateUniqueID((AbstractClass *)&aP1->ptr_4); /*0x6a45b1*/
  if ( dword_8B4130 < dword_8B4128 /*0x6a45ea*/
    || (BYTE1(dword_8B4128) || !FootClass_Array.?[1])
    && FootClass_Array.?[1] > 0
    && (*(unsigned __int8 (**)(int *, int, unsigned int))(FootClass_Array.? + 8))(
         &DataGlobal_8B3DC0[864],
         dword_8B4134 + FootClass_Array.?[1],
         0) )
  {
    int v3; // eax
    v3 = dword_8B4130++; /*0x6a45f7*/
    *(unsigned int *)(dword_8B4124 + 4 * v3) = aP1; /*0x6a4606*/
  }
  return &aP1->AbstractClass; /*0x6a460b*/

}
}
// 0x6A4710
namespace gamemd {
int SideClass::GetCountry(int * a2)
{
  ((AbstractTypeClass *)(a2))->ProcessPower(); /*0x6a4719*/
  return Power::TimerProcess(this->u32_A8); /*0x6a472c*/
}
}
// 0x6A4780
namespace gamemd {
int SideClass::SaveLoad_Prefix(unsigned int * a0, AbstractTypeClass * aP1)
{

  SideClass *v2; // esi
  int v3; // edi
  int result; // eax
  void **p_houseTypes; // esi
  int i; // ebp
  void *v7; // eax
  int v8; // ecx
  void *v9; // eax
  unsigned int *v10; // edx

  v2 = this; /*0x6a4782*/
  v3 = aP1; /*0x6a4787*/
  result = AbstractClass::SaveLoad_Prefix_0(this, aP1); /*0x6a478d*/
  if ( result >= 0 ) /*0x6a4796*/
  {
    if ( v2 ) /*0x6a47a4*/
    {
      AbstractTypeClass::Init((int)v2, (int)&aP1); /*0x6a47ad*/
      v2->houseTypesCount = 0; /*0x6a47b2*/
      v2[1].ptr_0 = 0; /*0x6a47b8*/
      LOBYTE(v2[1].ptr_4) = 1; /*0x6a47be*/
      BYTE1(v2[1].ptr_4) = 0; /*0x6a47c5*/
      v2[1].ptr_C = (void *)10; /*0x6a47cb*/
      v2[1].ptr_8 = 0; /*0x6a47d1*/
      /* X11: ptr_0 install elided (X67 recv-slot, RHS g_ptr_7E4DD8) */  /*0x6a47d7*/
      /* X11: ptr_0 install elided (legacy slot spelling slot, RHS g_var_01d193) */  /*0x6a47e1*/
      /* X11: ptr_0 install elided (legacy slot spelling slot, RHS g_var_01d193) */  /*0x6a47e7*/
      /* X11: ptr_0 install elided (legacy slot spelling slot, RHS g_var_01d193) */  /*0x6a47ee*/
      /* X11: ptr_0 install elided (legacy slot spelling slot, RHS g_var_01d193) */  /*0x6a47f5*/
    }
    p_houseTypes = &v2->houseTypes_d; /*0x6a47fc*/
    if ( p_houseTypes ) /*0x6a4804*/
    {
      p_houseTypes[1] = 0; /*0x6a4806*/
      p_houseTypes[2] = 0; /*0x6a4809*/
      *((unsigned char *)p_houseTypes + 12) = 1; /*0x6a480c*/
      *((unsigned char *)p_houseTypes + 13) = 0; /*0x6a4810*/
      p_houseTypes[5] = (void *)10; /*0x6a4813*/
      p_houseTypes[4] = 0; /*0x6a4816*/
      /* X11: ptr_0 install elided (X67 star-deref, RHS g_ptr_7E4DD8) */  /*0x6a4819*/
    }
    (*(void (**)(int, int *, int, unsigned int))(*(unsigned int *)v3 + 12))(v3, &aP1, 4, 0); /*0x6a482a*/
    for ( i = 0; i < aP1; ++i ) /*0x6a4833*/
    {
      (*(void (**)(int, SideClass **, int, unsigned int))(*(unsigned int *)v3 + 12))(v3, &this, 4, 0); /*0x6a4840*/
      v7 = p_houseTypes[2]; /*0x6a4843*/
      if ( (int)p_houseTypes[4] >= (int)v7 ) /*0x6a484b*/
      {
        if ( !*((unsigned char *)p_houseTypes + 13) && v7 ) /*0x6a4854*/
          continue; /*0x6a4854*/
        v8 = (int)p_houseTypes[5]; /*0x6a4856*/
        if ( v8 <= 0 /*0x6a4865*/
          || !(*((unsigned __int8 (**)(void **, int, unsigned int))*p_houseTypes + 2))(
                p_houseTypes,
                (int)v7 + v8,
                0) )
        {
          continue; /*0x6a4865*/
        }
      }
      v9 = p_houseTypes[4]; /*0x6a486c*/
      v10 = p_houseTypes[1]; /*0x6a486f*/
      p_houseTypes[4] = (char *)v9 + 1; /*0x6a4875*/
      v10[(unsigned int)v9] = this; /*0x6a487c*/
    }
    return 0; /*0x6a4888*/
  }
  return result; /*0x6a488b*/

}
}
// 0x6A4930
namespace gamemd {
void * SideClass::Init(void ** Block, char a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{


  /* X11: ptr_0 install elided (base-interface slot, RHS g_ptr_7F2E94) */  /*0x6a4936*/
  /* X11: ptr_0 install elided (qmark slot, RHS g_ptr_7F2E94) */  /*0x6a493c*/
  /* X11: ptr_0 install elided (X67 recv-slot, RHS g_ptr_7F2E94) */  /*0x6a4943*/
  /* X11: ptr_0 install elided (qmark slot, RHS g_ptr_7F2E94) */  /*0x6a494a*/
  AbstractClass::AnnounceExpiredPointer(&Block->AbstractClass, 1); /*0x6a4951*/
  SideClass *v6; // [esp+4h] [ebp-4h] BYREF
  v6 = (gamemd::SideClass *)(Block); /*0x6a4966*/
  int v3; // eax
  v3 = (*(int (**)(int *, SideClass **))(DataGlobal_8B3DC0[864] + 16))(&DataGlobal_8B3DC0[864], &v6); /*0x6a496a*/
  if ( v3 != -1 && v3 < FootClass_Array ) /*0x6a497a*/
  {
    --FootClass_Array; /*0x6a497f*/
    for ( ; /*0x6a4985*/
    v3 < FootClass_Array;
    *(unsigned int *)(FootClass_Array + 4 * v3 - 4) = *(unsigned int *)(FootClass_Array + 4 * v3) )
    {
      ++v3; /*0x6a498d*/
    }
  }
  void *houseTypesCount; // eax
  houseTypesCount = (void *)Block->houseTypesCount; /*0x6a499f*/
  /* X11: ptr_0 install elided (X67 recv-slot, RHS g_ptr_7E8500) */  /*0x6a49a5*/
  if ( houseTypesCount && *((unsigned char *)Block + 165) ) /*0x6a49b3*/
  {
    __3_YAXPAX_Z(houseTypesCount); /*0x6a49be*/
    Block->houseTypesCount = 0; /*0x6a49c6*/
  }
  *((unsigned char *)Block + 165) = 0; /*0x6a49d2*/
  *((unsigned int *)Block + 40) = 0; /*0x6a49d9*/
  ((AbstractTypeClass *)Block)->Dtor(); /*0x6a49e3*/
  if ( (a2 & 1) != 0 ) /*0x6a49ed*/
    __3_YAXPAX_Z(Block); /*0x6a49f0*/
  return &Block->AbstractClass; /*0x6a49fa*/

}
}
// 0x49D9F0
namespace gamemd {
int SideClass::FindByName(void *a1)
{

  int v3; // ebx
  char *v4; // esi

  if ( !_strcmpi((char *)this, g_Str__random_) ) /*0x49d9fb*/
    return -2; /*0x49da09*/
  if ( !this ) /*0x49da12*/
    return -1; /*0x49da12*/
  v3 = 0; /*0x49da19*/
  if ( dword_A83CA8 <= 0 ) /*0x49da1d*/
    return -1; /*0x49da53*/
  while ( 1 ) /*0x49da25*/
  {
    v4 = (char *)*((unsigned int *)dword_A83C9C + v3); /*0x49da25*/
    if ( !_strcmpi(v4 + 100, (char *)this) || !_strcmpi(v4 + 36, (char *)this) ) /*0x49da3d*/
      break; /*0x49da3d*/
    if ( ++v3 >= dword_A83CA8 ) /*0x49da51*/
      return -1; /*0x49da51*/
  }
  return v3; /*0x49da07*/

}
} // namespace gamemd

// 0x4E38A0
namespace gamemd {
wchar_t * SideClass::GetName(void *a1)
{
  if ( this == (SideClass *)-2 ) /*0x4e38a3*/
    return GetStringCSF((char *)(aSttPlayersider), 0, g_Str_File_GDlgSupp_cpp, 237); /*0x4e38b6*/
  if ( this == (SideClass *)-3 ) /*0x4e38bf*/
    return GetStringCSF((char *)(aSttPlayersideo), 0, g_Str_File_GDlgSupp_cpp, 239); /*0x4e38d2*/
  if ( !this ) /*0x4e38da*/
    return GetStringCSF((char *)(aSttPlayersidea), 0, g_Str_File_GDlgSupp_cpp, 241); /*0x4e38ed*/
  if ( this == 1 ) /*0x4e38f6*/
    return GetStringCSF((char *)(aSttPlayersidek), 0, g_Str_File_GDlgSupp_cpp, 243); /*0x4e3909*/
  if ( this == 2 ) /*0x4e3912*/
    return GetStringCSF((char *)(aSttPlayersidef), 0, g_Str_File_GDlgSupp_cpp, 245); /*0x4e3925*/
  if ( this == 3 ) /*0x4e392e*/
    return GetStringCSF((char *)(aSttPlayersideg), 0, g_Str_File_GDlgSupp_cpp, 247); /*0x4e3941*/
  if ( this == 4 ) /*0x4e394a*/
    return GetStringCSF((char *)(aSttPlayersideb), 0, g_Str_File_GDlgSupp_cpp, 249); /*0x4e395d*/
  if ( this == 5 ) /*0x4e3966*/
    return GetStringCSF((char *)(aSttPlayersidel), 0, g_Str_File_GDlgSupp_cpp, 251); /*0x4e3979*/
  if ( this == 6 ) /*0x4e3982*/
    return GetStringCSF((char *)(aSttPlayersidei), 0, g_Str_File_GDlgSupp_cpp, 253); /*0x4e3995*/
  if ( this == 7 ) /*0x4e399e*/
    return GetStringCSF((char *)(aSttPlayersidec), 0, g_Str_File_GDlgSupp_cpp, 255); /*0x4e39b1*/
  if ( this == 8 ) /*0x4e39ba*/
    return GetStringCSF((char *)(aSttPlayersider_0), 0, g_Str_File_GDlgSupp_cpp, 257); /*0x4e39cd*/
  if ( this == 9 ) /*0x4e39d6*/
    return GetStringCSF((char *)(aSttPlayersidey), 0, g_Str_File_GDlgSupp_cpp, 259); /*0x4e39e9*/
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
  a2[3] = unk_7E991C; /*0x6a4770*/
  return 0; /*0x6a474d*/
}
} // namespace gamemd

// 0x6A48A0
namespace gamemd {
int SideClass::SaveLoad_Prefix_0(TechnoTypeClass * aP0, int * a1, int aP2)
{

  int result; // eax
  result = AbstractClass::SaveLoad_Prefix((int *)aP0, a1, aP2); /*0x6a48b1*/
  if ( result >= 0 ) /*0x6a48b8*/
  {
    int v4 = *a1; // edx /*0x6a48c0*/
    aP2 = aP0->ImageAllocated; /*0x6a48cd*/
    (*(void (__stdcall **)(int *, int *, int, unsigned int))(v4 + 16))(a1, &aP2, 4, 0); /*0x6a48d1*/
    int i; // esi
    for ( i = 0; i < aP2; ++i ) /*0x6a48dc*/
      (*(void (__stdcall **)(int *, int, int, unsigned int))(*a1 + 16))(a1, (unsigned int)(aP0->houseTypesCount)+ 4 * i, 4, 0); /*0x6a48ef*/
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
