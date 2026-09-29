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

// 0x4C98B0
namespace gamemd {
int TeamTypeClass::Construct()
{
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v7; // [esp+Ch] [ebp-8h]

  AbstractClass::Constructor(); /*0x4c98b7*/
  this->TeamTypeClass_field_24 = 0; /*0x4c98be*/
  this->TeamTypeClass_field_28 = 0; /*0x4c98c1*/
  v2 = *(unsigned int *)&stru_A8EB00.?[416]; /*0x4c98c4*/
  this->TeamTypeClass_field_34 = 0; /*0x4c98c9*/
  this->TeamTypeClass_field_2C = v2; /*0x4c98cc*/
  this->TeamTypeClass_field_38 = 0; /*0x4c98d4*/
  this->TeamTypeClass_field_3C = 1; /*0x4c98d7*/
  this->taskForceCount = 0; /*0x4c98da*/
  this->taskForceCapacity = 0; /*0x4c98dd*/
  this->__pad_4C[0] = 1; /*0x4c98e0*/
  this->__pad_4C[1] = 0; /*0x4c98e3*/
  this->taskForce[0] = (int)&DynamicVectorClass_TechnoTypeClass_const___vftable; /*0x4c98e6*/
  *(unsigned int *)&this->__pad_4C[8] = 10; /*0x4c98ed*/
  *(unsigned int *)&this->__pad_4C[4] = 0; /*0x4c98f4*/
  this->TeamTypeClass_field_71 = 1; /*0x4c98f7*/
  this->TeamTypeClass_field_58 = 0; /*0x4c98fd*/
  this->TeamTypeClass_field_5C = 0; /*0x4c9901*/
  this->TeamTypeClass_field_5D = 0; /*0x4c9904*/
  this->TeamTypeClass_field_60 = 0; /*0x4c9907*/
  this->TeamTypeClass_field_64 = 0; /*0x4c990a*/
  this->TeamTypeClass_field_68 = -1; /*0x4c990d*/
  this->TeamTypeClass_field_6C = 0; /*0x4c9914*/
  this->TeamTypeClass_field_70 = 0; /*0x4c9917*/
  this->AbstractClass = (void*)&FactoryClass_vftable; /*0x4c991a*/
  this->? = (void*)&FactoryClass_vftable; /*0x4c9920*/
  this->? = (void*)&FactoryClass_vftable; /*0x4c9926*/
  this->? = (void*)&FactoryClass_vftable; /*0x4c992d*/
  AbstractClass::GenerateUniqueID((AbstractClass *)&this->?); /*0x4c9934*/
  if ( *(int *)&stru_A83D50.__pad_C8[40] < *(int *)&stru_A83D50.__pad_C8[32] /*0x4c996d*/
    || (stru_A83D50.__pad_C8[37] || !*(unsigned int *)&stru_A83D50.__pad_C8[32])
    && *(int *)&stru_A83D50.__pad_C8[44] > 0
    && (*(uint8_t (__thiscall **)(char *, int, unsigned int))(*(unsigned int *)&stru_A83D50.__pad_C8[24] + 8))(
         &stru_A83D50.__pad_C8[24],
         *(unsigned int *)&stru_A83D50.__pad_C8[32] + *(unsigned int *)&stru_A83D50.__pad_C8[44],
         0) )
  {
    v3 = (*(unsigned int *)&stru_A83D50.__pad_C8[40])++; /*0x4c997a*/
    *(unsigned int *)(*(unsigned int *)&stru_A83D50.__pad_C8[28] + 4 * v3) = this; /*0x4c9989*/
  }
  v4 = *(unsigned int *)&stru_A8EB00.?[416]; /*0x4c998c*/
  this->TeamTypeClass_field_38 = 0; /*0x4c9996*/
  this->TeamTypeClass_field_2C = v4; /*0x4c9999*/
  this->TeamTypeClass_field_30 = v7; /*0x4c999f*/
  this->TeamTypeClass_field_34 = 0; /*0x4c99a2*/
  this->TeamTypeClass_field_24 = 0; /*0x4c99a5*/
  if ( g_BuildingLoadQueue_Array.Foundation[0] < g_BuildingLoadQueue_Array.ExtraPowerBonus /*0x4c99dc*/
    || (IDA_BYTE1(g_BuildingLoadQueue_Array.ExtraPowerDrain) || !g_BuildingLoadQueue_Array.ExtraPowerBonus)
    && g_BuildingLoadQueue_Array.Height > 0
    && (*(uint8_t (__thiscall **)(int *, int, unsigned int))(g_BuildingLoadQueue_Array.PowerBonus + 8))(
         &g_BuildingLoadQueue_Array.PowerBonus,
         g_BuildingLoadQueue_Array.ExtraPowerBonus + g_BuildingLoadQueue_Array.Height,
         0) )
  {
    v5 = g_BuildingLoadQueue_Array.Foundation[0]++; /*0x4c99e9*/
    *(unsigned int *)(g_BuildingLoadQueue_Array.PowerDrain + 4 * v5) = this; /*0x4c99f8*/
  }
  return (int)this; /*0x4c99fd*/
}
}
// 0x691C00
namespace gamemd {
void * TeamTypeClass::CreateScriptType()
{
  int v2; // esi
  int *v3; // eax
  int *v4; // esi
  int v5; // ecx
  char v6; // al
  int v7; // eax
  int **v8; // edx

  if ( !_strcmpi(g_Str__none_, Source) || !_strcmpi(g_Str_none, Source) ) /*0x691c20*/
    return 0; /*0x691c2a*/
  v2 = 0; /*0x691c35*/
  if ( dword_8B41D8 <= 0 ) /*0x691c39*/
  {
  LABEL_6:
    v3 = (int *)RA2_OPNEW(0x234u); /*0x691c62*/
    v4 = v3; /*0x691c6c*/
    if ( v3 ) /*0x691c73*/
    {
      AbstractTypeClass::Constructor(v3, Source); /*0x691c7c*/
      v4[39] = 0; /*0x691c81*/
      v4[40] = 0; /*0x691c8b*/
      *v4 = (int)&ScriptTypeClass_vftable; /*0x691c95*/
      v4[1] = (int)&ScriptTypeClass_vftable; /*0x691c9b*/
      v4[2] = (int)&ScriptTypeClass_vftable; /*0x691ca2*/
      v4[3] = (int)&ScriptTypeClass_vftable; /*0x691ca9*/
      v5 = dword_8B41D8; /*0x691cb0*/
      if ( dword_8B41D8 < dword_8B41D0 /*0x691cf1*/
        || (byte_8B41D5 || !dword_8B41D0)
        && dword_8B41DC > 0
        && (v6 = (*(int (__thiscall **)(int *, int, unsigned int))(dword_8B41C8 + 8))(
                   &dword_8B41C8,
                   dword_8B41D0 + dword_8B41DC,
                   0),
            v5 = dword_8B41D8,
            v6) )
      {
        dword_8B41D8 = (unsigned int)(v5 + 1);
        *((unsigned int *)dword_8B41CC + v5) = v4; /*0x691d02*/
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
        v8 = (int **)dword_8B41CC; /*0x691d11*/
        while ( *v8 != v4 ) /*0x691d19*/
        {
          ++v7; /*0x691d1b*/
          ++v8; /*0x691d1c*/
          if ( v7 >= v5 ) /*0x691d21*/
            goto LABEL_17; /*0x691d21*/
        }
      }
      v4[38] = v7; /*0x691d26*/
      return v4; /*0x691d30*/
    }
    return 0; /*0x691d3e*/
  }
  while ( _strcmpi((char *)(*((unsigned int *)dword_8B41CC + v2) + 36), Source) ) /*0x691c52*/
  {
    if ( ++v2 >= dword_8B41D8 ) /*0x691c60*/
      goto LABEL_6; /*0x691c60*/
  }
  return (int *)*((unsigned int *)dword_8B41CC + v2); /*0x691d2e*/
}
}
// 0x6E85F0
namespace gamemd {
AbstractClass * * TeamTypeClass::FindOrCreateTaskForce()
{
  int v2; // esi
  TaskForceClass *v3; // eax

  if ( !_strcmpi(g_Str__none_, Source) || !_strcmpi(g_Str_none, Source) ) /*0x6e860c*/
    return 0; /*0x6e866f*/
  v2 = 0; /*0x6e861d*/
  if ( dword_A8E8E0 <= 0 ) /*0x6e8621*/
  {
  LABEL_6:
    v3 = (TaskForceClass *)RA2_OPNEW(0xD4u); /*0x6e8646*/
    if ( v3 ) /*0x6e8655*/
      return TaskForceClass::Construct(v3, Source); /*0x6e8661*/
    return 0; /*0x6e8655*/
  }
  while ( _strcmpi((char *)(*((unsigned int *)dword_A8E8D4 + v2) + 36), Source) ) /*0x6e863a*/
  {
    if ( ++v2 >= dword_A8E8E0 ) /*0x6e8644*/
      goto LABEL_6; /*0x6e8644*/
  }
  return (gamemd::AbstractClass **)((unsigned int *)*((unsigned int *)dword_A8E8D4 + v2));
}
}
// 0x6EF5F0
namespace gamemd {
int TeamTypeClass::Check(int a2)
{
  int result; // eax

  for ( result = *(unsigned int *)&this->__pad_4C[8]; result; result = *(unsigned int *)(result + 1496) ) /*0x6ef5f5*/
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
  TeamTypeClass **v4; // ecx

  result = (int)FootClass_Array.?; /*0x6f0a70*/
  for ( i = 0; i < (int)FootClass_Array.?; ++i ) /*0x6f0a7d*/
  {
    v4 = (TeamTypeClass **)*((unsigned int *)&FootClass_Array.?->ObjectClass + i); /*0x6f0a84*/
    if ( this == v4[9] ) /*0x6f0a8a*/
    {
      if ( v4 ) /*0x6f0a8e*/
        ((void (__thiscall *)(TeamTypeClass **, int))(*v4)->?)(v4, 1); /*0x6f0a94*/
      --i; /*0x6f0a97*/
    }
    result = (int)FootClass_Array.?; /*0x6f0a98*/
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
  if ( this->TeamTypeClass_field_34 == a2 ) /*0x6f103f*/
    this->TeamTypeClass_field_34 = 0; /*0x6f1041*/
  if ( this->q031 == a2 ) /*0x6f104d*/
    this->q031 = 0; /*0x6f104f*/
  if ( this->u32_E4 == a2 ) /*0x6f105b*/
    this->u32_E4 = 0; /*0x6f105d*/
  if ( this->TeamTypeClass_field_38 == a2 ) /*0x6f1069*/
    this->TeamTypeClass_field_38 = 0; /*0x6f106b*/
  v4 = this->TeamTypeClass_field_38; /*0x6f1071*/
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
  void * Bool_Overwrite;
  char v8; // cl
  char v9; // al
  char v10; // al
  void * v11;
  char v12; // al
  AbstractClass * v13;
  AbstractClass * v14;
  void * v15;
  AbstractClass * v16;
  AbstractClass * v17;
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
  void * v47;
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
  v44 = (gamemd::AbstractClass *)((unsigned int)(this->q0C0));
  this->q0A0 = (unsigned int)(Int_Overwrite);
  this->q0C0 = (unsigned int)(INIClass::ReadInt_Overwrite(&this->q090, aMindcontroldec, v44));
  Bool_Overwrite = (unsigned int)(INIClass::ReadBool_Overwrite(&this->q090, aLoadable, this->q0A4));
  v8 = (unsigned int)(this->u8_A5);
  this->q0A4 = (unsigned int)((void *)(Bool_Overwrite));
  v9 = (void *)(INIClass::ReadBool_Overwrite(&this->q090, aFull, v8));
  v45 = (unsigned int)(this->u8_A6);
  this->u8_A5 = (unsigned char)((void *)(v9));
  this->u8_A6 = (unsigned int)(INIClass::ReadBool_Overwrite(&this->q090, aAnnoyance, v45));
  v10 = (unsigned int)(INIClass::ReadBool_Overwrite(&this->q090, aGuardslower, this->u8_A7));
  v11 = (void *)((char)((void *)(this->q0A9)));
  this->u8_A7 = (unsigned int)(v10);
  v12 = (unsigned int)(INIClass::ReadBool_Overwrite(&this->q090, aAutocreate, v11));
  v46 = (unsigned int)(this->q0AA);
  this->q0A9 = (unsigned int)(v12);
  this->q0AA = (gamemd::AbstractClass *)((unsigned int)(INIClass::ReadBool_Overwrite(&this->q090, aPrebuild, v46)));
  v13 = (unsigned int)((gamemd::AbstractClass *)((unsigned int)(INIClass::ReadBool_Overwrite(&this->q090, aReinforce, this->q0AB))));
  v14 = (gamemd::AbstractClass *)((unsigned int)(this->q0B0));
  this->q0AB = (unsigned int)((gamemd::AbstractClass *)(v13));
  v15 = (unsigned int)((void *)(INIClass::ReadBool_Overwrite(&this->q090, aDroppod_0, v14)));
  v47 = (void *)((char)((void *)(this->u8_B1)));
  this->q0B0 = (unsigned int)((void *)(v15));
  this->u8_B1 = (gamemd::AbstractClass *)((void *)(INIClass::ReadBool_Overwrite(&this->q090, aUsetransportor, v47)));
  v16 = (unsigned int)((void *)(INIClass::ReadBool_Overwrite(&this->q090, aRecruiter, this->q0A8)));
  v17 = (gamemd::AbstractClass *)((unsigned int)((void *)(this->q0AC)));
  this->q0A8 = (unsigned int)((gamemd::AbstractClass *)(v16));
  v18 = (gamemd::AbstractClass *)(INIClass::ReadBool_Overwrite(&this->q090, aWhiner, v17));
  v48 = (char)((gamemd::AbstractClass *)(this->q0AF));
  this->q0AC = (unsigned int)((gamemd::AbstractClass *)(v18));
  this->q0AF = (gamemd::AbstractClass *)(INIClass::ReadBool_Overwrite(&this->q090, g_INI_Key_Suicide, v48));
  v19 = (gamemd::AbstractClass *)(INIClass::ReadBool_Overwrite(&this->q090, aLooserecruit, this->u8_AE));
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
  int *p_TeamTypeClass_field_24; // edi
  int v6; // eax
  char *v7; // eax
  char *v8; // eax
  int v9; // eax
  int v10; // esi

  if ( !AbstractTypeClass::WriteINI((AbstractTypeClass *)this, aP1) ) /*0x6f1559*/
    return 0; /*0x6f185b*/
  v3 = this->q031; /*0x6f1566*/
  v4 = -1; /*0x6f156d*/
  if ( v3 ) /*0x6f1573*/
  {
    v4 = *(unsigned int *)(*(unsigned int *)(v3 + 52) + 184); /*0x6f1578*/
  }
  else if ( (uint8_t)BuildingType::IsSpecialType(*((void **)&this->abstractFlags0)) ) /*0x6f1586*/
  {
    v4 = this->u32_C8; /*0x6f158f*/
  }
  p_TeamTypeClass_field_24 = &this->TeamTypeClass_field_24; /*0x6f159d*/
  INIClass::SetInt( /*0x6f15a9*/
    aP1,
    (uint8_t *)&this->TeamTypeClass_field_24,
    (char *)&g_INI_Key_TRUCKA.?[3],
    this->TeamTypeClass_field_28,
    0);
  INIClass::SetInt( /*0x6f15bf*/
    aP1,
    (uint8_t *)&this->TeamTypeClass_field_24,
    (char *)&g_INI_Key_TRUCKA.?[1],
    this->TeamTypeClass_field_30,
    0);
  INIClass::SetBool( /*0x6f15d3*/
    aP1,
    (uint8_t *)&this->TeamTypeClass_field_24,
    (char *)g_INI_Key_TRUCKA.?,
    this->pad_29);
  INIClass::SetBool( /*0x6f15e7*/
    aP1,
    (uint8_t *)&this->TeamTypeClass_field_24,
    (char *)&g_INI_Key_TRUCKA.?,
    this->u32_A5);
  INIClass::SetBool( /*0x6f15fb*/
    aP1,
    (uint8_t *)&this->TeamTypeClass_field_24,
    (char *)&g_INI_Key_TRUCKA.?[1],
    this->u32_A6);
  INIClass::SetBool( /*0x6f160f*/
    aP1,
    (uint8_t *)&this->TeamTypeClass_field_24,
    (char *)g_INI_Key_TRUCKA.?,
    this->u32_A7);
  INIClass::SetHouseName( /*0x6f161d*/
    aP1,
    (uint8_t *)&this->TeamTypeClass_field_24,
    (char *)&g_INI_Key_Special.SidebarImageFile[1],
    (void *)v4);
  INIClass::SetBool( /*0x6f1631*/
    aP1,
    (uint8_t *)&this->TeamTypeClass_field_24,
    (char *)&g_INI_Key_TRUCKA.?,
    this->u32_A8);
  INIClass::SetBool( /*0x6f1645*/
    aP1,
    (uint8_t *)&this->TeamTypeClass_field_24,
    (char *)&g_INI_Key_TRUCKA.?[1],
    this->u32_A9);
  INIClass::SetBool( /*0x6f1659*/
    aP1,
    (uint8_t *)&this->TeamTypeClass_field_24,
    (char *)g_INI_Key_TRUCKA.?,
    this->u32_AA);
  INIClass::SetBool( /*0x6f166d*/
    aP1,
    (uint8_t *)&this->TeamTypeClass_field_24,
    &g_INI_Key_TRUCKA.?[14],
    this->u32_AB);
  INIClass::SetBool( /*0x6f1681*/
    aP1,
    (uint8_t *)&this->TeamTypeClass_field_24,
    &g_INI_Key_TRUCKA.?[6],
    this->TeamTypeClass_field_2C);
  INIClass::SetBool( /*0x6f1695*/
    aP1,
    (uint8_t *)&this->TeamTypeClass_field_24,
    &g_INI_Key_TRUCKA.?[4],
    this->u32_B1);
  INIClass::SetBool( /*0x6f16a9*/
    aP1,
    (uint8_t *)&this->TeamTypeClass_field_24,
    (char *)&g_INI_Key_TRUCKA.?[18],
    this->q02B);
  INIClass::SetBool( /*0x6f16bd*/
    aP1,
    (uint8_t *)&this->TeamTypeClass_field_24,
    (char *)&g_INI_Key_TRUCKA.?[12],
    this->u32_AE);
  INIClass::SetBool( /*0x6f16d1*/
    aP1,
    (uint8_t *)&this->TeamTypeClass_field_24,
    (char *)&g_INI_Key_TRUCKA.?[9],
    this->u32_AD);
  INIClass::SetBool( /*0x6f16e5*/
    aP1,
    (uint8_t *)&this->TeamTypeClass_field_24,
    (char *)&g_INI_Key_TRUCKA.?[16],
    this->u32_AF);
  INIClass::SetInt( /*0x6f16fb*/
    aP1,
    (uint8_t *)&this->TeamTypeClass_field_24,
    (char *)&g_INI_Key_TRUCKA.?[3],
    this->u32_B4,
    0);
  INIClass::SetInt( /*0x6f1711*/
    aP1,
    (uint8_t *)&this->TeamTypeClass_field_24,
    (char *)&g_INI_Key_TRUCKA.?[2],
    this->u32_B8,
    0);
  INIClass::SetInt(aP1, (uint8_t *)&this->TeamTypeClass_field_24, g_INI_Key_TechLevel, this->alignmentPadding, 0); /*0x6f1727*/
  INIClass::SetInt(aP1, (uint8_t *)&this->TeamTypeClass_field_24, g_INI_Key_Group, this->u32_9C, 0); /*0x6f173d*/
  INIClass::SetBool( /*0x6f1751*/
    aP1,
    (uint8_t *)&this->TeamTypeClass_field_24,
    (char *)&g_INI_Key_TRUCKA.?[6],
    this->u32_B3);
  INIClass::SetBool( /*0x6f1765*/
    aP1,
    (uint8_t *)&this->TeamTypeClass_field_24,
    &g_INI_Key_TRUCKA.?[1],
    this->u32_F2);
  INIClass::SetBool(aP1, (uint8_t *)&this->TeamTypeClass_field_24, &g_INI_Key_TRUCKA.?, this->u32_F3); /*0x6f1779*/
  INIClass::SetBool( /*0x6f178d*/
    aP1,
    (uint8_t *)&this->TeamTypeClass_field_24,
    &g_INI_Key_TRUCKA.?[4],
    this->UINameLabel);
  INIClass::SetBool( /*0x6f17a1*/
    aP1,
    (uint8_t *)&this->TeamTypeClass_field_24,
    &g_INI_Key_TRUCKA.?[147],
    this->u32_F5);
  INIClass::SetBool( /*0x6f17b5*/
    aP1,
    (uint8_t *)&this->TeamTypeClass_field_24,
    g_INI_Key_IsBaseDefense,
    this->u32_F6);
  INIClass::SetBool( /*0x6f17c9*/
    aP1,
    (uint8_t *)&this->TeamTypeClass_field_24,
    &g_INI_Key_TRUCKA.?[5],
    this->u32_F7);
  v6 = this->TeamTypeClass_field_34; /*0x6f17ce*/
  if ( v6 ) /*0x6f17d6*/
    INIClass::SetString(aP1, (uint8_t *)&this->TeamTypeClass_field_24, off_81728C, (char *)(v6 + 36)); /*0x6f17e4*/
  v7 = Waypoint::To_String(this->u32_D4); /*0x6f17ef*/
  INIClass::SetString(aP1, (uint8_t *)&this->TeamTypeClass_field_24, aWaypoint, v7); /*0x6f17fd*/
  v8 = Waypoint::To_String(this->u32_D8); /*0x6f1808*/
  INIClass::SetString(aP1, (uint8_t *)&this->TeamTypeClass_field_24, &g_INI_Key_TRUCKA.?[127], v8); /*0x6f1816*/
  v9 = this->TeamTypeClass_field_38; /*0x6f181b*/
  if ( v9 ) /*0x6f1823*/
    INIClass::SetString( /*0x6f1831*/
      aP1,
      (uint8_t *)&this->TeamTypeClass_field_24,
      &g_INI_Key_Special.?[8],
      (char *)(v9 + 36));
  v10 = this->u32_E4; /*0x6f1836*/
  if ( v10 ) /*0x6f183e*/
    INIClass::SetString(aP1, (uint8_t *)p_TeamTypeClass_field_24, aTaskforce, (char *)(v10 + 36)); /*0x6f184c*/
  return 1; /*0x6f1853*/
}
}
// 0x6F1870
namespace gamemd {
int TeamTypeClass::GetGroup()
{
  int result; // eax
  int v2; // ecx

  result = this->u32_9C; /*0x6f1870*/
  if ( result == -1 ) /*0x6f1879*/
  {
    v2 = this->u32_E4; /*0x6f1880*/
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

  v2 = this->u32_D8; /*0x6f18e1*/
  if ( v2 == -1 ) /*0x6f18ea*/
  {
    *a2 = *(unsigned int *)&g_BuildingLoadQueue_Array.?[59]; /*0x6f18f6*/
    return a2; /*0x6f18ec*/
  }
  else
  {
    v4 = *ScenarioClass::Get_Waypoint_Location((char *)dword_A8B230, &this, v2); /*0x6f190d*/
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
  Power::TimerProcess(this->u32_9C); /*0x6f1c97*/
  IDA_LOBYTE(v3) = this->u32_A8; /*0x6f1c9c*/
  Power::FlagProcess((Power *)a2, v3); /*0x6f1ca5*/
  IDA_LOBYTE(v4) = this->u32_A9; /*0x6f1caa*/
  v5 = Power::FlagProcess((Power *)a2, v4); /*0x6f1cb3*/
  IDA_LOBYTE(v5) = this->u32_AA; /*0x6f1cb8*/
  Power::FlagProcess((Power *)a2, v5); /*0x6f1cc1*/
  IDA_LOBYTE(v6) = this->u32_AB; /*0x6f1cc6*/
  Power::FlagProcess((Power *)a2, v6); /*0x6f1ccf*/
  IDA_LOBYTE(v7) = this->q02B; /*0x6f1cd4*/
  v8 = Power::FlagProcess((Power *)a2, v7); /*0x6f1cdd*/
  IDA_LOBYTE(v8) = this->u32_AD; /*0x6f1ce2*/
  Power::FlagProcess((Power *)a2, v8); /*0x6f1ceb*/
  IDA_LOBYTE(v9) = this->u32_AE; /*0x6f1cf0*/
  Power::FlagProcess((Power *)a2, v9); /*0x6f1cf9*/
  IDA_LOBYTE(v10) = this->u32_AF; /*0x6f1cfe*/
  v11 = Power::FlagProcess((Power *)a2, v10); /*0x6f1d07*/
  IDA_LOBYTE(v11) = this->TeamTypeClass_field_2C; /*0x6f1d0c*/
  Power::FlagProcess((Power *)a2, v11); /*0x6f1d15*/
  IDA_LOBYTE(v12) = this->u32_B1; /*0x6f1d1a*/
  Power::FlagProcess((Power *)a2, v12); /*0x6f1d23*/
  Power::TimerProcess(this->u32_B4); /*0x6f1d31*/
  Power::TimerProcess(this->u32_B8); /*0x6f1d3f*/
  Power::TimerProcess(this->q02F); /*0x6f1d4d*/
  v13 = this->q031; /*0x6f1d52*/
  if ( v13 ) /*0x6f1d5a*/
  {
    v14 = (*(int (__thiscall **)(int))(*(unsigned int *)v13 + 44))(v13); /*0x6f1d5e*/
    Power::TimerProcess(v14); /*0x6f1d64*/
  }
  v15 = this->q031; /*0x6f1d69*/
  if ( v15 ) /*0x6f1d71*/
  {
    v16 = (*(int (__stdcall **)(int))(*(unsigned int *)(v15 + 4) + 16))(v15 + 4); /*0x6f1d7a*/
    Power::TimerProcess(v16); /*0x6f1d80*/
  }
  Power::TimerProcess(this->alignmentPadding); /*0x6f1d8e*/
  v17 = this->TeamTypeClass_field_34; /*0x6f1d93*/
  if ( v17 ) /*0x6f1d9b*/
  {
    v18 = (*(int (__stdcall **)(int))(*(unsigned int *)(v17 + 4) + 16))(v17 + 4); /*0x6f1da4*/
    Power::TimerProcess(v18); /*0x6f1daa*/
  }
  Power::TimerProcess(this->u32_D4); /*0x6f1db8*/
  Power::TimerProcess(this->u32_D8); /*0x6f1dc6*/
  Power::TimerProcess(this->u32_DC); /*0x6f1dd4*/
  result = this->TeamTypeClass_field_38; /*0x6f1dd9*/
  if ( result ) /*0x6f1de1*/
  {
    v20 = (*(int (__stdcall **)(int))(result->Prev + 16))(result + 4); /*0x6f1dea*/
    result = Power::TimerProcess(v20); /*0x6f1df0*/
  }
  v21 = this->u32_E4; /*0x6f1df5*/
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
  result = this->u32_E4; /*0x6f1fa9*/
  this->TeamTypeClass_field_3C = 1; /*0x6f1faf*/
  this->u32_F1 = 0; /*0x6f1fb6*/
  this->q03B = 9; /*0x6f1fbc*/
  if ( *(int *)(result + 156) > 0 ) /*0x6f1fcc*/
  {
    v4 = 168; /*0x6f1fcf*/
    do /*0x6f201d*/
    {
      v5 = *(unsigned int *)(result + v4); /*0x6f1fd4*/
      if ( *(unsigned char *)(v5 + 3278) ) /*0x6f1fd7*/
      {
        if ( *(unsigned int *)(v5 + 1504) ) /*0x6f1fdf*/
          this->u32_F1 = 1; /*0x6f1fef*/
        else
          this->TeamTypeClass_field_3C = 0; /*0x6f1fe7*/
      }
      this->q03B = globalHelper_0889F0(*(unsigned int *)(v5 + 1460), this->q03B); /*0x6f2007*/
      result = this->u32_E4; /*0x6f200d*/
      ++v2; /*0x6f2013*/
      v4 += 8; /*0x6f2014*/
    }
    while ( v2 < *(unsigned int *)(result + 156) ); /*0x6f201d*/
  }
  if ( this->u32_F6 ) /*0x6f2020*/
    this->TeamTypeClass_field_3C = 0; /*0x6f2028*/
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
  TeamTypeClass *v6; // [esp+4h] [ebp-4h] BYREF

  this->AbstractClass = (void*)&TeamTypeClass_vftable; /*0x6f20d6*/
  this->? = (void*)&TeamTypeClass_vftable; /*0x6f20dc*/
  this->? = (void*)&TeamTypeClass_vftable; /*0x6f20e3*/
  this->? = (void*)&TeamTypeClass_vftable; /*0x6f20ea*/
  AbstractClass::AnnounceExpiredPointer(&this->AbstractClass, 1); /*0x6f20f1*/
  v6 = this; /*0x6f2106*/
  v3 = (*(int (__thiscall **)(unsigned char *, TeamTypeClass **))(*(unsigned int *)&stru_A8EB00.?[188] + 16))( /*0x6f210a*/
         &stru_A8EB00.?[188],
         &v6);
  if ( v3 != -1 && v3 < *(int *)&stru_A8EB00.?[204] ) /*0x6f211a*/
  {
    --*(unsigned int *)&stru_A8EB00.?[204]; /*0x6f211f*/
    for ( ; /*0x6f2125*/
          v3 < *(int *)&stru_A8EB00.?[204];
          *(unsigned int *)(*(unsigned int *)&stru_A8EB00.?[192] + 4 * v3 - 4) = *(unsigned int *)(*(unsigned int *)&stru_A8EB00.?[192] + 4 * v3) )
    {
      ++v3; /*0x6f212d*/
    }
  }
  v6 = this; /*0x6f214f*/
  v4 = (*(int (__thiscall **)(int *, TeamTypeClass **))(g_BuildingLoadQueue_Array.LightVisibility + 16))( /*0x6f2153*/
         &g_BuildingLoadQueue_Array.LightVisibility,
         &v6);
  if ( v4 != -1 && v4 < g_BuildingLoadQueue_Array.LightBlueTint ) /*0x6f2163*/
  {
    --g_BuildingLoadQueue_Array.LightBlueTint; /*0x6f2168*/
    for ( ; /*0x6f216e*/
          v4 < g_BuildingLoadQueue_Array.LightBlueTint;
          *(unsigned int *)(g_BuildingLoadQueue_Array.LightIntensity + 4 * v4 - 4) = *(unsigned int *)(g_BuildingLoadQueue_Array.LightIntensity
                                                                                         + 4 * v4) )
    {
      ++v4; /*0x6f2176*/
    }
  }
  AbstractTypeClass::Dtor(); /*0x6f218a*/
  if ( (a2 & 1) != 0 ) /*0x6f2194*/
    RA2_OPDEL(); /*0x6f2197*/
  return &this->AbstractClass; /*0x6f21a1*/
}
} // namespace gamemd

// 0x6F22F0
namespace gamemd {
AbstractClass * * TeamTypeClass_28::Release(int a2, int * a3)
{
  int *v4; // ebx
  int *v5; // eax
  int *v6; // edi
  unsigned int *v7; // eax
  int v8; // ecx
  int *v9; // eax
  int v10; // ecx
  int m_8; // ecx
  int v13; // eax
  int v14; // edx
  int v15; // eax

  if ( a2 ) /*0x6f22fc*/
  {
    v4 = a3; /*0x6f2302*/
    IDA_LOBYTE(this->m_C) = 0; /*0x6f2306*/
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
    IDA_LOBYTE(this->m_C) = 1; /*0x6f2362*/
    if ( v6 ) /*0x6f2366*/
    {
      if ( *(unsigned int *)&this->m_1[3] ) /*0x6f2371*/
      {
        m_8 = this->m_8; /*0x6f2378*/
        if ( a2 < m_8 ) /*0x6f237d*/
          m_8 = a2; /*0x6f237f*/
        v13 = 0; /*0x6f2381*/
        if ( m_8 > 0 ) /*0x6f2385*/
        {
          do /*0x6f239d*/
          {
            v14 = *(unsigned int *)&this->m_1[3]; /*0x6f2387*/
            ++v13; /*0x6f238a*/
            v6[2 * v13 - 2] = *(unsigned int *)(v14 + 8 * v13 - 8); /*0x6f2391*/
            v6[2 * v13 - 1] = *(unsigned int *)(v14 + 8 * v13 - 4); /*0x6f2399*/
          }
          while ( v13 < m_8 ); /*0x6f239d*/
          v4 = a3; /*0x6f239f*/
        }
        if ( IDA_BYTE1(this->m_C) ) /*0x6f23a3*/
        {
          v15 = *(unsigned int *)&this->m_1[3]; /*0x6f23aa*/
          if ( v15 ) /*0x6f23af*/
            RA2_OPDEL((void *)(v15 - 4)); /*0x6f23b9*/
          *(unsigned int *)&this->m_1[3] = 0; /*0x6f23c1*/
        }
      }
      *(unsigned int *)&this->m_1[3] = v6; /*0x6f23ca*/
      this->m_8 = a2; /*0x6f23d2*/
      IDA_BYTE1(this->m_C) = v4 == 0; /*0x6f23d5*/
      return 1; /*0x6f23db*/
    }
    else
    {
      return 0; /*0x6f236b*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_V_DistributionObject_PAVAITriggerTypeClass_DiscreteDistributionClass_VAITriggerTypeClass *))(*(unsigned int *)this->__pad_0 + 12))(this); /*0x6f23e5*/
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
  int *v6; // edi
  unsigned int *v7; // eax
  int v8; // ecx
  int *v9; // eax
  int v10; // ecx
  int m_8; // ecx
  int v12; // eax
  int v13; // edx
  int *v14; // eax
  int *v15; // ebp
  int v16; // eax

  if ( a2 ) /*0x6f24bc*/
  {
    v4 = a2; /*0x6f24c2*/
    IDA_LOBYTE(this->m_C) = 0; /*0x6f24c6*/
    if ( a2 ) /*0x6f24cc*/
    {
      *a2 = a2; /*0x6f2507*/
      v6 = a2 + 1; /*0x6f250c*/
      if ( a2 - 1 >= 0 ) /*0x6f250f*/
      {
        v9 = a2 + 2; /*0x6f2511*/
        v10 = a2; /*0x6f2514*/
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
      v5 = (int *)RA2_OPNEW(8 * a2 + 4); /*0x6f24d6*/
      if ( v5 ) /*0x6f24e0*/
      {
        *v5 = a2; /*0x6f24e5*/
        v6 = v5 + 1; /*0x6f24e9*/
        if ( a2 - 1 >= 0 ) /*0x6f24ec*/
        {
          v7 = v5 + 2; /*0x6f24ee*/
          v8 = a2; /*0x6f24f1*/
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
    IDA_LOBYTE(this->m_C) = 1; /*0x6f2523*/
    if ( !v6 ) /*0x6f2527*/
      return 0; /*0x6f25c7*/
    if ( *(unsigned int *)&this->m_1[3] ) /*0x6f252d*/
    {
      m_8 = this->m_8; /*0x6f2534*/
      if ( a2 < m_8 ) /*0x6f2539*/
        m_8 = a2; /*0x6f253b*/
      v12 = 0; /*0x6f253d*/
      if ( m_8 > 0 ) /*0x6f2541*/
      {
        do /*0x6f2559*/
        {
          v13 = *(unsigned int *)&this->m_1[3]; /*0x6f2543*/
          ++v12; /*0x6f2546*/
          v6[2 * v12 - 2] = *(unsigned int *)(v13 + 8 * v12 - 8); /*0x6f254d*/
          v6[2 * v12 - 1] = *(unsigned int *)(v13 + 8 * v12 - 4); /*0x6f2555*/
        }
        while ( v12 < m_8 ); /*0x6f2559*/
        v4 = a2; /*0x6f255b*/
      }
      if ( IDA_BYTE1(this->m_C) ) /*0x6f255f*/
      {
        v14 = *(int **)&this->m_1[3]; /*0x6f2566*/
        if ( v14 ) /*0x6f256b*/
        {
          v15 = v14 - 1; /*0x6f2570*/
          Array::ForEachReverse(v14, 8, *(v14 - 1), (int (__thiscall *)(int))nullsub_240); /*0x6f257c*/
          RA2_OPDEL(v15); /*0x6f2582*/
          v4 = a2; /*0x6f2587*/
        }
        *(unsigned int *)&this->m_1[3] = 0; /*0x6f258e*/
      }
    }
    *(unsigned int *)&this->m_1[3] = v6; /*0x6f2597*/
    this->m_8 = a2; /*0x6f259f*/
    IDA_BYTE1(this->m_C) = v4 == 0; /*0x6f25a2*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_V_DistributionObject_PAVAITriggerTypeClass_DiscreteDistributionClass_VAITriggerTypeClass *))(*(unsigned int *)this->__pad_0 + 12))(this); /*0x6f25ab*/
  }
  v16 = this->m_8; /*0x6f25ae*/
  if ( v16 < this->m_10 ) /*0x6f25b6*/
    this->m_10 = v16; /*0x6f25b8*/
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
  if ( *(int *)&stru_A8EB00.?[204] <= 0 ) /*0x6f0fd1*/
    return 0; /*0x6f1010*/
  while ( _strcmpi((char *)this, (char *)(*(unsigned int *)(*(unsigned int *)&stru_A8EB00.?[192] + 4 * v2) + 36)) /*0x6f1004*/
       && _strcmpi((char *)this, (char *)(*(unsigned int *)(*(unsigned int *)&stru_A8EB00.?[192] + 4 * v2) + 100)) )
  {
    if ( ++v2 >= *(int *)&stru_A8EB00.?[204] ) /*0x6f100e*/
      return 0; /*0x6f100e*/
  }
  return *(unsigned int *)(*(unsigned int *)&stru_A8EB00.?[192] + 4 * v2); /*0x6f1010*/
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

  KeyCount = INIClass::GetKeyCount(a1->__pad_0, (uint8_t *)g_INI_Key_TRUCKA.?); /*0x6f1ac5*/
  for ( i = 0; i < KeyCount; ++i ) /*0x6f1acb*/
  {
    StringByIndex = (uint8_t *)INIClass::GetStringByIndex(a1->__pad_0, (uint8_t *)g_INI_Key_TRUCKA.?, i); /*0x6f1ad5*/
    INIClass::GetString(a1, (uint8_t *)g_INI_Key_TRUCKA.?, StringByIndex, &g_INI_DefaultBuffer, Buffer, 32); /*0x6f1aee*/
    INIClass::ClearSection((int *)a1->__pad_0, (int)Buffer, 0); /*0x6f1afc*/
  }
  INIClass::ClearSection((int *)a1->__pad_0, (int)g_INI_Key_TRUCKA.?, 0); /*0x6f1b0f*/
  result = *(unsigned int *)&stru_A8EB00.?[204]; /*0x6f1b14*/
  v8 = 0; /*0x6f1b19*/
  for ( j = 0; j < *(int *)&stru_A8EB00.?[204]; ++j ) /*0x6f1b1f*/
  {
    if ( *(unsigned int *)(*(unsigned int *)(*(unsigned int *)&stru_A8EB00.?[192] + 4 * j) + 232) == a2 ) /*0x6f1b2f*/
    {
      v10 = v8++; /*0x6f1b37*/
      sprintf(Buffer, "%d", v10); /*0x6f1b3f*/
      INIClass::SetString( /*0x6f1b5f*/
        a1->__pad_0,
        (uint8_t *)g_INI_Key_TRUCKA.?,
        Buffer,
        (char *)(*(unsigned int *)(*(unsigned int *)&stru_A8EB00.?[192] + 4 * j) + 36));
      (*(void (__thiscall **)(unsigned int, INIClass *))(**(unsigned int **)(*(unsigned int *)&stru_A8EB00.?[192] + 4 * j) + 104))( /*0x6f1b6f*/
        *(unsigned int *)(*(unsigned int *)&stru_A8EB00.?[192] + 4 * j),
        a1);
    }
    result = *(unsigned int *)&stru_A8EB00.?[204]; /*0x6f1b72*/
  }
  return result; /*0x6f1b7c*/
}
} // namespace gamemd

// 0x6F1B90
namespace gamemd {
int TeamTypeClass::SaveToINI(TechnoTypeClass * aP0, int * a1, int aP2)
{
  int result; // eax

  result = AbstractClass::SaveLoad_Prefix((int *)aP0, a1, aP2); /*0x6f1b9f*/
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
      aP0->AbstractClass = (void*)&TeamTypeClass_vftable; /*0x6f1bd4*/
      aP0->? = (void*)&TeamTypeClass_vftable; /*0x6f1bda*/
      aP0->? = (void*)&TeamTypeClass_vftable; /*0x6f1be1*/
      aP0->? = (void*)&TeamTypeClass_vftable; /*0x6f1be8*/
    }
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)aP0 + 49); /*0x6f1bfb*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)aP0 + 52); /*0x6f1c0c*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)aP0 + 56); /*0x6f1c1d*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)aP0 + 57); /*0x6f1c2e*/
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
  a2[3] = unk_7E978C; /*0x6f1c70*/
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

  result = (int)FootClass_Array.?; /*0x6f1f30*/
  for ( i = 0; i < (int)FootClass_Array.?; ++i ) /*0x6f1f3d*/
  {
    v5 = *((unsigned int *)&FootClass_Array.?->ObjectClass + i); /*0x6f1f49*/
    if ( *(TeamTypeClass **)(v5 + 36) == this ) /*0x6f1f4f*/
      TeamTypeClass::Check((TeamTypeClass *)v5, aP1); /*0x6f1f52*/
    result = (int)FootClass_Array.?; /*0x6f1f57*/
  }
  return result; /*0x6f1f62*/
}
} // namespace gamemd

// 0x6F1F70
namespace gamemd {
int TeamTypeClass::FindFirstInstance()
{
  int v1; // edx
  ParticleSystemClass *i; // esi
  int result; // eax

  v1 = 0; /*0x6f1f78*/
  if ( (int)FootClass_Array.? <= 0 ) /*0x6f1f7c*/
    return 0; /*0x6f1f93*/
  for ( i = FootClass_Array.?; ; i = (ParticleSystemClass *)((char *)i + 4) ) /*0x6f1f7e*/
  {
    result = (int)i->ObjectClass; /*0x6f1f84*/
    if ( *((TeamTypeClass **)i->ObjectClass + 9) == this ) /*0x6f1f89*/
      break; /*0x6f1f89*/
    if ( ++v1 >= (int)FootClass_Array.? ) /*0x6f1f91*/
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

  v2 = *(unsigned int *)&this->m_1[3]; /*0x6f21b6*/
  this->m_10 = 0; /*0x6f21b9*/
  if ( v2 && IDA_BYTE1(this->m_C) ) /*0x6f21c0*/
  {
    RA2_OPDEL((void *)(v2 - 4)); /*0x6f21d1*/
    *(unsigned int *)&this->m_1[3] = 0; /*0x6f21d9*/
  }
  IDA_BYTE1(this->m_C) = 0; /*0x6f21dc*/
  this->m_8 = 0; /*0x6f21df*/
}
} // namespace gamemd

// 0x6F21F0
namespace gamemd {
unsigned int TeamTypeClass_28::PointerToIndex(int a2)
{
  if ( IDA_LOBYTE(this->m_C) ) /*0x6f21f0*/
    return (unsigned int)(a2 - *(unsigned int *)&this->m_1[3]) >> 3; /*0x6f2205*/
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

  v3 = *(unsigned int *)&this->m_1[3]; /*0x6f2210*/
  v4 = *(unsigned int *)(v3 + 8 * a3); /*0x6f2217*/
  v5 = v3 + 8 * a3; /*0x6f221a*/
  *a2 = v4; /*0x6f2221*/
  a2[1] = *(unsigned int *)(v5 + 4); /*0x6f2226*/
  return a2; /*0x6f2229*/
}
} // namespace gamemd

// 0x6F2290
namespace gamemd {
char TeamTypeClass_28::AddRef(int v4)
{
  int m_8; // edi
  int v3; // esi
  int v4; // edx
  unsigned int *v5; // eax
  unsigned int *v6; // ecx
  int v7; // edx

  m_8 = this->m_8; /*0x6f229b*/
  if ( m_8 == *(unsigned int *)(v4 + 8) ) /*0x6f22a0*/
  {
    v3 = 0; /*0x6f22a2*/
    if ( m_8 <= 0 ) /*0x6f22a6*/
      return 1; /*0x6f22d6*/
    v4 = *(unsigned int *)(v4 + 4); /*0x6f22a8*/
    v5 = *(unsigned int **)&this->m_1[3]; /*0x6f22ab*/
    v6 = (unsigned int *)(v4 + 4); /*0x6f22ae*/
    v7 = v4 - (unsigned int)v5; /*0x6f22b1*/
    while ( *v5 == *(unsigned int *)((char *)v5 + v7) && v5[1] == *v6 ) /*0x6f22c3*/
    {
      ++v3; /*0x6f22c5*/
      v6 += 2; /*0x6f22c6*/
      v5 += 2; /*0x6f22c9*/
      if ( v3 >= m_8 ) /*0x6f22ce*/
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

  v2 = *(unsigned int *)&this->m_1[3]; /*0x6f2406*/
  if ( v2 && IDA_BYTE1(this->m_C) ) /*0x6f240d*/
  {
    RA2_OPDEL((void *)(v2 - 4)); /*0x6f241e*/
    *(unsigned int *)&this->m_1[3] = 0; /*0x6f2426*/
  }
  IDA_BYTE1(this->m_C) = 0; /*0x6f2429*/
  this->m_8 = 0; /*0x6f242c*/
}
} // namespace gamemd

// 0x6F2440
namespace gamemd {
int TeamTypeClass_28::Read(unsigned int * a2)
{
  int result; // eax
  int m_8; // edx
  unsigned int *i; // ecx

  if ( !IDA_LOBYTE(this->m_C) ) /*0x6f2440*/
    return 0; /*0x6f244e*/
  m_8 = this->m_8; /*0x6f2454*/
  result = 0; /*0x6f2457*/
  if ( m_8 <= 0 ) /*0x6f245b*/
    return -1; /*0x6f247c*/
  for ( i = *(unsigned int **)&this->m_1[3]; *i != *a2 || i[1] != a2[1]; i += 2 ) /*0x6f2461*/
  {
    if ( ++result >= m_8 ) /*0x6f247a*/
      return -1; /*0x6f247a*/
  }
  return result; /*0x6f244b*/
}
} // namespace gamemd

// 0x6F2490
namespace gamemd {
unsigned int TeamTypeClass_28::Write(int a2)
{
  if ( IDA_LOBYTE(this->m_C) ) /*0x6f2490*/
    return (unsigned int)(a2 - *(unsigned int *)&this->m_1[3]) >> 3; /*0x6f24a5*/
  else
    return 0; /*0x6f2497*/
}
} // namespace gamemd

// 0x6F2640
namespace gamemd {
int TeamTypeClass_28::FindItem(unsigned int * a2)
{
  int m_10; // edx
  int result; // eax
  unsigned int *i; // ecx

  m_10 = this->m_10; /*0x6f2640*/
  result = 0; /*0x6f2645*/
  if ( m_10 <= 0 ) /*0x6f264b*/
    return -1; /*0x6f266c*/
  for ( i = *(unsigned int **)&this->m_1[3]; *i != *a2 || i[1] != a2[1]; i += 2 ) /*0x6f2651*/
  {
    if ( ++result >= m_10 ) /*0x6f266a*/
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

  v3 = *(unsigned int *)&this->m_1[3]; /*0x6f2683*/
  *(unsigned int *)this->__pad_0 = (void*)&VectorClass_DiscreteDistributionClass_AITriggerTypeClass_DistributionObject_AITriggerTypeClass___vftable; /*0x6f2686*/
  if ( v3 && IDA_BYTE1(this->m_C) ) /*0x6f2690*/
  {
    RA2_OPDEL((void *)(v3 - 4)); /*0x6f26a3*/
    *(unsigned int *)&this->m_1[3] = 0; /*0x6f26ab*/
  }
  IDA_BYTE1(this->m_C) = 0; /*0x6f26b6*/
  this->m_8 = 0; /*0x6f26bc*/
  if ( (a2 & 1) != 0 ) /*0x6f26c3*/
    RA2_OPDEL(); /*0x6f26c6*/
  return this->__pad_0; /*0x6f26d0*/
}
} // namespace gamemd

// 0x6F2720
namespace gamemd {
DynamicVector * TeamTypeClass_28::Constructor(char a2)
{
  int v3; // eax

  v3 = *(unsigned int *)&this->m_1[3]; /*0x6f2723*/
  *(unsigned int *)this->__pad_0 = (void*)&VectorClass_DiscreteDistributionClass_AITriggerTypeClass_DistributionObject_AITriggerTypeClass___vftable; /*0x6f2726*/
  if ( v3 && IDA_BYTE1(this->m_C) ) /*0x6f2730*/
  {
    RA2_OPDEL((void *)(v3 - 4)); /*0x6f2743*/
    *(unsigned int *)&this->m_1[3] = 0; /*0x6f274b*/
  }
  IDA_BYTE1(this->m_C) = 0; /*0x6f2756*/
  this->m_8 = 0; /*0x6f275c*/
  if ( (a2 & 1) != 0 ) /*0x6f2763*/
    RA2_OPDEL(); /*0x6f2766*/
  return this->__pad_0; /*0x6f2770*/
}
} // namespace gamemd
