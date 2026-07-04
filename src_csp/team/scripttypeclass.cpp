#include "scripttypeclass.hpp"

char  ScriptTypeClass::_vt26(int this, char *a2)
{
    int v3; // esi
    uint32_t *v4; // ebx
    char Buffer[16]; // [esp+8h] [ebp-90h] BYREF
    char Source[128]; // [esp+18h] [ebp-80h] BYREF
    if ( !AbstractTypeClass::WriteINI((char *)this, a2) )
    return 0;
    v3 = 0;
    v4 = (uint32_t *)(this + 164);
    do
    sprintf(Buffer, "%d", v3);
    String::Trim(Buffer);
    if ( v3 >= *(uint32_t *)(this + 160) )
    INIClass::ClearSection((int)a2, this + 36, (unsigned __int8 *)Buffer);
    else
    ScriptTypeClass::FormatToString(v4, Source);
    INIClass::SetString(a2, (unsigned __int8 *)(this + 36), Buffer, Source);
    ++v3;
    v4 += 2;
    while ( v3 < 50 );
    return 1;
}

char  ScriptTypeClass::_vt25(int this, unsigned __int8 ***a2)
{
    int v3; // edi
    int v4; // eax
    uint32_t v6[2]; // [esp+8h] [ebp-98h] BYREF
    char Buffer[16]; // [esp+10h] [ebp-90h] BYREF
    char Destination[128]; // [esp+20h] [ebp-80h] BYREF
    INIClass::ResetSection(a2);
    if ( !AbstractTypeClass::LoadFromINI(this, a2) )
    return 0;
    v3 = 0;
    *(uint32_t *)(this + 160) = 0;
    do
    sprintf(Buffer, "%d", v3);
    String::Trim(Buffer);
    if ( (int)INIClass::GetString(
    a2,
    (unsigned __int8 *)(this + 36),
    (unsigned __int8 *)Buffer,
    &g_INI_DefaultBuffer,
    Destination,
    128) > 0 )
    ScriptTypeClass::SetField(v6, Destination);
    v4 = *(uint32_t *)(this + 160);
    if ( v4 < 50 )
    *(uint32_t *)(this + 8 * v4 + 164) = v6[0];
    *(uint32_t *)(this + 8 * v4 + 168) = v6[1];
    ++*(uint32_t *)(this + 160);
    ++v3;
    while ( v3 < 50 );
    return 1;
}

int __stdcall ScriptTypeClass::_vt03(int a1, uint32_t *a2)
{
    if ( !a2 )
    return -2147467261;
    *a2 = 1123264071;
    a2[1] = 298977161;
    a2[2] = 1610655148;
    a2[3] = -1252326136;
    return 0;
}

int __stdcall ScriptTypeClass::_vt05(uint32_t *a1, int a2)
{
    int result; // eax
    result = AbstractClass::SaveLoad_Prefix_0(a1, a2);
    if ( result >= 0 )
    if ( a1 )
    AbstractTypeClass::Init((int)a1, (int)&a2);
    *a1 = &ScriptTypeClass::`vftable';
    a1[1] = &ScriptTypeClass::`vftable';
    a1[2] = &ScriptTypeClass::`vftable';
    a1[3] = &ScriptTypeClass::`vftable';
    return 0;
    return result;
}

int __stdcall ScriptTypeClass::_vt06(int *a1, int *a2, int a3)
{
    int result; // eax
    result = AbstractClass::SaveLoad_Prefix(a1, a2, a3);
    if ( result >= 0 )
    return 0;
    return result;
}

int  ScriptTypeClass::_vt13(int this, int *a2)
{
    AbstractTypeClass::ProcessPower((char *)this, a2);
    return Power::TimerProcess(*(uint32_t *)(this + 160));
}

void  ScriptTypeClass::_vt10(int *this, int a2, int a3)
{
    int v4; // ecx
    int v5; // edi
    int v6; // esi
    int *v7; // edx
    int v8; // eax
    uint32_t *i; // ecx
    if ( a2 )
    if ( (*(int (__thiscall **)(int))(*(uint32_t *)a2 + 44))(a2) == 35 )
    v4 = -1;
    v5 = 0;
    if ( *(this + 40) > 0 )
    v6 = g_MultiplayerLogState;
    v7 = this + 42;
    do
    if ( *(v7 - 1) == 18 )
    if ( v4 == -1 )
    v8 = 0;
    if ( v6 <= 0 )
    return;
    for ( i = g_TeamTypePool; *i != a2; ++i )
    if ( ++v8 >= v6 )
    return;
    v4 = v8;
    if ( v8 == -1 )
    return;
    if ( *v7 > v4 )
    --*v7;
    LABEL_17:
    v6 = g_MultiplayerLogState;
    goto LABEL_18;
    if ( *v7 == v4 )
    *v7 = 0;
    goto LABEL_17;
    LABEL_18:
    ++v5;
    v7 += 2;
    while ( v5 < *(this + 40) );
}

int ScriptTypeClass::_vt11()
{
    return 27;
}

int ScriptTypeClass::_vt12()
{
    return 564;
}

int  ScriptTypeClass::_vt16(uint32_t *this)
{
    return *(this + 38);
}

void ** ScriptTypeClass::_vt08(void **Block, char a2)
{
    int v3; // eax
    void **v5; // [esp+4h] [ebp-4h] BYREF
    *Block = &ScriptTypeClass::`vftable';
    *(Block + 1) = &ScriptTypeClass::`vftable';
    *(Block + 2) = &ScriptTypeClass::`vftable';
    *(Block + 3) = &ScriptTypeClass::`vftable';
    AbstractClass::AnnounceExpiredPointer(Block, 1);
    v5 = Block;
    v3 = (*(int (__thiscall **)(int *, void ***))(dword_8B41C8 + 16))(&dword_8B41C8, &v5);
    if ( v3 != -1 && v3 < g_MultiplayerDebugState && v3 < --g_MultiplayerDebugState )
    do
    ++v3;
    *((uint32_t *)g_MultiplayerSyncState + v3 - 1) = *((uint32_t *)g_MultiplayerSyncState + v3);
    while ( v3 < g_MultiplayerDebugState );
    AbstractTypeClass::Dtor(Block);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

