#include "superclass.hpp"

void ** SuperClass::CreateChronoAnim(int this, int a2, int a3, int a4)
{
    int v5; // eax
    int v6; // eax
    int v7; // eax
    void **result; // eax
    int v9; // [esp+4h] [ebp-10h] BYREF
    int v10[3]; // [esp+8h] [ebp-Ch] BYREF
    v5 = *(uint32_t *)(this + 104);
    if ( v5 )
    *(uint8_t *)(v5 + 405) = 0;
    *(uint32_t *)(this + 104) = 0;
    v9 = this;
    v6 = (*(int (__thiscall **)(int *, int *))(g_BuildingInstanceCount + 16))(&g_BuildingInstanceCount, &v9);
    if ( v6 != -1 )
    DynamicVector::Remove(&g_BuildingInstanceCount, v6);
    if ( *(uint8_t *)(this + 108) )
    v9 = this;
    v7 = (*(int (__thiscall **)(int *, int *))(g_BuildingInstanceCount + 16))(&g_BuildingInstanceCount, &v9);
    if ( v7 != -1 )
    DynamicVector::Remove(&g_BuildingInstanceCount, v7);
    *(uint8_t *)(this + 108) = 0;
    result = (void **)__2_YAPAXI_Z(0x1C8u);
    if ( result )
    v10[0] = a2;
    v10[1] = a3;
    v10[2] = a4 + 5;
    result = AnimClass::ctor(result, (void *)RulesClass_Instance->PrerequisiteRadar[1], v10, 0, 1, (void *)0x600, 0, 0);
    if ( result )
    *(uint32_t *)(this + 104) = result;
    result = (void **)dword_B0F5C0;
    if ( g_BuildingTypeInstanceCount < dword_B0F5C0
    || (byte_B0F5C5 || !dword_B0F5C0)
    && dword_B0F5CC > 0
    && (result = (void **)(*(int (__thiscall **)(int *, int, uint32_t))(g_BuildingInstanceCount + 8))(
    &g_BuildingInstanceCount,
    dword_B0F5C0 + dword_B0F5CC,
    0),
    (uint8_t)result) )
    result = (void **)g_BuildingTypeInstanceCount++;
    *((uint32_t *)g_BuildingClassPoolManager + (uint32_t)result) = this;
    return result;
}

// 0x006CB4D0
char  SuperClass::SetOnHold(int this, char a2)
{
    int v3; // esi
    int v4; // eax
    int v5; // eax
    if ( !*(uint8_t *)(this + 109) || *(uint8_t *)(this + 110) || a2 == *(uint8_t *)(this + 112) || !*(uint8_t *)(this + 96) )
    return 0;
    if ( a2 || *(uint8_t *)(*(uint32_t *)(this + 40) + 245) )
    v3 = *(uint32_t *)(this + 48);
    if ( v3 != -1 )
    v4 = *(uint32_t *)(this + 56);
    if ( (int)CurrentFrame - v3 >= v4 )
    v5 = 0;
    else
    v5 = v4 - ((uint32_t)CurrentFrame - v3);
    *(uint32_t *)(this + 56) = v5;
    *(uint32_t *)(this + 48) = -1;
    else if ( *(uint32_t *)(this + 48) == -1 )
    *(uint32_t *)(this + 48) = CurrentFrame;
    *(uint8_t *)(this + 112) = 0;
    return 1;
    *(uint8_t *)(this + 112) = a2;
    return 1;
}

// 0x006CB7B0
char  SuperClass::Lose(uint8_t *this)
{
    int v1; // eax
    uint8_t *v3; // [esp+0h] [ebp-4h] BYREF
    v3 = this;
    if ( !*(this + 109) )
    return 0;
    *(this + 111) = 0;
    *(this + 109) = 0;
    v3 = this;
    v1 = (*(int (__thiscall **)(int *, uint8_t **))(SuperClass_ShowTimers + 16))(&SuperClass_ShowTimers, &v3);
    if ( v1 != -1 && v1 < dword_A83D60 && v1 < --dword_A83D60 )
    do
    ++v1;
    *((uint32_t *)dword_A83D54 + v1 - 1) = *((uint32_t *)dword_A83D54 + v1);
    while ( v1 < dword_A83D60 );
    return 1;
}

// 0x006CB820
char  SuperClass::SetReadiness(uint8_t *this, char a2)
{
    *(this + 111) = a2;
    return a2;
}

// 0x006CB830
char  SuperClass::StopPreclickAnim(int this, int a2)
{
    int v3; // eax
    int v4; // eax
    int v5; // eax
    int v6; // ecx
    uint32_t v8[4]; // [esp+8h] [ebp-10h] BYREF
    v3 = *(uint32_t *)(this + 104);
    if ( v3 )
    *(uint8_t *)(v3 + 405) = 0;
    *(uint32_t *)(this + 104) = 0;
    v8[0] = this;
    v4 = (*(int (__thiscall **)(int *, uint32_t *))(g_BuildingInstanceCount + 16))(&g_BuildingInstanceCount, v8);
    if ( v4 != -1 )
    DynamicVector::Remove(&g_BuildingInstanceCount, v4);
    if ( *(uint8_t *)(this + 108) )
    v8[0] = this;
    v5 = (*(int (__thiscall **)(int *, uint32_t *))(g_BuildingInstanceCount + 16))(&g_BuildingInstanceCount, v8);
    if ( v5 != -1 )
    DynamicVector::Remove(&g_BuildingInstanceCount, v5);
    *(uint8_t *)(this + 108) = 0;
    if ( !*(uint8_t *)(this + 109)
    || *(uint8_t *)(this + 111)
    || *(uint8_t *)(this + 112) && !*(uint8_t *)(*(uint32_t *)(this + 40) + 237) )
    return 0;
    *(uint32_t *)(this + 120) = -1;
    if ( *(uint32_t *)(this + 48) == -1 )
    *(uint32_t *)(this + 48) = CurrentFrame;
    v6 = *(uint32_t *)(this + 36);
    if ( v6 == -1 )
    v6 = *(uint32_t *)(*(uint32_t *)(this + 40) + 176);
    *(uint32_t *)(this + 48) = CurrentFrame;
    *(uint32_t *)(this + 52) = v8[2];
    *(uint32_t *)(this + 56) = v6;
    if ( *(uint8_t *)(*(uint32_t *)(this + 40) + 229) )
    *(uint32_t *)(this + 124) = 0;
    return 1;
}

char  SuperClass::ClickFire(int this, int a2, __int16 *a3)
{
    int v4; // eax
    int v5; // eax
    __int16 *v6; // eax
    int v7; // edx
    int v8; // ecx
    wchar_t *v9; // edi
    wchar_t **v10; // esi
    wchar_t *v11; // eax
    int v13; // edi
    int v14; // edx
    int v15; // eax
    wchar_t *v16; // ebp
    int v17; // eax
    int v18; // edx
    wchar_t **v19; // edi
    int v20; // eax
    char v21; // al
    int v22; // eax
    int v23; // ecx
    wchar_t *v24; // eax
    wchar_t *v25; // eax
    int v26; // ecx
    char *v27; // edx
    int v28; // eax
    int v29; // ecx
    wchar_t *v30; // [esp+14h] [ebp-8h]
    v4 = *(uint32_t *)(this + 40);
    if ( *(uint8_t *)(v4 + 229) )
    if ( (unsigned __int8)House::IsCurrentPlayer(*(void*375 **)(this + 44)) )
    v5 = *(uint32_t *)(this + 124);
    if ( v5 == 2 )
    v6 = *(__int16 **)(this + 36);
    *(uint32_t *)(this + 124) = 1;
    if ( v6 == (__int16 *)-1 )
    a3 = *(__int16 **)(*(uint32_t *)(this + 40) + 176);
    else
    a3 = v6;
    v7 = *(uint32_t *)(this + 48);
    v8 = *(uint32_t *)(this + 56);
    v9 = CurrentFrame;
    v10 = (wchar_t **)(this + 48);
    if ( v7 != -1 )
    if ( (int)CurrentFrame - v7 >= v8 )
    a2 = 0;
    goto LABEL_11;
    v8 -= (int)CurrentFrame - v7;
    a2 = v8;
    LABEL_11:
    v11 = (wchar_t *)Math::RoundToInt((double)(int)a3 - (double)a2 / *(double *)&RulesClass_Instance->Shipyard[2]);
    *v10 = v9;
    v10[1] = v30;
    v10[2] = v11;
    return 0;
    if ( v5 == 1 )
    v13 = *(uint32_t *)(this + 36);
    *(uint32_t *)(this + 124) = 2;
    if ( v13 == -1 )
    v13 = *(uint32_t *)(*(uint32_t *)(this + 40) + 176);
    v14 = *(uint32_t *)(this + 48);
    v15 = *(uint32_t *)(this + 56);
    v16 = CurrentFrame;
    if ( v14 != -1 )
    if ( (int)CurrentFrame - v14 >= v15 )
    v15 = 0;
    else
    v15 -= (int)CurrentFrame - v14;
    v17 = Math::RoundToInt((double)(v13 - v15) * *(double *)&RulesClass_Instance->Shipyard[2]);
    v18 = a2;
    *(uint32_t *)(this + 48) = v16;
    *(uint32_t *)(this + 52) = v30;
    *(uint32_t *)(this + 56) = v17;
    SuperClass::Launch(this, v18, a3, v18);
    return 0;
    else if ( !*(uint8_t *)(*(uint32_t *)(this + 44) + 506) )
    SuperClass::Launch(this, a2, a3, a2);
    return 0;
    return 0;
    v19 = (wchar_t **)(this + 48);
    if ( (*(uint32_t *)(this + 48) == -1 || !*(uint8_t *)(this + 109) || !*(uint8_t *)(this + 111)) && !*(uint8_t *)(v4 + 238) )
    return 0;
    if ( *(uint32_t *)(v4 + 180) == 2 && (unsigned __int8)sub_53A0E0() )
    if ( (uint8_t)a2 )
    sub_53AE00();
    return 0;
    return 0;
    if ( *(uint32_t *)(*(uint32_t *)(this + 40) + 180) == 7 && PsyDom::IsActive() )
    if ( (uint8_t)a2 )
    sub_53B410();
    return 0;
    return 0;
    SuperClass::Launch(this, a2, a3, a2);
    v20 = *(uint32_t *)(this + 40);
    if ( !*(uint8_t *)(v20 + 238) )
    *(uint8_t *)(this + 111) = 0;
    if ( !*(uint8_t *)(this + 110) )
    if ( *(uint8_t *)(v20 + 245) )
    v23 = *(uint32_t *)(this + 36);
    if ( v23 == -1 )
    v23 = *(uint32_t *)(v20 + 176);
    v24 = CurrentFrame;
    *(uint32_t *)(this + 120) = -1;
    *v19 = v24;
    *(uint32_t *)(this + 52) = v30;
    *(uint32_t *)(this + 56) = v23;
    v25 = *v19;
    if ( *v19 != (wchar_t *)-1 )
    v26 = *(uint32_t *)(this + 56);
    v27 = (char *)((char *)CurrentFrame - (char *)v25);
    if ( (char *)CurrentFrame - (char *)v25 >= v26 )
    *(uint32_t *)(this + 56) = 0;
    *v19 = (wchar_t *)-1;
    else
    *v19 = (wchar_t *)-1;
    *(uint32_t *)(this + 56) = v26 - (uint32_t)v27;
    return 0;
    else if ( !*(uint8_t *)(v20 + 237) && !*(uint8_t *)(v20 + 238) )
    v28 = *(uint32_t *)(this + 104);
    if ( v28 )
    *(uint8_t *)(v28 + 405) = 0;
    *(uint32_t *)(this + 104) = 0;
    a2 = this;
    VectorClass::RemoveAt(&g_BuildingInstanceCount, (int)&a2);
    if ( *(uint8_t *)(this + 108) )
    a2 = this;
    VectorClass::RemoveAt(&g_BuildingInstanceCount, (int)&a2);
    *(uint8_t *)(this + 108) = 0;
    if ( *(uint8_t *)(this + 109)
    && !*(uint8_t *)(this + 111)
    && (!*(uint8_t *)(this + 112) || *(uint8_t *)(*(uint32_t *)(this + 40) + 237)) )
    *(uint32_t *)(this + 120) = -1;
    if ( *v19 == (wchar_t *)-1 )
    *v19 = CurrentFrame;
    v29 = *(uint32_t *)(this + 36);
    if ( v29 == -1 )
    v29 = *(uint32_t *)(*(uint32_t *)(this + 40) + 176);
    *v19 = CurrentFrame;
    *(uint32_t *)(this + 52) = v30;
    *(uint32_t *)(this + 56) = v29;
    if ( *(uint8_t *)(*(uint32_t *)(this + 40) + 229) )
    *(uint32_t *)(this + 124) = 0;
    return 0;
    v21 = *(uint8_t *)(this + 109);
    *(uint8_t *)(this + 110) = 0;
    if ( !v21 )
    return 0;
    *(uint8_t *)(this + 111) = 0;
    *(uint8_t *)(this + 109) = 0;
    a2 = this;
    v22 = (*(int (__thiscall **)(int *, int *))(SuperClass_ShowTimers + 16))(&SuperClass_ShowTimers, &a2);
    if ( v22 != -1 )
    SuperClass::RemoveFromPointerArray(v22);
    return 1;
}

// 0x006CC1E0
char  SuperClass::SetCharge(int this, int a2)
{
    uint32_t *v3; // eax
    int v4; // esi
    int v5; // esi
    int v7; // [esp+Ch] [ebp-8h]
    LOBYTE(v3) = *(uint8_t *)(this + 109);
    if ( (uint8_t)v3 )
    LOBYTE(v3) = a2;
    if ( (unsigned int)a2 <= 0x64 )
    v4 = *(uint32_t *)(this + 36);
    if ( v4 == -1 )
    v4 = *(uint32_t *)(*(uint32_t *)(this + 40) + 176);
    v5 = v4 - Math::RoundToInt((double)a2 * 0.0099999998 * (double)v4);
    if ( !v5 )
    *(uint8_t *)(this + 111) = 1;
    v3 = (uint32_t *)(this + 48);
    if ( *(uint32_t *)(this + 48) == -1 )
    *v3 = CurrentFrame;
    *v3 = CurrentFrame;
    *(uint32_t *)(this + 52) = v7;
    *(uint32_t *)(this + 56) = v5;
    return (char)v3;
}

// 0x006CC280
int  SuperClass::SetRechargeTime(uint32_t *this, int a2)
{
    *(this + 9) = a2;
    return a2;
}

// 0x006CC290
void  SuperClass::ResetRechargeTime(uint32_t *this)
{
    *(this + 9) = -1;
}

char  SuperClass::CanFire(int this)
{
    if ( *(uint8_t *)(this + 112) )
    return 0;
    if ( *(uint8_t *)(*(uint32_t *)(this + 40) + 229) )
    return *(uint32_t *)(this + 124) != 0;
    return *(uint8_t *)(this + 111);
}

// 0x006CDE90
bool  SuperClass::ShouldDrawProgress(int this)
{
    return *(uint8_t *)(*(uint32_t *)(this + 40) + 229) || *(uint8_t *)(this + 111) == 0;
}

int __stdcall SuperClass::_vt03(int a1, uint32_t *a2)
{
    if ( !a2 )
    return -2147467261;
    *a2 = -671656762;
    a2[1] = 298989852;
    a2[2] = 268461211;
    a2[3] = -399534261;
    return 0;
}

int __stdcall SuperClass::vt_05_(AbstractClass *a1, int a2)
{
    int result; // eax
    int v3; // eax
    result = AbstractClass::SaveLoad_Prefix_0(a1, a2);
    if ( result >= 0 )
    if ( a1 )
    AbstractClass::Constructor(a1);
    a1->parent_gap = &SuperClass::`vftable';
    a1->? = &SuperClass::`vftable';
    a1->? = &SuperClass::`vftable';
    a1->? = &SuperClass::`vftable';
    if ( *(uint32_t *)&a1[2].unknown_18
    && (g_BuildingTypeInstanceCount < dword_B0F5C0
    || (byte_B0F5C5 || !dword_B0F5C0)
    && dword_B0F5CC > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, uint32_t))(g_BuildingInstanceCount + 8))(
    &g_BuildingInstanceCount,
    dword_B0F5C0 + dword_B0F5CC,
    0)) )
    v3 = g_BuildingTypeInstanceCount++;
    *((uint32_t *)g_BuildingClassPoolManager + v3) = a1;
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&a1[1].?);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&a1[1].?);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&a1[2].unknown_18);
    a1[2].parent_gap = 0;
    a1[2].? = 0;
    return 0;
    return result;
}

int __stdcall SuperClass::_vt06(int *a1, int *a2, int a3)
{
    int result; // eax
    result = AbstractClass::SaveLoad_Prefix(a1, a2, a3);
    if ( result >= 0 )
    return 0;
    return result;
}

int  SuperClass::_vt13(int this, int *a2)
{
    int v3; // eax
    int v4; // ecx
    int v5; // edx
    int v6; // edx
    int v7; // eax
    int result; // eax
    int v9; // eax
    v3 = AbstractClass::ProcessPower((void*378 *)this);
    LOBYTE(v3) = *(uint8_t *)(this + 109);
    Power::FlagProcess(a2, v3);
    LOBYTE(v4) = *(uint8_t *)(this + 110);
    Power::FlagProcess(a2, v4);
    LOBYTE(v5) = *(uint8_t *)(this + 111);
    Power::FlagProcess(a2, v5);
    Power::TimerProcess(*(uint32_t *)(this + 120));
    Power::TimerProcess(*(uint32_t *)(this + 124));
    LOBYTE(v6) = *(uint8_t *)(this + 96);
    v7 = Power::FlagProcess(a2, v6);
    LOBYTE(v7) = *(uint8_t *)(this + 108);
    Power::FlagProcess(a2, v7);
    result = *(uint32_t *)(this + 104);
    if ( result )
    Power::TimerProcess(*(unsigned __int8 *)(result + 405));
    v9 = (*(int (__stdcall **)(int))(*(uint32_t *)(*(uint32_t *)(this + 104) + 4) + 16))(*(uint32_t *)(this + 104) + 4);
    return Power::TimerProcess(v9);
    return result;
}

// 0x006CE0B0
int * SuperClass::Reset(int this)
{
    int v2; // eax
    int v3; // eax
    int v4; // eax
    int v5; // ecx
    int *result; // eax
    int v7; // ebx
    bool v8; // bl
    int v9; // esi
    int v10; // ecx
    char *v11; // edx
    uint32_t v12[4]; // [esp+4h] [ebp-10h] BYREF
    v2 = *(uint32_t *)(this + 104);
    if ( v2 )
    *(uint8_t *)(v2 + 405) = 0;
    *(uint32_t *)(this + 104) = 0;
    v12[0] = this;
    v3 = (*(int (__thiscall **)(int *, uint32_t *))(g_BuildingInstanceCount + 16))(&g_BuildingInstanceCount, v12);
    if ( v3 != -1 )
    DynamicVector::Remove(&g_BuildingInstanceCount, v3);
    if ( *(uint8_t *)(this + 108) )
    v12[0] = this;
    v4 = (*(int (__thiscall **)(int *, uint32_t *))(g_BuildingInstanceCount + 16))(&g_BuildingInstanceCount, v12);
    if ( v4 != -1 )
    DynamicVector::Remove(&g_BuildingInstanceCount, v4);
    *(uint8_t *)(this + 108) = 0;
    v5 = *(uint32_t *)(this + 36);
    result = (int *)(this + 48);
    *(uint8_t *)(this + 111) = 0;
    v7 = *(uint32_t *)(this + 48);
    *(uint32_t *)(this + 120) = -1;
    v8 = v7 != -1;
    if ( v5 == -1 )
    v5 = *(uint32_t *)(*(uint32_t *)(this + 40) + 176);
    *result = (int)CurrentFrame;
    *(uint32_t *)(this + 52) = v12[2];
    *(uint32_t *)(this + 56) = v5;
    if ( !v8 )
    v9 = *result;
    if ( *result != -1 )
    v10 = result[2];
    v11 = (char *)CurrentFrame - v9;
    if ( (int)CurrentFrame - v9 >= v10 )
    result[2] = 0;
    *result = -1;
    else
    *result = -1;
    result[2] = v10 - (uint32_t)v11;
    return result;
}

// 0x006CE1A0
bool  SuperClass::ShouldFlashTab(int this)
{
    int v1; // eax
    int v2; // eax
    if ( *(uint8_t *)(this + 112) )
    return 0;
    v1 = *(uint32_t *)(this + 40);
    if ( *(uint8_t *)(v1 + 229) )
    if ( !*(uint32_t *)(this + 124) )
    return 0;
    else if ( !*(uint8_t *)(this + 111) )
    return 0;
    v2 = *(uint32_t *)(v1 + 232);
    if ( v2 == -1 )
    return 1;
    return v2 && v2 + *(uint32_t *)(this + 116) > (int)CurrentFrame;
}

int SuperClass::_vt11()
{
    return 57;
}

int SuperClass::_vt12()
{
    return 128;
}

void * SuperClass::_vt08(void *Block, char a2)
{
    SuperClass::CleanupMembers((int)Block);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

