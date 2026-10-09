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
  char *v19; // ebx
  MissionClass *v20; // edi
  ObjectClass *v22; // [esp+0h] [ebp-Ch]

  for ( i = 0; i < dword_A83CA8; ++i ) /*0x679a20*/
    (*(void (__thiscall **)(_DWORD, _DWORD *))(**((_DWORD **)dword_A83C9C + i) + 100))( /*0x679a2d*/
      *((_DWORD *)dword_A83C9C + i),
      aP0);
  for ( j = 0; j < dword_A8E340; ++j ) /*0x679a43*/
    (*(void (__thiscall **)(_DWORD, _DWORD *))(**((_DWORD **)dword_A8E334 + j) + 100))( /*0x679a50*/
      *((_DWORD *)dword_A8E334 + j),
      aP0);
  for ( k = 0; k < FootClass_Array.secondaryFacing[0]; ++k ) /*0x679a66*/
    (*(void (__thiscall **)(_DWORD, char *))(**(_DWORD **)(FootClass_Array.primaryFacing[3] + 4 * k) + 100))( /*0x679a77*/
      *(_DWORD *)(FootClass_Array.primaryFacing[3] + 4 * k),
      &DSurface_ViewBounds.__pad_FC[228]);
  for ( m = 0; m < dword_A83C78; ++m ) /*0x679a8d*/
    (*(void (__thiscall **)(_DWORD, _DWORD *))(**((_DWORD **)dword_A83C6C + m) + 100))( /*0x679a9a*/
      *((_DWORD *)dword_A83C6C + m),
      aP0);
  for ( n = 0; n < dword_A8B228; ++n ) /*0x679ab0*/
    (*(void (__thiscall **)(_DWORD, _DWORD *))(**((_DWORD **)dword_A8B21C + n) + 100))( /*0x679abd*/
      *((_DWORD *)dword_A8B21C + n),
      aP0);
  for ( ii = 0; ii < dword_A83CF0; ++ii ) /*0x679ad3*/
    (*(void (__thiscall **)(_DWORD, _DWORD *))(**((_DWORD **)dword_A83CE4 + ii) + 100))( /*0x679ae0*/
      *((_DWORD *)dword_A83CE4 + ii),
      aP0);
  for ( jj = 0; jj < dword_A8E358; ++jj ) /*0x679af6*/
    (*(void (__thiscall **)(_DWORD, _DWORD *))(**((_DWORD **)dword_A8E34C + jj) + 100))( /*0x679b03*/
      *((_DWORD *)dword_A8E34C + jj),
      aP0);
  for ( kk = 0; kk < g_WeaponTypePool; ++kk ) /*0x679b19*/
    (*(void (__thiscall **)(_DWORD, _DWORD *))(**((_DWORD **)g_WeaponTypeConfig + kk) + 100))( /*0x679b26*/
      *((_DWORD *)g_WeaponTypeConfig + kk),
      aP0);
  for ( mm = 0; mm < dword_A83C90; ++mm ) /*0x679b3c*/
    (*(void (__thiscall **)(_DWORD, _DWORD *))(**((_DWORD **)dword_A83C84 + mm) + 100))( /*0x679b49*/
      *((_DWORD *)dword_A83C84 + mm),
      aP0);
  for ( nn = 0; nn < g_WarheadTypePool; ++nn ) /*0x679b5f*/
    (*(void (__thiscall **)(_DWORD, _DWORD *))(**((_DWORD **)dword_8874C4 + nn) + 100))( /*0x679b6c*/
      *((_DWORD *)dword_8874C4 + nn),
      aP0);
  for ( i1 = 0; i1 < g_WeaponTypePool; ++i1 ) /*0x679b82*/
    WeaponTypeClass::CalculateSpeed(*((WeaponTypeClass **)g_WeaponTypeConfig + i1)); /*0x679b8c*/
  for ( i2 = 0; i2 < dword_A83C78; ++i2 ) /*0x679ba4*/
    nullsub_7(v22); /*0x679baf*/
  for ( i3 = 0; i3 < dword_A8E328; ++i3 ) /*0x679bc7*/
    (*(void (__thiscall **)(_DWORD, _DWORD *))(**((_DWORD **)dword_A8E31C + i3) + 100))( /*0x679bd5*/
      *((_DWORD *)dword_A8E31C + i3),
      aP0);
  for ( i4 = 0; i4 < *(int *)&stru_A8EB00.?[68]; ++i4 ) /*0x679beb*/
    (*(void (__thiscall **)(_DWORD, _DWORD *))(**(_DWORD **)(*(_DWORD *)&stru_A8EB00.?[56] + 4 * i4) + 100))( /*0x679bf9*/
      *(_DWORD *)(*(_DWORD *)&stru_A8EB00.?[56] + 4 * i4),
      aP0);
  for ( i5 = 0; i5 < *(int *)&stru_A83D50.__pad_3C[4]; ++i5 ) /*0x679c0f*/
    (*(void (__thiscall **)(_DWORD, _DWORD *))(**(_DWORD **)(*(_DWORD *)stru_A83D50.__pad_34 + 4 * i5) + 100))( /*0x679c1c*/
      *(_DWORD *)(*(_DWORD *)stru_A83D50.__pad_34 + 4 * i5),
      aP0);
  for ( i6 = 0; i6 < *(int *)&stru_A83D50.__pad_3C[28]; ++i6 ) /*0x679c32*/
    (*(void (__thiscall **)(_DWORD, _DWORD *))(**(_DWORD **)(*(_DWORD *)&stru_A83D50.__pad_3C[16] + 4 * i6) + 100))( /*0x679c3f*/
      *(_DWORD *)(*(_DWORD *)&stru_A83D50.__pad_3C[16] + 4 * i6),
      aP0);
  for ( i7 = 0; i7 < (int)stru_A83D50.SuperClass_field_0x28; ++i7 ) /*0x679c55*/
    (*(void (__thiscall **)(_DWORD, _DWORD *))(**(_DWORD **)(*(_DWORD *)&stru_A83D50.__pad_14[8] + 4 * i7) + 100))( /*0x679c62*/
      *(_DWORD *)(*(_DWORD *)&stru_A83D50.__pad_14[8] + 4 * i7),
      aP0);
  for ( i8 = 0; i8 < stru_A8EB00.vfptr[14]; ++i8 ) /*0x679c78*/
    (*(void (__thiscall **)(_DWORD, _DWORD *))(**(_DWORD **)(stru_A8EB00.vfptr[11] + 4 * i8) + 100))( /*0x679c85*/
      *(_DWORD *)(stru_A8EB00.vfptr[11] + 4 * i8),
      aP0);
  v19 = 0; /*0x679c92*/
  v20 = &stru_A8E3A8; /*0x679c94*/
  do /*0x679cad*/
  {
    v20->vfptr = v19; /*0x679c9c*/
    MissionClass::LoadFromINI(v20, aP0); /*0x679c9e*/
    v20 = (MissionClass *)((char *)v20 + 32); /*0x679ca3*/
    ++v19; /*0x679ca6*/
  }
  while ( (int)v20 < (int)&dword_A8E7A8 ); /*0x679cad*/
  return 1; /*0x679caf*/
}
}
// 0x6A4550
namespace gamemd {
int SideClass::Construct(CCINIClass * aP1, void *a2, void *a3, void *a4, void *a5, void *a6)
{
  int v3; // eax

  AbstractTypeClass::Constructor(Source); /*0x6a4559*/
  this->houseTypesCount = 0; /*0x6a4563*/
  this->q028 = 0; /*0x6a4569*/
  this->u32_A4 = 1; /*0x6a456f*/
  this->u32_A5 = 0; /*0x6a4576*/
  this->q02B = 10; /*0x6a457c*/
  this->u32_A8 = 0; /*0x6a4586*/
  this->houseTypes = &(void*)(void*)&TypeList_int_vftable; /*0x6a458c*/
  this->vfptr = &(void*)(void*)&SideClass_vftable; /*0x6a4597*/
  this->vfptr1 = &(void*)(void*)&SideClass_vftable; /*0x6a459d*/
  this->vfptr2 = &(void*)(void*)&SideClass_vftable; /*0x6a45a3*/
  this->vfptr3 = &(void*)(void*)&SideClass_vftable; /*0x6a45aa*/
  AbstractClass::GenerateUniqueID((AbstractClass *)&this->vfptr1); /*0x6a45b1*/
  if ( FootClass_Array.barrelFacing[0] < FootClass_Array.unloadTimer[1] /*0x6a45ea*/
    || (IDA_BYTE1(FootClass_Array.unloadTimer[2]) || !FootClass_Array.unloadTimer[1])
    && FootClass_Array.barrelFacing[1] > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(FootClass_Array.tiberiumCollectionState + 8))(
         &FootClass_Array.tiberiumCollectionState,
         FootClass_Array.unloadTimer[1] + FootClass_Array.barrelFacing[1],
         0) )
  {
    v3 = FootClass_Array.barrelFacing[0]++; /*0x6a45f7*/
    *(_DWORD *)(FootClass_Array.unloadTimer[0] + 4 * v3) = this; /*0x6a4606*/
  }
  return &this->vfptr; /*0x6a460b*/
}
}
// 0x6A4710
namespace gamemd {
int SideClass::GetCountry(int * a2)
{
  AbstractTypeClass::ProcessPower(a2); /*0x6a4719*/
  return Power::TimerProcess(this->u32_A8); /*0x6a472c*/
}
}
// 0x6A4780
namespace gamemd {
int SideClass::SaveLoad_Prefix(unsigned int * a0, AbstractTypeClass * aP1)
{
  int result; // eax
  void **p_houseTypes; // esi
  int i; // ebp
  void *v7; // eax
  int v8; // ecx
  void *v9; // eax
  _DWORD *v10; // edx

  a0 = a0; /*0x6a4782*/
  aP1 = aP1; /*0x6a4787*/
  result = AbstractClass::SaveLoad_Prefix_0(a0, aP1); /*0x6a478d*/
  if ( result >= 0 ) /*0x6a4796*/
  {
    if ( a0 ) /*0x6a47a4*/
    {
      AbstractTypeClass::Init((int)a0, (int)&aP1); /*0x6a47ad*/
      a0->houseTypesCount = 0; /*0x6a47b2*/
      a0[1].vfptr = 0; /*0x6a47b8*/
      IDA_LOBYTE(a0[1].vfptr1) = 1; /*0x6a47be*/
      IDA_BYTE1(a0[1].vfptr1) = 0; /*0x6a47c5*/
      a0[1].vfptr3 = (void *)10; /*0x6a47cb*/
      a0[1].vfptr2 = 0; /*0x6a47d1*/
      a0->houseTypes = &(void*)(void*)&TypeList_int_vftable; /*0x6a47d7*/
      a0->vfptr = &(void*)(void*)&SideClass_vftable; /*0x6a47e1*/
      a0->vfptr1 = &(void*)(void*)&SideClass_vftable; /*0x6a47e7*/
      a0->vfptr2 = &(void*)(void*)&SideClass_vftable; /*0x6a47ee*/
      a0->vfptr3 = &(void*)(void*)&SideClass_vftable; /*0x6a47f5*/
    }
    p_houseTypes = &a0->houseTypes; /*0x6a47fc*/
    if ( p_houseTypes ) /*0x6a4804*/
    {
      p_houseTypes[1] = 0; /*0x6a4806*/
      p_houseTypes[2] = 0; /*0x6a4809*/
      *((_BYTE *)p_houseTypes + 12) = 1; /*0x6a480c*/
      *((_BYTE *)p_houseTypes + 13) = 0; /*0x6a4810*/
      p_houseTypes[5] = (void *)10; /*0x6a4813*/
      p_houseTypes[4] = 0; /*0x6a4816*/
      *p_houseTypes = &(void*)(void*)&TypeList_int_vftable; /*0x6a4819*/
    }
    (*(void (__stdcall **)(int, int *, int, _DWORD))(aP1->vtable4)(aP1, &aP1, 4, 0); /*0x6a482a*/
    for ( i = 0; i < aP1; ++i ) /*0x6a4833*/
    {
      (*(void (__stdcall **)(int, SideClass **, int, _DWORD))(aP1->vtable4)(aP1, &a0, 4, 0); /*0x6a4840*/
      v7 = p_houseTypes[2]; /*0x6a4843*/
      if ( (int)p_houseTypes[4] >= (int)v7 ) /*0x6a484b*/
      {
        if ( !*((_BYTE *)p_houseTypes + 13) && v7 ) /*0x6a4854*/
          continue; /*0x6a4854*/
        v8 = (int)p_houseTypes[5]; /*0x6a4856*/
        if ( v8 <= 0 /*0x6a4865*/
          || !(*((unsigned __int8 (__thiscall **)(void **, int, _DWORD))*p_houseTypes + 2))(
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
      v10[(_DWORD)v9] = a0; /*0x6a487c*/
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
  int v3; // eax
  void *houseTypesCount; // eax

  this->vfptr = &(void*)(void*)&SideClass_vftable; /*0x6a4936*/
  this->vfptr1 = &(void*)(void*)&SideClass_vftable; /*0x6a493c*/
  this->vfptr2 = &(void*)(void*)&SideClass_vftable; /*0x6a4943*/
  this->vfptr3 = &(void*)(void*)&SideClass_vftable; /*0x6a494a*/
  AbstractClass::AnnounceExpiredPointer(&this->vfptr, 1); /*0x6a4951*/
  v3 = (*(int (__thiscall **)(int *, SideClass **))(FootClass_Array.tiberiumCollectionState + 16))( /*0x6a496a*/
         &FootClass_Array.tiberiumCollectionState,
         &this);
  if ( v3 != -1 && v3 < FootClass_Array.barrelFacing[0] ) /*0x6a497a*/
  {
    --FootClass_Array.barrelFacing[0]; /*0x6a497f*/
    for ( ; /*0x6a4985*/
          v3 < FootClass_Array.barrelFacing[0];
          *(_DWORD *)(FootClass_Array.unloadTimer[0] + 4 * v3 - 4) = *(_DWORD *)(FootClass_Array.unloadTimer[0] + 4 * v3) )
    {
      ++v3; /*0x6a498d*/
    }
  }
  houseTypesCount = (void *)this->houseTypesCount; /*0x6a499f*/
  this->houseTypes = &(void*)(void*)&VectorClass_int_vftable; /*0x6a49a5*/
  if ( houseTypesCount && this->u32_A5 ) /*0x6a49b3*/
  {
    RA2_OPDEL(houseTypesCount); /*0x6a49be*/
    this->houseTypesCount = 0; /*0x6a49c6*/
  }
  this->u32_A5 = 0; /*0x6a49d2*/
  this->q028 = 0; /*0x6a49d9*/
  AbstractTypeClass::Dtor(); /*0x6a49e3*/
  if ( (a2 & 1) != 0 ) /*0x6a49ed*/
    RA2_OPDEL(); /*0x6a49f0*/
  return &this->vfptr; /*0x6a49fa*/
}
}
// 0x49D9F0
namespace gamemd {
int SideClass::FindByName(void *a1)
{
  int v3; // ebx
  int v4; // esi

  if ( !_strcmpi((char *)a1, g_Str__random_) ) /*0x49d9fb*/
    return -2; /*0x49da09*/
  if ( !a1 ) /*0x49da12*/
    return -1; /*0x49da12*/
  v3 = 0; /*0x49da19*/
  if ( dword_A83CA8 <= 0 ) /*0x49da1d*/
    return -1; /*0x49da53*/
  while ( 1 ) /*0x49da25*/
  {
    v4 = *((_DWORD *)dword_A83C9C + v3); /*0x49da25*/
    if ( !_strcmpi((char *)(v4 + 100), (char *)a1) || !_strcmpi((char *)(v4 + 36), (char *)a1) ) /*0x49da3d*/
      break; /*0x49da3d*/
    if ( ++v3 >= dword_A83CA8 ) /*0x49da51*/
      return -1; /*0x49da51*/
  }
  return v3; /*0x49da07*/
}
} // namespace gamemd

// 0x4E38A0
namespace gamemd {
wchar_t * SideClass::GetName()
{
  if ( this == (SideClass *)-2 ) /*0x4e38a3*/
    return GetStringCSF(aSttPlayersider, 0, g_Str_File_GDlgSupp_cpp, 237); /*0x4e38b6*/
  if ( this == (SideClass *)-3 ) /*0x4e38bf*/
    return GetStringCSF(aSttPlayersideo, 0, g_Str_File_GDlgSupp_cpp, 239); /*0x4e38d2*/
  if ( !this ) /*0x4e38da*/
    return GetStringCSF(aSttPlayersidea, 0, g_Str_File_GDlgSupp_cpp, 241); /*0x4e38ed*/
  if ( this == (SideClass *)1 ) /*0x4e38f6*/
    return GetStringCSF(aSttPlayersidek, 0, g_Str_File_GDlgSupp_cpp, 243); /*0x4e3909*/
  if ( this == (SideClass *)2 ) /*0x4e3912*/
    return GetStringCSF(aSttPlayersidef, 0, g_Str_File_GDlgSupp_cpp, 245); /*0x4e3925*/
  if ( this == (SideClass *)3 ) /*0x4e392e*/
    return GetStringCSF(aSttPlayersideg, 0, g_Str_File_GDlgSupp_cpp, 247); /*0x4e3941*/
  if ( this == (SideClass *)4 ) /*0x4e394a*/
    return GetStringCSF(aSttPlayersideb, 0, g_Str_File_GDlgSupp_cpp, 249); /*0x4e395d*/
  if ( this == (SideClass *)5 ) /*0x4e3966*/
    return GetStringCSF(aSttPlayersidel, 0, g_Str_File_GDlgSupp_cpp, 251); /*0x4e3979*/
  if ( this == (SideClass *)6 ) /*0x4e3982*/
    return GetStringCSF(aSttPlayersidei, 0, g_Str_File_GDlgSupp_cpp, 253); /*0x4e3995*/
  if ( this == (SideClass *)7 ) /*0x4e399e*/
    return GetStringCSF(aSttPlayersidec, 0, g_Str_File_GDlgSupp_cpp, 255); /*0x4e39b1*/
  if ( this == (SideClass *)8 ) /*0x4e39ba*/
    return GetStringCSF(aSttPlayersider_0, 0, g_Str_File_GDlgSupp_cpp, 257); /*0x4e39cd*/
  if ( this == (SideClass *)9 ) /*0x4e39d6*/
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
  a2[3] = unk_7E991C; /*0x6a4770*/
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

  result = AbstractClass::SaveLoad_Prefix((int *)aP0, a1, aP2); /*0x6a48b1*/
  if ( result >= 0 ) /*0x6a48b8*/
  {
    v4 = *a1; /*0x6a48c0*/
    aP2 = *((_DWORD *)aP0 + 42); /*0x6a48cd*/
    (*(void (__stdcall **)(int *, int *, int, _DWORD))(v4 + 16))(a1, &aP2, 4, 0); /*0x6a48d1*/
    for ( i = 0; i < aP2; ++i ) /*0x6a48dc*/
      (*(void (__stdcall **)(int *, int, int, _DWORD))(*a1 + 16))(a1, aP0->houseTypesCount + 4 * i, 4, 0); /*0x6a48ef*/
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
