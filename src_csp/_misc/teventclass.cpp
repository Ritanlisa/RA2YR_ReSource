#include "teventclass.hpp"

char  TEventClass::Execute(uint32_t *this, int a2, int a3, int a4, int *a5, int a6, int a7)
{
    int v8; // ecx
    int v9; // eax
    int v10; // edi
    const char *v11; // edx
    char *v12; // ebp
    int v13; // edi
    int v14; // ebx
    int v15; // ebp
    int v16; // esi
    int v18; // eax
    int v19; // edi
    const char *v20; // edx
    char *v21; // ebp
    int v22; // edi
    int v23; // esi
    int v24; // edx
    int v25; // eax
    int v26; // edx
    int v27; // eax
    void *v28; // ecx
    int v29; // esi
    int v30; // esi
    int *WorldCoords; // eax
    int v32; // esi
    int v33; // edi
    int v34; // ebx
    int *v35; // eax
    int v36; // edx
    int v37; // ecx
    int v38; // eax
    double v39; // st7
    int v40; // esi
    int v41; // edx
    char *v42; // ecx
    int v43; // eax
    int v44; // esi
    int v45; // edx
    int *v46; // eax
    int v47; // ecx
    int v48; // eax
    int Owner; // esi
    int v50; // eax
    void *v51; // ecx
    void *v52; // edi
    int v53; // ebx
    uint32_t v55[3]; // [esp+20h] [ebp-18h] BYREF
    uint8_t v56[12]; // [esp+2Ch] [ebp-Ch] BYREF
    v8 = *(this + 11);
    switch ( v8 )
    case 13:
    case 51:
    v26 = *a5;
    v27 = a5[2];
    if ( *a5 == -1 )
    goto LABEL_44;
    if ( (int)CurrentFrame - v26 < v27 )
    v27 -= (int)CurrentFrame - v26;
    LABEL_44:
    if ( v27 )
    return 0;
    return 1;
    case 14:
    if ( *((uint32_t *)ScenarioClass_Instance + 1146) == -1 )
    return 0;
    v24 = *((uint32_t *)ScenarioClass_Instance + 1146);
    v25 = *((uint32_t *)ScenarioClass_Instance + 1148);
    if ( v24 == -1 )
    return !v25;
    if ( (int)CurrentFrame - v24 >= v25 )
    return 1;
    v25 -= (int)CurrentFrame - v24;
    return !v25;
    case 27:
    ScenarioClass::GetGlobalStateByID(ScenarioClass_Instance, *(this + 13), &a6);
    return a6;
    case 28:
    ScenarioClass::GetGlobalStateByID(ScenarioClass_Instance, *(this + 13), &a6);
    return (uint8_t)a6 == 0;
    case 36:
    ScenarioClass::GetLocalStateByID(ScenarioClass_Instance, *(this + 13), &a6);
    return a6;
    case 37:
    ScenarioClass::GetLocalStateByID(ScenarioClass_Instance, *(this + 13), &a6);
    return (uint8_t)a6 == 0;
    case 45:
    return *((uint32_t *)ScenarioClass_Instance + 3403) <= *(this + 13);
    case 46:
    return *((uint32_t *)ScenarioClass_Instance + 3403) >= *(this + 13);
    case 47:
    return *(this + 13) <= (int)CurrentFrame / 15;
    case 60:
    v9 = -1;
    v10 = dword_A8EB10 - 1;
    a6 = -1;
    if ( dword_A8EB10 - 1 < 0 )
    goto LABEL_8;
    v11 = (const char *)(this + 14);
    v12 = (char *)dword_A8EB04 + 4 * v10;
    while ( strcmp((const char *)(*(uint32_t *)v12 + 36), v11) )
    --v10;
    v12 -= 4;
    if ( v10 < 0 )
    v9 = a6;
    goto LABEL_8;
    v9 = v10;
    LABEL_8:
    if ( v9 >= dword_A8EB10 )
    return 0;
    if ( v9 < 0 )
    return 0;
    v13 = 0;
    v14 = *((uint32_t *)dword_A8EB04 + v9);
    v15 = *(this + 13);
    v16 = g_SidebarState - 1;
    if ( g_SidebarState - 1 < 0 )
    return 0;
    while ( 1 )
    if ( (*(int (__thiscall **)(uint32_t))(**((uint32_t **)g_TechnoClass_Count + v16) + 132))(*((uint32_t *)g_TechnoClass_Count
    + v16)) == v14 )
    ++v13;
    if ( v13 >= v15 )
    break;
    if ( --v16 < 0 )
    return 0;
    return 1;
    case 61:
    v18 = -1;
    v19 = dword_A8EB10 - 1;
    a6 = -1;
    if ( dword_A8EB10 - 1 < 0 )
    goto LABEL_22;
    v20 = (const char *)(this + 14);
    v21 = (char *)dword_A8EB04 + 4 * v19;
    while ( strcmp((const char *)(*(uint32_t *)v21 + 36), v20) )
    --v19;
    v21 -= 4;
    if ( v19 < 0 )
    v18 = a6;
    goto LABEL_22;
    v18 = v19;
    LABEL_22:
    if ( v18 >= dword_A8EB10 || v18 < 0 )
    return 0;
    v22 = *((uint32_t *)dword_A8EB04 + v18);
    v23 = g_SidebarState - 1;
    if ( g_SidebarState - 1 < 0 )
    return 1;
    while ( (*(int (__thiscall **)(uint32_t))(**((uint32_t **)g_TechnoClass_Count + v23) + 132))(*((uint32_t *)g_TechnoClass_Count
    + v23)) != v22 )
    if ( --v23 < 0 )
    return 1;
    return 0;
    default:
    if ( !v8 )
    return 0;
    if ( v8 != 19 && v8 != 20 && v8 != 21 && v8 != 22 )
    switch ( v8 )
    case 1:
    case 2:
    case 3:
    case 4:
    case 6:
    case 7:
    case 18:
    case 19:
    case 20:
    case 21:
    case 22:
    case 23:
    case 24:
    case 25:
    case 26:
    case 29:
    case 31:
    case 33:
    case 34:
    case 35:
    case 38:
    case 39:
    case 40:
    case 41:
    case 42:
    case 43:
    case 44:
    case 48:
    case 49:
    case 50:
    case 53:
    case 54:
    case 59:
    if ( a2 == v8 && !ArmageddonMode )
    break;
    return 0;
    default:
    break;
    switch ( v8 )
    case 1:
    case 25:
    case 26:
    case 24:
    case 59:
    if ( a2 == v8 )
    v51 = (void *)*(this + 13);
    if ( v51 == (void *)-1 || HouseClass::FindOwner(v51) )
    if ( a4 )
    v52 = (void *)*(this + 13);
    if ( v52 == (void *)-1
    || (v53 = (*(int (__thiscall **)(int))(*(uint32_t *)a4 + 56))(a4),
    v53 == *(uint32_t *)(HouseClass::FindOwner(v52) + 48)) )
    *(uint8_t *)a6 = 1;
    *(this + 21) = (*(int (__thiscall **)(int))(*(uint32_t *)a4 + 60))(a4);
    return 1;
    return 0;
    case 53:
    if ( a2 == 53 )
    if ( a4 )
    v28 = (void *)*(this + 13);
    if ( v28 != (void *)-1 )
    if ( HouseClass::FindOwner(v28) )
    if ( (*(int (__thiscall **)(int, int))(*(uint32_t *)a4 + 208))(a4, 1) )
    v29 = (*(int (__thiscall **)(int, int))(*(uint32_t *)a4 + 208))(a4, 1);
    if ( *(uint32_t *)(v29 + 48) == *(uint32_t *)(HouseClass::FindOwner((void *)*(this + 13)) + 48) )
    *(uint8_t *)a6 = 1;
    return 1;
    return 0;
    case 54:
    if ( a2 == 54 )
    if ( a4 )
    v30 = (*(int (__thiscall **)(int, int))(*(uint32_t *)a4 + 204))(a4, 1);
    if ( (*(int (__thiscall **)(int))(*(uint32_t *)v30 + 44))(v30) == 16
    && *(this + 13) != -1
    && (*(int (__thiscall **)(int))(*(uint32_t *)v30 + 64))(v30) == *(this + 13) )
    *(uint8_t *)a6 = 1;
    return 1;
    return 0;
    case 34:
    if ( a2 == 34 )
    WorldCoords = Cell::GetWorldCoords((__int16 *)ScenarioClass_Instance, v55, *(this + 13));
    v32 = *WorldCoords;
    v33 = WorldCoords[1];
    v34 = WorldCoords[2];
    v35 = (int *)(*(int (__thiscall **)(int, uint8_t *))(*(uint32_t *)a4 + 72))(a4, v56);
    v36 = v35[1];
    v37 = *v35;
    v38 = v35[2];
    v55[1] = v36 - v33;
    v55[2] = v38 - v34;
    v55[0] = v37 - v32;
    v39 = Math::Sqrt(
    (double)(v37 - v32) * (double)(v37 - v32)
    + (double)(v38 - v34) * (double)(v38 - v34)
    + (double)(v36 - v33) * (double)(v36 - v33));
    return (int)Math::RoundToInt(v39) <= 1280;
    return 0;
    if ( v8 == 44 && (a2 != 44 || !a7 || *(this + 13) != *(uint32_t *)(*(uint32_t *)(a7 + 540) + 48)) )
    return 0;
    if ( a3 )
    switch ( v8 )
    case 12:
    if ( (*(int (__stdcall **)(int))(*(uint32_t *)(a3 + 36) + 24))(a3 + 36) >= *(this + 13) )
    goto LABEL_122;
    return 0;
    case 15:
    if ( *(uint32_t *)(a3 + 21640) >= *(this + 13) )
    goto LABEL_122;
    return 0;
    case 16:
    if ( *(uint32_t *)(a3 + 21556) >= *(this + 13) )
    goto LABEL_122;
    return 0;
    case 17:
    if ( *(int *)(a3 + 752) <= 0 )
    goto LABEL_122;
    v44 = *(uint32_t *)(a3 + 120);
    v45 = 0;
    if ( v44 <= 0 )
    goto LABEL_122;
    v46 = *(int **)(a3 + 108);
    while ( 1 )
    v47 = *v46;
    if ( *v46 )
    if ( !*(uint8_t *)(v47 + 129) && *(uint32_t *)(*(uint32_t *)(v47 + 1312) + 3768) )
    return 0;
    ++v45;
    ++v46;
    if ( v45 >= v44 )
    goto LABEL_122;
    case 18:
    if ( *(uint8_t *)(a3 + 505) )
    goto LABEL_122;
    return 0;
    case 19:
    v48 = *(uint32_t *)(a3 + 620);
    goto LABEL_112;
    case 20:
    if ( *(uint32_t *)(a3 + 628) != *(this + 13) )
    return 0;
    *(uint8_t *)a6 = 1;
    goto LABEL_122;
    case 21:
    if ( *(uint32_t *)(a3 + 624) != *(this + 13) )
    return 0;
    *(uint8_t *)a6 = 1;
    goto LABEL_122;
    case 22:
    v48 = *(uint32_t *)(a3 + 632);
    LABEL_112:
    if ( v48 != *(this + 13) )
    return 0;
    *(uint8_t *)a6 = 1;
    goto LABEL_122;
    case 23:
    v40 = g_HouseClass_AIProductionState;
    v41 = 0;
    if ( g_HouseClass_AIProductionState <= 0 )
    goto LABEL_91;
    v42 = (char *)g_TeamClassPool;
    break;
    case 32:
    if ( !DynamicVector::GetOrGrow((uint32_t *)(a3 + 21840), *(this + 13)) )
    return 0;
    *(uint8_t *)a6 = 1;
    goto LABEL_122;
    case 52:
    if ( (*(int (__stdcall **)(int))(*(uint32_t *)(a3 + 36) + 24))(a3 + 36) <= *(this + 13) )
    goto LABEL_122;
    return 0;
    case 57:
    if ( DynamicVector::GetOrGrow((uint32_t *)(a3 + 21840), *(this + 13)) )
    return 0;
    *(uint8_t *)a6 = 1;
    goto LABEL_122;
    default:
    goto LABEL_122;
    while ( 1 )
    v43 = *(uint32_t *)v42;
    if ( *(uint32_t *)(*(uint32_t *)v42 + 36) == *(this + 12) && !*(uint32_t *)(v43 + 84) && *(uint8_t *)(v43 + 130) )
    break;
    ++v41;
    v42 += 4;
    if ( v41 >= g_HouseClass_AIProductionState )
    goto LABEL_91;
    *(uint8_t *)a6 = 1;
    v40 = g_HouseClass_AIProductionState;
    LABEL_91:
    if ( v41 == v40 )
    return 0;
    LABEL_122:
    Owner = HouseClass::FindOwner((void *)*(this + 13));
    if ( Owner )
    switch ( *(this + 11) )
    case 3:
    return *(uint8_t *)(Owner + 580) != 0;
    case 5:
    return *(uint8_t *)(Owner + 500) != 0;
    case 9:
    if ( VectorClass::GetCount((uint32_t *)(Owner + 21860)) > 0 )
    return 0;
    return VectorClass::GetCount((uint32_t *)(Owner + 21880)) <= 0;
    case 0xA:
    return *(int *)(Owner + 752) <= 0;
    case 0xB:
    return *(int *)(Owner + 752) <= 0
    && VectorClass::GetCount((uint32_t *)(Owner + 21860)) <= 0
    && VectorClass::GetCount((uint32_t *)(Owner + 21880)) <= 0;
    case 0x1E:
    return HouseClass::GetPowerRatio((int *)Owner) < 1.0;
    case 0x37:
    v50 = *(uint32_t *)(Owner + 748);
    return v50 <= 0;
    case 0x38:
    if ( *(uint32_t *)(Owner + 744) - *(uint32_t *)(Owner + 748) > 0 )
    return 0;
    v50 = *(uint32_t *)(Owner + 756);
    return v50 <= 0;
    case 0x3A:
    return HouseClass::GetPowerRatio((int *)Owner) >= 1.0;
    default:
    return 1;
    return 1;
}

int  TEventClass::PrepareSaveToINI(int *this, const char *a2)
{
    int v2; // edx
    int v3; // eax
    int v4; // esi
    const CHAR *v6; // [esp-10h] [ebp-18h]
    int v7; // [esp-Ch] [ebp-14h]
    int v8; // [esp-8h] [ebp-10h]
    int v9; // [esp-4h] [ebp-Ch]
    v2 = *(this + 11);
    switch ( v2 )
    case 1:
    case 3:
    case 5:
    case 9:
    case 10:
    case 11:
    case 24:
    case 25:
    case 26:
    case 30:
    case 44:
    case 53:
    case 55:
    case 56:
    case 58:
    case 59:
    v3 = 13;
    break;
    case 12:
    case 13:
    case 15:
    case 16:
    case 45:
    case 46:
    case 47:
    case 51:
    case 52:
    v3 = 10;
    break;
    case 19:
    case 32:
    case 57:
    v3 = 8;
    break;
    case 20:
    v3 = 6;
    break;
    case 21:
    case 54:
    v3 = 5;
    break;
    case 22:
    v3 = 7;
    break;
    case 23:
    v3 = 12;
    break;
    case 27:
    case 28:
    v3 = 22;
    break;
    case 34:
    v3 = 9;
    break;
    case 36:
    case 37:
    v3 = 29;
    break;
    case 60:
    case 61:
    v3 = 43;
    break;
    default:
    v3 = 0;
    break;
    v4 = *(this + 12);
    if ( v4 )
    v9 = v4 + 36;
    v8 = 1;
    v7 = *(this + 11);
    v6 = aDDS;
    else
    if ( v3 == 43 )
    return wsprintfA((LPSTR)&a2[strlen(a2)], aDDDS, v2, 2, *(this + 13), this + 14);
    v9 = *(this + 13);
    v8 = 0;
    v7 = *(this + 11);
    v6 = g_Str_Trace__d__d;
    return wsprintfA((LPSTR)&a2[strlen(a2)], v6, v7, v8, v9);
}

int  TEventClass::_vt10(uint32_t *this, int a2, int a3)
{
    int result; // eax
    result = *(this + 10);
    if ( result == a2 )
    result = *(uint32_t *)(result + 40);
    *(this + 10) = result;
    if ( *(this + 12) == a2 )
    *(this + 12) = 0;
    return result;
}

int  TEventClass::_vt13(int this, int a2)
{
    int v3; // eax
    int v4; // eax
    int v5; // eax
    int v6; // eax
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
    return Power::TimerProcess(*(uint32_t *)(this + 52));
}

int __stdcall TEventClass::_vt03(int a1, uint32_t *a2)
{
    if ( !a2 )
    return -2147467261;
    *a2 = 1326367635;
    a2[1] = 298977877;
    a2[2] = 1610655660;
    a2[3] = -1252326136;
    return 0;
}

// 0x0071F8C0
int __stdcall TEventClass::SaveLoad_Prefix(int *a1, int a2)
{
    int result; // eax
    result = AbstractClass::SaveLoad_Prefix_0(a1, a2);
    if ( result >= 0 )
    if ( a1 )
    AbstractClass::InitVtables(a1, (int)&a2);
    *a1 = (int)&TEventClass::`vftable';
    a1[1] = (int)&TEventClass::`vftable';
    a1[2] = (int)&TEventClass::`vftable';
    a1[3] = (int)&TEventClass::`vftable';
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, a1 + 10);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, a1 + 12);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, a1 + 21);
    return 0;
    return result;
}

int __stdcall TEventClass::SaveLoad_Prefix_0(int *a1, int *a2, int a3)
{
    int result; // eax
    result = AbstractClass::SaveLoad_Prefix(a1, a2, a3);
    if ( result >= 0 )
    return 0;
    return result;
}

char  TEventClass::GetStateA(uint32_t *this)
{
    char result; // al
    switch ( *(this + 11) )
    case 1:
    case 2:
    case 3:
    case 4:
    case 6:
    case 7:
    case 0x12:
    case 0x13:
    case 0x14:
    case 0x15:
    case 0x16:
    case 0x17:
    case 0x18:
    case 0x19:
    case 0x1A:
    case 0x1D:
    case 0x1F:
    case 0x21:
    case 0x22:
    case 0x23:
    case 0x26:
    case 0x27:
    case 0x28:
    case 0x29:
    case 0x2A:
    case 0x2B:
    case 0x2C:
    case 0x30:
    case 0x31:
    case 0x32:
    case 0x35:
    case 0x36:
    case 0x3B:
    result = 1;
    break;
    default:
    result = 0;
    break;
    return result;
}

char  TEventClass::GetStateB_SpyEvent(uint32_t *this)
{
    char result; // al
    switch ( *(this + 11) )
    case 1:
    case 6:
    case 0x1F:
    case 0x2C:
    case 0x3B:
    result = 0;
    break;
    default:
    result = 1;
    break;
    return result;
}

int TEventClass::_vt12()
{
    return 88;
}

int TEventClass::_vt11()
{
    return 48;
}

int  TEventClass::_vt16(uint32_t *this)
{
    return *(this + 9);
}

void ** TEventClass::_vt08(void **Block, char a2)
{
    int v3; // eax
    int v4; // eax
    int v5; // eax
    void **v7; // [esp+8h] [ebp-4h] BYREF
    *Block = &TEventClass::`vftable';
    *(Block + 1) = &TEventClass::`vftable';
    *(Block + 2) = &TEventClass::`vftable';
    *(Block + 3) = &TEventClass::`vftable';
    AbstractClass::AnnounceExpiredPointer(Block, 1);
    v7 = Block;
    v3 = (*(int (__thiscall **)(int *, void ***))(TActionClass_Array + 16))(&TActionClass_Array, &v7);
    if ( v3 != -1 && v3 < g_TActionClassState && v3 < --g_TActionClassState )
    do
    ++v3;
    *((uint32_t *)dword_B0F65C + v3 - 1) = *((uint32_t *)dword_B0F65C + v3);
    while ( v3 < g_TActionClassState );
    v7 = Block;
    v4 = (*(int (__thiscall **)(int *, void ***))(g_AnimPoolManager + 16))(&g_AnimPoolManager, &v7);
    if ( v4 != -1 && v4 < g_AnimManager && v4 < --g_AnimManager )
    do
    ++v4;
    *((uint32_t *)g_AnimPoolCount + v4 - 1) = *((uint32_t *)g_AnimPoolCount + v4);
    while ( v4 < g_AnimManager );
    v7 = Block;
    v5 = (*(int (__thiscall **)(int *, void ***))(dword_B0F1A0 + 16))(&dword_B0F1A0, &v7);
    if ( v5 != -1 && v5 < dword_B0F1B0 && v5 < --dword_B0F1B0 )
    do
    ++v5;
    *((uint32_t *)dword_B0F1A4 + v5 - 1) = *((uint32_t *)dword_B0F1A4 + v5);
    while ( v5 < dword_B0F1B0 );
    AbstractClass::DTOR(Block);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

