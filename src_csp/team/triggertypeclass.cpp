#include "triggertypeclass.hpp"

char  TriggerTypeClass::HasLocalSetOrClearedEvent(uint32_t *this, int a2)
{
    uint32_t *v2; // ecx
    char result; // al
    int v4; // edx
    v2 = (uint32_t *)*(this + 43);
    result = 0;
    if ( v2 )
    while ( 1 )
    v4 = v2[11];
    if ( (v4 == 36 || v4 == 37) && v2[13] == a2 )
    break;
    v2 = (uint32_t *)v2[10];
    if ( !v2 )
    return result;
    return 1;
    return result;
}

int  TriggerTypeClass::_vt10(uint32_t *this, int a2, int a3)
{
    int v4; // eax
    uint32_t *i; // esi
    int v6; // eax
    uint32_t *j; // esi
    int result; // eax
    v4 = *(this + 42);
    if ( v4 && v4 == a2 )
    *(this + 42) = *(uint32_t *)(v4 + 168);
    for ( i = (uint32_t *)*(this + 44); i; i = (uint32_t *)i[10] )
    (*(void (__thiscall **)(uint32_t *, int, int))(*i + 40))(i, a2, 1);
    v6 = *(this + 44);
    if ( v6 == a2 )
    *(this + 44) = *(uint32_t *)(v6 + 40);
    for ( j = (uint32_t *)*(this + 43); j; j = (uint32_t *)j[10] )
    (*(void (__thiscall **)(uint32_t *, int, int))(*j + 40))(j, a2, 1);
    result = *(this + 43);
    if ( result == a2 )
    result = *(uint32_t *)(result + 40);
    *(this + 43) = result;
    return result;
}

int  TriggerTypeClass::GetFlags(uint32_t *this)
{
    int v2; // esi
    int i; // edi
    int v4; // eax
    int j; // esi
    int v6; // eax
    int v7; // ecx
    v2 = *(this + 43);
    for ( i = 0; v2; i |= v4 )
    v4 = TriggerTypeClass::GetActionCategoryFlags(*(void **)(v2 + 44));
    v2 = *(uint32_t *)(v2 + 40);
    for ( j = *(this + 44); j; i |= v6 )
    v6 = TriggerTypeClass::Dispatch(*(void **)(j + 44));
    j = *(uint32_t *)(j + 40);
    v7 = *(this + 42);
    if ( v7 )
    return i | TriggerTypeClass::GetFlags(v7);
    else
    return i;
}

char  TriggerTypeClass::_vt25(int this, unsigned __int8 ***a2)
{
    char *v3; // esi
    int v4; // edx
    char *v5; // esi
    int v6; // edi
    uint32_t *v7; // eax
    uint32_t *v8; // eax
    char *v9; // eax
    char *v10; // eax
    char *v11; // eax
    char *v12; // eax
    char *v13; // eax
    char *v14; // eax
    char *v15; // eax
    int v16; // eax
    int v17; // edi
    void *v18; // eax
    int v19; // esi
    char *v20; // eax
    int v21; // eax
    int v22; // edi
    int v23; // ebx
    void *v24; // eax
    int v25; // esi
    char Destination[48]; // [esp+8h] [ebp-234h] BYREF
    char v28; // [esp+38h] [ebp-204h]
    char String[512]; // [esp+3Ch] [ebp-200h] BYREF
    INIClass::ResetSection(a2);
    if ( !INIClass::GetString(
    a2,
    (unsigned __int8 *)aTriggers,
    (unsigned __int8 *)(this + 36),
    &g_INI_DefaultBuffer,
    String,
    512) )
    return 0;
    v3 = strtok(String, Delimiter);
    if ( _strcmpi(v3, g_Str__none_) )
    v4 = *((uint32_t *)g_SuperWeaponTypeCount + SuperWeaponTypeClass::FindByName(v3));
    else
    v4 = *(uint32_t *)g_SuperWeaponTypeCount;
    *(uint32_t *)(this + 164) = v4;
    v5 = strtok(0, Delimiter);
    *(uint32_t *)(this + 168) = 0;
    if ( _strcmpi(v5, g_Str__none_) )
    if ( !_strcmpi(g_Str__none_, v5) || !_strcmpi(g_Str_none, v5) )
    goto LABEL_14;
    v6 = 0;
    if ( g_MultiplayerLogBuffer > 0 )
    while ( _strcmpi((const void *)(*((uint32_t *)dword_8B417C + v6) + 36), v5) )
    if ( ++v6 >= g_MultiplayerLogBuffer )
    goto LABEL_11;
    v8 = (uint32_t *)*((uint32_t *)dword_8B417C + v6);
    goto LABEL_15;
    LABEL_11:
    v7 = __2_YAPAXI_Z(0xB4u);
    if ( v7 )
    v8 = TriggerTypeClass::Construct(v7, v5);
    else
    LABEL_14:
    v8 = 0;
    LABEL_15:
    *(uint32_t *)(this + 168) = v8;
    v9 = strtok(0, Delimiter);
    if ( v9 )
    strncpy(Destination, v9, 0x30u);
    v28 = 0;
    else
    Destination[0] = 0;
    if ( Destination != (char *)(this + 100) )
    qmemcpy((void *)(this + 100), Destination, 0x30u);
    *(uint8_t *)(this + 148) = v28;
    v10 = strtok(0, Delimiter);
    *(uint8_t *)(this + 159) = v10 && !atoi(v10);
    v11 = strtok(0, Delimiter);
    *(uint8_t *)(this + 156) = v11 && atoi(v11);
    v12 = strtok(0, Delimiter);
    *(uint8_t *)(this + 157) = v12 && atoi(v12);
    v13 = strtok(0, Delimiter);
    *(uint8_t *)(this + 158) = v13 && atoi(v13);
    v14 = strtok(0, Delimiter);
    if ( v14 && atoi(v14) )
    *(uint8_t *)(this + 160) = 1;
    if ( INIClass::GetString(
    a2,
    (unsigned __int8 *)aEvents,
    (unsigned __int8 *)(this + 36),
    &g_INI_DefaultBuffer,
    String,
    512) )
    v15 = strtok(String, Delimiter);
    v16 = atoi(v15);
    if ( v16 )
    v17 = v16;
    do
    v18 = __2_YAPAXI_Z(0x58u);
    if ( v18 )
    v19 = TActionClass::TActionClass(v18);
    else
    v19 = 0;
    TriggerTypeClass::ParseActionData(v19);
    --v17;
    *(uint32_t *)(v19 + 40) = *(uint32_t *)(this + 172);
    *(uint32_t *)(this + 172) = v19;
    while ( v17 );
    if ( INIClass::GetString(
    a2,
    (unsigned __int8 *)aActions,
    (unsigned __int8 *)(this + 36),
    &g_INI_DefaultBuffer,
    String,
    512) )
    v20 = strtok(String, Delimiter);
    v21 = atoi(v20);
    v22 = 0;
    *(uint32_t *)(this + 176) = 0;
    if ( v21 )
    v23 = v21;
    do
    v24 = __2_YAPAXI_Z(0x94u);
    if ( v24 )
    v25 = TActionClass::ctor(v24);
    else
    v25 = 0;
    ScriptAction::ParseScriptActionParams(v25);
    if ( *(uint32_t *)(this + 176) )
    *(uint32_t *)(v22 + 40) = v25;
    else
    *(uint32_t *)(this + 176) = v25;
    --v23;
    v22 = v25;
    while ( v23 );
    return 1;
}

char  TriggerTypeClass::_vt26(int this, char *a2)
{
    int v3; // eax
    const char *v4; // esi
    int v5; // eax
    const char *v6; // eax
    char *v7; // esi
    int v8; // eax
    int i; // ecx
    int *v10; // ebp
    int v11; // eax
    int j; // ecx
    int v13; // ebx
    char *v15; // [esp+10h] [ebp-204h]
    char Buffer[512]; // [esp+14h] [ebp-200h] BYREF
    v3 = *(uint32_t *)(this + 168);
    v4 = (const char *)(v3 + 36);
    if ( !v3 )
    v4 = g_Str__none_;
    v5 = *(uint32_t *)(this + 164);
    if ( v5 )
    v6 = (const char *)(v5 + 36);
    else
    v6 = g_Str__none_;
    sprintf(
    Buffer,
    "%s,%s,%s,%d,%d,%d,%d,%d",
    v6,
    v4,
    (const char *)(this + 100),
    *(uint8_t *)(this + 159) == 0,
    *(uint8_t *)(this + 156) != 0,
    *(uint8_t *)(this + 157) != 0,
    *(uint8_t *)(this + 158) != 0,
    *(uint8_t *)(this + 160) != 0);
    v7 = (char *)(this + 36);
    v15 = (char *)(this + 36);
    INIClass::SetString(a2, (unsigned __int8 *)aTriggers, (char *)(this + 36), Buffer);
    v8 = *(uint32_t *)(this + 172);
    for ( i = 0; v8; ++i )
    v8 = *(uint32_t *)(v8 + 40);
    sprintf(Buffer, "%d", i);
    v10 = *(int **)(this + 172);
    if ( v10 )
    do
    strcat(Buffer, Delimiter);
    TEventClass::PrepareSaveToINI(v10, Buffer);
    v10 = (int *)v10[10];
    while ( v10 );
    v7 = (char *)(this + 36);
    INIClass::SetString(a2, (unsigned __int8 *)aEvents, v7, Buffer);
    v11 = *(uint32_t *)(this + 176);
    for ( j = 0; v11; ++j )
    v11 = *(uint32_t *)(v11 + 40);
    sprintf(Buffer, "%d", j);
    v13 = *(uint32_t *)(this + 176);
    if ( v13 )
    do
    strcat(Buffer, Delimiter);
    ScriptAction::Serialize(v13, Buffer);
    v13 = *(uint32_t *)(v13 + 40);
    while ( v13 );
    v7 = v15;
    INIClass::SetString(a2, (unsigned __int8 *)aActions, v7, Buffer);
    return 1;
}

int  TriggerTypeClass::_vt13(int this, int *a2)
{
    int v3; // eax
    int v4; // eax
    int v5; // eax
    int result; // eax
    int v7; // eax
    int v8; // esi
    int v9; // eax
    AbstractTypeClass::ProcessPower((char *)this, a2);
    v3 = (*(int (__stdcall **)(int))(*(uint32_t *)(*(uint32_t *)(this + 164) + 4) + 16))(*(uint32_t *)(this + 164) + 4);
    Power::TimerProcess(v3);
    v4 = *(uint32_t *)(this + 168);
    if ( v4 )
    v5 = (*(int (__stdcall **)(int))(*(uint32_t *)(v4 + 4) + 16))(v4 + 4);
    Power::TimerProcess(v5);
    result = *(uint32_t *)(this + 172);
    if ( result )
    v7 = (*(int (__stdcall **)(int))(*(uint32_t *)(result + 4) + 16))(result + 4);
    result = Power::TimerProcess(v7);
    v8 = *(uint32_t *)(this + 176);
    if ( v8 )
    v9 = (*(int (__stdcall **)(int))(*(uint32_t *)(v8 + 4) + 16))(v8 + 4);
    return Power::TimerProcess(v9);
    return result;
}

int __stdcall TriggerTypeClass::_vt03(int a1, uint32_t *a2)
{
    if ( !a2 )
    return -2147467261;
    *a2 = -1070787183;
    a2[1] = 298977834;
    a2[2] = 1610655660;
    a2[3] = -1252326136;
    return 0;
}

int __stdcall TriggerTypeClass::_vt05(int *a1, int a2)
{
    int result; // eax
    result = AbstractClass::SaveLoad_Prefix_0(a1, a2);
    if ( result >= 0 )
    if ( a1 )
    AbstractTypeClass::Init((int)a1, (int)&a2);
    *a1 = (int)&TriggerTypeClass::`vftable';
    a1[1] = (int)&TriggerTypeClass::`vftable';
    a1[2] = (int)&TriggerTypeClass::`vftable';
    a1[3] = (int)&TriggerTypeClass::`vftable';
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, a1 + 42);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, a1 + 43);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, a1 + 44);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, a1 + 41);
    return 0;
    return result;
}

int __stdcall TriggerTypeClass::_vt06(int *a1, int *a2, int a3)
{
    int result; // eax
    result = AbstractClass::SaveLoad_Prefix(a1, a2, a3);
    if ( result >= 0 )
    return 0;
    return result;
}

int TriggerTypeClass::_vt11()
{
    return 39;
}

int TriggerTypeClass::_vt12()
{
    return 180;
}

int  TriggerTypeClass::_vt16(uint32_t *this)
{
    return *(this + 38);
}

