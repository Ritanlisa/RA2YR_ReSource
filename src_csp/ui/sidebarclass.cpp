#include "sidebarclass.hpp"

int  SidebarClass::StartProduction(int this, void *a2, int a3, char a4, char a5)
{
    int v6; // ebx
    int v7; // esi
    int v8; // eax
    int v9; // ebp
    int v10; // esi
    void *v11; // eax
    int result; // eax
    char v13; // bl
    int v14; // ecx
    int Status; // eax
    char v16; // bl
    int v17; // eax
    int v18; // eax
    int v19; // ecx
    int v20; // ecx
    char v21; // [esp+23h] [ebp-11h]
    int v22; // [esp+24h] [ebp-10h]
    int v23; // [esp+28h] [ebp-Ch]
    char v24; // [esp+2Ch] [ebp-8h]
    if ( a3 >= 0 )
    v6 = (int)a2;
    v8 = TechnoTypeClass::GetByTypeAndIndex((int)a2, a3);
    if ( a2 == (void *)6 || a2 == (void *)7 )
    v22 = *(uint32_t *)(v8 + 3592);
    else
    v22 = 0;
    v7 = v22;
    else
    v6 = (int)a2;
    v7 = 0;
    v22 = 0;
    v23 = v6 - 1;
    switch ( v6 )
    case 1:
    case 40:
    if ( a4 )
    v21 = *(uint8_t *)(this + 21459);
    else
    v21 = *(uint8_t *)(this + 21458);
    break;
    case 2:
    case 3:
    v21 = *(uint8_t *)(this + 21456);
    break;
    case 6:
    case 7:
    if ( v7 == 5 )
    v21 = *(uint8_t *)(this + 21464);
    else
    v21 = *(uint8_t *)(this + 21460);
    break;
    case 15:
    case 16:
    v21 = *(uint8_t *)(this + 21457);
    break;
    default:
    v21 = 0;
    break;
    Sidebar::Dispatch(v6, a4, v7, 0);
    v9 = TechnoTypeClass::GetByTypeAndIndex(v6, a3);
    v24 = 0;
    if ( !(*(int (__thiscall **)(int, uint32_t, int, int, int))(*(uint32_t *)v9 + 148))(v9, 0, 1, 1, this) )
    if ( !a5 || !(*(int (__thiscall **)(int, int, uint32_t, int, int))(*(uint32_t *)v9 + 148))(v9, 1, 0, 1, this) )
    LABEL_40:
    Debug::Log();
    return 3;
    v24 = 1;
    switch ( v6 )
    case 1:
    case 40:
    if ( a4 )
    v10 = *(uint32_t *)(this + 21432);
    else
    v10 = *(uint32_t *)(this + 21428);
    break;
    case 2:
    case 3:
    v10 = *(uint32_t *)(this + 21420);
    break;
    case 6:
    case 7:
    if ( v7 == 5 )
    v10 = *(uint32_t *)(this + 21452);
    else
    v10 = *(uint32_t *)(this + 21436);
    break;
    case 15:
    case 16:
    v10 = *(uint32_t *)(this + 21424);
    break;
    default:
    v10 = 0;
    break;
    if ( !v10 )
    v11 = __2_YAPAXI_Z(0x74u);
    if ( !v11 )
    goto LABEL_40;
    v10 = TeamTypeClass::Construct((int)v11);
    if ( !v10 )
    goto LABEL_40;
    if ( *(uint32_t *)(v10 + 56) && !*(uint8_t *)(v10 + 112) && v6 == 7 )
    goto LABEL_40;
    switch ( v6 )
    case 1:
    case 40:
    if ( a4 )
    *(uint32_t *)(this + 21432) = v10;
    else
    *(uint32_t *)(this + 21428) = v10;
    break;
    case 2:
    case 3:
    *(uint32_t *)(this + 21420) = v10;
    break;
    case 6:
    case 7:
    if ( v22 == 5 )
    *(uint32_t *)(this + 21452) = v10;
    else
    *(uint32_t *)(this + 21436) = v10;
    break;
    case 15:
    case 16:
    *(uint32_t *)(this + 21424) = v10;
    break;
    default:
    break;
    v13 = 0;
    if ( *(uint8_t *)(v10 + 112) )
    v14 = *(uint32_t *)(v10 + 88);
    if ( v14 )
    if ( (*(int (__thiscall **)(int))(*(uint32_t *)v14 + 132))(v14) == v9 )
    v13 = 1;
    LABEL_55:
    if ( !*(uint32_t *)(v10 + 80) || a5 || v13 )
    v16 = *(uint8_t *)(v10 + 112);
    ProductionClass::StartTimer(v10, v24);
    if ( !v16 && GameMode_Current[0] && *(uint8_t *)(this + 492) )
    v17 = (*(int (__thiscall **)(uint32_t))(**(uint32_t **)(v10 + 88) + 132))(*(uint32_t *)(v10 + 88));
    v18 = (int)(54 * ((int)dword_A8B558 * (int)g_ScenarioState / 0x3Cu))
    / (*(int (__thiscall **)(int))(*(uint32_t *)v17 + 136))(v17);
    if ( v18 >= 53 )
    v18 = 53;
    if ( v21 )
    *(uint32_t *)(v10 + 36) = v18;
    if ( HouseClass_Player == (void*375 *)this )
    Sidebar::FindProductionType(v10, a2, a3);
    return 0;
    else
    Status = HouseClass::GetStatus(a2, 0);
    Sidebar::ActivateTab((int)&MapClass_Instance, Status);
    return 0;
    if ( (unsigned __int8)FactoryClass::DemandProduction(v9, (void*375 *)this, a5) )
    goto LABEL_55;
    Debug::Log();
    if ( *(uint32_t *)(v10 + 80) || *(uint32_t *)(v10 + 88) )
    return 3;
    Debug::Log();
    Debug::Log();
    Debug::Log();
    v19 = *(uint32_t *)(v10 + 88);
    if ( v19 )
    (*(void (__thiscall **)(int))(*(uint32_t *)v19 + 44))(v19);
    Debug::Log();
    v20 = *(uint32_t *)(v10 + 88);
    if ( v20 )
    (*(void (__thiscall **)(int))(*(uint32_t *)v20 + 64))(v20);
    Debug::Log();
    Debug::Log();
    (*(void (__thiscall **)(int, int))(*(uint32_t *)v10 + 32))(v10, 1);
    switch ( v23 )
    case 0:
    case 39:
    if ( a4 )
    *(uint32_t *)(this + 21432) = 0;
    else
    *(uint32_t *)(this + 21428) = 0;
    result = 3;
    break;
    case 1:
    case 2:
    *(uint32_t *)(this + 21420) = 0;
    return 3;
    case 5:
    case 6:
    if ( v22 == 5 )
    *(uint32_t *)(this + 21452) = 0;
    else
    *(uint32_t *)(this + 21436) = 0;
    result = 3;
    break;
    case 14:
    case 15:
    *(uint32_t *)(this + 21424) = 0;
    result = 3;
    break;
    default:
    return 3;
    return result;
}

// 0x00637AB0
int  SidebarClass::ResetProductionState(void *this)
{
    int result; // eax
    int v2; // ebx
    int v3; // ecx
    void *v4; // esi
    int Type; // eax
    int v6; // esi
    int v7; // eax
    int v8; // eax
    uint32_t *v9; // ecx
    int v10; // edx
    int i; // eax
    int v12; // ebp
    int j; // edi
    uint32_t *v14; // ecx
    int v15; // esi
    char v16; // al
    uint8_t *WaypointCoords; // eax
    char v18; // al
    int v19; // eax
    int v20; // ebp
    int v21; // eax
    uint8_t *v22; // eax
    bool v23; // [esp+7h] [ebp-101h]
    uint8_t *v24; // [esp+8h] [ebp-100h] BYREF
    int v25; // [esp+Ch] [ebp-FCh]
    int v26; // [esp+10h] [ebp-F8h]
    void *v27; // [esp+14h] [ebp-F4h]
    int v28; // [esp+18h] [ebp-F0h]
    char v29[8]; // [esp+20h] [ebp-E8h] BYREF
    _WORD v30[56]; // [esp+28h] [ebp-E0h] BYREF
    char v31[112]; // [esp+98h] [ebp-70h] BYREF
    v27 = this;
    result = 0;
    v25 = 0;
    v26 = g_SidebarState;
    while ( v25 < v26 )
    v2 = *((uint32_t *)g_TechnoClass_Count + result);
    v3 = *(uint32_t *)(v2 + 540);
    v4 = *(void **)(v3 + 48);
    if ( (unsigned __int8)House::IsHumanPlayer((void*375 *)v3) && HouseClass_Player )
    v4 = (void *)*((uint32_t *)HouseClass_Player + 12);
    if ( v27 != v4 )
    goto LABEL_46;
    Type = BuildingClass::GetType((uint32_t *)v2);
    v6 = Type;
    if ( !Type )
    goto LABEL_46;
    v23 = 0;
    if ( *(int *)(Type + 20) > 0 )
    v7 = *(uint32_t *)(Type + 140);
    if ( v7 == -1 || v7 > 0 )
    v23 = 1;
    if ( *(uint8_t *)(v6 + 152) )
    v8 = *(uint32_t *)(v6 + 148);
    if ( v8 != -1 )
    v9 = *(uint32_t **)(*(uint32_t *)(v6 + 8) + 4 * v8);
    if ( v9 )
    v9[45] = -1;
    v10 = v9[12];
    for ( i = 0; i < v10; *(uint32_t *)(*(uint32_t *)(v9[9] + 4 * i - 4) + 116) = -1 )
    ++i;
    v9[43] = -1;
    *(uint8_t *)(v6 + 152) = 0;
    v12 = *(uint32_t *)(v6 + 20);
    for ( j = *(uint32_t *)(v6 + 140) != -1 ? *(uint32_t *)(v6 + 140) : 0; j < v12; ++j )
    v14 = *(uint32_t **)(*(uint32_t *)(v6 + 8) + 4 * j);
    if ( v14 )
    TeamClass::Reset(v14, 1);
    *(uint32_t *)(v6 + 140) = -1;
    if ( !v2 )
    goto LABEL_32;
    v15 = (*(int (__thiscall **)(int))(*(uint32_t *)v2 + 388))(v2);
    if ( v15 == 5 )
    v16 = 1;
    goto LABEL_33;
    if ( ((WaypointCoords = ScriptAction::GetWaypointCoords(v29, *(uint32_t **)(v2 + 692)),
    v28 = *(uint32_t *)WaypointCoords,
    v18 = WaypointCoords[4],
    v15 == 1)
    || v15 == 11)
    && (v18 == 11 || v15 == 11 && !v18) )
    v16 = 1;
    else
    LABEL_32:
    v16 = 0;
    LABEL_33:
    if ( !v23 )
    if ( v16 )
    v19 = BuildingClass::GetType((uint32_t *)v2);
    v20 = v19;
    if ( v19 )
    if ( *(int *)(v19 + 20) > 0 )
    v21 = *(uint32_t *)(v19 + 140);
    if ( (v21 == -1 || v21 > 0) && !*(uint8_t *)(v20 + 28) )
    (*(void (__thiscall **)(int, int, int))(*(uint32_t *)v2 + 488))(v2, 28, 1);
    qmemcpy(v30, (const void *)FactoryClass::CompleteCurrentItem(v20, (int)v31), 0x6Fu);
    v22 = __2_YAPAXI_Z(0x6Fu);
    if ( v22 )
    *v22 = 0;
    else
    v22 = 0;
    v24 = v22;
    qmemcpy(v22, v30, 0x6Cu);
    *((_WORD *)v22 + 54) = v30[54];
    v22[110] = v30[55];
    if ( *v24 == 4 )
    v24[29] = 2;
    SidebarClass::addToList(&v24);
    *(uint8_t *)(v20 + 28) = 1;
    LABEL_46:
    result = ++v25;
    return result;
}

int  SidebarClass::ReadButtonList(RulesClass *this)
{
    char *v1; // edi
    int result; // eax
    int i; // esi
    int v4; // edi
    int v5; // esi
    char *j; // eax
    int v7; // eax
    char String[512]; // [esp+8h] [ebp-200h] BYREF
    unsigned __int8 ***v9; // [esp+20Ch] [ebp+4h]
    char v10; // [esp+210h] [ebp+8h]
    v1 = aMultiplayeradv;
    if ( !v10 )
    v1 = aAdvancedcomman;
    result = INIClass::BinarySearchSection((int)v9, (unsigned __int8 *)v1);
    if ( result )
    for ( i = 0; i < 25; ++i )
    globalHelper_0CFD20(i, dword_8427CC);
    result = INIClass::GetString(
    v9,
    (unsigned __int8 *)v1,
    (unsigned __int8 *)aButtonlist,
    &g_INI_DefaultBuffer,
    String,
    512);
    if ( result )
    v4 = 0;
    v5 = 0;
    for ( j = strtok(String, Delimiter); j; j = strtok(0, Delimiter) )
    v7 = SidebarClass::findEntryIndexByName(j);
    if ( v7 != dword_8427CC )
    globalHelper_0CFD20(v7, v5);
    ++v4;
    ++v5;
    result = globalHelper_0CFDB0(v4);
    LOBYTE(result) = 1;
    else
    LOBYTE(result) = 0;
    return result;
}

int SidebarClass::InitPositions()
{
    if ( *((uint32_t *)ScenarioClass_Instance + 3374) )
    dword_B0B4E0 = g_DSurface_SidebarBounds + 7;
    dword_B0B4EC = g_DSurface_SidebarBounds + 39;
    dword_B0B4E4 = 52;
    dword_B0B4F0 = 32;
    g_SidebarBounds = g_DSurface_SidebarBounds + 69;
    dword_B0B4FC = 64;
    else
    dword_B0B4E4 = 64;
    dword_B0B4F0 = 29;
    dword_B0B4FC = 63;
    dword_B0B4E0 = g_DSurface_SidebarBounds + 8;
    dword_B0B4EC = g_DSurface_SidebarBounds + 39;
    g_SidebarBounds = g_DSurface_SidebarBounds + 69;
    return g_DSurface_SidebarBounds + 69;
}

char  SidebarClass::Init(uint32_t *this)
{
    int v2; // eax
    int v3; // ebp
    uint32_t *v4; // esi
    int v5; // eax
    int v6; // edx
    int v7; // edx
    int v8; // eax
    int v9; // ecx
    int v10; // ebp
    uint32_t *v11; // esi
    int v12; // eax
    int v13; // ecx
    HouseClass *v14; // edx
    int i; // ebx
    int v16; // esi
    int v17; // eax
    uint32_t *v18; // ecx
    int v19; // edx
    uint32_t *v20; // ecx
    int v21; // edx
    int v22; // eax
    int v23; // eax
    uint32_t *v24; // eax
    int v25; // ecx
    int v26; // ebx
    int v27; // ecx
    HouseClass *v28; // esi
    int v30; // [esp+Ch] [ebp-4h]
    SidebarClass::CreateScrollButtons();
    SidebarClass::InitPositions(this);
    SidebarClass::CalcBounds(0);
    LOBYTE(v2) = ArmageddonMode;
    if ( !ArmageddonMode )
    dword_B0B3B0 = dword_B0B4E0;
    byte_B0B3BD = 1;
    dword_B0B3C4 = 101;
    dword_B0B3AC = dword_B0B4DC;
    dword_B0B3E4 = -480;
    dword_B0B3E8 = 0;
    byte_B0B3EC = 1;
    dword_B0B3F0 = g_SidebarConfig;
    byte_B0B3CD = 0;
    dword_B0B3D0 = 1;
    byte_B0B3E0 = 1;
    SHA1::Reset((int)dword_B0B3A0);
    dword_B07E04 = dword_B0B3AC + dword_B0B4E4;
    byte_B07E15 = 1;
    dword_B07E1C = 102;
    dword_B07E08 = dword_B0B3B0;
    dword_B07E3C = -480;
    dword_B07E40 = 0;
    byte_B07E44 = 1;
    dword_B07E48 = g_SidebarConfig;
    byte_B07E25 = 0;
    dword_B07E28 = 1;
    byte_B07E38 = 1;
    SHA1::Reset((int)dword_B07DF8);
    v3 = 0;
    v4 = &unk_B07C6C;
    do
    v5 = dword_B0B4E8;
    v6 = v3 * dword_B0B4F0;
    *((uint8_t *)v4 - 7) = 1;
    v7 = v5 + v6;
    v8 = dword_B0B4EC;
    *v4 = v3 + 203;
    v9 = g_SidebarConfig;
    *(v4 - 6) = v7;
    *(v4 - 5) = v8;
    v4[8] = -480;
    v4[9] = 0;
    *((uint8_t *)v4 + 40) = 1;
    v4[11] = v9;
    *((uint8_t *)v4 + 9) = 0;
    v4[3] = 2;
    *((uint8_t *)v4 + 28) = 1;
    DialogControl::Show((uint8_t *)v4 - 36);
    SHA1::Reset((int)(v4 - 9));
    v4 += 24;
    ++v3;
    while ( (int)v4 < (int)((uint32_t *)&dbl_B07DE8 + 1) );
    byte_B0B345 = 1;
    dword_B0B34C = 201;
    byte_B0B374 = 1;
    dword_B0B378 = g_SidebarConfig;
    dword_B0B348 = 85;
    SHA1::Reset((int)byte_B0B328);
    byte_B0B425 = 1;
    dword_B0B42C = 200;
    byte_B0B454 = 1;
    dword_B0B458 = g_SidebarConfig;
    dword_B0B428 = 85;
    SHA1::Reset((int)g_SidebarFlag);
    v10 = 0;
    v11 = this + 1370;
    do
    *(v11 - 1) = dword_B0B4F4;
    *v11 = g_SidebarBounds;
    v12 = dword_B0B504;
    v11[1] = 0;
    v11[2] = 0;
    v11[3] = 60;
    v11[4] = v12;
    SidebarClass::InitCameoGrid(v10++);
    v11 += 997;
    while ( v10 < 4 );
    (*(void (__thiscall **)(uint32_t *))(*this + 136))(this);
    SidebarClass::CalcBounds(1);
    if ( *((uint8_t *)this + 21413) )
    (*(void (__thiscall **)(uint32_t *, uint32_t))(*this + 216))(this, 0);
    (*(void (__thiscall **)(uint32_t *, int))(*this + 216))(this, 1);
    *(this + 5444) = 0;
    LOBYTE(v2) = GameMode_Current[0];
    if ( GameMode_Current[0] == 3 || GameMode_Current[0] == 4 )
    v13 = 0;
    if ( HouseClass_Count <= 0 )
    LABEL_17:
    v2 = 0;
    else
    v14 = HouseClass_Array;
    while ( 1 )
    v2 = *(uint32_t *)v14->gap0;
    if ( *(uint32_t *)v14->gap0 )
    if ( *(uint8_t *)(*(uint32_t *)(v2 + 52) + 422) != 1 && v2 != HouseClass_Observer && *(uint8_t *)(v2 + 492) )
    break;
    ++v13;
    v14 = (HouseClass *)((char *)v14 + 4);
    if ( v13 >= HouseClass_Count )
    goto LABEL_17;
    *(this + 5355) = v2;
    for ( i = 0; i < 8; i = *(this + 5444) )
    v16 = *(this + i + 5355);
    if ( !v16 )
    break;
    v17 = 0;
    v18 = (uint32_t *)(v16 + 21476);
    v19 = 20;
    do
    v17 += *v18++;
    --v19;
    while ( v19 );
    v20 = (uint32_t *)(v16 + 21560);
    v21 = 20;
    do
    v17 += *v20++;
    --v21;
    while ( v21 );
    *(this + i + 5363) = v17;
    *(this + *(this + 5444) + 5371) = *(uint32_t *)(v16 + 744)
    + *(uint32_t *)(v16 + 752)
    + *(uint32_t *)(v16 + 756)
    + *(uint32_t *)(v16 + 760);
    v22 = (*(int (__stdcall **)(int))(*(uint32_t *)(v16 + 36) + 24))(v16 + 36);
    if ( v22 < 0 )
    v22 = 0;
    *(this + *(this + 5444) + 5379) = v22;
    if ( v16 == HouseClass_Observer )
    v23 = FindBuildingAnimByName(g_INI_Key_LightGrey, 1);
    else if ( *(uint8_t *)(v16 + 501) )
    v23 = FindBuildingAnimByName(g_INI_Key_Grey, 1);
    else
    v23 = *((uint32_t *)BuildingTypeClass_AnimTable + *(uint32_t *)(v16 + 90196));
    *(this + *(this + 5444) + 5387) = v23;
    *(this + *(this + 5444) + 5395) = 0;
    *(this + *(this + 5444) + 5403) = 0;
    *(this + *(this + 5444) + 5411) = 0;
    *(this + *(this + 5444) + 5419) = 0;
    *(this + *(this + 5444) + 5427) = 0;
    *(this + *(this + 5444) + 5435) = 0;
    if ( GameMode_Current[0] == 4 )
    v24 = (uint32_t *)SidebarClass::FindProductionData(v16 + 90154);
    if ( v24 )
    *(this + *(this + 5444) + 5395) = v24[7];
    *(this + *(this + 5444) + 5403) = v24[4];
    *(this + *(this + 5444) + 5411) = v24[2];
    *(this + *(this + 5444) + 5419) = v24[3];
    *(this + *(this + 5444) + 5427) = v24[8];
    *(this + *(this + 5444) + 5435) = v24[12];
    __3_YAXPAX_Z(v24);
    v30 = 0;
    v25 = *(this + 5444) + 1;
    *(this + 5444) = v25;
    v26 = v25;
    v27 = 0;
    if ( HouseClass_Count > 0 )
    v28 = HouseClass_Array;
    do
    v2 = *(uint32_t *)v28->gap0;
    if ( *(uint32_t *)v28->gap0
    && *(uint8_t *)(*(uint32_t *)(v2 + 52) + 422) != 1
    && v2 != HouseClass_Observer
    && *(uint8_t *)(v2 + 492) )
    if ( v30 == v26 )
    goto LABEL_44;
    ++v30;
    ++v27;
    v28 = (HouseClass *)((char *)v28 + 4);
    while ( v27 < HouseClass_Count );
    v2 = 0;
    LABEL_44:
    *(this + v26 + 5355) = v2;
    *((uint8_t *)this + 21772) = 0;
    return v2;
}

int  SidebarClass::Redraw(void *this, char a2)
{
    int v2; // edi
    int v3; // esi
    int v4; // esi
    void *v5; // ebp
    int i; // edi
    int v7; // eax
    int *v8; // esi
    char v9; // al
    char v10; // dl
    uint8_t *v11; // eax
    char v12; // al
    unsigned int v14; // [esp-34h] [ebp-64h]
    unsigned int v15; // [esp-34h] [ebp-64h]
    unsigned int v16; // [esp-34h] [ebp-64h]
    unsigned __int8 v17; // [esp+Ch] [ebp-24h]
    int v19; // [esp+14h] [ebp-1Ch]
    int v20; // [esp+18h] [ebp-18h] BYREF
    int v21; // [esp+1Ch] [ebp-14h]
    int v22[4]; // [esp+20h] [ebp-10h] BYREF
    char v23; // [esp+34h] [ebp+4h]
    v2 = (int)this;
    dword_8809F4 = dword_B07DC8;
    dword_8809F8 = dword_B07DCC;
    dword_8809FC = dword_B07DD0;
    v19 = DSurface_Hidden_2;
    dword_880A00 = dword_B07DD4;
    DSurface_Hidden_2 = DSurface_Sidebar;
    v17 = 0;
    v3 = (*(int (__thiscall **)(int))(*(uint32_t *)DSurface_Sidebar + 128))(DSurface_Sidebar);
    v22[2] = (*(int (__thiscall **)(int))(*(uint32_t *)DSurface_Sidebar + 124))(DSurface_Sidebar);
    v22[0] = 0;
    v22[1] = 0;
    v22[3] = v3;
    if ( a2 || *(uint8_t *)(v2 + 21414) || (v23 = 0, *(uint8_t *)(v2 + 21415)) )
    v23 = 1;
    if ( *(uint8_t *)(v2 + 21413) && v23 && !ArmageddonMode )
    if ( *(uint8_t *)(v2 + 21415) )
    v21 = g_DSurface_SidebarBounds;
    v17 = 1;
    v20 = 0;
    DrawToSurfaceSHP(
    DSurface_Sidebar,
    g_SidebarConfig,
    (int)dword_B0B468,
    0,
    &v20,
    v22,
    1024,
    0,
    0,
    0,
    1000,
    0,
    0,
    0,
    0,
    0);
    v4 = g_SidebarBounds;
    v5 = dword_B0B46C;
    for ( i = 0; ; ++i )
    v7 = 26;
    if ( *((uint32_t *)ScenarioClass_Instance + 3374) )
    v7 = 18;
    if ( i >= (g_DSurface_ViewBounds - g_SidebarBounds - v7 + g_DSurface_SidebarBounds - 7) / 50 )
    break;
    v20 = 0;
    v21 = v4;
    DrawToSurfaceSHP(DSurface_Sidebar, g_SidebarConfig, (int)v5, 0, &v20, v22, 1024, 0, 0, 0, 1000, 0, 0, 0, 0, 0);
    v5 = dword_B0B46C;
    v4 += *((__int16 *)dword_B0B46C + 2);
    v20 = 0;
    v21 = v4;
    DrawToSurfaceSHP(
    DSurface_Sidebar,
    g_SidebarConfig,
    (int)dword_B0B470,
    0,
    &v20,
    v22,
    1024,
    0,
    0,
    0,
    1000,
    0,
    0,
    0,
    0,
    0);
    v21 = v4 + *((__int16 *)dword_B0B470 + 2);
    v20 = 0;
    DrawToSurfaceSHP(
    DSurface_Sidebar,
    g_SidebarConfig,
    (int)dword_B0B474,
    0,
    &v20,
    v22,
    1024,
    0,
    0,
    0,
    1000,
    0,
    0,
    0,
    0,
    0);
    v2 = (int)this;
    ShapeButton::Draw((int)dword_B07DF8, v17);
    ShapeButton::Draw((int)dword_B0B3A0, v17);
    v8 = (int *)&unk_B07C48;
    do
    ShapeButton::Draw((int)v8, 1);
    v8 += 24;
    while ( (int)v8 < (int)&dword_B07DC8 );
    ShapeButton::Draw((int)byte_B0B328, v17);
    ShapeButton::Draw((int)g_SidebarFlag, v17);
    if ( *(uint32_t *)(v2 + 21400) )
    v21 = g_SidebarBounds;
    v14 = *(uint32_t *)(v2 + 21396);
    v20 = 0;
    DrawToSurfaceSHP(
    DSurface_Sidebar,
    g_SidebarConfig,
    (int)dword_B0B478,
    v14,
    &v20,
    v22,
    1024,
    0,
    0,
    0,
    1000,
    0,
    0,
    0,
    0,
    0);
    v21 = g_SidebarBounds;
    v15 = *(uint32_t *)(v2 + 21396);
    v20 = 0;
    DrawToSurfaceSHP(
    DSurface_Sidebar,
    g_SidebarConfig,
    (int)dword_B0B47C,
    v15,
    &v20,
    v22,
    1024,
    0,
    0,
    0,
    1000,
    0,
    0,
    0,
    0,
    0);
    v21 = g_SidebarBounds;
    v16 = *(uint32_t *)(v2 + 21396);
    v20 = 0;
    DrawToSurfaceSHP(
    DSurface_Sidebar,
    g_SidebarConfig,
    (int)dword_B0B480,
    v16,
    &v20,
    v22,
    1024,
    0,
    0,
    0,
    1000,
    0,
    0,
    0,
    0,
    0);
    g_TooltipActive = 1;
    Sidebar::UpdateProductionDisplay(v2 + 3988 * *(uint32_t *)(v2 + 21404) + 5444, v2, *(uint8_t *)(v2 + 21415));
    v9 = v23 || v17;
    Sidebar::Render(v2, v9);
    if ( byte_B07E4C )
    v10 = 1;
    byte_B07E4C = 0;
    g_TooltipActive = 1;
    else
    v10 = g_TooltipActive;
    if ( byte_B0B3F4 )
    v10 = 1;
    byte_B0B3F4 = 0;
    g_TooltipActive = 1;
    v11 = &unk_B07C9C;
    do
    if ( *v11 )
    v10 = 1;
    *v11 = 0;
    v11 += 96;
    while ( (int)v11 < (int)&dword_B07E1C );
    g_TooltipActive = v10;
    if ( byte_B0B37C )
    v10 = 1;
    byte_B0B37C = 0;
    g_TooltipActive = 1;
    if ( byte_B0B45C )
    v10 = 1;
    byte_B0B45C = 0;
    g_TooltipActive = 1;
    if ( g_TacticalRender )
    (*(void (__thiscall **)(int, int))(*(uint32_t *)g_TacticalRender + 12))(g_TacticalRender, 1);
    v10 = g_TooltipActive;
    v12 = v10 || *(uint8_t *)(v2 + 21415);
    Sidebar::FlushSidebarTooltip(v12);
    *(uint8_t *)(v2 + 21414) = 0;
    *(uint8_t *)(v2 + 21415) = 0;
    DSurface_Hidden_2 = v19;
    return v19;
}

void  SidebarClass::UpdateStrips(char *this, int *a2, uint32_t *a3)
{
    int v4; // ecx
    char *v5; // edi
    int v6; // ebx
    int v7; // eax
    int v8; // edx
    int v9; // eax
    char v10; // cl
    char v11; // al
    int v12; // eax
    int v13; // ebp
    int v14; // eax
    int v15; // edi
    char *v16; // ebx
    char *v17; // ebp
    int v18; // eax
    int v19; // edi
    int v20; // ebx
    char v21; // bl
    int *v22; // edi
    int v23; // ecx
    int v24; // eax
    int v25; // eax
    int v26; // edx
    char *v27; // eax
    int v28; // edx
    char *v29; // edi
    int v30; // eax
    int v31; // edx
    int v32; // [esp+14h] [ebp-10h]
    int v33; // [esp+18h] [ebp-Ch]
    uint32_t v34[2]; // [esp+1Ch] [ebp-8h] BYREF
    v4 = a3[1];
    v34[0] = *a3 - DSurface_SidebarBounds;
    v34[1] = v4;
    if ( !ArmageddonMode )
    (*(void (__thiscall **)(char *, int))(*(uint32_t *)this + 216))(this, 1);
    v5 = this + 5444;
    v6 = 4;
    do
    SidebarClass::UpdateCameos(v5, (int)a2, (int)v34);
    v5 += 3988;
    --v6;
    while ( v6 );
    if ( *(this + 21413) )
    v7 = *((uint32_t *)this + 5350);
    if ( v7 == 1 )
    v8 = *((uint32_t *)this + 5349) + 1;
    *((uint32_t *)this + 5349) = v8;
    if ( v8 <= *((__int16 *)dword_B0B478 + 3) )
    goto LABEL_11;
    else
    if ( v7 != -1 )
    goto LABEL_11;
    v9 = *((uint32_t *)this + 5349) - 1;
    *((uint32_t *)this + 5349) = v9;
    if ( v9 >= 0 )
    goto LABEL_11;
    *((uint32_t *)this + 5350) = 0;
    *((uint32_t *)this + 5349) = 0;
    LABEL_11:
    v10 = *(this + 21780);
    *(this + 21780) = *((uint32_t *)HouseClass_Player + 188) > 0;
    if ( v10 != *(this + 21780) )
    (*(void (__thiscall **)(char *, uint32_t))(*(uint32_t *)this + 56))(this, 0);
    v11 = *(this + 21780);
    *(this + 21414) = 1;
    if ( !v11 )
    (*(void (__thiscall **)(char *, uint32_t, uint32_t))(*(uint32_t *)this + 72))(this, 0, 0);
    v12 = *a2;
    if ( *a2 == 32870 )
    PlayVocClass(RulesClass_Instance->BuildingAbandonedSound, 0x2000, 1.0, 0);
    BuildingClass::TogglePower(this, -1);
    goto LABEL_32;
    if ( v12 == 32869 )
    PlayVocClass(RulesClass_Instance->BuildingAbandonedSound, 0x2000, 1.0, 0);
    BuildingClass::TogglePower2(this, -1);
    goto LABEL_32;
    if ( v12 >= 32971 && v12 < 32975 )
    v13 = v12 - 32971;
    v14 = *((uint32_t *)this + 5351);
    if ( v13 != v14 )
    GadgetClass::Hide((uint8_t *)&unk_B07C48 + 96 * v14);
    v15 = 0;
    v16 = this + 3988 * *((uint32_t *)this + 5351) + 5444;
    *(this + 3988 * *((uint32_t *)this + 5351) + 5472) = 0;
    do
    Tactical::SelectObject(&MapClass_Instance, 56 * (v15 + 60 * *((uint32_t *)v16 + 14)) + 11566720);
    ++v15;
    while ( v15 < 60 );
    *((uint32_t *)this + 5351) = v13;
    GadgetClass::Show((uint8_t *)&unk_B07C48 + 96 * v13);
    v17 = this + 3988 * *((uint32_t *)this + 5351) + 5444;
    *(this + 3988 * *((uint32_t *)this + 5351) + 5472) = 1;
    v18 = 26;
    if ( *((uint32_t *)ScenarioClass_Instance + 3374) )
    v18 = 18;
    v19 = 0;
    v20 = 2 * ((g_DSurface_ViewBounds - v18 - g_SidebarBounds + g_DSurface_SidebarBounds - 7) / 50);
    if ( v20 > 0 )
    do
    Hash::Reset((uint32_t *)(56 * (v19 + 60 * *((uint32_t *)v17 + 14)) + 11566720));
    Hash::InsertOrdered(&MapClass_Instance, 56 * (v19 + 60 * *((uint32_t *)v17 + 14)) + 11566720);
    ++v19;
    while ( v19 < v20 );
    g_CameoRenderFlag = 1;
    Tactical::UpdateUIVisibility(this);
    *(this + 21415) = 1;
    goto LABEL_31;
    v23 = dword_B0B34C;
    BYTE1(v12) &= ~0x40u;
    BYTE1(v23) = BYTE1(dword_B0B34C) | 0x80;
    if ( v12 == v23 )
    byte_B0B354 = 0;
    v33 = *((uint32_t *)ScenarioClass_Instance + 3374);
    v24 = 26;
    if ( v33 )
    v24 = 18;
    v32 = (g_DSurface_ViewBounds - v24 - g_SidebarBounds + g_DSurface_SidebarBounds - 7) / 50;
    if ( HouseClass_Player == (void*375 *)HouseClass_Observer )
    v32 = 1;
    v25 = 26;
    if ( v33 )
    v25 = 18;
    v26 = (g_DSurface_ViewBounds - v25 - g_SidebarBounds + g_DSurface_SidebarBounds - 7) / 50;
    if ( HouseClass_Player == (void*375 *)HouseClass_Observer )
    v27 = this + 3988 * *((uint32_t *)this + 5351) + 5444;
    if ( *((uint32_t *)this + 997 * *((uint32_t *)this + 5351) + 1378) + v26 / 2 < dword_884CF8 )
    goto LABEL_56;
    else
    v27 = this + 3988 * *((uint32_t *)this + 5351) + 5444;
    if ( 2 * (v26 + *((uint32_t *)v27 + 17)) < *((uint32_t *)v27 + 21) )
    LABEL_56:
    *((uint32_t *)v27 + 18) += v32;
    PlayVocClass(RulesClass_Instance->CheerSound, 0x2000, 1.0, 0);
    goto LABEL_32;
    else
    v28 = dword_B0B42C;
    BYTE1(v28) = BYTE1(dword_B0B42C) | 0x80;
    if ( v12 != v28 )
    goto LABEL_32;
    byte_B0B434 = 0;
    v30 = 26;
    if ( *((uint32_t *)ScenarioClass_Instance + 3374) )
    v30 = 18;
    v31 = (g_DSurface_ViewBounds - v30 - g_SidebarBounds + g_DSurface_SidebarBounds - 7) / 50;
    if ( HouseClass_Player == (void*375 *)HouseClass_Observer )
    v31 = 1;
    if ( *((uint32_t *)this + 997 * *((uint32_t *)this + 5351) + 1378) )
    v29 = this + 3988 * *((uint32_t *)this + 5351) + 5444;
    *((uint32_t *)v29 + 18) -= v31;
    LABEL_31:
    PlayVocClass(RulesClass_Instance->CheerSound, 0x2000, 1.0, 0);
    goto LABEL_32;
    PlayVocClass(RulesClass_Instance->Scorches1[3], 0x2000, 1.0, 0);
    LABEL_32:
    v21 = 0;
    v22 = (int *)&unk_B07C48;
    do
    if ( SidebarClass::updateFlashTimer((int)v22) )
    v21 = 1;
    v22 += 24;
    while ( (int)v22 < (int)&dword_B07DC8 );
    if ( v21 )
    *(this + 21414) = 1;
    g_TooltipActive = 1;
    g_CameoRenderFlag = 1;
    (*(void (__thiscall **)(char *, uint32_t))(*(uint32_t *)this + 56))(this, 0);
    if ( !*(this + 4529) && byte_B07E25 )
    GadgetClass::Hide(dword_B07DF8);
    if ( !*(this + 4528) && byte_B0B3CD )
    GadgetClass::Hide(dword_B0B3A0);
    PowerClass::updatePowerBarAnimation((PowerClass *)this);
}

char  SidebarClass::UpdateCameos(char *this, int a2, int a3)
{
    int v4; // edi
    int v5; // eax
    int v6; // ecx
    int v7; // eax
    int v8; // edx
    int v9; // esi
    int v10; // eax
    int v11; // eax
    int v12; // eax
    int v13; // edx
    uint32_t *v14; // esi
    int v15; // ecx
    int v16; // eax
    int v17; // ebp
    uint32_t *v18; // edi
    uint32_t *v19; // esi
    int Type; // eax
    uint32_t *v21; // ebp
    uint32_t *v22; // esi
    int v23; // esi
    int v24; // eax
    int v25; // eax
    const void *v26; // eax
    char *v27; // esi
    int v28; // edi
    int *v29; // esi
    int v30; // ecx
    wchar_t *v31; // ecx
    int v32; // eax
    int v33; // ecx
    int *v34; // edi
    int v35; // esi
    uint32_t *v36; // eax
    int v37; // eax
    int *v38; // ecx
    int v39; // edx
    int v40; // ebx
    int v41; // edx
    uint32_t *v42; // ecx
    int v43; // eax
    int v44; // eax
    int v45; // eax
    int *v46; // ecx
    int v47; // edx
    int v48; // ebp
    int *v49; // ecx
    int v50; // edx
    int v51; // ebx
    int v52; // eax
    int v53; // eax
    char result; // al
    int v55; // [esp-10h] [ebp-A8h]
    int v56; // [esp-8h] [ebp-A0h]
    char v57; // [esp+13h] [ebp-85h]
    int v58; // [esp+14h] [ebp-84h]
    int v59; // [esp+14h] [ebp-84h]
    int v61; // [esp+20h] [ebp-78h]
    v57 = 0;
    if ( *(this + 63) )
    goto LABEL_115;
    v4 = *((uint32_t *)this + 18);
    if ( v4 )
    v5 = 26;
    if ( *((uint32_t *)ScenarioClass_Instance + 3374) )
    v5 = 18;
    v6 = *((uint32_t *)this + 21);
    v7 = (g_DSurface_ViewBounds - v5 - g_SidebarBounds + g_DSurface_SidebarBounds - 7) / 50;
    v8 = 2;
    v9 = 2 * v7;
    if ( HouseClass_Player == (void*375 *)HouseClass_Observer )
    v6 = dword_884CF8;
    v8 = 1;
    v7 /= 2;
    v9 = v7;
    if ( v6 > v9 )
    if ( v4 >= 0 )
    if ( v8 * (v7 + *((uint32_t *)this + 17)) < v6 )
    *((uint32_t *)this + 18) = v4 - 1;
    *((uint32_t *)this + 19) = dword_B0B500;
    *(this + 62) = 1;
    *(this + 63) = 1;
    else
    *((uint32_t *)this + 18) = 0;
    else
    v10 = *((uint32_t *)this + 17);
    if ( v10 )
    *((uint32_t *)this + 18) = v4 + 1;
    *(this + 62) = 0;
    *(this + 63) = 1;
    *((uint32_t *)this + 17) = v10 - 1;
    *((uint32_t *)this + 19) = 0;
    else
    *((uint32_t *)this + 18) = 0;
    else
    *((uint32_t *)this + 18) = 0;
    if ( *(this + 63) )
    LABEL_115:
    if ( *(this + 62) )
    v11 = *((uint32_t *)this + 19) - dword_B0B514;
    *((uint32_t *)this + 19) = v11;
    if ( v11 <= 0 )
    v12 = *((uint32_t *)this + 17);
    *(this + 63) = 0;
    *((uint32_t *)this + 19) = 0;
    *((uint32_t *)this + 17) = v12 + 1;
    else
    v13 = dword_B0B514 + *((uint32_t *)this + 19);
    *((uint32_t *)this + 19) = v13;
    if ( v13 >= dword_B0B500 )
    *(this + 63) = 0;
    *((uint32_t *)this + 19) = 0;
    v57 = 1;
    if ( *((uint32_t *)this + 16) != -1 )
    v14 = this + 8;
    if ( Locomotor::GetSpeed((int *)this + 2) || (v15 = *((uint32_t *)this + 5)) == 0 )
    *(this + 4) = 0;
    else
    v16 = *((uint32_t *)this + 6) + *(uint32_t *)this;
    *(this + 4) = 1;
    *(uint32_t *)this = v16;
    v57 = 1;
    *v14 = CurrentFrame;
    *((uint32_t *)this + 3) = v61;
    *((uint32_t *)this + 4) = v15;
    if ( v16 >= 7 )
    *v14 = CurrentFrame;
    *((uint32_t *)this + 3) = v61;
    *((uint32_t *)this + 4) = 0;
    *((uint32_t *)this + 5) = 0;
    *(uint32_t *)this = 0;
    *((uint32_t *)this + 16) = -1;
    if ( dword_884B88 > (int)CurrentFrame )
    v57 = 1;
    if ( *((uint32_t *)this + 14) <= 1u )
    v17 = 0;
    if ( *((int *)this + 21) > 0 )
    v18 = this + 88;
    do
    if ( v18[1] == 31 )
    if ( *(uint32_t *)(*((uint32_t *)HouseClass_Player + 150) + 4 * *v18)
    && (unsigned __int8)SuperClass::ShouldFlashTab() )
    goto LABEL_53;
    else
    v19 = (uint32_t *)v18[3];
    if ( v19 )
    if ( ObjectClass::IsCliffWall((uint32_t *)v18[3]) )
    Type = AbstractClass::GetType(v19);
    if ( Type )
    if ( (*(int (__thiscall **)(int))(*(uint32_t *)Type + 44))(Type) == 6 )
    LABEL_53:
    SidebarClass::startButtonFlash(
    10,
    10 - (int)CurrentFrame % 10,
    ((int)CurrentFrame + 10 - (int)CurrentFrame % 10) / 10 % 2 == 0);
    g_CameoRenderFlag = 1;
    MapClass::MarkForRedraw(&MapClass_Instance, 0);
    goto LABEL_44;
    ++v17;
    v18 += 13;
    while ( v17 < *((uint32_t *)this + 21) );
    SHA1::Reset((int)&unk_B07C48 + 96 * *((uint32_t *)this + 14));
    LABEL_44:
    if ( *(this + 61) )
    v58 = 0;
    if ( *((int *)this + 21) > 0 )
    v21 = this + 104;
    do
    v22 = (uint32_t *)*(v21 - 1);
    if ( v22 )
    if ( (unsigned __int8)FactoryClass::HasProgressChanged(*(v21 - 1)) )
    v57 = 1;
    if ( ObjectClass::IsCliffWall(v22) )
    v23 = AbstractClass::GetType(v22);
    if ( v23 )
    switch ( (*(int (__thiscall **)(int))(*(uint32_t *)v23 + 44))(v23) )
    case 1:
    case 2:
    case 15:
    v56 = *(unsigned __int8 *)((*(int (__thiscall **)(int))(*(uint32_t *)v23 + 132))(v23) + 3278);
    v55 = (*(int (__thiscall **)(int))(*(uint32_t *)v23 + 44))(v23);
    v25 = (*(int (__thiscall **)(int))(*(uint32_t *)v23 + 56))(v23);
    v26 = (const void *)EventClass::Init(v25, 11, v55, -1, v56, &word_B07DD8);
    if ( Networking_LastEventIndex < 128 )
    qmemcpy(&g_NetworkPacketIndex[111 * Networking_NextPacketIndex], v26, 0x6Fu);
    g_CrateSystemState[Networking_NextPacketIndex] = timeGetTime();
    Networking_NextPacketIndex = ((uint8_t)Networking_NextPacketIndex + 1) & 0x7F;
    ++Networking_LastEventIndex;
    *v21 = 0;
    break;
    case 6:
    VoxClass::FindAndPlay(aEvaConstructio, -1);
    v24 = (*(int (__thiscall **)(int))(*(uint32_t *)v23 + 44))(v23);
    SidebarClass::registerBuildingType(v24 == 6 ? v23 : 0);
    break;
    default:
    break;
    v21 += 13;
    ++v58;
    while ( v58 < *((uint32_t *)this + 21) );
    v27 = this;
    v28 = 0;
    if ( *((int *)this + 21) > 0 )
    v29 = (int *)(this + 116);
    do
    if ( *(v29 - 3) == 1 )
    v30 = *(v29 - 4);
    if ( v30 && (!*(uint32_t *)(v30 + 56) || *(uint8_t *)(v30 + 112) || (unsigned __int8)SidebarClass::draw()) )
    v31 = CurrentFrame;
    v29[3] = 0;
    *v29 = (int)v31;
    v29[1] = v61;
    v29[2] = 0;
    *(v29 - 2) = 0;
    if ( Locomotor::GetSpeed(v29) || (v32 = v29[3]) == 0 )
    *((uint8_t *)v29 - 4) = 0;
    else
    v33 = v29[4] + *(v29 - 2);
    *((uint8_t *)v29 - 4) = 1;
    *(v29 - 2) = v33;
    v57 = 1;
    *v29 = (int)CurrentFrame;
    v29[1] = v61;
    v29[2] = v32;
    if ( *(v29 - 2) >= 53 )
    *v29 = (int)CurrentFrame;
    v29[3] = 0;
    v29[1] = v61;
    v29[2] = 0;
    ++v28;
    v29 += 13;
    while ( v28 < *((uint32_t *)this + 21) );
    v27 = this;
    if ( v27[28] && HouseClass_Player == (void*375 *)HouseClass_Observer )
    v59 = 0;
    if ( dword_884CF8 > 0 )
    v34 = Value;
    do
    v35 = *(v34 - 40);
    if ( v35 )
    if ( byte_884CF4 )
    if ( GameMode_Current[0] == 4 )
    v36 = (uint32_t *)SidebarClass::FindProductionData(v35 + 90154);
    if ( v36 )
    *v34 = v36[7];
    v34[8] = v36[4];
    v34[16] = v36[2];
    v34[24] = v36[3];
    v34[32] = v36[8];
    v34[40] = v36[12];
    __3_YAXPAX_Z(v36);
    v57 = 1;
    v37 = 0;
    v38 = (int *)(v35 + 21476);
    v39 = 20;
    do
    v40 = *v38++;
    v37 += v40;
    --v39;
    while ( v39 );
    v41 = 20;
    v42 = (uint32_t *)(v35 + 21560);
    do
    v37 += *v42++;
    --v41;
    while ( v41 );
    if ( *(v34 - 32) != v37
    || *(v34 - 24) != *(uint32_t *)(v35 + 744)
    + *(uint32_t *)(v35 + 752)
    + *(uint32_t *)(v35 + 756)
    + *(uint32_t *)(v35 + 760) )
    goto LABEL_97;
    v43 = (*(int (__stdcall **)(int))(*(uint32_t *)(v35 + 36) + 24))(v35 + 36);
    if ( v43 < 0 )
    v43 = 0;
    if ( *(v34 - 16) != v43
    || (v35 != HouseClass_Observer
    ? (!*(uint8_t *)(v35 + 501)
    ? (v44 = *((uint32_t *)BuildingTypeClass_AnimTable + *(uint32_t *)(v35 + 90196)))
    : (v44 = FindBuildingAnimByName(g_INI_Key_Grey, 1)))
    : (v44 = FindBuildingAnimByName(g_INI_Key_LightGrey, 1)),
    *(v34 - 8) != v44) )
    LABEL_97:
    v57 = 1;
    v45 = 0;
    v46 = (int *)(v35 + 21476);
    v47 = 20;
    do
    v48 = *v46++;
    v45 += v48;
    --v47;
    while ( v47 );
    v49 = (int *)(v35 + 21560);
    v50 = 20;
    do
    v51 = *v49++;
    v45 += v51;
    --v50;
    while ( v50 );
    *(v34 - 32) = v45;
    *(v34 - 24) = *(uint32_t *)(v35 + 744)
    + *(uint32_t *)(v35 + 752)
    + *(uint32_t *)(v35 + 756)
    + *(uint32_t *)(v35 + 760);
    v52 = (*(int (__stdcall **)(int))(*(uint32_t *)(v35 + 36) + 24))(v35 + 36);
    if ( v52 < 0 )
    v52 = 0;
    *(v34 - 16) = v52;
    if ( v35 == HouseClass_Observer )
    v53 = FindBuildingAnimByName(g_INI_Key_LightGrey, 1);
    else if ( *(uint8_t *)(v35 + 501) )
    v53 = FindBuildingAnimByName(g_INI_Key_Grey, 1);
    else
    v53 = *((uint32_t *)BuildingTypeClass_AnimTable + *(uint32_t *)(v35 + 90196));
    *(v34 - 8) = v53;
    ++v34;
    ++v59;
    while ( v59 < dword_884CF8 );
    byte_884CF4 = 0;
    result = v57;
    if ( v57 )
    byte_884B8E = 1;
    byte_880D68[3988 * dword_884B84] = 1;
    MapClass::MarkForRedraw(&MapClass_Instance, 0);
    *(this + 60) = 1;
    MapClass::MarkForRedraw(&MapClass_Instance, 0);
    g_CameoRenderFlag = 1;
    g_TooltipActive = 1;
    return v57;
    return result;
}

// 0x006AAD00
int  SidebarClass::ProcessInput(uint32_t *this, int a2, uint32_t *a3, char a4)
{
    int v5; // eax
    int v7; // esi
    int v8; // ebx
    int v9; // ebp
    wchar_t *v10; // edx
    int v11; // edi
    int v12; // eax
    int v13; // eax
    int v14; // ebx
    const void *v15; // eax
    char *v16; // eax
    int v17; // edx
    uint32_t *v18; // eax
    char *v19; // eax
    char *v20; // eax
    uint32_t *Type; // esi
    int v22; // edi
    int v23; // eax
    char *v24; // eax
    int v25; // eax
    char *v26; // ecx
    int v27; // edi
    int v28; // eax
    char *v29; // eax
    int Member09; // eax
    int v31; // esi
    int v32; // ebp
    uint32_t *v33; // ecx
    int v34; // ebp
    wchar_t *v35; // ecx
    int v36; // eax
    wchar_t *v37; // edx
    wchar_t **v38; // esi
    int BuildLimit; // esi
    int v40; // eax
    char v41; // cl
    char *v42; // eax
    int v43; // esi
    uint8_t *v44; // esi
    wchar_t *v45; // edi
    int v46; // edx
    char *v47; // ebp
    unsigned int v48; // edi
    int v49; // edi
    int v50; // eax
    int v51; // edx
    int v52; // eax
    uint32_t *v53; // ebx
    wchar_t *v54; // eax
    int v55; // [esp-14h] [ebp-C0h]
    unsigned __int8 v56; // [esp-10h] [ebp-BCh]
    int v57; // [esp-Ch] [ebp-B8h]
    int v58; // [esp-8h] [ebp-B4h]
    int v59; // [esp-8h] [ebp-B4h]
    int v60; // [esp-4h] [ebp-B0h]
    int v61; // [esp-4h] [ebp-B0h]
    char v62; // [esp+13h] [ebp-99h]
    char ShouldDisableCameo; // [esp+13h] [ebp-99h]
    unsigned int v64; // [esp+14h] [ebp-98h]
    unsigned __int8 v65; // [esp+14h] [ebp-98h]
    wchar_t *v66; // [esp+18h] [ebp-94h] BYREF
    char v67; // [esp+1Dh] [ebp-8Fh]
    char v68; // [esp+1Eh] [ebp-8Eh]
    char v69; // [esp+1Fh] [ebp-8Dh]
    uint32_t *v70; // [esp+20h] [ebp-8Ch]
    int v71; // [esp+24h] [ebp-88h]
    int v72; // [esp+28h] [ebp-84h]
    int v73; // [esp+2Ch] [ebp-80h]
    wchar_t *v74; // [esp+34h] [ebp-78h]
    char v75[112]; // [esp+3Ch] [ebp-70h] BYREF
    v70 = this;
    v5 = *(this + 11);
    if ( !v5 )
    return 1;
    v7 = *(this + 12) + 2 * *(uint32_t *)(v5 + 68);
    v73 = v7;
    v8 = 52 * v7;
    v9 = *(uint32_t *)(52 * v7 + v5 + 92);
    v64 = *(uint32_t *)(52 * v7 + v5 + 88);
    v10 = *(wchar_t **)(52 * v7 + v5 + 100);
    v71 = *(uint32_t *)(52 * v7 + v5 + 96);
    v66 = v10;
    Mouse::SetCursor((int)&MapClass_Instance, 0, 0);
    v62 = a4 & 1;
    if ( v7 >= *(uint32_t *)(*(this + 11) + 84) )
    goto LABEL_116;
    if ( v9 != 31 )
    v11 = TechnoTypeClass::GetByTypeAndIndex(v9, v64);
    v72 = v11;
    if ( v11 )
    v12 = a2;
    if ( (a2 & 8) != 0 )
    LOBYTE(v12) = a2 & 0xF7;
    a2 = v12;
    if ( (v12 & 0x10) != 0 )
    if ( v66 )
    if ( g_RadarBlipPool && AbstractClass::IsTechnoType((void *)g_RadarBlipPool) )
    g_RadarBlipPool = 0;
    g_RadarBlipManager = 0;
    dword_880994 = -1;
    Mouse::SetBounds((int)&MapClass_Instance, 0);
    if ( !*((uint32_t *)v66 + 14) || *((uint8_t *)v66 + 112) )
    PlayVocClass(RulesClass_Instance->BuildingRepairedSound, 0x2000, 1.0, 0);
    VoxClass::FindAndPlay(aEvaCanceled, -1);
    v60 = *(unsigned __int8 *)(v11 + 3278);
    v58 = v64;
    v57 = v9;
    if ( v62 )
    v56 = 46;
    else
    v56 = 16;
    v55 = *((uint32_t *)HouseClass_Player + 12);
    goto LABEL_41;
    PlayVocClass(RulesClass_Instance->BuildingRepairedSound, 0x2000, 1.0, 0);
    VoxClass::FindAndPlay(aEvaOnhold, -1);
    v16 = EventClass::AddEventEx(
    v75,
    *((uint32_t *)HouseClass_Player + 12),
    0xFu,
    v9,
    v64,
    *(unsigned __int8 *)(v11 + 3278));
    if ( Networking_LastEventIndex < 128 )
    qmemcpy(&g_NetworkPacketIndex[111 * Networking_NextPacketIndex], v16, 0x6Fu);
    g_CrateSystemState[Networking_NextPacketIndex] = timeGetTime();
    Networking_NextPacketIndex = ((uint8_t)Networking_NextPacketIndex + 1) & 0x7F;
    ++Networking_LastEventIndex;
    byte_880D68[3988 * *(uint32_t *)(v70[11] + 56)] = 1;
    else
    v17 = (int)v70;
    v18 = (uint32_t *)(v70[11] + 4 * (v7 + 4 * (3 * v7 + 6) + 2));
    if ( *v18 == 1 )
    *v18 = 2;
    *(uint8_t *)(*(uint32_t *)(v17 + 44) + 60) = 1;
    MapClass::MarkForRedraw(&MapClass_Instance, 0);
    PlayVocClass(RulesClass_Instance->BuildingRepairedSound, 0x2000, 1.0, 0);
    VoxClass::FindAndPlay(aEvaOnhold, -1);
    v19 = EventClass::AddEventEx(
    v75,
    *((uint32_t *)HouseClass_Player + 12),
    0xFu,
    v9,
    v64,
    *(unsigned __int8 *)(v11 + 3278));
    if ( Networking_LastEventIndex < 128 )
    qmemcpy(&g_NetworkPacketIndex[111 * Networking_NextPacketIndex], v19, 0x6Fu);
    v11 = v72;
    g_CrateSystemState[Networking_NextPacketIndex] = timeGetTime();
    Networking_NextPacketIndex = ((uint8_t)Networking_NextPacketIndex + 1) & 0x7F;
    ++Networking_LastEventIndex;
    if ( HouseClass::GetBuildLimit(HouseClass_Player, v9, *(uint8_t *)(v11 + 3278), v71)
    && (unsigned __int8)FactoryClass::IsQueued(v11) )
    PlayVocClass(RulesClass_Instance->BuildingRepairedSound, 0x2000, 1.0, 0);
    if ( !v62 )
    v20 = EventClass::AddEventEx(
    v75,
    *((uint32_t *)HouseClass_Player + 12),
    0x10u,
    v9,
    v64,
    *(unsigned __int8 *)(v11 + 3278));
    if ( Networking_LastEventIndex >= 128 )
    goto LABEL_45;
    goto LABEL_44;
    v60 = *(unsigned __int8 *)(v11 + 3278);
    v58 = v64;
    v57 = v9;
    v56 = 46;
    v55 = *((uint32_t *)HouseClass_Player + 12);
    LABEL_41:
    v20 = EventClass::AddEventEx(v75, v55, v56, v57, v58, v60);
    if ( Networking_LastEventIndex >= 128 )
    goto LABEL_45;
    LABEL_44:
    qmemcpy(&g_NetworkPacketIndex[111 * Networking_NextPacketIndex], v20, 0x6Fu);
    g_CrateSystemState[Networking_NextPacketIndex] = timeGetTime();
    Networking_NextPacketIndex = ((uint8_t)Networking_NextPacketIndex + 1) & 0x7F;
    ++Networking_LastEventIndex;
    LABEL_45:
    if ( (a2 & 1) != 0 )
    if ( !v66 || *((uint32_t *)v66 + 14) && !*((uint8_t *)v66 + 112) )
    BuildLimit = HouseClass::GetBuildLimit(HouseClass_Player, v9, *(uint8_t *)(v72 + 3278), v71);
    v40 = TechnoTypeClass::GetByTypeAndIndex(*(uint32_t *)(v8 + v70[11] + 92), *(uint32_t *)(v8 + v70[11] + 88));
    if ( !v40 || (v41 = *(uint8_t *)(v40 + 3278), LOBYTE(v66) = 1, !v41) )
    LOBYTE(v66) = 0;
    ShouldDisableCameo = HouseClass::ShouldDisableCameo(v40);
    if ( BuildLimit
    && (*(uint32_t *)(BuildLimit + 56) && !*(uint8_t *)(BuildLimit + 112)
    || *(uint32_t *)(BuildLimit + 88)
    || *(int *)(BuildLimit + 80) > 0) )
    v69 = 1;
    if ( v9 == 7 )
    LABEL_85:
    VoxClass::FindAndPlay(aEvaUnabletocom, -1);
    goto LABEL_117;
    else
    v69 = 0;
    if ( v9 == 16 )
    if ( !ShouldDisableCameo )
    VoxClass::FindAndPlay(aEvaTraining, -1);
    else if ( !ShouldDisableCameo )
    VoxClass::FindAndPlay(aEvaBuilding, -1);
    v67 = SidebarClass::getTypeProductionCount(v9, *(uint8_t *)(v72 + 3278), v71);
    v68 = 0;
    if ( !ShouldDisableCameo )
    PlayVocClass(RulesClass_Instance->BuildingRepairedSound, 0x2000, 1.0, 0);
    if ( !BuildLimit && !v67 )
    SidebarClass::MarkTabForRebuild(v9, *(uint8_t *)(v72 + 3278), v71);
    v68 = 1;
    v42 = EventClass::AddEventEx(
    v75,
    *((uint32_t *)HouseClass_Player + 12),
    0xEu,
    *(uint32_t *)(v8 + v70[11] + 92),
    *(uint32_t *)(v8 + v70[11] + 88),
    (unsigned __int8)v66);
    if ( Networking_LastEventIndex < 128 )
    qmemcpy(&g_NetworkPacketIndex[111 * Networking_NextPacketIndex], v42, 0x6Fu);
    g_CrateSystemState[Networking_NextPacketIndex] = timeGetTime();
    Networking_NextPacketIndex = ((uint8_t)Networking_NextPacketIndex + 1) & 0x7F;
    ++Networking_LastEventIndex;
    if ( v68 )
    goto LABEL_120;
    if ( !v67 )
    LABEL_120:
    if ( !v69 && !ShouldDisableCameo )
    v43 = (int)v70;
    *(uint32_t *)(v70[11] + 4 * (v73 + 4 * (3 * v73 + 6) + 2)) = 1;
    *(uint8_t *)(*(uint32_t *)(v43 + 44) + 60) = 1;
    MapClass::MarkForRedraw(&MapClass_Instance, 0);
    v44 = (uint8_t *)TechnoTypeClass::GetByTypeAndIndex(v9, *(uint32_t *)(v8 + *(uint32_t *)(v43 + 44) + 88));
    if ( v44 )
    v45 = g_ScenarioState;
    v46 = *(uint32_t *)v44;
    v66 = g_ScenarioState;
    v47 = (char *)HouseClass_Player + 36;
    v48 = (int)((unsigned __int64)(1272582903LL
    * (int)v45
    * (*(int (__thiscall **)(uint8_t *, void*375 *))(v46 + 132))(
    v44,
    HouseClass_Player)) >> 32) >> 4;
    if ( (*(int (__stdcall **)(char *))(*(uint32_t *)v47 + 24))(v47) >= (int)((v48 >> 31) + v48) )
    if ( (*(int (__thiscall **)(uint8_t *, int, uint32_t, uint32_t, void*375 *))(*(uint32_t *)v44 + 148))(
    v44,
    1,
    0,
    0,
    HouseClass_Player) )
    v49 = (*(int (__thiscall **)(uint8_t *))(*(uint32_t *)v44 + 136))(v44);
    v50 = *(uint32_t *)v44;
    v73 = v49;
    if ( (*(int (__thiscall **)(uint8_t *))(v50 + 44))(v44) == 7 && v44[5489] )
    v49 = Math::RoundToInt((double)v73 * *(double *)RulesClass_Instance->Shipyard);
    if ( v49 <= (int)v66 + 15 )
    v49 = (int)v66 + 15;
    v51 = v49 / 54;
    if ( 54 * (v49 / 54) < (int)v66 + 15 )
    ++v51;
    if ( v51 >= 1 )
    if ( v51 > 255 )
    v51 = 255;
    else
    v51 = 1;
    v52 = (int)v70;
    *(uint32_t *)(v8 + v70[11] + 108) = 0;
    v53 = (uint32_t *)(v8 + *(uint32_t *)(v52 + 44) + 108);
    v54 = CurrentFrame;
    v53[5] = v51;
    v53[2] = v54;
    v53[3] = v74;
    v53[4] = v51;
    goto LABEL_117;
    if ( !ObjectClass::IsCliffWall(v66) )
    PlayVocClass(RulesClass_Instance->BuildingRepairedSound, 0x2000, 1.0, 0);
    if ( v9 == 16 )
    v26 = aEvaTraining;
    else
    v26 = aEvaBuilding;
    VoxClass::FindAndPlay(v26, -1);
    v27 = (int)v70;
    v28 = TechnoTypeClass::GetByTypeAndIndex(*(uint32_t *)(v8 + v70[11] + 92), *(uint32_t *)(v8 + v70[11] + 88));
    if ( !v28 || (v65 = 1, !*(uint8_t *)(v28 + 3278)) )
    v65 = 0;
    SidebarClass::MarkTabForRebuild(v9, *(uint8_t *)(v72 + 3278), v71);
    v29 = EventClass::AddEventEx(
    v75,
    *((uint32_t *)HouseClass_Player + 12),
    0xEu,
    *(uint32_t *)(v8 + v70[11] + 92),
    *(uint32_t *)(v8 + v70[11] + 88),
    v65);
    if ( Networking_LastEventIndex < 128 )
    qmemcpy(&g_NetworkPacketIndex[111 * Networking_NextPacketIndex], v29, 0x6Fu);
    v27 = (int)v70;
    g_CrateSystemState[Networking_NextPacketIndex] = timeGetTime();
    Networking_NextPacketIndex = ((uint8_t)Networking_NextPacketIndex + 1) & 0x7F;
    ++Networking_LastEventIndex;
    Member09 = 0;
    v31 = 4 * (v73 + 4 * (3 * v73 + 6) + 2);
    *(uint32_t *)(v31 + *(uint32_t *)(v27 + 44)) = 1;
    v32 = *(uint32_t *)(v27 + 44);
    v33 = *(uint32_t **)(v8 + v32 + 100);
    if ( v33 )
    Member09 = ObjectClass::GetMember09(v33);
    if ( *(uint32_t *)(v31 + v32) == 1 )
    v34 = *(uint32_t *)(v8 + v32 + 108);
    if ( v34 > Member09 )
    Member09 = (v34 + Member09) / 2;
    v35 = v66;
    *(uint32_t *)(v8 + *(uint32_t *)(v27 + 44) + 108) = Member09;
    v36 = FactoryClass::GetBuildTimeFrames(v35);
    v37 = CurrentFrame;
    ++v36;
    v38 = (wchar_t **)(v8 + *(uint32_t *)(v27 + 44) + 116);
    *(uint32_t *)(v8 + *(uint32_t *)(v27 + 44) + 128) = v36;
    *v38 = v37;
    v38[1] = v74;
    v38[2] = (wchar_t *)v36;
    *(uint8_t *)(*(uint32_t *)(v27 + 44) + 60) = 1;
    MapClass::MarkForRedraw(&MapClass_Instance, 0);
    g_CameoRenderFlag = 1;
    goto LABEL_117;
    Type = (uint32_t *)AbstractClass::GetType(v66);
    if ( !Type )
    if ( SidebarClass::draw2(v66) != -1 )
    g_BuildingPlacementState = 1;
    goto LABEL_117;
    PlayVocClass(RulesClass_Instance->BuildingRepairedSound, 0x2000, 1.0, 0);
    v22 = (*(int (__thiscall **)(uint32_t *, uint32_t, uint32_t))(*Type + 400))(Type, 0, 0);
    if ( !v22 )
    v61 = *(unsigned __int8 *)(v72 + 3278);
    v23 = (*(int (__thiscall **)(uint32_t *))(*Type + 56))(Type);
    v24 = EventClass::AddEventEx(v75, v23, 0x10u, v9, v64, v61);
    if ( Networking_LastEventIndex < 128 )
    qmemcpy(&g_NetworkPacketIndex[111 * Networking_NextPacketIndex], v24, 0x6Fu);
    g_CrateSystemState[Networking_NextPacketIndex] = timeGetTime();
    Networking_NextPacketIndex = ((uint8_t)Networking_NextPacketIndex + 1) & 0x7F;
    ++Networking_LastEventIndex;
    goto LABEL_85;
    if ( (*(int (__thiscall **)(uint32_t *))(*Type + 44))(Type) == 6 )
    BuildingPlacement::Activate((int)HouseClass_Player, v22, Type);
    goto LABEL_117;
    v59 = *(unsigned __int8 *)(v72 + 3278);
    v25 = (*(int (__thiscall **)(uint32_t *))(*Type + 56))(Type);
    v15 = (const void *)EventClass::Init(v25, 11, v9, -1, v59, &word_B07DD8);
    LABEL_60:
    if ( Networking_LastEventIndex < 128 )
    qmemcpy(&g_NetworkPacketIndex[111 * Networking_NextPacketIndex], v15, 0x6Fu);
    g_CrateSystemState[Networking_NextPacketIndex] = timeGetTime();
    Networking_NextPacketIndex = ((uint8_t)Networking_NextPacketIndex + 1) & 0x7F;
    ++Networking_LastEventIndex;
    goto LABEL_117;
    goto LABEL_117;
    LABEL_116:
    a2 = 0;
    goto LABEL_117;
    if ( v64 == -1 )
    goto LABEL_116;
    v13 = a2;
    if ( (a2 & 8) != 0 )
    LOBYTE(v13) = a2 & 0xF7;
    a2 = v13;
    if ( (v13 & 0x10) != 0 )
    g_BuildingPlacementState = -1;
    if ( (v13 & 1) == 0 || v64 >= *((uint32_t *)HouseClass_Player + 153) )
    goto LABEL_117;
    PlayVocClass(RulesClass_Instance->BuildingRepairedSound, 0x2000, 1.0, 0);
    v14 = *(uint32_t *)(*((uint32_t *)HouseClass_Player + 150) + 4 * v64);
    if ( (unsigned __int8)SuperClass::CanFire(v14) )
    if ( !*(uint32_t *)(*(uint32_t *)(*(uint32_t *)(*((uint32_t *)HouseClass_Player + 150) + 4 * v64) + 40) + 188) )
    v66 = 0;
    v15 = (const void *)SidebarClass::SetFlashEntry(
    *((uint32_t *)HouseClass_Player + 12),
    18,
    *(uint32_t *)(*(uint32_t *)(*(uint32_t *)(*((uint32_t *)HouseClass_Player + 150) + 4 * v64) + 40)
    + 152),
    &v66);
    goto LABEL_60;
    g_RadarBlipPool = 0;
    g_RadarBlipManager = 0;
    dword_880994 = -1;
    Mouse::SetBounds((int)&MapClass_Instance, 0);
    BuildingClass::TogglePower2(&MapClass_Instance, 0);
    BuildingClass::TogglePower(&MapClass_Instance, 0);
    byte_88099A = 0;
    byte_88099B = 0;
    byte_88099C = 0;
    g_BuildingPlacementState = v64;
    MapClass::UnselectAll_ClearLimboLaunchers();
    VoxClass::FindAndPlay(aEvaSelecttarge, -1);
    else
    nullsub_231(v14);
    LABEL_117:
    CellClass::Draw((int)v70, a2, a3, 0);
    return 1;
}

