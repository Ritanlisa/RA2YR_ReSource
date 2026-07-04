#include "triggerclass.hpp"

// 0x00726250
char  TriggerClass::HasCrossesHorizontalLineEvent(uint32_t *this)
{
    int v2; // eax
    uint32_t *v3; // ecx
    v2 = *(this + 10);
    v3 = (uint32_t *)*(this + 9);
    if ( !v2 )
    return HouseClass::HasType25Building(v3);
    return HouseClass::HasType25Building(v3) || (unsigned __int8)TriggerClass::HasCrossesHorizontalLineEvent(*(this + 10));
}

// 0x00726290
char  TriggerClass::HasCrossesVerticalLineEvent(uint32_t *this)
{
    int v2; // eax
    uint32_t *v3; // ecx
    v2 = *(this + 10);
    v3 = (uint32_t *)*(this + 9);
    if ( !v2 )
    return HouseClass::HasType26Building(v3);
    return HouseClass::HasType26Building(v3) || (unsigned __int8)TriggerClass::HasCrossesVerticalLineEvent(*(this + 10));
}

void  TriggerClass::NotifyGlobalChanged(int *this, int a2)
{
    int *i; // esi
    for ( i = this; i; i = (int *)i[10] )
    if ( HouseClass::FindType2728((uint32_t *)i[9], a2) )
    BuildingClass::ProcessUpgradeEffects(i);
}

void  TriggerClass::NotifyLocalChanged(int *this, int a2)
{
    int *i; // esi
    for ( i = this; i; i = (int *)i[10] )
    if ( TriggerTypeClass::HasLocalSetOrClearedEvent((uint32_t *)i[9], a2) )
    BuildingClass::ProcessUpgradeEffects(i);
}

char  TriggerClass::RegisterEvent(int this, int a2, int a3, char a4, char a5, int a6)
{
    char v7; // bl
    uint32_t *v8; // edi
    int Owner; // eax
    int v11; // [esp-10h] [ebp-18h]
    char v12; // [esp+7h] [ebp-1h]
    if ( !*(uint8_t *)(this + 68) || *(uint8_t *)(this + 48) )
    return 0;
    v12 = 1;
    if ( a4 )
    goto LABEL_16;
    v7 = 0;
    v8 = *(uint32_t **)(*(uint32_t *)(this + 36) + 172);
    if ( !v8 )
    goto LABEL_16;
    do
    if ( (*(uint32_t *)(this + 64) & (1 << v7)) != 0
    || (v11 = a6,
    Owner = HouseClass::FindOwner(*(void **)(*(uint32_t *)(*(uint32_t *)(this + 36) + 164) + 180)),
    TEventClass::Execute(v8, a2, Owner, a3, (int *)(this + 52), (int)&a5, v11)) )
    if ( TriggerClass::GetValue(v8) )
    *(uint32_t *)(this + 44) = TriggerClass::GetValue(v8);
    if ( a5 && TEventClass::GetStateA(v8) && TEventClass::GetStateB_SpyEvent(v8) )
    *(uint32_t *)(this + 64) |= 1 << v7;
    else
    v12 = 0;
    v8 = (uint32_t *)v8[10];
    ++v7;
    while ( v8 );
    if ( v12 )
    LABEL_16:
    if ( a5 )
    BuildingClass::ProcessUpgradeEffects((int *)this);
    return v12;
}

int  TriggerClass::_vt10(uint32_t *this, int a2, int a3)
{
    int result; // eax
    if ( *(this + 9) == a2 )
    *(this + 9) = 0;
    result = *(this + 10);
    if ( result == a2 )
    result = *(uint32_t *)(result + 40);
    *(this + 10) = result;
    if ( *(this + 11) == a2 )
    *(this + 11) = 0;
    return result;
}

int  TriggerClass::_vt13(int this, int *a2)
{
    int v3; // eax
    int v4; // eax
    int v5; // eax
    int v6; // ecx
    int v7; // edx
    int v8; // eax
    AbstractClass::ProcessPower((void*378 *)this);
    v3 = (*(int (__stdcall **)(int))(*(uint32_t *)(*(uint32_t *)(this + 36) + 4) + 16))(*(uint32_t *)(this + 36) + 4);
    Power::TimerProcess(v3);
    v4 = *(uint32_t *)(this + 40);
    if ( v4 )
    v5 = (*(int (__stdcall **)(int))(*(uint32_t *)(v4 + 4) + 16))(v4 + 4);
    v4 = Power::TimerProcess(v5);
    LOBYTE(v4) = *(uint8_t *)(this + 48);
    Power::FlagProcess(a2, v4);
    LOBYTE(v6) = *(uint8_t *)(this + 68);
    Power::FlagProcess(a2, v6);
    v7 = *(uint32_t *)(this + 52);
    v8 = *(uint32_t *)(this + 60);
    if ( v7 != -1 )
    if ( (int)CurrentFrame - v7 >= v8 )
    v8 = 0;
    else
    v8 -= (int)CurrentFrame - v7;
    Power::TimerProcess(v8);
    return Power::TimerProcess(*(uint32_t *)(this + 64));
}

int __stdcall TriggerClass::_vt03(int a1, uint32_t *a2)
{
    if ( !a2 )
    return -2147467261;
    *a2 = -1070787184;
    a2[1] = 298977834;
    a2[2] = 1610655660;
    a2[3] = -1252326136;
    return 0;
}

int __stdcall TriggerClass::_vt05(int *a1, int a2)
{
    int result; // eax
    result = AbstractClass::SaveLoad_Prefix_0(a1, a2);
    if ( result >= 0 )
    if ( a1 )
    AbstractClass::InitVtables(a1, (int)&a2);
    *a1 = (int)&TriggerClass::`vftable';
    a1[1] = (int)&TriggerClass::`vftable';
    a1[2] = (int)&TriggerClass::`vftable';
    a1[3] = (int)&TriggerClass::`vftable';
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, a1 + 9);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, a1 + 10);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, a1 + 11);
    return 0;
    return result;
}

int __stdcall TriggerClass::_vt06(int *a1, int *a2, int a3)
{
    int result; // eax
    result = AbstractClass::SaveLoad_Prefix(a1, a2, a3);
    if ( result >= 0 )
    return 0;
    return result;
}

int TriggerClass::_vt12()
{
    return 72;
}

int TriggerClass::_vt11()
{
    return 38;
}

void ** TriggerClass::_vt08(void **Block, char a2)
{
    int v3; // eax
    int v4; // eax
    int v5; // eax
    void **v7; // [esp+8h] [ebp-4h] BYREF
    *Block = &TriggerClass::`vftable';
    *(Block + 1) = &TriggerClass::`vftable';
    *(Block + 2) = &TriggerClass::`vftable';
    *(Block + 3) = &TriggerClass::`vftable';
    AbstractClass::AnnounceExpiredPointer(Block, 1);
    v7 = Block;
    v3 = (*(int (__thiscall **)(int *, void ***))(TriggerClass_Array + 16))(&TriggerClass_Array, &v7);
    if ( v3 != -1 && v3 < g_ProductionQueueState && v3 < --g_ProductionQueueState )
    do
    ++v3;
    *((uint32_t *)g_TriggerClassCapacity + v3 - 1) = *((uint32_t *)g_TriggerClassCapacity + v3);
    while ( v3 < g_ProductionQueueState );
    v7 = Block;
    v4 = (*(int (__thiscall **)(int *, void ***))(g_AnimPoolManager + 16))(&g_AnimPoolManager, &v7);
    if ( v4 != -1 && v4 < g_AnimManager && v4 < --g_AnimManager )
    do
    ++v4;
    *((uint32_t *)g_AnimPoolCount + v4 - 1) = *((uint32_t *)g_AnimPoolCount + v4);
    while ( v4 < g_AnimManager );
    v7 = Block;
    v5 = (*(int (__thiscall **)(int *, void ***))(dword_B0F708 + 16))(&dword_B0F708, &v7);
    if ( v5 != -1 && v5 < dword_B0F718 && v5 < --dword_B0F718 )
    do
    ++v5;
    *((uint32_t *)dword_B0F70C + v5 - 1) = *((uint32_t *)dword_B0F70C + v5);
    while ( v5 < dword_B0F718 );
    AbstractClass::DTOR(Block);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

