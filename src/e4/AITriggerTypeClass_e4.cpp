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

// 0x41EC90
namespace gamemd {
int AITriggerTypeClass::CivilianHouseOwns(int a2, int a3)
{
  unsigned int *v3; // edi
  int v4; // esi
  bool result; // al
  unsigned int *v6; // ebx
  int v7; // esi
  int v8; // ebp
  int v9; // edi
  int v10; // eax
  char v11; // [esp+Fh] [ebp-5h]

  v3 = (unsigned int *)(this);
  v4 = 0; /*0x41ec9d*/
  v11 = 0; /*0x41eca5*/
  if ( HouseClass_Count <= 0 ) /*0x41ecaa*/
    return v11; /*0x41ecaa*/
  while ( *(unsigned int *)(*(unsigned int *)(*(unsigned int *)&HouseClass_Array->gap0[4 * v4] + 52) + 188) != HouseTypeClass::Find(g_INI_Key_Civilian) ) /*0x41eccc*/
  {
    if ( ++v4 >= HouseClass_Count ) /*0x41ecd6*/
      return 0; /*0x41ece2*/
  }
  v6 = *(unsigned int **)&HouseClass_Array->gap0[4 * v4]; /*0x41ece5*/
  if ( !v6 ) /*0x41ecea*/
    return v11; /*0x41ee23*/
  v7 = v3->q0D8; /*0x41ecf0*/
  if ( v7 ) /*0x41ecf8*/
  {
    v8 = (*(int (**)(int))(*(unsigned int *)v7 + 64))(v7); /*0x41ed0a*/
    v9 = 0; /*0x41ed0c*/
    switch ( (*(int (**)(int))(*(unsigned int *)v7 + 44))(v7) ) /*0x41ed21*/
    {
      case 3: /*0x41ed21*/
        v9 = DynamicVector::GetOrGrow(v6 + 5475, v8); /*0x41ed73*/
        goto LABEL_12; /*0x41ed73*/
      case 7: /*0x41ed21*/
        v10 = DynamicVector::GetOrGrow(v6 + 5460, v8); /*0x41ed2f*/
        v3 = this; /*0x41ed37*/
        break; /*0x41ed3b*/
      case 16: /*0x41ed21*/
        v10 = DynamicVector::GetOrGrow(v6 + 5470, v8); /*0x41ed59*/
        v3 = this; /*0x41ed61*/
        break; /*0x41ed65*/
      case 40: /*0x41ed21*/
        v10 = DynamicVector::GetOrGrow(v6 + 5465, v8); /*0x41ed44*/
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
  switch ( v3->q0E8 ) /*0x41ed8f*/
  {
    case 0: /*0x41ed8f*/
      result = v10 < v3->q0E4; /*0x41eda5*/
      break; /*0x41edad*/
    case 1: /*0x41ed8f*/
      result = v10 <= v3->q0E4; /*0x41edbf*/
      break; /*0x41edc7*/
    case 2: /*0x41ed8f*/
      result = v10 == v3->q0E4; /*0x41edd9*/
      break; /*0x41ede1*/
    case 3: /*0x41ed8f*/
      result = v10 >= v3->q0E4; /*0x41edf3*/
      break; /*0x41edfb*/
    case 4: /*0x41ed8f*/
      result = v10 > v3->q0E4; /*0x41ee0d*/
      break; /*0x41ee15*/
    case 5: /*0x41ed8f*/
      return v10 != v3->q0E4; /*0x41ee1e*/
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

  v9 = (gamemd::DynamicVector **)(0);
  if ( !a2 ) /*0x41ee9f*/
    return v9; /*0x41efcb*/
    v4 = *((unsigned int *)this + 216);
  if ( v4 ) /*0x41eeae*/
  {
    v5 = (*(int (**)(int))(*(unsigned int *)v4 + 64))(v4); /*0x41eec1*/
    v6 = 0; /*0x41eec3*/
    switch ( (*(int (**)(int))(*(unsigned int *)v4 + 44))(v4) ) /*0x41eed8*/
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
    switch ( *((unsigned int *)this + 232) )
  {
    case 0: /*0x41ef4b*/
            result = v7 < *((unsigned int *)this + 228);
      break; /*0x41ef65*/
    case 1: /*0x41ef4b*/
            result = v7 <= *((unsigned int *)this + 228);
      break; /*0x41ef7b*/
    case 2: /*0x41ef4b*/
            result = v7 == *((unsigned int *)this + 228);
      break; /*0x41ef91*/
    case 3: /*0x41ef4b*/
            result = v7 >= *((unsigned int *)this + 228);
      break; /*0x41efa7*/
    case 4: /*0x41ef4b*/
            result = v7 > *((unsigned int *)this + 228);
      break; /*0x41efbd*/
    case 5: /*0x41ef4b*/
            return v7 != *((unsigned int *)this + 228);
    default:
      return v9;
  }
  return (gamemd::DynamicVector **)(result);
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
  v2 = *(unsigned int *)(a1 + 612); /*0x41f0db*/
  v3 = 0; /*0x41f0e1*/
  if ( v2 <= 0 ) /*0x41f0e5*/
    return 0; /*0x41f0e5*/
  for ( i = *(unsigned int *)(a1 + 600); *(unsigned int *)(*(unsigned int *)(*(unsigned int *)i + 40) + 180) != 1; i += 4 ) /*0x41f0ed*/
  {
    if ( ++v3 >= v2 ) /*0x41f103*/
      return 0; /*0x41f103*/
  }
  v6 = *(unsigned int *)(*(unsigned int *)(a1 + 600) + 4 * v3); /*0x41f10d*/
  if ( !v6 || !*(unsigned char *)(v6 + 109) ) /*0x41f114*/
    return 0; /*0x41f119*/
  v7 = *(unsigned int *)(v6 + 48); /*0x41f11b*/
  v8 = *(unsigned int *)(v6 + 56); /*0x41f11e*/
  if ( v7 == -1 ) /*0x41f124*/
    goto LABEL_12; /*0x41f124*/
  if ( (int)dword_A8ED84 - v7 < v8 ) /*0x41f130*/
  {
    v8 -= (int)dword_A8ED84 - v7; /*0x41f132*/
  LABEL_12:
    v9 = v8; /*0x41f134*/
    return 1.0 - *(float *)&dword_8871E0->? >= (double)v9 / (double)Super::GetDefaultTimer((unsigned int *)v6); /*0x41f134*/
  }
  v9 = 0; /*0x41f171*/
  return 1.0 - *(float *)&dword_8871E0->? >= (double)v9 / (double)Super::GetDefaultTimer((unsigned int *)v6); /*0x41f167*/
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
  v2 = *(unsigned int *)(a1 + 612); /*0x41f18b*/
  v3 = 0; /*0x41f191*/
  if ( v2 <= 0 ) /*0x41f195*/
    return 0; /*0x41f195*/
  for ( i = *(unsigned int *)(a1 + 600); *(unsigned int *)(*(unsigned int *)(*(unsigned int *)i + 40) + 180) != 3; i += 4 ) /*0x41f19d*/
  {
    if ( ++v3 >= v2 ) /*0x41f1b3*/
      return 0; /*0x41f1b3*/
  }
  v6 = *(unsigned int *)(*(unsigned int *)(a1 + 600) + 4 * v3); /*0x41f1bd*/
  if ( !v6 || !*(unsigned char *)(v6 + 109) ) /*0x41f1c4*/
    return 0; /*0x41f1c9*/
  v7 = *(unsigned int *)(v6 + 48); /*0x41f1cb*/
  v8 = *(unsigned int *)(v6 + 56); /*0x41f1ce*/
  if ( v7 == -1 ) /*0x41f1d4*/
    goto LABEL_12; /*0x41f1d4*/
  if ( (int)dword_A8ED84 - v7 < v8 ) /*0x41f1e0*/
  {
    v8 -= (int)dword_A8ED84 - v7; /*0x41f1e2*/
  LABEL_12:
    v9 = v8; /*0x41f1e4*/
    return 1.0 - *(float *)&dword_8871E0->? >= (double)v9 / (double)Super::GetDefaultTimer((unsigned int *)v6); /*0x41f1e4*/
  }
  v9 = 0; /*0x41f221*/
  return 1.0 - *(float *)&dword_8871E0->? >= (double)v9 / (double)Super::GetDefaultTimer((unsigned int *)v6); /*0x41f217*/
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
  v5 = (*(int (__stdcall **)(int))(*(unsigned int *)(a3 + 36) + 24))(a3 + 36); /*0x41f245*/
    switch ( *((unsigned int *)this + 232) )
  {
    case 0: /*0x41f253*/
            result = v5 < *((unsigned int *)this + 228);
      break; /*0x41f269*/
    case 1: /*0x41f253*/
            result = v5 <= *((unsigned int *)this + 228);
      break; /*0x41f27b*/
    case 2: /*0x41f253*/
            result = v5 == *((unsigned int *)this + 228);
      break; /*0x41f28d*/
    case 3: /*0x41f253*/
            result = v5 >= *((unsigned int *)this + 228);
      break; /*0x41f29f*/
    case 4: /*0x41f253*/
            result = v5 > *((unsigned int *)this + 228);
      break; /*0x41f2b1*/
    case 5: /*0x41f253*/
            return v5 != *((unsigned int *)this + 228);
    default:
      return v3;
  }
  return result; /*0x41f260*/
}
} // namespace gamemd
// 0x41F580
namespace gamemd {
ObjectClass * * AITriggerTypeClass::LoadFromINI(unsigned char *** a2)
{
  char *v3; // eax
  char *v4; // eax
  char *v5; // eax
  int v6; // eax
  char *v7; // eax
  char *v8; // eax
  int v9; // esi
  int ExitCellByName; // eax
  int Index; // eax
  unsigned int v12;
  int v13; // eax
  char *v14; // eax
  unsigned int v15; // edi
  bool v16; // zf
  int v18; // ecx
  char v19; // dl
  char v20; // al
  char *v21; // eax
  double v22; // st7
  char *v23; // eax
  double v24; // st7
  char *v25; // eax
  double v26; // st7
  char *v27; // eax
  char *v28; // eax
  char *v29; // eax
  char *v30; // eax
  char *v31; // eax
  char *v32; // eax
  char *v33; // eax
  ObjectClass * v34;
  ObjectClass * v35;
  ObjectClass * MaxBuildLevel;
  ObjectClass * v37;
  ObjectClass * v38;
  char v40[4]; // [esp+10h] [ebp-270h] BYREF
  int64_t v41; // [esp+14h] [ebp-26Ch] BYREF
  char v42[23]; // [esp+1Ch] [ebp-264h] BYREF
  char v43; // [esp+33h] [ebp-24Dh]
  char v44[24]; // [esp+34h] [ebp-24Ch] BYREF
  char Destination[48]; // [esp+4Ch] [ebp-234h] BYREF
  char v46; // [esp+7Ch] [ebp-204h]
  char String[512]; // [esp+80h] [ebp-200h] BYREF

  INIClass::ResetSection(a2); /*0x41f595*/
  if ( !INIClass::GetString( /*0x41f5b9*/
          a2,
          (uint8_t *)aAitriggertypes,
          (uint8_t *)(&this->vtable46),
          &g_INI_DefaultBuffer,
          String,
          512) )
    return 0; /*0x41f5b9*/
  v3 = strtok(String, Delimiter); /*0x41f5d3*/
  if ( !v3 ) /*0x41f5df*/
    return 0; /*0x41f5df*/
  strncpy(Destination, v3, 0x30u); /*0x41f5ed*/
  v46 = 0; /*0x41f5fe*/
    if ( Destination != (char *)((char *)this + 400) )
  {
        qmemcpy((void *)((char *)this + 400), Destination, 0x30u);
        *((unsigned char *)this + 592) = v46;
  }
  v4 = strtok(0, Delimiter); /*0x41f616*/
  if ( !v4 ) /*0x41f620*/
    return 0; /*0x41f620*/
  strncpy(v42, v4, 0x18u); /*0x41f62e*/
  v43 = 0; /*0x41f63a*/
  String::Trim(v42); /*0x41f63e*/
    *((unsigned int *)this + 880) = 0;
  if ( _strcmpi(v42, off_818114) ) /*0x41f655*/
        *((unsigned int *)this + 880) = TeamTypeClass::FindByName(v42);
  v5 = strtok(0, Delimiter); /*0x41f676*/
  if ( !v5 ) /*0x41f680*/
    return 0; /*0x41f680*/
  strncpy(v42, v5, 0x18u); /*0x41f68e*/
  v43 = 0; /*0x41f69a*/
  String::Trim(v42); /*0x41f69e*/
    *((unsigned int *)this + 640) = 0;
    *((unsigned int *)this + 672) = -1;
  if ( _strcmpi(v42, off_818118) ) /*0x41f6bf*/
  {
    if ( _strcmpi(v42, off_818114) ) /*0x41f6e2*/
    {
      v6 = SuperWeaponTypeClass::FindByName(v42); /*0x41f6f2*/
            *((unsigned int *)this + 672) = v6;
      if ( v6 != -1 ) /*0x41f700*/
                *((unsigned int *)this + 640) = 1;
    }
  }
  else
  {
        *((unsigned int *)this + 640) = 2;
  }
  if ( !strtok(0, Delimiter) ) /*0x41f712*/
    return 0; /*0x41f712*/
    *((unsigned int *)this + 704) = 0;
  v7 = strtok(0, Delimiter); /*0x41f72e*/
  if ( !v7 ) /*0x41f738*/
    return 0; /*0x41f738*/
    *((unsigned int *)this + 608) = atoi(v7);
  v8 = strtok(0, Delimiter); /*0x41f750*/
  if ( !v8 ) /*0x41f75a*/
    return 0; /*0x41f75a*/
  strncpy(v42, v8, 0x18u); /*0x41f768*/
  v43 = 0; /*0x41f774*/
  String::Trim(v42); /*0x41f778*/
  v9 = 0; /*0x41f781*/
  ExitCellByName = Factory::FindExitCellByName(v42); /*0x41f783*/
  if ( ExitCellByName != -1 ) /*0x41f78b*/
  {
    v9 = *((unsigned int *)Factory_ExitCellTable + ExitCellByName); /*0x41f793*/
    goto LABEL_26; /*0x41f796*/
  }
  Index = BuildingTypeClass::FindIndex(v42); /*0x41f79c*/
  if ( Index != -1 ) /*0x41f7a4*/
  {
    v12 = g_UnitTypeCount2; /*0x41f7a6*/
  LABEL_25:
    v9 = ((unsigned int *)(v12))[Index]; /*0x41f7db*/
    goto LABEL_26; /*0x41f7db*/
  }
  v13 = TypeClass::FindByName(v42); /*0x41f7b2*/
  if ( v13 != -1 ) /*0x41f7ba*/
  {
    v9 = *((unsigned int *)g_AircraftTypeCount + v13); /*0x41f7c2*/
    goto LABEL_26; /*0x41f7c5*/
  }
  Index = BuildingTypeClass::FindIndexByName(v42); /*0x41f7cb*/
  if ( Index != -1 ) /*0x41f7d3*/
  {
    v12 = g_TriggerTypeCount; /*0x41f7d5*/
    goto LABEL_25; /*0x41f7d5*/
  }
  LABEL_26:
    *((unsigned int *)this + 864) = v9;
  v14 = strtok(0, Delimiter); /*0x41f7ea*/
  if ( !v14 ) /*0x41f7f4*/
    return 0; /*0x41faf5*/
  strcpy(v40, "00"); /*0x41f807*/
  v15 = 0; /*0x41f80e*/
  v16 = *v14 == 0; /*0x41f810*/
  v14 = v14; /*0x41f812*/
  IDA_LODWORD(v41) = 0; /*0x41f818*/
  if ( !v16 ) /*0x41f81c*/
  {
    do /*0x41f876*/
    {
      if ( isspace(*v14) ) /*0x41f822*/
      {
        do /*0x41f834*/
          v18 = *++v14; /*0x41f82e*/
        while ( isspace(v18) ); /*0x41f834*/
      }
      v19 = *v14; /*0x41f840*/
      v20 = *++v14; /*0x41f842*/
      v40[0] = v19; /*0x41f848*/
      if ( v20 ) /*0x41f84c*/
      {
        v40[1] = v20; /*0x41f84e*/
        ++v14; /*0x41f852*/
      }
      else
      {
        v40[1] = 0; /*0x41f855*/
      }
      if ( v15 >= 0x20 ) /*0x41f85c*/
        break; /*0x41f85c*/
            *(unsigned char *)(v15 + (char *)this + 912) = globalHelper_0C9DBD(v40, &v41, 16);
      ++v15; /*0x41f87b*/
    }
    while ( *v14 ); /*0x41f876*/
  }
  v21 = strtok(0, Delimiter); /*0x41f886*/
  if ( v21 ) /*0x41f890*/
  {
    v22 = atof(v21); /*0x41f893*/
    v41 = (unsigned int)Math::RoundToInt(v22); /*0x41f8a0*/
        *(double *)((char *)this + 736) = (double)v41;
  }
  v23 = strtok(0, Delimiter); /*0x41f8b8*/
  if ( v23 ) /*0x41f8c2*/
  {
    v24 = atof(v23); /*0x41f8c5*/
    v41 = (unsigned int)Math::RoundToInt(v24); /*0x41f8d2*/
        *(double *)((char *)this + 768) = (double)v41;
  }
  v25 = strtok(0, Delimiter); /*0x41f8ea*/
  if ( v25 ) /*0x41f8f4*/
  {
    v26 = atof(v25); /*0x41f8f7*/
    v41 = (unsigned int)Math::RoundToInt(v26); /*0x41f904*/
        *(double *)((char *)this + 800) = (double)v41;
  }
  v27 = (char *)((void *)(strtok(0, Delimiter)));
  if ( v27 ) /*0x41f926*/
        *((unsigned char *)this + 832) = atoi(v27) != 0;
  strtok(0, Delimiter); /*0x41f942*/
  v28 = strtok(0, Delimiter); /*0x41f94d*/
  if ( v28 ) /*0x41f957*/
        *((unsigned int *)this + 688) = atoi(v28);
  v29 = strtok(0, Delimiter); /*0x41f96e*/
  if ( v29 ) /*0x41f978*/
        *((unsigned char *)this + 836) = atoi(v29) != 0;
  v30 = strtok(0, Delimiter); /*0x41f994*/
  if ( v30 ) /*0x41f99e*/
  {
    strncpy(v44, v30, 0x18u); /*0x41f9a8*/
    v44[23] = 0; /*0x41f9b4*/
    String::Trim(v44); /*0x41f9b8*/
        *((unsigned int *)this + 896) = 0;
    if ( _strcmpi(v44, off_818114) ) /*0x41f9cf*/
            *((unsigned int *)this + 896) = TeamTypeClass::FindByName(v44);
  }
  v31 = (char *)((gamemd::ObjectClass *)(strtok(0, Delimiter)));
  if ( v31 ) /*0x41f9fa*/
        *((unsigned char *)this + 840) = atoi(v31) != 0;
  v32 = strtok(0, Delimiter); /*0x41fa16*/
  if ( v32 ) /*0x41fa20*/
        *((unsigned char *)this + 844) = atoi(v32) != 0;
  v33 = strtok(0, Delimiter); /*0x41fa3c*/
  if ( v33 ) /*0x41fa46*/
        *((unsigned char *)this + 848) = atoi(v33) != 0;
    v34 = *((unsigned int *)this + 880);
  if ( v34 ) /*0x41fa64*/
  {
    v35 = (gamemd::ObjectClass *)((unsigned int)(this->q0B0));
    if ( v35 <= (gamemd::ObjectClass *)(HouseClass)::GetMaxBuildLevel(v34->q0E4) ) /*0x41fa79*/
            MaxBuildLevel = HouseClass::GetMaxBuildLevel(*(int **)(*((unsigned int *)this + 880) + 228));
    else
      MaxBuildLevel = v35; /*0x41fa7b*/
        *((unsigned int *)this + 704) = MaxBuildLevel;
  }
  v37 = (gamemd::ObjectClass *)(this->q0E0);
  if ( v37 ) /*0x41fa9e*/
  {
    v38 = (gamemd::ObjectClass *)(this->q0B0);
    if ( v38 > (gamemd::ObjectClass *)(HouseClass)::GetMaxBuildLevel(v37->q0E4) ) /*0x41fab3*/
    {
      this->q0B0 = (unsigned int)((gamemd::ObjectClass **)(v38));
      return (gamemd::ObjectClass **)(1);
    }
        *((unsigned int *)this + 704) = HouseClass::GetMaxBuildLevel(*(int **)(*((unsigned int *)this + 896) + 228));
  }
  return (gamemd::ObjectClass **)(1);
}
} // namespace gamemd
// 0x41FD60
namespace gamemd {
int AITriggerTypeClass::RegisterSuccess()
{
  void * v1;
  double v2; // st7
  double v3; // st7
  void * result;

  v1 = (void *)(this->q108);
  v2 = 0.0; /*0x41fd67*/
  if ( v1 > 0 ) /*0x41fd73*/
  {
        v2 = (double)*((int *)this + 1056) * ((double)*((int *)this + 1040) / (double)*((int *)this + 1056) - 0.5);
    if ( v2 < 0.0 ) /*0x41fd96*/
      v2 = 0.0; /*0x41fd9a*/
  }
    v3 = v2 + *(double *)&MEMORY[0x8871E0]->AITriggerSuccessWeightDelta + *(double *)((char *)this + 736);
    *(double *)((char *)this + 736) = v3;
    if ( v3 < *(double *)((char *)this + 768) )
  {
        *((unsigned int *)this + 736) = *((unsigned int *)this + 768);
        *((unsigned int *)this + 752) = *((unsigned int *)this + 784);
  }
    if ( *(double *)((char *)this + 736) > *(double *)((char *)this + 800) )
  {
        *((unsigned int *)this + 736) = *((unsigned int *)this + 800);
        *((unsigned int *)this + 752) = *((unsigned int *)this + 816);
  }
  result = (void *)((int)(this->q104 + 1));
  this->q104 = (int)(result);
  this->q108 = (unsigned int)((void *)((int)((unsigned int)(v1)+ 1)));
  return (int)(result);
}
} // namespace gamemd
// 0x41FE20
namespace gamemd {
int AITriggerTypeClass::RegisterFailure()
{
  void * v1;
  double v2; // st7
  double v3; // st7
  void * result;
  int16_t v5; // fps
  double v6; // st7
  bool v7; // c0
  char v8; // c2
  bool v9; // c3

  v1 = (void *)(this->q108);
  v2 = 0.0; /*0x41fe28*/
  if ( v1 > 0 ) /*0x41fe3a*/
  {
    v2 = (double)v1 /*0x41fe56*/
       * (((double)this->q104 / (double)v1 - 0.5)
        * *(double *)&g_RulesClass_Instance->VeinholeMonsterStrength);
    if ( v2 > 0.0 ) /*0x41fe63*/
      v2 = 0.0; /*0x41fe67*/
  }
  v3 = (unsigned int)(v2 + *(double *)&g_RulesClass_Instance->AITriggerTrackRecordCoefficient + *(double *)(&this->q0484));
    *(double *)((char *)this + 736) = v3;
    if ( v3 < *(double *)((char *)this + 768) )
  {
    this->q0B8 = (unsigned int)((void *)((unsigned int)((void *)(this->q0C0))));
    result = (void *)((unsigned int)(this->q0C4));
    this->q0BC = (unsigned int)(result);
  }
    v6 = *(double *)((char *)this + 736);
    v7 = v6 < *(double *)((char *)this + 800);
  v8 = 0; /*0x41fead*/
    v7 = v6 < *(double *)((char *)this + 800);
  IDA_LOWORD(result) = v5; /*0x41feb3*/
    if ( v6 > *(double *)((char *)this + 800) )
  {
    this->q0B8 = (unsigned int)((void *)((unsigned int)(this->q0C8)));
    result = (void *)((unsigned int)(this->q0CC));
    this->q0BC = (unsigned int)(result);
  }
  this->q108 = (unsigned int)(((unsigned int)(void)*)((int)(v1 + 1)));
  return (int)(result);
}
} // namespace gamemd
// 0x41FFF0
namespace gamemd {
AITriggerTypeClass * AITriggerTypeClass::ddtor(char a2)
{
  int v3; // eax
  AITriggerTypeClass *v5; // [esp+4h] [ebp-4h] BYREF

  *(unsigned int *)this->__pad_0 = (void*)&AITriggerTypeClass_vftable; /*0x41fffd*/
    *(Block + 1) = &AITriggerTypeClass::`vftable';
    *(Block + 2) = &AITriggerTypeClass::`vftable';
    *(Block + 3) = &vt_AITriggerTypeClass;
  v5 = this; /*0x42001f*/
  v3 = (*(int (**)(unsigned int *, AITriggerTypeClass **))(dword_A8B200 + 16))(&dword_A8B200, &v5); /*0x420023*/
  if ( v3 != -1 && v3 < dword_A8B210 && v3 < --dword_A8B210 ) /*0x42003e*/
  {
    do /*0x420056*/
    {
      ++v3; /*0x420046*/
      *((unsigned int *)dword_A8B204 + v3 - 1) = *((unsigned int *)dword_A8B204 + v3); /*0x42004a*/
    }
    while ( v3 < dword_A8B210 ); /*0x420056*/
  }
    AbstractTypeClass::Dtor(Block);
  if ( (a2 & 1) != 0 ) /*0x420064*/
    RA2_OPDEL(); /*0x420067*/
  return this; /*0x420071*/
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
void AITriggerTypeClass_40::ClearBuffer(void *a1 = 0)
{
  void *v2; // eax

  v2 = *(void **)&this->q004; /*0x420376*/
    *((unsigned int *)this + 64) = 0;
    if ( v2 && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(v2); /*0x420386*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x4203A0
namespace gamemd {
unsigned int AITriggerTypeClass_40::PointerToIndex(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x4203a7*/
}
} // namespace gamemd

// 0x4203C0
namespace gamemd {
void AITriggerTypeClass_40::Seek(void *a1 = 0)
{
    return *(unsigned int *)(*((unsigned int *)this + 4) + 4 * a2);
}
} // namespace gamemd

// 0x4203D0
namespace gamemd {
char AITriggerTypeClass_40::AddRef(int a2)
{
  int m_8; // esi
  int v3; // edx
  unsigned int *v4; // eax
  int v5; // ecx

    v2 = *((unsigned int *)this + 8);
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x4203dd*/
  {
    v3 = 0; /*0x4203df*/
    if ( m_8 <= 0 ) /*0x4203e3*/
      return 1; /*0x420403*/
        v4 = (unsigned int *)*((unsigned int *)this + 4);
    v5 = *(unsigned int *)(a2 + 4) - (unsigned int)v4; /*0x4203eb*/
    while ( *v4 == *(unsigned int *)((char *)v4 + v5) ) /*0x4203f4*/
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
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x42041c*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x42042c*/
      v4 = a3; /*0x420442*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x42043e*/
        *((unsigned char *)this + 12) = 1;
    if ( v4 ) /*0x42044a*/
    {
            if ( *((unsigned int *)this + 1) )
      {
                v6 = *((unsigned int *)this + 2);
        if ( a2 < m_8 ) /*0x420461*/
          m_8 = a2; /*0x420463*/
                for ( i = 0; i < v6; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
          ++i; /*0x42046e*/
                if ( *((unsigned char *)this + 13) )
        {
          RA2_OPDEL(*(void **)&this->q004); /*0x420486*/
                    *((unsigned int *)this + 1) = 0;
        }
      }
            *((unsigned int *)this + 1) = v4;
            *((unsigned int *)this + 2) = a2;
            *((unsigned char *)this + 13) = a3 == 0;
      return 1; /*0x4204a8*/
    }
    else
    {
      return 0; /*0x42044f*/
    }
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
    return 1; /*0x4204b8*/
  }
}
} // namespace gamemd

// 0x4204C0
namespace gamemd {
void AITriggerTypeClass_40::ddtor(void *a1 = 0)
{
    if ( *((unsigned int *)this + 16) && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(*(void **)&this->q004); /*0x4204d3*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
}
} // namespace gamemd

// 0x4204F0
namespace gamemd {
int AITriggerTypeClass_40::Read(unsigned int * a2)
{
  int result; // eax
  int m_8; // edx
  unsigned int *i; // ecx

    if ( !*((unsigned char *)this + 48) )
    return 0; /*0x4204f8*/
    v3 = *((unsigned int *)this + 32);
  result = 0; /*0x420501*/
  if ( m_8 <= 0 ) /*0x420505*/
    return -1; /*0x42051c*/
  for ( i = *(unsigned int **)&this->q004; *i != *a2; ++i ) /*0x42050b*/
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
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x420537*/
}
} // namespace gamemd

// 0x420550
namespace gamemd {
char AITriggerTypeClass_40::SetCapacity(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x42055c*/
  {
        *((unsigned char *)this + 12) = 0;
    if ( a3 ) /*0x420568*/
      v4 = a3; /*0x42057e*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x42057a*/
        *((unsigned char *)this + 12) = 1;
    if ( !v4 ) /*0x420586*/
      return 0; /*0x4205fa*/
        if ( *((unsigned int *)this + 1) )
    {
            v5 = *((unsigned int *)this + 2);
      if ( a2 < m_8 ) /*0x420594*/
        m_8 = a2; /*0x420596*/
            for ( i = 0; i < v5; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) )
        ++i; /*0x4205a1*/
            if ( *((unsigned char *)this + 13) )
      {
        RA2_OPDEL(*(void **)&this->q004); /*0x4205b9*/
                *((unsigned int *)this + 1) = 0;
      }
    }
        *((unsigned int *)this + 1) = v4;
        *((unsigned int *)this + 2) = a2;
        *((unsigned char *)this + 13) = a3 == 0;
  }
  else
  {
        (*(void (**)(void *))(*(unsigned int *)this + 12))(this);
  }
    v7 = *((unsigned int *)this + 2);
    if ( v7 < *((unsigned int *)this + 4) )
        *((unsigned int *)this + 4) = v7;
  return 1; /*0x4205ee*/
}
} // namespace gamemd

// 0x420600
namespace gamemd {
int AITriggerTypeClass_40::FindItem(unsigned int * a2)
{
  int m_10; // edx
  int result; // eax
  unsigned int *i; // ecx

    v2 = *((unsigned int *)this + 16);
  result = 0; /*0x420603*/
  if ( m_10 <= 0 ) /*0x420608*/
    return -1; /*0x42061f*/
    for ( i = (unsigned int *)*((unsigned int *)this + 4); *i != *a2; ++i )
  {
    if ( ++result >= m_10 ) /*0x42061d*/
      return -1; /*0x42061d*/
  }
  return result; /*0x420622*/
}
}
// 0x420630
namespace gamemd {
VectorClass_flat * AITriggerTypeClass_40::QueryInterface(char a2)
{
  void *v3; // eax
v3 = (void *)((unsigned int)(*(void **)&this->q004));
  *(unsigned int *)this->__pad_0 = (void*)&VectorClass_AlphaLightingRemapClass___vftable; /*0x420636*/
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x420648*/
        *(Block + 1) = 0;
  }
  this->IsAllocated = (gamemd::VectorClass_flat *)(0);
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x420668*/
    RA2_OPDEL(); /*0x42066b*/
  return this; /*0x420675*/
}
} // namespace gamemd

// 0x420680
namespace gamemd {
DynamicVector * AITriggerTypeClass_40::Constructor_VectorClass_AlphaLightingRemapClass___(char a2)
{
  void *v3; // eax
v3 = (void *)((unsigned int)(*(void **)&this->q004));
  *(unsigned int *)this->__pad_0 = (void*)&VectorClass_AlphaLightingRemapClass___vftable; /*0x420686*/
    if ( v3 && *((unsigned char *)Block + 13) )
  {
    RA2_OPDEL(v3); /*0x420698*/
        *(Block + 1) = 0;
  }
  this->IsAllocated = (gamemd::DynamicVector *)(0);
    *(Block + 2) = 0;
  if ( (a2 & 1) != 0 ) /*0x4206b8*/
    RA2_OPDEL(); /*0x4206bb*/
  return this; /*0x4206c5*/
}
} // namespace gamemd
