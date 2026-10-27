// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/INIClass_e4.hpp"
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
#include "e4/classes/Frame_e4.hpp"
#include "e4/classes/TagTypeClass_e4.hpp"
#include "e4/classes/SuperWeaponTypeClass_e4.hpp"
#include "e4/classes/HouseClass_e4.hpp"
#include "e4/classes/ObjectPtr_e4.hpp"
#include "e4/classes/ParticleSystemClass_e4.hpp"
#include "e4/classes/CCINIClass_e4.hpp"
// X129: fresh-render label declarations (auto, idempotent)
extern unsigned char aScript[7];  // data: 0x817348
// [w18j2] C2065 function supply (raw-evidenced)
namespace gamemd { int nullsub_240(void *p_this); }  // x4:ida@0x6f25d0

// 0x4C98B0
namespace gamemd {  // G42.18 ns repair
int TeamTypeClass::Construct(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8, void *a9)
{


  ((AbstractClass *)this)->Constructor(); /*0x4c98b7*/
  this->TeamTypeClass_field_24 = 0; /*0x4c98be*/
  this->TeamTypeClass_field_28 = 0; /*0x4c98c1*/
  int v2; // eax
  v2 = *(unsigned int *)&DataGlobal_A8EB00[644]; /*0x4c98c4*/
  this->TeamTypeClass_field_34 = 0; /*0x4c98c9*/
  this->TeamTypeClass_field_2C = v2; /*0x4c98cc*/
  this->TeamTypeClass_field_38 = 0; /*0x4c98d4*/
  this->TeamTypeClass_field_3C = 1; /*0x4c98d7*/
  this->taskForceCount = 0; /*0x4c98da*/
  this->taskForceCapacity = 0; /*0x4c98dd*/
  this->__pad_4C = 1; /*0x4c98e0*/
  this->__pad_4C[1] = 0; /*0x4c98e3*/
  /* X11: ptr_0 install elided (X67 recv-slot, RHS g_ptr_7E3238) */  /*0x4c98e6*/
  *&this->taskForceCapacity = 10; /*0x4c98ed*/
  *&this->taskForceCount = 0; /*0x4c98f4*/
  this->TeamTypeClass_field_71 = 1; /*0x4c98f7*/
  this->TeamTypeClass_field_58 = 0; /*0x4c98fd*/
  this->TeamTypeClass_field_5C = 0; /*0x4c9901*/
  this->TeamTypeClass_field_5D = 0; /*0x4c9904*/
  this->TeamTypeClass_field_60 = 0; /*0x4c9907*/
  this->TeamTypeClass_field_64 = 0; /*0x4c990a*/
  this->TeamTypeClass_field_68 = -1; /*0x4c990d*/
  this->TeamTypeClass_field_6C = 0; /*0x4c9914*/
  this->TeamTypeClass_field_70 = 0; /*0x4c9917*/
  /* X11: ptr_0 install elided (base-interface slot, RHS g_ptr_7E88A4) */  /*0x4c991a*/
  /* X11: ptr_0 install elided (X67 recv-slot, RHS g_ptr_7E88A4) */  /*0x4c9920*/
  /* X11: ptr_0 install elided (implicit via FactoryClass virtuals 0x4c9926) */
  /* X11: ptr_0 install elided (implicit via FactoryClass virtuals 0x4c992d) */
  ((AbstractClass *)&this->ptr_4)->GenerateUniqueID(); /*0x4c9934*/
  if ( *(int *)&stru_A83D50.__pad_C8[40] < *(int *)&stru_A83D50.__pad_C8[32] /*0x4c996d*/
    || (stru_A83D50.__pad_C8[37] || !*(unsigned int *)&stru_A83D50.__pad_C8[32])
    && *(int *)&stru_A83D50.__pad_C8[44] > 0
    && (*(unsigned __int8 (**)(char *, int, unsigned int))(*(unsigned int *)&stru_A83D50.__pad_C8[24] + 8))(
         &stru_A83D50.__pad_C8[24],
         *(unsigned int *)&stru_A83D50.__pad_C8[32] + *(unsigned int *)&stru_A83D50.__pad_C8[44],
         0) )
  {
    int v3; // eax
    v3 = (*(unsigned int *)&stru_A83D50.__pad_C8[40])++; /*0x4c997a*/
    *(unsigned int *)(*(unsigned int *)&stru_A83D50.__pad_C8[28] + 4 * v3) = this; /*0x4c9989*/
  }
  int v4; // eax
  v4 = *(unsigned int *)&DataGlobal_A8EB00[644]; /*0x4c998c*/
  this->TeamTypeClass_field_38 = 0; /*0x4c9996*/
  this->TeamTypeClass_field_2C = v4; /*0x4c9999*/
  int v7; // [esp+Ch] [ebp-8h]
  this->TeamTypeClass_field_30 = v7; /*0x4c999f*/
  this->TeamTypeClass_field_34 = 0; /*0x4c99a2*/
  this->TeamTypeClass_field_24 = 0; /*0x4c99a5*/
  if ( g_BuildingLoadQueue_Array.Foundation[0] < g_BuildingLoadQueue_Array.ExtraPowerBonus /*0x4c99dc*/
    || (BYTE1(g_BuildingLoadQueue_Array.ExtraPowerDrain) || !g_BuildingLoadQueue_Array.ExtraPowerBonus)
    && g_BuildingLoadQueue_Array.Height > 0
    && (*(unsigned __int8 (**)(int *, int, unsigned int))(g_BuildingLoadQueue_Array.PowerBonus + 8))(
         &g_BuildingLoadQueue_Array.PowerBonus,
         g_BuildingLoadQueue_Array.ExtraPowerBonus + g_BuildingLoadQueue_Array.Height,
         0) )
  {
    int v5; // eax
    v5 = g_BuildingLoadQueue_Array.Foundation[0]++; /*0x4c99e9*/
    *(unsigned int *)(g_BuildingLoadQueue_Array.PowerDrain + 4 * v5) = this; /*0x4c99f8*/
  }
  return (int)this; /*0x4c99fd*/

}
}  // G42.18 ns repair
// 0x691C00
namespace gamemd {
void * TeamTypeClass::CreateScriptType(char *Source, int a2, int a3, int aP1)
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
    v3 = (int *)__2_YAPAXI_Z(0x234u); /*0x691c62*/
    v4 = v3; /*0x691c6c*/
    if ( v3 ) /*0x691c73*/
    {
      ((AbstractTypeClass *)v3)->Constructor(Source); /*0x691c7c*/
      v4->Coord_9C = 0; /*0x691c81*/
      v4->q0A0 = 0; /*0x691c8b*/
      /* X11: ptr_0 install elided (X67 star-deref, RHS g_var_a2536f) */  /*0x691c95*/
      /* X11: ptr_0 install elided (X67 recv-slot, RHS g_var_a2536f) */  /*0x691c9b*/
      /* X11: ptr_0 install elided (X67 recv-slot, RHS g_var_a2536f) */  /*0x691ca2*/
      /* X11: ptr_0 install elided (X67 recv-slot, RHS g_var_a2536f) */  /*0x691ca9*/
      v5 = dword_8B41D8; /*0x691cb0*/
      if ( dword_8B41D8 < dword_8B41D0 /*0x691cf1*/
        || (byte_8B41D5 || !dword_8B41D0)
        && dword_8B41DC > 0
        && (v6 = (*(int (**)(int *, int, unsigned int))(dword_8B41C8 + 8))(
                   &dword_8B41C8,
                   dword_8B41D0 + dword_8B41DC,
                   0),
            v5 = dword_8B41D8,
            v6) )
      {
        dword_8B41D8 = v5 + 1; /*0x691cf6*/
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
      v4->q098 = v7; /*0x691d26*/
      return v4; /*0x691d30*/
    }
    return 0; /*0x691d3e*/
  }
  while ( _strcmpi((const void *)(*((unsigned int *)dword_8B41CC + v2) + 36), Source) ) /*0x691c52*/
  {
    if ( ++v2 >= dword_8B41D8 ) /*0x691c60*/
      goto LABEL_6; /*0x691c60*/
  }
  return (int *)*((unsigned int *)dword_8B41CC + v2); /*0x691d2e*/

}
}
// 0x6E85F0
namespace gamemd {
AbstractClass * * TeamTypeClass::FindOrCreateTaskForce(char *Source, int a2, int a3, int aP1)
{

  int v2; // esi
  TaskForceClass *v3; // eax

  if ( !_strcmpi(g_Str__none_, Source) || !_strcmpi(g_Str_none, Source) ) /*0x6e860c*/
    return 0; /*0x6e866f*/
  v2 = 0; /*0x6e861d*/
  if ( dword_A8E8E0 <= 0 ) /*0x6e8621*/
  {
    LABEL_6:
    v3 = (TaskForceClass *)__2_YAPAXI_Z(0xD4u); /*0x6e8646*/
    if ( v3 ) /*0x6e8655*/
      return (v3)->Construct(Source); /*0x6e8661*/
    return 0; /*0x6e8655*/
  }
  while ( _strcmpi((char *)(*((unsigned int *)dword_A8E8D4 + v2) + 36), Source) ) /*0x6e863a*/
  {
    if ( ++v2 >= dword_A8E8E0 ) /*0x6e8644*/
      goto LABEL_6; /*0x6e8644*/
  }
  return (gamemd::AbstractClass **)((unsigned int *)*((unsigned int *)dword_A8E8D4 + v2)); /*0x6e865f*/

}
}
// 0x6EF5F0
namespace gamemd {
int TeamTypeClass::Check(int a2, void *a2_2, void *a3)
{


  int result; // eax
  for ( result = *(unsigned int *)&a2_2->__pad_4C[8]; result; result = *(unsigned int *)(result + 1496) ) /*0x6ef5f5*/
    result->u32_F0 = a2_2; /*0x6ef5fb*/
  return result; /*0x6ef60b*/

}
}
// 0x6F0A70
namespace gamemd {
int TeamTypeClass::DestroyAllInstances()
{

  int result; // eax
  result = (int)FootClass_Array.waveEffect; /*0x6f0a70*/
  int i; // esi
  for ( i = 0; i < (int)FootClass_Array.waveEffect; ++i ) /*0x6f0a7d*/
  {
    TeamTypeClass **v4; // ecx
    v4 = (TeamTypeClass **)*((unsigned int *)&FootClass_Array.auxParticles1->ptr_0 + i); /*0x6f0a84*/
    if ( this == v4[9] ) /*0x6f0a8a*/
    {
      if ( v4 ) /*0x6f0a8e*/
        ((void (__thiscall *)(TeamTypeClass **, int))(*v4)->NeedsSaveOrLink)(v4, 1); /*0x6f0a94*/
      --i; /*0x6f0a97*/
    }
    result = (int)FootClass_Array.waveEffect; /*0x6f0a98*/
  }
  return result; /*0x6f0aa2*/
}
}
// 0x6F1030
namespace gamemd {
int TeamTypeClass::GetTeam(int a2, int a3)
{


  int result = a2; // eax /*0x6f1030*/
  if ( this->q0D0 == a2 ) /*0x6f103f*/
    this->q0D0 = 0; /*0x6f1041*/
  if ( this->u32_C4 == a2 ) /*0x6f104d*/
    this->u32_C4 = 0; /*0x6f104f*/
  if ( this->Tactical_E4 == a2 ) /*0x6f105b*/
    this->Tactical_E4 = 0; /*0x6f105d*/
  if ( this->FootClass_E0 == a2 ) /*0x6f1069*/
    this->FootClass_E0 = 0; /*0x6f106b*/
  int v4 = this->FootClass_E0; // ecx /*0x6f1071*/
  if ( v4 ) /*0x6f1079*/
    return (*(int (**)(int, int, int))(*(unsigned int *)v4 + 40))(v4, a2, a3); /*0x6f1083*/
  return result; /*0x6f1086*/

}
}
// 0x6F1090
namespace gamemd {
AbstractClass * * TeamTypeClass::LoadFromINI(unsigned char *** aP1, void *a2, void * aTaskforce, void * aWaypoint)
{

  unsigned int field_E8; // ecx
  int v4; // eax
  HouseClass *v5; // ebp
  unsigned int Int_Overwrite; // eax
  char Bool_Overwrite; // al
  char v8; // cl
  char v9; // al
  char v10; // al
  char v11; // cl
  char v12; // al
  char v13; // al
  char field_D4; // cl
  char v15; // al
  char v16; // al
  char q0D0; // cl
  char v18; // al
  char v19; // al
  char v20; // cl
  char v21; // al
  unsigned int v22; // eax
  unsigned int field_DC; // ecx
  unsigned int v24; // eax
  int v25; // eax
  char *v26; // ebp
  char *v27; // eax
  unsigned int u32_C0; // ecx
  unsigned int v29; // eax
  char v30; // al
  char v31; // cl
  char v32; // al
  char v33; // al
  char v34; // cl
  char v35; // al
  int v36; // ecx
  char *v37; // eax
  char *v38; // eax
  int *v39; // ebp
  int *ScriptType; // eax
  unsigned int *v41; // ebp
  unsigned int *TaskForce; // eax
  unsigned int Tactical_E4; // [esp-Ch] [ebp-D4h]
  char v45; // [esp-Ch] [ebp-D4h]
  char v46; // [esp-Ch] [ebp-D4h]
  char v47; // [esp-Ch] [ebp-D4h]
  char q0D0_high; // [esp-Ch] [ebp-D4h]
  char field_D4_high; // [esp-Ch] [ebp-D4h]
  int v50; // [esp-Ch] [ebp-D4h]
  char v51; // [esp-Ch] [ebp-D4h]
  char v52; // [esp-Ch] [ebp-D4h]
  char v53[64]; // [esp+8h] [ebp-C0h] BYREF
  char Destination[128]; // [esp+48h] [ebp-80h] BYREF

  INIClass::ResetSection((INIClass *)a2);  /*0x6f10a3*/
  if ( !(unsigned __int8)((AbstractTypeClass *)this)->LoadFromINI(a2) )
    return 0;  /*0x6f10b2*/  /*0x6f10b2*/
  field_E8 = this->u32_C4;  /*0x6f10b8*/
  v4 = -1;  /*0x6f10be*/
  if ( field_E8 )
    v4 = *(unsigned int *)(*(unsigned int *)(field_E8 + 52) + 184);  /*0x6f10c8*/  /*0x6f10c3*/
  v5 = (HouseClass *)SuperWeaponTypeClass::FindOrCreate(
                       (SuperWeaponTypeClass *)a2,
                       (unsigned __int8 *)&this->TeamTypeClass_field_24,
                       (unsigned __int8 *)aHouse,
                       v4);  /*0x6f10e1*/
  if ( (unsigned __int8)((BuildingType *)v5)->IsSpecialType() )
  {  /*0x6f10e5*/
    this->u32_C8 = (unsigned int)v5;  /*0x6f10ee*/
    this->u32_C4 = 0;  /*0x6f10f4*/
  }
  else if ( v5 != (HouseClass *)-1 )
  {  /*0x6f1103*/
    this->u32_C4 = (v5)->FindOwner();  /*0x6f110c*/
    this->u32_C8 = -1;  /*0x6f1112*/
  }
  Int_Overwrite = INIClass::ReadInt_Overwrite(
                    (bool *)a2,
                    (unsigned __int8 *)&this->TeamTypeClass_field_24,
                    (unsigned __int8 *)&stru_842DD4.DebrisTypes[1],
                    this->u32_C4);  /*0x6f112b*/
  Tactical_E4 = this->Tactical_E4;  /*0x6f1138*/
  this->u32_C4 = Int_Overwrite;  /*0x6f113f*/
  this->Tactical_E4 = INIClass::ReadInt_Overwrite(
                        (bool *)a2,
                        (unsigned __int8 *)&this->TeamTypeClass_field_24,
                        (unsigned __int8 *)&stru_842DD4.unknown_double_300[1],
                        Tactical_E4);  /*0x6f114a*/
  Bool_Overwrite = INIClass::ReadBool_Overwrite(
                     (int *)a2,
                     (unsigned __int8 *)&this->TeamTypeClass_field_24,
                     (unsigned __int8 *)&stru_842DD4.SlowdownDistance,
                     this->u32_C8);  /*0x6f115f*/
  v8 = BYTE1(this->u32_C8);  /*0x6f1164*/
  LOBYTE(this->u32_C8) = Bool_Overwrite;  /*0x6f116a*/
  v9 = INIClass::ReadBool_Overwrite(
         (int *)a2,
         (unsigned __int8 *)&this->TeamTypeClass_field_24,
         (unsigned __int8 *)stru_842DD4.ThreatAvoidanceCoefficient,
         v8);  /*0x6f1179*/
  v45 = BYTE2(this->u32_C8);  /*0x6f1186*/
  BYTE1(this->u32_C8) = v9;  /*0x6f118d*/
  BYTE2(this->u32_C8) = INIClass::ReadBool_Overwrite(
                          (int *)a2,
                          (unsigned __int8 *)&this->TeamTypeClass_field_24,
                          (unsigned __int8 *)&stru_842DD4.TargetStrengthCoefficient[1],
                          v45);  /*0x6f1198*/
  v10 = INIClass::ReadBool_Overwrite(
          (int *)a2,
          (unsigned __int8 *)&this->TeamTypeClass_field_24,
          (unsigned __int8 *)stru_842DD4.TargetSpecialThreatCoefficient,
          HIBYTE(this->u32_C8));  /*0x6f11ad*/
  v11 = BYTE1(this->field_CC);  /*0x6f11b2*/
  HIBYTE(this->u32_C8) = v10;  /*0x6f11b8*/
  v12 = INIClass::ReadBool_Overwrite(
          (int *)a2,
          (unsigned __int8 *)&this->TeamTypeClass_field_24,
          (unsigned __int8 *)&stru_842DD4.MyEffectivenessCoefficient[1],
          v11);  /*0x6f11c7*/
  v46 = BYTE2(this->field_CC);  /*0x6f11d4*/
  BYTE1(this->field_CC) = v12;  /*0x6f11db*/
  BYTE2(this->field_CC) = INIClass::ReadBool_Overwrite(
                            (int *)a2,
                            (unsigned __int8 *)&this->TeamTypeClass_field_24,
                            (unsigned __int8 *)stru_842DD4.SpecialThreatValue,
                            v46);  /*0x6f11e6*/
  v13 = INIClass::ReadBool_Overwrite(
          (int *)a2,
          (unsigned __int8 *)&this->TeamTypeClass_field_24,
          (unsigned __int8 *)&stru_842DD4.EliteAbilities[6],
          HIBYTE(this->field_CC));  /*0x6f11fb*/
  field_D4 = this->field_D4;  /*0x6f1200*/
  HIBYTE(this->field_CC) = v13;  /*0x6f1206*/
  v15 = INIClass::ReadBool_Overwrite(
          (int *)a2,
          (unsigned __int8 *)&this->TeamTypeClass_field_24,
          (unsigned __int8 *)&stru_842DD4.VeteranAbilities[16],
          field_D4);  /*0x6f1215*/
  v47 = BYTE1(this->field_D4);  /*0x6f1222*/
  LOBYTE(this->field_D4) = v15;  /*0x6f1229*/
  BYTE1(this->field_D4) = INIClass::ReadBool_Overwrite(
                            (int *)a2,
                            (unsigned __int8 *)&this->TeamTypeClass_field_24,
                            (unsigned __int8 *)&stru_842DD4.IdleRate,
                            v47);  /*0x6f1234*/
  v16 = INIClass::ReadBool_Overwrite(
          (int *)a2,
          (unsigned __int8 *)&this->TeamTypeClass_field_24,
          (unsigned __int8 *)&stru_842DD4.VoxelCaches[18],
          this->field_CC);  /*0x6f1249*/
  q0D0 = this->q0D0;  /*0x6f124e*/
  LOBYTE(this->field_CC) = v16;  /*0x6f1254*/
  v18 = INIClass::ReadBool_Overwrite(
          (int *)a2,
          (unsigned __int8 *)&this->TeamTypeClass_field_24,
          (unsigned __int8 *)&stru_842DD4.VoxelCaches[16],
          q0D0);  /*0x6f1263*/
  q0D0_high = HIBYTE(this->q0D0);  /*0x6f1270*/
  LOBYTE(this->q0D0) = v18;  /*0x6f1277*/
  HIBYTE(this->q0D0) = INIClass::ReadBool_Overwrite(
                         (int *)a2,
                         (unsigned __int8 *)&this->TeamTypeClass_field_24,
                         (unsigned __int8 *)&stru_842DD4.VoxelCaches[14],
                         q0D0_high);  /*0x6f1282*/
  v19 = INIClass::ReadBool_Overwrite(
          (int *)a2,
          (unsigned __int8 *)&this->TeamTypeClass_field_24,
          (unsigned __int8 *)&stru_842DD4.VoxelCaches[10],
          BYTE2(this->q0D0));  /*0x6f1297*/
  v20 = BYTE1(this->q0D0);  /*0x6f129c*/
  BYTE2(this->q0D0) = v19;  /*0x6f12a2*/
  v21 = INIClass::ReadBool_Overwrite(
          (int *)a2,
          (unsigned __int8 *)&this->TeamTypeClass_field_24,
          (unsigned __int8 *)&stru_842DD4.VoxelCaches[7],
          v20);  /*0x6f12b1*/
  field_D4_high = HIBYTE(this->field_D4);  /*0x6f12be*/
  BYTE1(this->q0D0) = v21;  /*0x6f12c5*/
  HIBYTE(this->field_D4) = INIClass::ReadBool_Overwrite(
                             (int *)a2,
                             (unsigned __int8 *)&this->TeamTypeClass_field_24,
                             (unsigned __int8 *)&stru_842DD4.VoxelCaches[4],
                             field_D4_high);  /*0x6f12d0*/
  v22 = INIClass::ReadInt_Overwrite(
          (bool *)a2,
          (unsigned __int8 *)&this->TeamTypeClass_field_24,
          (unsigned __int8 *)&stru_842DD4.VoxelCaches[1],
          this->u32_B4);  /*0x6f12e5*/
  field_DC = this->u32_B8;  /*0x6f12ea*/
  this->u32_B4 = v22;  /*0x6f12f0*/
  v24 = INIClass::ReadInt_Overwrite(
          (bool *)a2,
          (unsigned __int8 *)&this->TeamTypeClass_field_24,
          (unsigned __int8 *)stru_842DD4.VoxelCaches,
          field_DC);  /*0x6f12ff*/
  v50 = *(unsigned int *)&this->u32_CC;  /*0x6f130c*/
  this->u32_B8 = v24;  /*0x6f1313*/
  v25 = INIClass::ReadInt_Overwrite(
          (bool *)a2,
          (unsigned __int8 *)&this->TeamTypeClass_field_24,
          (unsigned __int8 *)g_INI_Key_TechLevel,
          v50);  /*0x6f1319*/
  v26 = *(char **)&this->q0D0;  /*0x6f131e*/
  *(unsigned int *)&this->u32_CC = v25;  /*0x6f1324*/
  if ( (((INIClass *)a2)->GetString((unsigned __int8 *)&this->TeamTypeClass_field_24, (unsigned __int8 *)off_81728C, &g_INI_DefaultBuffer, Destination, 128)) )
  {  /*0x6f1341*/
    v27 = (Destination)->FindOrCreate();  /*0x6f134e*/
  }
  else
  {
    v27 = v26;  /*0x6f1355*/
  }
  u32_C0 = this->u32_C0;  /*0x6f1357*/
  *(unsigned int *)&this->q0D0 = v27;  /*0x6f135d*/
  v29 = INIClass::ReadInt_Overwrite(
          (bool *)a2,
          (unsigned __int8 *)&this->TeamTypeClass_field_24,
          (unsigned __int8 *)g_INI_Key_Group,
          u32_C0);  /*0x6f136c*/
  v51 = *((unsigned char *)this + 242);  /*0x6f1379*/
  this->u32_C0 = v29;  /*0x6f1380*/
  *((unsigned char *)this + 242) = INIClass::ReadBool_Overwrite(
                             (int *)a2,
                             (unsigned __int8 *)&this->TeamTypeClass_field_24,
                             (unsigned __int8 *)stru_842DD4.IsLogic,
                             v51);  /*0x6f138b*/
  v30 = INIClass::ReadBool_Overwrite(
          (int *)a2,
          (unsigned __int8 *)&this->TeamTypeClass_field_24,
          (unsigned __int8 *)&stru_842DD4.AlphaImageFile[21],
          *((unsigned char *)this + 243));  /*0x6f13a0*/
  v31 = *((unsigned char *)this + 246);  /*0x6f13a5*/
  *((unsigned char *)this + 243) = v30;  /*0x6f13ab*/
  v32 = INIClass::ReadBool_Overwrite(
          (int *)a2,
          (unsigned __int8 *)&this->TeamTypeClass_field_24,
          (unsigned __int8 *)g_INI_Key_IsBaseDefense,
          v31);  /*0x6f13ba*/
  v52 = *((unsigned char *)this + 247);  /*0x6f13c7*/
  *((unsigned char *)this + 246) = v32;  /*0x6f13ce*/
  *((unsigned char *)this + 247) = INIClass::ReadBool_Overwrite(
                             (int *)a2,
                             (unsigned __int8 *)&this->TeamTypeClass_field_24,
                             (unsigned __int8 *)&stru_842DD4.ImageFile[24],
                             v52);  /*0x6f13d9*/
  v33 = INIClass::ReadBool_Overwrite(
          (int *)a2,
          (unsigned __int8 *)&this->TeamTypeClass_field_24,
          (unsigned __int8 *)&stru_842DD4.AmbientSound,
          *((unsigned char *)this + 244));  /*0x6f13ee*/
  v34 = *((unsigned char *)this + 245);  /*0x6f13f3*/
  *((unsigned char *)this + 244) = v33;  /*0x6f13f9*/
  v35 = INIClass::ReadBool_Overwrite(
          (int *)a2,
          (unsigned __int8 *)&this->TeamTypeClass_field_24,
          (unsigned __int8 *)&stru_842DD4.__pad_14D[139],
          v34);  /*0x6f1408*/
  v36 = *((unsigned int *)this + 53);  /*0x6f140d*/
  *((unsigned char *)this + 245) = v35;  /*0x6f141a*/
  v37 = Waypoint::To_String(v36);  /*0x6f1420*/
  if ( (((INIClass *)a2)->GetString((unsigned __int8 *)&this->TeamTypeClass_field_24, (unsigned __int8 *)aWaypoint, v37, v53, 64)) > 0 )
    *((unsigned int *)this + 53) = (v53)->To_Waypoint();  /*0x6f1440*/  /*0x6f1435*/
  v38 = Waypoint::To_String(*((unsigned int *)this + 54));  /*0x6f1453*/
  if ( (((INIClass *)a2)->GetString((unsigned __int8 *)&this->TeamTypeClass_field_24, (unsigned __int8 *)&stru_842DD4.__pad_14D[119], v38, v53, 64)) > 0 )
    *((unsigned int *)this + 54) = (v53)->To_Waypoint();  /*0x6f1473*/  /*0x6f1468*/
  v39 = (int *)*((unsigned int *)this + 56);  /*0x6f1479*/
  if ( (((INIClass *)a2)->GetString((unsigned __int8 *)&this->TeamTypeClass_field_24, (unsigned __int8 *)aScript, &g_INI_DefaultBuffer, Destination, 128)) )
  {  /*0x6f1496*/
    ScriptType = (Destination)->CreateScriptType();  /*0x6f14a3*/
  }
  else
  {
    ScriptType = v39;  /*0x6f14aa*/
  }
  v41 = (unsigned int *)*((unsigned int *)this + 57);  /*0x6f14ac*/
  *((unsigned int *)this + 56) = ScriptType;  /*0x6f14c9*/
  if ( (((INIClass *)a2)->GetString((unsigned __int8 *)&this->TeamTypeClass_field_24, (unsigned __int8 *)aTaskforce, &g_INI_DefaultBuffer, Destination, 128)) )
  {  /*0x6f14cf*/
    TaskForce = (Destination)->FindOrCreateTaskForce();  /*0x6f14dc*/
  }
  else
  {
    TaskForce = v41;  /*0x6f14e3*/
  }
  *((unsigned int *)this + 57) = TaskForce;  /*0x6f14e6*/
  if ( !TaskForce )
  {  /*0x6f14ef*/
    if ( dword_A8E8E0 <= 0 )
      return 0;  /*0x6f14f8*/  /*0x6f14f8*/
    *((unsigned int *)this + 57) = *(unsigned int *)dword_A8E8D4;  /*0x6f1501*/
  }
  if ( *((unsigned int *)this + 56) )
    return 1;  /*0x6f1532*/  /*0x6f1507*/
  if ( dword_8B41D8 > 0 )
  {  /*0x6f1518*/
    *((unsigned int *)this + 56) = *(unsigned int *)dword_8B41CC;  /*0x6f1522*/
    return 1;  /*0x6f1522*/
  }
  return 0;  /*0x6f1528*/

}
}
// 0x6F1550
namespace gamemd {
AbstractClass * * TeamTypeClass::GetMaxCount(TeamTypeClass * aP1, void * aTaskforce, void * aWaypoint)
{

  unsigned int field_E8; // eax
  unsigned int field_EC; // ebp
  int *p_TeamTypeClass_field_24; // edi
  int v6; // eax
  char *v7; // eax
  char *v8; // eax
  int v9; // eax
  int v10; // esi

  if ( !((AbstractTypeClass *)this)->WriteINI(a2) )
    return 0;  /*0x6f185b*/  /*0x6f1559*/
  field_E8 = this->field_E8;  /*0x6f1566*/
  field_EC = -1;  /*0x6f156d*/
  if ( field_E8 )
  {  /*0x6f1573*/
    field_EC = *(unsigned int *)(*(unsigned int *)(field_E8 + 52) + 184);  /*0x6f1578*/
  }
  else if ( (unsigned __int8)((BuildingType *)this->field_EC)->IsSpecialType() )
  {  /*0x6f1586*/
    field_EC = this->field_EC;  /*0x6f158f*/
  }
  p_TeamTypeClass_field_24 = &this->TeamTypeClass_field_24;  /*0x6f159d*/
  INIClass::SetInt(
    a2,
    (unsigned __int8 *)&this->TeamTypeClass_field_24,
    (char *)&stru_842DD4.DebrisTypes[1],
    this->u32_C4,
    0);  /*0x6f15a9*/
  INIClass::SetInt(
    a2,
    (unsigned __int8 *)&this->TeamTypeClass_field_24,
    (char *)&stru_842DD4.unknown_double_300[1],
    this->Tactical_E4,
    0);  /*0x6f15bf*/
  INIClass::SetBool(
    a2,
    (unsigned __int8 *)&this->TeamTypeClass_field_24,
    (char *)&stru_842DD4.SlowdownDistance,
    this->u32_C8);  /*0x6f15d3*/
  INIClass::SetBool(
    a2,
    (unsigned __int8 *)&this->TeamTypeClass_field_24,
    (char *)stru_842DD4.ThreatAvoidanceCoefficient,
    BYTE1(this->u32_C8));  /*0x6f15e7*/
  INIClass::SetBool(
    a2,
    (unsigned __int8 *)&this->TeamTypeClass_field_24,
    (char *)&stru_842DD4.TargetStrengthCoefficient[1],
    BYTE2(this->u32_C8));  /*0x6f15fb*/
  INIClass::SetBool(
    a2,
    (unsigned __int8 *)&this->TeamTypeClass_field_24,
    (char *)stru_842DD4.TargetSpecialThreatCoefficient,
    HIBYTE(this->u32_C8));  /*0x6f160f*/
  INIClass::SetHouseName(a2, (unsigned __int8 *)&this->TeamTypeClass_field_24, aHouse, (void *)field_EC);  /*0x6f161d*/
  INIClass::SetBool(
    a2,
    (unsigned __int8 *)&this->TeamTypeClass_field_24,
    (char *)&stru_842DD4.VoxelCaches[18],
    this->field_CC);  /*0x6f1631*/
  INIClass::SetBool(
    a2,
    (unsigned __int8 *)&this->TeamTypeClass_field_24,
    (char *)&stru_842DD4.MyEffectivenessCoefficient[1],
    BYTE1(this->field_CC));  /*0x6f1645*/
  INIClass::SetBool(
    a2,
    (unsigned __int8 *)&this->TeamTypeClass_field_24,
    (char *)stru_842DD4.SpecialThreatValue,
    BYTE2(this->field_CC));  /*0x6f1659*/
  INIClass::SetBool(
    a2,
    (unsigned __int8 *)&this->TeamTypeClass_field_24,
    &stru_842DD4.EliteAbilities[6],
    HIBYTE(this->field_CC));  /*0x6f166d*/
  INIClass::SetBool(
    a2,
    (unsigned __int8 *)&this->TeamTypeClass_field_24,
    &stru_842DD4.VeteranAbilities[16],
    this->field_D4);  /*0x6f1681*/
  INIClass::SetBool(
    a2,
    (unsigned __int8 *)&this->TeamTypeClass_field_24,
    (char *)&stru_842DD4.IdleRate,
    BYTE1(this->field_D4));  /*0x6f1695*/
  INIClass::SetBool(
    a2,
    (unsigned __int8 *)&this->TeamTypeClass_field_24,
    (char *)&stru_842DD4.VoxelCaches[16],
    this->q0D0);  /*0x6f16a9*/
  INIClass::SetBool(
    a2,
    (unsigned __int8 *)&this->TeamTypeClass_field_24,
    (char *)&stru_842DD4.VoxelCaches[10],
    BYTE2(this->q0D0));  /*0x6f16bd*/
  INIClass::SetBool(
    a2,
    (unsigned __int8 *)&this->TeamTypeClass_field_24,
    (char *)&stru_842DD4.VoxelCaches[7],
    BYTE1(this->q0D0));  /*0x6f16d1*/
  INIClass::SetBool(
    a2,
    (unsigned __int8 *)&this->TeamTypeClass_field_24,
    (char *)&stru_842DD4.VoxelCaches[14],
    HIBYTE(this->q0D0));  /*0x6f16e5*/
  INIClass::SetInt(
    a2,
    (unsigned __int8 *)&this->TeamTypeClass_field_24,
    (char *)&stru_842DD4.VoxelCaches[1],
    this->field_D8,
    0);  /*0x6f16fb*/
  INIClass::SetInt(
    a2,
    (unsigned __int8 *)&this->TeamTypeClass_field_24,
    (char *)stru_842DD4.VoxelCaches,
    this->field_DC,
    0);  /*0x6f1711*/
  INIClass::SetInt(
    a2,
    (unsigned __int8 *)&this->TeamTypeClass_field_24,
    g_INI_Key_TechLevel,
    *(unsigned int *)&this->field_F0,
    0);  /*0x6f1727*/
  INIClass::SetInt(a2, (unsigned __int8 *)&this->TeamTypeClass_field_24, g_INI_Key_Group, this->u32_C0, 0);  /*0x6f173d*/
  INIClass::SetBool(
    a2,
    (unsigned __int8 *)&this->TeamTypeClass_field_24,
    (char *)&stru_842DD4.VoxelCaches[4],
    HIBYTE(this->field_D4));  /*0x6f1751*/
  INIClass::SetBool(a2, (unsigned __int8 *)&this->TeamTypeClass_field_24, stru_842DD4.IsLogic, *((unsigned char *)this + 242));  /*0x6f1765*/
  INIClass::SetBool(
    a2,
    (unsigned __int8 *)&this->TeamTypeClass_field_24,
    &stru_842DD4.AlphaImageFile[21],
    *((unsigned char *)this + 243));  /*0x6f1779*/
  INIClass::SetBool(
    a2,
    (unsigned __int8 *)&this->TeamTypeClass_field_24,
    (char *)&stru_842DD4.AmbientSound,
    *((unsigned char *)this + 244));  /*0x6f178d*/
  INIClass::SetBool(
    a2,
    (unsigned __int8 *)&this->TeamTypeClass_field_24,
    &stru_842DD4.__pad_14D[139],
    *((unsigned char *)this + 245));  /*0x6f17a1*/
  INIClass::SetBool(
    a2,
    (unsigned __int8 *)&this->TeamTypeClass_field_24,
    g_INI_Key_IsBaseDefense,
    *((unsigned char *)this + 246));  /*0x6f17b5*/
  INIClass::SetBool(
    a2,
    (unsigned __int8 *)&this->TeamTypeClass_field_24,
    &stru_842DD4.ImageFile[24],
    *((unsigned char *)this + 247));  /*0x6f17c9*/
  v6 = *(unsigned int *)&this->field_F4;  /*0x6f17ce*/
  if ( v6 )
    (a2)->SetString((unsigned __int8 *)&this->TeamTypeClass_field_24, off_81728C, (char *)(v6 + 36));  /*0x6f17e4*/  /*0x6f17d6*/
  v7 = Waypoint::To_String(*((unsigned int *)this + 53));  /*0x6f17ef*/
  (a2)->SetString((unsigned __int8 *)&this->TeamTypeClass_field_24, aWaypoint, v7);  /*0x6f17fd*/
  v8 = Waypoint::To_String(*((unsigned int *)this + 54));  /*0x6f1808*/
  (a2)->SetString((unsigned __int8 *)&this->TeamTypeClass_field_24, &stru_842DD4.__pad_14D[119], v8);  /*0x6f1816*/
  v9 = *((unsigned int *)this + 56);  /*0x6f181b*/
  if ( v9 )
    (a2)->SetString((unsigned __int8 *)&this->TeamTypeClass_field_24, aScript, (char *)(v9 + 36));  /*0x6f1831*/  /*0x6f1823*/
  v10 = *((unsigned int *)this + 57);  /*0x6f1836*/
  if ( v10 )
    (a2)->SetString((unsigned __int8 *)p_TeamTypeClass_field_24, aTaskforce, (char *)(v10 + 36));  /*0x6f184c*/  /*0x6f183e*/
  return 1;  /*0x6f1853*/

}
}
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
  unsigned int *v14; // edx
  void *v15; // eax

  if ( a2 ) /*0x6f22fc*/
  {
    v4 = a3; /*0x6f2302*/
    LOBYTE(this->q00C) = 0; /*0x6f2306*/
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
      v5 = (int *)__2_YAPAXI_Z(8 * a2 + 4); /*0x6f2316*/
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
    LOBYTE(this->q00C) = 1; /*0x6f2362*/
    if ( v6 ) /*0x6f2366*/
    {
      if ( *&this->q004 ) /*0x6f2371*/
      {
        m_8 = this->q008; /*0x6f2378*/
        if ( a2 < m_8 ) /*0x6f237d*/
          m_8 = a2; /*0x6f237f*/
        v13 = 0; /*0x6f2381*/
        if ( m_8 > 0 ) /*0x6f2385*/
        {
          do /*0x6f239d*/
          {
            v14 = *&this->q004; /*0x6f2387*/
            ++v13; /*0x6f238a*/
            v6[2 * v13 - 2] = v14[2 * v13 - 2]; /*0x6f2391*/
            v6[2 * v13 - 1] = v14[2 * v13 - 1]; /*0x6f2399*/
          }
          while ( v13 < m_8 ); /*0x6f239d*/
          v4 = a3; /*0x6f239f*/
        }
        if ( BYTE1(this->q00C) ) /*0x6f23a3*/
        {
          v15 = *&this->q004; /*0x6f23aa*/
          if ( v15 ) /*0x6f23af*/
            __3_YAXPAX_Z((char *)v15 - 4); /*0x6f23b9*/
          *&this->q004 = 0; /*0x6f23c1*/
        }
      }
      *&this->q004 = v6; /*0x6f23ca*/
      this->q008 = a2; /*0x6f23d2*/
      BYTE1(this->q00C) = v4 == 0; /*0x6f23d5*/
      return 1; /*0x6f23db*/
    }
    else
    {
      return 0; /*0x6f236b*/
    }
  }
  else
  {
    (*(void (**)(_VectorClass_V_DistributionObject_PAVAITriggerTypeClass_DiscreteDistributionClass_VAITriggerTypeClass *))(*(unsigned int *)this->__pad_0 + 12))(this); /*0x6f23e5*/
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
  int *v6; // edi
  unsigned int *v7; // eax
  int v8; // ecx
  int *v9; // eax
  int v10; // ecx
  int m_8; // ecx
  int v12; // eax
  unsigned int *v13; // edx
  int *v14; // eax
  int *v15; // ebp
  int v16; // eax

  if ( a2 ) /*0x6f24bc*/
  {
    v4 = a3; /*0x6f24c2*/
    LOBYTE(this->q00C) = 0; /*0x6f24c6*/
    if ( a3 ) /*0x6f24cc*/
    {
      *a3 = a2; /*0x6f2507*/
      v6 = a3 + 1; /*0x6f250c*/
      if ( a2 - 1 >= 0 ) /*0x6f250f*/
      {
        v9 = a3 + 2; /*0x6f2511*/
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
      v5 = (int *)__2_YAPAXI_Z(8 * a2 + 4); /*0x6f24d6*/
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
    LOBYTE(this->q00C) = 1; /*0x6f2523*/
    if ( !v6 ) /*0x6f2527*/
      return 0; /*0x6f25c7*/
    if ( *&this->q004 ) /*0x6f252d*/
    {
      m_8 = this->q008; /*0x6f2534*/
      if ( a2 < m_8 ) /*0x6f2539*/
        m_8 = a2; /*0x6f253b*/
      v12 = 0; /*0x6f253d*/
      if ( m_8 > 0 ) /*0x6f2541*/
      {
        do /*0x6f2559*/
        {
          v13 = *&this->q004; /*0x6f2543*/
          ++v12; /*0x6f2546*/
          v6[2 * v12 - 2] = v13[2 * v12 - 2]; /*0x6f254d*/
          v6[2 * v12 - 1] = v13[2 * v12 - 1]; /*0x6f2555*/
        }
        while ( v12 < m_8 ); /*0x6f2559*/
        v4 = a3; /*0x6f255b*/
      }
      if ( BYTE1(this->q00C) ) /*0x6f255f*/
      {
        v14 = *&this->q004; /*0x6f2566*/
        if ( v14 ) /*0x6f256b*/
        {
          v15 = v14 - 1; /*0x6f2570*/
          Array::ForEachReverse(v14, 8, *(v14 - 1), nullsub_240); /*0x6f257c*/
          __3_YAXPAX_Z(v15); /*0x6f2582*/
          v4 = a3; /*0x6f2587*/
        }
        *&this->q004 = 0; /*0x6f258e*/
      }
    }
    *&this->q004 = v6; /*0x6f2597*/
    this->q008 = a2; /*0x6f259f*/
    BYTE1(this->q00C) = v4 == 0; /*0x6f25a2*/
  }
  else
  {
    (*(void (**)(_DynamicVectorClass_V_DistributionObject_PAVAITriggerTypeClass_DiscreteDistributionClass_VAITriggerTypeClass *))(*(unsigned int *)this->__pad_0 + 12))(this); /*0x6f25ab*/
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

  if ( !this ) /*0x6f0fc6*/
    return 0; /*0x6f0fc6*/
  int v2 = 0; // esi /*0x6f0fcd*/
  if ( *(int *)&((unsigned int *)&stru_A8EB00)[204] <= 0 ) /*0x6f0fd1*/
    return 0; /*0x6f1010*/
  while ( _strcmpi((char *)this, (char *)(*(unsigned int *)(*(unsigned int *)&((unsigned int *)&stru_A8EB00)[192] + 4 * v2) + 36)) /*0x6f1004*/
       && _strcmpi((char *)this, (char *)(*(unsigned int *)(*(unsigned int *)&((unsigned int *)&stru_A8EB00)[192] + 4 * v2) + 100)) )
  {
    if ( ++v2 >= *(int *)&((unsigned int *)&stru_A8EB00)[204] ) /*0x6f100e*/
      return 0; /*0x6f100e*/
  }
  return *(unsigned int *)(*(unsigned int *)&((unsigned int *)&stru_A8EB00)[192] + 4 * v2); /*0x6f1010*/
}
} // namespace gamemd

// 0x6F1AB0
namespace gamemd {
TeamTypeClass * TeamTypeClass::ReadScriptData(char * a1, int a2)
{
  char Buffer[32]; // [esp+10h] [ebp-20h] BYREF

  int KeyCount; // ebx
  KeyCount = (a1->__pad_0)->GetKeyCount((uint8_t *)g_INI_Key_TRUCKA.DebrisMaximums); /*0x6f1ac5*/
  int i; // edi
  for ( i = 0; i < KeyCount; ++i ) /*0x6f1acb*/
  {
    uint8_t *StringByIndex; // eax
    StringByIndex = (uint8_t *)INIClass::GetStringByIndex( /*0x6f1ad5*/
                                         a1->__pad_0,
                                         (uint8_t *)g_INI_Key_TRUCKA.DebrisMaximums,
                                         i);
    ((INIClass *)(/*0x6f1aee*/ a1))->GetString((uint8_t *)g_INI_Key_TRUCKA.DebrisMaximums, StringByIndex, &g_INI_DefaultBuffer, Buffer, 32);
    INIClass::ClearSection((int *)a1->__pad_0, (int)Buffer, 0); /*0x6f1afc*/
  }
  INIClass::ClearSection((int *)a1->__pad_0, (int)g_INI_Key_TRUCKA.DebrisMaximums, 0); /*0x6f1b0f*/
  int result; // eax
  result = *(unsigned int *)&((unsigned int *)&stru_A8EB00)[204]; /*0x6f1b14*/
  int v8 = 0; // ebx /*0x6f1b19*/
  int j; // edi
  for ( j = 0; j < *(int *)&((unsigned int *)&stru_A8EB00)[204]; ++j ) /*0x6f1b1f*/
  {
    if ( *(unsigned int *)(*(unsigned int *)(*(unsigned int *)&((unsigned int *)&stru_A8EB00)[192] + 4 * j) + 232) == a2 ) /*0x6f1b2f*/
    {
      int v10; // [esp-4h] [ebp-34h]
      v10 = v8++; /*0x6f1b37*/
      sprintf(Buffer, "%d", v10); /*0x6f1b3f*/
      INIClass::SetString( /*0x6f1b5f*/
        a1->__pad_0,
        (uint8_t *)g_INI_Key_TRUCKA.DebrisMaximums,
        Buffer,
        (char *)(*(unsigned int *)(*(unsigned int *)&((unsigned int *)&stru_A8EB00)[192] + 4 * j) + 36));
      (*(void (**)(unsigned int, INIClass *))(**(unsigned int **)(*(unsigned int *)&((unsigned int *)&stru_A8EB00)[192] + 4 * j) + 104))( /*0x6f1b6f*/
        *(unsigned int *)(*(unsigned int *)&((unsigned int *)&stru_A8EB00)[192] + 4 * j),
        a1);
    }
    result = *(unsigned int *)&((unsigned int *)&stru_A8EB00)[204]; /*0x6f1b72*/
  }
  return result; /*0x6f1b7c*/
}
} // namespace gamemd

// 0x6F1B90
namespace gamemd {
int TeamTypeClass::SaveToINI(TechnoTypeClass * aP0, int * a1, int aP2)
{

  int result; // eax
  result = ((int *)aP0)->SaveLoad_Prefix(a1, aP2); /*0x6f1b9f*/
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
  result = (aP0)->SaveLoad_Prefix_0(aP1); /*0x6f1bbb*/
  if ( result >= 0 ) /*0x6f1bc2*/
  {
    if ( aP0 ) /*0x6f1bc6*/
    {
      ((int)aP0)->Init((int)&aP1); /*0x6f1bcf*/
      /* X11: ptr_0 install elided (implicit via TeamTypeClass virtuals 0x6f1bd4) */
      /* X11: ptr_0 install elided (implicit via TeamTypeClass virtuals 0x6f1bda) */
      /* X11: ptr_0 install elided (implicit via TeamTypeClass virtuals 0x6f1be1) */
      /* X11: ptr_0 install elided (implicit via TeamTypeClass virtuals 0x6f1be8) */
    }
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, &aP0->u32_C4); /*0x6f1bfb*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, &aP0->q0D0); /*0x6f1c0c*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, &aP0->FootClass_E0); /*0x6f1c1d*/
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
  result = (int)FootClass_Array.waveEffect; /*0x6f1f30*/
  int i; // esi
  for ( i = 0; i < (int)FootClass_Array.waveEffect; ++i ) /*0x6f1f3d*/
  {
    int v5; // ecx
    v5 = *((unsigned int *)&FootClass_Array.auxParticles1->ptr_0 + i); /*0x6f1f49*/
    if ( *(TeamTypeClass **)(v5 + 36) == this ) /*0x6f1f4f*/
      ((TeamTypeClass *)v5)->Check(aP1); /*0x6f1f52*/
    result = (int)FootClass_Array.waveEffect; /*0x6f1f57*/
  }
  return result; /*0x6f1f62*/
}
} // namespace gamemd

// 0x6F1F70
namespace gamemd {
int TeamTypeClass::FindFirstInstance()
{
  int result; // eax

  int v1 = 0; // edx /*0x6f1f78*/
  if ( (int)FootClass_Array.waveEffect <= 0 ) /*0x6f1f7c*/
    return 0; /*0x6f1f93*/
  ParticleSystemClass *i; // esi
  for ( i = FootClass_Array.auxParticles1; ; i = &i->ptr_4 ) /*0x6f1f7e*/
  {
    result = (int)i->ptr_0; /*0x6f1f84*/
    if ( *((TeamTypeClass **)i->ptr_0 + 9) == this ) /*0x6f1f89*/
      break; /*0x6f1f89*/
    if ( ++v1 >= (int)FootClass_Array.waveEffect ) /*0x6f1f91*/
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
void TeamTypeClass_28::ClearBuffer(void *a1_1)
{

  int v2; // eax
  v2 = *(unsigned int *)&a1_1->q004; /*0x6f21b6*/
  a1_1->q010 = 0; /*0x6f21b9*/
  if ( v2 && (((unsigned char *)&(a1_1->q00C))[1]) ) /*0x6f21c0*/
  {
    operator delete(((void *)(v2 - 4))); /*0x6f21d1*/
    *(unsigned int *)&a1_1->q004 = 0; /*0x6f21d9*/
  }
  (((unsigned char *)&(a1_1->q00C))[1]) = 0; /*0x6f21dc*/
  a1_1->q008 = 0; /*0x6f21df*/
}
} // namespace gamemd

// 0x6F21F0
namespace gamemd {
unsigned int TeamTypeClass_28::PointerToIndex(int a2)
{

  if ( ((this->q00C) & 0xFF) ) /*0x6f21f0*/
    return (unsigned int)(a2 - *&this->q004) >> 3; /*0x6f2205*/
  else
    return 0; /*0x6f21f7*/

}
} // namespace gamemd

// 0x6F2210
namespace gamemd {
unsigned int * TeamTypeClass_28::Seek(unsigned int * a2, int a3, void *a3_2)
{

  int v3 = *&a3_2->u32_4; // eax /*0x6f2210*/
  int v4; // edx
  v4 = *(unsigned int *)(v3 + 8 * a3_2); /*0x6f2217*/
  int v5 = v3 + 8 * a3_2; // ecx /*0x6f221a*/
  *a3_2 = v4; /*0x6f2221*/
  a3_2[1] = *(unsigned int *)(v5 + 4); /*0x6f2226*/
  return a3_2; /*0x6f2229*/
}
} // namespace gamemd

// 0x6F2290
namespace gamemd {
char TeamTypeClass_28::AddRef(int a2)
{


  int m_8 = this->q008; // edi /*0x6f229b*/
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x6f22a0*/
  {
    int v3 = 0; // esi /*0x6f22a2*/
    if ( m_8 <= 0 ) /*0x6f22a6*/
      return 1; /*0x6f22d6*/
    int v4; // edx
    v4 = *(unsigned int *)(a2 + 4); /*0x6f22a8*/
    unsigned int *v5 = *&this->q004; // eax /*0x6f22ab*/
    unsigned int *v6; // ecx
    v6 = (unsigned int *)(v4 + 4); /*0x6f22ae*/
    int v7; // edx
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
void TeamTypeClass_28::ddtor(void *a1_1, void *a2_1)
{


  int v2; // eax
  v2 = *(unsigned int *)&a1_1->m_1[3]; /*0x6f2406*/
  if ( v2 && BYTE1(a1_1->m_C) ) /*0x6f240d*/
  {
    __3_YAXPAX_Z((void *)(v2 - 4)); /*0x6f241e*/
    *(unsigned int *)&a1_1->m_1[3] = 0; /*0x6f2426*/
  }
  BYTE1(a1_1->m_C) = 0; /*0x6f2429*/
  a1_1->m_8 = 0; /*0x6f242c*/

}
} // namespace gamemd

// 0x6F2440
namespace gamemd {
int TeamTypeClass_28::Read(unsigned int * a2, void *a2_2, void *a3)
{

  if ( !(*((unsigned char *)&(a2_2->q00C))) ) /*0x6f2440*/
    return 0; /*0x6f244e*/
  int m_8 = a2_2->q008; // edx /*0x6f2454*/
  int result = 0; // eax /*0x6f2457*/
  if ( m_8 <= 0 ) /*0x6f245b*/
    return -1; /*0x6f247c*/
  unsigned int *i; // ecx
  for ( i = *(unsigned int **)&a2_2->q004; *i != *a2_2 || i[1] != a2_2[1]; i += 2 ) /*0x6f2461*/
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

  if ( ((this->q00C) & 0xFF) ) /*0x6f2490*/
    return (unsigned int)(a2 - *&this->q004) >> 3; /*0x6f24a5*/
  else
    return 0; /*0x6f2497*/

}
} // namespace gamemd

// 0x6F2640
namespace gamemd {
int TeamTypeClass_28::FindItem(unsigned int * a2)
{


  int m_10 = this->q010; // edx /*0x6f2640*/
  int result = 0; // eax /*0x6f2645*/
  if ( m_10 <= 0 ) /*0x6f264b*/
    return -1; /*0x6f266c*/
  unsigned int *i; // ecx
  for ( i = *&this->q004; *i != *a2 || i->ptr_4 != a2[1]; i += 2 ) /*0x6f2651*/
  {
    if ( ++result >= m_10 ) /*0x6f266a*/
      return -1; /*0x6f266a*/
  }
  return result; /*0x6f266f*/

}
}
// 0x6F2680
namespace gamemd {
VectorClass_flat * TeamTypeClass_28::QueryInterface(unsigned int * Block, char a2)
{

  int v3 = *&Block->__pad_004; // eax /*0x6f2683*/
  /* X11: ptr_0 install elided (X67 star-deref, RHS g_var_43a43e) */  /*0x6f2686*/
  if ( v3 && (Block->u32_D) ) /*0x6f2690*/
  {
    operator delete(((void *)(v3 - 4))); /*0x6f26a3*/
    *&Block->__pad_004 = 0; /*0x6f26ab*/
  }
  (Block->u32_D) = 0; /*0x6f26b6*/
  Block->u32_8 = 0; /*0x6f26bc*/
  if ( (a2 & 1) != 0 ) /*0x6f26c3*/
    operator delete((Block)); /*0x6f26c6*/
  return Block->tail_0; /*0x6f26d0*/
}
} // namespace gamemd

// 0x6F2720
namespace gamemd {
DynamicVector * TeamTypeClass_28::Constructor(unsigned int * Block, char a2, void *a3_1, void *a4)
{


  int v3 = *&Block->__pad_004; // eax /*0x6f2723*/
  /* X11: ptr_0 install elided (X67 star-deref, RHS g_var_43a43e) */  /*0x6f2726*/
  if ( v3 && BYTE1(Block->m_C) ) /*0x6f2730*/
  {
    __3_YAXPAX_Z((void *)(v3 - 4)); /*0x6f2743*/
    *(unsigned int *)&Block->m_1[3] = 0; /*0x6f274b*/
  }
  BYTE1(Block->m_C) = 0; /*0x6f2756*/
  Block->m_8 = 0; /*0x6f275c*/
  if ( (a2 & 1) != 0 ) /*0x6f2763*/
    __3_YAXPAX_Z(Block); /*0x6f2766*/
  return Block->__pad_0; /*0x6f2770*/

}
} // namespace gamemd
