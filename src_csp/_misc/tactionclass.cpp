#include "tactionclass.hpp"

int  TActionClass::_vt10(uint32_t *this, int a2, int a3)
{
    int v3; // eax
    int result; // eax
    v3 = *(this + 10);
    if ( v3 == a2 )
    *(this + 10) = *(uint32_t *)(v3 + 40);
    result = 0;
    if ( *(this + 12) == a2 )
    *(this + 12) = 0;
    if ( *(this + 20) == a2 )
    *(this + 20) = 0;
    if ( *(this + 19) == a2 )
    *(this + 19) = 0;
    return result;
}

// 0x006E1780
char  TActionClass::PlayAudioAtRandomWP(int *this, int a2, int a3, int a4, int a5)
{
    int v5; // esi
    int v7; // edi
    uint32_t *v8; // ebx
    __int16 *v9; // ecx
    int v10; // eax
    int v11; // ecx
    uint32_t v13[3]; // [esp+10h] [ebp-1A0h] BYREF
    int v14; // [esp+1Ch] [ebp-194h] BYREF
    uint32_t v15[100]; // [esp+20h] [ebp-190h] BYREF
    v5 = 0;
    v7 = 0;
    v8 = v15;
    do
    if ( ScenarioClass::Is_Waypoint_Valid((char *)ScenarioClass_Instance, v7) )
    ++v5;
    *v8++ = *ScenarioClass::Get_Waypoint_Location((char *)ScenarioClass_Instance, &v14, v7);
    if ( v5 == 400 )
    break;
    ++v7;
    while ( v7 < 702 );
    v9 = (__int16 *)&v15[Random::Range((uint32_t *)ScenarioClass_Instance + 134, 0, v5 - 1)];
    v10 = (v9[1] << 8) + 128;
    v13[0] = (*v9 << 8) + 128;
    v11 = *(this + 36);
    v13[1] = v10;
    v13[2] = 0;
    PlayAudioAt2(v11, v13, 0);
    return 1;
}

int __stdcall TActionClass::_vt03(int a1, uint32_t *a2)
{
    if ( !a2 )
    return -2147467261;
    *a2 = 1326367634;
    a2[1] = 298977877;
    a2[2] = 1610655660;
    a2[3] = -1252326136;
    return 0;
}

// 0x006E3DB0
int __stdcall TActionClass::SaveLoad_Prefix(int *a1, int a2)
{
    int result; // eax
    result = AbstractClass::SaveLoad_Prefix_0(a1, a2);
    if ( result >= 0 )
    if ( a1 )
    AbstractClass::InitVtables(a1, (int)&a2);
    *a1 = (int)&TActionClass::`vftable';
    a1[1] = (int)&TActionClass::`vftable';
    a1[2] = (int)&TActionClass::`vftable';
    a1[3] = (int)&TActionClass::`vftable';
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, a1 + 10);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, a1 + 12);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, a1 + 19);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, a1 + 20);
    return 0;
    return result;
}

int __stdcall TActionClass::SaveLoad_Prefix_0(int *a1, int *a2, int a3)
{
    int result; // eax
    result = AbstractClass::SaveLoad_Prefix(a1, a2, a3);
    if ( result >= 0 )
    return 0;
    return result;
}

int  TActionClass::_vt13(int this, int a2)
{
    int v3; // eax
    int v4; // eax
    int v5; // eax
    int v6; // eax
    int v7; // eax
    int v8; // eax
    int v9; // eax
    int v10; // eax
    AbstractClass::ProcessPower((void*378 *)this);
    v3 = *(uint32_t *)(this + 40);
    if ( v3 )
    v4 = (*(int (__stdcall **)(int))(*(uint32_t *)(v3 + 4) + 16))(v3 + 4);
    Power::TimerProcess(v4);
    Power::TimerProcess(*(uint32_t *)(this + 44));
    v5 = *(uint32_t *)(this + 48);
    if ( v5 )
    v6 = (*(int (__stdcall **)(int))(*(uint32_t *)(v5 + 4) + 16))(v5 + 4);
    Power::TimerProcess(v6);
    v7 = *(uint32_t *)(this + 76);
    if ( v7 )
    v8 = (*(int (__stdcall **)(int))(*(uint32_t *)(v7 + 4) + 16))(v7 + 4);
    Power::TimerProcess(v8);
    v9 = *(uint32_t *)(this + 80);
    if ( v9 )
    v10 = (*(int (__stdcall **)(int))(*(uint32_t *)(v9 + 4) + 16))(v9 + 4);
    Power::TimerProcess(v10);
    return Power::TimerProcess(*(uint32_t *)(this + 144));
}

int TActionClass::_vt12()
{
    return 148;
}

int TActionClass::_vt11()
{
    return 47;
}

int  TActionClass::_vt16(uint32_t *this)
{
    return *(this + 9);
}

void ** TActionClass::Destructor(void **Block, char a2)
{
    int v3; // eax
    int v4; // eax
    int v5; // eax
    void **v7; // [esp+8h] [ebp-4h] BYREF
    *Block = &TActionClass::`vftable';
    *(Block + 1) = &TActionClass::`vftable';
    *(Block + 2) = &TActionClass::`vftable';
    *(Block + 3) = &TActionClass::`vftable';
    AbstractClass::AnnounceExpiredPointer(Block);
    v7 = Block;
    v3 = (*(int (__thiscall **)(int *, void ***))(g_AnimPoolManager + 16))(&g_AnimPoolManager, &v7);
    if ( v3 != -1 && v3 < g_AnimManager && v3 < --g_AnimManager )
    do
    ++v3;
    *((uint32_t *)g_AnimPoolCount + v3 - 1) = *((uint32_t *)g_AnimPoolCount + v3);
    while ( v3 < g_AnimManager );
    v7 = Block;
    v4 = (*(int (__thiscall **)(int *, void ***))(TActionClass_Array + 16))(&TActionClass_Array, &v7);
    if ( v4 != -1 && v4 < g_TActionClassState && v4 < --g_TActionClassState )
    do
    ++v4;
    *((uint32_t *)dword_B0F65C + v4 - 1) = *((uint32_t *)dword_B0F65C + v4);
    while ( v4 < g_TActionClassState );
    v7 = Block;
    v5 = (*(int (__thiscall **)(int *, void ***))(dword_B0E658 + 16))(&dword_B0E658, &v7);
    if ( v5 != -1 && v5 < dword_B0E668 && v5 < --dword_B0E668 )
    do
    ++v5;
    *((uint32_t *)dword_B0E65C + v5 - 1) = *((uint32_t *)dword_B0E65C + v5);
    while ( v5 < dword_B0E668 );
    *((uint8_t *)Block + 109) = 0;
    AbstractClass::DTOR(Block);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

int  TActionClass::TActionClass(int this)
{
    int v2; // ecx
    char v3; // al
    int v4; // eax
    uint32_t *v5; // edx
    int v6; // eax
    int v7; // eax
    AbstractClass::Constructor((AbstractClass *)this);
    *(uint32_t *)(this + 36) = -1;
    *(uint32_t *)(this + 40) = 0;
    *(uint32_t *)(this + 44) = 0;
    *(uint32_t *)(this + 48) = 0;
    *(uint8_t *)(this + 56) = 0;
    *(uint32_t *)(this + 84) = 0;
    *(uint32_t *)this = &TEventClass::`vftable';
    *(uint32_t *)(this + 4) = &TEventClass::`vftable';
    *(uint32_t *)(this + 8) = &TEventClass::`vftable';
    *(uint32_t *)(this + 12) = &TEventClass::`vftable';
    v2 = dword_B0F1B0;
    if ( dword_B0F1B0 < dword_B0F1A8
    || (byte_B0F1AD || !dword_B0F1A8)
    && dword_B0F1B4 > 0
    && (v3 = (*(int (__thiscall **)(int *, int, uint32_t))(dword_B0F1A0 + 8))(
    &dword_B0F1A0,
    dword_B0F1A8 + dword_B0F1B4,
    0),
    v2 = dword_B0F1B0,
    v3) )
    dword_B0F1B0 = v2 + 1;
    *((uint32_t *)dword_B0F1A4 + v2) = this;
    v2 = dword_B0F1B0;
    v4 = 0;
    if ( v2 <= 0 )
    LABEL_11:
    v4 = -1;
    else
    v5 = dword_B0F1A4;
    while ( *v5 != this )
    ++v4;
    ++v5;
    if ( v4 >= v2 )
    goto LABEL_11;
    *(uint32_t *)(this + 36) = v4;
    if ( g_TActionClassState < dword_B0F660
    || (byte_B0F665 || !dword_B0F660)
    && dword_B0F66C > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, uint32_t))(TActionClass_Array + 8))(
    &TActionClass_Array,
    dword_B0F660 + dword_B0F66C,
    0) )
    v6 = g_TActionClassState++;
    *((uint32_t *)dword_B0F65C + v6) = this;
    if ( g_AnimManager < g_AnimTypePool
    || (g_AnimPoolLocked || !g_AnimTypePool)
    && g_AnimManagerConfig > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, uint32_t))(g_AnimPoolManager + 8))(
    &g_AnimPoolManager,
    g_AnimTypePool + g_AnimManagerConfig,
    0) )
    v7 = g_AnimManager++;
    *((uint32_t *)g_AnimPoolCount + v7) = this;
    *(uint32_t *)(this + 52) = 0;
    return this;
}

