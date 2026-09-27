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

// 0x4C98B0
namespace gamemd {
int TeamTypeClass::Construct()
{
  TeamTypeClass * v3;
  TeamTypeClass * v5;
  int v7; // [esp+Ch] [ebp-8h]

  AbstractClass::Constructor(); /*0x4c98b7*/
  this->TeamTypeClass_field_24 = 0; /*0x4c98be*/
  this->TeamTypeClass_field_28 = 0; /*0x4c98c1*/
  g_CurrentFrame = g_CurrentFrame; /*0x4c98c4*/
  this->TeamTypeClass_field_34 = 0; /*0x4c98c9*/
  this->TeamTypeClass_field_2C = g_CurrentFrame; /*0x4c98cc*/
  this->TeamTypeClass_field_38 = 0; /*0x4c98d4*/
  this->TeamTypeClass_field_3C = 1; /*0x4c98d7*/
  this->taskForceCount = 0; /*0x4c98da*/
  this->taskForceCapacity = 0; /*0x4c98dd*/
  this->q04C = 1; /*0x4c98e0*/
  this->u8_4D = 0; /*0x4c98e3*/
  this->q054 = 10; /*0x4c98ed*/
  this->q050 = 0; /*0x4c98f4*/
  this->TeamTypeClass_field_71 = 1; /*0x4c98f7*/
  this->TeamTypeClass_field_58 = 0; /*0x4c98fd*/
  this->TeamTypeClass_field_5C = 0; /*0x4c9901*/
  this->TeamTypeClass_field_5D = 0; /*0x4c9904*/
  this->u32_60 = 0; /*0x4c9907*/
  this->TeamTypeClass_field_64 = 0; /*0x4c990a*/
  this->TeamTypeClass_field_68 = -1; /*0x4c990d*/
  this->TeamTypeClass_field_6C = 0; /*0x4c9914*/
  this->TeamTypeClass_field_70 = 0; /*0x4c9917*/
  this->vtable2.GenerateUniqueID(); /*0x4c9934*/
  if ( g_TeamTypeCapacity < dword_A83E38 /*0x4c996d*/
    || (byte_A83E3D || !dword_A83E38)
    && dword_A83E44 > 0
    && (*(uint8_t (__thiscall **)(int *, int, unsigned int))(dword_A83E30 + 8))(
         &dword_A83E30,
         dword_A83E38 + dword_A83E44,
         0) )
  {
    v3 = (gamemd::TeamTypeClass *)(g_TeamTypeCapacity++);
    *((unsigned int *)g_TeamTypeCount + v3) = this; /*0x4c9989*/
  }
  g_CurrentFrame = g_CurrentFrame; /*0x4c998c*/
  this->TeamTypeClass_field_38 = 0; /*0x4c9996*/
  this->TeamTypeClass_field_2C = g_CurrentFrame; /*0x4c9999*/
  this->TeamTypeClass_field_30 = v7; /*0x4c999f*/
  this->TeamTypeClass_field_34 = 0; /*0x4c99a2*/
  this->TeamTypeClass_field_24 = 0; /*0x4c99a5*/
  if ( g_AlphaShapePool < dword_B0F728 /*0x4c99dc*/
    || (byte_B0F72D || !dword_B0F728)
    && dword_B0F734 > 0
    && (*(uint8_t (__thiscall **)(int *, int, unsigned int))(AbstractClass_Array + 8))(
         &AbstractClass_Array,
         dword_B0F728 + dword_B0F734,
         0) )
  {
    v5 = (gamemd::TeamTypeClass *)(g_AlphaShapePool++);
    *((unsigned int *)dword_B0F724 + v5) = this; /*0x4c99f8*/
  }
  return (int)(this);
}
}
// 0x691C00
namespace gamemd {
void * TeamTypeClass::CreateScriptType()
{
  int v2; // esi
  unsigned int *v3; // eax
  void** v4;
  int v5; // ecx
  char v6; // al
  int v7; // eax
  unsigned int v8;

  if ( !_strcmpi(g_Str__none_, Source) || !_strcmpi(g_Str_none, Source) ) /*0x691c20*/
    return 0; /*0x691c2a*/
  v2 = 0; /*0x691c35*/
  if ( g_MultiplayerDebugState <= 0 ) /*0x691c39*/
  {
  LABEL_6: v3 = (void **)(operator new(0x234u));
    v4 = v3; /*0x691c6c*/
    if ( v3 ) /*0x691c73*/
    {
      AbstractTypeClass::Constructor((int)v3, Source); /*0x691c7c*/
      v4[39] = 0; /*0x691c81*/
      v4[40] = 0; /*0x691c8b*/
      v5 = g_MultiplayerDebugState; /*0x691cb0*/
      if ( g_MultiplayerDebugState < dword_8B41D0 /*0x691cf1*/
        || (byte_8B41D5 || !dword_8B41D0)
        && dword_8B41DC > 0
        && (v6 = (*(int (__thiscall **)(int *, int, unsigned int))(dword_8B41C8 + 8))(
                   &dword_8B41C8,
                   dword_8B41D0 + dword_8B41DC,
                   0),
            v5 = g_MultiplayerDebugState,
            v6) )
      {
        g_MultiplayerDebugState = (unsigned int)(v5 + 1);
        *((unsigned int *)g_MultiplayerSyncState + v5) = v4; /*0x691d02*/
        v5 = g_MultiplayerDebugState; /*0x691d05*/
      }
      v7 = 0; /*0x691d0b*/
      if ( v5 <= 0 ) /*0x691d0f*/
      {
  LABEL_17:
        v7 = -1; /*0x691d23*/
      }
      else
      {
        v8 = g_MultiplayerSyncState; /*0x691d11*/
        while ( (unsigned int *)*v8 != v4 ) /*0x691d19*/
        {
          ++v7; /*0x691d1b*/
          ++v8; /*0x691d1c*/
          if ( v7 >= v5 ) /*0x691d21*/
            goto LABEL_17; /*0x691d21*/
        }
      }
      v4[38] = (void *)(v7);
      return v4; /*0x691d30*/
    }
    return 0; /*0x691d3e*/
  }
  while ( _strcmpi((const void *)(*((unsigned int *)g_MultiplayerSyncState + v2) + 36), Source) ) /*0x691c52*/
  {
    if ( ++v2 >= g_MultiplayerDebugState ) /*0x691c60*/
      goto LABEL_6; /*0x691c60*/
  }
  return (unsigned int *)*((unsigned int *)g_MultiplayerSyncState + v2); /*0x691d2e*/
}
}
// 0x6E85F0
namespace gamemd {
AbstractClass * * TeamTypeClass::FindOrCreateTaskForce()
{
  int v2; // esi
  unsigned int *v3; // eax

  if ( !_strcmpi(g_Str__none_, Source) || !_strcmpi(g_Str_none, Source) ) /*0x6e860c*/
    return 0; /*0x6e866f*/
  v2 = 0; /*0x6e861d*/
  if ( g_MultiplayerLogFlags <= 0 ) /*0x6e8621*/
  {
  LABEL_6: v3 = (unsigned int *)(operator new(0xD4u));
    if ( v3 ) /*0x6e8655*/
      return TaskForceClass::Construct(v3, Source); /*0x6e8661*/
    return 0; /*0x6e8655*/
  }
  while ( _strcmpi((const void *)(*((unsigned int *)g_MultiplayerLogEntry + v2) + 36), Source) ) /*0x6e863a*/
  {
    if ( ++v2 >= g_MultiplayerLogFlags ) /*0x6e8644*/
      goto LABEL_6; /*0x6e8644*/
  }
  return (gamemd::AbstractClass **)((unsigned int *)*((unsigned int *)g_MultiplayerLogEntry + v2));
}
}
// 0x6EF5F0
namespace gamemd {
int TeamTypeClass::Check(int a2)
{
  int result; // eax

  for ( result = this->q054; result; result = *(unsigned int *)(result + 1496) ) /*0x6ef5f5*/
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

  result = g_HouseClass_AIProductionState; /*0x6f0a70*/
  for ( i = 0; i < g_HouseClass_AIProductionState; ++i ) /*0x6f0a7d*/
  {
    v4 = (unsigned int *)*((unsigned int *)g_TeamClassPool + i); /*0x6f0a84*/
    if ( this == (void *)v4[9] ) /*0x6f0a8a*/
    {
      if ( v4 ) /*0x6f0a8e*/
        (*(void (__thiscall **)(unsigned int *, int))(*v4 + 32))(v4, 1); /*0x6f0a94*/
      --i; /*0x6f0a97*/
    }
    result = g_HouseClass_AIProductionState; /*0x6f0a98*/
  }
  return result; /*0x6f0aa2*/
}
}
// 0x6F1030
namespace gamemd {
int TeamTypeClass::GetTeam(int a2, int a3)
{
  int v4; // ecx

  a2 = a2; /*0x6f1030*/
  if ( *(&this->abstractFlags2) == a2 ) /*0x6f103f*/
    *(&this->abstractFlags2) = 0; /*0x6f1041*/
  if ( *(&this->uniqueId9) == a2 ) /*0x6f104d*/
    *(&this->uniqueId9) = 0; /*0x6f104f*/
  if ( *(&this->abstractFlags7) == a2 ) /*0x6f105b*/
    *(&this->abstractFlags7) = 0; /*0x6f105d*/
  if ( *(&this->abstractFlags6) == a2 ) /*0x6f1069*/
    *(&this->abstractFlags6) = 0; /*0x6f106b*/
  v4 = *(&this->abstractFlags6); /*0x6f1071*/
  if ( v4 ) /*0x6f1079*/
    return (*(int (__thiscall **)(int, int, int))(*(unsigned int *)v4 + 40))(v4, a2, a3); /*0x6f1083*/
}
}
// 0x6F1090
namespace gamemd {
AbstractClass * * TeamTypeClass::LoadFromINI(unsigned char *** aP1)
{
  void * v3;
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
  void * v14;
  char v15; // al
  char v16; // al
  void * v17;
  char v18; // al
  char v19; // al
  char v20; // cl
  char v21; // al
  int v22; // eax
  AbstractClass * v23;
  int v24; // eax
  int v25; // eax
  void * v26;
  int v27; // eax
  int v28; // ecx
  int v29; // eax
  char v30; // al
  char v31; // cl
  char v32; // al
  char v33; // al
  char v34; // cl
  char v35; // al
  int v36; // ecx
  char *v37; // eax
  char *v38; // eax
  int v39; // ebp
  int v40; // eax
  int v41; // ebp
  int v42; // eax
  AbstractClass * v44;
  char v45; // [esp-Ch] [ebp-D4h]
  char v46; // [esp-Ch] [ebp-D4h]
  char v47; // [esp-Ch] [ebp-D4h]
  char v48; // [esp-Ch] [ebp-D4h]
  char v49; // [esp-Ch] [ebp-D4h]
  int v50; // [esp-Ch] [ebp-D4h]
  char v51; // [esp-Ch] [ebp-D4h]
  char v52; // [esp-Ch] [ebp-D4h]
  char v53[64]; // [esp+8h] [ebp-C0h] BYREF
  char Destination[128]; // [esp+48h] [ebp-80h] BYREF

  INIClass::ResetSection(aP1); /*0x6f10a3*/
  if ( !AbstractTypeClass::LoadFromINI(this, aP1) ) /*0x6f10b2*/
    return 0; /*0x6f10b2*/
  v3 = this->q0C4; /*0x6f10b8*/
  v4 = -1; /*0x6f10be*/
  if ( v3 ) /*0x6f10c3*/
    v4 = *(unsigned int *)(v3->q034 + 184); /*0x6f10c8*/
  v5 = (void *)SuperWeaponTypeClass::FindOrCreate(aP1, (uint8_t *)(&this->vtable46), (uint8_t *)aHouse, v4); /*0x6f10e1*/
  if ( BuildingType::IsSpecialType(v5) ) /*0x6f10e5*/
  {
    this->q0C8 = (unsigned int)(v5);
    this->q0C4 = 0; /*0x6f10f4*/
  }
  else if ( v5 != (void *)-1 ) /*0x6f1103*/
  {
    this->q0C4 = HouseClass::FindOwner(v5); /*0x6f110c*/
    this->q0C8 = -1; /*0x6f1112*/
  }
  Int_Overwrite = (void *)(INIClass::ReadInt_Overwrite(&this->q090, aVeteranlevel, this->q0A0));
  v44 = this->q0C0; /*0x6f1138*/
  this->q0A0 = Int_Overwrite; /*0x6f113f*/
  this->q0C0 = INIClass::ReadInt_Overwrite(&this->q090, aMindcontroldec, v44); /*0x6f114a*/
  Bool_Overwrite = INIClass::ReadBool_Overwrite(&this->q090, aLoadable, this->q0A4); /*0x6f115f*/
  v8 = this->u8_A5; /*0x6f1164*/
  this->q0A4 = (void *)(Bool_Overwrite);
  v9 = INIClass::ReadBool_Overwrite(&this->q090, aFull, v8); /*0x6f1179*/
  v45 = this->u8_A6; /*0x6f1186*/
  this->u8_A5 = v9; /*0x6f118d*/
  this->u8_A6 = INIClass::ReadBool_Overwrite(&this->q090, aAnnoyance, v45); /*0x6f1198*/
  v10 = INIClass::ReadBool_Overwrite(&this->q090, aGuardslower, this->u8_A7); /*0x6f11ad*/
  v11 = this->q0A9; /*0x6f11b2*/
  this->u8_A7 = v10; /*0x6f11b8*/
  v12 = INIClass::ReadBool_Overwrite(&this->q090, aAutocreate, v11); /*0x6f11c7*/
  v46 = this->q0AA; /*0x6f11d4*/
  this->q0A9 = v12; /*0x6f11db*/
  this->q0AA = INIClass::ReadBool_Overwrite(&this->q090, aPrebuild, v46); /*0x6f11e6*/
  v13 = INIClass::ReadBool_Overwrite(&this->q090, aReinforce, this->q0AB); /*0x6f11fb*/
  v14 = this->q0B0; /*0x6f1200*/
  this->q0AB = v13; /*0x6f1206*/
  v15 = INIClass::ReadBool_Overwrite(&this->q090, aDroppod_0, v14); /*0x6f1215*/
  v47 = this->u8_B1; /*0x6f1222*/
  this->q0B0 = v15; /*0x6f1229*/
  this->u8_B1 = INIClass::ReadBool_Overwrite(&this->q090, aUsetransportor, v47); /*0x6f1234*/
  v16 = INIClass::ReadBool_Overwrite(&this->q090, aRecruiter, this->q0A8); /*0x6f1249*/
  v17 = this->q0AC; /*0x6f124e*/
  this->q0A8 = v16; /*0x6f1254*/
  v18 = INIClass::ReadBool_Overwrite(&this->q090, aWhiner, v17); /*0x6f1263*/
  v48 = this->q0AF; /*0x6f1270*/
  this->q0AC = v18; /*0x6f1277*/
  this->q0AF = INIClass::ReadBool_Overwrite(&this->q090, g_INI_Key_Suicide, v48); /*0x6f1282*/
  v19 = INIClass::ReadBool_Overwrite(&this->q090, aLooserecruit, this->u8_AE); /*0x6f1297*/
  v20 = this->u8_AD; /*0x6f129c*/
  this->u8_AE = v19; /*0x6f12a2*/
  v21 = INIClass::ReadBool_Overwrite(&this->q090, aAggressive, v20); /*0x6f12b1*/
  v49 = this->u8_B3; /*0x6f12be*/
  this->u8_AD = v21; /*0x6f12c5*/
  this->u8_B3 = INIClass::ReadBool_Overwrite(&this->q090, aOntransonly, v49); /*0x6f12d0*/
  v22 = INIClass::ReadInt_Overwrite(&this->q090, g_INI_Key_Priority, this->q0B4); /*0x6f12e5*/
  v23 = this->q0B8; /*0x6f12ea*/
  this->q0B4 = v22; /*0x6f12f0*/
  v24 = INIClass::ReadInt_Overwrite(&this->q090, aMax, v23); /*0x6f12ff*/
  v50 = this->q0CC; /*0x6f130c*/
  this->q0B8 = v24; /*0x6f1313*/
  v25 = INIClass::ReadInt_Overwrite(&this->q090, g_INI_Key_TechLevel, v50); /*0x6f1319*/
  v26 = this->q0D0; /*0x6f131e*/
  this->q0CC = v25; /*0x6f1324*/
  if ( INIClass::GetString( /*0x6f1341*/
         aP1,
         (uint8_t *)(&this->vtable46),
         (uint8_t *)off_81728C,
         &g_INI_DefaultBuffer,
         Destination,
         128) )
  {
    v27 = TagTypeClass::FindOrCreate(Destination); /*0x6f134e*/
  }
  else
  {
    v27 = v26; /*0x6f1355*/
  }
  v28 = this->q09C; /*0x6f1357*/
  this->q0D0 = v27; /*0x6f135d*/
  v29 = INIClass::ReadInt_Overwrite(&this->q090, g_INI_Key_Group, v28); /*0x6f136c*/
  v51 = this->u8_F2; /*0x6f1379*/
  this->q09C = v29; /*0x6f1380*/
  this->u8_F2 = INIClass::ReadBool_Overwrite(&this->q090, aAvoidthreats, v51); /*0x6f138b*/
  v30 = INIClass::ReadBool_Overwrite(&this->q090, aIonimmune, this->u8_F3); /*0x6f13a0*/
  v31 = this->u8_F6; /*0x6f13a5*/
  this->u8_F3 = v30; /*0x6f13ab*/
  v32 = INIClass::ReadBool_Overwrite(&this->q090, g_INI_Key_IsBaseDefense, v31); /*0x6f13ba*/
  v52 = this->q0F7; /*0x6f13c7*/
  this->u8_F6 = v32; /*0x6f13ce*/
  this->q0F7 = INIClass::ReadBool_Overwrite(&this->q090, aOnlytargethous, v52); /*0x6f13d9*/
  v33 = INIClass::ReadBool_Overwrite(&this->q090, aTransportsretu, this->q0F4); /*0x6f13ee*/
  v34 = this->u8_F5; /*0x6f13f3*/
  this->q0F4 = v33; /*0x6f13f9*/
  v35 = INIClass::ReadBool_Overwrite(&this->q090, aAreteammembers, v34); /*0x6f1408*/
  v36 = this->q0D4; /*0x6f140d*/
  this->u8_F5 = v35; /*0x6f141a*/
  v37 = (char *)Waypoint::To_String(v36); /*0x6f1420*/
  if ( (int)INIClass::GetString(aP1, (uint8_t *)(&this->vtable46), (uint8_t *)aWaypoint, v37, v53, 64) > 0 ) /*0x6f1435*/
    this->q0D4 = String::To_Waypoint(v53); /*0x6f1440*/
  v38 = (char *)Waypoint::To_String(this->q0D8); /*0x6f1453*/
  if ( (int)INIClass::GetString(aP1, (uint8_t *)(&this->vtable46), (uint8_t *)aTransportwaypo, v38, v53, 64) > 0 ) /*0x6f1468*/
    this->q0D8 = String::To_Waypoint(v53); /*0x6f1473*/
  v39 = this->q0E0; /*0x6f1479*/
  if ( INIClass::GetString( /*0x6f1496*/
         aP1,
         (uint8_t *)(&this->vtable46),
         (uint8_t *)aScript,
         &g_INI_DefaultBuffer,
         Destination,
         128) )
  {
    v40 = TeamTypeClass::CreateScriptType(Destination); /*0x6f14a3*/
  }
  else
  {
    v40 = v39; /*0x6f14aa*/
  }
  v41 = this->q0E4; /*0x6f14ac*/
  this->q0E0 = v40; /*0x6f14c9*/
  if ( INIClass::GetString( /*0x6f14cf*/
         aP1,
         (uint8_t *)(&this->vtable46),
         (uint8_t *)aTaskforce,
         &g_INI_DefaultBuffer,
         Destination,
         128) )
  {
    v42 = TeamTypeClass::FindOrCreateTaskForce(Destination); /*0x6f14dc*/
  }
  else
  {
    v42 = v41; /*0x6f14e3*/
  }
  this->q0E4 = v42; /*0x6f14e6*/
  if ( !v42 ) /*0x6f14ef*/
  {
    if ( g_MultiplayerLogFlags <= 0 ) /*0x6f14f8*/
      return 0; /*0x6f14f8*/
    this->q0E4 = *(unsigned int *)g_MultiplayerLogEntry; /*0x6f1501*/
  }
  if ( this->q0E0 ) /*0x6f1507*/
    return 1; /*0x6f1532*/
  if ( g_MultiplayerDebugState > 0 ) /*0x6f1518*/
  {
    this->q0E0 = *(unsigned int *)g_MultiplayerSyncState; /*0x6f1522*/
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
  uint8_t *v5; // edi
  int v6; // eax
  char *v7; // eax
  char *v8; // eax
  int v9; // eax
  int v10; // esi

  if ( !AbstractTypeClass::WriteINI((char *)this, aP1) ) /*0x6f1559*/
    return 0; /*0x6f185b*/
  v3 = this->q0C4; /*0x6f1566*/
  v4 = -1; /*0x6f156d*/
  if ( v3 ) /*0x6f1573*/
  {
    v4 = *(unsigned int *)(*(unsigned int *)(v3 + 52) + 184); /*0x6f1578*/
  }
  else if ( BuildingType::IsSpecialType(*(void **)(&this->q0500)) ) /*0x6f1586*/
  {
    v4 = this->q0C8; /*0x6f158f*/
  }
  v5 = (uint8_t *)(&this->vtable46); /*0x6f159d*/
  INIClass::SetInt(aP1, (uint8_t *)(&this->vtable46), aVeteranlevel, this->q0A0, 0); /*0x6f15a9*/
  INIClass::SetInt(aP1, (uint8_t *)(&this->vtable46), aMindcontroldec, this->q0C0, 0); /*0x6f15bf*/
  INIClass::SetBool(aP1, (uint8_t *)(&this->vtable46), aLoadable, this->q0A4); /*0x6f15d3*/
  INIClass::SetBool(aP1, (uint8_t *)(&this->vtable46), aFull, this->u8_A5); /*0x6f15e7*/
  INIClass::SetBool(aP1, (uint8_t *)(&this->vtable46), aAnnoyance, this->u8_A6); /*0x6f15fb*/
  INIClass::SetBool(aP1, (uint8_t *)(&this->vtable46), aGuardslower, this->u8_A7); /*0x6f160f*/
  INIClass::SetHouseName(aP1, (uint8_t *)(&this->vtable46), aHouse, (void *)v4); /*0x6f161d*/
  INIClass::SetBool(aP1, (uint8_t *)(&this->vtable46), aRecruiter, this->q0A8); /*0x6f1631*/
  INIClass::SetBool(aP1, (uint8_t *)(&this->vtable46), aAutocreate, this->q0A9); /*0x6f1645*/
  INIClass::SetBool(aP1, (uint8_t *)(&this->vtable46), aPrebuild, this->q0AA); /*0x6f1659*/
  INIClass::SetBool(aP1, (uint8_t *)(&this->vtable46), aReinforce, this->q0AB); /*0x6f166d*/
  INIClass::SetBool(aP1, (uint8_t *)(&this->vtable46), aDroppod_0, this->q0B0); /*0x6f1681*/
  INIClass::SetBool(aP1, (uint8_t *)(&this->vtable46), aUsetransportor, this->u8_B1); /*0x6f1695*/
  INIClass::SetBool(aP1, (uint8_t *)(&this->vtable46), aWhiner, this->q0AC); /*0x6f16a9*/
  INIClass::SetBool(aP1, (uint8_t *)(&this->vtable46), aLooserecruit, this->u8_AE); /*0x6f16bd*/
  INIClass::SetBool(aP1, (uint8_t *)(&this->vtable46), aAggressive, this->u8_AD); /*0x6f16d1*/
  INIClass::SetBool(aP1, (uint8_t *)(&this->vtable46), g_INI_Key_Suicide, this->q0AF); /*0x6f16e5*/
  INIClass::SetInt(aP1, (uint8_t *)(&this->vtable46), g_INI_Key_Priority, this->q0B4, 0); /*0x6f16fb*/
  INIClass::SetInt(aP1, (uint8_t *)(&this->vtable46), aMax, this->q0B8, 0); /*0x6f1711*/
  INIClass::SetInt(aP1, (uint8_t *)(&this->vtable46), g_INI_Key_TechLevel, this->q0CC, 0); /*0x6f1727*/
  INIClass::SetInt(aP1, (uint8_t *)(&this->vtable46), g_INI_Key_Group, this->q09C, 0); /*0x6f173d*/
  INIClass::SetBool(aP1, (uint8_t *)(&this->vtable46), aOntransonly, this->u8_B3); /*0x6f1751*/
  INIClass::SetBool(aP1, (uint8_t *)(&this->vtable46), aAvoidthreats, this->u8_F2); /*0x6f1765*/
  INIClass::SetBool(aP1, (uint8_t *)(&this->vtable46), aIonimmune, this->u8_F3); /*0x6f1779*/
  INIClass::SetBool(aP1, (uint8_t *)(&this->vtable46), aTransportsretu, this->q0F4); /*0x6f178d*/
  INIClass::SetBool(aP1, (uint8_t *)(&this->vtable46), aAreteammembers, this->u8_F5); /*0x6f17a1*/
  INIClass::SetBool(aP1, (uint8_t *)(&this->vtable46), g_INI_Key_IsBaseDefense, this->u8_F6); /*0x6f17b5*/
  INIClass::SetBool(aP1, (uint8_t *)(&this->vtable46), aOnlytargethous, this->q0F7); /*0x6f17c9*/
  v6 = this->q0D0; /*0x6f17ce*/
  if ( v6 ) /*0x6f17d6*/
    INIClass::SetString(aP1, (uint8_t *)(&this->vtable46), off_81728C, (char *)(v6 + 36)); /*0x6f17e4*/
  v7 = Waypoint::To_String(this->q0D4); /*0x6f17ef*/
  INIClass::SetString(aP1, (uint8_t *)(&this->vtable46), aWaypoint, v7); /*0x6f17fd*/
  v8 = Waypoint::To_String(this->q0D8); /*0x6f1808*/
  INIClass::SetString(aP1, (uint8_t *)(&this->vtable46), aTransportwaypo, v8); /*0x6f1816*/
  v9 = this->q0E0; /*0x6f181b*/
  if ( v9 ) /*0x6f1823*/
    INIClass::SetString(aP1, (uint8_t *)(&this->vtable46), aScript, (char *)(v9 + 36)); /*0x6f1831*/
  v10 = this->q0E4; /*0x6f1836*/
  if ( v10 ) /*0x6f183e*/
    INIClass::SetString(aP1, v5, aTaskforce, (char *)(v10 + 36)); /*0x6f184c*/
  return 1; /*0x6f1853*/
}
}
// 0x6F1870
namespace gamemd {
int TeamTypeClass::GetGroup()
{
  int result; // eax
  int v2; // ecx

  result = *(&this->vtable49); /*0x6f1870*/
  if ( result == -1 ) /*0x6f1879*/
  {
    v2 = *(&this->abstractFlags7); /*0x6f1880*/
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
  v2 = this->q0D8; /*0x6f18e1*/
  if ( v2 == -1 ) /*0x6f18ea*/
  {
    *a2 = dword_B0E9C8; /*0x6f18f6*/
    return a2; /*0x6f18ec*/
  }
  else
  {
    v4 = *ScenarioClass::Get_Waypoint_Location((char *)g_ScenarioClass_Instance, &v5, v2); /*0x6f190d*/
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

  AbstractTypeClass::ProcessPower(a2); /*0x6f1c89*/
  Power::TimerProcess(this->q09C); /*0x6f1c97*/
  IDA_LOBYTE(v3) = this->q0A8; /*0x6f1c9c*/
  Power::FlagProcess(a2, v3); /*0x6f1ca5*/
  IDA_LOBYTE(v4) = this->q0A9; /*0x6f1caa*/
  v5 = Power::FlagProcess(a2, v4); /*0x6f1cb3*/
  IDA_LOBYTE(v5) = this->q0AA; /*0x6f1cb8*/
  Power::FlagProcess(a2, v5); /*0x6f1cc1*/
  IDA_LOBYTE(v6) = this->q0AB; /*0x6f1cc6*/
  Power::FlagProcess(a2, v6); /*0x6f1ccf*/
  IDA_LOBYTE(v7) = this->q0AC; /*0x6f1cd4*/
  v8 = Power::FlagProcess(a2, v7); /*0x6f1cdd*/
  IDA_LOBYTE(v8) = this->u8_AD; /*0x6f1ce2*/
  Power::FlagProcess(a2, v8); /*0x6f1ceb*/
  IDA_LOBYTE(v9) = this->u8_AE; /*0x6f1cf0*/
  Power::FlagProcess(a2, v9); /*0x6f1cf9*/
  IDA_LOBYTE(v10) = this->q0AF; /*0x6f1cfe*/
  v11 = Power::FlagProcess(a2, v10); /*0x6f1d07*/
  IDA_LOBYTE(v11) = this->q0B0; /*0x6f1d0c*/
  Power::FlagProcess(a2, v11); /*0x6f1d15*/
  IDA_LOBYTE(v12) = this->u8_B1; /*0x6f1d1a*/
  Power::FlagProcess(a2, v12); /*0x6f1d23*/
  Power::TimerProcess(this->q0B4); /*0x6f1d31*/
  Power::TimerProcess(this->q0B8); /*0x6f1d3f*/
  Power::TimerProcess(this->q02F); /*0x6f1d4d*/
  v13 = this->q0C4; /*0x6f1d52*/
  if ( v13 ) /*0x6f1d5a*/
  {
    v14 = (*(int (__thiscall **)(int))(*(unsigned int *)v13 + 44))(v13); /*0x6f1d5e*/
    Power::TimerProcess(v14); /*0x6f1d64*/
  }
  v15 = this->q0C4; /*0x6f1d69*/
  if ( v15 ) /*0x6f1d71*/
  {
    v16 = (*(int (__stdcall **)(int))(*(unsigned int *)(v15 + 4) + 16))(v15 + 4); /*0x6f1d7a*/
    Power::TimerProcess(v16); /*0x6f1d80*/
  }
  Power::TimerProcess(this->q0CC); /*0x6f1d8e*/
  v17 = this->q0D0; /*0x6f1d93*/
  if ( v17 ) /*0x6f1d9b*/
  {
    v18 = (*(int (__stdcall **)(int))(*(unsigned int *)(v17 + 4) + 16))(v17 + 4); /*0x6f1da4*/
    Power::TimerProcess(v18); /*0x6f1daa*/
  }
  Power::TimerProcess(this->q0D4); /*0x6f1db8*/
  Power::TimerProcess(this->q0D8); /*0x6f1dc6*/
  Power::TimerProcess(this->q0DC); /*0x6f1dd4*/
  result = this->q0E0; /*0x6f1dd9*/
  if ( result ) /*0x6f1de1*/
  {
    v20 = (*(int (__stdcall **)(int))(result->Prev + 16))(result + 4); /*0x6f1dea*/
    result = Power::TimerProcess(v20); /*0x6f1df0*/
  }
  v21 = this->q0E4; /*0x6f1df5*/
  if ( v21 ) /*0x6f1dfd*/
  {
    v22 = (*(int (__stdcall **)(int))(*(unsigned int *)(v21 + 4) + 16))(v21 + 4); /*0x6f1e06*/
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
  result = this->q0E4; /*0x6f1fa9*/
  this->q0F0 = 1; /*0x6f1faf*/
  this->u8_F1 = 0; /*0x6f1fb6*/
  this->q0EC = 9; /*0x6f1fbc*/
  if ( *(int *)(result + 156) > 0 ) /*0x6f1fcc*/
  {
    v4 = 168; /*0x6f1fcf*/
    do /*0x6f201d*/
    {
      v5 = *(unsigned int *)(result + v4); /*0x6f1fd4*/
      if ( *(unsigned char *)(v5 + 3278) ) /*0x6f1fd7*/
      {
        if ( *(unsigned int *)(v5 + 1504) ) /*0x6f1fdf*/
          this->u8_F1 = 1; /*0x6f1fef*/
        else
          this->q0F0 = 0; /*0x6f1fe7*/
      }
      this->q0EC = globalHelper_0889F0(*(unsigned int *)(v5 + 1460), this->q0EC); /*0x6f2007*/
      result = this->q0E4; /*0x6f200d*/
      ++v2; /*0x6f2013*/
      v4 += 8; /*0x6f2014*/
    }
    while ( v2 < *(unsigned int *)(result + 156) ); /*0x6f201d*/
  }
  if ( this->u8_F6 ) /*0x6f2020*/
    this->q0F0 = 0; /*0x6f2028*/
  return result; /*0x6f202e*/
}
}
// 0x6F20C0
namespace gamemd {
int TeamTypeClass::GetAuxField()
{
  return this->q098; /*0x6f20c6*/
}
}
// 0x6F20D0
namespace gamemd {
TeamTypeClass * TeamTypeClass::ddtor(char a2)
{
  int v3; // eax
  int v4; // eax

  AbstractClass::AnnounceExpiredPointer(1); /*0x6f20f1*/
  v3 = (*(int (__thiscall **)(int *, void ***))(TeamTypeClass_Array + 16))(&TeamTypeClass_Array, &this); /*0x6f210a*/
  if ( v3 != -1 && v3 < g_MultiplayerLogState && v3 < --g_MultiplayerLogState ) /*0x6f2125*/
  {
    do /*0x6f213d*/
    {
      ++v3; /*0x6f212d*/
      *((unsigned int *)g_TeamTypePool + v3 - 1) = *((unsigned int *)g_TeamTypePool + v3); /*0x6f2131*/
    }
    while ( v3 < g_MultiplayerLogState ); /*0x6f213d*/
  }
  v4 = (*(int (__thiscall **)(int *, void ***))(g_AnimPoolManager + 16))(&g_AnimPoolManager, &this); /*0x6f2153*/
  if ( v4 != -1 && v4 < g_AnimManager && v4 < --g_AnimManager ) /*0x6f216e*/
  {
    do /*0x6f2186*/
    {
      ++v4; /*0x6f2176*/
      *((unsigned int *)g_AnimPoolCount + v4 - 1) = *((unsigned int *)g_AnimPoolCount + v4); /*0x6f217a*/
    }
    while ( v4 < g_AnimManager ); /*0x6f2186*/
  }
  AbstractTypeClass::Dtor(); /*0x6f218a*/
  if ( (a2 & 1) != 0 ) /*0x6f2194*/
    RA2_OPDEL(); /*0x6f2197*/
  return this; /*0x6f21a1*/
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
  int v12; // ecx
  int v13; // eax
  int v14; // edx
  int v15; // eax

  if ( a2 ) /*0x6f22fc*/
  {
    v4 = a2; /*0x6f2302*/
    this->IsInitialized = 0; /*0x6f2306*/
    if ( a2 ) /*0x6f230c*/
    {
      *a2 = a2; /*0x6f2347*/
      v6 = a2 + 1; /*0x6f234b*/
      if ( a2 - 1 >= 0 ) /*0x6f234e*/
      {
        v9 = a2 + 2; /*0x6f2350*/
        a2 = a2; /*0x6f2353*/
        do /*0x6f235e*/
        {
          *v9 = 0; /*0x6f2354*/
          v9 += 2; /*0x6f235a*/
          --a2; /*0x6f235d*/
        }
        while ( a2 ); /*0x6f235e*/
      }
    }
    else
    {
      v5 = (int *)operator new(8 * a2 + 4); /*0x6f2316*/
      if ( v5 ) /*0x6f2320*/
      {
        *v5 = a2; /*0x6f2325*/
        v6 = v5 + 1; /*0x6f2329*/
        if ( a2 - 1 >= 0 ) /*0x6f232c*/
        {
          v7 = v5 + 2; /*0x6f232e*/
          a2 = a2; /*0x6f2331*/
          do /*0x6f233c*/
          {
            *v7 = 0; /*0x6f2332*/
            v7 += 2; /*0x6f2338*/
            --a2; /*0x6f233b*/
          }
          while ( a2 ); /*0x6f233c*/
        }
      }
      else
      {
        v6 = 0; /*0x6f2340*/
      }
    }
    this->IsInitialized = 1; /*0x6f2362*/
    if ( v6 ) /*0x6f2366*/
    {
      if ( this->Items ) /*0x6f2371*/
      {
        v12 = this->Capacity; /*0x6f2378*/
        if ( a2 < v12 ) /*0x6f237d*/
          v12 = a2; /*0x6f237f*/
        v13 = 0; /*0x6f2381*/
        if ( v12 > 0 ) /*0x6f2385*/
        {
          do /*0x6f239d*/
          {
            v14 = this->Items; /*0x6f2387*/
            ++v13; /*0x6f238a*/
            v6[2 * v13 - 2] = *(unsigned int *)(v14 + 8 * v13 - 8); /*0x6f2391*/
            v6[2 * v13 - 1] = *(unsigned int *)(v14 + 8 * v13 - 4); /*0x6f2399*/
          }
          while ( v13 < v12 ); /*0x6f239d*/
          v4 = a2; /*0x6f239f*/
        }
        if ( this->IsAllocated ) /*0x6f23a3*/
        {
          v15 = this->Items; /*0x6f23aa*/
          if ( v15 ) /*0x6f23af*/
            RA2_OPDEL((void *)(v15 - 4)); /*0x6f23b9*/
          this->Items = 0; /*0x6f23c1*/
        }
      }
      this->Items = v6; /*0x6f23ca*/
      this->Capacity = a2; /*0x6f23d2*/
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
    (*(void (__thiscall **)(void *))(((unsigned int)(this->Items2))))(this); /*0x6f23e5*/
    return 1; /*0x6f23eb*/
  }
}
}
// 0x6F24B0
namespace gamemd {
AbstractClass * * TeamTypeClass_28::SetCapacity(int a2, int * a2)
{
  int *v4; // ebp
  int *v5; // eax
  unsigned int *v6; // edi
  unsigned int *v7; // eax
  int v8; // ecx
  unsigned int *v9; // eax
  int v11; // ecx
  int v12; // eax
  int v13; // edx
  int v14; // eax
  void *v15; // ebp
  int v16; // eax

  if ( a2 ) /*0x6f24bc*/
  {
    v4 = a2; /*0x6f24c2*/
    this->IsInitialized = 0; /*0x6f24c6*/
    if ( a2 ) /*0x6f24cc*/
    {
      *a2 = a2; /*0x6f2507*/
      v6 = a2 + 1; /*0x6f250c*/
      if ( a2 - 1 >= 0 ) /*0x6f250f*/
      {
        v9 = a2 + 2; /*0x6f2511*/
        a2 = a2; /*0x6f2514*/
        do /*0x6f251f*/
        {
          *v9 = 0; /*0x6f2515*/
          v9 += 2; /*0x6f251b*/
          --a2; /*0x6f251e*/
        }
        while ( a2 ); /*0x6f251f*/
      }
    }
    else
    {
      v5 = (int *)operator new(8 * a2 + 4); /*0x6f24d6*/
      if ( v5 ) /*0x6f24e0*/
      {
        *v5 = a2; /*0x6f24e5*/
        v6 = v5 + 1; /*0x6f24e9*/
        if ( a2 - 1 >= 0 ) /*0x6f24ec*/
        {
          v7 = v5 + 2; /*0x6f24ee*/
          a2 = a2; /*0x6f24f1*/
          do /*0x6f24fc*/
          {
            *v7 = 0; /*0x6f24f2*/
            v7 += 2; /*0x6f24f8*/
            --a2; /*0x6f24fb*/
          }
          while ( a2 ); /*0x6f24fc*/
        }
      }
      else
      {
        v6 = 0; /*0x6f2500*/
      }
    }
    this->IsInitialized = 1; /*0x6f2523*/
    if ( !v6 ) /*0x6f2527*/
      return 0; /*0x6f25c7*/
    if ( this->Items ) /*0x6f252d*/
    {
      v11 = this->q008; /*0x6f2534*/
      if ( a2 < v11 ) /*0x6f2539*/
        v11 = a2; /*0x6f253b*/
      v12 = 0; /*0x6f253d*/
      if ( v11 > 0 ) /*0x6f2541*/
      {
        do /*0x6f2559*/
        {
          v13 = this->Items; /*0x6f2543*/
          ++v12; /*0x6f2546*/
          v6[2 * v12 - 2] = *(unsigned int *)(v13 + 8 * v12 - 8); /*0x6f254d*/
          v6[2 * v12 - 1] = *(unsigned int *)(v13 + 8 * v12 - 4); /*0x6f2555*/
        }
        while ( v12 < v11 ); /*0x6f2559*/
        v4 = a2; /*0x6f255b*/
      }
      if ( this->IsAllocated ) /*0x6f255f*/
      {
        v14 = this->Items; /*0x6f2566*/
        if ( v14 ) /*0x6f256b*/
        {
          v15 = (void *)(v14 - 4); /*0x6f2570*/
          Array::ForEachReverse(v14, 8, *(unsigned int *)(v14 - 4), (int (__thiscall *)(int))nullsub_240); /*0x6f257c*/
          RA2_OPDEL(v15); /*0x6f2582*/
          v4 = a2; /*0x6f2587*/
        }
        this->Items = 0; /*0x6f258e*/
      }
    }
    this->Items = v6; /*0x6f2597*/
    this->q008 = a2; /*0x6f259f*/
    this->IsAllocated = v4 == 0; /*0x6f25a2*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(((unsigned int)(this->Items2))))(this); /*0x6f25ab*/
  }
  v16 = this->q008; /*0x6f25ae*/
  if ( v16 < this->q010 ) /*0x6f25b6*/
    this->q010 = v16; /*0x6f25b8*/
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
  if ( g_MultiplayerLogState <= 0 ) /*0x6f0fd1*/
    return 0; /*0x6f1010*/
  while ( _strcmpi(this, (const void *)(*((unsigned int *)g_TeamTypePool + v2) + 36)) /*0x6f1004*/
       && _strcmpi(this, (const void *)(*((unsigned int *)g_TeamTypePool + v2) + 100)) )
  {
    if ( ++v2 >= g_MultiplayerLogState ) /*0x6f100e*/
      return 0; /*0x6f100e*/
  }
  return *((unsigned int *)g_TeamTypePool + v2); /*0x6f1010*/
}
} // namespace gamemd

// 0x6F1AB0
namespace gamemd {
TeamTypeClass * TeamTypeClass::ReadScriptData(char * a1, int a2)
{
  int KeyCount; // ebx
  int i; // edi
  uint8_t *StringByIndex; // eax
  int result; // eax
  int v8; // ebx
  int j; // edi
  int v10; // [esp-4h] [ebp-34h]
  char Buffer[32]; // [esp+10h] [ebp-20h] BYREF

  KeyCount = INIClass::GetKeyCount(a1, (uint8_t *)g_INI_Key_TeamTypes); /*0x6f1ac5*/
  for ( i = 0; i < KeyCount; ++i ) /*0x6f1acb*/
  {
    StringByIndex = (uint8_t *)INIClass::GetStringByIndex(a1, (uint8_t *)g_INI_Key_TeamTypes, i); /*0x6f1ad5*/
    INIClass::GetString( /*0x6f1aee*/
      (uint8_t ***)a1,
      (uint8_t *)g_INI_Key_TeamTypes,
      StringByIndex,
      &g_INI_DefaultBuffer,
      Buffer,
      32);
    INIClass::ClearSection((int)a1, (int)Buffer, 0); /*0x6f1afc*/
  }
  INIClass::ClearSection((int)a1, (int)g_INI_Key_TeamTypes, 0); /*0x6f1b0f*/
  result = g_MultiplayerLogState; /*0x6f1b14*/
  v8 = 0; /*0x6f1b19*/
  for ( j = 0; j < g_MultiplayerLogState; ++j ) /*0x6f1b1f*/
  {
    if ( *(unsigned int *)(*((unsigned int *)g_TeamTypePool + j) + 232) == a2 ) /*0x6f1b2f*/
    {
      v10 = v8++; /*0x6f1b37*/
      sprintf(Buffer, "%d", v10); /*0x6f1b3f*/
      INIClass::SetString( /*0x6f1b5f*/
        a1,
        (uint8_t *)g_INI_Key_TeamTypes,
        Buffer,
        (char *)(*((unsigned int *)g_TeamTypePool + j) + 36));
      (*(void (__thiscall **)(unsigned int, char *))(**((unsigned int **)g_TeamTypePool + j) + 104))( /*0x6f1b6f*/
        *((unsigned int *)g_TeamTypePool + j),
        a1);
    }
    result = g_MultiplayerLogState; /*0x6f1b72*/
  }
  return result; /*0x6f1b7c*/
}
} // namespace gamemd

// 0x6F1B90
namespace gamemd {
int TeamTypeClass::SaveToINI(TechnoTypeClass * aP0, int * a1, int aP2)
{
  int result; // eax

  result = AbstractClass::SaveLoad_Prefix(aP0, a1, aP2); /*0x6f1b9f*/
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

  result = AbstractClass::SaveLoad_Prefix_0(aP0, aP1); /*0x6f1bbb*/
  if ( result >= 0 ) /*0x6f1bc2*/
  {
    if ( aP0 ) /*0x6f1bc6*/
    {
      AbstractTypeClass::Init((int)aP0, (int)&aP1); /*0x6f1bcf*/
      *aP0 = (int)&TeamTypeClass_vftable; /*0x6f1bd4*/
      aP0[1] = (int)&TeamTypeClass_vftable; /*0x6f1bda*/
      aP0[2] = (int)&TeamTypeClass_vftable; /*0x6f1be1*/
      aP0[3] = (int)&TeamTypeClass_vftable; /*0x6f1be8*/
    }
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, aP0 + 49); /*0x6f1bfb*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, aP0 + 52); /*0x6f1c0c*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, aP0 + 56); /*0x6f1c1d*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, aP0 + 57); /*0x6f1c2e*/
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
  unsigned int *v5; // ecx

  result = g_HouseClass_AIProductionState; /*0x6f1f30*/
  for ( i = 0; i < g_HouseClass_AIProductionState; ++i ) /*0x6f1f3d*/
  {
    v5 = (unsigned int *)*((unsigned int *)g_TeamClassPool + i); /*0x6f1f49*/
    if ( (void *)v5[9] == this ) /*0x6f1f4f*/
      TeamTypeClass::Check(v5, aP1); /*0x6f1f52*/
    result = g_HouseClass_AIProductionState; /*0x6f1f57*/
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
  if ( g_HouseClass_AIProductionState <= 0 ) /*0x6f1f7c*/
    return 0; /*0x6f1f93*/
  for ( i = (char *)g_TeamClassPool; ; i += 4 ) /*0x6f1f7e*/
  {
    result = *(unsigned int *)i; /*0x6f1f84*/
    if ( *(void **)(i->q024 == this ) /*0x6f1f89*/
      break; /*0x6f1f89*/
    if ( ++v1 >= g_HouseClass_AIProductionState ) /*0x6f1f91*/
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

  v2 = this->vtable2; /*0x6f21b6*/
  this->uniqueId = 0; /*0x6f21b9*/
  if ( v2 && this->TeamTypeClass_field_34 ) /*0x6f21c0*/
  {
    RA2_OPDEL((void *)(v2 - 4)); /*0x6f21d1*/
    this->Items = 0; /*0x6f21d9*/
  }
  this->IsAllocated = 0; /*0x6f21dc*/
  this->q008 = 0; /*0x6f21df*/
}
} // namespace gamemd

// 0x6F21F0
namespace gamemd {
unsigned int TeamTypeClass_28::PointerToIndex(int a2)
{
  if ( this->IsInitialized ) /*0x6f21f0*/
    return (unsigned int)(a2 - this->Items) >> 3; /*0x6f2205*/
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

  v3 = this->Items; /*0x6f2210*/
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
  int v4; // edx
  unsigned int *v5; // eax
  unsigned int *v6; // ecx
  int v7; // edx

  v2 = this->Capacity; /*0x6f229b*/
  if ( v2 == *(unsigned int *)(a2 + 8) ) /*0x6f22a0*/
  {
    v3 = 0; /*0x6f22a2*/
    if ( v2 <= 0 ) /*0x6f22a6*/
      return 1; /*0x6f22d6*/
    v4 = *(unsigned int *)(a2 + 4); /*0x6f22a8*/
    v5 = (unsigned int *)this->Items; /*0x6f22ab*/
    v6 = (unsigned int *)(v4 + 4); /*0x6f22ae*/
    v7 = v4 - (unsigned int)v5; /*0x6f22b1*/
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

  v2 = this->Items; /*0x6f2406*/
  if ( v2 && this->IsAllocated ) /*0x6f240d*/
  {
    RA2_OPDEL((void *)(v2 - 4)); /*0x6f241e*/
    this->q010 = 0; /*0x6f2426*/
  }
  this->IsAllocated = 0; /*0x6f2429*/
  this->Capacity = 0; /*0x6f242c*/
}
} // namespace gamemd

// 0x6F2440
namespace gamemd {
int TeamTypeClass_28::Read(unsigned int * a2)
{
  int result; // eax
  int v3; // edx
  unsigned int *i; // ecx

  if ( !this->IsInitialized ) /*0x6f2440*/
    return 0; /*0x6f244e*/
  v3 = *(unsigned int *)((char *)&this->__pad_01D + 3); /*0x6f2454*/
  result = 0; /*0x6f2457*/
  if ( v3 <= 0 ) /*0x6f245b*/
    return -1; /*0x6f247c*/
  for ( i = this->Items; *i != *a2 || i[1] != a2[1]; i += 2 ) /*0x6f2461*/
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
  if ( this->IsInitialized ) /*0x6f2490*/
    return (unsigned int)(a2 - this->Items) >> 3; /*0x6f24a5*/
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

  v2 = this->q010; /*0x6f2640*/
  result = 0; /*0x6f2645*/
  if ( v2 <= 0 ) /*0x6f264b*/
    return -1; /*0x6f266c*/
  for ( i = (unsigned int *)this->Items; *i != *a2 || i[1] != a2[1]; i += 2 ) /*0x6f2651*/
  {
    if ( ++result >= v2 ) /*0x6f266a*/
      return -1; /*0x6f266a*/
  }
  return result; /*0x6f266f*/
}
}
// 0x6F2680
namespace gamemd {
VectorClass_flat * TeamTypeClass_28::QueryInterface(char a2)
{
  int v3; // eax

  v3 = this->Items; /*0x6f2683*/
  if ( v3 && this->IsAllocated ) /*0x6f2690*/
  {
    RA2_OPDEL((void *)(v3 - 4)); /*0x6f26a3*/
    this->Items = 0; /*0x6f26ab*/
  }
  this->IsAllocated = 0; /*0x6f26b6*/
  this->Capacity = 0; /*0x6f26bc*/
  if ( (a2 & 1) != 0 ) /*0x6f26c3*/
    RA2_OPDEL(); /*0x6f26c6*/
  return this; /*0x6f26d0*/
}
} // namespace gamemd

// 0x6F2720
namespace gamemd {
DynamicVector * TeamTypeClass_28::Constructor(char a2)
{
  int v3; // eax

  v3 = this->Items; /*0x6f2723*/
  if ( v3 && this->IsAllocated ) /*0x6f2730*/
  {
    RA2_OPDEL((void *)(v3 - 4)); /*0x6f2743*/
    this->q004 = 0; /*0x6f274b*/
  }
  *(unsigned char *)&this->IsAllocated = 0; /*0x6f2756*/
  this->q008 = 0; /*0x6f275c*/
  if ( (a2 & 1) != 0 ) /*0x6f2763*/
    RA2_OPDEL(); /*0x6f2766*/
  return this; /*0x6f2770*/
}
} // namespace gamemd
