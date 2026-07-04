#include "taskforceclass.hpp"

uint32_t * TaskForceClass::ParseUnitCountAndType(uint32_t *this, char *Buffer)
{
    int ExitCellByName; // eax
    int v4; // edx
    int Index; // eax
    int v7; // edx
    int v8; // eax
    const char *v9; // [esp-10h] [ebp-54h]
    uint8_t v10[64]; // [esp+4h] [ebp-40h] BYREF
    v9 = Buffer;
    *this = 0;
    *(this + 1) = 0;
    sscanf(v9, "%d,%s", &Buffer, v10);
    *this = Buffer;
    ExitCellByName = Factory::FindExitCellByName(v10);
    if ( ExitCellByName == -1 )
    Index = BuildingTypeClass::FindIndex(v10);
    if ( Index == -1 )
    v8 = TypeClass::FindByName(v10);
    if ( v8 != -1 )
    *(this + 1) = *((uint32_t *)g_AircraftTypeCount + v8);
    return this;
    else
    v7 = *((uint32_t *)g_UnitTypeCount2 + Index);
    *(this + 1) = v7;
    return this;
    else
    v4 = *((uint32_t *)Factory_ExitCellTable + ExitCellByName);
    *(this + 1) = v4;
    return this;
}

char  TaskForceClass::_vt25(int this, unsigned __int8 ***a2)
{
    int v3; // edi
    uint32_t *v4; // eax
    int v5; // ecx
    int v6; // eax
    int v8; // [esp+8h] [ebp-A8h] BYREF
    char Buffer[32]; // [esp+10h] [ebp-A0h] BYREF
    char Destination[128]; // [esp+30h] [ebp-80h] BYREF
    INIClass::ResetSection(a2);
    if ( !AbstractTypeClass::LoadFromINI(this, a2) )
    return 0;
    v3 = 0;
    *(uint32_t *)(this + 156) = 0;
    do
    sprintf(Buffer, "%d", v3);
    if ( (int)INIClass::GetString(
    a2,
    (unsigned __int8 *)(this + 36),
    (unsigned __int8 *)Buffer,
    &g_INI_DefaultBuffer,
    Destination,
    128) > 0 )
    v4 = TaskForceClass::ParseUnitCountAndType(&v8, Destination);
    v5 = *(uint32_t *)(this + 156);
    *(uint32_t *)(this + 8 * v5 + 164) = *v4;
    *(uint32_t *)(this + 8 * v5 + 168) = v4[1];
    v6 = *(uint32_t *)(this + 156);
    if ( *(uint32_t *)(this + 8 * v6 + 168) )
    *(uint32_t *)(this + 156) = v6 + 1;
    ++v3;
    while ( v3 < 6 );
    *(uint32_t *)(this + 152) = INIClass::ReadInt_Overwrite(
    (int)a2,
    (unsigned __int8 *)(this + 36),
    (unsigned __int8 *)g_INI_Key_Group,
    *(uint32_t *)(this + 152));
    return 1;
}

char  TaskForceClass::_vt26(int this, char *a2)
{
    int v3; // esi
    uint32_t *v4; // ebx
    char *v5; // eax
    char Buffer[32]; // [esp+8h] [ebp-20h] BYREF
    if ( !AbstractTypeClass::WriteINI((char *)this, a2) )
    return 0;
    v3 = 0;
    v4 = (uint32_t *)(this + 164);
    do
    sprintf(Buffer, "%d", v3);
    if ( v3 >= *(uint32_t *)(this + 156) )
    INIClass::ClearSection((int)a2, this + 36, (unsigned __int8 *)Buffer);
    else
    v5 = TaskForceClass::Check(v4);
    INIClass::SetString(a2, (unsigned __int8 *)(this + 36), Buffer, v5);
    ++v3;
    v4 += 2;
    while ( v3 < 6 );
    INIClass::SetInt(a2, (unsigned __int8 *)(this + 36), g_INI_Key_Group, *(uint32_t *)(this + 152), 0);
    return 1;
}

int __stdcall TaskForceClass::_vt06(int *a1, int *a2, int a3)
{
    int result; // eax
    result = AbstractClass::SaveLoad_Prefix(a1, a2, a3);
    if ( result >= 0 )
    return 0;
    return result;
}

int __stdcall TaskForceClass::_vt05(uint32_t *a1, int a2)
{
    int result; // eax
    int *v3; // esi
    int v4; // edi
    result = AbstractClass::SaveLoad_Prefix_0(a1, a2);
    if ( result >= 0 )
    if ( a1 )
    AbstractTypeClass::Init((int)a1, (int)&a2);
    *a1 = &TaskForceClass::`vftable';
    a1[1] = &TaskForceClass::`vftable';
    a1[2] = &TaskForceClass::`vftable';
    a1[3] = &TaskForceClass::`vftable';
    v3 = a1 + 42;
    v4 = 6;
    do
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, v3);
    v3 += 2;
    --v4;
    while ( v4 );
    return 0;
    return result;
}

int __stdcall TaskForceClass::_vt03(int a1, uint32_t *a2)
{
    if ( !a2 )
    return -2147467261;
    *a2 = 1641952286;
    a2[1] = 298977140;
    a2[2] = 1610655148;
    a2[3] = -1252326136;
    return 0;
}

int  TaskForceClass::_vt13(int this, int *a2)
{
    AbstractTypeClass::ProcessPower((char *)this, a2);
    Power::TimerProcess(*(uint32_t *)(this + 152));
    return Power::TimerProcess(*(uint32_t *)(this + 156));
}

int TaskForceClass::_vt11()
{
    return 33;
}

int TaskForceClass::_vt12()
{
    return 212;
}

void ** TaskForceClass::_vt08(void **Block, char a2)
{
    int v3; // eax
    void **v5; // [esp+4h] [ebp-4h] BYREF
    *Block = &TaskForceClass::`vftable';
    *(Block + 1) = &TaskForceClass::`vftable';
    *(Block + 2) = &TaskForceClass::`vftable';
    *(Block + 3) = &TaskForceClass::`vftable';
    AbstractClass::AnnounceExpiredPointer(Block, 1);
    v5 = Block;
    v3 = (*(int (__thiscall **)(int *, void ***))(dword_A8E8D0 + 16))(&dword_A8E8D0, &v5);
    if ( v3 != -1 && v3 < g_MultiplayerLogFlags && v3 < --g_MultiplayerLogFlags )
    do
    ++v3;
    *((uint32_t *)g_MultiplayerLogEntry + v3 - 1) = *((uint32_t *)g_MultiplayerLogEntry + v3);
    while ( v3 < g_MultiplayerLogFlags );
    AbstractTypeClass::Dtor(Block);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

