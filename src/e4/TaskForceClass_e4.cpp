// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/TaskForceClass_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Factory_e4.hpp"
#include "e4/classes/Power_e4.hpp"

// 0x4C4EF0
namespace gamemd {
unsigned int * TaskForceClass::ParseUnitCountAndType(char * Buffer)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  int ExitCellByName; // eax
  int Index; // eax

  const char * v9 = Buffer; /*0x4c4f09*/
  *this = 0; /*0x4c4f0a*/
  this->vtable2 = 0; /*0x4c4f10*/
  _BYTE v10[64]; // [esp+4h] [ebp-40h] BYREF
  sscanf(v9, DataGlobal_82085C, &Buffer, v10); /*0x4c4f17*/
  *this = Buffer; /*0x4c4f27*/
  ExitCellByName = Factory::FindExitCellByName(v10); /*0x4c4f29*/
  if ( ExitCellByName == -1 ) /*0x4c4f31*/
  {
    Index = BuildingTypeClass::FindIndex(v10); /*0x4c4f4c*/
    if ( Index == -1 ) /*0x4c4f54*/
    {
      int v8 = TypeClass::FindByName(v10); /*0x4c4f6f*/
      if ( v8 != -1 ) /*0x4c4f77*/
        this->vtable2 = *((_DWORD *)g_AircraftTypeCount + v8); /*0x4c4f82*/
      return this; /*0x4c4f85*/
    }
    else
    {
      int v7 = *((_DWORD *)g_UnitTypeCount2 + Index); /*0x4c4f5c*/
      this->vtable2 = v7; /*0x4c4f61*/
      return this; /*0x4c4f5f*/
    }
  }
  else
  {
    int v4 = *((_DWORD *)Factory_ExitCellTable + ExitCellByName); /*0x4c4f39*/
    this->vtable2 = v4; /*0x4c4f3e*/
    return this; /*0x4c4f3c*/
  }
}
}
} // namespace gamemd

// 0x6E7E80
namespace gamemd {
unsigned int * TaskForceClass::Construct(ObjectClass * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  TaskForceClass *v3; // eax
  ObjectTypeClass *v4; // eax
  AbstractTypeClass::Constructor((int)this, (AbstractClass *)aP1); /*0x6e7e8a*/
  this->q098 = -1; /*0x6e7e8f*/
  this->q09C = 0; /*0x6e7e99*/
  this->q0A0 = 0; /*0x6e7ea3*/
  *this = &TaskForceClass::`vftable'; /*0x6e7ead*/
  this->vtable2 = &TaskForceClass::`vftable'; /*0x6e7eb3*/
  this->vtable3 = &TaskForceClass::`vftable'; /*0x6e7eba*/
  this->vtable4 = &vt_TaskForceClass; /*0x6e7ec1*/
  if ( *(int *)&HouseClass_Player[43924] < *(int *)&HouseClass_Player[43916] /*0x6e7f05*/
    || (HouseClass_Player[43921] || !*(_DWORD *)&HouseClass_Player[43916])
    && *(int *)&HouseClass_Player[43928] > 0
    && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&HouseClass_Player[43908] + 8))(
         &HouseClass_Player[43908],
         *(_DWORD *)&HouseClass_Player[43916] + *(_DWORD *)&HouseClass_Player[43928],
         0) )
  {
    v3 = (TaskForceClass *)(*(_DWORD *)&HouseClass_Player[43924])++; /*0x6e7f12*/
    *(_DWORD *)(*(_DWORD *)&HouseClass_Player[43912] + 4 * (_DWORD)v3) = this; /*0x6e7f21*/
  }
  v4 = (ObjectTypeClass *)(this + 41); /*0x6e7f28*/
  int v5 = 6; /*0x6e7f2a*/
  do /*0x6e7f38*/
  {
    *(_DWORD *)v4->__pad_0 = 0; /*0x6e7f2f*/
    *(_DWORD *)&v4->__pad_0[4] = 0; /*0x6e7f31*/
    v4 = (ObjectTypeClass *)((char *)v4 + 8); /*0x6e7f34*/
    --v5; /*0x6e7f37*/
  }
  while ( v5 ); /*0x6e7f38*/
  return this; /*0x6e7f3c*/
}
}
} // namespace gamemd

// 0x6E8220
namespace gamemd {
AbstractClass * * TaskForceClass::LoadFromINI(char * a1, int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  CCINIClass *result; // eax
  CCINIClass *v5; // esi
  CCINIClass *v6; // ebx
  unsigned __int8 *StringByIndex; // eax
  TaskForceClass *v10; // esi
  CCINIClass *v12; // [esp+10h] [ebp-1Ch]
  char Source[24]; // [esp+14h] [ebp-18h] BYREF

  result = (CCINIClass *)INIClass::GetKeyCount(a1, (INIClass *)&stru_830620[75672]); /*0x6e8230*/
  v5 = result; /*0x6e8235*/
  v6 = 0; /*0x6e8237*/
  v12 = result; /*0x6e823b*/
  if ( (int)result > 0 ) /*0x6e823f*/
  {
    while ( 1 ) /*0x6e824d*/
    {
      StringByIndex = (unsigned __int8 *)INIClass::GetStringByIndex( /*0x6e824d*/
                                           a1,
                                           (CCINIClass *)&stru_830620[75672],
                                           v6);
      result = (CCINIClass *)INIClass::GetString( /*0x6e8266*/
                               (unsigned __int8 ***)a1,
                               (INIClass *)&stru_830620[75672],
                               StringByIndex,
                               (INIClass *)&DataGlobal_87F8E4[42624],
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
    int v8 = 0; /*0x6e82a4*/
    if ( *(int *)&g_NetworkPlayerBuffer[4772] > 0 ) /*0x6e82a8*/
    {
      while ( _strcmpi((char *)(*(_DWORD *)(*(_DWORD *)&g_NetworkPlayerBuffer[4760] + 4 * v8) + 36), Source) ) /*0x6e82c6*/
      {
        if ( ++v8 >= *(int *)&g_NetworkPlayerBuffer[4772] ) /*0x6e82d0*/
          goto LABEL_8; /*0x6e82d0*/
      }
      v10 = *(TaskForceClass **)(*(_DWORD *)&g_NetworkPlayerBuffer[4760] + 4 * v8); /*0x6e82f9*/
      goto LABEL_12; /*0x6e82fc*/
    }
LABEL_8:
    _DWORD * v9 = (_DWORD *)__2_YAPAXI_Z(0xD4u); /*0x6e82d7*/
    if ( v9 ) /*0x6e82e1*/
      v10 = (TaskForceClass *)TaskForceClass::Construct(v9, Source); /*0x6e82ef*/
    else
LABEL_11:
      v10 = 0; /*0x6e82fe*/
LABEL_12:
    int v11 = sub_412610(Source); /*0x6e8300*/
    SwizzleManagerClass::Here_I_Am((int)&g_OverlayTypeConfig[18712], v11, (int)v10); /*0x6e8310*/
    result = (CCINIClass *)(*(int (__thiscall **)(TaskForceClass *, char *))(*(_DWORD *)v10->__pad_0 + 100))(v10, a1); /*0x6e831a*/
    *(_DWORD *)v10->__pad_A0 = a2; /*0x6e831d*/
    v5 = v12; /*0x6e8323*/
    goto LABEL_13; /*0x6e8323*/
  }
  return result; /*0x6e8330*/
}
}
} // namespace gamemd

// 0x6E87F0
namespace gamemd {
void * TaskForceClass::ExecuteAction(char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  void **v5; // [esp+4h] [ebp-4h] BYREF

  *this = &TaskForceClass::`vftable'; /*0x6e87f6*/
  this->vtable2 = &TaskForceClass::`vftable'; /*0x6e87fc*/
  this->vtable3 = &TaskForceClass::`vftable'; /*0x6e8803*/
  this->vtable4 = &vt_TaskForceClass; /*0x6e880a*/
  AbstractClass::AnnounceExpiredPointer(this, 1); /*0x6e8811*/
  v5 = this; /*0x6e8826*/
  int v3 = (*(int (__thiscall **)(int *, void ***))(DataGlobal_A8E8D0 + 16))(&DataGlobal_A8E8D0, &v5); /*0x6e882a*/
  if ( v3 != -1 && v3 < g_MultiplayerLogFlags && v3 < --g_MultiplayerLogFlags ) /*0x6e8845*/
  {
    do /*0x6e885d*/
    {
      ++v3; /*0x6e884d*/
      *((_DWORD *)g_MultiplayerLogEntry + v3 - 1) = *((_DWORD *)g_MultiplayerLogEntry + v3); /*0x6e8851*/
    }
    while ( v3 < g_MultiplayerLogFlags ); /*0x6e885d*/
  }
  AbstractTypeClass::Dtor(this); /*0x6e8861*/
  if ( (a2 & 1) != 0 ) /*0x6e886b*/
    __3_YAXPAX_Z(this); /*0x6e886e*/
  return (TaskForceClass *)this; /*0x6e8878*/
}
}
} // namespace gamemd

// 0x4C4F90
namespace gamemd {
ObjectClass * TaskForceClass::Check()
{
{
    sprintf((char *const)&DataGlobal_89E138.field_5668, (ObjectClass *)&DataGlobal_82083C.CampaignScore_field_0x20, (INIClass *)*(void**)this);
    return (ObjectClass *)&DataGlobal_89E138.field_5668;
}
}
} // namespace gamemd

// 0x6E8420
namespace gamemd {
char TaskForceClass::GetUnitCount(unsigned char *** aP1)
{
{
    INIClass *v3;
    int *v4;
    INIClass *v5;
    INIClass *v6;
    int v8;
    char Buffer[32];
    INIClass Destination[2];
    INIClass::ResetSection(aP1);
    if ( !AbstractTypeClass::LoadFromINI(this, (AbstractTypeClass *)aP1) )
    return 0;
    v3 = 0;
    this->TaskForceClass_field_0x9C = 0;
    do
  {
    sprintf(Buffer, g_Str_Trace__d, v3);
    if ( (int)INIClass::GetString( aP1, (INIClass *)(this + 36), (unsigned char *)Buffer, (INIClass *)&DataGlobal_87F8E4[42624], Destination, 128) > 0 )
    {
    v4 = TaskForceClass::ParseUnitCountAndType(&v8, Destination[0].__pad_0);
    v5 = *(INIClass **)(this + 156);
    *(int *)(this + 8 * (int)v5 + 164) = *v4;
    *(int *)(this + 8 * (int)v5 + 168) = v4[1];
    v6 = *(INIClass **)(this + 156);
    if ( *(int *)(this + 8 * (int)v6 + 168) )
    this->TaskForceClass_field_0x9C = &v6->__pad_0[1];
    }
    v3 = (INIClass *)((char *)(v3) + 1);
  }
    while ( (int)v3 < 6 );
    this->TaskForceClass_field_0x98 = INIClass::ReadInt_Overwrite( (int)aP1, (unsigned char *)(this + 36), (CCINIClass *)&DataGlobal_830620[75684], *(INIClass **)(this + 152));
    return 1;
}
}
} // namespace gamemd

// 0x6E8510
namespace gamemd {
char TaskForceClass::GetUnitType(char * a2)
{
{
    int v3;
    int *v4;
    char *v5;
    char Buffer[32];
    if ( !AbstractTypeClass::WriteINI((char *)this, a2) )
    return 0;
    v3 = 0;
    v4 = (int *)(this + 164);
    do
  {
    sprintf(Buffer, g_Str_Trace__d, v3);
    if ( v3 >= this->TaskForceClass_field_0x9C )
    {
    INIClass::ClearSection((int)a2, this + 36, (unsigned char *)Buffer);
    }
    else
    {
    v5 = TaskForceClass::Check(v4);
    INIClass::SetString(a2, (unsigned char *)(this + 36), Buffer, v5);
    }
    ++v3;
    v4 += 2;
  }
    while ( v3 < 6 );
    INIClass::SetInt(a2, (unsigned char *)(this + 36), g_INI_Key_Group, this->TaskForceClass_field_0x98, 0);
    return 1;
}
}
} // namespace gamemd

// 0x6E8680
namespace gamemd {
int TaskForceClass::SaveTaskForce(TechnoTypeClass * aP0, int * a1, int aP2)
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

// 0x6E86A0
namespace gamemd {
int TaskForceClass::LoadTaskForce(AbstractTypeClass * aP0, int aP1)
{
{
    int result;
    MouseClass *v3;
    int v4;
    result = AbstractClass::SaveLoad_Prefix_0((AbstractClass *)aP0, (AbstractClass *)aP1);
    if ( result >= 0 )
  {
    if ( aP0 )
    {
    AbstractTypeClass::Init((int)aP0, (AbstractTypeClass *)&aP1);
    *(int *)aP0->__pad_0 = (unsigned int)vt_TaskForceClass;
    *(int *)&aP0->__pad_0[4] = (unsigned int)vt_TaskForceClass;
    *(int *)&aP0->__pad_0[8] = (unsigned int)vt_TaskForceClass;
    *(int *)&aP0->__pad_0[12] = &vt_TaskForceClass;
    }
    v3 = (MouseClass *)&aP0[1].uniqueId;
    v4 = 6;
    do
    {
    ObjectPtr::RegisterForTracking((SwizzleManagerClass *)&DataGlobal_B05488[27784], v3);
    v3 = (MouseClass *)((char *)(v3) + 8);
    --v4;
    }
    while ( v4 );
    return 0;
  }
    return result;
}
}
} // namespace gamemd

// 0x6E8710
namespace gamemd {
int TaskForceClass::ddtor(int a1, unsigned int * a2)
{
  if ( !a2 )
    return -2147467261;
  *a2 = 1641952286;
  a2[1] = 298977140;
  a2[2] = 1610655148;
  a2[3] = -1252326136;
  return 0;
}
} // namespace gamemd

// 0x6E8750
namespace gamemd {
int TaskForceClass::LoadTask(int * a2)
{
{
    AbstractTypeClass::ProcessPower((char *)this, a2);
    Power::TimerProcess(this->TaskForceClass_field_0x98);
    return Power::TimerProcess(this->TaskForceClass_field_0x9C);
}
}
} // namespace gamemd

// 0x6E87D0
namespace gamemd {
int TaskForceClass::StubReturn33()
{
return 33;
}
} // namespace gamemd

// 0x6E87E0
namespace gamemd {
int TaskForceClass::StubReturn212()
{
return 212;
}
} // namespace gamemd
