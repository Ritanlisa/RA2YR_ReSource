#include "spawnmanagerclass.hpp"

// 0x006B7B90
int  SpawnManagerClass::SetTarget(uint32_t *this, int a2)
{
    int result; // eax
    result = a2;
    if ( a2 != *(this + 26) )
    *(this + 27) = a2;
    return result;
}

// 0x006B7D30
int  SpawnManagerClass::CountAliveSpawns(int *this)
{
    int v1; // edx
    int result; // eax
    int v3; // ecx
    v1 = *(this + 18);
    result = 0;
    if ( v1 > 0 )
    v3 = *(this + 15);
    do
    if ( *(uint32_t *)(*(uint32_t *)v3 + 4) != 7 )
    ++result;
    v3 += 4;
    --v1;
    while ( v1 );
    return result;
}

// 0x006B7D50
int  SpawnManagerClass::CountDockedSpawns(int *this)
{
    int v1; // esi
    int result; // eax
    int v3; // edx
    int v4; // ecx
    v1 = *(this + 18);
    result = 0;
    if ( v1 > 0 )
    v3 = *(this + 15);
    do
    v4 = *(uint32_t *)(*(uint32_t *)v3 + 4);
    if ( v4 == 6 || !v4 )
    ++result;
    v3 += 4;
    --v1;
    while ( v1 );
    return result;
}

int  SpawnManagerClass::_vt13(int this, int a2)
{
    int v3; // eax
    int v4; // eax
    int v5; // eax
    int v6; // eax
    int v7; // edx
    int v8; // eax
    int v9; // edx
    int v10; // eax
    int result; // eax
    int v12; // eax
    int v13; // esi
    int v14; // eax
    AbstractClass::ProcessPower((void*378 *)this);
    Power::TimerProcess(*(uint32_t *)(this + 112));
    v3 = *(uint32_t *)(this + 108);
    if ( v3 )
    v4 = (*(int (__stdcall **)(int))(*(uint32_t *)(v3 + 4) + 16))(v3 + 4);
    Power::TimerProcess(v4);
    v5 = *(uint32_t *)(this + 104);
    if ( v5 )
    v6 = (*(int (__stdcall **)(int))(*(uint32_t *)(v5 + 4) + 16))(v5 + 4);
    Power::TimerProcess(v6);
    v7 = *(uint32_t *)(this + 92);
    v8 = *(uint32_t *)(this + 100);
    if ( v7 != -1 )
    if ( (int)CurrentFrame - v7 >= v8 )
    v8 = 0;
    else
    v8 -= (int)CurrentFrame - v7;
    Power::TimerProcess(v8);
    v9 = *(uint32_t *)(this + 80);
    v10 = *(uint32_t *)(this + 88);
    if ( v9 != -1 )
    if ( (int)CurrentFrame - v9 >= v10 )
    v10 = 0;
    else
    v10 -= (int)CurrentFrame - v9;
    Power::TimerProcess(v10);
    Power::TimerProcess(*(uint32_t *)(this + 72));
    Power::TimerProcess(*(uint32_t *)(this + 44));
    result = *(uint32_t *)(this + 40);
    if ( result )
    v12 = (*(int (__stdcall **)(int))(*(uint32_t *)(result + 4) + 16))(result + 4);
    result = Power::TimerProcess(v12);
    v13 = *(uint32_t *)(this + 36);
    if ( v13 )
    v14 = (*(int (__stdcall **)(int))(*(uint32_t *)(v13 + 4) + 16))(v13 + 4);
    return Power::TimerProcess(v14);
    return result;
}

int __stdcall SpawnManagerClass::_vt03(int a1, uint32_t *a2)
{
    if ( !a2 )
    return -2147467261;
    *a2 = 108652929;
    a2[1] = 299085213;
    a2[2] = 268441278;
    a2[3] = 1822515787;
    return 0;
}

// 0x006B7F10
int __stdcall SpawnManagerClass::LoadFromStream(int a1, int a2)
{
    int v2; // ebx
    int v3; // esi
    int Prefix_0; // ebp
    uint32_t *v5; // edi
    int v6; // esi
    int v7; // eax
    uint32_t *v8; // eax
    wchar_t *v9; // ecx
    int v10; // ecx
    int v11; // eax
    int v12; // eax
    int v13; // edx
    int v14; // esi
    int v16; // [esp+28h] [ebp-4h] BYREF
    v2 = a1;
    v3 = a2;
    Prefix_0 = AbstractClass::SaveLoad_Prefix_0(a1, a2);
    v5 = 0;
    if ( Prefix_0 >= 0 )
    if ( v2 )
    AbstractClass::InitVtables((uint32_t *)v2, (int)&a1);
    SpawnManagerClass::Constructor_6B83A0(0, 0);
    *(uint32_t *)(v2 + 80) = CurrentFrame;
    *(uint32_t *)(v2 + 88) = 0;
    Timer::Start((uint32_t *)(v2 + 92), 0);
    *(uint32_t *)v2 = &SpawnManagerClass::`vftable';
    *(uint32_t *)(v2 + 4) = &SpawnManagerClass::`vftable';
    *(uint32_t *)(v2 + 8) = &SpawnManagerClass::`vftable';
    *(uint32_t *)(v2 + 12) = &SpawnManagerClass::`vftable';
    Prefix_0 = (*(int (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v3 + 12))(v3, &v16, 4, 0);
    if ( Prefix_0 >= 0 )
    v6 = v2 + 56;
    if ( v2 != -56 )
    SpawnControlVector::Constructor(0, 0);
    *(uint32_t *)v6 = &DynamicVectorClass<SpawnManagerClass::SpawnControl *>::`vftable';
    *(uint32_t *)(v2 + 76) = 10;
    *(uint32_t *)(v2 + 72) = 0;
    v7 = v16;
    a1 = 0;
    if ( v16 <= 0 )
    LABEL_20:
    v14 = 0;
    if ( v7 > 0 )
    do
    ObjectPtr::RegisterForTracking(
    (int)&SwizzleManagerClass_Instance,
    *(int **)(*(uint32_t *)(v2 + 60) + 4 * v14++));
    while ( v14 < v16 );
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(v2 + 36));
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(v2 + 40));
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(v2 + 104));
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(v2 + 108));
    else
    while ( 1 )
    v8 = __2_YAPAXI_Z(0x18u);
    if ( v8 )
    v9 = CurrentFrame;
    v8[4] = 0;
    v8[2] = v9;
    v5 = v8;
    Prefix_0 = (*(int (__stdcall **)(int, uint32_t *, int, uint32_t))(*(uint32_t *)a2 + 12))(a2, v5, 24, 0);
    if ( Prefix_0 < 0 )
    break;
    v10 = *(uint32_t *)(v2 + 64);
    if ( *(uint32_t *)(v2 + 72) < v10
    || (*(uint8_t *)(v2 + 69) || !v10)
    && (v11 = *(uint32_t *)(v2 + 76), v11 > 0)
    && (*(unsigned __int8 (__thiscall **)(int, int, uint32_t))(*(uint32_t *)v6 + 8))(v2 + 56, v10 + v11, 0) )
    v12 = *(uint32_t *)(v2 + 72);
    v13 = *(uint32_t *)(v2 + 60);
    *(uint32_t *)(v2 + 72) = v12 + 1;
    *(uint32_t *)(v13 + 4 * v12) = v5;
    v7 = v16;
    if ( ++a1 >= v16 )
    goto LABEL_20;
    v5 = 0;
    return Prefix_0;
}

int __stdcall SpawnManagerClass::_vt06(int *a1, int *a2, int a3)
{
    int result; // eax
    int v4; // edx
    int i; // edi
    result = AbstractClass::SaveLoad_Prefix(a1, a2, a3);
    if ( result >= 0 )
    v4 = *a2;
    a3 = a1[18];
    result = (*(int (__stdcall **)(int *, int *, int, uint32_t))(v4 + 16))(a2, &a3, 4, 0);
    if ( result >= 0 )
    for ( i = 0; i < a3; ++i )
    result = (*(int (__stdcall **)(int *, uint32_t, int, uint32_t))(*a2 + 16))(a2, *(uint32_t *)(a1[15] + 4 * i), 24, 0);
    if ( result < 0 )
    break;
    return result;
}

int SpawnManagerClass::_vt12()
{
    return 116;
}

int SpawnManagerClass::_vt11()
{
    return 65;
}

void * SpawnManagerClass::_vt08(void *Block, char a2)
{
    SpawnManagerClass::Constructor_SpawnManagerClass((int)Block);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

