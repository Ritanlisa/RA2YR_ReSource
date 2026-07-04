#include "slavemanagerclass.hpp"

// 0x00522FC0
bool  SlaveManagerClass::IsMasterHarvester(void *this)
{
    return (*(int (__thiscall **)(void *))(*(uint32_t *)this + 388))(this) == 10;
}

// 0x006AF580
char  SlaveManagerClass::SetOwner(uint32_t *this, int a2)
{
    int v3; // eax
    uint32_t *v4; // ecx
    int v5; // ecx
    int i; // ecx
    v3 = *(this + 9);
    *(uint32_t *)(v3 + 728) = 0;
    *(this + 9) = a2;
    v4 = *(uint32_t **)(a2 + 728);
    if ( v4 )
    LOBYTE(v3) = TechnoClass::MutateAll(v4, 0, 0);
    v5 = *(uint32_t *)(a2 + 728);
    if ( v5 )
    LOBYTE(v3) = (*(int (__thiscall **)(int, int))(*(uint32_t *)v5 + 32))(v5, 1);
    *(uint32_t *)(a2 + 728) = this;
    for ( i = *(this + 18) - 1; i >= 0; --i )
    v3 = **(uint32_t **)(*(this + 15) + 4 * i);
    if ( v3 )
    *(uint32_t *)(v3 + 732) = *(this + 9);
    return v3;
}

char  SlaveManagerClass::_vt23(int *this)
{
    int *v2; // edi
    int v3; // edx
    int v4; // eax
    int v6; // [esp+Ch] [ebp-8h]
    v2 = (int *)CurrentFrame;
    v3 = *(this + 20);
    v4 = *(this + 22);
    if ( v3 == -1 )
    LABEL_4:
    if ( v4 )
    return v4;
    goto LABEL_5;
    if ( (int)CurrentFrame - v3 < v4 )
    v4 -= (int)CurrentFrame - v3;
    goto LABEL_4;
    LABEL_5:
    *(this + 20) = (int)CurrentFrame;
    *(this + 21) = v6;
    *(this + 22) = 10;
    v4 = *(this + 9);
    if ( v4 )
    SlaveManagerClass::ProcessSlaves(this, v2, (int)this);
    LOBYTE(v4) = ProcessDeployAction(this);
    return v4;
}

// 0x006B0A20
int  SlaveManagerClass::LostSlave(uint32_t *this, int a2)
{
    int result; // eax
    int v3; // esi
    uint32_t **i; // edx
    uint32_t *v5; // eax
    int v6; // ecx
    int v7; // [esp+10h] [ebp-8h]
    result = *(this + 18) - 1;
    if ( result >= 0 )
    v3 = *(this + 15);
    for ( i = (uint32_t **)(v3 + 4 * result); **i != a2; --i )
    if ( --result < 0 )
    return result;
    v5 = *(uint32_t **)(v3 + 4 * result);
    if ( *v5 )
    *(uint32_t *)(*v5 + 732) = 0;
    *v5 = 0;
    v5[1] = 6;
    v6 = *(this + 12);
    result = (int)(v5 + 2);
    *(uint32_t *)result = CurrentFrame;
    *(uint32_t *)(result + 4) = v7;
    *(uint32_t *)(result + 8) = v6;
    return result;
}

// 0x006B1020
bool  SlaveManagerClass::ShouldWakeUpNow(uint32_t *this)
{
    uint32_t *v2; // ecx
    int v4; // [esp+Ch] [ebp-4h] BYREF
    v2 = (uint32_t *)*(this + 9);
    if ( !v2 || *(this + 23) )
    return 0;
    if ( !*(uint8_t *)(v2[135] + 492) )
    return 1;
    if ( *(uint32_t *)((*(int (__thiscall **)(uint32_t *))(*v2 + 444))(v2) + 236) == 5 )
    return 1;
    if ( *(this + 24) + *(uint32_t *)RulesClass_Instance[1].gap370 >= (int)CurrentFrame )
    return 0;
    v4 = *(uint32_t *)(*(int (__thiscall **)(uint32_t, int *, int, uint32_t))(*(uint32_t *)*(this + 9) + 824))(
    *(this + 9),
    &v4,
    RulesClass_Instance[1].GateUp / 256,
    0);
    return v4 != dword_B0B5B8;
}

int  SlaveManagerClass::_vt13(int this, int a2)
{
    int result; // eax
    int i; // esi
    AbstractClass::ProcessPower((void*378 *)this);
    result = Power::TimerProcess(*(uint32_t *)(this + 92));
    for ( i = *(uint32_t *)(this + 72) - 1; i >= 0; --i )
    result = Power::TimerProcess(*(uint32_t *)(*(uint32_t *)(*(uint32_t *)(this + 60) + 4 * i) + 4));
    return result;
}

int __stdcall SlaveManagerClass::_vt03(int a1, uint32_t *a2)
{
    if ( !a2 )
    return -2147467261;
    *a2 = 861581284;
    a2[1] = 299183526;
    a2[2] = 268444350;
    a2[3] = 1822515787;
    return 0;
}

int __stdcall SlaveManagerClass::_vt05(uint32_t *a1, int a2)
{
    int v2; // esi
    uint32_t *v3; // edi
    int Prefix_0; // ebx
    uint32_t *v5; // ebp
    uint32_t *v6; // esi
    int v7; // eax
    uint32_t *v8; // eax
    wchar_t *v9; // ecx
    int v10; // ecx
    int v11; // eax
    int v12; // eax
    int v13; // edx
    int v14; // esi
    int v16; // [esp+28h] [ebp-4h] BYREF
    v2 = a2;
    v3 = a1;
    Prefix_0 = AbstractClass::SaveLoad_Prefix_0(a1, a2);
    v5 = 0;
    if ( Prefix_0 >= 0 )
    if ( v3 )
    AbstractClass::InitVtables(v3, (int)&a1);
    SlaveControlVector::Constructor(v3 + 14, 0, 0);
    v3[14] = &DynamicVectorClass<SlaveManagerClass::SlaveControl *>::`vftable';
    v3[19] = 10;
    v3[18] = 0;
    Timer::Start(v3 + 20, 0);
    *v3 = &SlaveManagerClass::`vftable';
    v3[1] = &SlaveManagerClass::`vftable';
    v2 = a2;
    v3[2] = &SlaveManagerClass::`vftable';
    v3[3] = &SlaveManagerClass::`vftable';
    Prefix_0 = (*(int (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v2 + 12))(v2, &v16, 4, 0);
    if ( Prefix_0 >= 0 )
    v6 = v3 + 14;
    if ( v3 != (uint32_t *)-56 )
    SlaveControlVector::Constructor(v3 + 14, 0, 0);
    *v6 = &DynamicVectorClass<SlaveManagerClass::SlaveControl *>::`vftable';
    v3[19] = 10;
    v3[18] = 0;
    v7 = v16;
    a1 = 0;
    if ( v16 <= 0 )
    LABEL_20:
    v14 = 0;
    if ( v7 > 0 )
    do
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, *(int **)(v3[15] + 4 * v14++));
    while ( v14 < v16 );
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, v3 + 9);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, v3 + 10);
    else
    while ( 1 )
    v8 = __2_YAPAXI_Z(0x14u);
    if ( v8 )
    v9 = CurrentFrame;
    v8[4] = 0;
    v8[2] = v9;
    v5 = v8;
    Prefix_0 = (*(int (__stdcall **)(int, uint32_t *, int, uint32_t))(*(uint32_t *)a2 + 12))(a2, v5, 20, 0);
    if ( Prefix_0 < 0 )
    break;
    v10 = v3[16];
    if ( v3[18] < v10
    || (*((uint8_t *)v3 + 69) || !v10)
    && (v11 = v3[19], v11 > 0)
    && (*(unsigned __int8 (__thiscall **)(uint32_t *, int, uint32_t))(*v6 + 8))(v3 + 14, v10 + v11, 0) )
    v12 = v3[18];
    v13 = v3[15];
    v3[18] = v12 + 1;
    *(uint32_t *)(v13 + 4 * v12) = v5;
    v7 = v16;
    a1 = (uint32_t *)((char *)a1 + 1);
    if ( (int)a1 >= v16 )
    goto LABEL_20;
    v5 = 0;
    return Prefix_0;
}

int __stdcall SlaveManagerClass::_vt06(int *a1, int *a2, int a3)
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
    result = (*(int (__stdcall **)(int *, uint32_t, int, uint32_t))(*a2 + 16))(a2, *(uint32_t *)(a1[15] + 4 * i), 20, 0);
    if ( result < 0 )
    break;
    return result;
}

int SlaveManagerClass::_vt12()
{
    return 100;
}

int SlaveManagerClass::_vt11()
{
    return 72;
}

void * SlaveManagerClass::_vt08(void *Block, char a2)
{
    SlaveManagerClass::Constructor_SlaveManagerClass((int)Block);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

