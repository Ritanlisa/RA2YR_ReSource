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

// 0x4C98B0
namespace gamemd {
int TeamTypeClass::Construct()
{
{
  wchar_t *v2; // eax
  wchar_t *v4; // eax
  AbstractClass::Constructor((AbstractClass *)this); /*0x4c98b7*/
  this->TeamTypeClass_field_24 = 0; /*0x4c98be*/
  this->TeamTypeClass_field_28 = 0; /*0x4c98c1*/
  v2 = g_CurrentFrame; /*0x4c98c4*/
  this->TeamTypeClass_field_34 = 0; /*0x4c98c9*/
  this->TeamTypeClass_field_2C = v2; /*0x4c98cc*/
  this->TeamTypeClass_field_38 = 0; /*0x4c98d4*/
  this->TeamTypeClass_field_3C = 1; /*0x4c98d7*/
  this->taskForceCount = 0; /*0x4c98da*/
  this->taskForceCapacity = 0; /*0x4c98dd*/
  this->q04C = 1; /*0x4c98e0*/
  this->q134 = 0; /*0x4c98e3*/
  this->taskForce = &vt_DynamicVectorClass_TechnoTypeClass_const; /*0x4c98e6*/
  this->q054 = 10; /*0x4c98ed*/
  this->q050 = 0; /*0x4c98f4*/
  this->TeamTypeClass_field_71 = 1; /*0x4c98f7*/
  this->TeamTypeClass_field_58 = 0; /*0x4c98fd*/
  this->TeamTypeClass_field_5C = 0; /*0x4c9901*/
  this->TeamTypeClass_field_5D = 0; /*0x4c9904*/
  this->TeamTypeClass_field_60 = 0; /*0x4c9907*/
  this->TeamTypeClass_field_64 = 0; /*0x4c990a*/
  this->TeamTypeClass_field_68 = -1; /*0x4c990d*/
  this->TeamTypeClass_field_6C = 0; /*0x4c9914*/
  this->TeamTypeClass_field_70 = 0; /*0x4c9917*/
  *(_DWORD *)this = &FactoryClass::`vftable'; /*0x4c991a*/
  this->vtable1 = &FactoryClass::`vftable'; /*0x4c9920*/
  this->vtable2 = &FactoryClass::`vftable'; /*0x4c9926*/
  this->vtable3 = &vt_FactoryClass; /*0x4c992d*/
  this->AbstractClass_4.GenerateUniqueID(); /*0x4c9934*/
  if ( g_TeamTypeCapacity < DataGlobal_A83E38 /*0x4c996d*/
    || (DataGlobal_A83E3D || !DataGlobal_A83E38)
    && DataGlobal_A83E44 > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(DataGlobal_A83E30 + 8))(
         &DataGlobal_A83E30,
         DataGlobal_A83E38 + DataGlobal_A83E44,
         0) )
  {
    int v3 = g_TeamTypeCapacity++; /*0x4c997a*/
    *((_DWORD *)g_TeamTypeCount + v3) = this; /*0x4c9989*/
  }
  v4 = g_CurrentFrame; /*0x4c998c*/
  this->TeamTypeClass_field_38 = 0; /*0x4c9996*/
  this->TeamTypeClass_field_2C = v4; /*0x4c9999*/
  int v7; // [esp+Ch] [ebp-8h]
  this->TeamTypeClass_field_30 = v7; /*0x4c999f*/
  this->TeamTypeClass_field_34 = 0; /*0x4c99a2*/
  this->TeamTypeClass_field_24 = 0; /*0x4c99a5*/
  if ( g_AlphaShapePool < DataGlobal_B0F728 /*0x4c99dc*/
    || (DataGlobal_B0F72D || !DataGlobal_B0F728)
    && DataGlobal_B0F734 > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(AbstractClass_Array + 8))(
         &AbstractClass_Array,
         DataGlobal_B0F728 + DataGlobal_B0F734,
         0) )
  {
    int v5 = g_AlphaShapePool++; /*0x4c99e9*/
    *((_DWORD *)DataGlobal_B0F724 + v5) = this; /*0x4c99f8*/
  }
  return this; /*0x4c99fd*/
}
} // namespace gamemd
}

// 0x691C00
namespace gamemd {
void * TeamTypeClass::CreateScriptType()
{
{
  INIClass *v3; // eax
  INIClass *v4; // esi
  INIClass **v8; // edx

  if ( !_strcmpi(&stru_817460.sectionHead[1], this) || !_strcmpi(g_Str_none, this) ) /*0x691c20*/
    return 0; /*0x691c2a*/
  int v2 = 0; /*0x691c35*/
  if ( dword_8B41D8 <= 0 ) /*0x691c39*/
  {
LABEL_6:
    v3 = (INIClass *)__2_YAPAXI_Z(0x234u); /*0x691c62*/
    v4 = v3; /*0x691c6c*/
    if ( v3 ) /*0x691c73*/
    {
      AbstractTypeClass::Constructor((int)v3, this); /*0x691c7c*/
      v4[2].sectionCount = 0; /*0x691c81*/
      *(_DWORD *)v4[2].__pad_20 = 0; /*0x691c8b*/
      *(_DWORD *)v4->__pad_0 = &ScriptTypeClass::`vftable'; /*0x691c95*/
      v4->headNode[0] = (int)&ScriptTypeClass::`vftable'; /*0x691c9b*/
      v4->headNode[1] = (int)&ScriptTypeClass::`vftable'; /*0x691ca2*/
      v4->headNode[2] = (int)&vt_ScriptTypeClass; /*0x691ca9*/
      int v5 = dword_8B41D8; /*0x691cb0*/
      if ( dword_8B41D8 < dword_8B41D0 /*0x691cf1*/
        || (unk_8B41D5 || !dword_8B41D0)
        && dword_8B41DC > 0
  char v6; // al
        && (v6 = (*(int (__thiscall **)(_DWORD *, int, _DWORD))(dword_8B41C8 + 8))(
                   &dword_8B41C8,
                   dword_8B41D0 + dword_8B41DC,
                   0),
            v5 = dword_8B41D8,
            v6) )
      {
        dword_8B41D8 = v5 + 1; /*0x691cf6*/
        *((_DWORD *)unk_8B41CC + v5) = v4; /*0x691d02*/
        v5 = dword_8B41D8; /*0x691d05*/
      }
      int v7 = 0; /*0x691d0b*/
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
  while ( _strcmpi((const void *)(*((_DWORD *)unk_8B41CC + v2) + 36), this) ) /*0x691c52*/
  {
    if ( ++v2 >= dword_8B41D8 ) /*0x691c60*/
      goto LABEL_6; /*0x691c60*/
  }
  return (INIClass *)*((_DWORD *)unk_8B41CC + v2); /*0x691d2e*/
}
} // namespace gamemd
}

// 0x6E85F0
namespace gamemd {
AbstractClass * * TeamTypeClass::FindOrCreateTaskForce()
{
{

  if ( !_strcmpi(&stru_817460.sectionHead[1], this) || !_strcmpi(g_Str_none, this) ) /*0x6e860c*/
    return 0; /*0x6e866f*/
  int v2 = 0; /*0x6e861d*/
  if ( *(int *)&HouseClass_Player[43924] <= 0 ) /*0x6e8621*/
  {
LABEL_6:
    _DWORD * v3 = (_DWORD *)__2_YAPAXI_Z(0xD4u); /*0x6e8646*/
    if ( v3 ) /*0x6e8655*/
      return (TaskForceClass *)TaskForceClass::Construct(v3, this); /*0x6e8661*/
    return 0; /*0x6e8655*/
  }
  while ( _strcmpi((const void *)(*(_DWORD *)(*(_DWORD *)&HouseClass_Player[43912] + 4 * v2) + 36), this) ) /*0x6e863a*/
  {
    if ( ++v2 >= *(int *)&HouseClass_Player[43924] ) /*0x6e8644*/
      goto LABEL_6; /*0x6e8644*/
  }
  return *(TaskForceClass **)(*(_DWORD *)&HouseClass_Player[43912] + 4 * v2); /*0x6e865f*/
}
} // namespace gamemd
}

// 0x6EF5F0
namespace gamemd {
int TeamTypeClass::Check(int a2)
{
{
  int result; // eax

  for ( result = this->q054; result; result = *(_DWORD *)(result + 1496) ) /*0x6ef5f5*/
    *(_DWORD *)(result + 240) = a2; /*0x6ef5fb*/
  return result; /*0x6ef60b*/
}
} // namespace gamemd
}

// 0x6F0A70
namespace gamemd {
int TeamTypeClass::DestroyAllInstances()
{
{
  int result; // eax
  int i; // esi

  result = g_HouseClass_AIProductionState; /*0x6f0a70*/
  for ( i = 0; i < g_HouseClass_AIProductionState; ++i ) /*0x6f0a7d*/
  {
    _DWORD * v4 = (_DWORD *)*((_DWORD *)g_TeamClassPool + i); /*0x6f0a84*/
    if ( this == (void *)v4[9] ) /*0x6f0a8a*/
    {
      if ( v4 ) /*0x6f0a8e*/
        (*(void (__thiscall **)(_DWORD *, int))(*v4 + 32))(v4, 1); /*0x6f0a94*/
      --i; /*0x6f0a97*/
    }
    result = g_HouseClass_AIProductionState; /*0x6f0a98*/
  }
  return result; /*0x6f0aa2*/
}
} // namespace gamemd
}

// 0x6F1030
namespace gamemd {
int TeamTypeClass::GetTeam(int a2, int a3)
{
{
  int result; // eax

  result = a2; /*0x6f1030*/
  if ( this->q0D0 == a2 ) /*0x6f103f*/
    this->q0D0 = 0; /*0x6f1041*/
  if ( this->q0C4 == a2 ) /*0x6f104d*/
    this->q0C4 = 0; /*0x6f104f*/
  if ( this->q0E4 == a2 ) /*0x6f105b*/
    this->q0E4 = 0; /*0x6f105d*/
  if ( this->q0E0 == a2 ) /*0x6f1069*/
    this->q0E0 = 0; /*0x6f106b*/
  int v4 = this->q0E0; /*0x6f1071*/
  if ( v4 ) /*0x6f1079*/
    return (*(int (__thiscall **)(int, int, int))(*(_DWORD *)v4 + 40))(v4, a2, a3); /*0x6f1083*/
  return result; /*0x6f1086*/
}
} // namespace gamemd
}

// 0x6F1090
namespace gamemd {
AbstractClass * * TeamTypeClass::LoadFromINI(unsigned char *** aP1)
{
{
  AbstractClass *v3; // ecx
  int Int_Overwrite; // eax
  char Bool_Overwrite; // al
  AbstractClass *v23; // ecx
  IUnknown *v27; // eax
  IUnknown *v28; // ecx
  int v29; // eax
  char v30; // al
  char v31; // cl
  char v32; // al
  char v33; // al
  char v34; // cl
  char v35; // al
  AbstractClass *v36; // ecx
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
  v3 = this->q0C4; /*0x6f10b8*/
  AbstractClass *v4 = -1; /*0x6f10be*/
  if ( v3 ) /*0x6f10c3*/
    v4 = *(_DWORD *)(*(_DWORD *)&v3->needsSave_flag + 184); /*0x6f10c8*/
  void *v5; // ebp
  v5 = (void *)SuperWeaponTypeClass::FindOrCreate( /*0x6f10e1*/
                 aP1,
                 (INIClass *)(&this->vtable46),
                 (unsigned __int8 *)aHouse,
                 (CCINIClass *)v4);
  if ( BuildingType::IsSpecialType(v5) ) /*0x6f10e5*/
  {
    this->q0C8 = v5; /*0x6f10ee*/
    this->q0C4 = 0; /*0x6f10f4*/
  }
  else if ( v5 != (void *)-1 ) /*0x6f1103*/
  {
    this->q0C4 = HouseClass::FindOwner(v5); /*0x6f110c*/
    this->q0C8 = -1; /*0x6f1112*/
  }
  Int_Overwrite = INIClass::ReadInt_Overwrite( /*0x6f112b*/
                    (int)aP1,
                    (unsigned __int8 *)(&this->vtable46),
                    (CCINIClass *)&stru_830620[76492],
                    this->q0A0);
  v44 = this->q0C0; /*0x6f1138*/
  this->q0A0 = Int_Overwrite; /*0x6f113f*/
  this->q0C0 = INIClass::ReadInt_Overwrite( /*0x6f114a*/
                              (int)aP1,
                              (unsigned __int8 *)(&this->vtable46),
                              (CCINIClass *)&stru_830620[76472],
                              (INIClass *)v44);
  Bool_Overwrite = INIClass::ReadBool_Overwrite( /*0x6f115f*/
                     (int)aP1,
                     (unsigned __int8 *)(&this->vtable46),
                     (CCINIClass *)&stru_830620[76460],
                     this->q0A4);
  char v8 = this->u8_A5; /*0x6f1164*/
  this->q0A4 = Bool_Overwrite; /*0x6f116a*/
  char v9; // al
  v9 = INIClass::ReadBool_Overwrite( /*0x6f1179*/
         (int)aP1,
         (unsigned __int8 *)(&this->vtable46),
         (CCINIClass *)&stru_830620[76452],
         v8);
  v45 = this->u8_A6; /*0x6f1186*/
  this->u8_A5 = v9; /*0x6f118d*/
  this->u8_A6 = INIClass::ReadBool_Overwrite( /*0x6f1198*/
                             (int)aP1,
                             (unsigned __int8 *)(&this->vtable46),
                             (CCINIClass *)&stru_830620[76440],
                             v45);
  char v10; // al
  v10 = INIClass::ReadBool_Overwrite( /*0x6f11ad*/
          (int)aP1,
          (unsigned __int8 *)(&this->vtable46),
          (CCINIClass *)&stru_830620[76428],
          this->u8_A7);
  char v11 = this->q0A9; /*0x6f11b2*/
  this->u8_A7 = v10; /*0x6f11b8*/
  char v12; // al
  v12 = INIClass::ReadBool_Overwrite( /*0x6f11c7*/
          (int)aP1,
          (unsigned __int8 *)(&this->vtable46),
          (CCINIClass *)&stru_830620[76416],
          v11);
  v46 = this->q0AA; /*0x6f11d4*/
  this->q0A9 = v12; /*0x6f11db*/
  this->q0AA = INIClass::ReadBool_Overwrite( /*0x6f11e6*/
                             (int)aP1,
                             (unsigned __int8 *)(&this->vtable46),
                             (CCINIClass *)&stru_830620[76404],
                             v46);
  char v13; // al
  v13 = INIClass::ReadBool_Overwrite( /*0x6f11fb*/
          (int)aP1,
          (unsigned __int8 *)(&this->vtable46),
          (CCINIClass *)&stru_830620[76392],
          this->q0AB);
  char v14 = this->TeamTypeClass_field_2C; /*0x6f1200*/
  this->q0AB = v13; /*0x6f1206*/
  char v15; // al
  v15 = INIClass::ReadBool_Overwrite( /*0x6f1215*/
          (int)aP1,
          (unsigned __int8 *)(&this->vtable46),
          (CCINIClass *)&stru_830620[76384],
          v14);
  v47 = this->u8_B1; /*0x6f1222*/
  this->TeamTypeClass_field_2C = v15; /*0x6f1229*/
  this->u8_B1 = INIClass::ReadBool_Overwrite( /*0x6f1234*/
                             (int)aP1,
                             (unsigned __int8 *)(&this->vtable46),
                             (CCINIClass *)&stru_830620[76364],
                             v47);
  char v16; // al
  v16 = INIClass::ReadBool_Overwrite( /*0x6f1249*/
          (int)aP1,
          (unsigned __int8 *)(&this->vtable46),
          (CCINIClass *)&stru_830620[76352],
          this->q0A8);
  bool v17 = this->q02B; /*0x6f124e*/
  this->q0A8 = v16; /*0x6f1254*/
  char v18; // al
  v18 = INIClass::ReadBool_Overwrite( /*0x6f1263*/
          (int)aP1,
          (unsigned __int8 *)(&this->vtable46),
          (CCINIClass *)&stru_830620[76344],
          v17);
  v48 = this->q0AF; /*0x6f1270*/
  this->q02B = v18; /*0x6f1277*/
  this->q0AF = INIClass::ReadBool_Overwrite( /*0x6f1282*/
                             (int)aP1,
                             (unsigned __int8 *)(&this->vtable46),
                             (CCINIClass *)&stru_830620[76336],
                             v48);
  char v19; // al
  v19 = INIClass::ReadBool_Overwrite( /*0x6f1297*/
          (int)aP1,
          (unsigned __int8 *)(&this->vtable46),
          (CCINIClass *)&stru_830620[76320],
          this->u8_AE);
  char v20 = this->u8_AD; /*0x6f129c*/
  this->u8_AE = v19; /*0x6f12a2*/
  char v21; // al
  v21 = INIClass::ReadBool_Overwrite( /*0x6f12b1*/
          (int)aP1,
          (unsigned __int8 *)(&this->vtable46),
          (CCINIClass *)&stru_830620[76308],
          v20);
  v49 = this->u8_B3; /*0x6f12be*/
  this->u8_AD = v21; /*0x6f12c5*/
  this->u8_B3 = INIClass::ReadBool_Overwrite( /*0x6f12d0*/
                             (int)aP1,
                             (unsigned __int8 *)(&this->vtable46),
                             (CCINIClass *)&stru_830620[76296],
                             v49);
  int v22; // eax
  v22 = INIClass::ReadInt_Overwrite( /*0x6f12e5*/
          (int)aP1,
          (unsigned __int8 *)(&this->vtable46),
          (CCINIClass *)&stru_830620[76284],
          this->q0B4);
  v23 = this->q0B8; /*0x6f12ea*/
  this->q0B4 = v22; /*0x6f12f0*/
  int v24; // eax
  v24 = INIClass::ReadInt_Overwrite( /*0x6f12ff*/
          (int)aP1,
          (unsigned __int8 *)(&this->vtable46),
          (CCINIClass *)&stru_830620[76280],
          (INIClass *)v23);
  v50 = this->q0CC; /*0x6f130c*/
  this->q0B8 = v24; /*0x6f1313*/
  int v25 = INIClass::ReadInt_Overwrite((int)aP1, (unsigned __int8 *)(&this->vtable46), aTechlevel, (INIClass *)v50); /*0x6f1319*/
  char * v26 = this->q0D0; /*0x6f131e*/
  this->q0CC = v25; /*0x6f1324*/
  if ( INIClass::GetString( /*0x6f1341*/
         aP1,
         (INIClass *)(&this->vtable46),
         (unsigned __int8 *)unk_81728C,
         (INIClass *)&DataGlobal_87F8E4[42624],
         Destination,
         128) )
  {
    v27 = TagTypeClass::FindOrCreate((ObjectClass *)Destination); /*0x6f134e*/
  }
  else
  {
    v27 = v26; /*0x6f1355*/
  }
  v28 = this->q09C; /*0x6f1357*/
  this->q0D0 = v27; /*0x6f135d*/
  v29 = INIClass::ReadInt_Overwrite( /*0x6f136c*/
          (int)aP1,
          (unsigned __int8 *)(&this->vtable46),
          (CCINIClass *)&stru_830620[75684],
          (INIClass *)v28);
  v51 = this->u8_F2; /*0x6f1379*/
  this->q09C = v29; /*0x6f1380*/
  this->u8_F2 = INIClass::ReadBool_Overwrite( /*0x6f138b*/
                             (int)aP1,
                             (unsigned __int8 *)(&this->vtable46),
                             (CCINIClass *)&stru_830620[76264],
                             v51);
  v30 = INIClass::ReadBool_Overwrite( /*0x6f13a0*/
          (int)aP1,
          (unsigned __int8 *)(&this->vtable46),
          (CCINIClass *)&stru_830620[76252],
          this->u8_F3);
  v31 = this->u8_F6; /*0x6f13a5*/
  this->u8_F3 = v30; /*0x6f13ab*/
  v32 = INIClass::ReadBool_Overwrite( /*0x6f13ba*/
          (int)aP1,
          (unsigned __int8 *)(&this->vtable46),
          (CCINIClass *)&g_INI_Key_Height[68],
          v31);
  v52 = this->q0F7; /*0x6f13c7*/
  this->u8_F6 = v32; /*0x6f13ce*/
  this->q0F7 = INIClass::ReadBool_Overwrite( /*0x6f13d9*/
                             (int)aP1,
                             (unsigned __int8 *)(&this->vtable46),
                             (CCINIClass *)&stru_830620[76228],
                             v52);
  v33 = INIClass::ReadBool_Overwrite( /*0x6f13ee*/
          (int)aP1,
          (unsigned __int8 *)(&this->vtable46),
          (CCINIClass *)&stru_830620[76200],
          this->UINameLabel);
  v34 = this->u8_F5; /*0x6f13f3*/
  this->UINameLabel = v33; /*0x6f13f9*/
  v35 = INIClass::ReadBool_Overwrite( /*0x6f1408*/
          (int)aP1,
          (unsigned __int8 *)(&this->vtable46),
          (CCINIClass *)&stru_830620[76172],
          v34);
  v36 = this->q0D4; /*0x6f140d*/
  this->u8_F5 = v35; /*0x6f141a*/
  v37 = (INIClass *)Waypoint::To_String((int)v36); /*0x6f1420*/
  if ( (int)INIClass::GetString(aP1, (INIClass *)(&this->vtable46), (unsigned __int8 *)&stru_817244, v37, &aP4, 64) > 0 ) /*0x6f1435*/
    this->q0D4 = String::To_Waypoint(aP4[0]); /*0x6f1440*/
  v38 = (INIClass *)Waypoint::To_String(this->q0D8); /*0x6f1453*/
  if ( (int)INIClass::GetString( /*0x6f1468*/
              aP1,
              (INIClass *)(&this->vtable46),
              (unsigned __int8 *)&stru_830620[76152],
              v38,
              &aP4,
              64) > 0 )
    this->q0D8 = String::To_Waypoint(aP4[0]); /*0x6f1473*/
  v39 = this->q0E0; /*0x6f1479*/
  if ( INIClass::GetString( /*0x6f1496*/
         aP1,
         (INIClass *)(&this->vtable46),
         (unsigned __int8 *)&stru_817348,
         (INIClass *)&DataGlobal_87F8E4[42624],
         Destination,
         128) )
  {
    ScriptType = TeamTypeClass::CreateScriptType((AbstractClass *)Destination); /*0x6f14a3*/
  }
  else
  {
    ScriptType = v39; /*0x6f14aa*/
  }
  v41 = this->q0E4; /*0x6f14ac*/
  this->q0E0 = ScriptType; /*0x6f14c9*/
  if ( INIClass::GetString( /*0x6f14cf*/
         aP1,
         (INIClass *)(&this->vtable46),
         (unsigned __int8 *)&stru_8172FC,
         (INIClass *)&DataGlobal_87F8E4[42624],
         Destination,
         128) )
  {
    TaskForce = TeamTypeClass::FindOrCreateTaskForce(Destination[0].__pad_0); /*0x6f14dc*/
  }
  else
  {
    TaskForce = v41; /*0x6f14e3*/
  }
  this->q0E4 = TaskForce; /*0x6f14e6*/
  if ( !TaskForce ) /*0x6f14ef*/
  {
    if ( *(int *)&g_NetworkPlayerBuffer[4772] <= 0 ) /*0x6f14f8*/
      return 0; /*0x6f14f8*/
    this->q0E4 = **(_DWORD **)&g_NetworkPlayerBuffer[4760]; /*0x6f1501*/
  }
  if ( this->q0E0 ) /*0x6f1507*/
    return 1; /*0x6f1532*/
  if ( *(int *)&g_CellDirectionOffsets[84808] > 0 ) /*0x6f1518*/
  {
    this->q0E0 = **(_DWORD **)&g_CellDirectionOffsets[84796]; /*0x6f1522*/
    return 1; /*0x6f1522*/
  }
  return 0; /*0x6f1528*/
}
} // namespace gamemd
}

// 0x6F1550
namespace gamemd {
AbstractClass * * TeamTypeClass::GetMaxCount(CCINIClass * aP1)
{
{
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
  INIClass *v28; // eax
  INIClass *v29; // eax
  if ( !AbstractTypeClass::WriteINI((char *)this, aP1) ) /*0x6f1559*/
    return 0; /*0x6f185b*/
  int v3 = this->q0C4; /*0x6f1566*/
  int v4 = -1; /*0x6f156d*/
  if ( v3 ) /*0x6f1573*/
  {
    v4 = *(_DWORD *)(*(_DWORD *)(v3 + 52) + 184); /*0x6f1578*/
  }
  else if ( BuildingType::IsSpecialType(this->q0C8) ) /*0x6f1586*/
  {
    v4 = this->q0C8; /*0x6f158f*/
  }
  v5 = (INIClass *)(&this->vtable46); /*0x6f159d*/
  INIClass::SetInt( /*0x6f15a9*/
    aP1->__pad_0,
    (INIClass *)(&this->vtable46),
    (CCINIClass *)&stru_830620[76492],
    this->q0A0,
    0);
  INIClass::SetInt( /*0x6f15bf*/
    aP1->__pad_0,
    (INIClass *)(&this->vtable46),
    (CCINIClass *)&stru_830620[76472],
    this->q0C0,
    0);
  LOBYTE(v6) = this->q0A4; /*0x6f15c4*/
  INIClass::SetBool(aP1->__pad_0, (INIClass *)(&this->vtable46), &stru_830620[76460], v6); /*0x6f15d3*/
  LOBYTE(v7) = this->u8_A5; /*0x6f15d8*/
  INIClass::SetBool(aP1->__pad_0, (INIClass *)(&this->vtable46), &stru_830620[76452], v7); /*0x6f15e7*/
  LOBYTE(v8) = this->u8_A6; /*0x6f15ec*/
  INIClass::SetBool(aP1->__pad_0, (INIClass *)(&this->vtable46), &stru_830620[76440], v8); /*0x6f15fb*/
  LOBYTE(v9) = this->u8_A7; /*0x6f1600*/
  INIClass::SetBool(aP1->__pad_0, (INIClass *)(&this->vtable46), &stru_830620[76428], v9); /*0x6f160f*/
  INIClass::SetHouseName(aP1->__pad_0, (INIClass *)(&this->vtable46), aHouse, (INIClass *)v4); /*0x6f161d*/
  LOBYTE(v10) = this->q0A8; /*0x6f1622*/
  INIClass::SetBool(aP1->__pad_0, (INIClass *)(&this->vtable46), &stru_830620[76352], v10); /*0x6f1631*/
  LOBYTE(v11) = this->q0A9; /*0x6f1636*/
  INIClass::SetBool(aP1->__pad_0, (INIClass *)(&this->vtable46), &stru_830620[76416], v11); /*0x6f1645*/
  LOBYTE(v12) = this->q0AA; /*0x6f164a*/
  INIClass::SetBool(aP1->__pad_0, (INIClass *)(&this->vtable46), &stru_830620[76404], v12); /*0x6f1659*/
  LOBYTE(v13) = this->q0AB; /*0x6f165e*/
  INIClass::SetBool(aP1->__pad_0, (INIClass *)(&this->vtable46), &stru_830620[76392], v13); /*0x6f166d*/
  LOBYTE(v14) = this->TeamTypeClass_field_2C; /*0x6f1672*/
  INIClass::SetBool(aP1->__pad_0, (INIClass *)(&this->vtable46), &stru_830620[76384], v14); /*0x6f1681*/
  LOBYTE(v15) = this->u8_B1; /*0x6f1686*/
  INIClass::SetBool(aP1->__pad_0, (INIClass *)(&this->vtable46), &stru_830620[76364], v15); /*0x6f1695*/
  LOBYTE(v16) = this->q02B; /*0x6f169a*/
  INIClass::SetBool(aP1->__pad_0, (INIClass *)(&this->vtable46), &stru_830620[76344], v16); /*0x6f16a9*/
  LOBYTE(v17) = this->u8_AE; /*0x6f16ae*/
  INIClass::SetBool(aP1->__pad_0, (INIClass *)(&this->vtable46), &stru_830620[76320], v17); /*0x6f16bd*/
  LOBYTE(v18) = this->u8_AD; /*0x6f16c2*/
  INIClass::SetBool(aP1->__pad_0, (INIClass *)(&this->vtable46), &stru_830620[76308], v18); /*0x6f16d1*/
  LOBYTE(v19) = this->q0AF; /*0x6f16d6*/
  INIClass::SetBool(aP1->__pad_0, (INIClass *)(&this->vtable46), &stru_830620[76336], v19); /*0x6f16e5*/
  INIClass::SetInt( /*0x6f16fb*/
    aP1->__pad_0,
    (INIClass *)(&this->vtable46),
    (CCINIClass *)&stru_830620[76284],
    this->q0B4,
    0);
  INIClass::SetInt( /*0x6f1711*/
    aP1->__pad_0,
    (INIClass *)(&this->vtable46),
    (CCINIClass *)&stru_830620[76280],
    this->q0B8,
    0);
  INIClass::SetInt(aP1->__pad_0, (INIClass *)(&this->vtable46), aTechlevel, this->q0CC, 0); /*0x6f1727*/
  INIClass::SetInt( /*0x6f173d*/
    aP1->__pad_0,
    (INIClass *)(&this->vtable46),
    (CCINIClass *)&stru_830620[75684],
    this->q09C,
    0);
  LOBYTE(v20) = this->u8_B3; /*0x6f1742*/
  INIClass::SetBool(aP1->__pad_0, (INIClass *)(&this->vtable46), &stru_830620[76296], v20); /*0x6f1751*/
  LOBYTE(v21) = this->u8_F2; /*0x6f1756*/
  INIClass::SetBool(aP1->__pad_0, (INIClass *)(&this->vtable46), &stru_830620[76264], v21); /*0x6f1765*/
  LOBYTE(v22) = this->u8_F3; /*0x6f176a*/
  INIClass::SetBool(aP1->__pad_0, (INIClass *)(&this->vtable46), &stru_830620[76252], v22); /*0x6f1779*/
  LOBYTE(v23) = this->UINameLabel; /*0x6f177e*/
  INIClass::SetBool(aP1->__pad_0, (INIClass *)(&this->vtable46), &stru_830620[76200], v23); /*0x6f178d*/
  LOBYTE(v24) = this->u8_F5; /*0x6f1792*/
  INIClass::SetBool(aP1->__pad_0, (INIClass *)(&this->vtable46), &stru_830620[76172], v24); /*0x6f17a1*/
  LOBYTE(v25) = this->u8_F6; /*0x6f17a6*/
  INIClass::SetBool(aP1->__pad_0, (INIClass *)(&this->vtable46), &g_INI_Key_Height[68], v25); /*0x6f17b5*/
  LOBYTE(v26) = this->q0F7; /*0x6f17ba*/
  INIClass::SetBool(aP1->__pad_0, (INIClass *)(&this->vtable46), &stru_830620[76228], v26); /*0x6f17c9*/
  int v27 = this->q0D0; /*0x6f17ce*/
  if ( v27 ) /*0x6f17d6*/
    INIClass::SetString(aP1->__pad_0, (INIClass *)(&this->vtable46), (INIClass *)unk_81728C, (INIClass *)(v27 + 36)); /*0x6f17e4*/
  v28 = (INIClass *)Waypoint::To_String(this->q0D4); /*0x6f17ef*/
  INIClass::SetString(aP1->__pad_0, (INIClass *)(&this->vtable46), &stru_817244, v28); /*0x6f17fd*/
  v29 = (INIClass *)Waypoint::To_String(this->q0D8); /*0x6f1808*/
  INIClass::SetString(aP1->__pad_0, (INIClass *)(&this->vtable46), (INIClass *)&stru_830620[76152], v29); /*0x6f1816*/
  int v30 = this->q0E0; /*0x6f181b*/
  if ( v30 ) /*0x6f1823*/
    INIClass::SetString(aP1->__pad_0, (INIClass *)(&this->vtable46), &stru_817348, (INIClass *)(v30 + 36)); /*0x6f1831*/
  int v31 = this->q0E4; /*0x6f1836*/
  if ( v31 ) /*0x6f183e*/
    INIClass::SetString(aP1->__pad_0, v5, &stru_8172FC, (INIClass *)(v31 + 36)); /*0x6f184c*/
  return 1; /*0x6f1853*/
}
} // namespace gamemd
}

// 0x6F1870
namespace gamemd {
int TeamTypeClass::GetGroup()
{
{
  int result; // eax

  result = this->q09C; /*0x6f1870*/
  if ( result == -1 ) /*0x6f1879*/
  {
    int v2 = this->q0E4; /*0x6f1880*/
    if ( v2 ) /*0x6f1888*/
      return *(_DWORD *)(v2 + 152); /*0x6f188a*/
  }
  return result; /*0x6f1890*/
}
} // namespace gamemd
}

// 0x6F18E0
namespace gamemd {
unsigned int * TeamTypeClass::GetTransportWaypoint(unsigned int * a2)
{
{

  TeamTypeClass *v5 = this; /*0x6f18e0*/
  int v2 = this->q0D8; /*0x6f18e1*/
  if ( v2 == -1 ) /*0x6f18ea*/
  {
    *a2 = DataGlobal_B0E9C8; /*0x6f18f6*/
    return a2; /*0x6f18ec*/
  }
  else
  {
    int v4 = *ScenarioClass::Get_Waypoint_Location((char *)g_ScenarioClass_Instance, &v5, v2); /*0x6f190d*/
    *a2 = v4; /*0x6f1913*/
    return a2; /*0x6f190f*/
  }
}
} // namespace gamemd
}

// 0x6F1C80
namespace gamemd {
int TeamTypeClass::PowerDrainUpdate(int * a2)
{
{
  int result; // eax

  AbstractTypeClass::ProcessPower((char *)this, a2); /*0x6f1c89*/
  Power::TimerProcess(this->q09C); /*0x6f1c97*/
  int v3; // ecx
  LOBYTE(v3) = this->q0A8; /*0x6f1c9c*/
  Power::FlagProcess(a2, v3); /*0x6f1ca5*/
  int v4; // edx
  LOBYTE(v4) = this->q0A9; /*0x6f1caa*/
  int v5 = Power::FlagProcess(a2, v4); /*0x6f1cb3*/
  LOBYTE(v5) = this->q0AA; /*0x6f1cb8*/
  Power::FlagProcess(a2, v5); /*0x6f1cc1*/
  int v6; // ecx
  LOBYTE(v6) = this->q0AB; /*0x6f1cc6*/
  Power::FlagProcess(a2, v6); /*0x6f1ccf*/
  int v7; // edx
  LOBYTE(v7) = this->q02B; /*0x6f1cd4*/
  int v8 = Power::FlagProcess(a2, v7); /*0x6f1cdd*/
  LOBYTE(v8) = this->u8_AD; /*0x6f1ce2*/
  Power::FlagProcess(a2, v8); /*0x6f1ceb*/
  int v9; // ecx
  LOBYTE(v9) = this->u8_AE; /*0x6f1cf0*/
  Power::FlagProcess(a2, v9); /*0x6f1cf9*/
  int v10; // edx
  LOBYTE(v10) = this->q0AF; /*0x6f1cfe*/
  int v11 = Power::FlagProcess(a2, v10); /*0x6f1d07*/
  LOBYTE(v11) = this->TeamTypeClass_field_2C; /*0x6f1d0c*/
  Power::FlagProcess(a2, v11); /*0x6f1d15*/
  int v12; // ecx
  LOBYTE(v12) = this->u8_B1; /*0x6f1d1a*/
  Power::FlagProcess(a2, v12); /*0x6f1d23*/
  Power::TimerProcess(this->q0B4); /*0x6f1d31*/
  Power::TimerProcess(this->q0B8); /*0x6f1d3f*/
  Power::TimerProcess(this->q02F); /*0x6f1d4d*/
  int v13 = this->q0C4; /*0x6f1d52*/
  if ( v13 ) /*0x6f1d5a*/
  {
    int v14 = (*(int (__thiscall **)(int))(*(_DWORD *)v13 + 44))(v13); /*0x6f1d5e*/
    Power::TimerProcess(v14); /*0x6f1d64*/
  }
  int v15 = this->q0C4; /*0x6f1d69*/
  if ( v15 ) /*0x6f1d71*/
  {
    int v16 = (*(int (__stdcall **)(int))(*(_DWORD *)(v15 + 4) + 16))(v15 + 4); /*0x6f1d7a*/
    Power::TimerProcess(v16); /*0x6f1d80*/
  }
  Power::TimerProcess(this->q0CC); /*0x6f1d8e*/
  int v17 = this->q0D0; /*0x6f1d93*/
  if ( v17 ) /*0x6f1d9b*/
  {
    int v18 = (*(int (__stdcall **)(int))(*(_DWORD *)(v17 + 4) + 16))(v17 + 4); /*0x6f1da4*/
    Power::TimerProcess(v18); /*0x6f1daa*/
  }
  Power::TimerProcess(this->q0D4); /*0x6f1db8*/
  Power::TimerProcess(this->q0D8); /*0x6f1dc6*/
  Power::TimerProcess(this->q0DC); /*0x6f1dd4*/
  result = this->q0E0; /*0x6f1dd9*/
  if ( result ) /*0x6f1de1*/
  {
    int v20 = (*(int (__stdcall **)(int))(*(_DWORD *)(result + 4) + 16))(result + 4); /*0x6f1dea*/
    result = Power::TimerProcess(v20); /*0x6f1df0*/
  }
  int v21 = this->q0E4; /*0x6f1df5*/
  if ( v21 ) /*0x6f1dfd*/
  {
    int v22 = (*(int (__stdcall **)(int))(*(_DWORD *)(v21 + 4) + 16))(v21 + 4); /*0x6f1e06*/
    return Power::TimerProcess(v22); /*0x6f1e0c*/
  }
  return result; /*0x6f1e11*/
}
} // namespace gamemd
}

// 0x6F1FA0
namespace gamemd {
int TeamTypeClass::ProcessTaskForce()
{
{
  int result; // eax

  int v2 = 0; /*0x6f1fa7*/
  result = this->q0E4; /*0x6f1fa9*/
  this->q0F0 = 1; /*0x6f1faf*/
  this->u8_F1 = 0; /*0x6f1fb6*/
  this->q0EC = 9; /*0x6f1fbc*/
  if ( *(int *)(result + 156) > 0 ) /*0x6f1fcc*/
  {
    int v4 = 168; /*0x6f1fcf*/
    do /*0x6f201d*/
    {
      int v5 = *(_DWORD *)(result + v4); /*0x6f1fd4*/
      if ( *(_BYTE *)(v5 + 3278) ) /*0x6f1fd7*/
      {
        if ( *(_DWORD *)(v5 + 1504) ) /*0x6f1fdf*/
          this->u8_F1 = 1; /*0x6f1fef*/
        else
          this->q0F0 = 0; /*0x6f1fe7*/
      }
      this->q0EC = globalHelper_0889F0(*(_DWORD *)(v5 + 1460), this->q0EC); /*0x6f2007*/
      result = this->q0E4; /*0x6f200d*/
      ++v2; /*0x6f2013*/
      v4 += 8; /*0x6f2014*/
    }
    while ( v2 < *(_DWORD *)(result + 156) ); /*0x6f201d*/
  }
  if ( this->u8_F6 ) /*0x6f2020*/
    this->q0F0 = 0; /*0x6f2028*/
  return result; /*0x6f202e*/
}
} // namespace gamemd
}

// 0x6F20C0
namespace gamemd {
int TeamTypeClass::GetAuxField()
{
{
  return this->q098; /*0x6f20c6*/
}
} // namespace gamemd
}

// 0x6F20D0
namespace gamemd {
TeamTypeClass * TeamTypeClass::ddtor(char a2)
{
    TeamTypeClass* v7 = this;
    AbstractClass::AnnounceExpiredPointer(this, 1);
    int v2 = DataGlobal_A8ECA0.FindItemIndex(&v7);
    if ( v2 != -1 && v2 < DataGlobal_A8ECB0 && v2 < --DataGlobal_A8ECB0 )
    {
        do
        {
            ++v2;
            *(DataGlobal_A8ECA4 + v2 - 1) = *(DataGlobal_A8ECA4 + v2);
        }
        while ( v2 < DataGlobal_A8ECB0 );
    }
    int v3 = DataGlobal_B0F670.FindItemIndex(&v7);
    if ( v3 != -1 && v3 < DataGlobal_B0F680 && v3 < --DataGlobal_B0F680 )
    {
        do
        {
            ++v3;
            *(DataGlobal_B0F674 + v3 - 1) = *(DataGlobal_B0F674 + v3);
        }
        while ( v3 < DataGlobal_B0F680 );
    }
    AbstractTypeClass::Dtor(this);
    if ( a2 & 1 )
        OperatorDelete(this);
    return this;
}
}
} // namespace gamemd

// 0x6F22F0
namespace gamemd {
AbstractClass * * TeamTypeClass_28::Release(int a2, int * a3)
{
{

  if ( a2 ) /*0x6f22fc*/
  {
  _DWORD *v6; // edi
    int * v4 = a3; /*0x6f2302*/
    this->q00C = 0; /*0x6f2306*/
    if ( a3 ) /*0x6f230c*/
    {
      *a3 = a2; /*0x6f2347*/
      v6 = a3 + 1; /*0x6f234b*/
      if ( a2 - 1 >= 0 ) /*0x6f234e*/
      {
        _DWORD * v9 = a3 + 2; /*0x6f2350*/
        int v10 = a2; /*0x6f2353*/
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
      int * v5 = (int *)__2_YAPAXI_Z(8 * a2 + 4); /*0x6f2316*/
      if ( v5 ) /*0x6f2320*/
      {
        *v5 = a2; /*0x6f2325*/
        v6 = v5 + 1; /*0x6f2329*/
        if ( a2 - 1 >= 0 ) /*0x6f232c*/
        {
          _DWORD * v7 = v5 + 2; /*0x6f232e*/
          int v8 = a2; /*0x6f2331*/
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
    this->q00C = 1; /*0x6f2362*/
    if ( v6 ) /*0x6f2366*/
    {
      if ( this->TeamTypeClass_28_field_0x4 ) /*0x6f2371*/
      {
        int v12 = this->TeamTypeClass_28_field_0x8; /*0x6f2378*/
        if ( a2 < v12 ) /*0x6f237d*/
          v12 = a2; /*0x6f237f*/
        int v13 = 0; /*0x6f2381*/
        if ( v12 > 0 ) /*0x6f2385*/
        {
          do /*0x6f239d*/
          {
            int v14 = this->TeamTypeClass_28_field_0x4; /*0x6f2387*/
            ++v13; /*0x6f238a*/
            v6[2 * v13 - 2] = *(_DWORD *)(v14 + 8 * v13 - 8); /*0x6f2391*/
            v6[2 * v13 - 1] = *(_DWORD *)(v14 + 8 * v13 - 4); /*0x6f2399*/
          }
          while ( v13 < v12 ); /*0x6f239d*/
          v4 = a3; /*0x6f239f*/
        }
        if ( this->IsAllocated ) /*0x6f23a3*/
        {
          int v15 = this->TeamTypeClass_28_field_0x4; /*0x6f23aa*/
          if ( v15 ) /*0x6f23af*/
            __3_YAXPAX_Z((void *)(v15 - 4)); /*0x6f23b9*/
          this->TeamTypeClass_28_field_0x4 = 0; /*0x6f23c1*/
        }
      }
      this->TeamTypeClass_28_field_0x4 = v6; /*0x6f23ca*/
      this->TeamTypeClass_28_field_0x8 = a2; /*0x6f23d2*/
      this->IsAllocated = v4 == 0; /*0x6f23d5*/
      return 1; /*0x6f23db*/
    }
    else
    {
      return 0; /*0x6f236b*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->q00C)(this); /*0x6f23e5*/
    return 1; /*0x6f23eb*/
  }
}
} // namespace gamemd
}

// 0x6F24B0
namespace gamemd {
AbstractClass * * TeamTypeClass_28::SetCapacity(int a2, int * a3)
{
{

  if ( a2 ) /*0x6f24bc*/
  {
  AbstractClass *v6; // edi
    int * v4 = a3; /*0x6f24c2*/
    this->q00C = 0; /*0x6f24c6*/
    if ( a3 ) /*0x6f24cc*/
    {
      *a3 = a2; /*0x6f2507*/
      v6 = a3 + 1; /*0x6f250c*/
      if ( a2 - 1 >= 0 ) /*0x6f250f*/
      {
        _DWORD * v9 = a3 + 2; /*0x6f2511*/
        int v10 = a2; /*0x6f2514*/
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
      int * v5 = (int *)__2_YAPAXI_Z(8 * a2 + 4); /*0x6f24d6*/
      if ( v5 ) /*0x6f24e0*/
      {
        *v5 = a2; /*0x6f24e5*/
        v6 = v5 + 1; /*0x6f24e9*/
        if ( a2 - 1 >= 0 ) /*0x6f24ec*/
        {
          _DWORD * v7 = v5 + 2; /*0x6f24ee*/
          int v8 = a2; /*0x6f24f1*/
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
    this->q00C = 1; /*0x6f2523*/
    if ( !v6 ) /*0x6f2527*/
      return 0; /*0x6f25c7*/
    if ( this->TeamTypeClass_28_field_0x4 ) /*0x6f252d*/
    {
      AbstractClass *v11 = this->TeamTypeClass_28_field_0x8; /*0x6f2534*/
      if ( a2 < v11 ) /*0x6f2539*/
        v11 = a2; /*0x6f253b*/
      int v12 = 0; /*0x6f253d*/
      if ( v11 > 0 ) /*0x6f2541*/
      {
        do /*0x6f2559*/
        {
          AbstractClass *v13 = this->TeamTypeClass_28_field_0x4; /*0x6f2543*/
          ++v12; /*0x6f2546*/
          v6[2 * v12 - 2] = *(_DWORD *)(v13 + 8 * v12 - 8); /*0x6f254d*/
          v6[2 * v12 - 1] = *(_DWORD *)(v13 + 8 * v12 - 4); /*0x6f2555*/
        }
        while ( v12 < v11 ); /*0x6f2559*/
        v4 = a3; /*0x6f255b*/
      }
      if ( this->IsAllocated ) /*0x6f255f*/
      {
        AbstractClass *v14 = this->TeamTypeClass_28_field_0x4; /*0x6f2566*/
        if ( v14 ) /*0x6f256b*/
        {
          void * v15 = (void *)(v14 - 4); /*0x6f2570*/
          Array::ForEachReverse(v14, 8, *(_DWORD *)(v14 - 4), (int (__thiscall *)(int))nullsub_240); /*0x6f257c*/
          __3_YAXPAX_Z(v15); /*0x6f2582*/
          v4 = a3; /*0x6f2587*/
        }
        this->TeamTypeClass_28_field_0x4 = 0; /*0x6f258e*/
      }
    }
    this->TeamTypeClass_28_field_0x4 = v6; /*0x6f2597*/
    this->TeamTypeClass_28_field_0x8 = a2; /*0x6f259f*/
    this->IsAllocated = v4 == 0; /*0x6f25a2*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->q00C)(this); /*0x6f25ab*/
  }
  AbstractClass *v16 = this->TeamTypeClass_28_field_0x8; /*0x6f25ae*/
  if ( v16 < this->TeamTypeClass_28_field_0x10 ) /*0x6f25b6*/
    this->TeamTypeClass_28_field_0x10 = v16; /*0x6f25b8*/
  return 1; /*0x6f25bb*/
}
} // namespace gamemd
}

// 0x6F0FC0
namespace gamemd {
int TeamTypeClass::FindByName()
{
{
    int v2;
    if ( !this )
    return 0;
    v2 = 0;
    if ( *(int *)&HouseClass_Player[44900] <= 0 )
    return 0;
    while ( _strcmpi(this, (const void *)(*(int *)(*(int *)&HouseClass_Player[44888] + 4 * v2) + 36)) && _strcmpi(this, (const void *)(*(int *)(*(int *)&HouseClass_Player[44888] + 4 * v2) + 100)) )
  {
    if ( ++v2 >= *(int *)&HouseClass_Player[44900] )
    return 0;
  }
    return *(int *)(*(int *)&HouseClass_Player[44888] + 4 * v2);
}
}
} // namespace gamemd

// 0x6F1AB0
namespace gamemd {
TeamTypeClass * TeamTypeClass::ReadScriptData(char * a1, int a2)
{
{
    CCINIClass *KeyCount;
    CCINIClass *i;
    unsigned char *StringByIndex;
    TeamTypeClass *result;
    INIClass *v8;
    int j;
    ObjectClass *v10;
    char Buffer[32];
    KeyCount = (CCINIClass *)INIClass::GetKeyCount(a1, (INIClass *)&DataGlobal_830620[76508]);
    for ( i = 0; (int)i < (int)KeyCount; i = (CCINIClass *)((char *)(i) + 1) )
  {
    StringByIndex = (unsigned char *)INIClass::GetStringByIndex(a1, (CCINIClass *)&DataGlobal_830620[76508], i);
    INIClass::GetString( (unsigned char ***)a1, (INIClass *)&DataGlobal_830620[76508], StringByIndex, (INIClass *)&DataGlobal_87F8E4[42624], (INIClass *)Buffer, 32);
    INIClass::ClearSection((int)a1, (INIClass *)Buffer, 0);
  }
    INIClass::ClearSection((int)a1, (INIClass *)&DataGlobal_830620[76508], 0);
    result = *(TeamTypeClass **)&g_NetworkPlayerBuffer[5748];
    v8 = 0;
    for ( j = 0; j < *(int *)&g_NetworkPlayerBuffer[5748]; ++j )
  {
    if ( *(int *)(*(int *)(*(int *)&g_NetworkPlayerBuffer[5736] + 4 * j) + 232) == a2 )
    {
    v10 = (ObjectClass *)v8;
    v8 = (INIClass *)((char *)(v8) + 1);
    sprintf(Buffer, g_Str_Trace__d, v10);
    INIClass::SetString( a1, (INIClass *)&DataGlobal_830620[76508], (INIClass *)Buffer, (INIClass *)(*(int *)(*(int *)&g_NetworkPlayerBuffer[5736] + 4 * j) + 36));
    (*(void (__thiscall **)(int, char *))(**(int **)(*(int *)&g_NetworkPlayerBuffer[5736] + 4 * j) + 104))( *(int *)(*(int *)&g_NetworkPlayerBuffer[5736] + 4 * j), a1);
    }
    result = *(TeamTypeClass **)&g_NetworkPlayerBuffer[5748];
  }
    return result;
}
}
} // namespace gamemd

// 0x6F1B90
namespace gamemd {
int TeamTypeClass::SaveToINI(TechnoTypeClass * aP0, int * a1, int aP2)
{
{
    int result;
    result = AbstractClass::SaveLoad_Prefix((ObjectTypeClass *)aP0, (ObjectTypeClass *)a1, (ObjectTypeClass *)aP2);
    if ( result >= 0 )
    return 0;
    return result;
}
}
} // namespace gamemd

// 0x6F1BB0
namespace gamemd {
int TeamTypeClass::LoadTypeData(AbstractTypeClass * aP0, int aP1)
{
{
    int result;
    result = AbstractClass::SaveLoad_Prefix_0((AbstractClass *)aP0, (AbstractClass *)aP1);
    if ( result >= 0 )
  {
    if ( aP0 )
    {
    AbstractTypeClass::Init((int)aP0, (AbstractTypeClass *)&aP1);
    *(int *)aP0->__pad_0 = (unsigned int)vt_TeamTypeClass;
    *(int *)&aP0->__pad_0[4] = (unsigned int)vt_TeamTypeClass;
    *(int *)&aP0->__pad_0[8] = (unsigned int)vt_TeamTypeClass;
    *(int *)&aP0->__pad_0[12] = &vt_TeamTypeClass;
    }
    ObjectPtr::RegisterForTracking( (SwizzleManagerClass *)&DataGlobal_B05488[27784], (MouseClass *)&aP0[1].__pad_24[8]);
    ObjectPtr::RegisterForTracking( (SwizzleManagerClass *)&DataGlobal_B05488[27784], (MouseClass *)&aP0[1].__pad_24[20]);
    ObjectPtr::RegisterForTracking( (SwizzleManagerClass *)&DataGlobal_B05488[27784], (MouseClass *)&aP0[1].UINameLabel[11]);
    ObjectPtr::RegisterForTracking( (SwizzleManagerClass *)&DataGlobal_B05488[27784], (MouseClass *)&aP0[1].UINameLabel[15]);
    return 0;
  }
    return result;
}
}
} // namespace gamemd

// 0x6F1C40
namespace gamemd {
int TeamTypeClass::GetClassIdentifier(int a1, unsigned int * a2)
{
  if ( !a2 )
    return -2147467261;
  *a2 = -774134194;
  a2[1] = 298977144;
  a2[2] = 1610655148;
  a2[3] = -1252326136;
  return 0;
}
} // namespace gamemd

// 0x6F1F30
namespace gamemd {
int TeamTypeClass::FlashAllInstances(AnimClass * aP1)
{
{
    int result;
    int i;
    int v5;
    result = *(int *)&g_CellDirectionOffsets[84584];
    for ( i = 0; i < *(int *)&g_CellDirectionOffsets[84584]; ++i )
  {
    v5 = *(int *)(*(int *)&g_CellDirectionOffsets[84572] + 4 * i);
    if ( *(void **)(v5 + 36) == this )
    TeamTypeClass::Check((int *)v5, (int)aP1);
    result = *(int *)&g_CellDirectionOffsets[84584];
  }
    return result;
}
}
} // namespace gamemd

// 0x6F1F70
namespace gamemd {
int TeamTypeClass::FindFirstInstance()
{
{
    int v1;
    char *i;
    int result;
    v1 = 0;
    if ( g_HouseClass_AIProductionState <= 0 )
    return 0;
    for ( i = (char *)g_TeamClassPool; ; i += 4 )
  {
    result = *(int *)i;
    if ( *(void **)(*(int *)(i) + 36) == this )
    break;
    if ( ++v1 >= g_HouseClass_AIProductionState )
    return 0;
  }
    return result;
}
}
} // namespace gamemd

// 0x6F20A0
namespace gamemd {
int TeamTypeClass::GetTypeIdentifier()
{
return 35;
}
} // namespace gamemd

// 0x6F20B0
namespace gamemd {
int TeamTypeClass::GetObjectSize()
{
return 248;
}
} // namespace gamemd

// 0x6F21B0
namespace gamemd {
void TeamTypeClass_28::ClearBuffer()
{
{
    int v2;
    v2 = this->TeamTypeClass_28_field_0x4;
    this->TeamTypeClass_28_field_0x10 = 0;
    if ( v2 && this->IsAllocated )
  {
    __3_YAXPAX_Z((void *)(v2 - 4));
    this->TeamTypeClass_28_field_0x4 = 0;
  }
    this->IsAllocated = 0;
    this->TeamTypeClass_28_field_0x8 = 0;
}
}
} // namespace gamemd

// 0x6F21F0
namespace gamemd {
unsigned int TeamTypeClass_28::PointerToIndex(int a2)
{
{
    if ( (unsigned char)this->TeamTypeClass_28_field_0xC )
    return (unsigned int)(a2 - this->TeamTypeClass_28_field_0x4) >> 3;
    else
    return 0;
}
}
} // namespace gamemd

// 0x6F2210
namespace gamemd {
unsigned int * TeamTypeClass_28::Seek(unsigned int * a2, int a3)
{
{
    int v3;
    int v4;
    int v5;
    v3 = this->Items;
    v4 = *(int *)(v3 + 8 * a3);
    v5 = v3 + 8 * a3;
    *a2 = v4;
    *((int*)(a2) + 1) = *(int *)(v5 + 4);
    return a2;
}
}
} // namespace gamemd

// 0x6F2290
namespace gamemd {
char TeamTypeClass_28::AddRef(int a2)
{
{
    int v2;
    int v3;
    int v4;
    int *v5;
    int *v6;
    int v7;
    v2 = this->Capacity;
    if ( v2 == *(int *)(a2 + 8) )
  {
    v3 = 0;
    if ( v2 <= 0 )
    return 1;
    v4 = *(int *)(a2 + 4);
    v5 = (int *)this->Items;
    v6 = (int *)(v4 + 4);
    v7 = v4 - (int)v5;
    while ( *v5 == *(int *)((char *)(v5) + v7) && v5[1] == *v6 )
    {
    ++v3;
    v6 += 2;
    v5 += 2;
    if ( v3 >= v2 )
    return 1;
    }
  }
    return 0;
}
}
} // namespace gamemd

// 0x6F2400
namespace gamemd {
void TeamTypeClass_28::ddtor()
{
{
    int v2;
    v2 = this->TeamTypeClass_28_field_0x4;
    if ( v2 && this->IsAllocated )
  {
    __3_YAXPAX_Z((void *)(v2 - 4));
    this->TeamTypeClass_28_field_0x4 = 0;
  }
    this->IsAllocated = 0;
    this->TeamTypeClass_28_field_0x8 = 0;
}
}
} // namespace gamemd

// 0x6F2440
namespace gamemd {
int TeamTypeClass_28::Read(unsigned int * a2)
{
{
    int result;
    int v3;
    int *i;
    if ( !(unsigned char)this->TeamTypeClass_28_field_0xC )
    return 0;
    v3 = this->TeamTypeClass_28_field_0x8;
    result = 0;
    if ( v3 <= 0 )
    return -1;
    for ( i = *(int **)(this + 4); *i != *a2 || i[1] != *((int*)(a2) + 1); i += 2 )
  {
    if ( ++result >= v3 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x6F2490
namespace gamemd {
unsigned int TeamTypeClass_28::Write(int a2)
{
{
    if ( (unsigned char)this->TeamTypeClass_28_field_0xC )
    return (unsigned int)(a2 - this->TeamTypeClass_28_field_0x4) >> 3;
    else
    return 0;
}
}
} // namespace gamemd

// 0x6F2640
namespace gamemd {
int TeamTypeClass_28::FindItem(unsigned int * a2)
{
{
    int v2;
    int result;
    int *i;
    v2 = this->Count;
    result = 0;
    if ( v2 <= 0 )
    return -1;
    for ( i = (int *)this->Items; *i != *a2 || i[1] != *((int*)(a2) + 1); i += 2 )
  {
    if ( ++result >= v2 )
    return -1;
  }
    return result;
}
} // namespace gamemd

}
// 0x6F2680
namespace gamemd {
VectorClass * TeamTypeClass_28::QueryInterface(char a2)
{
{
    int v3;
    v3 = this->Items;
    *(void**)this = &vt_VectorClass_DiscreteDistributionClass_AITriggerTypeClass_DistributionObject_AITriggerTypeClass;
    if ( v3 && this->IsAllocated )
  {
    __3_YAXPAX_Z((void *)(v3 - 4));
    this->Items = 0;
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (VectorClass *)this;
}
}
} // namespace gamemd

// 0x6F2720
namespace gamemd {
DynamicVector * TeamTypeClass_28::Constructor(char a2)
{
{
    int v3;
    v3 = this->Items;
    *(void**)this = &vt_VectorClass_DiscreteDistributionClass_AITriggerTypeClass_DistributionObject_AITriggerTypeClass;
    if ( v3 && this->IsAllocated )
  {
    __3_YAXPAX_Z((void *)(v3 - 4));
    this->Items = 0;
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (DynamicVector *)this;
}
}
} // namespace gamemd
