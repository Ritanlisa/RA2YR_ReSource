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
    (*(void (**)(unsigned int, CCINIClass *))(**((unsigned int **)g_SuperWeaponTypeCount + i) + 100))( /*0x679a2d*/
      *((unsigned int *)g_SuperWeaponTypeCount + i),
      aP0);
  for ( j = 0; j < *(int *)&HouseClass_Player.__pad_5568[20620]; ++j ) /*0x679a43*/
    (*(void (**)(unsigned int, CCINIClass *))(**(unsigned int **)(*(unsigned int *)&HouseClass_Player.__pad_5568[20608] + 4 * j) /*0x679a50*/
                                                 + 100))(
      *(unsigned int *)(*(unsigned int *)&HouseClass_Player.__pad_5568[20608] + 4 * j),
      aP0);
  for ( k = 0; k < *(int *)&stru_89E138.__pad_1600D[27]; ++k ) /*0x679a66*/
    (*(void (**)(unsigned int, char *))(**(unsigned int **)(*(unsigned int *)&stru_89E138.__pad_1600D[15] + 4 * k) + 100))( /*0x679a77*/
      *(unsigned int *)(*(unsigned int *)&stru_89E138.__pad_1600D[15] + 4 * k),
      &stru_87C374.__pad_579C[22128]);
  for ( m = 0; m < (int)g_TriggerClassCount; ++m ) /*0x679a8d*/
    (*(void (**)(unsigned int, CCINIClass *))(**((unsigned int **)g_TriggerTypeCount + m) + 100))( /*0x679a9a*/
      *((unsigned int *)g_TriggerTypeCount + m),
      aP0);
  for ( n = 0; n < *(int *)&HouseClass_Player.__pad_5568[8052]; ++n ) /*0x679ab0*/
    (*(void (**)(unsigned int, CCINIClass *))(**(unsigned int **)(*(unsigned int *)&HouseClass_Player.__pad_5568[8040] + 4 * n) /*0x679abd*/
                                                 + 100))(
      *(unsigned int *)(*(unsigned int *)&HouseClass_Player.__pad_5568[8040] + 4 * n),
      aP0);
  for ( ii = 0; ii < (int)g_CrateCount; ++ii ) /*0x679ad3*/
    (*(void (**)(unsigned int, CCINIClass *))(**(unsigned int **)&g_UnitTypeCount2->__pad_0[4 * ii] + 100))( /*0x679ae0*/
      *(unsigned int *)&g_UnitTypeCount2->__pad_0[4 * ii],
      aP0);
  for ( jj = 0; jj < *(int *)&HouseClass_Player.__pad_5568[20644]; ++jj ) /*0x679af6*/
    (*(void (**)(unsigned int, CCINIClass *))(**(unsigned int **)(*(unsigned int *)&HouseClass_Player.__pad_5568[20632] + 4 * jj) /*0x679b03*/
                                                 + 100))(
      *(unsigned int *)(*(unsigned int *)&HouseClass_Player.__pad_5568[20632] + 4 * jj),
      aP0);
  for ( kk = 0; kk < *(int *)&stru_87C374.__pad_579C[23144]; ++kk ) /*0x679b19*/
    (*(void (**)(unsigned int, CCINIClass *))(**(unsigned int **)(*(unsigned int *)&stru_87C374.__pad_579C[23132] + 4 * kk) /*0x679b26*/
                                                 + 100))(
      *(unsigned int *)(*(unsigned int *)&stru_87C374.__pad_579C[23132] + 4 * kk),
      aP0);
  for ( mm = 0; mm < (int)g_BulletTypeInitState; ++mm ) /*0x679b3c*/
    (*(void (**)(unsigned int, CCINIClass *))(**(unsigned int **)&dword_A83C84->__pad_0[4 * mm] + 100))( /*0x679b49*/
      *(unsigned int *)&dword_A83C84->__pad_0[4 * mm],
      aP0);
  for ( nn = 0; nn < *(int *)&stru_87C374.__pad_579C[22976]; ++nn ) /*0x679b5f*/
    (*(void (**)(unsigned int, CCINIClass *))(**(unsigned int **)(*(unsigned int *)&stru_87C374.__pad_579C[22964] + 4 * nn) /*0x679b6c*/
                                                 + 100))(
      *(unsigned int *)(*(unsigned int *)&stru_87C374.__pad_579C[22964] + 4 * nn),
      aP0);
  for ( i1 = 0; i1 < *(int *)&stru_87C374.__pad_579C[23144]; ++i1 ) /*0x679b82*/
    WeaponTypeClass::CalculateSpeed(*(unsigned int **)(*(unsigned int *)&stru_87C374.__pad_579C[23132] + 4 * i1)); /*0x679b8c*/
  for ( i2 = 0; i2 < (int)g_TriggerClassCount; ++i2 ) /*0x679ba4*/
    nullsub_7(); /*0x679baf*/
  for ( i3 = 0; i3 < *(int *)&HouseClass_Player.__pad_5568[20596]; ++i3 ) /*0x679bc7*/
    (*(void (**)(unsigned int, CCINIClass *))(**(unsigned int **)(*(unsigned int *)&HouseClass_Player.__pad_5568[20584] + 4 * i3) /*0x679bd5*/
                                                 + 100))(
      *(unsigned int *)(*(unsigned int *)&HouseClass_Player.__pad_5568[20584] + 4 * i3),
      aP0);
  for ( i4 = 0; i4 < *(int *)&HouseClass_Player.__pad_5568[22900]; ++i4 ) /*0x679beb*/
    (*(void (**)(unsigned int, CCINIClass *))(**(unsigned int **)(*(unsigned int *)&HouseClass_Player.__pad_5568[22888] + 4 * i4) /*0x679bf9*/
                                                 + 100))(
      *(unsigned int *)(*(unsigned int *)&HouseClass_Player.__pad_5568[22888] + 4 * i4),
      aP0);
  for ( i5 = 0; i5 < *(int *)&HouseClass_Player.__pad_3C[8]; ++i5 ) /*0x679c0f*/
    (*(void (**)(unsigned int, CCINIClass *))(**(unsigned int **)(HouseClass_Player.field_38 + 4 * i5) + 100))( /*0x679c1c*/
      *(unsigned int *)(HouseClass_Player.field_38 + 4 * i5),
      aP0);
  for ( i6 = 0; i6 < *(int *)&HouseClass_Player.__pad_3C[32]; ++i6 ) /*0x679c32*/
    (*(void (**)(unsigned int, CCINIClass *))(**(unsigned int **)(*(unsigned int *)&HouseClass_Player.__pad_3C[20] + 4 * i6) /*0x679c3f*/
                                                 + 100))(
      *(unsigned int *)(*(unsigned int *)&HouseClass_Player.__pad_3C[20] + 4 * i6),
      aP0);
  for ( i7 = 0; i7 < *(int *)HouseClass_Player.__pad_2C; ++i7 ) /*0x679c55*/
    (*(void (**)(unsigned int, CCINIClass *))(**(unsigned int **)(*(unsigned int *)&HouseClass_Player.__pad_18[8] + 4 * i7) /*0x679c62*/
                                                 + 100))(
      *(unsigned int *)(*(unsigned int *)&HouseClass_Player.__pad_18[8] + 4 * i7),
      aP0);
  for ( i8 = 0; i8 < *(int *)&HouseClass_Player.__pad_5568[22660]; ++i8 ) /*0x679c78*/
    (*(void (**)(unsigned int, CCINIClass *))(**(unsigned int **)(*(unsigned int *)&HouseClass_Player.__pad_5568[22648] + 4 * i8) /*0x679c85*/
                                                 + 100))(
      *(unsigned int *)(*(unsigned int *)&HouseClass_Player.__pad_5568[22648] + 4 * i8),
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
// 0x6A4550
namespace gamemd {
int SideClass::Construct(CCINIClass * aP1)
{
    unsigned int v3 = 0;  /* G37 hoist */
    unsigned int v3 = 0;  /* G37 hoist */
    unsigned int v3 = 0;  /* G37 hoist */
    unsigned int v3 = 0;  /* G37 hoist */
    unsigned int v3 = 0;  /* G37 hoist */
    unsigned int v3 = 0;  /* G37 hoist */
    unsigned int v3 = 0;  /* G37 hoist */
    unsigned int v3 = 0;  /* G37 hoist */

  int v3; // eax

  AbstractTypeClass::Constructor((int)this, (AbstractClass *)aP1); /*0x6a4559*/
  *((unsigned int *)this + 39) = 0; /*0x6a4563*/
  *((unsigned int *)this + 40) = 0; /*0x6a4569*/
  *((unsigned char *)this + 164) = 1; /*0x6a456f*/
  *((unsigned char *)this + 165) = 0; /*0x6a4576*/
  *((unsigned int *)this + 43) = 10; /*0x6a457c*/
  *((unsigned int *)this + 42) = 0; /*0x6a4586*/
  *((unsigned int *)this + 38) = &vt_TypeList_int; /*0x6a458c*/
  *this = &vt_SideClass; /*0x6a4597*/
  *((unsigned int *)this + 1) = &vt_SideClass; /*0x6a459d*/
  *((unsigned int *)this + 2) = &vt_SideClass; /*0x6a45a3*/
  *((unsigned int *)this + 3) = &vt_SideClass; /*0x6a45aa*/
  AbstractClass::GenerateUniqueID((int)((unsigned int *)this + 1)); /*0x6a45b1*/
  if ( *(int *)stru_89E138.__pad_15FF8 < *(int *)&stru_89E138.__pad_579C[67668] /*0x6a45ea*/
    || (IDA_BYTE1(stru_89E138.field_15FF4) || !*(unsigned int *)&stru_89E138.__pad_579C[67668])
    && *(int *)&stru_89E138.__pad_15FF8[4] > 0
    && (*(uint8_t (**)(char *, int, unsigned int))(*(unsigned int *)&stru_89E138.__pad_579C[67660] + 8))(
         &stru_89E138.__pad_579C[67660],
         *(unsigned int *)&stru_89E138.__pad_579C[67668] + *(unsigned int *)&stru_89E138.__pad_15FF8[4],
         0) )
  {
    v3 = (*(unsigned int *)stru_89E138.__pad_15FF8)++; /*0x6a45f7*/
    *(unsigned int *)(*(unsigned int *)&stru_89E138.__pad_579C[67664] + 4 * v3) = this; /*0x6a4606*/
  }
  return this; /*0x6a460b*/

}
}
// 0x6A4710
namespace gamemd {
int SideClass::GetCountry(int * a2)
{

  AbstractTypeClass::ProcessPower((char *)this, a2); /*0x6a4719*/
  return Power::TimerProcess(*((unsigned int *)this + 42)); /*0x6a472c*/

}
}
// 0x6A4780
namespace gamemd {
int SideClass::SaveLoad_Prefix(unsigned int * a0, AbstractTypeClass * aP1)
{

  AbstractTypeClass *v2; // esi
  AbstractClass *v3; // edi
  int result; // eax
  AbstractTypeClass *v5; // esi
  int i; // ebp
  int v7; // eax
  int abstractFlags; // ecx
  int uniqueId; // eax
  unsigned int * v10;

  v2 = (AbstractTypeClass *)a0; /*0x6a4782*/
  v3 = (AbstractClass *)aP1; /*0x6a4787*/
  result = AbstractClass::SaveLoad_Prefix_0((AbstractClass *)a0, (AbstractClass *)aP1); /*0x6a478d*/
  if ( result >= 0 ) /*0x6a4796*/
  {
    if ( v2 ) /*0x6a47a4*/
    {
      AbstractTypeClass::Init((int)v2, (AbstractTypeClass *)&aP1); /*0x6a47ad*/
      *(unsigned int *)&v2[((unsigned int *)(1].__pad_0))[4] = 0; /*0x6a47b2*/
      *(unsigned int *)&v2[((unsigned int *)(1].__pad_0))[8] = 0; /*0x6a47b8*/
      v2[((unsigned int *)(1].__pad_0))[12] = 1; /*0x6a47be*/
      v2[((unsigned int *)(1].__pad_0))[13] = 0; /*0x6a47c5*/
      v2[1].abstractFlags = 10; /*0x6a47cb*/
      v2[1].uniqueId = 0; /*0x6a47d1*/
      *(unsigned int *)v2[1].__pad_0 = &vt_TypeList_int; /*0x6a47d7*/
      *(unsigned int *)v2->__pad_0 = &vt_SideClass; /*0x6a47e1*/
      *(unsigned int *)&v2-((unsigned int *)(>__pad_0))[4] = &vt_SideClass; /*0x6a47e7*/
      *(unsigned int *)&v2-((unsigned int *)(>__pad_0))[8] = &vt_SideClass; /*0x6a47ee*/
      *(unsigned int *)&v2-((unsigned int *)(>__pad_0))[12] = &vt_SideClass; /*0x6a47f5*/
    }
    v5 = v2 + 1; /*0x6a47fc*/
    if ( v5 ) /*0x6a4804*/
    {
      *(unsigned int *)&v5-((unsigned int *)(>__pad_0))[4] = 0; /*0x6a4806*/
      *(unsigned int *)&v5-((unsigned int *)(>__pad_0))[8] = 0; /*0x6a4809*/
      v5-((unsigned int *)(>__pad_0))[12] = 1; /*0x6a480c*/
      v5-((unsigned int *)(>__pad_0))[13] = 0; /*0x6a4810*/
      v5->abstractFlags = 10; /*0x6a4813*/
      v5->uniqueId = 0; /*0x6a4816*/
      *(unsigned int *)v5->__pad_0 = &vt_TypeList_int; /*0x6a4819*/
    }
    (*(void (**)(AbstractClass *, AbstractTypeClass **, int, unsigned int))(*(unsigned int *)v3->__pad_0 + 12))( /*0x6a482a*/
      v3,
      &aP1,
      4,
      0);
    for ( i = 0; i < (int)aP1; ++i ) /*0x6a4833*/
    {
      (*(void (**)(AbstractClass *, unsigned int **, int, unsigned int))(*(unsigned int *)v3->__pad_0 + 12))(v3, &a0, 4, 0); /*0x6a4840*/
      v7 = *(unsigned int *)&v5-((unsigned int *)(>__pad_0))[8]; /*0x6a4843*/
      if ( v5->uniqueId >= v7 ) /*0x6a484b*/
      {
        if ( !v5-((unsigned int *)(>__pad_0))[13] && v7 ) /*0x6a4854*/
          continue; /*0x6a4854*/
        abstractFlags = v5->abstractFlags; /*0x6a4856*/
        if ( abstractFlags <= 0 /*0x6a4865*/
          || !(*(uint8_t (**)(AbstractTypeClass *, int, unsigned int))(*(unsigned int *)v5->__pad_0 + 8))(
                v5,
                v7 + abstractFlags,
                0) )
        {
          continue; /*0x6a4865*/
        }
      }
      uniqueId = (unsigned int)(v5->uniqueId);
      v10 = *(unsigned int *)&v5-((unsigned int *)(>__pad_0))[4]; /*0x6a486f*/
      v5->uniqueId = uniqueId + 1; /*0x6a4875*/
      *(unsigned int *)(v10 + 4 * uniqueId) = a0; /*0x6a487c*/
    }
    return 0; /*0x6a4888*/
  }
  return result; /*0x6a488b*/

}
}
// 0x6A4930
namespace gamemd {
void * SideClass::Init(void ** Block, char a2)
{

  int v3; // eax
  void *v4; // eax
  void **v6; // [esp+4h] [ebp-4h] BYREF

  *Block = (void *)(&vt_SideClass);
  *(Block + 1) = &vt_SideClass; /*0x6a493c*/
  *(Block + 2) = &vt_SideClass; /*0x6a4943*/
  *(Block + 3) = &vt_SideClass; /*0x6a494a*/
  AbstractClass::AnnounceExpiredPointer(Block, 1); /*0x6a4951*/
  v6 = Block; /*0x6a4966*/
  v3 = (*(int (**)(int *, void ***))(g_abs_8B4120 + 16))(&g_abs_8B4120, &v6); /*0x6a496a*/
  if ( v3 != -1 && v3 < (int)(g_abs_8B4130) && v3 < --g_abs_8B4130 ) /*0x6a4985*/
  {
    do /*0x6a499d*/
    {
      ++v3; /*0x6a498d*/
      *(int)(((unsigned int *)g_abs_8B4124 + v3 - 1)) = *((unsigned int *)g_abs_8B4124 + v3); /*0x6a4991*/
    }
    while ( v3 < (int)(g_abs_8B4130) ); /*0x6a499d*/
  }
  v4 = *(Block + 39); /*0x6a499f*/
  *(Block + 38) = &vt_VectorClass_int; /*0x6a49a5*/
  if ( v4 && *((unsigned char *)Block + 165) ) /*0x6a49b3*/
  {
    RA2_OPDEL(v4); /*0x6a49be*/
    *(Block + 39) = 0; /*0x6a49c6*/
  }
  *((unsigned char *)Block + 165) = 0; /*0x6a49d2*/
  *(Block + 40) = 0; /*0x6a49d9*/
  AbstractTypeClass::Dtor(Block); /*0x6a49e3*/
  if ( ((unsigned int)(Block)& 1) != 0 ) /*0x6a49ed*/
    RA2_OPDEL(Block); /*0x6a49f0*/
  return (SideClass *)Block; /*0x6a49fa*/

}
}
// 0x49D9F0
namespace gamemd {
int SideClass::FindByName()
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
    v4 = *((unsigned int *)g_SuperWeaponTypeCount + v3); /*0x49da25*/
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

  result = AbstractClass::SaveLoad_Prefix((ObjectTypeClass *)aP0, (ObjectTypeClass *)a1, (ObjectTypeClass *)aP2); /*0x6a48b1*/
  if ( result >= 0 ) /*0x6a48b8*/
  {
    v4 = *a1; /*0x6a48c0*/
    aP2 = *(unsigned int *)&aP0->ImageAllocated; /*0x6a48cd*/
    (*(void (**)(int *, int *, int, unsigned int))(v4 + 16))(a1, &aP2, 4, 0); /*0x6a48d1*/
    for ( i = 0; i < aP2; ++i ) /*0x6a48dc*/
      (*(void (**)(int *, int, int, unsigned int))(*a1 + 16))(a1, aP0->Armor[0] + 4 * i, 4, 0); /*0x6a48ef*/
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
