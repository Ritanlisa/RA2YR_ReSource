#include "mpcooperative.hpp"

// 0x0049BCA0
char  MPCooperative::GetMovieScore(int this, uint32_t *a2)
{
    if ( !*(uint8_t *)(this + 108) )
    return 0;
    *a2 = *(uint32_t *)(this + 64);
    return 1;
}

char  MPCooperative::WriteCoopSaveINI(char *this)
{
    char *v1; // edi
    char *v2; // ebp
    int v3; // esi
    int v4; // esi
    int v5; // eax
    char v6; // al
    char v7; // al
    char *v8; // edi
    int v9; // esi
    char i; // al
    int v11; // esi
    int v12; // eax
    char v13; // al
    void *v15[3]; // [esp+Ch] [ebp-194h] BYREF
    uint32_t v16[7]; // [esp+18h] [ebp-188h] BYREF
    uint32_t v17[6]; // [esp+34h] [ebp-16Ch] BYREF
    char v18; // [esp+4Ch] [ebp-154h]
    uint32_t v19[22]; // [esp+64h] [ebp-13Ch] BYREF
    uint8_t v20[12]; // [esp+BCh] [ebp-E4h] BYREF
    int v21; // [esp+C8h] [ebp-D8h]
    uint32_t v22[22]; // [esp+D0h] [ebp-D0h] BYREF
    uint8_t v23[12]; // [esp+128h] [ebp-78h] BYREF
    int v24; // [esp+134h] [ebp-6Ch]
    char v25[100]; // [esp+13Ch] [ebp-64h] BYREF
    v1 = this;
    if ( !*this )
    return 1;
    v2 = this + 28;
    if ( !*(this + 28) )
    return 1;
    CCFileClass::Construct(v22, g_Str_File_coopsave_ini);
    v15[1] = 0;
    v15[2] = 0;
    INISectionList::Constructor(v16);
    Node::Init(v17);
    v17[5] = 0;
    v18 = 0;
    v15[0] = &CCINIClass_Vtable;
    CCINIClass::Load(v15, (int)v22, 0, 0);
    CCFileClass::Reset(v22);
    v3 = 0;
    if ( *v1 )
    do
    if ( v3 >= 1021 )
    break;
    if ( isalnum(*v1) )
    g_IsWindowed[v3] = *v1;
    else
    g_IsWindowed[v3] = 61;
    v4 = v3 + 1;
    v5 = *v1 >> 4;
    if ( (unsigned int)v5 >= 0x10 )
    v6 = 0;
    else
    v6 = v5 >= 10 ? v5 + 55 : v5 + 48;
    g_IsWindowed[v4] = v6;
    v3 = v4 + 1;
    g_IsWindowed[v3] = EncodeDigitHex(*v1 & 0xF);
    v7 = v1[1];
    ++v3;
    ++v1;
    while ( v7 );
    g_IsWindowed[v3] = 0;
    strcpy(v25, g_IsWindowed);
    v8 = v2;
    v9 = 0;
    for ( i = *v2; i; ++v8 )
    if ( v9 >= 1021 )
    break;
    if ( isalnum(i) )
    g_IsWindowed[v9] = *v8;
    else
    g_IsWindowed[v9] = 61;
    v11 = v9 + 1;
    v12 = *v8 >> 4;
    if ( (unsigned int)v12 >= 0x10 )
    v13 = 0;
    else
    v13 = v12 >= 10 ? v12 + 55 : v12 + 48;
    g_IsWindowed[v11] = v13;
    v9 = v11 + 1;
    g_IsWindowed[v9] = EncodeDigitHex(*v8 & 0xF);
    i = v8[1];
    ++v9;
    g_IsWindowed[v9] = 0;
    strcat(v25, g_IsWindowed);
    CCFileClass::Construct3((int)v19);
    (*(void (__thiscall **)(uint32_t *, char *))(v19[0] + 8))(v19, g_Str_File_coopsave_ini);
    (*(void (__thiscall **)(uint32_t *, int))(v19[0] + 28))(v19, 2);
    INIClass::ClearSection((int)v15, (int)v25, 0);
    INIClass::WriteDigest(v15, (int)v19, 0);
    CCFileClass::Reset(v19);
    v19[0] = &CCFileClass::`vftable';
    v21 = 0;
    Vector::Clear((int)v20);
    v19[0] = &off_7E1668;
    BufferIOFileClass::Dtor(v19);
    HashTable::DestroyHashTableINIClass(v15);
    v22[0] = &CCFileClass::`vftable';
    v24 = 0;
    Vector::Clear((int)v23);
    v22[0] = &off_7E1668;
    BufferIOFileClass::Dtor(v22);
    return 1;
}

bool  MPCooperative::ReadCoopSaveINI(char *this)
{
    char *v1; // edi
    char *v2; // ebx
    int v4; // esi
    int v5; // esi
    int v6; // eax
    char v7; // al
    char v8; // al
    char *v9; // edi
    int v10; // esi
    char i; // al
    int v12; // esi
    int v13; // eax
    char v14; // al
    bool v15; // bl
    uint32_t v16[22]; // [esp+Ch] [ebp-128h] BYREF
    uint8_t v17[12]; // [esp+64h] [ebp-D0h] BYREF
    int v18; // [esp+70h] [ebp-C4h]
    void *v19[3]; // [esp+78h] [ebp-BCh] BYREF
    uint32_t v20[7]; // [esp+84h] [ebp-B0h] BYREF
    uint32_t v21[6]; // [esp+A0h] [ebp-94h] BYREF
    char v22; // [esp+B8h] [ebp-7Ch]
    char v23[100]; // [esp+D0h] [ebp-64h] BYREF
    v1 = this;
    if ( !*this )
    return 0;
    v2 = this + 28;
    if ( !*(this + 28) )
    return 0;
    CCFileClass::Construct(v16, g_Str_File_coopsave_ini);
    v19[1] = 0;
    v19[2] = 0;
    INISectionList::Constructor(v20);
    Node::Init(v21);
    v21[5] = 0;
    v22 = 0;
    v19[0] = &CCINIClass_Vtable;
    if ( !CCINIClass::Load(v19, (int)v16, 0, 0) )
    CCFileClass::Reset(v16);
    HashTable::DestroyHashTableINIClass(v19);
    v16[0] = &CCFileClass::`vftable';
    v18 = 0;
    Vector::Clear((int)v17);
    v16[0] = &off_7E1668;
    BufferIOFileClass::Dtor(v16);
    return 0;
    CCFileClass::Reset(v16);
    v4 = 0;
    if ( *v1 )
    do
    if ( v4 >= 1021 )
    break;
    if ( isalnum(*v1) )
    g_IsWindowed[v4] = *v1;
    else
    g_IsWindowed[v4] = 61;
    v5 = v4 + 1;
    v6 = *v1 >> 4;
    if ( (unsigned int)v6 >= 0x10 )
    v7 = 0;
    else
    v7 = v6 >= 10 ? v6 + 55 : v6 + 48;
    g_IsWindowed[v5] = v7;
    v4 = v5 + 1;
    g_IsWindowed[v4] = EncodeDigitHex(*v1 & 0xF);
    v8 = v1[1];
    ++v4;
    ++v1;
    while ( v8 );
    g_IsWindowed[v4] = 0;
    strcpy(v23, g_IsWindowed);
    v9 = v2;
    v10 = 0;
    for ( i = *v2; i; ++v9 )
    if ( v10 >= 1021 )
    break;
    if ( isalnum(i) )
    g_IsWindowed[v10] = *v9;
    else
    g_IsWindowed[v10] = 61;
    v12 = v10 + 1;
    v13 = *v9 >> 4;
    if ( (unsigned int)v13 >= 0x10 )
    v14 = 0;
    else
    v14 = v13 >= 10 ? v13 + 55 : v13 + 48;
    g_IsWindowed[v12] = v14;
    v10 = v12 + 1;
    g_IsWindowed[v10] = EncodeDigitHex(*v9 & 0xF);
    i = v9[1];
    ++v10;
    g_IsWindowed[v10] = 0;
    strcat(v23, g_IsWindowed);
    v15 = INIClass::BinarySearchSection((int)v19, (unsigned __int8 *)v23) != 0;
    HashTable::DestroyHashTableINIClass(v19);
    v16[0] = &CCFileClass::`vftable';
    v18 = 0;
    Vector::Clear((int)v17);
    v16[0] = &off_7E1668;
    BufferIOFileClass::Dtor(v16);
    return v15;
}

char  MPCooperative::_vt07(int *this, int a2)
{
    char v3; // bl
    int v4; // edx
    int v6; // ecx
    int v7; // eax
    int v8; // esi
    int v9; // eax
    int v10; // [esp-8h] [ebp-1Ch]
    int v11; // [esp+Ch] [ebp-8h] BYREF
    int v12; // [esp+10h] [ebp-4h] BYREF
    v3 = 0;
    v10 = *(this + 207);
    v11 = 0;
    Movie::GetSection((int)&g_DDrawSurfaceManager, v10, &v12);
    v4 = v12;
    if ( !v12 )
    return 1;
    v6 = *(this + 16);
    if ( v6 )
    if ( Movie::GetState(v6, &v11) )
    v7 = v11;
    else
    v7 = 0;
    v11 = 0;
    v4 = v12;
    else
    v7 = 0;
    v11 = 0;
    if ( v7 >= *(uint32_t *)(v4 + 32) )
    return 1;
    if ( a2 == -2 )
    if ( *(int *)(*(uint32_t *)(*(uint32_t *)(v4 + 20) + 4 * v7) + 16) > 1 )
    return 1;
    else if ( a2 == -3 )
    return 1;
    v8 = 0;
    v9 = *(uint32_t *)(*(uint32_t *)(v4 + 20) + 4 * v7);
    if ( *(int *)(v9 + 16) > 0 )
    while ( SideClass::FindByName(*(void **)(*(uint32_t *)(v9 + 4) + 4 * v8)) != a2 )
    ++v8;
    v9 = *(uint32_t *)(*(uint32_t *)(v12 + 20) + 4 * v11);
    if ( v8 >= *(uint32_t *)(v9 + 16) )
    return 0;
    return 1;
    return v3;
}

char  MPCooperative::_vt04(uint32_t *this)
{
    int i; // edi
    int v3; // eax
    void *v4; // esi
    int v5; // edi
    uint32_t *v6; // esi
    int j; // ebx
    uint32_t *v8; // eax
    uint32_t *v9; // edi
    int v10; // eax
    int v11; // ecx
    int v12; // eax
    int v13; // edx
    int v15; // [esp+10h] [ebp-4h] BYREF
    for ( i = *(this + 205) - 1; i >= 0; --i )
    v3 = *(this + 202);
    v4 = *(void **)(v3 + 4 * i);
    if ( v4 )
    Array::Cleanup(*(uint32_t *)(v3 + 4 * i));
    __3_YAXPAX_Z(v4);
    v5 = *(this + 203);
    v6 = this + 201;
    (*(void (__thiscall **)(uint32_t *))(*(this + 201) + 12))(this + 201);
    (*(void (__thiscall **)(uint32_t *, int, uint32_t))(*(this + 201) + 8))(this + 201, v5, 0);
    CampaignClass::GetValue((int)&g_DDrawSurfaceManager, &v15);
    for ( j = 0; j < v15; ++j )
    v8 = __2_YAPAXI_Z(0x70u);
    if ( v8 )
    v9 = MissionClass::Init(v8);
    else
    v9 = 0;
    Movie::SetupScreen((int)v9, j);
    v10 = v6[2];
    if ( v6[4] >= v10 )
    if ( !*((uint8_t *)v6 + 13) && v10 )
    continue;
    v11 = v6[5];
    if ( v11 <= 0 || !(*(unsigned __int8 (__thiscall **)(uint32_t *, int, uint32_t))(*v6 + 8))(v6, v10 + v11, 0) )
    continue;
    v12 = v6[4];
    v13 = v6[1];
    v6[4] = v12 + 1;
    *(uint32_t *)(v13 + 4 * v12) = v9;
    return 1;
}

void  MPCooperative::_vt09(uint8_t *this)
{
    *(this + 832) = 1;
}

int  MPCooperative::vt_17_(int *this)
{
    int v2; // ebx
    uint32_t *v3; // eax
    uint32_t *v4; // eax
    int v6; // [esp+10h] [ebp-8h] BYREF
    char *String2; // [esp+14h] [ebp-4h] BYREF
    v2 = 0;
    v6 = 0;
    String2 = 0;
    CampaignClass::GetValue((int)&g_DDrawSurfaceManager, &v6);
    if ( !v6 )
    return -1;
    if ( !*(this + 16) )
    v3 = __2_YAPAXI_Z(0x70u);
    if ( v3 )
    v4 = MissionClass::Init(v3);
    else
    v4 = 0;
    *(this + 16) = (int)v4;
    Movie::SetupScreen(*(this + 16), 0);
    Array::GetElementAt(*(this + 16), &String2, 0);
    if ( g_MultiplayerOptions <= 0 )
    LABEL_10:
    (*(void (__thiscall **)(int *))(*this + 16))(this);
    return -1;
    while ( _strnicmp((const char *)(*(uint32_t *)(g_MultiplayerGameState + 4 * v2) + 88), String2, strlen(String2)) )
    if ( ++v2 >= g_MultiplayerOptions )
    goto LABEL_10;
    return v2;
}

char  MPCooperative::_vt05(char **this, int a2)
{
    char *v2; // ecx
    if ( Game_PlayerCount == 2 )
    v2 = *(this + 16);
    if ( v2 )
    String::AssignWideToChar(v2, *(char **)Game_PlayerInfoArray, *(char **)(Game_PlayerInfoArray + 4));
    return ScenarioClass::MissionStubReturnZero2(a2);
}

char  MPCooperative::_vt06(int this)
{
    char result; // al
    LRESULT v3; // edi
    void *v4; // ebx
    uint32_t *v5; // eax
    uint32_t *v6; // eax
    int v7; // ecx
    int v8; // eax
    int v9; // ecx
    int v10; // ebx
    HWND GameUI; // eax
    int i; // edi
    int v13; // ebp
    int PlayerSide; // eax
    int v15; // [esp-8h] [ebp-20h]
    int v16; // [esp-8h] [ebp-20h]
    int v17; // [esp+Ch] [ebp-Ch] BYREF
    int v18; // [esp+10h] [ebp-8h] BYREF
    LRESULT v19; // [esp+14h] [ebp-4h] BYREF
    if ( !*(uint32_t *)(this + 64) )
    return 0;
    CampaignClass::GetValue((int)&g_DDrawSurfaceManager, &v19);
    v3 = sub_5E66D0();
    if ( v3 < v19 )
    if ( Dialog::GetCurrentType() == 107 )
    v4 = *(void **)(this + 64);
    if ( v4 )
    Array::Cleanup(*(uint32_t *)(this + 64));
    __3_YAXPAX_Z(v4);
    *(uint32_t *)(this + 64) = *(uint32_t *)(*(uint32_t *)(this + 808) + 4 * v3);
    v5 = __2_YAPAXI_Z(0x70u);
    if ( v5 )
    v6 = MissionClass::Init(v5);
    else
    v6 = 0;
    *(uint32_t *)(*(uint32_t *)(this + 808) + 4 * v3) = v6;
    Movie::SetupScreen(*(uint32_t *)(*(uint32_t *)(this + 808) + 4 * v3), v3);
    *(uint32_t *)(this + 76) = v3;
    if ( Game_PlayerCount == 2 )
    String::AssignWideToChar(
    *(char **)(this + 64),
    *(char **)Game_PlayerInfoArray,
    *(char **)(Game_PlayerInfoArray + 4));
    goto LABEL_16;
    if ( Game_PlayerCount == 2 )
    String::AssignWideToChar(
    *(char **)(this + 64),
    *(char **)Game_PlayerInfoArray,
    *(char **)(Game_PlayerInfoArray + 4));
    result = LoadCampaignCoopSave(*(char **)(this + 64));
    if ( result )
    *(uint8_t *)(this + 72) = 1;
    LABEL_16:
    v15 = *(uint32_t *)(this + 828);
    v17 = 0;
    Movie::GetSection((int)&g_DDrawSurfaceManager, v15, &v18);
    if ( v18 )
    v7 = *(uint32_t *)(this + 64);
    if ( v7 && Movie::GetState(v7, &v17) )
    v8 = v17;
    else
    v8 = 0;
    v17 = 0;
    v9 = *(uint32_t *)(v18 + 32);
    if ( v8 < v9 )
    if ( v9 )
    v10 = *(uint32_t *)(*(uint32_t *)(*(uint32_t *)(v18 + 20) + 4 * v8) + 16);
    GameUI = (HWND)Dialog::FindGameUI();
    Campaign::SetupMovie((int *)this, GameUI);
    for ( i = 0; i < Game_PlayerCount; ++i )
    v13 = *(uint32_t *)this;
    PlayerSide = SessionClass::GetPlayerSide(*(uint32_t *)(Game_PlayerInfoArray + 4 * i));
    if ( !(*(unsigned __int8 (__thiscall **)(int, int))(v13 + 28))(this, PlayerSide) )
    if ( v10 <= 1 )
    v16 = SideClass::FindByName(**(void ***)(*(uint32_t *)(*(uint32_t *)(v18 + 20) + 4 * v17) + 4));
    SessionClass::SetPlayerOption(*(uint32_t *)(Game_PlayerInfoArray + 4 * i), v16);
    else
    SessionClass::SetPlayerOption(*(uint32_t *)(Game_PlayerInfoArray + 4 * i), -2);
    return 1;
    else
    return 0;
    else
    return 0;
    else
    return 0;
    return result;
}

int  MPCooperative::_vt10(int *this)
{
    int v3; // ecx
    int v4; // eax
    int v5; // eax
    int v6; // ecx
    int v7; // [esp+4h] [ebp-8h] BYREF
    int v8; // [esp+8h] [ebp-4h] BYREF
    v7 = 0;
    Movie::GetSection((int)&g_DDrawSurfaceManager, *(this + 207), &v8);
    if ( !v8 )
    return -2;
    v3 = *(this + 16);
    if ( v3 && Movie::GetState(v3, &v7) )
    v4 = v7;
    else
    v4 = 0;
    v7 = 0;
    if ( v4 >= *(uint32_t *)(v8 + 32) )
    return -2;
    v5 = *(uint32_t *)(*(uint32_t *)(v8 + 20) + 4 * v4);
    v6 = *(uint32_t *)(v5 + 16);
    if ( !v6 )
    return -2;
    if ( v6 <= 1 )
    return SideClass::FindByName(**(void ***)(v5 + 4));
    return -2;
}

char  MPCooperative::_vt23(int this, int a2, int a3, int a4)
{
    int v5; // ecx
    char v7; // bl
    HWND GameUI; // eax
    int v9[28]; // [esp-E0h] [ebp-F4h] BYREF
    int v10[28]; // [esp-70h] [ebp-84h] BYREF
    int v11; // [esp+10h] [ebp-4h] BYREF
    v5 = *(uint32_t *)(this + 64);
    if ( !v5 )
    return 0;
    Movie::GetState(v5, &v11);
    qmemcpy(v10, (const void *)(a4 + 112), sizeof(v10));
    qmemcpy(v9, (const void *)a4, sizeof(v9));
    v7 = MPCooperative::validateMove(
    *(uint32_t **)(this + 64),
    a2,
    a3,
    v9[0],
    v9[1],
    v9[2],
    v9[3],
    v9[4],
    v9[5],
    v9[6],
    v9[7],
    v9[8],
    v9[9],
    v9[10],
    v9[11],
    v9[12],
    v9[13],
    v9[14],
    v9[15],
    v9[16],
    v9[17],
    v9[18],
    v9[19],
    v9[20],
    v9[21],
    v9[22],
    v9[23],
    v9[24],
    v9[25],
    v9[26],
    v9[27],
    v10[0],
    v10[1],
    v10[2],
    v10[3],
    v10[4],
    v10[5],
    v10[6],
    v10[7],
    v10[8],
    v10[9],
    v10[10],
    v10[11],
    v10[12],
    v10[13],
    v10[14],
    v10[15],
    v10[16],
    v10[17],
    v10[18],
    v10[19],
    v10[20],
    v10[21],
    v10[22],
    v10[23],
    v10[24],
    v10[25],
    v10[26],
    v10[27]);
    if ( v11 != a2 || *(uint8_t *)(this + 832) )
    GameUI = (HWND)Dialog::FindGameUI();
    if ( GameUI )
    Campaign::SetupMovie((int *)this, GameUI);
    *(uint8_t *)(this + 832) = 0;
    return v7;
}

void  MPCooperative::_vt14(int *this, HWND hDlg)
{
    int v3; // edi
    char *i; // esi
    int ResourceID2CSF; // eax
    if ( hDlg )
    v3 = Game_PlayerCount;
    for ( i = 0; (int)i < v3; ++i )
    ResourceID2CSF = GetResourceID2CSF(i);
    MovieClass::ReadConfig(this, hDlg, ResourceID2CSF);
    CampaignCoop::Setup(this, hDlg, 1);
}

char  MPCooperative::_vt24(int this)
{
    int v2; // ecx
    HWND GameUI; // eax
    v2 = *(uint32_t *)(this + 64);
    if ( !v2 )
    return 0;
    Movie::GetSectionID(v2, (uint32_t *)(this + 828));
    GameUI = (HWND)Dialog::FindGameUI();
    if ( GameUI )
    if ( *(uint8_t *)(this + 832) )
    Campaign::SetupMovie((int *)this, GameUI);
    *(uint8_t *)(this + 832) = 0;
    return SerializeCampaignOptions(*(char **)(this + 64));
}

char  MPCooperative::_vt25(uint32_t *this)
{
    uint32_t *v2; // esi
    int v3; // ebp
    int v4; // edi
    int v5; // ebx
    int v6; // esi
    int v7; // edi
    uint32_t *v8; // ecx
    int *v9; // ebp
    int *v10; // ebx
    int v11; // esi
    int v12; // eax
    int v13; // edx
    int v14; // eax
    int v15; // edx
    int v16; // edx
    int v17; // eax
    int v18; // eax
    int v19; // edx
    int v20; // esi
    int v21; // eax
    int v22; // edx
    int v23; // eax
    int v24; // edx
    int v25; // esi
    int *v26; // eax
    int v27; // eax
    int v28; // edx
    int v29; // eax
    int v30; // edx
    int v32; // [esp+8h] [ebp-1CCh]
    int i; // [esp+20h] [ebp-1B4h]
    int v34; // [esp+24h] [ebp-1B0h]
    int v35; // [esp+28h] [ebp-1ACh] BYREF
    uint32_t *v36; // [esp+2Ch] [ebp-1A8h]
    int v37; // [esp+30h] [ebp-1A4h]
    char v38[16]; // [esp+34h] [ebp-1A0h] BYREF
    char Buffer[400]; // [esp+44h] [ebp-190h] BYREF
    v32 = *(this + 207);
    v36 = this;
    Movie::GetSection((int)&g_DDrawSurfaceManager, v32, &v35);
    sprintf(Buffer, "C1,%d", *(char *)(v35 + 8));
    v2 = this + 105;
    v3 = 8;
    do
    v4 = v2[2];
    (*(void (__thiscall **)(uint32_t *))(*v2 + 12))(v2);
    (*(void (__thiscall **)(uint32_t *, int, uint32_t))(*v2 + 8))(v2, v4, 0);
    v5 = v2[50];
    (*(void (__thiscall **)(uint32_t *))(v2[48] + 12))(v2 + 48);
    (*(void (__thiscall **)(uint32_t *, int, uint32_t))(v2[48] + 8))(v2 + 48, v5, 0);
    v2 += 6;
    --v3;
    while ( v3 );
    v37 = Game_PlayerCount;
    for ( i = 0; i < *(char *)(v35 + 8); ++i )
    v6 = 0;
    memset32(dword_ABF460, -2, 8u);
    v7 = Game_PlayerCount;
    if ( Game_PlayerCount > 0 )
    do
    dword_ABF460[v6] = MPCooperative::finalizeSession(*(uint32_t *)(Game_PlayerInfoArray + 4 * v6));
    ++v6;
    while ( v6 < v7 );
    v8 = v36;
    v34 = 0;
    v9 = dword_ABF460;
    v10 = v36 + 107;
    while ( 1 )
    if ( v34 >= v37 )
    v20 = (*(int (__thiscall **)(uint32_t *))(*v8 + 112))(v8);
    v21 = *v10;
    if ( v10[2] < *v10
    || (*((uint8_t *)v10 + 5) || !v21)
    && (v22 = v10[3], v22 > 0)
    && (*(unsigned __int8 (__thiscall **)(int *, int, uint32_t))(*(v10 - 2) + 8))(v10 - 2, v21 + v22, 0) )
    v23 = v10[2];
    v24 = *(v10 - 1);
    v10[2] = v23 + 1;
    *(uint32_t *)(v24 + 4 * v23) = v20;
    while ( 1 )
    v25 = Random::Range((uint32_t *)ScenarioClass_Instance + 134, 0, 7);
    if ( v25 == -2 )
    break;
    v26 = dword_ABF460;
    while ( *v26 != v25 )
    if ( (int)++v26 >= (int)&dword_ABF480 )
    goto LABEL_31;
    LABEL_31:
    *v9 = v25;
    v27 = v10[48];
    if ( v10[50] < v27
    || (*((uint8_t *)v10 + 197) || !v27)
    && (v28 = v10[51], v28 > 0)
    && (*(unsigned __int8 (__thiscall **)(int *, int, uint32_t))(v10[46] + 8))(v10 + 46, v27 + v28, 0) )
    v29 = v10[50];
    v30 = v10[47];
    v10[50] = v29 + 1;
    *(uint32_t *)(v30 + 4 * v29) = v25;
    else
    v11 = (*(int (__thiscall **)(uint32_t *))(*v8 + 108))(v8);
    v12 = *v10;
    if ( v10[2] < *v10
    || (*((uint8_t *)v10 + 5) || !v12)
    && (v13 = v10[3], v13 > 0)
    && (*(unsigned __int8 (__thiscall **)(int *, int, uint32_t))(*(v10 - 2) + 8))(v10 - 2, v12 + v13, 0) )
    v14 = v10[2];
    v15 = *(v10 - 1);
    v10[2] = v14 + 1;
    *(uint32_t *)(v15 + 4 * v14) = v11;
    v16 = v10[48];
    if ( v10[50] < v16
    || (*((uint8_t *)v10 + 197) || !v16)
    && (v17 = v10[51], v17 > 0)
    && (*(unsigned __int8 (__thiscall **)(int *, int, uint32_t))(v10[46] + 8))(v10 + 46, v16 + v17, 0) )
    v18 = v10[50];
    v19 = v10[47];
    v10[50] = v18 + 1;
    *(uint32_t *)(v19 + 4 * v18) = *v9;
    sprintf(v38, ",%d,%d", *(uint32_t *)(*(v10 - 1) + 4 * i), *(uint32_t *)(v10[47] + 4 * i));
    strcat(Buffer, v38);
    ++v9;
    v10 += 6;
    ++v34;
    if ( (int)v9 >= (int)&dword_ABF480 )
    break;
    v8 = v36;
    Debug::Log();
    Network::SendOptionsGame(Buffer);
    Debug::Log();
    return 1;
}

char  MPCooperative::_vt31(int *this)
{
    HWND GameUI; // eax
    GameUI = (HWND)Dialog::FindGameUI();
    if ( GameUI || (GameUI = (HWND)Dialog::FindByHandle((void *)0xBC6)) != 0 )
    CampaignCoop::Setup(this, GameUI, 1);
    return 1;
}

int  MPCooperative::_vt20(uint32_t *this, HWND hWnd, int a3)
{
    return ListBox::FillPlayers(this, hWnd, a3);
}

uint32_t *__stdcall MPCooperative::sub_5C2DE0(uint32_t *a1, int a2, int a3, int a4)
{
    int v4; // edx
    int v5; // ebp
    int v6; // ecx
    int i; // eax
    int v8; // ebx
    int v9; // edi
    void*375 *v10; // ecx
    int j; // eax
    int v12; // edx
    int v14; // eax
    char v15; // bl
    int v16; // ecx
    v4 = a3;
    v5 = 0;
    v6 = *(uint32_t *)(a3 + 16);
    for ( i = 0; i < v6; ++i )
    if ( *(uint8_t *)(i + a4) )
    ++v5;
    v8 = 0;
    v9 = 0;
    if ( HouseClass_Count > 0 )
    do
    v10 = *(void*375 **)&HouseClass_Array->gap0[4 * v9];
    if ( v10 && (unsigned __int8)House::IsCurrentPlayer(v10) )
    ++v8;
    ++v9;
    while ( v9 < HouseClass_Count );
    v4 = a3;
    if ( v5 >= v8 )
    v14 = *((uint32_t *)ScenarioClass_Instance + 1145);
    if ( *(uint8_t *)(v14 + a4) )
    do
    if ( v14 >= *(uint32_t *)(v4 + 16) )
    break;
    v15 = *(uint8_t *)(v14 + a4 + 1);
    ++v14;
    while ( v15 );
    *(uint8_t *)(v14 + a4) = 1;
    *((uint32_t *)ScenarioClass_Instance + v14 + 1120) = a2;
    v16 = *(uint32_t *)(*(uint32_t *)(v4 + 4) + 4 * v14);
    *a1 = v16;
    return a1;
    else
    for ( j = Random::Range((uint32_t *)ScenarioClass_Instance + 134, 0, *((uint32_t *)ScenarioClass_Instance + 1145) - 1);
    *(uint8_t *)(j + a4);
    j = (j + 1) % *((uint32_t *)ScenarioClass_Instance + 1145) )
    ;
    *(uint8_t *)(j + a4) = 1;
    *((uint32_t *)ScenarioClass_Instance + j + 1120) = a2;
    v12 = *(uint32_t *)(*(uint32_t *)(a3 + 4) + 4 * j);
    *a1 = v12;
    return a1;
}

char __stdcall MPCooperative::_vt33(int a1)
{
    int v1; // eax
    uint32_t *v2; // ecx
    int i; // ebp
    char v4; // bl
    int v5; // edx
    uint32_t *v6; // edi
    int v7; // eax
    uint32_t *v8; // ecx
    int v9; // ebx
    int v10; // esi
    int v11; // ecx
    int v12; // ecx
    int *j; // eax
    int *v14; // edi
    uint8_t v16[16]; // [esp+4h] [ebp-28h] BYREF
    void **v17; // [esp+14h] [ebp-18h] BYREF
    void *Block; // [esp+18h] [ebp-14h]
    char v19; // [esp+21h] [ebp-Bh]
    uint32_t *v20; // [esp+30h] [ebp+4h]
    Multiplayer::FindStartPositions(&v17);
    v1 = 0;
    v2 = (char *)ScenarioClass_Instance + 4480;
    do
    v16[v1++] = *v2++ != -1;
    while ( v1 < 16 );
    for ( i = 0; i < HouseClass_Count; ++i )
    v4 = 0;
    v5 = -1;
    v6 = *(uint32_t **)&HouseClass_Array->gap0[4 * i];
    v20 = v6;
    if ( !*(uint8_t *)(v6[13] + 422) )
    v7 = 0;
    v8 = (char *)ScenarioClass_Instance + 4480;
    do
    if ( *v8 == i )
    v4 = 1;
    v5 = v7;
    ++v7;
    ++v8;
    while ( v7 < 16 );
    if ( v4 )
    HouseClass::SetMapSeed(v6, *((uint32_t *)Block + v5));
    else
    Debug::Log();
    v9 = sub_5C2D00(i, (int)&v17, (int)v16);
    v10 = 0;
    if ( Game_PlayerCount <= 0 )
    goto LABEL_17;
    v11 = Game_PlayerInfoArray;
    while ( *(uint32_t *)(*(uint32_t *)v11 + 111) != i )
    ++v10;
    v11 += 4;
    if ( v10 >= Game_PlayerCount )
    goto LABEL_17;
    if ( v10 == -1 )
    LABEL_17:
    v12 = 0;
    for ( j = g_CampaignSideIndex; (*(j - 16) == -1 || *j != -2) && (int)j < (int)g_CampaignFactionSlot; ++j )
    ++v12;
    g_CampaignSideIndex[v12] = v9;
    g_CampaignFactionSlot[v12] = 1;
    else
    SessionClass::SetOption(*(uint32_t *)(Game_PlayerInfoArray + 4 * v10), v9);
    SessionClass::SetOption2(*(uint32_t *)(Game_PlayerInfoArray + 4 * v10), 0);
    v14 = (int *)(Game_PlayerInfoArray + 4 * v10);
    SessionClass::GetOption2(*v14);
    SessionClass::GetOption(*v14);
    Debug::Log();
    HouseClass::SetMapSeed(v20, *((uint32_t *)Block + v9));
    v17 = &VectorClass<Cell>::`vftable';
    if ( Block && v19 )
    __3_YAXPAX_Z(Block);
    return 1;
}

char  MPCooperative::_vt26(int *this)
{
    int v2; // ebp
    int v4; // edx
    int v5; // ecx
    int v6; // edi
    int *v7; // esi
    int v8; // eax
    int v9; // [esp+10h] [ebp-Ch] BYREF
    int v10; // [esp+14h] [ebp-8h]
    int v11; // [esp+18h] [ebp-4h] BYREF
    v2 = ReadPlayerCountMap(g_GameRulesOptions) - *((uint32_t *)ScenarioClass_Instance + 1145);
    Debug::Log();
    if ( v2 <= 0 )
    return 0;
    g_Rules_AlliesAllowed = v2;
    v4 = *(this + 207);
    v10 = 0;
    v9 = 0;
    Movie::GetSection((int)&g_DDrawSurfaceManager, v4, &v11);
    if ( !v11 )
    return 0;
    if ( !*(uint32_t *)(v11 + 56) )
    return 0;
    v5 = *(this + 16);
    if ( !v5 || !Movie::GetState(v5, &v9) )
    v9 = 0;
    if ( v9 >= *(uint32_t *)(v11 + 56) )
    return 0;
    v6 = *((uint32_t *)ScenarioClass_Instance + 1145);
    if ( v6 < 8 )
    v7 = (int *)(4 * v6 + 11055740);
    do
    if ( v10 >= v2 )
    *v7 = -1;
    v7[8] = -1;
    v7[16] = -1;
    v7[24] = -1;
    v7[32] = -1;
    else
    Debug::Log();
    if ( dword_A8EB68 )
    *v7 = dword_A8EB68 == 1;
    else
    *v7 = 2;
    Debug::Log();
    v8 = v10;
    v7[8] = -2;
    v7[16] = -2;
    v7[24] = -2;
    v7[32] = -2;
    v10 = v8 + 1;
    ++v7;
    ++v6;
    while ( (int)v7 < (int)g_CampaignPlayerArray );
    return 1;
}

char MPCooperative::_vt34()
{
    int v0; // ebp
    int v1; // edi
    int v2; // eax
    int v3; // esi
    int v4; // ebp
    int v5; // edi
    int v6; // esi
    int v8; // [esp+10h] [ebp-Ch]
    int v9; // [esp+10h] [ebp-Ch]
    int v10; // [esp+14h] [ebp-8h]
    int v11; // [esp+14h] [ebp-8h]
    int v12; // [esp+18h] [ebp-4h]
    int v13; // [esp+18h] [ebp-4h]
    Debug::Log();
    if ( HouseClass_Count > 0 )
    v0 = 1;
    v8 = 0;
    v12 = 1;
    do
    v1 = *(uint32_t *)&HouseClass_Array->gap0[v8];
    ToWideStringChar((char *)(v1 + 90154));
    Debug::Log();
    if ( *(uint8_t *)(*(uint32_t *)(v1 + 52) + 422) || !*(uint8_t *)(v1 + 492) )
    v2 = HouseClass_Count;
    else
    v2 = HouseClass_Count;
    v10 = v0;
    if ( v0 < HouseClass_Count )
    do
    v3 = *(uint32_t *)&HouseClass_Array->gap0[4 * v0];
    ToWideStringChar((char *)(v3 + 90154));
    Debug::Log();
    if ( !*(uint8_t *)(*(uint32_t *)(v3 + 52) + 422) && *(uint8_t *)(v3 + 492) )
    ToWideStringChar((char *)(v3 + 90154));
    ToWideStringChar((char *)(v1 + 90154));
    Debug::Log();
    HouseClass::HandleAlliance(v1, v3, 0);
    HouseClass::HandleAlliance(v3, v1, 0);
    v0 = v10;
    v2 = HouseClass_Count;
    v10 = ++v0;
    while ( v0 < HouseClass_Count );
    v0 = v12;
    ++v0;
    v8 += 4;
    v12 = v0;
    while ( v0 - 1 < v2 );
    if ( v2 > 0 )
    v4 = 1;
    v9 = 0;
    v11 = 1;
    do
    v5 = *(uint32_t *)&HouseClass_Array->gap0[v9];
    ToWideStringChar((char *)(v5 + 90154));
    Debug::Log();
    if ( !*(uint8_t *)(*(uint32_t *)(v5 + 52) + 422) && !*(uint8_t *)(v5 + 492) )
    v13 = v4;
    if ( v4 < HouseClass_Count )
    do
    v6 = *(uint32_t *)&HouseClass_Array->gap0[4 * v4];
    ToWideStringChar((char *)(v6 + 90154));
    Debug::Log();
    if ( !*(uint8_t *)(*(uint32_t *)(v6 + 52) + 422) && !*(uint8_t *)(v6 + 492) )
    ToWideStringChar((char *)(v6 + 90154));
    ToWideStringChar((char *)(v5 + 90154));
    Debug::Log();
    HouseClass::HandleAlliance(v5, v6, 0);
    HouseClass::HandleAlliance(v6, v5, 0);
    v4 = v13;
    v13 = ++v4;
    while ( v4 < HouseClass_Count );
    v4 = v11;
    ++v4;
    v9 += 4;
    v11 = v4;
    while ( v4 - 1 < HouseClass_Count );
    return 1;
}

int  MPCooperative::_vt27(int *this)
{
    int v2; // ecx
    int v3; // edi
    char v4; // bl
    int v6; // ecx
    int v7; // ebp
    int v8; // edi
    int v9; // esi
    int v10; // eax
    int v11; // [esp+10h] [ebp-Ch] BYREF
    int v12; // [esp+14h] [ebp-8h] BYREF
    int v13; // [esp+18h] [ebp-4h] BYREF
    v2 = *(this + 16);
    v3 = g_SuperWeaponTypeArray;
    v4 = 0;
    v13 = 0;
    Movie::GetSectionID(v2, &v13);
    v11 = 0;
    Movie::GetSection((int)&g_DDrawSurfaceManager, v13, &v12);
    if ( !v12 )
    return 0;
    v6 = *(this + 16);
    if ( !v6 || !Movie::GetState(v6, &v11) )
    v11 = 0;
    if ( v11 >= *(uint32_t *)(v12 + 32) )
    return 0;
    v7 = v3 - 1;
    do
    v8 = Random::Range((uint32_t *)ScenarioClass_Instance + 134, 0, v7);
    v9 = 0;
    v10 = *(uint32_t *)(*(uint32_t *)(v12 + 20) + 4 * v11);
    if ( *(int *)(v10 + 16) > 0 )
    do
    if ( v8 == SideClass::FindByName(*(void **)(*(uint32_t *)(v10 + 4) + 4 * v9)) )
    v4 = 1;
    ++v9;
    v10 = *(uint32_t *)(*(uint32_t *)(v12 + 20) + 4 * v11);
    while ( v9 < *(uint32_t *)(v10 + 16) );
    while ( !v4 );
    ToWideStringChar(*(char **)(*((uint32_t *)g_SuperWeaponTypeCount + v8) + 96));
    Debug::Log();
    return v8;
}

int  MPCooperative::_vt28(int *this)
{
    int v2; // ecx
    int v3; // edi
    char v4; // bl
    int v6; // ecx
    int v7; // ebp
    int v8; // edi
    int v9; // esi
    int v10; // eax
    int v11; // [esp+10h] [ebp-Ch] BYREF
    int v12; // [esp+14h] [ebp-8h] BYREF
    int v13; // [esp+18h] [ebp-4h] BYREF
    v2 = *(this + 16);
    v3 = g_SuperWeaponTypeArray;
    v4 = 0;
    v13 = 0;
    Movie::GetSectionID(v2, &v13);
    v11 = 0;
    Movie::GetSection((int)&g_DDrawSurfaceManager, v13, &v12);
    if ( !v12 )
    return 0;
    v6 = *(this + 16);
    if ( !v6 || !Movie::GetState(v6, &v11) )
    v11 = 0;
    if ( v11 >= *(uint32_t *)(v12 + 56) )
    return 0;
    v7 = v3 - 1;
    do
    v8 = Random::Range((uint32_t *)ScenarioClass_Instance + 134, 0, v7);
    v9 = 0;
    v10 = *(uint32_t *)(*(uint32_t *)(v12 + 44) + 4 * v11);
    if ( *(int *)(v10 + 16) > 0 )
    do
    if ( v8 == SideClass::FindByName(*(void **)(*(uint32_t *)(v10 + 4) + 4 * v9)) )
    v4 = 1;
    ++v9;
    v10 = *(uint32_t *)(*(uint32_t *)(v12 + 44) + 4 * v11);
    while ( v9 < *(uint32_t *)(v10 + 16) );
    while ( !v4 );
    ToWideStringChar(*(char **)(*((uint32_t *)g_SuperWeaponTypeCount + v8) + 96));
    Debug::Log();
    return v8;
}

char MPCooperative::_vt15()
{
    return 0;
}

void  MPCooperative::_vt19(int this, HWND hWnd, int a3, int a4)
{
    int v4; // edi
    int v5; // eax
    uint32_t *v6; // eax
    uint32_t *v7; // eax
    char *v8; // ecx
    void *v9; // eax
    int i; // ebp
    uint32_t *v11; // eax
    uint32_t *v12; // ebx
    int v13; // eax
    int v14; // ecx
    int v15; // eax
    int v16; // edx
    signed int v17; // ebp
    LPARAM v18; // edi
    int v19; // esi
    char *v20; // ecx
    LPARAM v21; // edi
    int v22; // esi
    wchar_t *StringCSF; // eax
    int v24; // [esp+10h] [ebp-334h] BYREF
    int v25; // [esp+14h] [ebp-330h]
    int v26; // [esp+18h] [ebp-32Ch]
    void **v27; // [esp+1Ch] [ebp-328h] BYREF
    void *Block; // [esp+20h] [ebp-324h]
    int v29; // [esp+24h] [ebp-320h]
    int v30; // [esp+28h] [ebp-31Ch]
    int v31; // [esp+2Ch] [ebp-318h]
    int v32; // [esp+30h] [ebp-314h]
    const char *v33; // [esp+34h] [ebp-310h] BYREF
    char Buffer[260]; // [esp+38h] [ebp-30Ch] BYREF
    wchar_t v35[260]; // [esp+13Ch] [ebp-208h] BYREF
    v4 = this;
    v26 = this;
    v5 = *(uint32_t *)(this + 80);
    *(uint8_t *)(this + 4) = 1;
    if ( !v5 )
    v6 = __2_YAPAXI_Z(8u);
    if ( v6 )
    v7 = MPCooperative::initGame(v6);
    else
    v7 = 0;
    *(uint32_t *)(v4 + 80) = v7;
    SendMessageA(hWnd, 0x184u, 0, 0);
    v8 = *(char **)(v4 + 64);
    *(uint8_t *)(v4 + 73) = 0;
    if ( v8 )
    if ( Game_PlayerCount != 2 )
    String::AssignWideToChar(v8, (char *)&g_TypeClass_DefaultString, (char *)&g_TypeClass_DefaultString);
    else if ( Game_PlayerCount == 2 )
    v9 = __2_YAPAXI_Z(0x70u);
    if ( v9 )
    *(uint32_t *)(v4 + 64) = MPCooperative::processTurn(
    (int)v9,
    *(char **)Game_PlayerInfoArray,
    *(char **)(Game_PlayerInfoArray + 4));
    else
    *(uint32_t *)(v4 + 64) = 0;
    if ( !*(uint32_t *)(v4 + 820) )
    CampaignClass::GetValue((int)&g_DDrawSurfaceManager, &v24);
    for ( i = 0; i < v24; ++i )
    v11 = __2_YAPAXI_Z(0x70u);
    if ( v11 )
    v12 = MissionClass::Init(v11);
    else
    v12 = 0;
    Movie::SetupScreen((int)v12, i);
    v13 = *(uint32_t *)(v4 + 812);
    if ( *(uint32_t *)(v4 + 820) >= v13 )
    if ( !*(uint8_t *)(v4 + 817) && v13 )
    continue;
    v14 = *(uint32_t *)(v4 + 824);
    if ( v14 <= 0
    || !(*(unsigned __int8 (__thiscall **)(int, int, uint32_t))(*(uint32_t *)(v4 + 804) + 8))(v4 + 804, v13 + v14, 0) )
    continue;
    v15 = *(uint32_t *)(v4 + 820);
    v16 = *(uint32_t *)(v4 + 808);
    *(uint32_t *)(v4 + 820) = v15 + 1;
    *(uint32_t *)(v16 + 4 * v15) = v12;
    v17 = 0;
    IsometricTileTypeClass::Constructor_0(&v27, 0, 0);
    v27 = &DynamicVectorClass<unsigned short *>::`vftable';
    v32 = 10;
    v31 = 0;
    SmallFunc_49E740((int)&g_DDrawSurfaceManager, &v27);
    v25 = v29;
    if ( v29 > 0 )
    do
    if ( *((uint32_t *)Block + v17) )
    Array::GetElementAt(*(uint32_t *)(*(uint32_t *)(v4 + 808) + 4 * v17), &v33, -1);
    v24 = *(uint32_t *)(a3 + 16);
    v18 = 0;
    sprintf(Buffer, "%s.MAP", v33);
    v19 = 0;
    if ( v24 <= 0 )
    LABEL_34:
    Debug::Log();
    else
    while ( !v18 )
    if ( !_strcmpi((const void *)(*(uint32_t *)(*(uint32_t *)(a3 + 4) + 4 * v19) + 88), Buffer) )
    v18 = *(uint32_t *)(*(uint32_t *)(a3 + 4) + 4 * v19);
    if ( ++v19 >= v24 )
    if ( !v18 )
    goto LABEL_34;
    break;
    swprintf(v35, (const size_t)aDS_0, (const wchar_t *const)(v17 + 1), *((uint32_t *)Block + v17));
    SendMessageA(hWnd, 0x4CDu, 0, (LPARAM)v35);
    SendMessageA(hWnd, 0x19Au, v17, v18);
    __3_YAXPAX_Z(*((void **)Block + v17));
    v4 = v26;
    ++v17;
    while ( v17 < v25 );
    v20 = *(char **)(v4 + 64);
    if ( v20 )
    if ( MPCooperative::ReadCoopSaveINI(v20) && !*(uint8_t *)(v4 + 73) )
    LoadCoopCampaignSave(*(char **)(v4 + 64), Buffer);
    strcat(Buffer, g_Str_File__MAP);
    v25 = *(uint32_t *)(a3 + 16);
    v21 = 0;
    v22 = 0;
    if ( v25 > 0 )
    while ( !v21 )
    if ( !_strcmpi((const void *)(*(uint32_t *)(*(uint32_t *)(a3 + 4) + 4 * v22) + 88), Buffer) )
    v21 = *(uint32_t *)(*(uint32_t *)(a3 + 4) + 4 * v22);
    if ( ++v22 >= v25 )
    if ( !v21 )
    goto LABEL_47;
    break;
    StringCSF = GetStringCSF(aTxtCoopUseSave, 0, g_Str_File_MPCoop_cpp, 1726);
    SendMessageA(hWnd, 0x4CDu, 0, (LPARAM)StringCSF);
    SendMessageA(hWnd, 0x19Au, v17, v21);
    *(uint8_t *)(v26 + 73) = 1;
    LABEL_47:
    SendMessageA(hWnd, 0x186u, 0, 0);
    v27 = &VectorClass<unsigned short *>::`vftable';
    if ( Block )
    if ( BYTE1(v30) )
    __3_YAXPAX_Z(Block);
}

int  MPCooperative::_vt39(int *this)
{
    HWND GameUI; // eax
    HWND v3; // esi
    int result; // eax
    GameUI = (HWND)Dialog::FindGameUI();
    v3 = GameUI;
    if ( GameUI )
    CampaignCoop::Setup(this, GameUI, 0);
    SkirmishDialog::FillComboBoxes(v3);
    for ( result = 0; result < Game_PlayerCount; ++result )
    *(uint32_t *)(*(uint32_t *)(Game_PlayerInfoArray + 4 * result) + 107) = result;
    return result;
}

void  MPCooperative::vt_36_(int this)
{
    HWND Current; // eax
    HWND DlgItem; // edi
    LRESULT v4; // ebx
    char *v5; // esi
    int v6; // ecx
    int v7; // ebx
    int i; // edi
    HWND GameUI; // eax
    HWND v10; // edi
    const char *v11; // [esp+10h] [ebp-108h] BYREF
    char Buffer[260]; // [esp+14h] [ebp-104h] BYREF
    if ( Dialog::GetCurrentType() != 107 )
    v6 = *(uint32_t *)(this + 64);
    if ( v6 && *(uint8_t *)(this + 72) )
    if ( *(uint32_t *)(this + 76) )
    Movie::SetupScreen(v6, 0);
    else
    Movie::SetupScreen(v6, 1);
    Movie::SetupScreen(*(uint32_t *)(this + 64), *(uint32_t *)(this + 76));
    Array::GetElementAt(*(uint32_t *)(this + 64), &v11, -1);
    v7 = g_MultiplayerOptions;
    sprintf(Buffer, "%s.MAP", v11);
    for ( i = 0; i < v7; ++i )
    if ( !_strcmpi((const void *)(*(uint32_t *)(g_MultiplayerGameState + 4 * i) + 88), Buffer) )
    break;
    g_GameRulesOptions = i;
    *((uint32_t *)ScenarioClass_Instance + 1173) = i;
    LoadScenarioClassByIndex(i);
    GameUI = (HWND)Dialog::FindGameUI();
    v10 = GameUI;
    if ( GameUI )
    SetDialogPlayerName(GameUI, this);
    Dialog::ShowPlayerName(v10);
    Session::PrepareGame(v10);
    CheckGameSettingsChanged(1, 1);
    LABEL_21:
    v5 = *(char **)(this + 64);
    if ( !v5 )
    return;
    goto LABEL_22;
    if ( !*(uint8_t *)(this + 73) )
    goto LABEL_21;
    Current = Dialog::GetCurrent();
    DlgItem = GetDlgItem(Current, 1363);
    v4 = SendMessageA(DlgItem, 0x18Bu, 0, 0);
    if ( v4 != -1 )
    if ( SendMessageA(DlgItem, 0x188u, 0, 0) == v4 - 1 )
    SendMessageA(DlgItem, 0x186u, v4 - 2, 0);
    SendMessageA(DlgItem, 0x182u, v4 - 1, 0);
    *(uint8_t *)(this + 73) = 0;
    goto LABEL_21;
    v5 = *(char **)(this + 64);
    if ( !v5 )
    return;
    LABEL_22:
    String::AssignWideToChar(v5, (char *)&g_TypeClass_DefaultString, (char *)&g_TypeClass_DefaultString);
}

char  MPCooperative::vt_37_(LRESULT *this)
{
    LRESULT v2; // eax
    uint32_t *v3; // eax
    uint32_t *v4; // eax
    char *v5; // ecx
    LPARAM v6; // ebp
    int v7; // edi
    int v8; // esi
    bool v9; // zf
    HWND Current; // eax
    HWND DlgItem; // esi
    WPARAM v12; // ebx
    wchar_t *String; // eax
    wchar_t *v14; // eax
    char Destination[260]; // [esp+14h] [ebp-104h] BYREF
    v2 = *(this + 16);
    if ( !v2 )
    v3 = __2_YAPAXI_Z(0x70u);
    if ( v3 )
    v4 = MissionClass::Init(v3);
    else
    v4 = 0;
    *(this + 16) = (LRESULT)v4;
    LOBYTE(v2) = Movie::SetupScreen((int)v4, 0);
    v5 = (char *)*(this + 16);
    if ( v5 )
    if ( Game_PlayerCount == 2 )
    String::AssignWideToChar(v5, *(char **)Game_PlayerInfoArray, *(char **)(Game_PlayerInfoArray + 4));
    (*(void (__thiscall **)(LRESULT *))(*this + 96))(this);
    LOBYTE(v2) = MPCooperative::ReadCoopSaveINI(*(this + 16));
    if ( (uint8_t)v2 )
    if ( Dialog::GetCurrentType() == 107 )
    LOBYTE(v2) = *((uint8_t *)this + 73);
    if ( !(uint8_t)v2 )
    LoadCoopCampaignSave(Destination);
    LOBYTE(v2) = 0;
    v6 = 0;
    strcat(Destination, g_Str_File__MAP);
    v7 = g_MultiplayerOptions;
    v8 = 0;
    if ( g_MultiplayerOptions > 0 )
    v2 = g_MultiplayerGameState;
    while ( !v6 )
    v9 = _strcmpi((const void *)(*(uint32_t *)(v2 + 4 * v8) + 88), Destination) == 0;
    v2 = g_MultiplayerGameState;
    if ( v9 )
    v6 = *(uint32_t *)(g_MultiplayerGameState + 4 * v8);
    if ( ++v8 >= v7 )
    if ( !v6 )
    return v2;
    break;
    Current = Dialog::GetCurrent();
    DlgItem = GetDlgItem(Current, 1363);
    v2 = SendMessageA(DlgItem, 0x18Bu, 0, 0);
    v12 = v2;
    if ( v2 != -1 )
    String = GetStringCSF(aTxtCoopUseSave, 0, g_Str_File_MPCoop_cpp, 1914);
    SendMessageA(DlgItem, 0x4CDu, 0, (LPARAM)String);
    LOBYTE(v2) = SendMessageA(DlgItem, 0x19Au, v12, v6);
    *((uint8_t *)this + 73) = 1;
    else
    v14 = GetStringCSF(aTxtSaveCampAva, 0, g_Str_File_MPCoop_cpp, 1920);
    LOBYTE(v2) = (unsigned __int8)Dialog::ShowMessage(-1, (size_t)v14);
    return v2;
}

int MPCooperative::_vt38()
{
    return 2;
}

// 0x005C42D0
char  MPCooperative::UpdateMovieScore(int *this)
{
    void *v2; // eax
    int v3; // eax
    int v5; // ecx
    int v6; // esi
    uint32_t *v7; // eax
    bool v8; // zf
    int v9; // eax
    char v10; // bl
    int v11; // [esp+14h] [ebp-2Ch] BYREF
    int v12; // [esp+18h] [ebp-28h] BYREF
    int v13; // [esp+1Ch] [ebp-24h] BYREF
    int v14; // [esp+20h] [ebp-20h] BYREF
    uint8_t v15[4]; // [esp+24h] [ebp-1Ch] BYREF
    void **v16; // [esp+28h] [ebp-18h] BYREF
    void *Block; // [esp+2Ch] [ebp-14h]
    char v18; // [esp+35h] [ebp-Bh]
    int v19; // [esp+38h] [ebp-8h]
    int v20; // [esp+3Ch] [ebp-4h]
    if ( !*(this + 20) )
    v2 = __2_YAPAXI_Z(8u);
    if ( v2 )
    v3 = MPCooperative::initGame(v2);
    else
    v3 = 0;
    *(this + 20) = v3;
    if ( !*(this + 16) )
    return 0;
    MPCooperative::applyVoteResult(0, 0);
    v16 = &DynamicVectorClass<MPlayerScoreType *>::`vftable';
    v20 = 10;
    v19 = 0;
    MPCooperative::BuildScoreEntries(&v16, v15);
    v5 = *(this + 16);
    v12 = 0;
    if ( Movie::GetSectionID(v5, &v11) )
    Movie::GetSection((int)&g_DDrawSurfaceManager, v11, &v12);
    else
    v11 = -1;
    MPCooperative::GetMovieScore(&v14);
    Movie::GetState(*(this + 16), &v13);
    if ( v12 )
    if ( *((uint32_t *)ScenarioClass_Instance + 389) != -1 )
    Timer::GetTicks();
    v6 = *(uint32_t *)*(this + 20);
    else
    if ( *((uint32_t *)ScenarioClass_Instance + 389) != -1 )
    Timer::GetTicks();
    v6 = *(uint32_t *)*(this + 20);
    MPCooperative::processTurnEnd(&v16);
    (*(void (__thiscall **)(uint32_t))(v6 + 4))(*(this + 20));
    if ( v19 )
    do
    v7 = Block;
    if ( *(uint32_t *)Block )
    __3_YAXPAX_Z(*(void **)Block);
    v7 = Block;
    *v7 = 0;
    v8 = v19 == 0;
    if ( v19 > 0 )
    v9 = 0;
    v8 = v19-- == 1;
    if ( v19 > 0 )
    do
    ++v9;
    *((uint32_t *)Block + v9 - 1) = *((uint32_t *)Block + v9);
    while ( v9 < v19 );
    v8 = v19 == 0;
    while ( !v8 );
    v10 = byte_89E04C;
    byte_89E04C = 0;
    v16 = &VectorClass<MPlayerScoreType *>::`vftable';
    if ( Block )
    if ( v18 )
    __3_YAXPAX_Z(Block);
    return v10;
}

void  MPCooperative::sub_5C44E0(int *this, int a2)
{
    int v3; // ecx
    uint32_t *v4; // eax
    uint32_t *v5; // esi
    int v6; // ecx
    int v7; // ecx
    void (__thiscall **v8)(uint32_t *, int); // edi
    uint32_t *v9; // eax
    bool v10; // zf
    int v11; // eax
    uint32_t v12[6]; // [esp-14h] [ebp-58h] BYREF
    int v13; // [esp+4h] [ebp-40h]
    LPARAM v14; // [esp+8h] [ebp-3Ch]
    void ***v15; // [esp+Ch] [ebp-38h]
    int *v16; // [esp+10h] [ebp-34h]
    int v17; // [esp+1Ch] [ebp-28h] BYREF
    int v18; // [esp+20h] [ebp-24h] BYREF
    int v19; // [esp+24h] [ebp-20h] BYREF
    int v20; // [esp+28h] [ebp-1Ch] BYREF
    void **v21; // [esp+2Ch] [ebp-18h] BYREF
    void *Block; // [esp+30h] [ebp-14h]
    char v23; // [esp+39h] [ebp-Bh]
    int v24; // [esp+3Ch] [ebp-8h]
    int v25; // [esp+40h] [ebp-4h]
    v3 = *(this + 16);
    if ( v3 )
    MPCooperative::GetMovieScore(v3, &v19);
    Movie::GetState(*(this + 16), &v18);
    if ( (uint8_t)a2 )
    if ( v18 >= v19 )
    v4 = __2_YAPAXI_Z(4u);
    if ( v4 )
    v5 = MPCooperative::startGame(v4);
    if ( v5 )
    MPCooperative::applyVoteResult(&v21, 0, 0);
    v16 = &v20;
    v15 = &v21;
    v6 = *(this + 16);
    v21 = &DynamicVectorClass<MPlayerScoreType *>::`vftable';
    v25 = 10;
    v24 = 0;
    MPCooperative::BuildScoreEntries(v6, (int)&v21, &v20);
    v7 = *(this + 16);
    v17 = 0;
    if ( Movie::GetSectionID(v7, &a2) )
    Movie::GetSection((int)&g_DDrawSurfaceManager, a2, &v17);
    else
    a2 = -1;
    v8 = (void (__thiscall **)(uint32_t *, int))*v5;
    v16 = *(int **)(v17 + 4);
    v15 = (void ***)(a2 + 1);
    v14 = dword_A8EB68;
    v13 = v20;
    MPCooperative::processTurnEnd(v12, &v21);
    ((void (__thiscall *)(uint32_t *, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, int, LPARAM, void ***, int *))v8[1])(
    v5,
    v12[0],
    v12[1],
    v12[2],
    v12[3],
    v12[4],
    v12[5],
    v13,
    v14,
    v15,
    v16);
    (*(void (__thiscall **)(uint32_t *, int))*v5)(v5, 1);
    if ( v24 )
    do
    v9 = Block;
    if ( *(uint32_t *)Block )
    __3_YAXPAX_Z(*(void **)Block);
    v9 = Block;
    *v9 = 0;
    v10 = v24 == 0;
    if ( v24 > 0 )
    v11 = 0;
    v10 = v24-- == 1;
    if ( v24 > 0 )
    do
    ++v11;
    *((uint32_t *)Block + v11 - 1) = *((uint32_t *)Block + v11);
    while ( v11 < v24 );
    v10 = v24 == 0;
    while ( !v10 );
    v21 = &VectorClass<MPlayerScoreType *>::`vftable';
    if ( Block )
    if ( v23 )
    __3_YAXPAX_Z(Block);
}

int  MPCooperative::sub_5C4670(int *this)
{
    int v2; // esi
    int v3; // ecx
    int v5; // [esp+8h] [ebp-Ch] BYREF
    int v6; // [esp+Ch] [ebp-8h] BYREF
    int v7; // [esp+10h] [ebp-4h] BYREF
    v2 = 0;
    v3 = *(this + 16);
    if ( !v3 )
    return 0;
    MPCooperative::GetMovieScore(v3, &v5);
    Movie::GetState(*(this + 16), &v6);
    if ( v5 == v6 )
    Movie::GetSectionID(*(this + 16), &v7);
    v2 = 1 << v7;
    Debug::Log();
    return v2;
}

int  MPCooperative::sub_5C4CA0(int *this)
{
    int v2; // ebx
    int result; // eax
    int v4; // esi
    char *v5; // eax
    char *v6; // esi
    int v7; // eax
    uint32_t *v8; // [esp+8h] [ebp-14h]
    int v9; // [esp+Ch] [ebp-10h] BYREF
    int v10; // [esp+10h] [ebp-Ch] BYREF
    uint8_t v11[8]; // [esp+14h] [ebp-8h] BYREF
    PtrVector::Destroy(&g_PlayerInfoCount);
    v2 = 0;
    g_ScenarioLoadFlags = 0;
    result = *(this + 26);
    if ( result > 0 )
    do
    v4 = 0;
    if ( HouseClass_Count > 0 )
    while ( _wcsicmp(
    (const wchar_t *)(*(uint32_t *)&HouseClass_Array->gap0[4 * v4] + 90154),
    *(const wchar_t **)(*(this + 23) + 4 * v2)) )
    if ( ++v4 >= HouseClass_Count )
    goto LABEL_16;
    *(uint32_t *)(*(uint32_t *)(*(this + 23) + 4 * v2) + 111) = v4;
    v5 = (char *)__2_YAPAXI_Z(0x85u);
    v6 = v5;
    if ( v5 )
    Waypoint::InitInvalid(v5 + 40);
    v8 = v6;
    else
    v8 = 0;
    v6 = 0;
    wcscpy((wchar_t *)v6, *(const wchar_t **)(*(this + 23) + 4 * v2));
    *(uint32_t *)(v6 + 123) = *(uint32_t *)(*(uint32_t *)(*(this + 23) + 4 * v2) + 123);
    *(uint32_t *)(v6 + 75) = *(uint32_t *)(*(uint32_t *)(*(this + 23) + 4 * v2) + 75);
    *(uint32_t *)(v6 + 83) = *(uint32_t *)(*(uint32_t *)(*(this + 23) + 4 * v2) + 83);
    strcpy(v6 + 52, (const char *)(*(uint32_t *)(*(this + 23) + 4 * v2) + 52));
    *(uint32_t *)((char *)v8 + 79) = *(uint32_t *)(*(uint32_t *)(*(this + 23) + 4 * v2) + 79);
    *(uint32_t *)((char *)v8 + 87) = *(uint32_t *)(*(uint32_t *)(*(this + 23) + 4 * v2) + 87);
    *(uint32_t *)((char *)v8 + 107) = *(uint32_t *)(*(uint32_t *)(*(this + 23) + 4 * v2) + 107);
    *(uint32_t *)((char *)v8 + 115) = *(uint32_t *)(*(uint32_t *)(*(this + 23) + 4 * v2) + 115);
    *(uint32_t *)((char *)v8 + 119) = *(uint32_t *)(*(uint32_t *)(*(this + 23) + 4 * v2) + 119);
    *(uint32_t *)((char *)v8 + 123) = *(uint32_t *)(*(uint32_t *)(*(this + 23) + 4 * v2) + 123);
    Network::GetAddress((uint32_t *)(*(uint32_t *)(*(this + 23) + 4 * v2) + 40), &v10, (int)v11, &v9);
    NetworkID::Assign(v8 + 10, &v10, (int)v11, v9);
    if ( Game_PlayerCount < dword_A8DA7C
    || (byte_A8DA81 || !dword_A8DA7C)
    && dword_A8DA88 > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, uint32_t))(g_PlayerInfoCount + 8))(
    &g_PlayerInfoCount,
    dword_A8DA7C + dword_A8DA88,
    0) )
    v7 = Game_PlayerCount++;
    *(uint32_t *)(Game_PlayerInfoArray + 4 * v7) = v8;
    ++g_ScenarioLoadFlags;
    LABEL_16:
    result = *(this + 26);
    ++v2;
    while ( v2 < result );
    return result;
}

char MPCooperative::sub_5C4F00()
{
    return 0;
}

uint32_t *__userpurge MPCooperative::_vt00@<eax>(uint32_t *Block@<ecx>, int a2@<ebp>, char a3)
{
    sub_5C1640(Block, a2);
    if ( (a3 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

uint32_t * MPCooperative::sub_5C4FC0(uint32_t *Block, char a2)
{
    void *v3; // eax
    v3 = (void *)*(Block + 1);
    *Block = &VectorClass<MPlayerScoreType *>::`vftable';
    if ( v3 && *((uint8_t *)Block + 13) )
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
    *((uint8_t *)Block + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

void  MPCooperative::sub_5C5010(int this)
{
    void *v2; // eax
    v2 = *(void **)(this + 4);
    *(uint32_t *)(this + 16) = 0;
    if ( v2 && *(uint8_t *)(this + 13) )
    __3_YAXPAX_Z(v2);
    *(uint32_t *)(this + 4) = 0;
    *(uint8_t *)(this + 13) = 0;
    *(uint32_t *)(this + 8) = 0;
}

unsigned int  MPCooperative::sub_5C5040(int this, int a2)
{
    if ( *(uint8_t *)(this + 12) )
    return (unsigned int)(a2 - *(uint32_t *)(this + 4)) >> 2;
    else
    return 0;
}

int  MPCooperative::sub_5C5060(uint32_t *this, int a2)
{
    return *(uint32_t *)(*(this + 1) + 4 * a2);
}

void  MPCooperative::sub_5C50D0(int this)
{
    void *v2; // eax
    v2 = *(void **)(this + 4);
    *(uint32_t *)(this + 16) = 0;
    if ( v2 && *(uint8_t *)(this + 13) )
    __3_YAXPAX_Z(v2);
    *(uint32_t *)(this + 4) = 0;
    *(uint8_t *)(this + 13) = 0;
    *(uint32_t *)(this + 8) = 0;
}

unsigned int  MPCooperative::sub_5C5100(int this, int a2)
{
    if ( *(uint8_t *)(this + 12) )
    return (unsigned int)(a2 - *(uint32_t *)(this + 4)) >> 2;
    else
    return 0;
}

char  MPCooperative::_vt01(int *this, int a2)
{
    int v2; // esi
    int v3; // edx
    uint32_t *v4; // eax
    int v5; // ecx
    v2 = *(this + 2);
    if ( v2 == *(uint32_t *)(a2 + 8) )
    v3 = 0;
    if ( v2 <= 0 )
    return 1;
    v4 = (uint32_t *)*(this + 1);
    v5 = *(uint32_t *)(a2 + 4) - (uint32_t)v4;
    while ( *v4 == *(uint32_t *)((char *)v4 + v5) )
    ++v3;
    ++v4;
    if ( v3 >= v2 )
    return 1;
    return 0;
}

char  MPCooperative::_vt02(void *this, int a2, uint32_t *a3)
{
    uint32_t *v4; // edi
    int v6; // ecx
    int i; // eax
    if ( a2 )
    *((uint8_t *)this + 12) = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    *((uint8_t *)this + 12) = 1;
    if ( v4 )
    if ( *((uint32_t *)this + 1) )
    v6 = *((uint32_t *)this + 2);
    if ( a2 < v6 )
    v6 = a2;
    for ( i = 0; i < v6; v4[i - 1] = *(uint32_t *)(*((uint32_t *)this + 1) + 4 * i - 4) )
    ++i;
    if ( *((uint8_t *)this + 13) )
    __3_YAXPAX_Z(*((void **)this + 1));
    *((uint32_t *)this + 1) = 0;
    *((uint32_t *)this + 1) = v4;
    *((uint32_t *)this + 2) = a2;
    *((uint8_t *)this + 13) = a3 == 0;
    return 1;
    else
    return 0;
    else
    (*(void (__thiscall **)(void *))(*(uint32_t *)this + 12))(this);
    return 1;
}

void  MPCooperative::_vt03(int this)
{
    if ( *(uint32_t *)(this + 4) && *(uint8_t *)(this + 13) )
    __3_YAXPAX_Z(*(void **)(this + 4));
    *(uint32_t *)(this + 4) = 0;
    *(uint8_t *)(this + 13) = 0;
    *(uint32_t *)(this + 8) = 0;
}

int  MPCooperative::sub_5C5250(int this, uint32_t *a2)
{
    int result; // eax
    int v3; // edx
    uint32_t *i; // ecx
    if ( !*(uint8_t *)(this + 12) )
    return 0;
    v3 = *(uint32_t *)(this + 8);
    result = 0;
    if ( v3 <= 0 )
    return -1;
    for ( i = *(uint32_t **)(this + 4); *i != *a2; ++i )
    if ( ++result >= v3 )
    return -1;
    return result;
}

unsigned int  MPCooperative::sub_5C5290(int this, int a2)
{
    if ( *(uint8_t *)(this + 12) )
    return (unsigned int)(a2 - *(uint32_t *)(this + 4)) >> 2;
    else
    return 0;
}

char  MPCooperative::sub_5C52B0(void *this, int a2, uint32_t *a3)
{
    uint32_t *v4; // edi
    int v5; // ecx
    int i; // eax
    int v7; // eax
    if ( a2 )
    *((uint8_t *)this + 12) = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    *((uint8_t *)this + 12) = 1;
    if ( !v4 )
    return 0;
    if ( *((uint32_t *)this + 1) )
    v5 = *((uint32_t *)this + 2);
    if ( a2 < v5 )
    v5 = a2;
    for ( i = 0; i < v5; v4[i - 1] = *(uint32_t *)(*((uint32_t *)this + 1) + 4 * i - 4) )
    ++i;
    if ( *((uint8_t *)this + 13) )
    __3_YAXPAX_Z(*((void **)this + 1));
    *((uint32_t *)this + 1) = 0;
    *((uint32_t *)this + 1) = v4;
    *((uint32_t *)this + 2) = a2;
    *((uint8_t *)this + 13) = a3 == 0;
    else
    (*(void (__thiscall **)(void *))(*(uint32_t *)this + 12))(this);
    v7 = *((uint32_t *)this + 2);
    if ( v7 < *((uint32_t *)this + 4) )
    *((uint32_t *)this + 4) = v7;
    return 1;
}

int  MPCooperative::sub_5C5360(int *this, uint32_t *a2)
{
    int v2; // edx
    int result; // eax
    uint32_t *i; // ecx
    v2 = *(this + 4);
    result = 0;
    if ( v2 <= 0 )
    return -1;
    for ( i = (uint32_t *)*(this + 1); *i != *a2; ++i )
    if ( ++result >= v2 )
    return -1;
    return result;
}

char  MPCooperative::sub_5C53D0(void *this, int a2, uint32_t *a3)
{
    uint32_t *v4; // edi
    int v6; // ecx
    int i; // eax
    if ( a2 )
    *((uint8_t *)this + 12) = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    *((uint8_t *)this + 12) = 1;
    if ( v4 )
    if ( *((uint32_t *)this + 1) )
    v6 = *((uint32_t *)this + 2);
    if ( a2 < v6 )
    v6 = a2;
    for ( i = 0; i < v6; v4[i - 1] = *(uint32_t *)(*((uint32_t *)this + 1) + 4 * i - 4) )
    ++i;
    if ( *((uint8_t *)this + 13) )
    __3_YAXPAX_Z(*((void **)this + 1));
    *((uint32_t *)this + 1) = 0;
    *((uint32_t *)this + 1) = v4;
    *((uint32_t *)this + 2) = a2;
    *((uint8_t *)this + 13) = a3 == 0;
    return 1;
    else
    return 0;
    else
    (*(void (__thiscall **)(void *))(*(uint32_t *)this + 12))(this);
    return 1;
}

void  MPCooperative::sub_5C5480(int this)
{
    if ( *(uint32_t *)(this + 4) && *(uint8_t *)(this + 13) )
    __3_YAXPAX_Z(*(void **)(this + 4));
    *(uint32_t *)(this + 4) = 0;
    *(uint8_t *)(this + 13) = 0;
    *(uint32_t *)(this + 8) = 0;
}

int  MPCooperative::sub_5C54B0(int this, uint32_t *a2)
{
    int result; // eax
    int v3; // edx
    uint32_t *i; // ecx
    if ( !*(uint8_t *)(this + 12) )
    return 0;
    v3 = *(uint32_t *)(this + 8);
    result = 0;
    if ( v3 <= 0 )
    return -1;
    for ( i = *(uint32_t **)(this + 4); *i != *a2; ++i )
    if ( ++result >= v3 )
    return -1;
    return result;
}

unsigned int  MPCooperative::sub_5C54F0(int this, int a2)
{
    if ( *(uint8_t *)(this + 12) )
    return (unsigned int)(a2 - *(uint32_t *)(this + 4)) >> 2;
    else
    return 0;
}

char  MPCooperative::sub_5C5770(void *this, int a2, uint32_t *a3)
{
    uint32_t *v4; // edi
    int v5; // ecx
    int i; // eax
    int v7; // eax
    if ( a2 )
    *((uint8_t *)this + 12) = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    *((uint8_t *)this + 12) = 1;
    if ( !v4 )
    return 0;
    if ( *((uint32_t *)this + 1) )
    v5 = *((uint32_t *)this + 2);
    if ( a2 < v5 )
    v5 = a2;
    for ( i = 0; i < v5; v4[i - 1] = *(uint32_t *)(*((uint32_t *)this + 1) + 4 * i - 4) )
    ++i;
    if ( *((uint8_t *)this + 13) )
    __3_YAXPAX_Z(*((void **)this + 1));
    *((uint32_t *)this + 1) = 0;
    *((uint32_t *)this + 1) = v4;
    *((uint32_t *)this + 2) = a2;
    *((uint8_t *)this + 13) = a3 == 0;
    else
    (*(void (__thiscall **)(void *))(*(uint32_t *)this + 12))(this);
    v7 = *((uint32_t *)this + 2);
    if ( v7 < *((uint32_t *)this + 4) )
    *((uint32_t *)this + 4) = v7;
    return 1;
}

int  MPCooperative::sub_5C5820(int *this, uint32_t *a2)
{
    int v2; // edx
    int result; // eax
    uint32_t *i; // ecx
    v2 = *(this + 4);
    result = 0;
    if ( v2 <= 0 )
    return -1;
    for ( i = (uint32_t *)*(this + 1); *i != *a2; ++i )
    if ( ++result >= v2 )
    return -1;
    return result;
}

uint32_t * MPCooperative::sub_5C5850(uint32_t *Block, char a2)
{
    void *v3; // eax
    v3 = (void *)*(Block + 1);
    *Block = &VectorClass<MPlayerScoreType *>::`vftable';
    if ( v3 && *((uint8_t *)Block + 13) )
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
    *((uint8_t *)Block + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

uint32_t * MPCooperative::sub_5C58A0(uint32_t *Block, char a2)
{
    void *v3; // eax
    v3 = (void *)*(Block + 1);
    *Block = &VectorClass<NodeNameType *>::`vftable';
    if ( v3 && *((uint8_t *)Block + 13) )
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
    *((uint8_t *)Block + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

uint32_t * MPCooperative::sub_5C5990(uint32_t *Block, char a2)
{
    void *v3; // eax
    v3 = (void *)*(Block + 1);
    *Block = &VectorClass<CoopCampaignClass *>::`vftable';
    if ( v3 && *((uint8_t *)Block + 13) )
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
    *((uint8_t *)Block + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

char MPCooperative::_vt16()
{
    return 0;
}

