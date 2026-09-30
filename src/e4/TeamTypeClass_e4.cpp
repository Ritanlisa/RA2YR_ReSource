// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/TeamTypeClass_28_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Array_e4.hpp"
#include "e4/classes/BuildingType_e4.hpp"
#include "e4/classes/Power_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/TaskForceClass_e4.hpp"
#include "e4/classes/Waypoint_e4.hpp"
#include "e4/classes/TeamTypeClass_e4.hpp"
#include "e4/classes/Team_e4.hpp"
#include "e4/classes/Dialog_e4.hpp"
#include "e4/classes/Timer_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/AbstractTypeClass_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/E4Recv_634B20_e4.hpp"
#include "e4/classes/Game_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/Process_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/File_e4.hpp"
#include "e4/classes/House_e4.hpp"
#include "e4/classes/TeamClass_e4.hpp"
#include "e4/classes/TechnoClass_e4.hpp"
#include "e4/classes/VectorClass_ptr_PlanningMemberClass_e4.hpp"
#include "e4/classes/Init_e4.hpp"
#include "e4/classes/ProgressTimer_e4.hpp"
#include "e4/classes/ScriptAction_e4.hpp"
#include "e4/classes/TechnoTypeClass_e4.hpp"
#include "e4/classes/TriggerTypeClass_e4.hpp"
#include "e4/classes/AudioStream_e4.hpp"
#include "e4/classes/RadioClass_e4.hpp"
#include "e4/classes/WideString_e4.hpp"

// 0x4C98B0
namespace gamemd {
int TeamTypeClass::Construct()
{
    unsigned int v4 = 0;  /* G37 hoist */
    unsigned int v2 = 0;  /* G37 hoist */

  #72 *v2; // eax
  int v3; // eax
  #72 *v4; // eax
  int v5; // eax
  int v7; // [esp+Ch] [ebp-8h]

  ((AbstractClass *)((#373 *)this))->Constructor(); /*0x4c98b7*/
  *((unsigned int *)this + 9) = 0; /*0x4c98be*/
  *((unsigned char *)this + 40) = 0; /*0x4c98c1*/
  v2 = g_abs_A8ED84; /*0x4c98c4*/
  *((unsigned int *)this + 13) = 0; /*0x4c98c9*/
  *((unsigned int *)this + 11) = v2; /*0x4c98cc*/
  *((unsigned int *)this + 14) = 0; /*0x4c98d4*/
  *((unsigned int *)this + 15) = 1; /*0x4c98d7*/
  *((unsigned int *)this + 17) = 0; /*0x4c98da*/
  *((unsigned int *)this + 18) = 0; /*0x4c98dd*/
  *((unsigned char *)this + 76) = 1; /*0x4c98e0*/
  *((unsigned char *)this + 77) = 0; /*0x4c98e3*/
  *((unsigned int *)this + 16) = &DynamicVectorClass<TechnoTypeClass const *>::`vftable'; /*0x4c98e6*/
  *((unsigned int *)this + 21) = 10; /*0x4c98ed*/
  *((unsigned int *)this + 20) = 0; /*0x4c98f4*/
  *((unsigned char *)this + 113) = 1; /*0x4c98f7*/
  *((unsigned int *)this + 22) = 0; /*0x4c98fd*/
  *((unsigned char *)this + 92) = 0; /*0x4c9901*/
  *((unsigned char *)this + 93) = 0; /*0x4c9904*/
  *((unsigned int *)this + 24) = 0; /*0x4c9907*/
  *((unsigned int *)this + 25) = 0; /*0x4c990a*/
  *((unsigned int *)this + 26) = -1; /*0x4c990d*/
  *((unsigned int *)this + 27) = 0; /*0x4c9914*/
  *((unsigned char *)this + 112) = 0; /*0x4c9917*/
  *(unsigned int *)this = &vt_FactoryClass; /*0x4c991a*/
  *((unsigned int *)this + 1) = &vt_FactoryClass; /*0x4c9920*/
  *((unsigned int *)this + 2) = &vt_FactoryClass; /*0x4c9926*/
  *((unsigned int *)this + 3) = &vt_FactoryClass; /*0x4c992d*/
  AbstractClass::GenerateUniqueID((char *)this + 4); /*0x4c9934*/
  if ( g_abs_A83E40 < g_abs_A83E38 /*0x4c996d*/
    || (g_abs_A83E3D || !g_abs_A83E38)
    && g_abs_A83E44 > 0
    && (*(uint8_t (**)(int *, int, unsigned int))(g_abs_A83E30 + 8))(
         &g_abs_A83E30,
         g_abs_A83E38 + g_abs_A83E44,
         0) )
  {
    v3 = g_abs_A83E40++; /*0x4c997a*/
    *((unsigned int *)g_abs_A83E34 + v3) = this; /*0x4c9989*/
  }
  v4 = g_abs_A8ED84; /*0x4c998c*/
  *((unsigned int *)this + 14) = 0; /*0x4c9996*/
  *((unsigned int *)this + 11) = v4; /*0x4c9999*/
  *((unsigned int *)this + 12) = v7; /*0x4c999f*/
  *((unsigned int *)this + 13) = 0; /*0x4c99a2*/
  *((unsigned int *)this + 9) = 0; /*0x4c99a5*/
  if ( g_abs_B0F730 < g_abs_B0F728 /*0x4c99dc*/
    || (g_abs_B0F72D || !g_abs_B0F728)
    && g_abs_B0F734 > 0
    && (*(uint8_t (**)(int *, int, unsigned int))(g_abs_B0F720 + 8))(
         &g_abs_B0F720,
         g_abs_B0F728 + g_abs_B0F734,
         0) )
  {
    v5 = g_abs_B0F730++; /*0x4c99e9*/
    *((unsigned int *)g_abs_B0F724 + v5) = this; /*0x4c99f8*/
  }
  return this; /*0x4c99fd*/

}
}
// 0x691C00
namespace gamemd {
void * TeamTypeClass::CreateScriptType(AbstractClass * Source)
{

  int v2; // esi
  INIClass *v3; // eax
  INIClass *v4; // esi
  int v5; // ecx
  char v6; // al
  int v7; // eax
  INIClass **v8; // edx

  if ( !_strcmpi(&stru_817460.sectionHead[1], Source) || !_strcmpi(g_Str_none, Source) ) /*0x691c20*/
    return 0; /*0x691c2a*/
  v2 = 0; /*0x691c35*/
  if ( dword_8B41D8 <= 0 ) /*0x691c39*/
  {
LABEL_6:
    v3 = (INIClass *)RA2_OPNEW(0x234u); /*0x691c62*/
    v4 = v3; /*0x691c6c*/
    if ( v3 ) /*0x691c73*/
    {
      AbstractTypeClass::Constructor((int)v3, Source); /*0x691c7c*/
      v4[2].sectionCount = 0; /*0x691c81*/
      *(unsigned int *)v4[2].__pad_20 = 0; /*0x691c8b*/
      *(unsigned int *)v4->__pad_0 = &vt_ScriptTypeClass; /*0x691c95*/
      v4->headNode[0] = (int)&vt_ScriptTypeClass; /*0x691c9b*/
      v4->headNode[1] = (int)&vt_ScriptTypeClass; /*0x691ca2*/
      v4->headNode[2] = (int)&vt_ScriptTypeClass; /*0x691ca9*/
      v5 = dword_8B41D8; /*0x691cb0*/
      if ( dword_8B41D8 < dword_8B41D0 /*0x691cf1*/
        || (unk_8B41D5 || !dword_8B41D0)
        && dword_8B41DC > 0
        && (v6 = (*(int (**)(unsigned int *, int, unsigned int))(dword_8B41C8 + 8))(
                   &dword_8B41C8,
                   dword_8B41D0 + dword_8B41DC,
                   0),
            v5 = dword_8B41D8,
            v6) )
      {
        dword_8B41D8 = v5 + 1; /*0x691cf6*/
        *((unsigned int *)unk_8B41CC + v5) = v4; /*0x691d02*/
        v5 = dword_8B41D8; /*0x691d05*/
      }
      v7 = 0; /*0x691d0b*/
      if ( v5 <= 0 ) /*0x691d0f*/
      {
LABEL_17:
        v7 = -1; /*0x691d23*/
      }
      else
      {
        v8 = (INIClass **)unk_8B41CC; /*0x691d11*/
        while ( *v8 != v4 ) /*0x691d19*/
        {
          ++v7; /*0x691d1b*/
          ++v8; /*0x691d1c*/
          if ( v7 >= v5 ) /*0x691d21*/
            goto LABEL_17; /*0x691d21*/
        }
      }
      v4[2].sectionHead[2] = v7; /*0x691d26*/
      return v4; /*0x691d30*/
    }
    return 0; /*0x691d3e*/
  }
  while ( _strcmpi((const void *)(*((unsigned int *)unk_8B41CC + v2) + 36), Source) ) /*0x691c52*/
  {
    if ( ++v2 >= dword_8B41D8 ) /*0x691c60*/
      goto LABEL_6; /*0x691c60*/
  }
  return (INIClass *)*((unsigned int *)unk_8B41CC + v2); /*0x691d2e*/

}
}
// 0x6E85F0
namespace gamemd {
AbstractClass * * TeamTypeClass::FindOrCreateTaskForce(ObjectClass * Source)
{

  int v2; // esi
  unsigned int *v3; // eax

  if ( !_strcmpi(&stru_817460.sectionHead[1], Source) || !_strcmpi(g_Str_none, Source) ) /*0x6e860c*/
    return 0; /*0x6e866f*/
  v2 = 0; /*0x6e861d*/
  if ( *(int *)&HouseClass_Player.__pad_5568[22060] <= 0 ) /*0x6e8621*/
  {
LABEL_6:
    v3 = (unsigned int *)RA2_OPNEW(0xD4u); /*0x6e8646*/
    if ( v3 ) /*0x6e8655*/
      return (TaskForceClass *)TaskForceClass::Construct(v3, Source); /*0x6e8661*/
    return 0; /*0x6e8655*/
  }
  while ( _strcmpi((const void *)(*(unsigned int *)(*(unsigned int *)&HouseClass_Player.__pad_5568[22048] + 4 * v2) + 36), Source) ) /*0x6e863a*/
  {
    if ( ++v2 >= *(int *)&HouseClass_Player.__pad_5568[22060] ) /*0x6e8644*/
      goto LABEL_6; /*0x6e8644*/
  }
  return *(TaskForceClass **)(*(unsigned int *)&HouseClass_Player.__pad_5568[22048] + 4 * v2); /*0x6e865f*/

}
}
// 0x6EF5F0
namespace gamemd {
int TeamTypeClass::Check(int a2)
{

  int result; // eax

  for ( result = *((unsigned int *)this + 21); result; result = *(unsigned int *)(result + 1496) ) /*0x6ef5f5*/
    *(unsigned int *)(result + 240) = a2; /*0x6ef5fb*/
  return result; /*0x6ef60b*/

}
}
// 0x6F0A70
namespace gamemd {
int TeamTypeClass::DestroyAllInstances()
{

  int result; // eax
  int i; // esi
  unsigned int *v4; // ecx

  result = g_abs_8B40F8; /*0x6f0a70*/
  for ( i = 0; i < g_abs_8B40F8; ++i ) /*0x6f0a7d*/
  {
    v4 = (unsigned int *)*((unsigned int *)g_abs_8B40EC + i); /*0x6f0a84*/
    if ( this == (void *)v4[9] ) /*0x6f0a8a*/
    {
      if ( v4 ) /*0x6f0a8e*/
        (*(void (**)(unsigned int *, int))(*v4 + 32))(v4, 1); /*0x6f0a94*/
      --i; /*0x6f0a97*/
    }
    result = g_abs_8B40F8; /*0x6f0a98*/
  }
  return result; /*0x6f0aa2*/

}
}
// 0x6F1030
namespace gamemd {
int TeamTypeClass::GetTeam(int a2, int a3)
{

  int result; // eax
  int v4; // ecx

  result = a2; /*0x6f1030*/
  if ( *((unsigned int *)this + 52) == a2 ) /*0x6f103f*/
    *((unsigned int *)this + 52) = 0; /*0x6f1041*/
  if ( *((unsigned int *)this + 49) == a2 ) /*0x6f104d*/
    *((unsigned int *)this + 49) = 0; /*0x6f104f*/
  if ( *((unsigned int *)this + 57) == a2 ) /*0x6f105b*/
    *((unsigned int *)this + 57) = 0; /*0x6f105d*/
  if ( *((unsigned int *)this + 56) == a2 ) /*0x6f1069*/
    *((unsigned int *)this + 56) = 0; /*0x6f106b*/
  v4 = *((unsigned int *)this + 56); /*0x6f1071*/
  if ( v4 ) /*0x6f1079*/
    return (*(int (**)(int, int, int))(*(unsigned int *)v4 + 40))(v4, a2, a3); /*0x6f1083*/
  return result; /*0x6f1086*/

}
}
// 0x6F1090
namespace gamemd {
AbstractClass * * TeamTypeClass::LoadFromINI(unsigned char *** aP1)
{

  CCINIClass *v3; // ecx
  int v4; // eax
  void *v5; // ebp
  int Int_Overwrite; // eax
  char Bool_Overwrite; // al
  char v8; // cl
  char v9; // al
  char v10; // al
  char v11; // cl
  char v12; // al
  char v13; // al
  char v14; // cl
  char v15; // al
  char v16; // al
  char v17; // cl
  char v18; // al
  char v19; // al
  char v20; // cl
  char v21; // al
  int v22; // eax
  CCINIClass *v23; // ecx
  int v24; // eax
  int v25; // eax
  char *v26; // ebp
  char *v27; // eax
  CCINIClass *v28; // ecx
  int v29; // eax
  char v30; // al
  char v31; // cl
  char v32; // al
  char v33; // al
  char v34; // cl
  char v35; // al
  CCINIClass *v36; // ecx
  INIClass *v37; // eax
  INIClass *v38; // eax
  INIClass *v39; // ebp
  INIClass *ScriptType; // eax
  TaskForceClass *v41; // ebp
  TaskForceClass *TaskForce; // eax
  CCINIClass *v44; // [esp-Ch] [ebp-D4h]
  char v45; // [esp-Ch] [ebp-D4h]
  char v46; // [esp-Ch] [ebp-D4h]
  char v47; // [esp-Ch] [ebp-D4h]
  char v48; // [esp-Ch] [ebp-D4h]
  char v49; // [esp-Ch] [ebp-D4h]
  CCINIClass *v50; // [esp-Ch] [ebp-D4h]
  char v51; // [esp-Ch] [ebp-D4h]
  char v52; // [esp-Ch] [ebp-D4h]
  INIClass aP4; // [esp+8h] [ebp-C0h] BYREF
  INIClass Destination[2]; // [esp+48h] [ebp-80h] BYREF

  INIClass::ResetSection(aP1); /*0x6f10a3*/
  if ( !AbstractTypeClass::LoadFromINI(this, (AbstractTypeClass *)aP1) ) /*0x6f10b2*/
    return 0; /*0x6f10b2*/
  v3 = *(CCINIClass **)((char *)this + 196); /*0x6f10b8*/
  v4 = -1; /*0x6f10be*/
  if ( v3 ) /*0x6f10c3*/
    v4 = *(unsigned int *)(*(unsigned int *)&v3->needsSave_flag + 184); /*0x6f10c8*/
  v5 = (void *)SuperWeaponTypeClass::FindOrCreate( /*0x6f10e1*/
                 aP1,
                 (INIClass *)((char *)this + 36),
                 (uint8_t *)aHouse,
                 (CCINIClass *)v4);
  if ( BuildingType::IsSpecialType(v5) ) /*0x6f10e5*/
  {
    *((unsigned int *)this + 50) = v5; /*0x6f10ee*/
    *((unsigned int *)this + 49) = 0; /*0x6f10f4*/
  }
  else if ( v5 != (void *)-1 ) /*0x6f1103*/
  {
    *((unsigned int *)this + 49) = HouseClass::FindOwner(v5); /*0x6f110c*/
    *((unsigned int *)this + 50) = -1; /*0x6f1112*/
  }
  Int_Overwrite = INIClass::ReadInt_Overwrite( /*0x6f112b*/
                    (int)aP1,
                    (uint8_t *)((char *)this + 36),
                    (CCINIClass *)&stru_830620.__pad_579C[54064],
                    *(INIClass **)((char *)this + 160));
  v44 = *(CCINIClass **)((char *)this + 192); /*0x6f1138*/
  *((unsigned int *)this + 40) = Int_Overwrite; /*0x6f113f*/
  *((unsigned int *)this + 48) = INIClass::ReadInt_Overwrite( /*0x6f114a*/
                              (int)aP1,
                              (uint8_t *)((char *)this + 36),
                              (CCINIClass *)&stru_830620.__pad_579C[54044],
                              (INIClass *)v44);
  Bool_Overwrite = INIClass::ReadBool_Overwrite( /*0x6f115f*/
                     (int)aP1,
                     (uint8_t *)((char *)this + 36),
                     (CCINIClass *)&stru_830620.__pad_579C[54032],
                     *((unsigned char *)this + 164));
  v8 = *((unsigned char *)this + 165); /*0x6f1164*/
  *((unsigned char *)this + 164) = Bool_Overwrite; /*0x6f116a*/
  v9 = INIClass::ReadBool_Overwrite( /*0x6f1179*/
         (int)aP1,
         (uint8_t *)((char *)this + 36),
         (CCINIClass *)&stru_830620.__pad_579C[54024],
         v8);
  v45 = *((unsigned char *)this + 166); /*0x6f1186*/
  *((unsigned char *)this + 165) = v9; /*0x6f118d*/
  *((unsigned char *)this + 166) = INIClass::ReadBool_Overwrite( /*0x6f1198*/
                             (int)aP1,
                             (uint8_t *)((char *)this + 36),
                             (CCINIClass *)&stru_830620.__pad_579C[54012],
                             v45);
  v10 = INIClass::ReadBool_Overwrite( /*0x6f11ad*/
          (int)aP1,
          (uint8_t *)((char *)this + 36),
          (CCINIClass *)&stru_830620.__pad_579C[54000],
          *((unsigned char *)this + 167));
  v11 = *((unsigned char *)this + 169); /*0x6f11b2*/
  *((unsigned char *)this + 167) = v10; /*0x6f11b8*/
  v12 = INIClass::ReadBool_Overwrite( /*0x6f11c7*/
          (int)aP1,
          (uint8_t *)((char *)this + 36),
          (CCINIClass *)&stru_830620.__pad_579C[53988],
          v11);
  v46 = *((unsigned char *)this + 170); /*0x6f11d4*/
  *((unsigned char *)this + 169) = v12; /*0x6f11db*/
  *((unsigned char *)this + 170) = INIClass::ReadBool_Overwrite( /*0x6f11e6*/
                             (int)aP1,
                             (uint8_t *)((char *)this + 36),
                             (CCINIClass *)&stru_830620.__pad_579C[53976],
                             v46);
  v13 = INIClass::ReadBool_Overwrite( /*0x6f11fb*/
          (int)aP1,
          (uint8_t *)((char *)this + 36),
          (CCINIClass *)&stru_830620.__pad_579C[53964],
          *((unsigned char *)this + 171));
  v14 = *((unsigned char *)this + 176); /*0x6f1200*/
  *((unsigned char *)this + 171) = v13; /*0x6f1206*/
  v15 = INIClass::ReadBool_Overwrite( /*0x6f1215*/
          (int)aP1,
          (uint8_t *)((char *)this + 36),
          (CCINIClass *)&stru_830620.__pad_579C[53956],
          v14);
  v47 = *((unsigned char *)this + 177); /*0x6f1222*/
  *((unsigned char *)this + 176) = v15; /*0x6f1229*/
  *((unsigned char *)this + 177) = INIClass::ReadBool_Overwrite( /*0x6f1234*/
                             (int)aP1,
                             (uint8_t *)((char *)this + 36),
                             (CCINIClass *)&stru_830620.__pad_579C[53936],
                             v47);
  v16 = INIClass::ReadBool_Overwrite( /*0x6f1249*/
          (int)aP1,
          (uint8_t *)((char *)this + 36),
          (CCINIClass *)&stru_830620.__pad_579C[53924],
          *((unsigned char *)this + 168));
  v17 = *((unsigned char *)this + 172); /*0x6f124e*/
  *((unsigned char *)this + 168) = v16; /*0x6f1254*/
  v18 = INIClass::ReadBool_Overwrite( /*0x6f1263*/
          (int)aP1,
          (uint8_t *)((char *)this + 36),
          (CCINIClass *)&stru_830620.__pad_579C[53916],
          v17);
  v48 = *((unsigned char *)this + 175); /*0x6f1270*/
  *((unsigned char *)this + 172) = v18; /*0x6f1277*/
  *((unsigned char *)this + 175) = INIClass::ReadBool_Overwrite( /*0x6f1282*/
                             (int)aP1,
                             (uint8_t *)((char *)this + 36),
                             (CCINIClass *)&stru_830620.__pad_579C[53908],
                             v48);
  v19 = INIClass::ReadBool_Overwrite( /*0x6f1297*/
          (int)aP1,
          (uint8_t *)((char *)this + 36),
          (CCINIClass *)&stru_830620.__pad_579C[53892],
          *((unsigned char *)this + 174));
  v20 = *((unsigned char *)this + 173); /*0x6f129c*/
  *((unsigned char *)this + 174) = v19; /*0x6f12a2*/
  v21 = INIClass::ReadBool_Overwrite( /*0x6f12b1*/
          (int)aP1,
          (uint8_t *)((char *)this + 36),
          (CCINIClass *)&stru_830620.__pad_579C[53880],
          v20);
  v49 = *((unsigned char *)this + 179); /*0x6f12be*/
  *((unsigned char *)this + 173) = v21; /*0x6f12c5*/
  *((unsigned char *)this + 179) = INIClass::ReadBool_Overwrite( /*0x6f12d0*/
                             (int)aP1,
                             (uint8_t *)((char *)this + 36),
                             (CCINIClass *)&stru_830620.__pad_579C[53868],
                             v49);
  v22 = INIClass::ReadInt_Overwrite( /*0x6f12e5*/
          (int)aP1,
          (uint8_t *)((char *)this + 36),
          (CCINIClass *)&stru_830620.__pad_579C[53856],
          *(INIClass **)((char *)this + 180));
  v23 = *(CCINIClass **)((char *)this + 184); /*0x6f12ea*/
  *((unsigned int *)this + 45) = v22; /*0x6f12f0*/
  v24 = INIClass::ReadInt_Overwrite( /*0x6f12ff*/
          (int)aP1,
          (uint8_t *)((char *)this + 36),
          (CCINIClass *)&stru_830620.__pad_579C[53852],
          (INIClass *)v23);
  v50 = *(CCINIClass **)((char *)this + 204); /*0x6f130c*/
  *((unsigned int *)this + 46) = v24; /*0x6f1313*/
  v25 = INIClass::ReadInt_Overwrite((int)aP1, (uint8_t *)((char *)this + 36), aTechlevel, (INIClass *)v50); /*0x6f1319*/
  v26 = *(char **)((char *)this + 208); /*0x6f131e*/
  *((unsigned int *)this + 51) = v25; /*0x6f1324*/
  if ( INIClass::GetString( /*0x6f1341*/
         aP1,
         (INIClass *)((char *)this + 36),
         (uint8_t *)unk_81728C,
         (INIClass *)&g_abs_87F8E4,
         Destination,
         128) )
  {
    v27 = TagTypeClass::FindOrCreate((ObjectClass *)Destination); /*0x6f134e*/
  }
  else
  {
    v27 = v26; /*0x6f1355*/
  }
  v28 = *(CCINIClass **)((char *)this + 156); /*0x6f1357*/
  *((unsigned int *)this + 52) = v27; /*0x6f135d*/
  v29 = INIClass::ReadInt_Overwrite( /*0x6f136c*/
          (int)aP1,
          (uint8_t *)((char *)this + 36),
          (CCINIClass *)&stru_830620.__pad_579C[53256],
          (INIClass *)v28);
  v51 = *((unsigned char *)this + 242); /*0x6f1379*/
  *((unsigned int *)this + 39) = v29; /*0x6f1380*/
  *((unsigned char *)this + 242) = INIClass::ReadBool_Overwrite( /*0x6f138b*/
                             (int)aP1,
                             (uint8_t *)((char *)this + 36),
                             (CCINIClass *)&stru_830620.__pad_579C[53836],
                             v51);
  v30 = INIClass::ReadBool_Overwrite( /*0x6f13a0*/
          (int)aP1,
          (uint8_t *)((char *)this + 36),
          (CCINIClass *)&stru_830620.__pad_579C[53824],
          *((unsigned char *)this + 243));
  v31 = *((unsigned char *)this + 246); /*0x6f13a5*/
  *((unsigned char *)this + 243) = v30; /*0x6f13ab*/
  v32 = INIClass::ReadBool_Overwrite( /*0x6f13ba*/
          (int)aP1,
          (uint8_t *)((char *)this + 36),
          (CCINIClass *)&g_INI_Key_Height.__pad_41[3],
          v31);
  v52 = *((unsigned char *)this + 247); /*0x6f13c7*/
  *((unsigned char *)this + 246) = v32; /*0x6f13ce*/
  *((unsigned char *)this + 247) = INIClass::ReadBool_Overwrite( /*0x6f13d9*/
                             (int)aP1,
                             (uint8_t *)((char *)this + 36),
                             (CCINIClass *)&stru_830620.__pad_579C[53800],
                             v52);
  v33 = INIClass::ReadBool_Overwrite( /*0x6f13ee*/
          (int)aP1,
          (uint8_t *)((char *)this + 36),
          (CCINIClass *)&stru_830620.__pad_579C[53772],
          *((unsigned char *)this + 244));
  v34 = *((unsigned char *)this + 245); /*0x6f13f3*/
  *((unsigned char *)this + 244) = v33; /*0x6f13f9*/
  v35 = INIClass::ReadBool_Overwrite( /*0x6f1408*/
          (int)aP1,
          (uint8_t *)((char *)this + 36),
          (CCINIClass *)&stru_830620.__pad_579C[53744],
          v34);
  v36 = *(CCINIClass **)((char *)this + 212); /*0x6f140d*/
  *((unsigned char *)this + 245) = v35; /*0x6f141a*/
  v37 = (INIClass *)Waypoint::To_String((int)v36); /*0x6f1420*/
  if ( (int)INIClass::GetString(aP1, (INIClass *)((char *)this + 36), (uint8_t *)&stru_817244, v37, &aP4, 64) > 0 ) /*0x6f1435*/
    *((unsigned int *)this + 53) = String::To_Waypoint(aP4.__pad_0); /*0x6f1440*/
  v38 = (INIClass *)Waypoint::To_String(*((unsigned int *)this + 54)); /*0x6f1453*/
  if ( (int)INIClass::GetString( /*0x6f1468*/
              aP1,
              (INIClass *)((char *)this + 36),
              (uint8_t *)&stru_830620.__pad_579C[53724],
              v38,
              &aP4,
              64) > 0 )
    *((unsigned int *)this + 54) = String::To_Waypoint(aP4.__pad_0); /*0x6f1473*/
  v39 = *(INIClass **)((char *)this + 224); /*0x6f1479*/
  if ( INIClass::GetString( /*0x6f1496*/
         aP1,
         (INIClass *)((char *)this + 36),
         (uint8_t *)&stru_817348,
         (INIClass *)&g_abs_87F8E4,
         Destination,
         128) )
  {
    ScriptType = TeamTypeClass::CreateScriptType((AbstractClass *)Destination); /*0x6f14a3*/
  }
  else
  {
    ScriptType = v39; /*0x6f14aa*/
  }
  v41 = *(TaskForceClass **)((char *)this + 228); /*0x6f14ac*/
  *((unsigned int *)this + 56) = ScriptType; /*0x6f14c9*/
  if ( INIClass::GetString( /*0x6f14cf*/
         aP1,
         (INIClass *)((char *)this + 36),
         (uint8_t *)&stru_8172FC,
         (INIClass *)&g_abs_87F8E4,
         Destination,
         128) )
  {
    TaskForce = TeamTypeClass::FindOrCreateTaskForce(Destination[0].__pad_0); /*0x6f14dc*/
  }
  else
  {
    TaskForce = v41; /*0x6f14e3*/
  }
  *((unsigned int *)this + 57) = TaskForce; /*0x6f14e6*/
  if ( !TaskForce ) /*0x6f14ef*/
  {
    if ( *(int *)&g_abs_A8D63C <= 0 ) /*0x6f14f8*/
      return 0; /*0x6f14f8*/
    *((unsigned int *)this + 57) = **(unsigned int **)&g_abs_A8D63C; /*0x6f1501*/
  }
  if ( *((unsigned int *)this + 56) ) /*0x6f1507*/
    return 1; /*0x6f1532*/
  if ( *(int *)&g_abs_89F690 > 0 ) /*0x6f1518*/
  {
    *((unsigned int *)this + 56) = **(unsigned int **)&g_abs_89F690; /*0x6f1522*/
    return 1; /*0x6f1522*/
  }
  return 0; /*0x6f1528*/

}
}
// 0x6F1550
namespace gamemd {
AbstractClass * * TeamTypeClass::GetMaxCount(CCINIClass * aP1)
{

  int v3; // eax
  int v4; // ebp
  INIClass *v5; // edi
  INIClass *v6; // eax
  INIClass *v7; // ecx
  INIClass *v8; // edx
  INIClass *v9; // eax
  INIClass *v10; // ecx
  INIClass *v11; // edx
  INIClass *v12; // eax
  INIClass *v13; // ecx
  INIClass *v14; // edx
  INIClass *v15; // eax
  INIClass *v16; // ecx
  INIClass *v17; // edx
  INIClass *v18; // eax
  INIClass *v19; // ecx
  INIClass *v20; // eax
  INIClass *v21; // ecx
  INIClass *v22; // edx
  INIClass *v23; // eax
  INIClass *v24; // ecx
  INIClass *v25; // edx
  INIClass *v26; // eax
  int v27; // eax
  INIClass *v28; // eax
  INIClass *v29; // eax
  int v30; // eax
  int v31; // esi

  if ( !AbstractTypeClass::WriteINI((char *)this, aP1) ) /*0x6f1559*/
    return 0; /*0x6f185b*/
  v3 = *((unsigned int *)this + 49); /*0x6f1566*/
  v4 = -1; /*0x6f156d*/
  if ( v3 ) /*0x6f1573*/
  {
    v4 = *(unsigned int *)(*(unsigned int *)(v3 + 52) + 184); /*0x6f1578*/
  }
  else if ( BuildingType::IsSpecialType(*(void **)((char *)this + 200)) ) /*0x6f1586*/
  {
    v4 = *((unsigned int *)this + 50); /*0x6f158f*/
  }
  v5 = (INIClass *)((char *)this + 36); /*0x6f159d*/
  INIClass::SetInt( /*0x6f15a9*/
    aP1->__pad_0,
    (INIClass *)((char *)this + 36),
    (CCINIClass *)&stru_830620.__pad_579C[54064],
    *(INIClass **)((char *)this + 160),
    0);
  INIClass::SetInt( /*0x6f15bf*/
    aP1->__pad_0,
    (INIClass *)((char *)this + 36),
    (CCINIClass *)&stru_830620.__pad_579C[54044],
    *(INIClass **)((char *)this + 192),
    0);
  IDA_LOBYTE(v6) = *((unsigned char *)this + 164); /*0x6f15c4*/
  INIClass::SetBool(aP1->__pad_0, (INIClass *)((char *)this + 36), &stru_830620.__pad_579C[54032], v6); /*0x6f15d3*/
  IDA_LOBYTE(v7) = *((unsigned char *)this + 165); /*0x6f15d8*/
  INIClass::SetBool(aP1->__pad_0, (INIClass *)((char *)this + 36), &stru_830620.__pad_579C[54024], v7); /*0x6f15e7*/
  IDA_LOBYTE(v8) = *((unsigned char *)this + 166); /*0x6f15ec*/
  INIClass::SetBool(aP1->__pad_0, (INIClass *)((char *)this + 36), &stru_830620.__pad_579C[54012], v8); /*0x6f15fb*/
  IDA_LOBYTE(v9) = *((unsigned char *)this + 167); /*0x6f1600*/
  INIClass::SetBool(aP1->__pad_0, (INIClass *)((char *)this + 36), &stru_830620.__pad_579C[54000], v9); /*0x6f160f*/
  INIClass::SetHouseName(aP1->__pad_0, (INIClass *)((char *)this + 36), aHouse, (INIClass *)v4); /*0x6f161d*/
  IDA_LOBYTE(v10) = *((unsigned char *)this + 168); /*0x6f1622*/
  INIClass::SetBool(aP1->__pad_0, (INIClass *)((char *)this + 36), &stru_830620.__pad_579C[53924], v10); /*0x6f1631*/
  IDA_LOBYTE(v11) = *((unsigned char *)this + 169); /*0x6f1636*/
  INIClass::SetBool(aP1->__pad_0, (INIClass *)((char *)this + 36), &stru_830620.__pad_579C[53988], v11); /*0x6f1645*/
  IDA_LOBYTE(v12) = *((unsigned char *)this + 170); /*0x6f164a*/
  INIClass::SetBool(aP1->__pad_0, (INIClass *)((char *)this + 36), &stru_830620.__pad_579C[53976], v12); /*0x6f1659*/
  IDA_LOBYTE(v13) = *((unsigned char *)this + 171); /*0x6f165e*/
  INIClass::SetBool(aP1->__pad_0, (INIClass *)((char *)this + 36), &stru_830620.__pad_579C[53964], v13); /*0x6f166d*/
  IDA_LOBYTE(v14) = *((unsigned char *)this + 176); /*0x6f1672*/
  INIClass::SetBool(aP1->__pad_0, (INIClass *)((char *)this + 36), &stru_830620.__pad_579C[53956], v14); /*0x6f1681*/
  IDA_LOBYTE(v15) = *((unsigned char *)this + 177); /*0x6f1686*/
  INIClass::SetBool(aP1->__pad_0, (INIClass *)((char *)this + 36), &stru_830620.__pad_579C[53936], v15); /*0x6f1695*/
  IDA_LOBYTE(v16) = *((unsigned char *)this + 172); /*0x6f169a*/
  INIClass::SetBool(aP1->__pad_0, (INIClass *)((char *)this + 36), &stru_830620.__pad_579C[53916], v16); /*0x6f16a9*/
  IDA_LOBYTE(v17) = *((unsigned char *)this + 174); /*0x6f16ae*/
  INIClass::SetBool(aP1->__pad_0, (INIClass *)((char *)this + 36), &stru_830620.__pad_579C[53892], v17); /*0x6f16bd*/
  IDA_LOBYTE(v18) = *((unsigned char *)this + 173); /*0x6f16c2*/
  INIClass::SetBool(aP1->__pad_0, (INIClass *)((char *)this + 36), &stru_830620.__pad_579C[53880], v18); /*0x6f16d1*/
  IDA_LOBYTE(v19) = *((unsigned char *)this + 175); /*0x6f16d6*/
  INIClass::SetBool(aP1->__pad_0, (INIClass *)((char *)this + 36), &stru_830620.__pad_579C[53908], v19); /*0x6f16e5*/
  INIClass::SetInt( /*0x6f16fb*/
    aP1->__pad_0,
    (INIClass *)((char *)this + 36),
    (CCINIClass *)&stru_830620.__pad_579C[53856],
    *(INIClass **)((char *)this + 180),
    0);
  INIClass::SetInt( /*0x6f1711*/
    aP1->__pad_0,
    (INIClass *)((char *)this + 36),
    (CCINIClass *)&stru_830620.__pad_579C[53852],
    *(INIClass **)((char *)this + 184),
    0);
  INIClass::SetInt(aP1->__pad_0, (INIClass *)((char *)this + 36), aTechlevel, *(INIClass **)((char *)this + 204), 0); /*0x6f1727*/
  INIClass::SetInt( /*0x6f173d*/
    aP1->__pad_0,
    (INIClass *)((char *)this + 36),
    (CCINIClass *)&stru_830620.__pad_579C[53256],
    *(INIClass **)((char *)this + 156),
    0);
  IDA_LOBYTE(v20) = *((unsigned char *)this + 179); /*0x6f1742*/
  INIClass::SetBool(aP1->__pad_0, (INIClass *)((char *)this + 36), &stru_830620.__pad_579C[53868], v20); /*0x6f1751*/
  IDA_LOBYTE(v21) = *((unsigned char *)this + 242); /*0x6f1756*/
  INIClass::SetBool(aP1->__pad_0, (INIClass *)((char *)this + 36), &stru_830620.__pad_579C[53836], v21); /*0x6f1765*/
  IDA_LOBYTE(v22) = *((unsigned char *)this + 243); /*0x6f176a*/
  INIClass::SetBool(aP1->__pad_0, (INIClass *)((char *)this + 36), &stru_830620.__pad_579C[53824], v22); /*0x6f1779*/
  IDA_LOBYTE(v23) = *((unsigned char *)this + 244); /*0x6f177e*/
  INIClass::SetBool(aP1->__pad_0, (INIClass *)((char *)this + 36), &stru_830620.__pad_579C[53772], v23); /*0x6f178d*/
  IDA_LOBYTE(v24) = *((unsigned char *)this + 245); /*0x6f1792*/
  INIClass::SetBool(aP1->__pad_0, (INIClass *)((char *)this + 36), &stru_830620.__pad_579C[53744], v24); /*0x6f17a1*/
  IDA_LOBYTE(v25) = *((unsigned char *)this + 246); /*0x6f17a6*/
  INIClass::SetBool(aP1->__pad_0, (INIClass *)((char *)this + 36), &g_INI_Key_Height.__pad_41[3], v25); /*0x6f17b5*/
  IDA_LOBYTE(v26) = *((unsigned char *)this + 247); /*0x6f17ba*/
  INIClass::SetBool(aP1->__pad_0, (INIClass *)((char *)this + 36), &stru_830620.__pad_579C[53800], v26); /*0x6f17c9*/
  v27 = *((unsigned int *)this + 52); /*0x6f17ce*/
  if ( v27 ) /*0x6f17d6*/
    INIClass::SetString(aP1->__pad_0, (INIClass *)((char *)this + 36), (INIClass *)unk_81728C, (INIClass *)(v27 + 36)); /*0x6f17e4*/
  v28 = (INIClass *)Waypoint::To_String(*(CCINIClass **)((char *)this + 212)); /*0x6f17ef*/
  INIClass::SetString(aP1->__pad_0, (INIClass *)((char *)this + 36), &stru_817244, v28); /*0x6f17fd*/
  v29 = (INIClass *)Waypoint::To_String(*(CCINIClass **)((char *)this + 216)); /*0x6f1808*/
  INIClass::SetString(aP1->__pad_0, (INIClass *)((char *)this + 36), (INIClass *)&stru_830620.__pad_579C[53724], v29); /*0x6f1816*/
  v30 = *((unsigned int *)this + 56); /*0x6f181b*/
  if ( v30 ) /*0x6f1823*/
    INIClass::SetString(aP1->__pad_0, (INIClass *)((char *)this + 36), &stru_817348, (INIClass *)(v30 + 36)); /*0x6f1831*/
  v31 = *((unsigned int *)this + 57); /*0x6f1836*/
  if ( v31 ) /*0x6f183e*/
    INIClass::SetString(aP1->__pad_0, v5, &stru_8172FC, (INIClass *)(v31 + 36)); /*0x6f184c*/
  return 1; /*0x6f1853*/

}
}
// 0x6F1870
namespace gamemd {
int TeamTypeClass::GetGroup()
{

  int result; // eax
  int v2; // ecx

  result = *((unsigned int *)this + 39); /*0x6f1870*/
  if ( result == -1 ) /*0x6f1879*/
  {
    v2 = *((unsigned int *)this + 57); /*0x6f1880*/
    if ( v2 ) /*0x6f1888*/
      return *(unsigned int *)(v2 + 152); /*0x6f188a*/
  }
  return result; /*0x6f1890*/

}
}
// 0x6F18E0
namespace gamemd {
unsigned int * TeamTypeClass::GetTransportWaypoint(unsigned int * a2)
{

  int v2; // eax
  int v4; // ecx
  int *v5; // [esp+0h] [ebp-4h] BYREF

  v5 = this; /*0x6f18e0*/
  v2 = *((char *)this + 54); /*0x6f18e1*/
  if ( v2 == -1 ) /*0x6f18ea*/
  {
    *a2 = g_abs_B0E9C8; /*0x6f18f6*/
    return a2; /*0x6f18ec*/
  }
  else
  {
    v4 = *ScenarioClass::Get_Waypoint_Location((char *)g_abs_A8B230, &v5, v2); /*0x6f190d*/
    *a2 = v4; /*0x6f1913*/
    return a2; /*0x6f190f*/
  }

}
}
// 0x6F1C80
namespace gamemd {
int TeamTypeClass::PowerDrainUpdate(int * a2)
{

  int v3; // ecx
  int v4; // edx
  int v5; // eax
  int v6; // ecx
  int v7; // edx
  int v8; // eax
  int v9; // ecx
  int v10; // edx
  int v11; // eax
  int v12; // ecx
  int v13; // ecx
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int result; // eax
  int v20; // eax
  int v21; // esi
  int v22; // eax

  AbstractTypeClass::ProcessPower((char *)this, a2); /*0x6f1c89*/
  Power::TimerProcess(*((unsigned int *)this + 39)); /*0x6f1c97*/
  IDA_LOBYTE(v3) = *((unsigned char *)this + 168); /*0x6f1c9c*/
  Power::FlagProcess(a2, v3); /*0x6f1ca5*/
  IDA_LOBYTE(v4) = *((unsigned char *)this + 169); /*0x6f1caa*/
  v5 = Power::FlagProcess(a2, v4); /*0x6f1cb3*/
  IDA_LOBYTE(v5) = *((unsigned char *)this + 170); /*0x6f1cb8*/
  Power::FlagProcess(a2, v5); /*0x6f1cc1*/
  IDA_LOBYTE(v6) = *((unsigned char *)this + 171); /*0x6f1cc6*/
  Power::FlagProcess(a2, v6); /*0x6f1ccf*/
  IDA_LOBYTE(v7) = *((unsigned char *)this + 172); /*0x6f1cd4*/
  v8 = Power::FlagProcess(a2, v7); /*0x6f1cdd*/
  IDA_LOBYTE(v8) = *((unsigned char *)this + 173); /*0x6f1ce2*/
  Power::FlagProcess(a2, v8); /*0x6f1ceb*/
  IDA_LOBYTE(v9) = *((unsigned char *)this + 174); /*0x6f1cf0*/
  Power::FlagProcess(a2, v9); /*0x6f1cf9*/
  IDA_LOBYTE(v10) = *((unsigned char *)this + 175); /*0x6f1cfe*/
  v11 = Power::FlagProcess(a2, v10); /*0x6f1d07*/
  IDA_LOBYTE(v11) = *((unsigned char *)this + 176); /*0x6f1d0c*/
  Power::FlagProcess(a2, v11); /*0x6f1d15*/
  IDA_LOBYTE(v12) = *((unsigned char *)this + 177); /*0x6f1d1a*/
  Power::FlagProcess(a2, v12); /*0x6f1d23*/
  Power::TimerProcess(*((unsigned int *)this + 45)); /*0x6f1d31*/
  Power::TimerProcess(*((unsigned int *)this + 46)); /*0x6f1d3f*/
  Power::TimerProcess(*((unsigned int *)this + 47)); /*0x6f1d4d*/
  v13 = *((unsigned int *)this + 49); /*0x6f1d52*/
  if ( v13 ) /*0x6f1d5a*/
  {
    v14 = (*(int (**)(int))(*(unsigned int *)v13 + 44))(v13); /*0x6f1d5e*/
    Power::TimerProcess(v14); /*0x6f1d64*/
  }
  v15 = *((unsigned int *)this + 49); /*0x6f1d69*/
  if ( v15 ) /*0x6f1d71*/
  {
    v16 = (*(int (**)(int))(*(unsigned int *)(v15 + 4) + 16))(v15 + 4); /*0x6f1d7a*/
    Power::TimerProcess(v16); /*0x6f1d80*/
  }
  Power::TimerProcess(*((unsigned int *)this + 51)); /*0x6f1d8e*/
  v17 = *((unsigned int *)this + 52); /*0x6f1d93*/
  if ( v17 ) /*0x6f1d9b*/
  {
    v18 = (*(int (**)(int))(*(unsigned int *)(v17 + 4) + 16))(v17 + 4); /*0x6f1da4*/
    Power::TimerProcess(v18); /*0x6f1daa*/
  }
  Power::TimerProcess(*((unsigned int *)this + 53)); /*0x6f1db8*/
  Power::TimerProcess(*((unsigned int *)this + 54)); /*0x6f1dc6*/
  Power::TimerProcess(*((unsigned int *)this + 55)); /*0x6f1dd4*/
  result = *((unsigned int *)this + 56); /*0x6f1dd9*/
  if ( result ) /*0x6f1de1*/
  {
    v20 = (*(int (**)(int))(*(unsigned int *)(result + 4) + 16))(result + 4); /*0x6f1dea*/
    result = Power::TimerProcess(v20); /*0x6f1df0*/
  }
  v21 = *((unsigned int *)this + 57); /*0x6f1df5*/
  if ( v21 ) /*0x6f1dfd*/
  {
    v22 = (*(int (**)(int))(*(unsigned int *)(v21 + 4) + 16))(v21 + 4); /*0x6f1e06*/
    return Power::TimerProcess(v22); /*0x6f1e0c*/
  }
  return result; /*0x6f1e11*/

}
}
// 0x6F1FA0
namespace gamemd {
int TeamTypeClass::ProcessTaskForce()
{

  int v2; // edi
  int result; // eax
  int v4; // ebp
  int v5; // eax

  v2 = 0; /*0x6f1fa7*/
  result = *((unsigned int *)this + 57); /*0x6f1fa9*/
  *((unsigned char *)this + 240) = 1; /*0x6f1faf*/
  *((unsigned char *)this + 241) = 0; /*0x6f1fb6*/
  *((unsigned int *)this + 59) = 9; /*0x6f1fbc*/
  if ( *(int *)(result + 156) > 0 ) /*0x6f1fcc*/
  {
    v4 = 168; /*0x6f1fcf*/
    do /*0x6f201d*/
    {
      v5 = *(unsigned int *)(result + v4); /*0x6f1fd4*/
      if ( *(unsigned char *)(v5 + 3278) ) /*0x6f1fd7*/
      {
        if ( *(unsigned int *)(v5 + 1504) ) /*0x6f1fdf*/
          *((unsigned char *)this + 241) = 1; /*0x6f1fef*/
        else
          *((unsigned char *)this + 240) = 0; /*0x6f1fe7*/
      }
      *((unsigned int *)this + 59) = globalHelper_0889F0(*(unsigned int *)(v5 + 1460), *((unsigned int *)this + 59)); /*0x6f2007*/
      result = *((unsigned int *)this + 57); /*0x6f200d*/
      ++v2; /*0x6f2013*/
      v4 += 8; /*0x6f2014*/
    }
    while ( v2 < *(unsigned int *)(result + 156) ); /*0x6f201d*/
  }
  if ( *((unsigned char *)this + 246) ) /*0x6f2020*/
    *((unsigned char *)this + 240) = 0; /*0x6f2028*/
  return result; /*0x6f202e*/

}
}
// 0x6F20C0
namespace gamemd {
int TeamTypeClass::GetAuxField()
{

  return *((unsigned int *)this + 38); /*0x6f20c6*/

}
}
// 0x6F20D0
namespace gamemd {
TeamTypeClass * TeamTypeClass::ddtor(void ** Block, char a2)
{

  int v3; // eax
  int v4; // eax
  void **v6; // [esp+4h] [ebp-4h] BYREF

  *Block = &vt_TeamTypeClass; /*0x6f20d6*/
  *(Block + 1) = &vt_TeamTypeClass; /*0x6f20dc*/
  *(Block + 2) = &vt_TeamTypeClass; /*0x6f20e3*/
  *(Block + 3) = &vt_TeamTypeClass; /*0x6f20ea*/
  AbstractClass::AnnounceExpiredPointer(Block, 1); /*0x6f20f1*/
  v6 = Block; /*0x6f2106*/
  v3 = (*(int (**)(int *, void ***))(g_abs_A8ECA0 + 16))(&g_abs_A8ECA0, &v6); /*0x6f210a*/
  if ( v3 != -1 && v3 < g_abs_A8ECB0 && v3 < --g_abs_A8ECB0 ) /*0x6f2125*/
  {
    do /*0x6f213d*/
    {
      ++v3; /*0x6f212d*/
      *((unsigned int *)g_abs_A8ECA4 + v3 - 1) = *((unsigned int *)g_abs_A8ECA4 + v3); /*0x6f2131*/
    }
    while ( v3 < g_abs_A8ECB0 ); /*0x6f213d*/
  }
  v6 = Block; /*0x6f214f*/
  v4 = (*(int (**)(int *, void ***))(g_abs_B0F670 + 16))(&g_abs_B0F670, &v6); /*0x6f2153*/
  if ( v4 != -1 && v4 < g_abs_B0F680 && v4 < --g_abs_B0F680 ) /*0x6f216e*/
  {
    do /*0x6f2186*/
    {
      ++v4; /*0x6f2176*/
      *((unsigned int *)g_abs_B0F674 + v4 - 1) = *((unsigned int *)g_abs_B0F674 + v4); /*0x6f217a*/
    }
    while ( v4 < g_abs_B0F680 ); /*0x6f2186*/
  }
  AbstractTypeClass::Dtor(Block); /*0x6f218a*/
  if ( (Block & 1) != 0 ) /*0x6f2194*/
    OperatorDelete(Block); /*0x6f2197*/
  return (TeamTypeClass *)Block; /*0x6f21a1*/

}
} // namespace gamemd

// 0x6F22F0
namespace gamemd {
AbstractClass * * TeamTypeClass_28::Release(int a2, int * a3)
{

  int *v4; // ebx
  int *v5; // eax
  unsigned int *v6; // edi
  unsigned int *v7; // eax
  int v8; // ecx
  unsigned int *v9; // eax
  int v10; // ecx
  int v12; // ecx
  int v13; // eax
  int v14; // edx
  int v15; // eax

  if ( a2 ) /*0x6f22fc*/
  {
    v4 = a3; /*0x6f2302*/
    *((unsigned char *)this + 12) = 0; /*0x6f2306*/
    if ( a3 ) /*0x6f230c*/
    {
      *a3 = a2; /*0x6f2347*/
      v6 = a3 + 1; /*0x6f234b*/
      if ( a2 - 1 >= 0 ) /*0x6f234e*/
      {
        v9 = a3 + 2; /*0x6f2350*/
        v10 = a2; /*0x6f2353*/
        do /*0x6f235e*/
        {
          *v9 = 0; /*0x6f2354*/
          v9 += 2; /*0x6f235a*/
          --v10; /*0x6f235d*/
        }
        while ( v10 ); /*0x6f235e*/
      }
    }
    else
    {
      v5 = (int *)RA2_OPNEW(8 * a2 + 4); /*0x6f2316*/
      if ( v5 ) /*0x6f2320*/
      {
        *v5 = a2; /*0x6f2325*/
        v6 = v5 + 1; /*0x6f2329*/
        if ( a2 - 1 >= 0 ) /*0x6f232c*/
        {
          v7 = v5 + 2; /*0x6f232e*/
          v8 = a2; /*0x6f2331*/
          do /*0x6f233c*/
          {
            *v7 = 0; /*0x6f2332*/
            v7 += 2; /*0x6f2338*/
            --v8; /*0x6f233b*/
          }
          while ( v8 ); /*0x6f233c*/
        }
      }
      else
      {
        v6 = 0; /*0x6f2340*/
      }
    }
    *((unsigned char *)this + 12) = 1; /*0x6f2362*/
    if ( v6 ) /*0x6f2366*/
    {
      if ( *((unsigned int *)this + 1) ) /*0x6f2371*/
      {
        v12 = *((unsigned int *)this + 2); /*0x6f2378*/
        if ( a2 < v12 ) /*0x6f237d*/
          v12 = a2; /*0x6f237f*/
        v13 = 0; /*0x6f2381*/
        if ( v12 > 0 ) /*0x6f2385*/
        {
          do /*0x6f239d*/
          {
            v14 = *((unsigned int *)this + 1); /*0x6f2387*/
            ++v13; /*0x6f238a*/
            v6[2 * v13 - 2] = *(unsigned int *)(v14 + 8 * v13 - 8); /*0x6f2391*/
            v6[2 * v13 - 1] = *(unsigned int *)(v14 + 8 * v13 - 4); /*0x6f2399*/
          }
          while ( v13 < v12 ); /*0x6f239d*/
          v4 = a3; /*0x6f239f*/
        }
        if ( *((unsigned char *)this + 13) ) /*0x6f23a3*/
        {
          v15 = *((unsigned int *)this + 1); /*0x6f23aa*/
          if ( v15 ) /*0x6f23af*/
            RA2_OPDEL((void *)(v15 - 4)); /*0x6f23b9*/
          *((unsigned int *)this + 1) = 0; /*0x6f23c1*/
        }
      }
      *((unsigned int *)this + 1) = v6; /*0x6f23ca*/
      *((unsigned int *)this + 2) = a2; /*0x6f23d2*/
      *((unsigned char *)this + 13) = v4 == 0; /*0x6f23d5*/
      return 1; /*0x6f23db*/
    }
    else
    {
      return 0; /*0x6f236b*/
    }
  }
  else
  {
    (*(void (**)(void *))(*(unsigned int *)this + 12))(this); /*0x6f23e5*/
    return 1; /*0x6f23eb*/
  }

}
}
// 0x6F24B0
namespace gamemd {
AbstractClass * * TeamTypeClass_28::SetCapacity(int a2, int * a3)
{

  int *v4; // ebp
  int *v5; // eax
  unsigned int *v6; // edi
  unsigned int *v7; // eax
  int v8; // ecx
  unsigned int *v9; // eax
  int v10; // ecx
  int v11; // ecx
  int v12; // eax
  int v13; // edx
  int v14; // eax
  void *v15; // ebp
  int v16; // eax

  if ( a3 ) /*0x6f24bc*/
  {
    v4 = a3; /*0x6f24c2*/
    *((unsigned char *)this + 12) = 0; /*0x6f24c6*/
    if ( a3 ) /*0x6f24cc*/
    {
      *a3 = a3; /*0x6f2507*/
      v6 = a3 + 1; /*0x6f250c*/
      if ( a3 - 1 >= 0 ) /*0x6f250f*/
      {
        v9 = a3 + 2; /*0x6f2511*/
        v10 = a3; /*0x6f2514*/
        do /*0x6f251f*/
        {
          *v9 = 0; /*0x6f2515*/
          v9 += 2; /*0x6f251b*/
          --v10; /*0x6f251e*/
        }
        while ( v10 ); /*0x6f251f*/
      }
    }
    else
    {
      v5 = (int *)RA2_OPNEW(8 * a3 + 4); /*0x6f24d6*/
      if ( v5 ) /*0x6f24e0*/
      {
        *v5 = a3; /*0x6f24e5*/
        v6 = v5 + 1; /*0x6f24e9*/
        if ( a3 - 1 >= 0 ) /*0x6f24ec*/
        {
          v7 = v5 + 2; /*0x6f24ee*/
          v8 = a3; /*0x6f24f1*/
          do /*0x6f24fc*/
          {
            *v7 = 0; /*0x6f24f2*/
            v7 += 2; /*0x6f24f8*/
            --v8; /*0x6f24fb*/
          }
          while ( v8 ); /*0x6f24fc*/
        }
      }
      else
      {
        v6 = 0; /*0x6f2500*/
      }
    }
    *((unsigned char *)this + 12) = 1; /*0x6f2523*/
    if ( !v6 ) /*0x6f2527*/
      return 0; /*0x6f25c7*/
    if ( *((unsigned int *)this + 1) ) /*0x6f252d*/
    {
      v11 = *((unsigned int *)this + 2); /*0x6f2534*/
      if ( a3 < v11 ) /*0x6f2539*/
        v11 = a3; /*0x6f253b*/
      v12 = 0; /*0x6f253d*/
      if ( v11 > 0 ) /*0x6f2541*/
      {
        do /*0x6f2559*/
        {
          v13 = *((unsigned int *)this + 1); /*0x6f2543*/
          ++v12; /*0x6f2546*/
          v6[2 * v12 - 2] = *(unsigned int *)(v13 + 8 * v12 - 8); /*0x6f254d*/
          v6[2 * v12 - 1] = *(unsigned int *)(v13 + 8 * v12 - 4); /*0x6f2555*/
        }
        while ( v12 < v11 ); /*0x6f2559*/
        v4 = a3; /*0x6f255b*/
      }
      if ( *((unsigned char *)this + 13) ) /*0x6f255f*/
      {
        v14 = *((unsigned int *)this + 1); /*0x6f2566*/
        if ( v14 ) /*0x6f256b*/
        {
          v15 = (void *)(v14 - 4); /*0x6f2570*/
          Array::ForEachReverse(v14, 8, *(unsigned int *)(v14 - 4), (int (*)(int))nullsub_240); /*0x6f257c*/
          RA2_OPDEL(v15); /*0x6f2582*/
          v4 = a3; /*0x6f2587*/
        }
        *((unsigned int *)this + 1) = 0; /*0x6f258e*/
      }
    }
    *((unsigned int *)this + 1) = v6; /*0x6f2597*/
    *((unsigned int *)this + 2) = a3; /*0x6f259f*/
    *((unsigned char *)this + 13) = v4 == 0; /*0x6f25a2*/
  }
  else
  {
    (*(void (**)(void *))(*(unsigned int *)this + 12))(this); /*0x6f25ab*/
  }
  v16 = *((unsigned int *)this + 2); /*0x6f25ae*/
  if ( v16 < *((unsigned int *)this + 4) ) /*0x6f25b6*/
    *((unsigned int *)this + 4) = v16; /*0x6f25b8*/
  return 1; /*0x6f25bb*/

}
}
// 0x6F0FC0
namespace gamemd {
int TeamTypeClass::FindByName()
{

  int v2; // esi

  if ( !this ) /*0x6f0fc6*/
    return 0; /*0x6f0fc6*/
  v2 = 0; /*0x6f0fcd*/
  if ( *(int *)&HouseClass_Player.__pad_5568[23036] <= 0 ) /*0x6f0fd1*/
    return 0; /*0x6f1010*/
  while ( _strcmpi(this, (const void *)(*(unsigned int *)(*(unsigned int *)&HouseClass_Player.__pad_5568[23024] + 4 * v2) + 36)) /*0x6f1004*/
       && _strcmpi(this, (const void *)(*(unsigned int *)(*(unsigned int *)&HouseClass_Player.__pad_5568[23024] + 4 * v2) + 100)) )
  {
    if ( ++v2 >= *(int *)&HouseClass_Player.__pad_5568[23036] ) /*0x6f100e*/
      return 0; /*0x6f100e*/
  }
  return *(unsigned int *)(*(unsigned int *)&HouseClass_Player.__pad_5568[23024] + 4 * v2); /*0x6f1010*/

}
} // namespace gamemd

// 0x6F1AB0
namespace gamemd {
TeamTypeClass * TeamTypeClass::ReadScriptData(char * a1, int a2)
{

  CCINIClass *KeyCount; // ebx
  CCINIClass *i; // edi
  uint8_t *StringByIndex; // eax
  TeamTypeClass *result; // eax
  INIClass *v8; // ebx
  int j; // edi
  ObjectClass *v10; // [esp-4h] [ebp-34h]
  char Buffer[32]; // [esp+10h] [ebp-20h] BYREF

  KeyCount = (CCINIClass *)INIClass::GetKeyCount(a1, (INIClass *)&stru_830620.__pad_579C[54080]); /*0x6f1ac5*/
  for ( i = 0; (int)i < (int)KeyCount; i = (CCINIClass *)((char *)i + 1) ) /*0x6f1acb*/
  {
    StringByIndex = (uint8_t *)INIClass::GetStringByIndex(a1, (CCINIClass *)&stru_830620.__pad_579C[54080], i); /*0x6f1ad5*/
    INIClass::GetString( /*0x6f1aee*/
      (uint8_t ***)a1,
      (INIClass *)&stru_830620.__pad_579C[54080],
      StringByIndex,
      (INIClass *)&g_abs_87F8E4,
      (INIClass *)Buffer,
      32);
    INIClass::ClearSection((int)a1, (INIClass *)Buffer, 0); /*0x6f1afc*/
  }
  INIClass::ClearSection((int)a1, (INIClass *)&stru_830620.__pad_579C[54080], 0); /*0x6f1b0f*/
  result = *(TeamTypeClass **)&g_abs_A8D63C; /*0x6f1b14*/
  v8 = 0; /*0x6f1b19*/
  for ( j = 0; j < *(int *)&g_abs_A8D63C; ++j ) /*0x6f1b1f*/
  {
    if ( *(unsigned int *)(*(unsigned int *)(*(unsigned int *)&g_abs_A8D63C + 4 * j) + 232) == a2 ) /*0x6f1b2f*/
    {
      v10 = (ObjectClass *)v8; /*0x6f1b37*/
      v8 = (INIClass *)((char *)v8 + 1); /*0x6f1b3e*/
      sprintf(Buffer, g_abs_817F6C, v10); /*0x6f1b3f*/
      INIClass::SetString( /*0x6f1b5f*/
        a1,
        (INIClass *)&stru_830620.__pad_579C[54080],
        (INIClass *)Buffer,
        (INIClass *)(*(unsigned int *)(*(unsigned int *)&g_abs_A8D63C + 4 * j) + 36));
      (*(void (**)(unsigned int, char *))(**(unsigned int **)(*(unsigned int *)&g_abs_A8D63C + 4 * j) + 104))( /*0x6f1b6f*/
        *(unsigned int *)(*(unsigned int *)&g_abs_A8D63C + 4 * j),
        a1);
    }
    result = *(TeamTypeClass **)&g_abs_A8D63C; /*0x6f1b72*/
  }
  return result; /*0x6f1b7c*/

}
} // namespace gamemd

// 0x6F1B90
namespace gamemd {
int TeamTypeClass::SaveToINI(TechnoTypeClass * aP0, int * a1, int aP2)
{

  int result; // eax

  result = AbstractClass::SaveLoad_Prefix((ObjectTypeClass *)aP0, (ObjectTypeClass *)a1, (ObjectTypeClass *)aP2); /*0x6f1b9f*/
  if ( result >= 0 ) /*0x6f1ba6*/
    return 0; /*0x6f1ba8*/
  return result; /*0x6f1baa*/

}
} // namespace gamemd

// 0x6F1BB0
namespace gamemd {
int TeamTypeClass::LoadTypeData(AbstractTypeClass * aP0, int aP1)
{

  int result; // eax

  result = AbstractClass::SaveLoad_Prefix_0((AbstractClass *)aP0, (AbstractClass *)aP1); /*0x6f1bbb*/
  if ( result >= 0 ) /*0x6f1bc2*/
  {
    if ( aP0 ) /*0x6f1bc6*/
    {
      AbstractTypeClass::Init((int)aP0, (AbstractTypeClass *)&aP1); /*0x6f1bcf*/
      *(unsigned int *)aP0->__pad_0 = &vt_TeamTypeClass; /*0x6f1bd4*/
      *(unsigned int *)&aP0->__pad_0[4] = &vt_TeamTypeClass; /*0x6f1bda*/
      *(unsigned int *)&aP0->__pad_0[8] = &vt_TeamTypeClass; /*0x6f1be1*/
      *(unsigned int *)&aP0->__pad_0[12] = &vt_TeamTypeClass; /*0x6f1be8*/
    }
    ObjectPtr::RegisterForTracking( /*0x6f1bfb*/
      (SwizzleManagerClass *)&stru_B05488.__pad_579C[5356],
      (MouseClass *)&aP0[1].__pad_24[8]);
    ObjectPtr::RegisterForTracking( /*0x6f1c0c*/
      (SwizzleManagerClass *)&stru_B05488.__pad_579C[5356],
      (MouseClass *)&aP0[1].__pad_24[20]);
    ObjectPtr::RegisterForTracking( /*0x6f1c1d*/
      (SwizzleManagerClass *)&stru_B05488.__pad_579C[5356],
      (MouseClass *)&aP0[1].UINameLabel[11]);
    ObjectPtr::RegisterForTracking( /*0x6f1c2e*/
      (SwizzleManagerClass *)&stru_B05488.__pad_579C[5356],
      (MouseClass *)&aP0[1].UINameLabel[15]);
    return 0; /*0x6f1c33*/
  }
  return result; /*0x6f1c35*/

}
} // namespace gamemd

// 0x6F1C40
namespace gamemd {
int TeamTypeClass::GetClassIdentifier(int a1, unsigned int * a2)
{

  if ( !a2 ) /*0x6f1c46*/
    return -2147467261; /*0x6f1c48*/
  *a2 = -774134194; /*0x6f1c56*/
  a2[1] = 298977144; /*0x6f1c5e*/
  a2[2] = 1610655148; /*0x6f1c67*/
  a2[3] = -1252326136; /*0x6f1c70*/
  return 0; /*0x6f1c4d*/

}
} // namespace gamemd

// 0x6F1F30
namespace gamemd {
int TeamTypeClass::FlashAllInstances(AnimClass * aP1)
{

  int result; // eax
  int i; // esi
  int v5; // ecx

  result = *(unsigned int *)&g_abs_89F690; /*0x6f1f30*/
  for ( i = 0; i < *(int *)&g_abs_89F690; ++i ) /*0x6f1f3d*/
  {
    v5 = *(unsigned int *)(*(unsigned int *)&g_abs_89F690 + 4 * i); /*0x6f1f49*/
    if ( *(void **)(v5 + 36) == this ) /*0x6f1f4f*/
      TeamTypeClass::Check((unsigned int *)v5, (int)aP1); /*0x6f1f52*/
    result = *(unsigned int *)&g_abs_89F690; /*0x6f1f57*/
  }
  return result; /*0x6f1f62*/

}
} // namespace gamemd

// 0x6F1F70
namespace gamemd {
int TeamTypeClass::FindFirstInstance()
{

  int v1; // edx
  char *i; // esi
  int result; // eax

  v1 = 0; /*0x6f1f78*/
  if ( g_abs_8B40F8 <= 0 ) /*0x6f1f7c*/
    return 0; /*0x6f1f93*/
  for ( i = (char *)g_abs_8B40EC; ; i += 4 ) /*0x6f1f7e*/
  {
    result = *(unsigned int *)i; /*0x6f1f84*/
    if ( *(void **)(*(unsigned int *)i + 36) == this ) /*0x6f1f89*/
      break; /*0x6f1f89*/
    if ( ++v1 >= g_abs_8B40F8 ) /*0x6f1f91*/
      return 0; /*0x6f1f91*/
  }
  return result; /*0x6f1f95*/

}
} // namespace gamemd

// 0x6F20A0
namespace gamemd {
int TeamTypeClass::GetTypeIdentifier()
{

  return 35; /*0x6f20a5*/

}
} // namespace gamemd

// 0x6F20B0
namespace gamemd {
int TeamTypeClass::GetObjectSize()
{

  return 248; /*0x6f20b5*/

}
} // namespace gamemd

// 0x6F21B0
namespace gamemd {
void TeamTypeClass_28::ClearBuffer()
{

  int v2; // eax

  v2 = *((unsigned int *)this + 1); /*0x6f21b6*/
  *((unsigned int *)this + 4) = 0; /*0x6f21b9*/
  if ( v2 && *((unsigned char *)this + 13) ) /*0x6f21c0*/
  {
    RA2_OPDEL((void *)(v2 - 4)); /*0x6f21d1*/
    *((unsigned int *)this + 1) = 0; /*0x6f21d9*/
  }
  *((unsigned char *)this + 13) = 0; /*0x6f21dc*/
  *((unsigned int *)this + 2) = 0; /*0x6f21df*/

}
} // namespace gamemd

// 0x6F21F0
namespace gamemd {
unsigned int TeamTypeClass_28::PointerToIndex(int a2)
{

  if ( *((unsigned char *)this + 12) ) /*0x6f21f0*/
    return (unsigned int)(a2 - *((unsigned int *)this + 1)) >> 3; /*0x6f2205*/
  else
    return 0; /*0x6f21f7*/

}
} // namespace gamemd

// 0x6F2210
namespace gamemd {
unsigned int * TeamTypeClass_28::Seek(unsigned int * a2, int a3)
{

  int v3; // eax
  int v4; // edx
  int v5; // ecx

  v3 = *((unsigned int *)this + 1); /*0x6f2210*/
  v4 = *(unsigned int *)(v3 + 8 * a3); /*0x6f2217*/
  v5 = v3 + 8 * a3; /*0x6f221a*/
  *a2 = v4; /*0x6f2221*/
  a2[1] = *(unsigned int *)(v5 + 4); /*0x6f2226*/
  return a2; /*0x6f2229*/

}
} // namespace gamemd

// 0x6F2290
namespace gamemd {
char TeamTypeClass_28::AddRef(int a2)
{

  int v2; // edi
  int v3; // esi
  int a2; // edx
  unsigned int *v5; // eax
  unsigned int *v6; // ecx
  int v7; // edx

  v2 = *((char *)this + 2); /*0x6f229b*/
  if ( v2 == *(unsigned int *)(a2 + 8) ) /*0x6f22a0*/
  {
    v3 = 0; /*0x6f22a2*/
    if ( v2 <= 0 ) /*0x6f22a6*/
      return 1; /*0x6f22d6*/
    a2 = *(unsigned int *)(a2 + 4); /*0x6f22a8*/
    v5 = (unsigned int *)*((char *)this + 1); /*0x6f22ab*/
    v6 = (unsigned int *)(a2 + 4); /*0x6f22ae*/
    v7 = a2 - (unsigned int)v5; /*0x6f22b1*/
    while ( *v5 == *(unsigned int *)((char *)v5 + v7) && v5[1] == *v6 ) /*0x6f22c3*/
    {
      ++v3; /*0x6f22c5*/
      v6 += 2; /*0x6f22c6*/
      v5 += 2; /*0x6f22c9*/
      if ( v3 >= v2 ) /*0x6f22ce*/
        return 1; /*0x6f22ce*/
    }
  }
  return 0; /*0x6f22d0*/

}
} // namespace gamemd

// 0x6F2400
namespace gamemd {
void TeamTypeClass_28::ddtor()
{

  int v2; // eax

  v2 = *((unsigned int *)this + 1); /*0x6f2406*/
  if ( v2 && *((unsigned char *)this + 13) ) /*0x6f240d*/
  {
    RA2_OPDEL((void *)(v2 - 4)); /*0x6f241e*/
    *((unsigned int *)this + 1) = 0; /*0x6f2426*/
  }
  *((unsigned char *)this + 13) = 0; /*0x6f2429*/
  *((unsigned int *)this + 2) = 0; /*0x6f242c*/

}
} // namespace gamemd

// 0x6F2440
namespace gamemd {
int TeamTypeClass_28::Read(unsigned int * a2)
{

  int result; // eax
  int v3; // edx
  unsigned int *i; // ecx

  if ( !*((unsigned char *)this + 12) ) /*0x6f2440*/
    return 0; /*0x6f244e*/
  v3 = *((unsigned int *)this + 2); /*0x6f2454*/
  result = 0; /*0x6f2457*/
  if ( v3 <= 0 ) /*0x6f245b*/
    return -1; /*0x6f247c*/
  for ( i = *(unsigned int **)((char *)this + 4); *i != *a2 || i[1] != a2[1]; i += 2 ) /*0x6f2461*/
  {
    if ( ++result >= v3 ) /*0x6f247a*/
      return -1; /*0x6f247a*/
  }
  return result; /*0x6f244b*/

}
} // namespace gamemd

// 0x6F2490
namespace gamemd {
unsigned int TeamTypeClass_28::Write(int a2)
{

  if ( *((unsigned char *)this + 12) ) /*0x6f2490*/
    return (unsigned int)(a2 - *((unsigned int *)this + 1)) >> 3; /*0x6f24a5*/
  else
    return 0; /*0x6f2497*/

}
} // namespace gamemd

// 0x6F2640
namespace gamemd {
int TeamTypeClass_28::FindItem(unsigned int * a2)
{

  int v2; // edx
  int result; // eax
  unsigned int *i; // ecx

  v2 = *((char *)this + 4); /*0x6f2640*/
  result = 0; /*0x6f2645*/
  if ( v2 <= 0 ) /*0x6f264b*/
    return -1; /*0x6f266c*/
  for ( i = (unsigned int *)*((char *)this + 1); *i != *a2 || i[1] != a2[1]; i += 2 ) /*0x6f2651*/
  {
    if ( ++result >= v2 ) /*0x6f266a*/
      return -1; /*0x6f266a*/
  }
  return result; /*0x6f266f*/

}
}
// 0x6F2680
namespace gamemd {
VectorClass_flat * TeamTypeClass_28::QueryInterface(unsigned int * Block, char a2)
{

  int v3; // eax

  v3 = *(Block + 1); /*0x6f2683*/
  *Block = &vt_VectorClass_DiscreteDistributionClass_AITriggerTypeClass_DistributionObject_AITriggerTypeClass; /*0x6f2686*/
  if ( v3 && *((unsigned char *)Block + 13) ) /*0x6f2690*/
  {
    RA2_OPDEL((void *)(v3 - 4)); /*0x6f26a3*/
    *(Block + 1) = 0; /*0x6f26ab*/
  }
  *((unsigned char *)Block + 13) = 0; /*0x6f26b6*/
  *(Block + 2) = 0; /*0x6f26bc*/
  if ( (Block & 1) != 0 ) /*0x6f26c3*/
    RA2_OPDEL(Block); /*0x6f26c6*/
  return (VectorClass *)Block; /*0x6f26d0*/

}
} // namespace gamemd

// 0x6F2720
namespace gamemd {
DynamicVector * TeamTypeClass_28::Constructor(unsigned int * Block, char a2)
{

  int v3; // eax

  v3 = *(Block + 1); /*0x6f2723*/
  *Block = &vt_VectorClass_DiscreteDistributionClass_AITriggerTypeClass_DistributionObject_AITriggerTypeClass; /*0x6f2726*/
  if ( v3 && *((unsigned char *)Block + 13) ) /*0x6f2730*/
  {
    RA2_OPDEL((void *)(v3 - 4)); /*0x6f2743*/
    *(Block + 1) = 0; /*0x6f274b*/
  }
  *((unsigned char *)Block + 13) = 0; /*0x6f2756*/
  *(Block + 2) = 0; /*0x6f275c*/
  if ( (Block & 1) != 0 ) /*0x6f2763*/
    RA2_OPDEL(Block); /*0x6f2766*/
  return (DynamicVector *)Block; /*0x6f2770*/

}
} // namespace gamemd
