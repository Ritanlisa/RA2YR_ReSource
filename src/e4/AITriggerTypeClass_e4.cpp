// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/AITriggerTypeClass_40_e4.hpp"
#include "e4/classes/DynamicVector_e4.hpp"
#include "e4/classes/Factory_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/Super_e4.hpp"
#include "e4/classes/AITriggerTypeClass_e4.hpp"
#include "e4/classes/HouseTypeClass_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/VoxelAnimClass_e4.hpp"
#include "e4/classes/VoxelAnimTypeClass_e4.hpp"
#include "e4/classes/WarheadTypeClass_e4.hpp"
#include "e4/classes/WeaponTypeClass_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/HouseClass_e4.hpp"
#include "e4/classes/RadarClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/UnitClass_e4.hpp"
#include "e4/classes/AbstractClassVector_e4.hpp"
#include "e4/classes/AbstractTypeClass_e4.hpp"
#include "e4/classes/House_e4.hpp"
#include "e4/classes/Vector_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/EventQueue_e4.hpp"
#include "e4/classes/INIClass_e4.hpp"
#include "e4/classes/CCINIClass_e4.hpp"
#include "e4/classes/BuildingTypeClass_e4.hpp"
#include "e4/classes/TypeClass_e4.hpp"
#include "e4/classes/TeamTypeClass_e4.hpp"
#include "e4/classes/SuperWeaponTypeClass_e4.hpp"

// 0x41EC90
namespace gamemd {
int AITriggerTypeClass::CivilianHouseOwns(int a2, int a3)
{
  AITriggerTypeClass *v3; // edi
  int v4; // esi
  bool result; // al
  int v6; // ebx
  int AITriggerTypeClass_field_0x18; // esi
  int v8; // ebp
  int v9; // edi
  int v10; // eax
  bool v11; // [esp+Fh] [ebp-5h]

  v3 = this; /*0x41ec9b*/
  v4 = 0; /*0x41ec9d*/
  v11 = 0; /*0x41eca5*/
  if ( stru_A80220.nextArrayIndex <= 0 ) /*0x41ecaa*/
    return v11; /*0x41ecaa*/
  while ( *(_DWORD *)(*(_DWORD *)(*((_DWORD *)stru_A80220.vfptr3 + v4) + 52) + 188) != HouseTypeClass::Find(&g_INI_Key_Civilian) ) /*0x41eccc*/
  {
    if ( ++v4 >= stru_A80220.nextArrayIndex ) /*0x41ecd6*/
      return 0; /*0x41ece2*/
  }
  v6 = *((_DWORD *)stru_A80220.vfptr3 + v4); /*0x41ece5*/
  if ( !v6 ) /*0x41ecea*/
    return v11; /*0x41ee23*/
  AITriggerTypeClass_field_0x18 = v3[3].AITriggerTypeClass_field_0x18; /*0x41ecf0*/
  if ( AITriggerTypeClass_field_0x18 ) /*0x41ecf8*/
  {
    v8 = (*(int (__thiscall **)(int))(*(_DWORD *)AITriggerTypeClass_field_0x18 + 64))(AITriggerTypeClass_field_0x18); /*0x41ed0a*/
    v9 = 0; /*0x41ed0c*/
    switch ( (*(int (__thiscall **)(int))(*(_DWORD *)AITriggerTypeClass_field_0x18 + 44))(AITriggerTypeClass_field_0x18) ) /*0x41ed21*/
    {
      case 3: /*0x41ed21*/
        v9 = DynamicVector::GetOrGrow((DynamicVector *)(v6 + 21900), v8); /*0x41ed73*/
        goto LABEL_12; /*0x41ed73*/
      case 7: /*0x41ed21*/
        v10 = DynamicVector::GetOrGrow((DynamicVector *)(v6 + 21840), v8); /*0x41ed2f*/
        v3 = this; /*0x41ed37*/
        break; /*0x41ed3b*/
      case 16: /*0x41ed21*/
        v10 = DynamicVector::GetOrGrow((DynamicVector *)(v6 + 21880), v8); /*0x41ed59*/
        v3 = this; /*0x41ed61*/
        break; /*0x41ed65*/
      case 40: /*0x41ed21*/
        v10 = DynamicVector::GetOrGrow((DynamicVector *)(v6 + 21860), v8); /*0x41ed44*/
        v3 = this; /*0x41ed4c*/
        break; /*0x41ed50*/
      default:
  LABEL_12:
        v10 = v9; /*0x41ed75*/
        v3 = this; /*0x41ed77*/
        break; /*0x41ed7c*/
    }
  }
  else
  {
    v10 = 0; /*0x41ed7e*/
  }
  switch ( v3[3].AITriggerTypeClass_field_0x28 ) /*0x41ed8f*/
  {
    case 0: /*0x41ed8f*/
      result = v10 < v3[3].AITriggerTypeClass_field_0x24; /*0x41eda5*/
      break; /*0x41edad*/
    case 1: /*0x41ed8f*/
      result = v10 <= v3[3].AITriggerTypeClass_field_0x24; /*0x41edbf*/
      break; /*0x41edc7*/
    case 2: /*0x41ed8f*/
      result = v10 == v3[3].AITriggerTypeClass_field_0x24; /*0x41edd9*/
      break; /*0x41ede1*/
    case 3: /*0x41ed8f*/
      result = v10 >= v3[3].AITriggerTypeClass_field_0x24; /*0x41edf3*/
      break; /*0x41edfb*/
    case 4: /*0x41ed8f*/
      result = v10 > v3[3].AITriggerTypeClass_field_0x24; /*0x41ee0d*/
      break; /*0x41ee15*/
    case 5: /*0x41ed8f*/
      return v10 != v3[3].AITriggerTypeClass_field_0x24; /*0x41ee1e*/
    default:
      return v11;
  }
  return result; /*0x41ecdc*/
}
} // namespace gamemd
// 0x41EE90
namespace gamemd {
DynamicVector * * AITriggerTypeClass::OwnerHouseOwns(unsigned int * a2, int a3)
{
  int v4; // esi
  int v5; // ebp
  int v6; // edi
  int v7; // eax
  bool result; // al
  bool v9; // [esp+7h] [ebp-1h]

  v9 = 0; /*0x41ee9a*/
  if ( !a2 ) /*0x41ee9f*/
    return v9; /*0x41efcb*/
  v4 = this->u32_D8; /*0x41eea6*/
  if ( v4 ) /*0x41eeae*/
  {
    v5 = (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 64))(v4); /*0x41eec1*/
    v6 = 0; /*0x41eec3*/
    switch ( (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 44))(v4) ) /*0x41eed8*/
    {
      case 3: /*0x41eed8*/
        v6 = DynamicVector::GetOrGrow((DynamicVector *)(a2 + 5475), v5); /*0x41ef31*/
        goto LABEL_8; /*0x41ef31*/
      case 7: /*0x41eed8*/
        v7 = DynamicVector::GetOrGrow((DynamicVector *)(a2 + 5460), v5); /*0x41eeea*/
        break; /*0x41eef3*/
      case 16: /*0x41eed8*/
        v7 = DynamicVector::GetOrGrow((DynamicVector *)(a2 + 5470), v5); /*0x41ef16*/
        break; /*0x41ef1f*/
      case 40: /*0x41eed8*/
        v7 = DynamicVector::GetOrGrow((DynamicVector *)(a2 + 5465), v5); /*0x41ef00*/
        break; /*0x41ef09*/
      default:
  LABEL_8:
        v7 = v6; /*0x41ef33*/
        break; /*0x41ef37*/
    }
  }
  else
  {
    v7 = 0; /*0x41ef39*/
  }
  switch ( this->q03A ) /*0x41ef4b*/
  {
    case 0: /*0x41ef4b*/
      result = v7 < this->u32_E4; /*0x41ef60*/
      break; /*0x41ef65*/
    case 1: /*0x41ef4b*/
      result = v7 <= this->u32_E4; /*0x41ef76*/
      break; /*0x41ef7b*/
    case 2: /*0x41ef4b*/
      result = v7 == this->u32_E4; /*0x41ef8c*/
      break; /*0x41ef91*/
    case 3: /*0x41ef4b*/
      result = v7 >= this->u32_E4; /*0x41efa2*/
      break; /*0x41efa7*/
    case 4: /*0x41ef4b*/
      result = v7 > this->u32_E4; /*0x41efb8*/
      break; /*0x41efbd*/
    case 5: /*0x41ef4b*/
      return v7 != this->u32_E4; /*0x41efc6*/
    default:
      return v9;
  }
  return result; /*0x41ef58*/
}
} // namespace gamemd
// 0x41F0D0
namespace gamemd {
int AITriggerTypeClass::IronCurtainCharged(int a1, int a2)
{
  int v2; // edx
  int v3; // eax
  int i; // ecx
  int v6; // eax
  int v7; // esi
  int v8; // ecx
  int v9; // [esp+8h] [ebp+4h]

  if ( !a1 ) /*0x41f0d9*/
    return 0; /*0x41f0d9*/
  v2 = *(_DWORD *)(a1 + 612); /*0x41f0db*/
  v3 = 0; /*0x41f0e1*/
  if ( v2 <= 0 ) /*0x41f0e5*/
    return 0; /*0x41f0e5*/
  for ( i = *(_DWORD *)(a1 + 600); *(_DWORD *)(*(_DWORD *)(*(_DWORD *)i + 40) + 180) != 1; i += 4 ) /*0x41f0ed*/
  {
    if ( ++v3 >= v2 ) /*0x41f103*/
      return 0; /*0x41f103*/
  }
  v6 = *(_DWORD *)(*(_DWORD *)(a1 + 600) + 4 * v3); /*0x41f10d*/
  if ( !v6 || !*(_BYTE *)(v6 + 109) ) /*0x41f114*/
    return 0; /*0x41f119*/
  v7 = *(_DWORD *)(v6 + 48); /*0x41f11b*/
  v8 = *(_DWORD *)(v6 + 56); /*0x41f11e*/
  if ( v7 == -1 ) /*0x41f124*/
    goto LABEL_12; /*0x41f124*/
  if ( (int)dword_A8ED84 - v7 < v8 ) /*0x41f130*/
  {
    v8 -= (int)dword_A8ED84 - v7; /*0x41f132*/
  LABEL_12:
    v9 = v8; /*0x41f134*/
    return 1.0 - *(float *)&dword_8871E0->? >= (double)v9 / (double)Super::GetDefaultTimer((_DWORD *)v6); /*0x41f134*/
  }
  v9 = 0; /*0x41f171*/
  return 1.0 - *(float *)&dword_8871E0->? >= (double)v9 / (double)Super::GetDefaultTimer((_DWORD *)v6); /*0x41f167*/
}
} // namespace gamemd
// 0x41F180
namespace gamemd {
int AITriggerTypeClass::ChronoSphereCharged(int a1, int a2)
{
  int v2; // edx
  int v3; // eax
  int i; // ecx
  int v6; // eax
  int v7; // esi
  int v8; // ecx
  int v9; // [esp+8h] [ebp+4h]

  if ( !a1 ) /*0x41f189*/
    return 0; /*0x41f189*/
  v2 = *(_DWORD *)(a1 + 612); /*0x41f18b*/
  v3 = 0; /*0x41f191*/
  if ( v2 <= 0 ) /*0x41f195*/
    return 0; /*0x41f195*/
  for ( i = *(_DWORD *)(a1 + 600); *(_DWORD *)(*(_DWORD *)(*(_DWORD *)i + 40) + 180) != 3; i += 4 ) /*0x41f19d*/
  {
    if ( ++v3 >= v2 ) /*0x41f1b3*/
      return 0; /*0x41f1b3*/
  }
  v6 = *(_DWORD *)(*(_DWORD *)(a1 + 600) + 4 * v3); /*0x41f1bd*/
  if ( !v6 || !*(_BYTE *)(v6 + 109) ) /*0x41f1c4*/
    return 0; /*0x41f1c9*/
  v7 = *(_DWORD *)(v6 + 48); /*0x41f1cb*/
  v8 = *(_DWORD *)(v6 + 56); /*0x41f1ce*/
  if ( v7 == -1 ) /*0x41f1d4*/
    goto LABEL_12; /*0x41f1d4*/
  if ( (int)dword_A8ED84 - v7 < v8 ) /*0x41f1e0*/
  {
    v8 -= (int)dword_A8ED84 - v7; /*0x41f1e2*/
  LABEL_12:
    v9 = v8; /*0x41f1e4*/
    return 1.0 - *(float *)&dword_8871E0->? >= (double)v9 / (double)Super::GetDefaultTimer((_DWORD *)v6); /*0x41f1e4*/
  }
  v9 = 0; /*0x41f221*/
  return 1.0 - *(float *)&dword_8871E0->? >= (double)v9 / (double)Super::GetDefaultTimer((_DWORD *)v6); /*0x41f217*/
}
} // namespace gamemd
// 0x41F230
namespace gamemd {
int AITriggerTypeClass::HouseCredits(int a2, int a3)
{
  bool v3; // bl
  int v5; // eax
  bool result; // al

  v3 = 0; /*0x41f235*/
  if ( !a3 ) /*0x41f23c*/
    return v3; /*0x41f2bd*/
  v5 = (*(int (__stdcall **)(int))(*(_DWORD *)(a3 + 36) + 24))(a3 + 36); /*0x41f245*/
  switch ( this->q03A ) /*0x41f253*/
  {
    case 0: /*0x41f253*/
      result = v5 < this->u32_E4; /*0x41f266*/
      break; /*0x41f269*/
    case 1: /*0x41f253*/
      result = v5 <= this->u32_E4; /*0x41f278*/
      break; /*0x41f27b*/
    case 2: /*0x41f253*/
      result = v5 == this->u32_E4; /*0x41f28a*/
      break; /*0x41f28d*/
    case 3: /*0x41f253*/
      result = v5 >= this->u32_E4; /*0x41f29c*/
      break; /*0x41f29f*/
    case 4: /*0x41f253*/
      result = v5 > this->u32_E4; /*0x41f2ae*/
      break; /*0x41f2b1*/
    case 5: /*0x41f253*/
      return v5 != this->u32_E4; /*0x41f2ba*/
    default:
      return v3;
  }
  return result; /*0x41f260*/
}
} // namespace gamemd
// 0x41F580
namespace gamemd {
ObjectClass * * AITriggerTypeClass::LoadFromINI(unsigned char *** a2, void *a2_2)
{
  double v2; // st7
  char *v4; // eax
  char *v5; // eax
  char *v6; // eax
  int v7; // eax
  char *v8; // eax
  char *v9; // eax
  int v10; // esi
  int ExitCellByName; // eax
  int Index; // eax
  _DWORD *v13; // edx
  int v14; // eax
  char *v15; // eax
  unsigned int v16; // edi
  bool v17; // zf
  int v19; // ecx
  char v20; // dl
  char v21; // al
  char *v22; // eax
  unsigned int v23; // eax
  char *v25; // eax
  unsigned int v26; // eax
  char *v28; // eax
  unsigned int v29; // eax
  char *v31; // eax
  char *v32; // eax
  char *v33; // eax
  char *v34; // eax
  char *v35; // eax
  char *v36; // eax
  char *v37; // eax
  int v38; // eax
  int v39; // esi
  int MaxBuildLevel; // eax
  int v41; // eax
  int v42; // esi
  char v44[4]; // [esp+10h] [ebp-270h] BYREF
  __int64 v45; // [esp+14h] [ebp-26Ch] BYREF
  SuperWeaponTypeClass v46[2]; // [esp+1Ch] [ebp-264h] BYREF

  INIClass::ResetSection((INIClass *)a2_2); /*0x41f595*/
  if ( !INIClass::GetString( /*0x41f5b9*/
          (INIClass *)a2_2,
          (unsigned __int8 *)aAitriggertypes,
          (unsigned __int8 *)&a2_2->AITriggerTypeClass_field_0x24,
          &g_INI_DefaultBuffer,
          v46[0].Name,
          512) )
    return 0; /*0x41f5b9*/
  v4 = strtok(v46[0].Name, Str); /*0x41f5d3*/
  if ( !v4 ) /*0x41f5df*/
    return 0; /*0x41f5df*/
  strncpy(&v46[0].?[8], v4, 0x30u); /*0x41f5ed*/
  IDA_LOBYTE(v46[0].UIName) = 0; /*0x41f5fe*/
  if ( &v46[0].?[8] != (char *)a2_2 + 100 ) /*0x41f602*/
  {
    qmemcpy((char *)a2_2 + 100, &v46[0].?[8], 0x30u); /*0x41f60d*/
    *((_BYTE *)a2_2 + 148) = v46[0].UIName; /*0x41f60f*/
  }
  v5 = strtok(0, Str); /*0x41f616*/
  if ( !v5 ) /*0x41f620*/
    return 0; /*0x41f620*/
  strncpy((char *)v46, v5, 0x18u); /*0x41f62e*/
  IDA_HIBYTE(v46[0].abstractFlags) = 0; /*0x41f63a*/
  String::Trim((char *)v46); /*0x41f63e*/
  *((_DWORD *)a2_2 + 55) = 0; /*0x41f643*/
  if ( _strcmpi((char *)v46, (char *)off_818114) ) /*0x41f655*/
    *((_DWORD *)a2_2 + 55) = TeamTypeClass::FindByName((TeamTypeClass *)v46); /*0x41f66a*/
  v6 = strtok(0, Str); /*0x41f676*/
  if ( !v6 ) /*0x41f680*/
    return 0; /*0x41f680*/
  strncpy((char *)v46, v6, 0x18u); /*0x41f68e*/
  IDA_HIBYTE(v46[0].abstractFlags) = 0; /*0x41f69a*/
  String::Trim((char *)v46); /*0x41f69e*/
  *((_DWORD *)a2_2 + 40) = 0; /*0x41f6a3*/
  *((_DWORD *)a2_2 + 42) = -1; /*0x41f6a9*/
  if ( _strcmpi((char *)v46, (char *)off_818118) ) /*0x41f6bf*/
  {
    if ( _strcmpi((char *)v46, (char *)off_818114) ) /*0x41f6e2*/
    {
      v7 = SuperWeaponTypeClass::FindByName(v46); /*0x41f6f2*/
      *((_DWORD *)a2_2 + 42) = v7; /*0x41f6fa*/
      if ( v7 != -1 ) /*0x41f700*/
        *((_DWORD *)a2_2 + 40) = 1; /*0x41f702*/
    }
  }
  else
  {
    *((_DWORD *)a2_2 + 40) = 2; /*0x41f6cb*/
  }
  if ( !strtok(0, Str) ) /*0x41f712*/
    return 0; /*0x41f712*/
  *((_DWORD *)a2_2 + 44) = 0; /*0x41f728*/
  v8 = strtok(0, Str); /*0x41f72e*/
  if ( !v8 ) /*0x41f738*/
    return 0; /*0x41f738*/
  *((_DWORD *)a2_2 + 38) = atoi(v8); /*0x41f74a*/
  v9 = strtok(0, Str); /*0x41f750*/
  if ( !v9 ) /*0x41f75a*/
    return 0; /*0x41f75a*/
  strncpy((char *)v46, v9, 0x18u); /*0x41f768*/
  IDA_HIBYTE(v46[0].abstractFlags) = 0; /*0x41f774*/
  String::Trim((char *)v46); /*0x41f778*/
  v10 = 0; /*0x41f781*/
  ExitCellByName = Factory::FindExitCellByName((Factory *)v46); /*0x41f783*/
  if ( ExitCellByName != -1 ) /*0x41f78b*/
  {
    v10 = *((_DWORD *)dword_A8E34C + ExitCellByName); /*0x41f793*/
    goto LABEL_26; /*0x41f796*/
  }
  Index = BuildingTypeClass::FindIndex((BuildingTypeClass *)v46); /*0x41f79c*/
  if ( Index != -1 ) /*0x41f7a4*/
  {
    v13 = dword_A83CE4; /*0x41f7a6*/
  LABEL_25:
    v10 = v13[Index]; /*0x41f7db*/
    goto LABEL_26; /*0x41f7db*/
  }
  v14 = TypeClass::FindByName((TypeClass *)v46); /*0x41f7b2*/
  if ( v14 != -1 ) /*0x41f7ba*/
  {
    v10 = *((_DWORD *)dword_A8B21C + v14); /*0x41f7c2*/
    goto LABEL_26; /*0x41f7c5*/
  }
  Index = BuildingTypeClass::FindIndexByName((BuildingTypeClass *)v46); /*0x41f7cb*/
  if ( Index != -1 ) /*0x41f7d3*/
  {
    v13 = dword_A83C6C; /*0x41f7d5*/
    goto LABEL_25; /*0x41f7d5*/
  }
  LABEL_26:
  *((_DWORD *)a2_2 + 54) = v10; /*0x41f7de*/
  v15 = strtok(0, Str); /*0x41f7ea*/
  if ( !v15 ) /*0x41f7f4*/
    return 0; /*0x41faf5*/
  strcpy(v44, "00"); /*0x41f807*/
  v16 = 0; /*0x41f80e*/
  v17 = *v15 == 0; /*0x41f810*/
  v15 = v15; /*0x41f812*/
  IDA_LODWORD(v45) = 0; /*0x41f818*/
  if ( !v17 ) /*0x41f81c*/
  {
    do /*0x41f876*/
    {
      if ( isspace(*v15) ) /*0x41f822*/
      {
        do /*0x41f834*/
          v19 = *++v15; /*0x41f82e*/
        while ( isspace(v19) ); /*0x41f834*/
      }
      v20 = *v15; /*0x41f840*/
      v21 = *++v15; /*0x41f842*/
      v44[0] = v20; /*0x41f848*/
      if ( v21 ) /*0x41f84c*/
      {
        v44[1] = v21; /*0x41f84e*/
        ++v15; /*0x41f852*/
      }
      else
      {
        v44[1] = 0; /*0x41f855*/
      }
      if ( v16 >= 0x20 ) /*0x41f85c*/
        break; /*0x41f85c*/
      *((_BYTE *)a2_2 + v16 + 228) = globalHelper_0C9DBD((int)v44, (int)&v45, 16); /*0x41f86f*/
      ++v16; /*0x41f87b*/
    }
    while ( *v15 ); /*0x41f876*/
  }
  v22 = strtok(0, Str); /*0x41f886*/
  if ( v22 ) /*0x41f890*/
  {
    atof(v22); /*0x41f893*/
    IDA_LOWORD(v23) = Math::RoundToInt(v2); /*0x41f89b*/
    v45 = v23; /*0x41f8a0*/
    __asm /*0x41f8a8*/
    {
      fild [esp+280h+var_26C]
      fstp qword ptr [ebp+0B8h]
    }
    *((double *)a2_2 + 23) = _RT1; /*0x41f8ac*/
  }
  v25 = strtok(0, Str); /*0x41f8b8*/
  if ( v25 ) /*0x41f8c2*/
  {
    atof(v25); /*0x41f8c5*/
    IDA_LOWORD(v26) = Math::RoundToInt(v2); /*0x41f8cd*/
    v45 = v26; /*0x41f8d2*/
    __asm /*0x41f8da*/
    {
      fild [esp+280h+var_26C]
      fstp qword ptr [ebp+0C0h]
    }
    *((double *)a2_2 + 24) = _RT1; /*0x41f8de*/
  }
  v28 = strtok(0, Str); /*0x41f8ea*/
  if ( v28 ) /*0x41f8f4*/
  {
    atof(v28); /*0x41f8f7*/
    IDA_LOWORD(v29) = Math::RoundToInt(v2); /*0x41f8ff*/
    v45 = v29; /*0x41f904*/
    __asm /*0x41f90c*/
    {
      fild [esp+280h+var_26C]
      fstp qword ptr [ebp+0C8h]
    }
    *((double *)a2_2 + 25) = _RT1; /*0x41f910*/
  }
  v31 = strtok(0, Str); /*0x41f91c*/
  if ( v31 ) /*0x41f926*/
    *((_BYTE *)a2_2 + 208) = atoi(v31) != 0; /*0x41f936*/
  strtok(0, Str); /*0x41f942*/
  v32 = strtok(0, Str); /*0x41f94d*/
  if ( v32 ) /*0x41f957*/
    *((_DWORD *)a2_2 + 43) = atoi(v32); /*0x41f962*/
  v33 = strtok(0, Str); /*0x41f96e*/
  if ( v33 ) /*0x41f978*/
    *((_BYTE *)a2_2 + 209) = atoi(v33) != 0; /*0x41f988*/
  v34 = strtok(0, Str); /*0x41f994*/
  if ( v34 ) /*0x41f99e*/
  {
    strncpy((char *)&v46[0].nextArrayIndex, v34, 0x18u); /*0x41f9a8*/
    v46[0].?[7] = 0; /*0x41f9b4*/
    String::Trim((char *)&v46[0].nextArrayIndex); /*0x41f9b8*/
    *((_DWORD *)a2_2 + 56) = 0; /*0x41f9bd*/
    if ( _strcmpi((char *)&v46[0].nextArrayIndex, (char *)off_818114) ) /*0x41f9cf*/
      *((_DWORD *)a2_2 + 56) = TeamTypeClass::FindByName((TeamTypeClass *)&v46[0].nextArrayIndex); /*0x41f9e4*/
  }
  v35 = strtok(0, Str); /*0x41f9f0*/
  if ( v35 ) /*0x41f9fa*/
    *((_BYTE *)a2_2 + 210) = atoi(v35) != 0; /*0x41fa0a*/
  v36 = strtok(0, Str); /*0x41fa16*/
  if ( v36 ) /*0x41fa20*/
    *((_BYTE *)a2_2 + 211) = atoi(v36) != 0; /*0x41fa30*/
  v37 = strtok(0, Str); /*0x41fa3c*/
  if ( v37 ) /*0x41fa46*/
    *((_BYTE *)a2_2 + 212) = atoi(v37) != 0; /*0x41fa56*/
  v38 = *((_DWORD *)a2_2 + 55); /*0x41fa5c*/
  if ( v38 ) /*0x41fa64*/
  {
    v39 = *((_DWORD *)a2_2 + 44); /*0x41fa6c*/
    if ( v39 <= HouseClass::GetMaxBuildLevel(v38->u32_39) ) /*0x41fa79*/
      MaxBuildLevel = HouseClass::GetMaxBuildLevel(*(HouseClass **)(*((_DWORD *)a2_2 + 55) + 228)); /*0x41fa8b*/
    else
      MaxBuildLevel = v39; /*0x41fa7b*/
    *((_DWORD *)a2_2 + 44) = MaxBuildLevel; /*0x41fa90*/
  }
  v41 = *((_DWORD *)a2_2 + 56); /*0x41fa96*/
  if ( v41 ) /*0x41fa9e*/
  {
    v42 = *((_DWORD *)a2_2 + 44); /*0x41faa6*/
    if ( v42 > HouseClass::GetMaxBuildLevel(v41->u32_39) ) /*0x41fab3*/
    {
      *((_DWORD *)a2_2 + 44) = v42; /*0x41fab8*/
      return 1; /*0x41fac9*/
    }
    *((_DWORD *)a2_2 + 44) = HouseClass::GetMaxBuildLevel(*(HouseClass **)(*((_DWORD *)a2_2 + 56) + 228)); /*0x41fadd*/
  }
  return 1; /*0x41fab7*/
}
} // namespace gamemd
// 0x41FD60
namespace gamemd {
int AITriggerTypeClass::RegisterSuccess()
{
  int v1; // edx
  double v2; // st7
  double v3; // st7
  int result; // eax

  v1 = this->u32_108; /*0x41fd61*/
  v2 = 0.0; /*0x41fd67*/
  if ( v1 > 0 ) /*0x41fd73*/
  {
    v2 = (double)this->u32_108 * ((double)this->u32_104 / (double)this->u32_108 - 0.5); /*0x41fd89*/
    if ( v2 < 0.0 ) /*0x41fd96*/
      v2 = 0.0; /*0x41fd9a*/
  }
  v3 = v2 + *(double *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 192) + this->u32_B8; /*0x41fdb1*/
  this->u32_B8 = v3; /*0x41fdb3*/
  if ( v3 < this->q030 ) /*0x41fdc4*/
  {
    this->u32_B8 = this->q030; /*0x41fdcc*/
    this->u32_BC = this->q031; /*0x41fdd8*/
  }
  if ( this->u32_B8 > this->u32_C8 ) /*0x41fdef*/
  {
    this->u32_B8 = this->u32_C8; /*0x41fdf7*/
    this->u32_BC = this->alignmentPadding; /*0x41fe03*/
  }
  result = this->u32_104 + 1; /*0x41fe0f*/
  this->u32_104 = result; /*0x41fe11*/
  this->u32_108 = v1 + 1; /*0x41fe17*/
  return result; /*0x41fe1e*/
}
} // namespace gamemd
// 0x41FE20
namespace gamemd {
int AITriggerTypeClass::RegisterFailure()
{
  int v1; // edx
  double v2; // st7
  double v3; // st7
  int result; // eax
  __int16 v5; // fps
  double v6; // st7
  bool v7; // c0
  char v8; // c2
  bool v9; // c3

  v1 = this->u32_108; /*0x41fe21*/
  v2 = 0.0; /*0x41fe28*/
  if ( v1 > 0 ) /*0x41fe3a*/
  {
    v2 = (double)v1 /*0x41fe56*/
       * (((double)this->u32_104 / (double)v1 - 0.5)
        * *(double *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 208));
    if ( v2 > 0.0 ) /*0x41fe63*/
      v2 = 0.0; /*0x41fe67*/
  }
  v3 = v2 + *(double *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 200) + this->u32_B8; /*0x41fe7a*/
  this->u32_B8 = v3; /*0x41fe7c*/
  if ( v3 < this->q030 ) /*0x41fe8d*/
  {
    this->u32_B8 = this->q030; /*0x41fe95*/
    result = this->q031; /*0x41fe9b*/
    this->u32_BC = result; /*0x41fea1*/
  }
  v6 = this->u32_B8; /*0x41fea7*/
  v7 = v6 < this->u32_C8; /*0x41fead*/
  v8 = 0; /*0x41fead*/
  v9 = v6 == this->u32_C8; /*0x41fead*/
  IDA_LOWORD(result) = v5; /*0x41feb3*/
  if ( v6 > this->u32_C8 ) /*0x41feb8*/
  {
    this->u32_B8 = this->u32_C8; /*0x41fec0*/
    result = this->alignmentPadding; /*0x41fec6*/
    this->u32_BC = result; /*0x41fecc*/
  }
  this->u32_108 = v1 + 1; /*0x41fed3*/
  return result; /*0x41fed9*/
}
} // namespace gamemd
// 0x41FFF0
namespace gamemd {
AITriggerTypeClass * AITriggerTypeClass::ddtor(unsigned int * Block, char a2)
{
  int v3; // eax
  AITriggerTypeClass *v5; // [esp+4h] [ebp-4h] BYREF

  *(_DWORD *)Block->__pad_0 = &(void*)(void*)&AITriggerTypeClass_vftable; /*0x41fffd*/
  Block->AITriggerTypeClass_field_0x04 = (int)&(void*)(void*)&AITriggerTypeClass_vftable; /*0x420003*/
  Block->AITriggerTypeClass_field_0x08 = (int)&(void*)(void*)&AITriggerTypeClass_vftable; /*0x42000a*/
  Block->AITriggerTypeClass_field_0x0C = (int)&(void*)(void*)&AITriggerTypeClass_vftable; /*0x420011*/
  v5 = Block; /*0x42001f*/
  v3 = (*(int (__thiscall **)(_DWORD *, AITriggerTypeClass **))(dword_A8B200 + 16))(&dword_A8B200, &v5); /*0x420023*/
  if ( v3 != -1 && v3 < dword_A8B210 && v3 < --dword_A8B210 ) /*0x42003e*/
  {
    do /*0x420056*/
    {
      ++v3; /*0x420046*/
      *((_DWORD *)dword_A8B204 + v3 - 1) = *((_DWORD *)dword_A8B204 + v3); /*0x42004a*/
    }
    while ( v3 < dword_A8B210 ); /*0x420056*/
  }
  AbstractTypeClass::Dtor((AbstractTypeClass *)Block); /*0x42005a*/
  if ( (a2 & 1) != 0 ) /*0x420064*/
    RA2_OPDEL(Block); /*0x420067*/
  return Block->__pad_0; /*0x420071*/
}
} // namespace gamemd
// 0x41FFD0
namespace gamemd {
int AITriggerTypeClass::GetTypeIdentifier()
{
  return 59; /*0x41ffd5*/
}
} // namespace gamemd
// 0x41FFE0
namespace gamemd {
int AITriggerTypeClass::GetObjectSize()
{
  return 272; /*0x41ffe5*/
}
} // namespace gamemd
// 0x420370
namespace gamemd {
void AITriggerTypeClass_40::ClearBuffer(void *a1_1)
{
  void *v2; // eax

  v2 = *(void **)&a1_1->m_1[3]; /*0x420376*/
  a1_1->m_10 = 0; /*0x420379*/
  if ( v2 && IDA_BYTE1(a1_1->m_C) ) /*0x420380*/
  {
    RA2_OPDEL(v2); /*0x420386*/
    *(_DWORD *)&a1_1->m_1[3] = 0; /*0x42038e*/
  }
  IDA_BYTE1(a1_1->m_C) = 0; /*0x420391*/
  a1_1->m_8 = 0; /*0x420394*/
}
} // namespace gamemd

// 0x4203A0
namespace gamemd {
unsigned int AITriggerTypeClass_40::PointerToIndex(int a2)
{
  if ( IDA_LOBYTE(this->m_C) ) /*0x4203a0*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x4203b5*/
  else
    return 0; /*0x4203a7*/
}
} // namespace gamemd

// 0x4203C0
namespace gamemd {
void AITriggerTypeClass_40::Seek(int a2, void *a2_2, void *a3_1)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x4203ca*/
}
} // namespace gamemd

// 0x4203D0
namespace gamemd {
char AITriggerTypeClass_40::AddRef(int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x4203d2*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x4203dd*/
  {
    v3 = 0; /*0x4203df*/
    if ( m_8 <= 0 ) /*0x4203e3*/
      return 1; /*0x420403*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x4203e5*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x4203eb*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x4203f4*/
    {
      ++v3; /*0x4203f6*/
      ++v4; /*0x4203f7*/
      if ( v3 >= m_8 ) /*0x4203fc*/
        return 1; /*0x4203fc*/
    }
  }
  return 0; /*0x4203fe*/
}
} // namespace gamemd

// 0x420410
namespace gamemd {
char AITriggerTypeClass_40::Release(int a2, unsigned int * a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x42041c*/
  {
    IDA_LOBYTE(this->m_C) = 0; /*0x420426*/
    if ( a3 ) /*0x42042c*/
      v4 = a3; /*0x420442*/
    else
      v4 = (_DWORD *)RA2_OPNEW(4 * a2); /*0x42043e*/
    IDA_LOBYTE(this->m_C) = 1; /*0x420446*/
    if ( v4 ) /*0x42044a*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x420455*/
      {
        m_8 = this->m_8; /*0x42045c*/
        if ( a2 < m_8 ) /*0x420461*/
          m_8 = a2; /*0x420463*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x420469*/
          ++i; /*0x42046e*/
        if ( IDA_BYTE1(this->m_C) ) /*0x42047b*/
        {
          RA2_OPDEL(*(void **)&this->m_1[3]); /*0x420486*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x42048e*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x420497*/
      this->m_8 = a2; /*0x42049f*/
      IDA_BYTE1(this->m_C) = a3 == 0; /*0x4204a2*/
      return 1; /*0x4204a8*/
    }
    else
    {
      return 0; /*0x42044f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_PAVAlphaLightingRemapClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x4204b2*/
    return 1; /*0x4204b8*/
  }
}
} // namespace gamemd

// 0x4204C0
namespace gamemd {
void AITriggerTypeClass_40::ddtor()
{
  if ( *(_DWORD *)&this->m_1[3] && IDA_BYTE1(this->m_C) ) /*0x4204cd*/
  {
    RA2_OPDEL(*(void **)&this->m_1[3]); /*0x4204d3*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x4204db*/
  }
  IDA_BYTE1(this->m_C) = 0; /*0x4204de*/
  this->m_8 = 0; /*0x4204e1*/
}
} // namespace gamemd

// 0x4204F0
namespace gamemd {
int AITriggerTypeClass_40::Read(unsigned int * a2, void *a2_2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !IDA_LOBYTE(a2_2->m_C) ) /*0x4204f0*/
    return 0; /*0x4204f8*/
  m_8 = a2_2->m_8; /*0x4204fe*/
  result = 0; /*0x420501*/
  if ( m_8 <= 0 ) /*0x420505*/
    return -1; /*0x42051c*/
  for ( i = *(_DWORD **)&a2_2->m_1[3]; *i != *a2_2; ++i ) /*0x42050b*/
  {
    if ( ++result >= m_8 ) /*0x42051a*/
      return -1; /*0x42051a*/
  }
  return result; /*0x4204fa*/
}
} // namespace gamemd

// 0x420530
namespace gamemd {
unsigned int AITriggerTypeClass_40::Write(int a2)
{
  if ( IDA_LOBYTE(this->m_C) ) /*0x420530*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x420545*/
  else
    return 0; /*0x420537*/
}
} // namespace gamemd

// 0x420550
namespace gamemd {
char AITriggerTypeClass_40::SetCapacity(int a2, unsigned int * a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x42055c*/
  {
    IDA_LOBYTE(this->m_C) = 0; /*0x420562*/
    if ( a3 ) /*0x420568*/
      v4 = a3; /*0x42057e*/
    else
      v4 = (_DWORD *)RA2_OPNEW(4 * a2); /*0x42057a*/
    IDA_LOBYTE(this->m_C) = 1; /*0x420582*/
    if ( !v4 ) /*0x420586*/
      return 0; /*0x4205fa*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x420588*/
    {
      m_8 = this->m_8; /*0x42058f*/
      if ( a2 < m_8 ) /*0x420594*/
        m_8 = a2; /*0x420596*/
      for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x42059c*/
        ++i; /*0x4205a1*/
      if ( IDA_BYTE1(this->m_C) ) /*0x4205ae*/
      {
        RA2_OPDEL(*(void **)&this->m_1[3]); /*0x4205b9*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x4205c1*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v4; /*0x4205ca*/
    this->m_8 = a2; /*0x4205d2*/
    IDA_BYTE1(this->m_C) = a3 == 0; /*0x4205d5*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_PAVAlphaLightingRemapClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x4205de*/
  }
  v7 = this->m_8; /*0x4205e1*/
  if ( v7 < this->m_10 ) /*0x4205e9*/
    this->m_10 = v7; /*0x4205eb*/
  return 1; /*0x4205ee*/
}
} // namespace gamemd

// 0x420600
namespace gamemd {
int AITriggerTypeClass_40::FindItem(unsigned int * a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x420600*/
  result = 0; /*0x420603*/
  if ( m_10 <= 0 ) /*0x420608*/
    return -1; /*0x42061f*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x42060e*/
  {
    if ( ++result >= m_10 ) /*0x42061d*/
      return -1; /*0x42061d*/
  }
  return result; /*0x420622*/
}
}
// 0x420630
namespace gamemd {
VectorClass_flat * AITriggerTypeClass_40::QueryInterface(unsigned int * Block, char a2)
{
  void *v3; // eax

  v3 = *(void **)&Block->m_1[3]; /*0x420633*/
  *(_DWORD *)Block->__pad_0 = &(void*)(void*)&VectorClass_AlphaLightingRemapClass___vftable; /*0x420636*/
  if ( v3 && IDA_BYTE1(Block->m_C) ) /*0x420640*/
  {
    RA2_OPDEL(v3); /*0x420648*/
    *(_DWORD *)&Block->m_1[3] = 0; /*0x420650*/
  }
  IDA_BYTE1(Block->m_C) = 0; /*0x42065b*/
  Block->m_8 = 0; /*0x420661*/
  if ( (a2 & 1) != 0 ) /*0x420668*/
    RA2_OPDEL(Block); /*0x42066b*/
  return Block->__pad_0; /*0x420675*/
}
} // namespace gamemd

// 0x420680
namespace gamemd {
DynamicVector * AITriggerTypeClass_40::Constructor_VectorClass_AlphaLightingRemapClass___(unsigned int * Block, char a2)
{
  void *v3; // eax

  v3 = *(void **)&Block->m_1[3]; /*0x420683*/
  *(_DWORD *)Block->__pad_0 = &(void*)(void*)&VectorClass_AlphaLightingRemapClass___vftable; /*0x420686*/
  if ( v3 && IDA_BYTE1(Block->m_C) ) /*0x420690*/
  {
    RA2_OPDEL(v3); /*0x420698*/
    *(_DWORD *)&Block->m_1[3] = 0; /*0x4206a0*/
  }
  IDA_BYTE1(Block->m_C) = 0; /*0x4206ab*/
  Block->m_8 = 0; /*0x4206b1*/
  if ( (a2 & 1) != 0 ) /*0x4206b8*/
    RA2_OPDEL(Block); /*0x4206bb*/
  return Block->__pad_0; /*0x4206c5*/
}
} // namespace gamemd
