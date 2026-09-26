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
  _BYTE v10[64]; // [esp+4h] [ebp-40h] BYREF

  v9 = Buffer; /*0x4c4f09*/
  *(_DWORD *)this = 0; /*0x4c4f0a*/
  this->vtable2 = 0; /*0x4c4f10*/
  sscanf(v9, "%d,%s", &Buffer, v10); /*0x4c4f17*/
  *this = Buffer; /*0x4c4f27*/
  ExitCellByName = Factory::FindExitCellByName(v10); /*0x4c4f29*/
  if ( ExitCellByName == -1 ) /*0x4c4f31*/
  {
    Index = BuildingTypeClass::FindIndex(v10); /*0x4c4f4c*/
    if ( Index == -1 ) /*0x4c4f54*/
    {
      v8 = TypeClass::FindByName(v10); /*0x4c4f6f*/
      if ( v8 != -1 ) /*0x4c4f77*/
        this->vtable2 = *((_DWORD *)g_AircraftTypeCount + v8); /*0x4c4f82*/
      return this; /*0x4c4f85*/
    }
    else
    {
      v7 = *((_DWORD *)g_UnitTypeCount2 + Index); /*0x4c4f5c*/
      this->vtable2 = v7; /*0x4c4f61*/
      return this; /*0x4c4f5f*/
    }
  }
  else
  {
    v4 = *((_DWORD *)Factory_ExitCellTable + ExitCellByName); /*0x4c4f39*/
    this->vtable2 = v4; /*0x4c4f3e*/
    return this; /*0x4c4f3c*/
  }
}
}
// 0x6E7E80
namespace gamemd {
unsigned int * TaskForceClass::Construct(ObjectClass * aP1)
{
  TaskForceClass * v3;
  _DWORD *v4; // eax
  int v5; // ecx

  AbstractTypeClass::Constructor(aP1); /*0x6e7e8a*/
  *(&this->vtable48) = -1; /*0x6e7e8f*/
  *(&this->vtable49) = 0; /*0x6e7e99*/
  *(&this->u32_100) = 0; /*0x6e7ea3*/
  *(void **)this = (void*)&TaskForceClass_vftable; /*0x6e7ead*/
  this->vtable2 = (void*)&TaskForceClass_vftable; /*0x6e7eb3*/
  this->vtable3 = (void*)&TaskForceClass_vftable; /*0x6e7eba*/
  this->vtable4 = (void*)&TaskForceClass_vftable; /*0x6e7ec1*/
  if ( g_MultiplayerLogFlags < dword_A8E8D8 /*0x6e7f05*/
    || (byte_A8E8DD || !dword_A8E8D8)
    && dword_A8E8E4 > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_A8E8D0 + 8))(
         &dword_A8E8D0,
         dword_A8E8D8 + dword_A8E8E4,
         0) )
  {
    v3 = g_MultiplayerLogFlags++; /*0x6e7f12*/
    *((_DWORD *)g_MultiplayerLogEntry + v3) = this; /*0x6e7f21*/
  }
  v4 = &this->q0A4; /*0x6e7f28*/
  v5 = 6; /*0x6e7f2a*/
  do /*0x6e7f38*/
  {
    *v4 = 0; /*0x6e7f2f*/
    v4[1] = 0; /*0x6e7f31*/
    v4 += 2; /*0x6e7f34*/
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
  int result; // eax
  int v5; // esi
  int v6; // ebx
  unsigned __int8 *StringByIndex; // eax
  int v8; // esi
  _DWORD *v9; // eax
  _DWORD *v10; // esi
  int v11; // eax
  int v12; // [esp+10h] [ebp-1Ch]
  char Source[24]; // [esp+14h] [ebp-18h] BYREF

  result = INIClass::GetKeyCount(a1, (unsigned __int8 *)g_INI_Key_TaskForces); /*0x6e8230*/
  v5 = result; /*0x6e8235*/
  v6 = 0; /*0x6e8237*/
  v12 = result; /*0x6e823b*/
  if ( result > 0 ) /*0x6e823f*/
  {
    while ( 1 ) /*0x6e824d*/
    {
      StringByIndex = (unsigned __int8 *)INIClass::GetStringByIndex(a1, (unsigned __int8 *)g_INI_Key_TaskForces, v6); /*0x6e824d*/
      result = INIClass::GetString( /*0x6e8266*/
                 (unsigned __int8 ***)a1,
                 (unsigned __int8 *)g_INI_Key_TaskForces,
                 StringByIndex,
                 &g_INI_DefaultBuffer,
                 Source,
                 24);
      if ( result > 0 ) /*0x6e826d*/
        break; /*0x6e826d*/
  LABEL_13:
      if ( ++v6 >= v5 ) /*0x6e832a*/
        return result; /*0x6e832a*/
    }
    if ( !_strcmpi(g_Str__none_, Source) || !_strcmpi(g_Str_none, Source) ) /*0x6e8293*/
      goto LABEL_11; /*0x6e8293*/
    v8 = 0; /*0x6e82a4*/
    if ( g_MultiplayerLogFlags > 0 ) /*0x6e82a8*/
    {
      while ( _strcmpi((const void *)(*((_DWORD *)g_MultiplayerLogEntry + v8) + 36), Source) ) /*0x6e82c6*/
      {
        if ( ++v8 >= g_MultiplayerLogFlags ) /*0x6e82d0*/
          goto LABEL_8; /*0x6e82d0*/
      }
      v10 = (_DWORD *)*((_DWORD *)g_MultiplayerLogEntry + v8); /*0x6e82f9*/
      goto LABEL_12; /*0x6e82fc*/
    }
  LABEL_8:
    v9 = RA2_OPNEW(0xD4u); /*0x6e82d7*/
    if ( v9 ) /*0x6e82e1*/
      v10 = TaskForceClass::Construct(v9, Source); /*0x6e82ef*/
    else
  LABEL_11:
      v10 = 0; /*0x6e82fe*/
  LABEL_12:
    v11 = sub_412610(Source); /*0x6e8300*/
    SwizzleManagerClass::Here_I_Am((int)&SwizzleManagerClass_Instance, v11, (int)v10); /*0x6e8310*/
    result = (*(int (__thiscall **)(_DWORD *, char *))(*v10 + 100))(v10, a1); /*0x6e831a*/
    v10[40] = a2; /*0x6e831d*/
    v5 = v12; /*0x6e8323*/
    goto LABEL_13; /*0x6e8323*/
  }
  return result; /*0x6e8330*/
}
}
// 0x6E87F0
namespace gamemd {
void * TaskForceClass::ExecuteAction(char a2)
{
  int v3; // eax

  *(void **)this = (void*)&TaskForceClass_vftable; /*0x6e87f6*/
  this->vtable2 = (void*)&TaskForceClass_vftable; /*0x6e87fc*/
  this->vtable3 = (void*)&TaskForceClass_vftable; /*0x6e8803*/
  this->vtable4 = (void*)&TaskForceClass_vftable; /*0x6e880a*/
  AbstractClass::AnnounceExpiredPointer(1); /*0x6e8811*/
  v3 = (*(int (__thiscall **)(int *, void ***))(dword_A8E8D0 + 16))(&dword_A8E8D0, &this); /*0x6e882a*/
  if ( v3 != -1 && v3 < g_MultiplayerLogFlags && v3 < --g_MultiplayerLogFlags ) /*0x6e8845*/
  {
    do /*0x6e885d*/
    {
      ++v3; /*0x6e884d*/
      *((_DWORD *)g_MultiplayerLogEntry + v3 - 1) = *((_DWORD *)g_MultiplayerLogEntry + v3); /*0x6e8851*/
    }
    while ( v3 < g_MultiplayerLogFlags ); /*0x6e885d*/
  }
  AbstractTypeClass::Dtor(); /*0x6e8861*/
  if ( (a2 & 1) != 0 ) /*0x6e886b*/
    RA2_OPDEL(); /*0x6e886e*/
  return this; /*0x6e8878*/
}
}
// 0x4C4F90
namespace gamemd {
ObjectClass * TaskForceClass::Check()
{
  sprintf(byte_8A37A0, "%d,%s", *this, (const char *)(this->vtable2 + 36)); /*0x4c4fa4*/
  return byte_8A37A0; /*0x4c4fb1*/
}
} // namespace gamemd

// 0x6E8420
namespace gamemd {
char TaskForceClass::GetUnitCount(unsigned char *** aP1)
{
  int v3; // edi
  _DWORD *v4; // eax
  int v5; // ecx
  int v6; // eax
  int v8; // [esp+8h] [ebp-A8h] BYREF
  char Buffer[32]; // [esp+10h] [ebp-A0h] BYREF
  char Destination[128]; // [esp+30h] [ebp-80h] BYREF

  INIClass::ResetSection(aP1); /*0x6e8433*/
  if ( !AbstractTypeClass::LoadFromINI(this, aP1) ) /*0x6e843b*/
    return 0; /*0x6e84f7*/
  v3 = 0; /*0x6e844a*/
  this->u32_9C = 0; /*0x6e844f*/
  do /*0x6e84cb*/
  {
    sprintf(Buffer, "%d", v3); /*0x6e8460*/
    if ( (int)INIClass::GetString( /*0x6e8486*/
                aP1,
                (unsigned __int8 *)(&this->vtable46),
                (unsigned __int8 *)Buffer,
                &g_INI_DefaultBuffer,
                Destination,
                128) > 0 )
    {
      v4 = TaskForceClass::ParseUnitCountAndType(&v8, Destination); /*0x6e8491*/
      v5 = this->u32_9C; /*0x6e8496*/
      *(_DWORD *)(&this->u32_20 * v5 + 164) = *v4; /*0x6e849e*/
      *(_DWORD *)(&this->u32_20 * v5 + 168) = v4[1]; /*0x6e84a8*/
      v6 = this->u32_9C; /*0x6e84af*/
      if ( *(_DWORD *)(&this->u32_20 * v6 + 168) ) /*0x6e84b5*/
        this->u32_9C = v6 + 1; /*0x6e84c1*/
    }
    ++v3; /*0x6e84c7*/
  }
  while ( v3 < 6 ); /*0x6e84cb*/
  this->ptr_98 = INIClass::ReadInt_Overwrite( /*0x6e84e2*/
                              (int)aP1,
                              (unsigned __int8 *)(&this->vtable46),
                              (unsigned __int8 *)g_INI_Key_Group,
                              this->ptr_98);
  return 1; /*0x6e84e9*/
}
} // namespace gamemd

// 0x6E8510
namespace gamemd {
char TaskForceClass::GetUnitType(char * a2)
{
  int v3; // esi
  _DWORD *v4; // ebx
  char *v5; // eax
  char Buffer[32]; // [esp+8h] [ebp-20h] BYREF

  if ( !AbstractTypeClass::WriteINI((char *)this, a2) ) /*0x6e851c*/
    return 0; /*0x6e85a5*/
  v3 = 0; /*0x6e8527*/
  v4 = (_DWORD *)(&this->u32_404); /*0x6e8529*/
  do /*0x6e857d*/
  {
    sprintf(Buffer, "%d", v3); /*0x6e853a*/
    if ( v3 >= this->u32_9C ) /*0x6e854a*/
    {
      INIClass::ClearSection((int)a2, &this->u32_90, (unsigned __int8 *)Buffer); /*0x6e8571*/
    }
    else
    {
      v5 = TaskForceClass::Check(v4); /*0x6e854e*/
      INIClass::SetString(a2, (unsigned __int8 *)(&this->vtable46), Buffer, v5); /*0x6e855f*/
    }
    ++v3; /*0x6e8576*/
    v4 += 2; /*0x6e8577*/
  }
  while ( v3 < 6 ); /*0x6e857d*/
  INIClass::SetInt(a2, (unsigned __int8 *)(&this->vtable46), g_INI_Key_Group, this->ptr_98, 0); /*0x6e8593*/
  return 1; /*0x6e859a*/
}
} // namespace gamemd

// 0x6E8680
namespace gamemd {
int TaskForceClass::SaveTaskForce(TechnoTypeClass * aP0, int * a1, int aP2)
{
  int result; // eax

  result = AbstractClass::SaveLoad_Prefix(aP0, a1, aP2); /*0x6e868f*/
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
  int *v3; // esi
  int v4; // edi

  result = AbstractClass::SaveLoad_Prefix_0(aP0, aP1); /*0x6e86ab*/
  if ( result >= 0 ) /*0x6e86b2*/
  {
    if ( aP0 ) /*0x6e86b6*/
    {
      AbstractTypeClass::Init((int)aP0, (int)&aP1); /*0x6e86bf*/
      *(void ** *)aP0 = (void*)&TaskForceClass_vftable; /*0x6e86c4*/
      aP0[1] = (void*)&TaskForceClass_vftable; /*0x6e86ca*/
      aP0[2] = (void*)&TaskForceClass_vftable; /*0x6e86d1*/
      aP0[3] = (void*)&TaskForceClass_vftable; /*0x6e86d8*/
    }
    v3 = aP0 + 42; /*0x6e86e0*/
    v4 = 6; /*0x6e86e6*/
    do /*0x6e86fa*/
    {
      ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, v3); /*0x6e86f1*/
      v3 += 2; /*0x6e86f6*/
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
  AbstractTypeClass::ProcessPower(a2); /*0x6e8759*/
  Power::TimerProcess(this->q098); /*0x6e8767*/
  return Power::TimerProcess(this->q09C); /*0x6e877a*/
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
