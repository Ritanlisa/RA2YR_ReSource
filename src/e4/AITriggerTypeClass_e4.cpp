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
  while ( *(unsigned int *)(*(unsigned int *)(*(unsigned int *)&HouseClass_Array->__pad_0[4 * v4] + 52) + 188) != ((HouseTypeClass *)(g_abs_818164))->Find() ) /*0x41eccc*/
  {
    if ( ++v4 >= HouseClass_Count ) /*0x41ecd6*/
      return 0; /*0x41ece2*/
  }
  v6 = *(unsigned int **)&HouseClass_Array->__pad_0[4 * v4]; /*0x41ece5*/
  if ( !v6 ) /*0x41ecea*/
    return v11; /*0x41ee23*/
  v7 = v3[54]; /*0x41ecf0*/
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
  switch ( v3[58] ) /*0x41ed8f*/
  {
    case 0: /*0x41ed8f*/
      result = v10 < v3[57]; /*0x41eda5*/
      break; /*0x41edad*/
    case 1: /*0x41ed8f*/
      result = v10 <= v3[57]; /*0x41edbf*/
      break; /*0x41edc7*/
    case 2: /*0x41ed8f*/
      result = v10 == v3[57]; /*0x41edd9*/
      break; /*0x41ede1*/
    case 3: /*0x41ed8f*/
      result = v10 >= v3[57]; /*0x41edf3*/
      break; /*0x41edfb*/
    case 4: /*0x41ed8f*/
      result = v10 > v3[57]; /*0x41ee0d*/
      break; /*0x41ee15*/
    case 5: /*0x41ed8f*/
      return v10 != v3[57]; /*0x41ee1e*/
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
  DynamicVector ** v9;

  v9 = (gamemd::DynamicVector **)((char)((gamemd::DynamicVector **)(0)));
  if ( !a2 ) /*0x41ee9f*/
    return v9; /*0x41efcb*/
  v4 = *((unsigned int *)this + 54); /*0x41eea6*/
  if ( v4 ) /*0x41eeae*/
  {
    v5 = (*(int (**)(int))(*(unsigned int *)v4 + 64))(v4); /*0x41eec1*/
    v6 = 0; /*0x41eec3*/
    switch ( (*(int (**)(int))(*(unsigned int *)v4 + 44))(v4) ) /*0x41eed8*/
    {
      case 3: /*0x41eed8*/
        v6 = DynamicVector::GetOrGrow(a2 + 5475, v5); /*0x41ef31*/
        goto LABEL_8; /*0x41ef31*/
      case 7: /*0x41eed8*/
        v7 = DynamicVector::GetOrGrow(a2 + 5460, v5); /*0x41eeea*/
        break; /*0x41eef3*/
      case 16: /*0x41eed8*/
        v7 = DynamicVector::GetOrGrow(a2 + 5470, v5); /*0x41ef16*/
        break; /*0x41ef1f*/
      case 40: /*0x41eed8*/
        v7 = DynamicVector::GetOrGrow(a2 + 5465, v5); /*0x41ef00*/
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
  switch ( *((unsigned int *)this + 58) ) /*0x41ef4b*/
  {
    case 0: /*0x41ef4b*/
      result = v7 < *((unsigned int *)this + 57); /*0x41ef60*/
      break; /*0x41ef65*/
    case 1: /*0x41ef4b*/
      result = v7 <= *((unsigned int *)this + 57); /*0x41ef76*/
      break; /*0x41ef7b*/
    case 2: /*0x41ef4b*/
      result = v7 == *((unsigned int *)this + 57); /*0x41ef8c*/
      break; /*0x41ef91*/
    case 3: /*0x41ef4b*/
      result = v7 >= *((unsigned int *)this + 57); /*0x41efa2*/
      break; /*0x41efa7*/
    case 4: /*0x41ef4b*/
      result = v7 > *((unsigned int *)this + 57); /*0x41efb8*/
      break; /*0x41efbd*/
    case 5: /*0x41ef4b*/
      return v7 != *((unsigned int *)this + 57); /*0x41efc6*/
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
  if ( (int)g_abs_A8ED84 - v7 < v8 ) /*0x41f130*/
  {
    v8 -= (int)g_abs_A8ED84 - v7; /*0x41f132*/
LABEL_12:
    v9 = v8; /*0x41f134*/
    return 1.0 - *(float *)&g_abs_8871E0->? >= (double)v9 / (double)Super::GetDefaultTimer((unsigned int *)v6); /*0x41f134*/
  }
  v9 = 0; /*0x41f171*/
  return 1.0 - *(float *)&g_abs_8871E0->? >= (double)v9 / (double)Super::GetDefaultTimer((unsigned int *)v6); /*0x41f167*/

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
  if ( (int)g_abs_A8ED84 - v7 < v8 ) /*0x41f1e0*/
  {
    v8 -= (int)g_abs_A8ED84 - v7; /*0x41f1e2*/
LABEL_12:
    v9 = v8; /*0x41f1e4*/
    return 1.0 - *(float *)&g_abs_8871E0->? >= (double)v9 / (double)Super::GetDefaultTimer((unsigned int *)v6); /*0x41f1e4*/
  }
  v9 = 0; /*0x41f221*/
  return 1.0 - *(float *)&g_abs_8871E0->? >= (double)v9 / (double)Super::GetDefaultTimer((unsigned int *)v6); /*0x41f217*/

}
} // namespace gamemd
// 0x41F230
namespace gamemd {
int AITriggerTypeClass::HouseCredits(int a2, int a3)
{

  char v3; // bl
  int v5; // eax
  bool result; // al

  v3 = 0; /*0x41f235*/
  if ( !a3 ) /*0x41f23c*/
    return v3; /*0x41f2bd*/
  v5 = (*(int (**)(int))(*(unsigned int *)(a3 + 36) + 24))(a3 + 36); /*0x41f245*/
  switch ( *((unsigned int *)this + 58) ) /*0x41f253*/
  {
    case 0: /*0x41f253*/
      result = v5 < *((unsigned int *)this + 57); /*0x41f266*/
      break; /*0x41f269*/
    case 1: /*0x41f253*/
      result = v5 <= *((unsigned int *)this + 57); /*0x41f278*/
      break; /*0x41f27b*/
    case 2: /*0x41f253*/
      result = v5 == *((unsigned int *)this + 57); /*0x41f28a*/
      break; /*0x41f28d*/
    case 3: /*0x41f253*/
      result = v5 >= *((unsigned int *)this + 57); /*0x41f29c*/
      break; /*0x41f29f*/
    case 4: /*0x41f253*/
      result = v5 > *((unsigned int *)this + 57); /*0x41f2ae*/
      break; /*0x41f2b1*/
    case 5: /*0x41f253*/
      return v5 != *((unsigned int *)this + 57); /*0x41f2ba*/
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
  char *v17; // esi
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
  int v34; // eax
  int v35; // esi
  int MaxBuildLevel; // eax
  int v37; // eax
  int v38; // esi
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
          (uint8_t *)((char *)this + 36),
          &g_abs_889F64,
          String,
          512) )
    return 0; /*0x41f5b9*/
  v3 = strtok(String, g_abs_817F70); /*0x41f5d3*/
  if ( !v3 ) /*0x41f5df*/
    return 0; /*0x41f5df*/
  strncpy(Destination, v3, 0x30u); /*0x41f5ed*/
  v46 = 0; /*0x41f5fe*/
  if ( Destination != (char *)((char *)this + 100) ) /*0x41f602*/
  {
    qmemcpy((void *)((char *)this + 100), Destination, 0x30u); /*0x41f60d*/
    *((unsigned char *)this + 148) = v46; /*0x41f60f*/
  }
  v4 = strtok(0, g_abs_817F70); /*0x41f616*/
  if ( !v4 ) /*0x41f620*/
    return 0; /*0x41f620*/
  strncpy(v42, v4, 0x18u); /*0x41f62e*/
  v43 = 0; /*0x41f63a*/
  ((String *)(v42))->Trim(); /*0x41f63e*/
  *((unsigned int *)this + 55) = 0; /*0x41f643*/
  if ( _strcmpi(v42, off_818114) ) /*0x41f655*/
    *((unsigned int *)this + 55) = TeamTypeClass::FindByName(v42); /*0x41f66a*/
  v5 = strtok(0, g_abs_817F70); /*0x41f676*/
  if ( !v5 ) /*0x41f680*/
    return 0; /*0x41f680*/
  strncpy(v42, v5, 0x18u); /*0x41f68e*/
  v43 = 0; /*0x41f69a*/
  ((String *)(v42))->Trim(); /*0x41f69e*/
  *((unsigned int *)this + 40) = 0; /*0x41f6a3*/
  *((unsigned int *)this + 42) = -1; /*0x41f6a9*/
  if ( _strcmpi(v42, off_818118) ) /*0x41f6bf*/
  {
    if ( _strcmpi(v42, off_818114) ) /*0x41f6e2*/
    {
      v6 = SuperWeaponTypeClass::FindByName(v42); /*0x41f6f2*/
      *((unsigned int *)this + 42) = v6; /*0x41f6fa*/
      if ( v6 != -1 ) /*0x41f700*/
        *((unsigned int *)this + 40) = 1; /*0x41f702*/
    }
  }
  else
  {
    *((unsigned int *)this + 40) = 2; /*0x41f6cb*/
  }
  if ( !strtok(0, g_abs_817F70) ) /*0x41f712*/
    return 0; /*0x41f712*/
  *((unsigned int *)this + 44) = 0; /*0x41f728*/
  v7 = strtok(0, g_abs_817F70); /*0x41f72e*/
  if ( !v7 ) /*0x41f738*/
    return 0; /*0x41f738*/
  *((unsigned int *)this + 38) = atoi(v7); /*0x41f74a*/
  v8 = strtok(0, g_abs_817F70); /*0x41f750*/
  if ( !v8 ) /*0x41f75a*/
    return 0; /*0x41f75a*/
  strncpy(v42, v8, 0x18u); /*0x41f768*/
  v43 = 0; /*0x41f774*/
  ((String *)(v42))->Trim(); /*0x41f778*/
  v9 = 0; /*0x41f781*/
  ExitCellByName = Factory::FindExitCellByName(v42); /*0x41f783*/
  if ( ExitCellByName != -1 ) /*0x41f78b*/
  {
    v9 = *((unsigned int *)g_abs_A8E34C + ExitCellByName); /*0x41f793*/
    goto LABEL_26; /*0x41f796*/
  }
  Index = (unsigned int *)(BuildingTypeClass::FindIndex(v42));
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
    v9 = *((unsigned int *)g_abs_A8B21C + v13); /*0x41f7c2*/
    goto LABEL_26; /*0x41f7c5*/
  }
  Index = (unsigned int *)(BuildingTypeClass::FindIndexByName(v42));
  if ( Index != -1 ) /*0x41f7d3*/
  {
    v12 = g_TriggerTypeCount; /*0x41f7d5*/
    goto LABEL_25; /*0x41f7d5*/
  }
LABEL_26:
  *((unsigned int *)this + 54) = v9; /*0x41f7de*/
  v14 = strtok(0, g_abs_817F70); /*0x41f7ea*/
  if ( !v14 ) /*0x41f7f4*/
    return 0; /*0x41faf5*/
  strcpy(v40, "00"); /*0x41f807*/
  v15 = 0; /*0x41f80e*/
  v16 = *v14 == 0; /*0x41f810*/
  v17 = v14; /*0x41f812*/
  IDA_LODWORD(v41) = 0; /*0x41f818*/
  if ( !v16 ) /*0x41f81c*/
  {
    do /*0x41f876*/
    {
      if ( isspace(*v17) ) /*0x41f822*/
      {
        do /*0x41f834*/
          v18 = *++v17; /*0x41f82e*/
        while ( isspace(v18) ); /*0x41f834*/
      }
      v19 = *v17; /*0x41f840*/
      v20 = *++v17; /*0x41f842*/
      v40[0] = v19; /*0x41f848*/
      if ( v20 ) /*0x41f84c*/
      {
        v40[1] = v20; /*0x41f84e*/
        ++v17; /*0x41f852*/
      }
      else
      {
        v40[1] = 0; /*0x41f855*/
      }
      if ( v15 >= 0x20 ) /*0x41f85c*/
        break; /*0x41f85c*/
      *(unsigned char *)(v15 + (char *)this + 228) = globalHelper_0C9DBD(v40, &v41, 16); /*0x41f86f*/
      ++v15; /*0x41f87b*/
    }
    while ( *v17 ); /*0x41f876*/
  }
  v21 = strtok(0, g_abs_817F70); /*0x41f886*/
  if ( v21 ) /*0x41f890*/
  {
    v22 = atof(v21); /*0x41f893*/
    v41 = (unsigned int)Math::RoundToInt(v22); /*0x41f8a0*/
    *(double *)((char *)this + 184) = (double)v41; /*0x41f8ac*/
  }
  v23 = strtok(0, g_abs_817F70); /*0x41f8b8*/
  if ( v23 ) /*0x41f8c2*/
  {
    v24 = atof(v23); /*0x41f8c5*/
    v41 = (unsigned int)Math::RoundToInt(v24); /*0x41f8d2*/
    *(double *)((char *)this + 192) = (double)v41; /*0x41f8de*/
  }
  v25 = strtok(0, g_abs_817F70); /*0x41f8ea*/
  if ( v25 ) /*0x41f8f4*/
  {
    v26 = atof(v25); /*0x41f8f7*/
    v41 = (unsigned int)Math::RoundToInt(v26); /*0x41f904*/
    *(double *)((char *)this + 200) = (double)v41; /*0x41f910*/
  }
  v27 = strtok(0, g_abs_817F70); /*0x41f91c*/
  if ( v27 ) /*0x41f926*/
    *((unsigned char *)this + 208) = atoi(v27) != 0; /*0x41f936*/
  strtok(0, g_abs_817F70); /*0x41f942*/
  v28 = strtok(0, g_abs_817F70); /*0x41f94d*/
  if ( v28 ) /*0x41f957*/
    *((unsigned int *)this + 43) = atoi(v28); /*0x41f962*/
  v29 = strtok(0, g_abs_817F70); /*0x41f96e*/
  if ( v29 ) /*0x41f978*/
    *((unsigned char *)this + 209) = atoi(v29) != 0; /*0x41f988*/
  v30 = strtok(0, g_abs_817F70); /*0x41f994*/
  if ( v30 ) /*0x41f99e*/
  {
    strncpy(v44, v30, 0x18u); /*0x41f9a8*/
    v44[23] = 0; /*0x41f9b4*/
    ((String *)(v44))->Trim(); /*0x41f9b8*/
    *((unsigned int *)this + 56) = 0; /*0x41f9bd*/
    if ( _strcmpi(v44, off_818114) ) /*0x41f9cf*/
      *((unsigned int *)this + 56) = TeamTypeClass::FindByName(v44); /*0x41f9e4*/
  }
  v31 = strtok(0, g_abs_817F70); /*0x41f9f0*/
  if ( v31 ) /*0x41f9fa*/
    *((unsigned char *)this + 210) = atoi(v31) != 0; /*0x41fa0a*/
  v32 = strtok(0, g_abs_817F70); /*0x41fa16*/
  if ( v32 ) /*0x41fa20*/
    *((unsigned char *)this + 211) = atoi(v32) != 0; /*0x41fa30*/
  v33 = strtok(0, g_abs_817F70); /*0x41fa3c*/
  if ( v33 ) /*0x41fa46*/
    *((unsigned char *)this + 212) = atoi(v33) != 0; /*0x41fa56*/
  v34 = *((unsigned int *)this + 55); /*0x41fa5c*/
  if ( v34 ) /*0x41fa64*/
  {
    v35 = *((unsigned int *)this + 44); /*0x41fa6c*/
    if ( v35 <= HouseClass::GetMaxBuildLevel(*(int **)(v34 + 228)) ) /*0x41fa79*/
      MaxBuildLevel = HouseClass::GetMaxBuildLevel(*(int **)(*((unsigned int *)this + 55) + 228)); /*0x41fa8b*/
    else
      MaxBuildLevel = v35; /*0x41fa7b*/
    *((unsigned int *)this + 44) = MaxBuildLevel; /*0x41fa90*/
  }
  v37 = *((unsigned int *)this + 56); /*0x41fa96*/
  if ( v37 ) /*0x41fa9e*/
  {
    v38 = *((unsigned int *)this + 44); /*0x41faa6*/
    if ( v38 > HouseClass::GetMaxBuildLevel(*(int **)(v37 + 228)) ) /*0x41fab3*/
    {
      *((unsigned int *)this + 44) = v38; /*0x41fab8*/
      return 1; /*0x41fac9*/
    }
    *((unsigned int *)this + 44) = HouseClass::GetMaxBuildLevel(*(int **)(*((unsigned int *)this + 56) + 228)); /*0x41fadd*/
  }
  return (gamemd::ObjectClass **)(1);

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

  v1 = *((unsigned int *)this + 66); /*0x41fd61*/
  v2 = 0.0; /*0x41fd67*/
  if ( v1 > 0 ) /*0x41fd73*/
  {
    v2 = (double)*((int *)this + 66) * ((double)*((int *)this + 65) / (double)*((int *)this + 66) - 0.5); /*0x41fd89*/
    if ( v2 < 0.0 ) /*0x41fd96*/
      v2 = 0.0; /*0x41fd9a*/
  }
  v3 = v2 + *(double *)&g_abs_8871E0->AITriggerSuccessWeightDelta + *(double *)((char *)this + 184); /*0x41fdb1*/
  *(double *)((char *)this + 184) = v3; /*0x41fdb3*/
  if ( v3 < *(double *)((char *)this + 192) ) /*0x41fdc4*/
  {
    *((unsigned int *)this + 46) = *((unsigned int *)this + 48); /*0x41fdcc*/
    *((unsigned int *)this + 47) = *((unsigned int *)this + 49); /*0x41fdd8*/
  }
  if ( *(double *)((char *)this + 184) > *(double *)((char *)this + 200) ) /*0x41fdef*/
  {
    *((unsigned int *)this + 46) = *((unsigned int *)this + 50); /*0x41fdf7*/
    *((unsigned int *)this + 47) = *((unsigned int *)this + 51); /*0x41fe03*/
  }
  result = *((unsigned int *)this + 65) + 1; /*0x41fe0f*/
  *((unsigned int *)this + 65) = result; /*0x41fe11*/
  *((unsigned int *)this + 66) = v1 + 1; /*0x41fe17*/
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
  int16_t v5; // fps
  double v6; // st7
  bool v7; // c0
  char v8; // c2
  bool v9; // c3

  v1 = *((unsigned int *)this + 66); /*0x41fe21*/
  v2 = 0.0; /*0x41fe28*/
  if ( v1 > 0 ) /*0x41fe3a*/
  {
    v2 = (double)v1 /*0x41fe56*/
       * (((double)*((int *)this + 65) / (double)v1 - 0.5)
        * *(double *)&g_abs_8871E0->AITriggerTrackRecordCoefficient);
    if ( v2 > 0.0 ) /*0x41fe63*/
      v2 = 0.0; /*0x41fe67*/
  }
  v3 = v2 + *(double *)&g_abs_8871E0->AITriggerFailureWeightDelta + *(double *)((char *)this + 184); /*0x41fe7a*/
  *(double *)((char *)this + 184) = v3; /*0x41fe7c*/
  if ( v3 < *(double *)((char *)this + 192) ) /*0x41fe8d*/
  {
    *((unsigned int *)this + 46) = *((unsigned int *)this + 48); /*0x41fe95*/
    result = *((unsigned int *)this + 49); /*0x41fe9b*/
    *((unsigned int *)this + 47) = result; /*0x41fea1*/
  }
  v6 = *(double *)((char *)this + 184); /*0x41fea7*/
  v7 = v6 < *(double *)((char *)this + 200); /*0x41fead*/
  v8 = 0; /*0x41fead*/
  v9 = v6 == *(double *)((char *)this + 200); /*0x41fead*/
  IDA_LOWORD(result) = v5; /*0x41feb3*/
  if ( v6 > *(double *)((char *)this + 200) ) /*0x41feb8*/
  {
    *((unsigned int *)this + 46) = *((unsigned int *)this + 50); /*0x41fec0*/
    result = *((unsigned int *)this + 51); /*0x41fec6*/
    *((unsigned int *)this + 47) = result; /*0x41fecc*/
  }
  *((unsigned int *)this + 66) = v1 + 1; /*0x41fed3*/
  return result; /*0x41fed9*/

}
} // namespace gamemd
// 0x41FFF0
namespace gamemd {
AITriggerTypeClass * AITriggerTypeClass::ddtor(unsigned int * Block, char a2)
{

  int v3; // eax
  unsigned int *v5; // [esp+4h] [ebp-4h] BYREF

  *Block = (unsigned int)(&vt_AITriggerTypeClass);
  *(Block + 1) = &vt_AITriggerTypeClass; /*0x420003*/
  *(Block + 2) = &vt_AITriggerTypeClass; /*0x42000a*/
  *(Block + 3) = &vt_AITriggerTypeClass; /*0x420011*/
  v5 = Block; /*0x42001f*/
  v3 = (*(int (**)(int *, unsigned int **))(g_abs_A8B200 + 16))(&g_abs_A8B200, &v5); /*0x420023*/
  if ( v3 != -1 && v3 < (int)((int))((int))(g_abs_A8B210) && v3 < --g_abs_A8B210 ) /*0x42003e*/
  {
    do /*0x420056*/
    {
      ++v3; /*0x420046*/
      *((unsigned int *)g_abs_A8B204 + v3 - 1) = *((unsigned int *)g_abs_A8B204 + v3); /*0x42004a*/
    }
    while ( v3 < (int)((int))((int))(g_abs_A8B210) ); /*0x420056*/
  }
  ((AbstractTypeClass *)(Block))->Dtor(); /*0x42005a*/
  if ( ((unsigned int)(Block)& 1) != 0 ) /*0x420064*/
    OperatorDelete(Block); /*0x420067*/
  return (AITriggerTypeClass *)Block; /*0x420071*/

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
void AITriggerTypeClass_40::ClearBuffer()
{

  void *v2; // eax

  v2 = *(void **)((char *)this + 4); /*0x420376*/
  *((unsigned int *)this + 4) = 0; /*0x420379*/
  if ( v2 && *((unsigned char *)this + 13) ) /*0x420380*/
  {
    RA2_OPDEL(v2); /*0x420386*/
    *((unsigned int *)this + 1) = 0; /*0x42038e*/
  }
  *((unsigned char *)this + 13) = 0; /*0x420391*/
  *((unsigned int *)this + 2) = 0; /*0x420394*/

}
} // namespace gamemd

// 0x4203A0
namespace gamemd {
unsigned int AITriggerTypeClass_40::PointerToIndex(int a2)
{

  if ( *((unsigned char *)this + 12) ) /*0x4203a0*/
    return (unsigned int)(a2 - *((unsigned int *)this + 1)) >> 2; /*0x4203b5*/
  else
    return 0; /*0x4203a7*/

}
} // namespace gamemd

// 0x4203C0
namespace gamemd {
void AITriggerTypeClass_40::Seek(int a2)
{

  return *(unsigned int *)(*(this + 1) + 4 * a2); /*0x4203ca*/

}
} // namespace gamemd

// 0x4203D0
namespace gamemd {
char AITriggerTypeClass_40::AddRef(int a2)
{

  int v2; // esi
  int v3; // edx
  unsigned int *v4; // eax
  int v5; // ecx

  v2 = *((char *)this + 2); /*0x4203d2*/
  if ( v2 == *(unsigned int *)(a2 + 8) ) /*0x4203dd*/
  {
    v3 = 0; /*0x4203df*/
    if ( v2 <= 0 ) /*0x4203e3*/
      return 1; /*0x420403*/
    v4 = (unsigned int *)*((char *)this + 1); /*0x4203e5*/
    v5 = *(unsigned int *)(a2 + 4) - (unsigned int)v4; /*0x4203eb*/
    while ( *v4 == *(unsigned int *)((char *)v4 + v5) ) /*0x4203f4*/
    {
      ++v3; /*0x4203f6*/
      ++v4; /*0x4203f7*/
      if ( v3 >= v2 ) /*0x4203fc*/
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
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x42041c*/
  {
    *((unsigned char *)this + 12) = 0; /*0x420426*/
    if ( a3 ) /*0x42042c*/
      v4 = a3; /*0x420442*/
    else
      v4 = RA2_OPNEW(4 * a2); /*0x42043e*/
    *((unsigned char *)this + 12) = 1; /*0x420446*/
    if ( v4 ) /*0x42044a*/
    {
      if ( *((unsigned int *)this + 1) ) /*0x420455*/
      {
        v6 = *((unsigned int *)this + 2); /*0x42045c*/
        if ( a2 < v6 ) /*0x420461*/
          v6 = a2; /*0x420463*/
        for ( i = 0; i < v6; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) ) /*0x420469*/
          ++i; /*0x42046e*/
        if ( *((unsigned char *)this + 13) ) /*0x42047b*/
        {
          RA2_OPDEL(*((void **)this + 1)); /*0x420486*/
          *((unsigned int *)this + 1) = 0; /*0x42048e*/
        }
      }
      *((unsigned int *)this + 1) = v4; /*0x420497*/
      *((unsigned int *)this + 2) = a2; /*0x42049f*/
      *((unsigned char *)this + 13) = a3 == 0; /*0x4204a2*/
      return 1; /*0x4204a8*/
    }
    else
    {
      return 0; /*0x42044f*/
    }
  }
  else
  {
    (*(void (**)(void *))(*(unsigned int *)this + 12))(this); /*0x4204b2*/
    return 1; /*0x4204b8*/
  }

}
} // namespace gamemd

// 0x4204C0
namespace gamemd {
void AITriggerTypeClass_40::ddtor()
{

  if ( *((unsigned int *)this + 1) && *((unsigned char *)this + 13) ) /*0x4204cd*/
  {
    RA2_OPDEL(*(void **)((char *)this + 4)); /*0x4204d3*/
    *((unsigned int *)this + 1) = 0; /*0x4204db*/
  }
  *((unsigned char *)this + 13) = 0; /*0x4204de*/
  *((unsigned int *)this + 2) = 0; /*0x4204e1*/

}
} // namespace gamemd

// 0x4204F0
namespace gamemd {
int AITriggerTypeClass_40::Read(unsigned int * a2)
{

  int result; // eax
  int v3; // edx
  unsigned int *i; // ecx

  if ( !*((unsigned char *)this + 12) ) /*0x4204f0*/
    return 0; /*0x4204f8*/
  v3 = *((unsigned int *)this + 2); /*0x4204fe*/
  result = 0; /*0x420501*/
  if ( v3 <= 0 ) /*0x420505*/
    return -1; /*0x42051c*/
  for ( i = *(unsigned int **)((char *)this + 4); *i != *a2; ++i ) /*0x42050b*/
  {
    if ( ++result >= v3 ) /*0x42051a*/
      return -1; /*0x42051a*/
  }
  return result; /*0x4204fa*/

}
} // namespace gamemd

// 0x420530
namespace gamemd {
unsigned int AITriggerTypeClass_40::Write(int a2)
{

  if ( *((unsigned char *)this + 12) ) /*0x420530*/
    return (unsigned int)(a2 - *((unsigned int *)this + 1)) >> 2; /*0x420545*/
  else
    return 0; /*0x420537*/

}
} // namespace gamemd

// 0x420550
namespace gamemd {
char AITriggerTypeClass_40::SetCapacity(int a2, unsigned int * a3)
{

  unsigned int *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x42055c*/
  {
    *((unsigned char *)this + 12) = 0; /*0x420562*/
    if ( a3 ) /*0x420568*/
      v4 = a3; /*0x42057e*/
    else
      v4 = RA2_OPNEW(4 * a2); /*0x42057a*/
    *((unsigned char *)this + 12) = 1; /*0x420582*/
    if ( !v4 ) /*0x420586*/
      return 0; /*0x4205fa*/
    if ( *((unsigned int *)this + 1) ) /*0x420588*/
    {
      v5 = *((unsigned int *)this + 2); /*0x42058f*/
      if ( a2 < v5 ) /*0x420594*/
        v5 = a2; /*0x420596*/
      for ( i = 0; i < v5; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) ) /*0x42059c*/
        ++i; /*0x4205a1*/
      if ( *((unsigned char *)this + 13) ) /*0x4205ae*/
      {
        RA2_OPDEL(*((void **)this + 1)); /*0x4205b9*/
        *((unsigned int *)this + 1) = 0; /*0x4205c1*/
      }
    }
    *((unsigned int *)this + 1) = v4; /*0x4205ca*/
    *((unsigned int *)this + 2) = a2; /*0x4205d2*/
    *((unsigned char *)this + 13) = a3 == 0; /*0x4205d5*/
  }
  else
  {
    (*(void (**)(void *))(*(unsigned int *)this + 12))(this); /*0x4205de*/
  }
  v7 = *((unsigned int *)this + 2); /*0x4205e1*/
  if ( v7 < *((unsigned int *)this + 4) ) /*0x4205e9*/
    *((unsigned int *)this + 4) = v7; /*0x4205eb*/
  return 1; /*0x4205ee*/

}
} // namespace gamemd

// 0x420600
namespace gamemd {
int AITriggerTypeClass_40::FindItem(unsigned int * a2)
{

  int v2; // edx
  int result; // eax
  unsigned int *i; // ecx

  v2 = *((char *)this + 4); /*0x420600*/
  result = 0; /*0x420603*/
  if ( v2 <= 0 ) /*0x420608*/
    return -1; /*0x42061f*/
  for ( i = (unsigned int *)*((char *)this + 1); *i != *a2; ++i ) /*0x42060e*/
  {
    if ( ++result >= v2 ) /*0x42061d*/
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

  v3 = (void *)((unsigned int)((void *)*(Block + 1)));
  *Block = (unsigned int)(&vt_VectorClass_AlphaLightingRemapClass);
  if ( v3 && *((unsigned char *)Block + 13) ) /*0x420640*/
  {
    RA2_OPDEL(v3); /*0x420648*/
    *(Block + 1) = 0; /*0x420650*/
  }
  *((unsigned char *)Block + 13) = 0; /*0x42065b*/
  *(Block + 2) = 0; /*0x420661*/
  if ( ((unsigned int)(Block)& 1) != 0 ) /*0x420668*/
    RA2_OPDEL(Block); /*0x42066b*/
  return (VectorClass *)Block; /*0x420675*/

}
} // namespace gamemd

// 0x420680
namespace gamemd {
DynamicVector * AITriggerTypeClass_40::Constructor_VectorClass_AlphaLightingRemapClass___(unsigned int * Block, char a2)
{

  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x420683*/
  *Block = &vt_VectorClass_AlphaLightingRemapClass; /*0x420686*/
  if ( v3 && *((unsigned char *)Block + 13) ) /*0x420690*/
  {
    RA2_OPDEL(v3); /*0x420698*/
    *(Block + 1) = 0; /*0x4206a0*/
  }
  *((unsigned char *)Block + 13) = 0; /*0x4206ab*/
  *(Block + 2) = 0; /*0x4206b1*/
  if ( (Block & 1) != 0 ) /*0x4206b8*/
    RA2_OPDEL(Block); /*0x4206bb*/
  return (DynamicVector *)Block; /*0x4206c5*/

}
} // namespace gamemd
