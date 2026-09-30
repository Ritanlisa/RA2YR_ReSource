// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/TaskForceClass_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Factory_e4.hpp"
#include "e4/classes/Power_e4.hpp"
#include "e4/classes/AbstractTypeClass_e4.hpp"
#include "e4/classes/BuildingTypeClass_e4.hpp"
#include "e4/classes/INIClass_e4.hpp"
#include "e4/classes/SwizzleManagerClass_e4.hpp"
#include "e4/classes/TagTypeClass_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/Tactical_e4.hpp"
#include "e4/classes/TagClass_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/TriggerTypeClass_e4.hpp"
#include "e4/classes/Team_e4.hpp"
#include "e4/classes/ScenarioClass_e4.hpp"
#include "e4/classes/MouseClass_e4.hpp"
#include "e4/classes/TechnoTypeClass_e4.hpp"
#include "e4/classes/TauntCommandClass_e4.hpp"
#include "e4/classes/String_e4.hpp"

// 0x4C4EF0
namespace gamemd {
unsigned int * TaskForceClass::ParseUnitCountAndType(char * Buffer)
{

  int ExitCellByName; // eax
  int v4; // edx
  int Index; // eax
  int v7; // edx
  int v8; // eax
  const char *v9; // [esp-10h] [ebp-54h]
  unsigned char v10[64]; // [esp+4h] [ebp-40h] BYREF

  v9 = Buffer; /*0x4c4f09*/
  *(unsigned int *)this = 0; /*0x4c4f0a*/
  *((unsigned int *)this + 1) = 0; /*0x4c4f10*/
  sscanf(v9, MEMORY[0x82085C], &Buffer, v10); /*0x4c4f17*/
  *this = Buffer; /*0x4c4f27*/
  ExitCellByName = Factory::FindExitCellByName(v10); /*0x4c4f29*/
  if ( ExitCellByName == -1 ) /*0x4c4f31*/
  {
    Index = ((BuildingTypeClass *)(v10))->FindIndex(); /*0x4c4f4c*/
    if ( Index == -1 ) /*0x4c4f54*/
    {
      v8 = (unsigned int *)(TypeClass::FindByName(v10));
      if ( v8 != -1 ) /*0x4c4f77*/
        *((unsigned int *)this + 1) = *((unsigned int *)MEMORY[0xA8B21C] + v8); /*0x4c4f82*/
      return this; /*0x4c4f85*/
    }
    else
    {
      v7 = *((unsigned int *)g_UnitTypeCount2 + Index); /*0x4c4f5c*/
      *((unsigned int *)this + 1) = v7; /*0x4c4f61*/
      return this; /*0x4c4f5f*/
    }
  }
  else
  {
    v4 = *((unsigned int *)MEMORY[0xA8E34C] + ExitCellByName); /*0x4c4f39*/
    *((unsigned int *)this + 1) = v4; /*0x4c4f3e*/
    return this; /*0x4c4f3c*/
  }

}
}
// 0x6E7E80
namespace gamemd {
int TaskForceClass::Construct(ObjectClass * aP1)
{

  TaskForceClass *v3; // eax
  ObjectTypeClass *v4; // eax
  int v5; // ecx

  AbstractTypeClass::Constructor((int)this, (AbstractClass *)aP1); /*0x6e7e8a*/
  *((unsigned int *)this + 38) = -1; /*0x6e7e8f*/
  *((unsigned int *)this + 39) = 0; /*0x6e7e99*/
  *((unsigned int *)this + 40) = 0; /*0x6e7ea3*/
  *this = &vt_TaskForceClass; /*0x6e7ead*/
  *((unsigned int *)this + 1) = &vt_TaskForceClass; /*0x6e7eb3*/
  *((unsigned int *)this + 2) = &vt_TaskForceClass; /*0x6e7eba*/
  *((unsigned int *)this + 3) = &vt_TaskForceClass; /*0x6e7ec1*/
  if ( *(int *)&HouseClass_Player.__pad_5568[22060] < *(int *)&HouseClass_Player.__pad_5568[22052] /*0x6e7f05*/
    || (HouseClass_Player.__pad_5568[22057] || !*(unsigned int *)&HouseClass_Player.__pad_5568[22052])
    && *(int *)&HouseClass_Player.__pad_5568[22064] > 0
    && (*(uint8_t (**)(char *, int, unsigned int))(*(unsigned int *)&HouseClass_Player.__pad_5568[22044] + 8))(
         &HouseClass_Player.__pad_5568[22044],
         *(unsigned int *)&HouseClass_Player.__pad_5568[22052] + *(unsigned int *)&HouseClass_Player.__pad_5568[22064],
         0) )
  {
    v3 = (TaskForceClass *)(*(unsigned int *)&HouseClass_Player.__pad_5568[22060])++; /*0x6e7f12*/
    *(unsigned int *)(*(unsigned int *)&HouseClass_Player.__pad_5568[22048] + 4 * (unsigned int)v3) = this; /*0x6e7f21*/
  }
  v4 = (ObjectTypeClass *)((unsigned int *)this + 41); /*0x6e7f28*/
  v5 = 6; /*0x6e7f2a*/
  do /*0x6e7f38*/
  {
    *(unsigned int *)v4->__pad_0 = 0; /*0x6e7f2f*/
    *(unsigned int *)&v4-((unsigned int *)(>__pad_0))[4] = 0; /*0x6e7f31*/
    v4 = (ObjectTypeClass *)((char *)v4 + 8); /*0x6e7f34*/
    --v5; /*0x6e7f37*/
  }
  while ( v5 ); /*0x6e7f38*/
  return this; /*0x6e7f3c*/

}
}
// 0x6E8220
namespace gamemd {
AbstractClass * * TaskForceClass::LoadFromINI(char * a1, int a2)
{

  CCINIClass *result; // eax
  CCINIClass *v5; // esi
  CCINIClass *v6; // ebx
  uint8_t *StringByIndex; // eax
  int v8; // esi
  unsigned int *v9; // eax
  TaskForceClass *v10; // esi
  int v11; // eax
  CCINIClass *v12; // [esp+10h] [ebp-1Ch]
  char Source[24]; // [esp+14h] [ebp-18h] BYREF

  result = (CCINIClass *)((INIClass *)(a1))->GetKeyCount((INIClass *)&stru_830620.__pad_579C[53244]); /*0x6e8230*/
  v5 = result; /*0x6e8235*/
  v6 = 0; /*0x6e8237*/
  v12 = result; /*0x6e823b*/
  if ( (int)result > 0 ) /*0x6e823f*/
  {
    while ( 1 ) /*0x6e824d*/
    {
      StringByIndex = (uint8_t *)INIClass::GetStringByIndex( /*0x6e824d*/
                                           a1,
                                           (CCINIClass *)&stru_830620.__pad_579C[53244],
                                           v6);
      result = (CCINIClass *)INIClass::GetString( /*0x6e8266*/
                               (uint8_t ***)a1,
                               (INIClass *)&stru_830620.__pad_579C[53244],
                               StringByIndex,
                               (INIClass *)&g_abs_87F8E4,
                               (INIClass *)Source,
                               24);
      if ( (int)result > 0 ) /*0x6e826d*/
        break; /*0x6e826d*/
LABEL_13:
      v6 = (CCINIClass *)((char *)v6 + 1); /*0x6e8327*/
      if ( (int)v6 >= (int)v5 ) /*0x6e832a*/
        return result; /*0x6e832a*/
    }
    if ( !_strcmpi((char *)&stru_817460.sectionHead[1], Source) || !_strcmpi(g_Str_none, Source) ) /*0x6e8293*/
      goto LABEL_11; /*0x6e8293*/
    v8 = 0; /*0x6e82a4*/
    if ( *(int *)&g_abs_A8D63C > 0 ) /*0x6e82a8*/
    {
      while ( _strcmpi((char *)(*(unsigned int *)(*(unsigned int *)&g_abs_A8D63C + 4 * v8) + 36), Source) ) /*0x6e82c6*/
      {
        if ( ++v8 >= *(int *)&g_abs_A8D63C ) /*0x6e82d0*/
          goto LABEL_8; /*0x6e82d0*/
      }
      v10 = *(TaskForceClass **)(*(unsigned int *)&g_abs_A8D63C + 4 * v8); /*0x6e82f9*/
      goto LABEL_12; /*0x6e82fc*/
    }
LABEL_8:
    v9 = (unsigned int *)RA2_OPNEW(0xD4u); /*0x6e82d7*/
    if ( v9 ) /*0x6e82e1*/
      v10 = (TaskForceClass *)TaskForceClass::Construct(v9, Source); /*0x6e82ef*/
    else
LABEL_11:
      v10 = 0; /*0x6e82fe*/
LABEL_12:
    v11 = sub_412610(Source); /*0x6e8300*/
    SwizzleManagerClass::Here_I_Am((int)&g_abs_B077F8, v11, (int)v10); /*0x6e8310*/
    result = (CCINIClass *)(*(int (**)(TaskForceClass *, char *))(*(unsigned int *)v10->__pad_0 + 100))(v10, a1); /*0x6e831a*/
    *(unsigned int *)v10->__pad_A0 = a2; /*0x6e831d*/
    v5 = v12; /*0x6e8323*/
    goto LABEL_13; /*0x6e8323*/
  }
  return result; /*0x6e8330*/

}
}
// 0x6E87F0
namespace gamemd {
void * TaskForceClass::ExecuteAction(void ** Block, char a2)
{

  int v3; // eax
  void **v5; // [esp+4h] [ebp-4h] BYREF

  *Block = &TaskForceClass::`vftable'; /*0x6e87f6*/
  *(Block + 1) = &TaskForceClass::`vftable'; /*0x6e87fc*/
  *(Block + 2) = &TaskForceClass::`vftable'; /*0x6e8803*/
  *(Block + 3) = &vt_TaskForceClass; /*0x6e880a*/
  AbstractClass::AnnounceExpiredPointer(Block, 1); /*0x6e8811*/
  v5 = Block; /*0x6e8826*/
  v3 = (*(int (**)(int *, void ***))(MEMORY[0xA8E8D0] + 16))(&MEMORY[0xA8E8D0], &v5); /*0x6e882a*/
  if ( v3 != -1 && v3 < MEMORY[0xA8E8E0] && v3 < --MEMORY[0xA8E8E0] ) /*0x6e8845*/
  {
    do /*0x6e885d*/
    {
      ++v3; /*0x6e884d*/
      *((unsigned int *)MEMORY[0xA8E8D4] + v3 - 1) = *((unsigned int *)MEMORY[0xA8E8D4] + v3); /*0x6e8851*/
    }
    while ( v3 < MEMORY[0xA8E8E0] ); /*0x6e885d*/
  }
  AbstractTypeClass::Dtor(Block); /*0x6e8861*/
  if ( (a2 & 1) != 0 ) /*0x6e886b*/
    __3_YAXPAX_Z(Block); /*0x6e886e*/
  return (TaskForceClass *)Block; /*0x6e8878*/

}
}
// 0x4C4F90
namespace gamemd {
int TaskForceClass::Check()
{

  sprintf((char *const)&stru_89E138.field_5668, (ObjectClass *)&stru_82083C.CampaignScore_field_0x20, (INIClass *)*this); /*0x4c4fa4*/
  return (ObjectClass *)&stru_89E138.field_5668; /*0x4c4fb1*/

}
} // namespace gamemd

// 0x6E8420
namespace gamemd {
char TaskForceClass::GetUnitCount(unsigned char *** aP1)
{

  INIClass *v3; // edi
  unsigned int *v4; // eax
  INIClass *v5; // ecx
  INIClass *v6; // eax
  int v8; // [esp+8h] [ebp-A8h] BYREF
  char Buffer[32]; // [esp+10h] [ebp-A0h] BYREF
  INIClass Destination[2]; // [esp+30h] [ebp-80h] BYREF

  INIClass::ResetSection(aP1); /*0x6e8433*/
  if ( !AbstractTypeClass::LoadFromINI(this, (AbstractTypeClass *)aP1) ) /*0x6e843b*/
    return 0; /*0x6e84f7*/
  v3 = 0; /*0x6e844a*/
  *((unsigned int *)this + 39) = 0; /*0x6e844f*/
  do /*0x6e84cb*/
  {
    sprintf(Buffer, g_abs_817F6C, v3); /*0x6e8460*/
    if ( (int)INIClass::GetString( /*0x6e8486*/
                aP1,
                (INIClass *)((char *)this + 36),
                (uint8_t *)Buffer,
                (INIClass *)&g_abs_87F8E4,
                Destination,
                128) > 0 )
    {
      v4 = TaskForceClass::ParseUnitCountAndType(&v8, Destination[0].__pad_0); /*0x6e8491*/
      v5 = *(INIClass **)((char *)this + 156); /*0x6e8496*/
      *(unsigned int *)((char *)this + 8 * (unsigned int)v5 + 164) = *v4; /*0x6e849e*/
      *(unsigned int *)((char *)this + 8 * (unsigned int)v5 + 168) = v4[1]; /*0x6e84a8*/
      v6 = *(INIClass **)((char *)this + 156); /*0x6e84af*/
      if ( *(unsigned int *)((char *)this + 8 * (unsigned int)v6 + 168) ) /*0x6e84b5*/
        *((unsigned int *)this + 39) = &v6-((unsigned int *)(>__pad_0))[1]; /*0x6e84c1*/
    }
    v3 = (INIClass *)((char *)v3 + 1); /*0x6e84c7*/
  }
  while ( (int)v3 < 6 ); /*0x6e84cb*/
  *((unsigned int *)this + 38) = INIClass::ReadInt_Overwrite( /*0x6e84e2*/
                              (int)aP1,
                              (uint8_t *)((char *)this + 36),
                              (CCINIClass *)&stru_830620.__pad_579C[53256],
                              *(INIClass **)((char *)this + 152));
  return 1; /*0x6e84e9*/

}
} // namespace gamemd

// 0x6E8510
namespace gamemd {
char TaskForceClass::GetUnitType(char * a2)
{

  int v3; // esi
  unsigned int *v4; // ebx
  char *v5; // eax
  char Buffer[32]; // [esp+8h] [ebp-20h] BYREF

  if ( !AbstractTypeClass::WriteINI((char *)this, a2) ) /*0x6e851c*/
    return 0; /*0x6e85a5*/
  v3 = 0; /*0x6e8527*/
  v4 = (unsigned int *)((char *)this + 164); /*0x6e8529*/
  do /*0x6e857d*/
  {
    sprintf(Buffer, MEMORY[0x817F6C], v3); /*0x6e853a*/
    if ( v3 >= *((unsigned int *)this + 39) ) /*0x6e854a*/
    {
      INIClass::ClearSection((int)a2, (char *)this + 36, (uint8_t *)Buffer); /*0x6e8571*/
    }
    else
    {
      v5 = (char *)(TaskForceClass::Check(v4));
      INIClass::SetString(a2, (uint8_t *)((char *)this + 36), Buffer, v5); /*0x6e855f*/
    }
    ++v3; /*0x6e8576*/
    v4 += 2; /*0x6e8577*/
  }
  while ( v3 < 6 ); /*0x6e857d*/
  INIClass::SetInt(a2, (uint8_t *)((char *)this + 36), MEMORY[0x842DC4], *((unsigned int *)this + 38), 0); /*0x6e8593*/
  return 1; /*0x6e859a*/

}
} // namespace gamemd

// 0x6E8680
namespace gamemd {
int TaskForceClass::SaveTaskForce(TechnoTypeClass * aP0, int * a1, int aP2)
{

  int result; // eax

  result = ((AbstractClass *)((ObjectTypeClass *)aP0))->SaveLoad_Prefix((ObjectTypeClass *)a1, (ObjectTypeClass *)aP2); /*0x6e868f*/
  if ( result >= 0 ) /*0x6e8696*/
    return 0; /*0x6e8698*/
  return result; /*0x6e869a*/

}
} // namespace gamemd

// 0x6E86A0
namespace gamemd {
int TaskForceClass::LoadTaskForce(AbstractTypeClass * aP0, int aP1)
{

  int result; // eax
  MouseClass *v3; // esi
  int v4; // edi

  result = ((AbstractClass *)((AbstractClass *)aP0))->SaveLoad_Prefix_0((AbstractClass *)aP1); /*0x6e86ab*/
  if ( result >= 0 ) /*0x6e86b2*/
  {
    if ( aP0 ) /*0x6e86b6*/
    {
      AbstractTypeClass::Init((int)aP0, (AbstractTypeClass *)&aP1); /*0x6e86bf*/
      *(unsigned int *)aP0->__pad_0 = &vt_TaskForceClass; /*0x6e86c4*/
      *(unsigned int *)&aP0-((unsigned int *)(>__pad_0))[4] = &vt_TaskForceClass; /*0x6e86ca*/
      *(unsigned int *)&aP0-((unsigned int *)(>__pad_0))[8] = &vt_TaskForceClass; /*0x6e86d1*/
      *(unsigned int *)&aP0-((unsigned int *)(>__pad_0))[12] = &vt_TaskForceClass; /*0x6e86d8*/
    }
    v3 = (MouseClass *)&aP0[1].uniqueId; /*0x6e86e0*/
    v4 = 6; /*0x6e86e6*/
    do /*0x6e86fa*/
    {
      ObjectPtr::RegisterForTracking((SwizzleManagerClass *)&stru_B05488.__pad_579C[5356], v3); /*0x6e86f1*/
      v3 = (MouseClass *)((char *)v3 + 8); /*0x6e86f6*/
      --v4; /*0x6e86f9*/
    }
    while ( v4 ); /*0x6e86fa*/
    return 0; /*0x6e86fc*/
  }
  return result; /*0x6e86ff*/

}
} // namespace gamemd

// 0x6E8710
namespace gamemd {
int TaskForceClass::ddtor(int a1, unsigned int * a2)
{

  if ( !a2 ) /*0x6e8716*/
    return -2147467261; /*0x6e8718*/
  *a2 = 1641952286; /*0x6e8726*/
  a2[1] = 298977140; /*0x6e872e*/
  a2[2] = 1610655148; /*0x6e8737*/
  a2[3] = -1252326136; /*0x6e8740*/
  return 0; /*0x6e871d*/

}
} // namespace gamemd

// 0x6E8750
namespace gamemd {
int TaskForceClass::LoadTask(int * a2)
{

  AbstractTypeClass::ProcessPower((char *)this, a2); /*0x6e8759*/
  Power::TimerProcess(*((unsigned int *)this + 38)); /*0x6e8767*/
  return Power::TimerProcess(*((unsigned int *)this + 39)); /*0x6e877a*/

}
} // namespace gamemd

// 0x6E87D0
namespace gamemd {
int TaskForceClass::StubReturn33()
{

  return 33; /*0x6e87d5*/

}
} // namespace gamemd

// 0x6E87E0
namespace gamemd {
int TaskForceClass::StubReturn212()
{

  return 212; /*0x6e87e5*/

}
} // namespace gamemd
