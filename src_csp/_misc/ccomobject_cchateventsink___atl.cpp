#include "ccomobject_cchateventsink___atl.hpp"

int  CComObject_CChatEventSink___ATL::DispatchConnectionPairs(char *this)
{
    int v1; // edi
    uint32_t *v2; // ebx
    wchar_t **v3; // esi
    int v4; // eax
    int *v5; // esi
    int v6; // ebx
    int v7; // edi
    int v8; // ebp
    int v9; // esi
    int v10; // eax
    int v11; // ebp
    uint32_t *v12; // edi
    int v13; // ebx
    int *v14; // edi
    char *v15; // esi
    int v16; // eax
    int v17; // edx
    int v19; // [esp+10h] [ebp-30h]
    int v20; // [esp+10h] [ebp-30h]
    int i; // [esp+14h] [ebp-2Ch]
    int v22; // [esp+14h] [ebp-2Ch]
    int v23; // [esp+18h] [ebp-28h]
    uint32_t *v24; // [esp+18h] [ebp-28h]
    uint32_t v26[8]; // [esp+20h] [ebp-20h] BYREF
    memset(v26, 0, sizeof(v26));
    v1 = 0;
    v2 = v26;
    v3 = (wchar_t **)&g_NetworkPlayerName;
    do
    if ( IsKnownPointer(*v3) )
    *v2++ = v1;
    ++v3;
    ++v1;
    while ( (int)v3 < (int)&g_PlayerNameListEnd );
    v4 = Game_PlayerCount;
    for ( i = 0; i < v4; ++i )
    v19 = 0;
    if ( v4 - 1 > 0 )
    v5 = &v26[1];
    do
    v6 = *v5;
    v7 = *(v5 - 1);
    v8 = dword_A8DC2C[v7];
    v23 = sub_5DA040(dword_A8DC2C[*v5]);
    if ( sub_5DA040(v8) < v23 )
    *(v5 - 1) = v6;
    *v5 = v7;
    v4 = Game_PlayerCount;
    ++v5;
    ++v19;
    while ( v19 < Game_PlayerCount - 1 );
    Debug::Log();
    v9 = 0;
    v20 = 0;
    Debug::Log();
    v10 = Game_PlayerCount;
    if ( Game_PlayerCount > 0 )
    v11 = 1;
    v12 = v26;
    v22 = 1;
    v24 = v26;
    do
    if ( v11 < v10 )
    v13 = *v12;
    v14 = v12 + 1;
    v15 = this + 8 * v9;
    do
    v16 = *v14;
    *(uint32_t *)v15 = v13;
    *((uint32_t *)v15 + 1) = v16;
    Debug::Log();
    v10 = Game_PlayerCount;
    v17 = v20 + 1;
    v15 += 8;
    ++v11;
    ++v14;
    ++v20;
    while ( v11 < Game_PlayerCount );
    v12 = v24;
    v11 = v22;
    v9 = v17;
    ++v11;
    ++v12;
    v22 = v11;
    v24 = v12;
    while ( v11 - 1 < v10 );
    return v9;
}

int __stdcall CComObject_CChatEventSink___ATL::vt_03_(int a1, int a2, int a3)
{
    int v3; // ebp
    int v4; // ebx
    __time32_t v5; // eax
    wchar_t *v6; // eax
    int v8; // eax
    int v9; // esi
    int v10; // ebp
    char *v11; // ebx
    char *v12; // esi
    char v13; // al
    unsigned int v14; // ecx
    char *v15; // edi
    int v16; // ebp
    char *v17; // ebx
    char *v18; // esi
    char v19; // al
    unsigned int v20; // ecx
    char *v21; // edi
    int v22; // edi
    char *v23; // esi
    unsigned __int8 v24; // al
    char *v25; // eax
    char *v26; // eax
    char *v27; // eax
    char *v28; // eax
    char *v29; // eax
    char *v30; // eax
    char *v31; // eax
    char *v32; // eax
    char *v33; // ebp
    char *v34; // eax
    char *v35; // eax
    char *v36; // ebx
    int v37; // eax
    wchar_t *v38; // esi
    HWND v39; // eax
    const wchar_t *v40; // [esp+0h] [ebp-324h]
    char v41; // [esp+Fh] [ebp-315h]
    int v42; // [esp+10h] [ebp-314h]
    int v43; // [esp+10h] [ebp-314h]
    int v44; // [esp+14h] [ebp-310h]
    int v45; // [esp+14h] [ebp-310h]
    int v46; // [esp+18h] [ebp-30Ch]
    int v47; // [esp+1Ch] [ebp-308h]
    int v48; // [esp+20h] [ebp-304h]
    char v49[128]; // [esp+24h] [ebp-300h] BYREF
    char v50[128]; // [esp+A4h] [ebp-280h] BYREF
    char String[128]; // [esp+124h] [ebp-200h] BYREF
    char v52[128]; // [esp+1A4h] [ebp-180h] BYREF
    char v53[128]; // [esp+224h] [ebp-100h] BYREF
    char v54[128]; // [esp+2A4h] [ebp-80h] BYREF
    v3 = 0;
    v4 = a3;
    v44 = a3;
    v42 = 0;
    v48 = 0;
    v47 = 0;
    v5 = time(0);
    srand(v5);
    if ( a2 < 0 )
    SetEvent(Handles);
    v6 = GetStringCSF(aTxtNoServList, 0, g_Str_File_wonline_cpp, 5275);
    swprintf(&word_B77AD0, (const size_t)v6, v40);
    return 0;
    v8 = g_WOL_UserList;
    v41 = 0;
    if ( !a3 )
    goto LABEL_75;
    do
    if ( strcmp((const char *)(v4 + 95), "IRC") )
    if ( !strcmp((const char *)(v4 + 95), (const char *)&off_84AB9C) )
    strcpy(v49, (const char *)(v4 + 100));
    strtok(v49, asc_81C8FC);
    v25 = strtok(0, asc_81C8FC);
    if ( v25 )
    strcpy(g_WOL_ConnectFlag, v25);
    v26 = strtok(0, asc_81C8FC);
    if ( v26 )
    g_WOL_GameConfig = atol(v26);
    else if ( strcmp((const char *)(v4 + 95), aGam) || v47 )
    if ( !strcmp((const char *)(v4 + 95), aGam) && v47 == 1 )
    qmemcpy(&unk_B75E58, (const void *)v4, 0xF8u);
    strcpy(v50, byte_B75EBC);
    strtok(v50, asc_81C8FC);
    v29 = strtok(0, asc_81C8FC);
    if ( v29 )
    strcpy(&byte_B77CE8, v29);
    v30 = strtok(0, asc_81C8FC);
    if ( v30 )
    dword_B75F5C = atol(v30);
    v47 = 2;
    else if ( !strcmp((const char *)(v4 + 95), aWdt_1) )
    qmemcpy(&unk_B769C8, (const void *)v4, 0xF8u);
    strcpy(v52, byte_B76A2C);
    strtok(v52, asc_81C8FC);
    v31 = strtok(0, asc_81C8FC);
    if ( v31 )
    strcpy(byte_B73B34, v31);
    v32 = strtok(0, asc_81C8FC);
    if ( v32 )
    dword_B76B0C = atol(v32);
    else if ( !_strcmpi((const void *)(v4 + 95), aMgl) )
    Debug::Log();
    if ( !v41 )
    dword_B77E1C = 0;
    memset(byte_B73E44, 0, 0x2000u);
    memset(dword_B76338, 0, sizeof(dword_B76338));
    v41 = 1;
    v33 = (char *)__2_YAPAXI_Z(0xF8u);
    qmemcpy(v33, (const void *)v4, 0xF8u);
    strcpy(v54, v33 + 100);
    strtok(v54, asc_81C8FC);
    v34 = strtok(0, asc_81C8FC);
    if ( v34 )
    strcpy(&byte_B73E44[128 * dword_B77E1C], v34);
    v35 = strtok(0, asc_81C8FC);
    if ( v35 )
    dword_B76338[dword_B77E1C] = atol(v35);
    Debug::Log();
    ++dword_B77E1C;
    __3_YAXPAX_Z(v33);
    else
    qmemcpy(&unk_B75E58, (const void *)v4, 0xF8u);
    strcpy(v53, byte_B75EBC);
    strtok(v53, asc_81C8FC);
    v27 = strtok(0, asc_81C8FC);
    if ( v27 )
    strcpy(byte_B77930, v27);
    v28 = strtok(0, asc_81C8FC);
    if ( v28 )
    dword_B76184 = atol(v28);
    byte_B77CE8 = 0;
    dword_B75F5C = 0;
    v47 = 1;
    LABEL_72:
    v8 = g_WOL_UserList;
    goto LABEL_73;
    v9 = v8;
    if ( v42 )
    v46 = v8;
    v16 = dword_B778DC;
    if ( v8 >= dword_B778DC )
    v16 = 2 * v8;
    if ( 2 * v8 < 10 )
    v16 = 10;
    v17 = (char *)__2_YAPAXI_Z(248 * v16);
    memset(v17, 0, 4 * ((unsigned int)(248 * v16) >> 2));
    v18 = (char *)dword_B778E0;
    if ( dword_B778E0 )
    v19 = -8 * g_WOL_UserList;
    v20 = (unsigned int)(248 * g_WOL_UserList) >> 2;
    qmemcpy(v17, dword_B778E0, 4 * v20);
    qmemcpy(&v17[4 * v20], &v18[4 * v20], v19 & 3);
    v18 = (char *)dword_B778E0;
    __3_YAXPAX_Z(v18);
    v8 = g_WOL_UserList;
    v9 = v46;
    dword_B778E0 = v17;
    v4 = v44;
    dword_B778DC = v16;
    if ( v8 >= v16 )
    CChatEventSink::ProcessChatEvent(&g_WOL_UserList);
    v8 = g_WOL_UserList;
    if ( v9 < v8 )
    memcpy((char *)dword_B778E0 + 248 * v9 + 248, (char *)dword_B778E0 + 248 * v9, 248 * v8 - 248 * v9);
    v8 = g_WOL_UserList;
    v21 = (char *)dword_B778E0 + 248 * v9;
    if ( v21 )
    qmemcpy(v21, (const void *)v4, 0xF8u);
    v8 = g_WOL_UserList;
    g_WOL_UserList = v8 + 1;
    strcpy(String, (const char *)(v4 + 24));
    v22 = -1;
    v23 = strtok(String, Delimiter);
    if ( v23 )
    while ( 1 )
    v22 = atol(v23);
    v24 = g_NetworkRematchState;
    if ( v22 == (unsigned __int8)g_NetworkRematchState )
    break;
    if ( !strchr(v23, 58) )
    v23 = strtok(0, Delimiter);
    if ( v23 )
    continue;
    goto LABEL_35;
    else
    LABEL_35:
    v24 = g_NetworkRematchState;
    if ( v22 == v24 && 1.0 / (double)++v48 >= (double)rand() * 0.00003051850947599719 )
    dword_B76468 = v42;
    dword_B779CC = dword_B76468;
    ++v42;
    goto LABEL_72;
    v43 = v8;
    v10 = dword_B778DC;
    if ( v8 >= dword_B778DC )
    v10 = 2 * v8;
    if ( 2 * v8 < 10 )
    v10 = 10;
    v11 = (char *)__2_YAPAXI_Z(248 * v10);
    memset(v11, 0, 4 * ((unsigned int)(248 * v10) >> 2));
    v12 = (char *)dword_B778E0;
    if ( dword_B778E0 )
    v13 = -8 * g_WOL_UserList;
    v14 = (unsigned int)(248 * g_WOL_UserList) >> 2;
    qmemcpy(v11, dword_B778E0, 4 * v14);
    qmemcpy(&v11[4 * v14], &v12[4 * v14], v13 & 3);
    v12 = (char *)dword_B778E0;
    __3_YAXPAX_Z(v12);
    v8 = g_WOL_UserList;
    v9 = v43;
    dword_B778E0 = v11;
    v4 = v44;
    dword_B778DC = v10;
    if ( v8 >= v10 )
    CChatEventSink::ProcessChatEvent(&g_WOL_UserList);
    v8 = g_WOL_UserList;
    if ( v9 < v8 )
    memcpy((char *)dword_B778E0 + 248 * v9 + 248, (char *)dword_B778E0 + 248 * v9, 248 * v8 - 248 * v9);
    v8 = g_WOL_UserList;
    v15 = (char *)dword_B778E0 + 248 * v9;
    if ( v15 )
    qmemcpy(v15, (const void *)v4, 0xF8u);
    v8 = g_WOL_UserList;
    ++v8;
    dword_B76468 = 0;
    g_WOL_UserList = v8;
    v42 = 1;
    LABEL_73:
    v4 = *(uint32_t *)(v4 + 20);
    v44 = v4;
    while ( v4 );
    v3 = 0;
    LABEL_75:
    v36 = 0;
    if ( v8 > 0 )
    v45 = 0;
    do
    if ( v45 >= 0 && v3 < v8 )
    v36 = (char *)dword_B778E0 + v45;
    strcpy(v36 + 228, String::GetOrEmpty((char **)&g_WebBrowser));
    strcpy(v36 + 238, String::GetOrEmpty(&g_WebBrowserConfig));
    ++v3;
    v8 = g_WOL_UserList;
    v45 += 248;
    while ( v3 < g_WOL_UserList );
    Debug::Log();
    if ( dword_B77E1C <= 1 )
    v37 = 0;
    else
    v37 = Random::Range(Randomizer_Global, 0, dword_B77E1C - 1);
    dword_B77E20 = v37;
    Debug::Log();
    v38 = GetStringCSF(aTxtDetectingFi, 0, g_Str_File_wonline_cpp, 5458);
    v39 = (HWND)Dialog::FindByHandle((void *)0xC4);
    if ( v39 )
    SendDlgItemMessageA(v39, 1458, 0x4B2u, 0, (LPARAM)v38);
    CCFileClass::WriteINIString(&dword_ABFEC8);
    SetEvent(dword_B73688);
    return 0;
}

int __stdcall CComObject_CChatEventSink___ATL::vt_04_(int a1, int a2, int a3)
{
    int v3; // ecx
    int v4; // esi
    int v5; // eax
    HWND v6; // eax
    HWND Current; // eax
    HWND DlgItem; // eax
    wchar_t *v9; // eax
    const wchar_t *v10; // ebp
    wchar_t *v11; // eax
    HWND v12; // edi
    HWND v13; // ebx
    wchar_t *v14; // eax
    wchar_t *v15; // eax
    int v17; // [esp+8h] [ebp-4C4h]
    void *v18; // [esp+1Ch] [ebp-4B0h] BYREF
    int v19; // [esp+20h] [ebp-4ACh]
    uint32_t v20[3]; // [esp+24h] [ebp-4A8h] BYREF
    CHAR Buffer[260]; // [esp+30h] [ebp-49Ch] BYREF
    char v22[260]; // [esp+134h] [ebp-398h] BYREF
    char v23[260]; // [esp+238h] [ebp-294h] BYREF
    wchar_t String[200]; // [esp+33Ch] [ebp-190h] BYREF
    v3 = 0;
    if ( a2 < 0 )
    goto LABEL_16;
    v4 = a3;
    if ( !a3 )
    goto LABEL_16;
    dword_B77DCC = 1;
    v5 = a3;
    do
    v5 = *(uint32_t *)(v5 + 12);
    ++v3;
    while ( v5 );
    v19 = v3;
    v6 = (HWND)Dialog::FindByHandle((void *)0xC4);
    if ( v6 )
    g_WOL_ChannelList &= ~0x10u;
    if ( !g_WOL_ChannelList )
    CloseDialog(v6, 0);
    Current = Dialog::GetCurrent();
    DlgItem = GetDlgItem(Current, 1344);
    if ( DlgItem )
    SetFocus(DlgItem);
    v9 = GetStringCSF(aTxtUpgraderequ, 0, g_Str_File_wonline_cpp, 5504);
    if ( ShowDialogConfirm(v9, 4, (int)GameLoop::Thunk, 0) == 7 )
    LABEL_16:
    SetEvent(Handles);
    return 0;
    else
    GetCurrentDirectoryA(0x100u, Buffer);
    v10 = 0;
    while ( 1 )
    sprintf(v22, "%s/%s", (const char *)(v4 + 81), (const char *)(v4 + 337));
    sprintf(v23, "%s\\%s", (const char *)(v4 + 468), (const char *)(v4 + 337));
    CreateDirectoryA((LPCSTR)(v4 + 468), 0);
    (*(void (__stdcall **)(LPVOID, int, int, int, char *, char *, char *))(*(uint32_t *)dword_AC1174 + 12))(
    dword_AC1174,
    v4 + 16,
    v4 + 370,
    v4 + 403,
    v22,
    v23,
    g_Str_SOFTWARE_Westwood_Yuri_s_Reven);
    v10 = (const wchar_t *)((char *)v10 + 1);
    v17 = v19;
    v11 = GetStringCSF(aTxtDownloading, 0, g_Str_File_wonline_cpp, 5526);
    swprintf(String, (const size_t)v11, v10, v17);
    WideString::Assign((wchar_t **)&v18, String);
    SimpleDialogControl::Constructor(v20);
    v20[0] = &off_7F7624;
    v12 = (HWND)CreateDialog(0xD3u, (INT_PTR (__stdcall *)(HWND, UINT, WPARAM, LPARAM))sub_78DA30, 0);
    v13 = GetDlgItem(v12, 1479);
    v14 = WideString::GetOrEmpty_Alt((wchar_t **)&v18);
    SendMessageA(v13, 0x4B2u, 0, (LPARAM)v14);
    if ( MessageDialogLoopAlt(v12, (unsigned __int8 (*)(void))GameLoop::Thunk, 0, 1, 1) == 2 )
    break;
    v4 = *(uint32_t *)(v4 + 12);
    v20[0] = &off_7F7624;
    OwnerDrawControl::InitVtable(v20);
    DeleteAndZero::Alt(&v18);
    if ( !v4 )
    v15 = GetStringCSF(aTxtGameRestart, 0, g_Str_File_wonline_cpp, 5558);
    ShowDialogConfirm(v15, 0, (int)GameLoop::Thunk, 0);
    SetEvent(dword_B736A4);
    SetCurrentDirectoryA(Buffer);
    return 0;
    SetEvent(Handles);
    SetCurrentDirectoryA(Buffer);
    v20[0] = &off_7F7624;
    OwnerDrawControl::InitVtable(v20);
    DeleteAndZero::Alt(&v18);
    return 0;
}

int __stdcall CComObject_CChatEventSink___ATL::vt_32_(int a1, int a2, int a3, int a4)
{
    int v4; // ebp
    signed int v5; // ecx
    signed int v6; // eax
    char *v7; // edx
    signed int v8; // eax
    int v9; // ebx
    char *v10; // eax
    char *v11; // esi
    void *v12; // ebp
    char v13; // dl
    size_t v14; // ecx
    char v15; // dl
    bool v16; // cc
    int v17; // esi
    signed int v19; // [esp+1Ch] [ebp-E8h]
    void *v20; // [esp+20h] [ebp-E4h] BYREF
    int v21; // [esp+24h] [ebp-E0h]
    char *v22; // [esp+28h] [ebp-DCh]
    uint32_t v23[27]; // [esp+2Ch] [ebp-D8h] BYREF
    uint8_t v24[108]; // [esp+98h] [ebp-6Ch] BYREF
    --dword_B77DDC;
    v4 = 0;
    if ( dword_B77DE0 )
    dword_B77DE0 = 0;
    dword_B77DE4 = a3;
    if ( a2 )
    return 0;
    strcpy(byte_B77A94, (const char *)(a4 + 401));
    else if ( a2 )
    return 0;
    v5 = g_WOL_State;
    v6 = 0;
    v19 = 0;
    if ( (int)g_WOL_State > 0 )
    v21 = 0;
    while ( 1 )
    v7 = 0;
    if ( v4 >= 0 && v6 < v5 )
    v7 = (char *)g_WOL_ConnectionFlags + v4;
    if ( *((uint32_t *)v7 + 5) != a3 )
    goto LABEL_38;
    v22 = v7 + 87;
    strcpy(v7 + 87, (const char *)(a4 + 401));
    strcpy(v7 + 46, (const char *)(a4 + 360));
    memset(v24, 0, sizeof(v24));
    if ( v4 >= 0 && v19 < (int)g_WOL_State )
    qmemcpy(v24, (char *)g_WOL_ConnectionFlags + v4, sizeof(v24));
    v8 = v19;
    qmemcpy(v23, v24, sizeof(v23));
    v23[8] = 0;
    if ( g_WOL_State )
    if ( v4 < 0 )
    v8 = 0;
    if ( v8 >= (int)g_WOL_State )
    v8 = g_WOL_State - 1;
    memcpy(
    (char *)g_WOL_ConnectionFlags + 108 * v8,
    (char *)g_WOL_ConnectionFlags + 108 * v8 + 108,
    108 * g_WOL_State - 36 * (3 * v8 + 3));
    --g_WOL_State;
    if ( (int)(3 * g_WOL_State) <= g_WOL_StateFlags )
    v9 = g_WOL_StateFlags / 2;
    if ( g_WOL_StateFlags / 2 < 10 )
    v9 = 10;
    if ( v9 < g_WOL_StateFlags )
    v10 = (char *)__2_YAPAXI_Z(108 * v9);
    v11 = (char *)g_WOL_ConnectionFlags;
    v12 = v10;
    if ( g_WOL_ConnectionFlags )
    v13 = 108 * g_WOL_State;
    v14 = (108 * g_WOL_State) >> 2;
    qmemcpy(v10, g_WOL_ConnectionFlags, 4 * v14);
    qmemcpy(&v10[4 * v14], &v11[4 * v14], v13 & 3);
    v11 = (char *)g_WOL_ConnectionFlags;
    __3_YAXPAX_Z(v11);
    g_WOL_ConnectionFlags = v12;
    v4 = v21;
    g_WOL_StateFlags = v9;
    if ( dword_B77E48 == 1 )
    break;
    switch ( dword_B77E48 )
    case 2:
    InsertBuddyList((const char *)v23, 1);
    break;
    case 3:
    InsertBuddyList((const char *)v23, 0);
    break;
    case 4:
    FindBuddyList((int)v23, 1);
    break;
    case 5:
    FindBuddyList((int)v23, 0);
    break;
    default:
    v15 = 1;
    goto LABEL_37;
    LABEL_38:
    v5 = g_WOL_State;
    v6 = v19 + 1;
    v4 += 108;
    v16 = ++v19 < (int)g_WOL_State;
    v21 = v4;
    if ( !v16 )
    goto LABEL_39;
    v15 = 0;
    LABEL_37:
    InsertGameSettings(v23, v15);
    goto LABEL_38;
    LABEL_39:
    String::Assign((char **)&v20, (const char *)(a4 + 401));
    String::ToLower((const char **)&v20);
    v17 = *((uint32_t *)g_WOL_ListParser + (dword_B768D8(&v20) & ((1 << dword_B768CC) - 1)));
    if ( v17 )
    while ( !String::Compare((const char **)v17, (const char **)&v20) )
    v17 = *(uint32_t *)(v17 + 112);
    if ( !v17 )
    goto LABEL_42;
    else
    LABEL_42:
    (*(void (__stdcall **)(LPVOID, char *, int, int, int **, int, uint32_t, uint32_t))(*(uint32_t *)g_UIPointerTable + 20))(
    g_UIPointerTable,
    g_WOL_ConnectFlag,
    g_WOL_GameConfig,
    a4 + 401,
    &off_802100,
    -1,
    0,
    0);
    if ( !dword_B77DDC )
    DisplayRankingsWOL(0);
    DeleteAndZero(&v20);
    return 0;
}

int __stdcall CComObject_CChatEventSink___ATL::_vt20(int a1, int a2, const char *a3)
{
    if ( a2 >= 0 )
    LeaveChannelWOL(a3);
    return 0;
}

int __stdcall CComObject_CChatEventSink___ATL::_vt05(int a1, int a2, int a3)
{
    wchar_t *StringCSF; // eax
    wchar_t Buffer[512]; // [esp+0h] [ebp-400h] BYREF
    if ( !g_NetworkLobby_Init )
    StringCSF = GetStringCSF(aTxtServerError, 0, g_Str_File_wonline_cpp, 5655);
    swprintf(Buffer, (const size_t)&off_8240B4, StringCSF);
    Dialog::ShowMessage(-1, (size_t)Buffer);
    return 0;
}

int __stdcall CComObject_CChatEventSink___ATL::_vt06(int a1, int a2, const char *a3)
{
    wchar_t *StringCSF; // eax
    wchar_t *v4; // eax
    char *v6; // ebp
    char *i; // eax
    int v8; // esi
    int v9; // [esp+24h] [ebp-50h] BYREF
    int v10; // [esp+28h] [ebp-4Ch] BYREF
    uint8_t v11[4]; // [esp+2Ch] [ebp-48h] BYREF
    uint8_t v12[4]; // [esp+30h] [ebp-44h] BYREF
    char Buffer[64]; // [esp+34h] [ebp-40h] BYREF
    dword_B77DF8 = a2;
    if ( a2 < 0 )
    byte_B77DC0 = 1;
    if ( a2 <= -2147221387 )
    if ( a2 == -2147221387 )
    StringCSF = GetStringCSF((wchar_t *)aTxtBanned, 0, g_Str_File_wonline_cpp, 5758);
    else
    switch ( a2 )
    case -2147221404:
    StringCSF = GetStringCSF(aTxtLoginUsed, 0, g_Str_File_wonline_cpp, 5737);
    break;
    case -2147221403:
    StringCSF = GetStringCSF(g_Str_TXT_BADPASS, 0, g_Str_File_wonline_cpp, 5742);
    break;
    case -2147221390:
    StringCSF = GetStringCSF((wchar_t *)aTxtBanned, 0, g_Str_File_wonline_cpp, 5747);
    break;
    case -2147221388:
    StringCSF = GetStringCSF((wchar_t *)aTxtDisabled, 0, g_Str_File_wonline_cpp, 5753);
    break;
    default:
    goto LABEL_19;
    goto LABEL_20;
    if ( a2 <= -2147221384 )
    if ( a2 == -2147221384 )
    v4 = GetStringCSF(aTxtSkuserialmi, 0, g_Str_File_wonline_cpp, 5773);
    wcscpy(&word_B77AD0, v4);
    SetEvent(Handles);
    return 0;
    if ( a2 == -2147221386 )
    StringCSF = GetStringCSF((wchar_t *)aTxtSerialdup, 0, g_Str_File_wonline_cpp, 5763);
    else
    StringCSF = GetStringCSF((wchar_t *)aTxtSerialunkno, 0, g_Str_File_wonline_cpp, 5768);
    goto LABEL_20;
    if ( a2 )
    LABEL_19:
    StringCSF = GetStringCSF(g_Str_TXT_CANT_CONNECT, 0, g_Str_File_wonline_cpp, 5779);
    LABEL_20:
    wcscpy(&word_B77AD0, StringCSF);
    SetEvent(Handles);
    return 0;
    if ( !dword_B77EA4 )
    (*(void (__stdcall **)(LPVOID, int *))(*(uint32_t *)ppv + 132))(ppv, &a2);
    v6 = (char *)__2_YAPAXI_Z(strlen((const char *)a2) + 32);
    strcpy(v6, (const char *)a2);
    strcat(v6, a1018);
    for ( i = strtok(v6, Delimiter); i; i = strtok(0, Delimiter) )
    v8 = atol(i);
    (*(void (__stdcall **)(LPVOID, int, int, int *, int *, uint8_t *, uint8_t *))(*(uint32_t *)ppv + 92))(
    ppv,
    v8,
    dword_84A1C0,
    &v10,
    &v9,
    v12,
    v11);
    sprintf(Buffer, "gt%d.bmp", v8);
    ChatEvent::ProcessStrings((int)g_DialogHashTable, Buffer, v10, v9, 2);
    __3_YAXPAX_Z(v6);
    dword_B77EA4 = 1;
    if ( byte_84A1B8 )
    String::Assign_Alt(&dword_B73AE0, a3);
    else
    DeleteAndZero::Alt2(&dword_B73AE0);
    memset(&g_WOL_ProcessIdle, 0, 0x10Cu);
    memset(&dword_B73BE8, 0, 0x10Cu);
    byte_B77DC2 = 0;
    g_WOL_ChannelState = 0;
    SetEvent(dword_B7368C);
    QueryNATPortWOL((unsigned __int16 *)dword_A8DBC0);
    return 0;
}

int __stdcall CComObject_CChatEventSink___ATL::_vt07(int a1, int a2, char *Source)
{
    char *v4; // esi
    unsigned __int8 *i; // eax
    _WORD v6[1024]; // [esp+0h] [ebp-800h] BYREF
    if ( a2 < 0 )
    return 0;
    v4 = _strdup(Source);
    for ( i = (unsigned __int8 *)strtok(v4, asc_83F328); i; i = (unsigned __int8 *)strtok(0, asc_83F328) )
    BulkCharToWide(v6, i, -1);
    Dialog::ShowMessage(-1, (size_t)v6);
    free(v4);
    Dialog::ShowMessage(-1, (size_t)asc_830174);
    return 0;
}

int __stdcall CComObject_CChatEventSink___ATL::vt_09_(int a1, int a2, uint8_t *a3)
{
    wchar_t *v3; // eax
    HWND v4; // eax
    HWND v5; // eax
    HWND v6; // eax
    wchar_t *String; // eax
    char *v9; // edi
    int v10; // eax
    HWND v11; // eax
    HWND Current; // eax
    HWND DlgItem; // eax
    char *v14; // [esp-10h] [ebp-60h]
    char Buffer[80]; // [esp+0h] [ebp-50h] BYREF
    if ( a2 >= 0 )
    if ( *(uint32_t *)a3 )
    memset(byte_B76E40, 0, 0x940u);
    v9 = String::GetOrEmpty((char **)&g_WebBrowser);
    v10 = g_CommandExecState;
    strcpy(byte_B76E40, v9);
    dword_B76E58[0] = v10;
    dword_B76E5C = 0;
    dword_B76E54[0] = g_TauntCommandState;
    dword_B76E60[0] = 1;
    else
    v14 = CharToWideString(a3 + 52);
    String = GetStringCSF(aTxtCreatedChan, 0, g_Str_File_wonline_cpp, 5835);
    Dialog::ShowMessage(-1, (size_t)String, v14);
    qmemcpy(&g_WOL_ProcessIdle, a3, 0x10Cu);
    dword_B77E4C = 1;
    ++g_WOL_ChannelState;
    Debug::Log();
    if ( ppv && *(uint32_t *)a3 )
    memset(Buffer, 0, sizeof(Buffer));
    GameConfig::BuildChecksum(Buffer);
    Buffer[40] = 0;
    (*(void (__stdcall **)(LPVOID, char *))(*(uint32_t *)ppv + 168))(ppv, Buffer);
    v11 = (HWND)Dialog::FindByHandle((void *)0xC4);
    if ( v11 )
    g_WOL_ChannelList &= ~4u;
    if ( !g_WOL_ChannelList )
    CloseDialog(v11, 0);
    Current = Dialog::GetCurrent();
    DlgItem = GetDlgItem(Current, 1344);
    if ( DlgItem )
    SetFocus(DlgItem);
    else
    v3 = GetStringCSF(aTxtChancreateF, 0, g_Str_File_wonline_cpp, 5825);
    Dialog::ShowMessage(-1, (size_t)v3);
    dword_B77E4C = 0;
    g_WOL_IdleFlag[0] = 0;
    v4 = (HWND)Dialog::FindByHandle((void *)0xC4);
    if ( v4 )
    g_WOL_ChannelList &= ~4u;
    if ( !g_WOL_ChannelList )
    CloseDialog(v4, 0);
    v5 = Dialog::GetCurrent();
    v6 = GetDlgItem(v5, 1344);
    if ( v6 )
    SetFocus(v6);
    return 0;
    return 0;
}

int __stdcall CComObject_CChatEventSink___ATL::vt_10_(int a1, int a2, unsigned __int8 *a3, char *a4)
{
    HWND v4; // ebp
    int v5; // ecx
    int v6; // eax
    int v7; // ecx
    void (__stdcall *v8)(HANDLE); // esi
    const char *v9; // ebx
    int v10; // ebp
    int v11; // eax
    int v12; // ebp
    const char *v13; // edx
    signed int v14; // eax
    wchar_t *String; // eax
    wchar_t *v16; // eax
    wchar_t *v17; // eax
    wchar_t *v18; // eax
    wchar_t *v19; // eax
    wchar_t *v20; // eax
    wchar_t *v21; // eax
    wchar_t *v22; // eax
    HWND v23; // eax
    HWND Current; // eax
    HWND DlgItem; // eax
    HWND v26; // eax
    HWND v27; // esi
    HWND v29; // eax
    HWND v30; // eax
    HWND v31; // eax
    wchar_t *v32; // eax
    HWND v33; // eax
    HWND v34; // eax
    void (__stdcall *v35)(HWND, BOOL); // esi
    HWND v36; // edi
    LRESULT v37; // eax
    LRESULT v38; // eax
    HWND v39; // eax
    BOOL v40; // eax
    HWND v41; // eax
    HWND v42; // eax
    HWND v43; // eax
    HWND v44; // eax
    HWND v45; // eax
    HWND v46; // eax
    HWND v47; // eax
    HWND v48; // eax
    HWND v49; // eax
    HWND v50; // eax
    int First; // eax
    uint8_t *v52; // eax
    int v53; // esi
    char *v54; // eax
    u_long v55; // ecx
    u_long v56; // eax
    int v57; // eax
    int v58; // edx
    int v59; // eax
    DLGTEMPLATE *Indirect; // esi
    HWND v61; // eax
    HWND v62; // edi
    int v63; // eax
    int v64; // esi
    int v65; // esi
    int v66; // eax
    int v67; // esi
    int v68; // esi
    char **v69; // ecx
    uint32_t *v70; // esi
    int v71; // esi
    int v72; // esi
    char *v73; // eax
    int v74; // esi
    int v75; // esi
    char *v76; // eax
    int *v77; // esi
    HWND GameUI; // eax
    HWND v79; // eax
    HWND v80; // eax
    char *v81; // ebx
    unsigned __int8 *v82; // edi
    signed int v83; // ebp
    signed int v84; // eax
    int v85; // ebx
    int v86; // eax
    int v87; // ecx
    int v88; // ecx
    int v89; // ebx
    int v90; // eax
    int v91; // ebp
    char *v92; // esi
    char *v93; // edi
    char v94; // al
    size_t v95; // ecx
    char *v96; // edi
    int v97; // eax
    int v98; // esi
    char **v99; // ecx
    signed int v100; // eax
    char *v101; // ebx
    char *v102; // esi
    int v103; // edi
    char *v104; // eax
    int v105; // ebp
    char *v106; // ebx
    int v107; // eax
    signed int v108; // eax
    int v109; // ebp
    signed int v110; // ebx
    char *v111; // eax
    char *v112; // ebx
    int v113; // edi
    int v114; // edx
    int v115; // esi
    char *v116; // eax
    int *v117; // ecx
    uint8_t *v118; // eax
    int v119; // esi
    char *v120; // ecx
    char *v121; // eax
    u_long v122; // ecx
    u_long v123; // eax
    int v124; // eax
    int v125; // edx
    int v126; // eax
    int v127; // eax
    char *v128; // eax
    int v129; // esi
    char v130; // al
    int v131; // ebp
    signed int v132; // edi
    signed int v133; // ebx
    struct in_addr v134; // esi
    char *v135; // eax
    uint8_t *v136; // eax
    int v137; // esi
    char *v138; // ecx
    char *v139; // eax
    u_long v140; // ecx
    u_long v141; // eax
    int v142; // eax
    int v143; // edx
    int v144; // eax
    HWND v145; // eax
    int v146; // [esp+28h] [ebp-2ACh]
    BOOL v147; // [esp+34h] [ebp-2A0h]
    int v148; // [esp+34h] [ebp-2A0h]
    int v149; // [esp+34h] [ebp-2A0h]
    int v150; // [esp+48h] [ebp-28Ch] BYREF
    char *v151; // [esp+4Ch] [ebp-288h] BYREF
    char *i; // [esp+50h] [ebp-284h] BYREF
    uint32_t *v153; // [esp+54h] [ebp-280h]
    char v154; // [esp+5Ah] [ebp-27Ah]
    char v155; // [esp+5Bh] [ebp-279h]
    __int64 v156; // [esp+5Ch] [ebp-278h] BYREF
    int v157; // [esp+64h] [ebp-270h] BYREF
    int v158; // [esp+68h] [ebp-26Ch]
    int v159; // [esp+6Ch] [ebp-268h]
    uint32_t v160[27]; // [esp+70h] [ebp-264h] BYREF
    uint32_t v161[27]; // [esp+DCh] [ebp-1F8h] BYREF
    wchar_t Buffer[64]; // [esp+148h] [ebp-18Ch] BYREF
    uint8_t v163[268]; // [esp+1C8h] [ebp-10Ch] BYREF
    if ( a2 != -2147221396 )
    v4 = (HWND)a3;
    Buffer[0] = 0;
    if ( a3 )
    BulkCharToWide(Buffer, a3 + 52, -1);
    if ( !strncmp((const char *)a3 + 52, g_Str_Lob_41_, 7u) )
    v5 = atol((const char *)&a3[strlen(g_Str_Lob_41_) + 52]);
    v6 = v5 / 8;
    v7 = v5 % 8;
    if ( v6 )
    swprintf(Buffer, (const size_t)g_Str_Trace__s__d, (&dword_B73E1C)[v7], v6 + 1);
    else
    swprintf(Buffer, (const size_t)&off_8240B4, (&dword_B73E1C)[v7]);
    if ( a2 < 0 )
    v8 = (void (__stdcall *)(HANDLE))SetEvent;
    switch ( a2 )
    case -2147221392:
    v9 = 0;
    v10 = 0;
    v150 = 0;
    if ( g_WOL_AuthPool > 0 )
    v151 = (char *)dword_B73E18;
    while ( 1 )
    if ( v10 >= 0 && v10 < g_WOL_AuthPool )
    v9 = v151;
    if ( !strcmp(&byte_B73C1C, v9 + 52) )
    break;
    ++v10;
    v151 += 268;
    if ( v10 >= g_WOL_AuthPool )
    v150 = (int)v9;
    goto LABEL_24;
    v150 = (int)v9;
    v11 = v10;
    if ( g_WOL_AuthPool )
    if ( v10 < 0 )
    v11 = 0;
    if ( v11 >= g_WOL_AuthPool )
    v11 = g_WOL_AuthPool - 1;
    memcpy(
    (char *)dword_B73E18 + 268 * v11,
    (char *)dword_B73E18 + 268 * v11 + 268,
    268 * g_WOL_AuthPool - 268 * (v11 + 1));
    --g_WOL_AuthPool;
    if ( 3 * g_WOL_AuthPool <= dword_B73E14 )
    CChatEventSink::GrowBuffer(&g_WOL_AuthPool);
    LABEL_24:
    v12 = 0;
    if ( (int)g_WOL_ChatState > 0 )
    v13 = (const char *)g_WOL_ConnectionHandler;
    while ( 1 )
    if ( v12 >= 0 && v12 < (int)g_WOL_ChatState )
    v9 = v13;
    v150 = (int)v13;
    if ( !strcmp(&byte_B73C1C, v9 + 52) )
    break;
    ++v12;
    v13 += 268;
    if ( v12 >= (int)g_WOL_ChatState )
    goto LABEL_40;
    v9 = (const char *)v150;
    v14 = v12;
    if ( g_WOL_ChatState )
    if ( v12 < 0 )
    v14 = 0;
    if ( v14 >= (int)g_WOL_ChatState )
    v14 = g_WOL_ChatState - 1;
    memcpy(
    (char *)g_WOL_ConnectionHandler + 268 * v14,
    (char *)g_WOL_ConnectionHandler + 268 * v14 + 268,
    268 * g_WOL_ChatState - 268 * (v14 + 1));
    --g_WOL_ChatState;
    if ( (int)(3 * g_WOL_ChatState) <= dword_B76AE4 )
    CChatEventSink::GrowBuffer(&g_WOL_ChatState);
    LABEL_40:
    if ( g_GameOptionsFlags == 3 || g_GameOptionsFlags == 1 || g_GameOptionsFlags == 2 )
    String = GetStringCSF(aTxtGameClosed, 0, g_Str_File_wonline_cpp, 5945);
    Dialog::ShowMessage(-1, (size_t)String);
    SetEvent(hEvent);
    v8 = (void (__stdcall *)(HANDLE))SetEvent;
    else
    v16 = GetStringCSF(aTxtGameClosed, 0, g_Str_File_wonline_cpp, 5948);
    ShowDialogConfirm(v16, 0, (int)GameLoop::Thunk, 0);
    v8 = (void (__stdcall *)(HANDLE))SetEvent;
    LABEL_62:
    g_WOL_ChannelLeaveState = dword_B73BE8 != 0;
    memset(&dword_B73BE8, 0, 0x10Cu);
    dword_B77E4C = 0;
    g_WOL_IdleFlag[0] = 0;
    v23 = (HWND)Dialog::FindByHandle((void *)0xC4);
    if ( v23 )
    g_WOL_ChannelList &= ~2u;
    if ( !g_WOL_ChannelList )
    CloseDialog(v23, 0);
    Current = Dialog::GetCurrent();
    DlgItem = GetDlgItem(Current, 1344);
    if ( DlgItem )
    SetFocus(DlgItem);
    byte_B73C1C = 0;
    GameListRenderWOL();
    DisplayRankingsWOL(0);
    v8(dword_B736AC);
    v26 = (HWND)Dialog::FindByHandle((void *)0x113);
    v27 = v26;
    if ( v26 )
    ShowWindow(v26, 5);
    Dialog::InitWindow(v27, 0);
    return 0;
    return 0;
    case -2147221391:
    if ( g_GameOptionsFlags != 3 && g_GameOptionsFlags != 1 && g_GameOptionsFlags != 2 )
    v18 = GetStringCSF(g_Str_TXT_BADPASS, 0, g_Str_File_wonline_cpp, 5958);
    ShowDialogConfirm(v18, 0, (int)GameLoop::Thunk, 0);
    goto LABEL_62;
    v17 = GetStringCSF(g_Str_TXT_BADPASS, 0, g_Str_File_wonline_cpp, 5955);
    Dialog::ShowMessage(-1, (size_t)v17);
    break;
    case -2147221394:
    if ( g_GameOptionsFlags == 3 || g_GameOptionsFlags == 1 || g_GameOptionsFlags == 2 )
    v19 = GetStringCSF(g_Str_TXT_CHANNEL_FULL, 0, g_Str_File_wonline_cpp, 5965);
    Dialog::ShowMessage(-1, (size_t)v19);
    SetEvent(hEvent);
    goto LABEL_62;
    v20 = GetStringCSF(g_Str_TXT_CHANNEL_FULL, 0, g_Str_File_wonline_cpp, 5968);
    ShowDialogConfirm(v20, 0, (int)GameLoop::Thunk, 0);
    if ( dword_B73BE8 )
    goto LABEL_62;
    break;
    case -2147221390:
    v21 = GetStringCSF(aTxtJoinban, 0, g_Str_File_wonline_cpp, 5977);
    ShowDialogConfirm(v21, 0, (int)GameLoop::Thunk, 0);
    SetEvent(hEvent);
    ++dword_B77DD4;
    goto LABEL_62;
    default:
    v22 = GetStringCSF(aTxtCantJoincha, 0, g_Str_File_wonline_cpp, 5984);
    Dialog::ShowMessage(-1, (size_t)v22, a2);
    break;
    SetEvent(hEvent);
    goto LABEL_62;
    byte_B73C1C = 0;
    if ( (BYTE1(*(uint32_t *)a4) & 0x80u) == 0 )
    if ( g_WOL_ProcessIdle == 41 )
    PlayVocClass(RulesClass_Instance->SpotlightAngle, 0x2000, 1.0, 0);
    if ( *(uint32_t *)a3 && (byte_B77DEC || g_NetworkLobbyState || byte_B77E27) )
    (*(void (__stdcall **)(LPVOID, char *))(*(uint32_t *)ppv + 84))(ppv, a4);
    return 0;
    if ( *((uint32_t *)a4 + 5) && !strlen(a4 + 87) )
    ++dword_B77DDC;
    (*(void (__stdcall **)(LPVOID, uint32_t))(*(uint32_t *)ppv + 176))(ppv, *((uint32_t *)a4 + 5));
    unknown_libname_73(&v150);
    String::Assign_Bool((void **)&v150, a4 + 36);
    String::ToLower((const char **)&v150);
    if ( GameMode_Current[0] == 4 && g_GameOptionsFlags == 3 )
    unknown_libname_73(&v151);
    v63 = g_WOL_ChatPool;
    v64 = 0;
    if ( g_WOL_ChatPool <= 0 )
    LABEL_133:
    StringVector::Insert(&g_WOL_ChatPool, (const char **)&v150, 0);
    else
    while ( 1 )
    if ( v64 >= 0 && v64 < v63 )
    String::Reassign(&v151, (const char **)dword_B777A8 + v64);
    if ( String::Compare((const char **)&v151, (const char **)&v150) )
    break;
    v63 = g_WOL_ChatPool;
    if ( ++v64 >= g_WOL_ChatPool )
    goto LABEL_133;
    DeleteAndZero((void **)&v151);
    v65 = *((uint32_t *)g_WOL_ConnectionPool + (dword_B76548(&v150) & ((1 << dword_B7653C) - 1)));
    if ( v65 )
    while ( !String::Compare((const char **)v65, (const char **)&v150) )
    v65 = *(uint32_t *)(v65 + 8);
    if ( !v65 )
    goto LABEL_138;
    else
    LABEL_138:
    unknown_libname_73(&v151);
    v66 = g_WOL_LoginToken;
    v67 = 0;
    if ( g_WOL_LoginToken <= 0 )
    LABEL_144:
    v68 = 0;
    if ( v66 < 0 )
    v68 = v66;
    if ( v68 >= dword_B765FC )
    DynamicVector::EnsureCapacity(&g_WOL_LoginToken);
    v66 = g_WOL_LoginToken;
    if ( v66 >= dword_B765FC )
    DynamicVector::EnsureCapacity(&g_WOL_LoginToken);
    v66 = g_WOL_LoginToken;
    if ( v68 < v66 )
    memcpy((char *)dword_B76600 + 4 * v68 + 4, (char *)dword_B76600 + 4 * v68, 4 * (v66 + 0x3FFFFFFF * v68));
    v66 = g_WOL_LoginToken;
    v69 = (char **)((char *)dword_B76600 + 4 * v68);
    if ( v69 )
    String::AssignFromPtr(v69, (const char **)&v150);
    v66 = g_WOL_LoginToken;
    g_WOL_LoginToken = v66 + 1;
    else
    while ( 1 )
    if ( v67 >= 0 && v67 < v66 )
    String::Reassign(&v151, (const char **)dword_B76600 + v67);
    if ( String::Compare((const char **)&v151, (const char **)&v150) )
    break;
    v66 = g_WOL_LoginToken;
    if ( ++v67 >= g_WOL_LoginToken )
    goto LABEL_144;
    DeleteAndZero((void **)&v151);
    v70 = (uint32_t *)g_WOL_HashTable;
    v71 = *(uint32_t *)(*v70 + 4 * ((*(int (__thiscall **)(int *))(g_WOL_HashTable + 24))(&v150) & ((1 << v70[3]) - 1)));
    if ( v71 )
    while ( !String::Compare((const char **)v71, (const char **)&v150) )
    v71 = *(uint32_t *)(v71 + 112);
    if ( !v71 )
    goto LABEL_159;
    else
    LABEL_159:
    v72 = *(uint32_t *)g_UIPointerTable;
    v146 = g_NetworkRematchState & 0xFFFF00;
    v73 = String::GetOrEmpty((char **)&v150);
    (*(void (__stdcall **)(LPVOID, char *, int, char *, int, int, uint32_t, uint32_t))(v72 + 20))(
    g_UIPointerTable,
    g_WOL_ConnectFlag,
    g_WOL_GameConfig,
    v73,
    v146,
    -1,
    0,
    0);
    v74 = *((uint32_t *)dword_B76640 + (dword_B76658(&v150) & ((1 << dword_B7664C) - 1)));
    if ( v74 )
    while ( !String::Compare((const char **)v74, (const char **)&v150) )
    v74 = *(uint32_t *)(v74 + 72);
    if ( !v74 )
    goto LABEL_163;
    else
    LABEL_163:
    v75 = *(uint32_t *)g_UIPointerTable;
    v148 = g_NetworkRematchState & 0xFFFF00;
    v76 = String::GetOrEmpty((char **)&v150);
    (*(void (__stdcall **)(LPVOID, char *, int, char *, int))(v75 + 56))(
    g_UIPointerTable,
    g_WOL_ConnectFlag,
    g_WOL_GameConfig,
    v76,
    v148);
    DeleteAndZero((void **)&v150);
    if ( *(uint32_t *)a3 )
    v77 = (int *)&unk_B76EF4;
    do
    *v77 = 0;
    GameUI = (HWND)Dialog::FindGameUI();
    v79 = GetDlgItem(GameUI, 1439);
    EnableWindow(v79, 1);
    v77 += 37;
    while ( v77 < &g_WOL_ChatPool );
    if ( !dword_B77E4C )
    v80 = (HWND)Dialog::FindByHandle((void *)0xC9);
    EnablePlayerSlotControls(v80, 1u);
    Game::ResetReadyStates();
    else
    qmemcpy(&g_WOL_ProcessIdle, a3, 0x10Cu);
    memset(&dword_B73BE8, 0, 0x10Cu);
    v29 = (HWND)Dialog::FindByHandle((void *)0xC4);
    if ( v29 )
    g_WOL_ChannelList &= ~2u;
    if ( !g_WOL_ChannelList )
    CloseDialog(v29, 0);
    v30 = Dialog::GetCurrent();
    v31 = GetDlgItem(v30, 1344);
    if ( v31 )
    SetFocus(v31);
    ++g_WOL_ChannelState;
    Debug::Log();
    if ( g_GameOptionsFlags != 3 && g_GameOptionsFlags != 1 && g_GameOptionsFlags != 2 )
    v32 = GetStringCSF(aTxtJoinedS, 0, g_Str_File_wonline_cpp, 6032);
    Dialog::ShowMessage(-1, (size_t)v32, Buffer);
    if ( !*(uint32_t *)a3 )
    dword_B77DD4 = atol((const char *)&a3[strlen(g_Str_Lob_41_) + 52]);
    v33 = (HWND)Dialog::FindByHandle((void *)0x113);
    v4 = v33;
    if ( v33 )
    v34 = GetDlgItem(v33, 1341);
    v35 = (void (__stdcall *)(HWND, BOOL))EnableWindow;
    EnableWindow(v34, 1);
    v154 = 0;
    v155 = 0;
    v36 = GetDlgItem(v4, 1774);
    v37 = SendMessageA(v36, 0x188u, 0, 0);
    if ( v37 != -1 )
    v38 = SendMessageA(v36, 0x199u, v37, 0);
    if ( v38 >= 0 && v38 < (int)g_WOL_ChatState )
    qmemcpy(v163, (char *)g_WOL_ConnectionHandler + 268 * v38, sizeof(v163));
    v154 = ValidateGameJoinWOL((int)v163, 0, 0);
    v35 = (void (__stdcall *)(HWND, BOOL))EnableWindow;
    v155 = ValidateGameJoinWOL((int)v163, 0, 1);
    v39 = GetDlgItem(v4, 1774);
    v35(v39, 1);
    v40 = v154 || v155;
    v147 = v40;
    v41 = GetDlgItem(v4, 1581);
    v35(v41, v147);
    v42 = GetDlgItem(v4, 1579);
    v35(v42, 1);
    v43 = GetDlgItem(v4, 1673);
    v35(v43, 1);
    v44 = GetDlgItem(v4, 1672);
    v35(v44, 1);
    v45 = GetDlgItem(v4, 1955);
    v35(v45, 1);
    v46 = GetDlgItem(v4, 1958);
    v35(v46, 1);
    v47 = GetDlgItem(v4, 1567);
    v35(v47, 1);
    v48 = GetDlgItem(v4, 1474);
    v35(v48, 1);
    v49 = GetDlgItem(v4, 1670);
    v35(v49, 1);
    v50 = GetDlgItem(v4, 1344);
    SetFocus(v50);
    if ( *(uint32_t *)a3 == 41 )
    First = MultiplayerGameMode::GetFirst();
    g_GameStateFlags = First;
    dword_A8BB0C = 8;
    g_MPCooperativeState = 7;
    if ( First )
    (*(void (__thiscall **)(int))(*(uint32_t *)First + 36))(First);
    PtrVector::Destroy(&g_PlayerInfoCount);
    Game::ResetFlags();
    Network::InitPlayerSlots();
    v52 = __2_YAPAXI_Z(0x85u);
    v53 = (int)v52;
    if ( v52 )
    Waypoint::InitInvalid(v52 + 40);
    else
    v53 = 0;
    memset((void *)v53, 0, 0x84u);
    *(uint8_t *)(v53 + 132) = 0;
    v54 = CharToWideString(a4 + 36);
    wcscpy((wchar_t *)v53, (const wchar_t *)v54);
    v55 = *((uint32_t *)a4 + 6);
    i = 0;
    WORD2(v156) = 0;
    v56 = ntohl(v55);
    BYTE2(v156) = BYTE1(v56);
    *(_WORD *)((char *)&v156 + 3) = (unsigned __int8)v56;
    LOBYTE(v156) = HIBYTE(v56);
    BYTE1(v156) = BYTE2(v56);
    NetworkAddress::Assign(&v157, &i, (int)&v156, 0);
    v57 = v158;
    *(uint32_t *)(v53 + 40) = v157;
    v58 = v159;
    *(uint32_t *)(v53 + 44) = v57;
    *(uint32_t *)(v53 + 48) = v58;
    SessionClass::SetPlayerOption(v53, -2);
    SessionClass::SetPlayerColor(v53, -2);
    SessionClass::SetOption(v53, -2);
    SessionClass::SetOption2(v53, -2);
    if ( g_GameOptionsFlags != 3 && g_GameOptionsFlags != 1 && g_GameOptionsFlags != 2 && g_MenuStateFlags )
    SessionClass::SetPlayerOption(v53, -3);
    *(uint32_t *)(v53 + 107) = -1;
    if ( Game_PlayerCount < dword_A8DA7C
    || (byte_A8DA81 || !dword_A8DA7C)
    && dword_A8DA88 > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, uint32_t))(g_PlayerInfoCount + 8))(
    &g_PlayerInfoCount,
    dword_A8DA7C + dword_A8DA88,
    0) )
    v59 = Game_PlayerCount++;
    *(uint32_t *)(Game_PlayerInfoArray + 4 * v59) = v53;
    g_CurrentPlayerName[0] = 0;
    if ( g_GameOptionsFlags != 3 && g_GameOptionsFlags != 1 && g_GameOptionsFlags != 2 )
    Screen::Capture(1, 0, 0, (int)v4);
    LoadingScreen::Init();
    Indirect = (DLGTEMPLATE *)CreateDialogIndirect(g_hInstance, 201, g_hWnd, (DLGPROC)WOLobby::ChatDlgProc, 0);
    SetupDialog((HWND)Indirect, 201);
    v61 = (HWND)Dialog::FindByHandle((void *)0x113);
    v62 = v61;
    if ( v61 )
    ShowWindow(v61, 0);
    Dialog::InitWindow(v62, 0);
    SendMessageA((HWND)Indirect, 0x4A9u, 0, 1);
    ShowWindow((HWND)Indirect, 1);
    memset(dword_B76440, 0xFFu, 0x20u);
    if ( *((uint32_t *)a4 + 5) && !strlen(a4 + 87) )
    ++dword_B77DDC;
    (*(void (__stdcall **)(LPVOID, uint32_t))(*(uint32_t *)ppv + 176))(ppv, *((uint32_t *)a4 + 5));
    v81 = a4;
    qmemcpy(v161, a4, sizeof(v161));
    v82 = a3;
    v83 = 0;
    v161[8] = 0;
    if ( !*(uint32_t *)a3 )
    switch ( dword_B77E48 )
    case 1:
    InsertGameSettings(v161, 0);
    break;
    case 2:
    InsertBuddyList((const char *)v161, 1);
    break;
    case 3:
    InsertBuddyList((const char *)v161, 0);
    break;
    case 4:
    FindBuddyList((int)v161, 1);
    break;
    case 5:
    FindBuddyList((int)v161, 0);
    break;
    default:
    InsertGameSettings(v161, 1);
    break;
    LABEL_217:
    if ( (BYTE1(*(uint32_t *)v81) & 0x80u) == 0
    && !*(uint32_t *)v82
    && (g_GameOptionsFlags == 3 || g_GameOptionsFlags == 1 || g_GameOptionsFlags == 2) )
    String::Assign(&v151, v81 + 36);
    v97 = g_WOL_ConnectionToken;
    v98 = g_WOL_ConnectionToken;
    if ( g_WOL_ConnectionToken >= dword_B76AD4 )
    DynamicVector::EnsureCapacity(&g_WOL_ConnectionToken);
    v97 = g_WOL_ConnectionToken;
    if ( v97 >= dword_B76AD4 )
    DynamicVector::EnsureCapacity(&g_WOL_ConnectionToken);
    v97 = g_WOL_ConnectionToken;
    if ( v98 < v97 )
    memcpy(
    (char *)g_WOL_ObjectState + 4 * v98 + 4,
    (char *)g_WOL_ObjectState + 4 * v98,
    4 * (v97 + 0x3FFFFFFF * v98));
    v97 = g_WOL_ConnectionToken;
    v99 = (char **)((char *)g_WOL_ObjectState + 4 * v98);
    if ( v99 )
    String::AssignFromPtr(v99, (const char **)&v151);
    v97 = g_WOL_ConnectionToken;
    g_WOL_ConnectionToken = v97 + 1;
    if ( !g_WOL_LoginPool )
    ProcessPingRequestsWOL();
    DeleteAndZero((void **)&v151);
    LODWORD(v156) = g_WOL_State;
    if ( *(uint32_t *)v82 )
    v151 = a4 + 36;
    String::Assign(&i, a4 + 36);
    v100 = g_WOL_State;
    v101 = 0;
    v102 = 0;
    if ( (int)g_WOL_State <= 0 )
    LABEL_241:
    v150 = -1;
    else
    v103 = 0;
    while ( 1 )
    if ( v103 >= 0 && (int)v102 < v100 )
    v101 = (char *)g_WOL_ConnectionFlags + v103;
    v104 = String::GetOrEmpty_Alt(&i);
    if ( !_strcmpi(v104, v101 + 36) )
    break;
    v100 = g_WOL_State;
    ++v102;
    v103 += 108;
    if ( (int)v102 >= (int)g_WOL_State )
    goto LABEL_241;
    v150 = (int)v102;
    DeleteAndZero((void **)&i);
    v105 = 37 * v150;
    v106 = &byte_B76E40[148 * v150];
    memcpy((char *)&unk_B76ED4 + 148 * v150, v106, 2220 - 148 * v150);
    memset(v106, 0, 0x94u);
    v107 = dword_B77E4C;
    strcpy(v106, v151);
    if ( v107 == 1 )
    if ( g_GameOptionsFlags != 3 && g_GameOptionsFlags != 1 && g_GameOptionsFlags != 2 )
    SessionClass::BuildLaunchString();
    if ( NetworkLobby::CheckMinPlayers() && GameOption::CheckDuplicate() )
    String::Assign(&i, v151);
    v108 = g_WOL_State;
    v109 = 0;
    v110 = 0;
    v160[0] = 0;
    if ( (int)g_WOL_State > 0 )
    while ( 1 )
    if ( v109 >= 0 && v110 < v108 )
    qmemcpy(v160, (char *)g_WOL_ConnectionFlags + v109, sizeof(v160));
    v111 = String::GetOrEmpty_Alt(&i);
    if ( !_strcmpi(v111, &v160[9]) )
    break;
    v108 = g_WOL_State;
    ++v110;
    v109 += 108;
    if ( v110 >= (int)g_WOL_State )
    goto LABEL_255;
    (*(void (__stdcall **)(LPVOID, uint32_t *))(*(uint32_t *)ppv + 84))(ppv, v160);
    LABEL_255:
    DeleteAndZero((void **)&i);
    else
    v112 = (char *)v150;
    v113 = v156;
    v114 = 0;
    do
    v115 = 0;
    v116 = 0;
    dword_B76E54[v105] = v114;
    if ( v113 <= 0 )
    break;
    v117 = dword_B76E54;
    do
    if ( v116 != v112 && *v117 == v114 )
    ++v114;
    v115 = 1;
    ++v116;
    v117 += 37;
    while ( (int)v116 < v113 );
    while ( v115 );
    v118 = __2_YAPAXI_Z(0x85u);
    v119 = (int)v118;
    if ( v118 )
    Waypoint::InitInvalid(v118 + 40);
    else
    v119 = 0;
    memset((void *)v119, 0, 0x84u);
    v120 = v151;
    *(uint8_t *)(v119 + 132) = 0;
    v121 = CharToWideString(v120);
    wcscpy((wchar_t *)v119, (const wchar_t *)v121);
    LODWORD(v156) = 0;
    v122 = *((uint32_t *)a4 + 6);
    i = 0;
    LOWORD(v153) = 0;
    v123 = ntohl(v122);
    BYTE2(i) = BYTE1(v123);
    HIBYTE(i) = v123;
    LOBYTE(i) = HIBYTE(v123);
    BYTE1(i) = BYTE2(v123);
    NetworkAddress::Assign(&v157, &v156, (int)&i, 0);
    v124 = v158;
    *(uint32_t *)(v119 + 40) = v157;
    v125 = v159;
    *(uint32_t *)(v119 + 44) = v124;
    *(uint32_t *)(v119 + 48) = v125;
    if ( g_GameStateFlags )
    v149 = (*(int (__thiscall **)(int))(*(uint32_t *)g_GameStateFlags + 40))(g_GameStateFlags);
    SessionClass::SetPlayerOption(v119, v149);
    else
    SessionClass::SetPlayerOption(v119, -2);
    SessionClass::SetPlayerColor(v119, -2);
    SessionClass::SetOption(v119, -2);
    SessionClass::SetOption2(v119, -2);
    v126 = g_GameOptionsFlags;
    if ( g_GameOptionsFlags != 3 && g_GameOptionsFlags != 1 && g_GameOptionsFlags != 2 )
    if ( NetworkLobby::CheckMinPlayers() )
    SessionClass::SetPlayerOption(v119, -3);
    SessionClass::SetPlayerColor(v119, -2);
    *(uint32_t *)(v119 + 107) = -1;
    v126 = g_GameOptionsFlags;
    if ( (BYTE1(*(uint32_t *)a4) & 0x80u) != 0 && v126 != 3 && v126 != 1 && v126 != 2 && g_MenuStateFlags )
    SessionClass::SetPlayerOption(v119, -3);
    SessionClass::SetPlayerColor(v119, -2);
    *(uint32_t *)(v119 + 107) = -1;
    if ( Game_PlayerCount < dword_A8DA7C
    || (byte_A8DA81 || !dword_A8DA7C)
    && dword_A8DA88 > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, uint32_t))(g_PlayerInfoCount + 8))(
    &g_PlayerInfoCount,
    dword_A8DA7C + dword_A8DA88,
    0) )
    v127 = Game_PlayerCount++;
    *(uint32_t *)(Game_PlayerInfoArray + 4 * v127) = v119;
    NetworkLobby::AssignPlayerSlot(v119);
    if ( (g_GameOptionsFlags == 3 || g_GameOptionsFlags == 1 || g_GameOptionsFlags == 2) && *(uint32_t *)a3 )
    if ( g_GameOptionsFlags == 3 )
    v128 = strchr(byte_B73714, 58);
    Game::SetupWOLTournament(v128);
    else
    SetupNetworkLobbyDialog(byte_B73714, 0);
    v129 = 0;
    if ( g_MultiplayerOptions > 0 )
    while ( _strcmpi(&Destination, (const void *)(*(uint32_t *)(g_MultiplayerGameState + 4 * v129) + 88)) )
    if ( ++v129 >= g_MultiplayerOptions )
    goto LABEL_303;
    LoadScenarioClassByIndex(v129);
    LABEL_303:
    if ( v129 >= g_MultiplayerOptions )
    LoadScenarioClassByIndex(0);
    Game::ResetReadyStates();
    sub_5E2FA0();
    v130 = g_MPCooperativeState;
    LOBYTE(v150) = 79;
    if ( g_MPCooperativeState < 0 )
    v130 = 8;
    *(_WORD *)((char *)&v150 + 1) = (unsigned __int8)(v130 + 48);
    Debug::Log();
    (*(void (__stdcall **)(LPVOID, int *))(*(uint32_t *)ppv + 60))(ppv, &v150);
    Lobby::BuildPlayerList();
    CheckGameSettingsChanged(1, 0);
    if ( Settings::CheckString() )
    sub_7A0F40();
    if ( !g_NetworkLobbyState )
    v131 = 0;
    memset(v160, 0, sizeof(v160));
    v132 = g_WOL_State;
    v133 = 0;
    LODWORD(v156) = g_WOL_State;
    for ( i = 0; v133 < v132; v131 += 108 )
    if ( v131 >= 0 && v133 < (int)g_WOL_State )
    qmemcpy(v160, (char *)g_WOL_ConnectionFlags + v131, sizeof(v160));
    v132 = v156;
    v134 = (struct in_addr)v160[6];
    ntoainet((struct in_addr)v160[6]);
    Debug::Log();
    v151 = *(char **)g_UIPointerTable;
    v135 = ntoainet(v134);
    (*((void (__stdcall **)(LPVOID, char *, int, char **))v151 + 6))(g_UIPointerTable, v135, 1000, &i);
    ++v133;
    else if ( (BYTE1(*(uint32_t *)a4) & 0x80u) == 0 )
    v136 = __2_YAPAXI_Z(0x85u);
    v137 = (int)v136;
    if ( v136 )
    Waypoint::InitInvalid(v136 + 40);
    else
    v137 = 0;
    memset((void *)v137, 0, 0x84u);
    v138 = v151;
    *(uint8_t *)(v137 + 132) = 0;
    v139 = CharToWideString(v138);
    wcscpy((wchar_t *)v137, (const wchar_t *)v139);
    v140 = *((uint32_t *)a4 + 6);
    LODWORD(v156) = 0;
    i = 0;
    LOWORD(v153) = 0;
    v141 = ntohl(v140);
    BYTE2(i) = BYTE1(v141);
    HIBYTE(i) = v141;
    LOBYTE(i) = HIBYTE(v141);
    BYTE1(i) = BYTE2(v141);
    NetworkAddress::Assign(&v157, &v156, (int)&i, 0);
    v142 = v158;
    *(uint32_t *)(v137 + 40) = v157;
    v143 = v159;
    *(uint32_t *)(v137 + 44) = v142;
    *(uint32_t *)(v137 + 48) = v143;
    SessionClass::SetPlayerOption(v137, -2);
    SessionClass::SetPlayerColor(v137, -2);
    SessionClass::SetOption(v137, -2);
    SessionClass::SetOption2(v137, -2);
    if ( Game_PlayerCount < dword_A8DA7C
    || (byte_A8DA81 || !dword_A8DA7C)
    && dword_A8DA88 > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, uint32_t))(g_PlayerInfoCount + 8))(
    &g_PlayerInfoCount,
    dword_A8DA7C + dword_A8DA88,
    0) )
    v144 = Game_PlayerCount++;
    *(uint32_t *)(Game_PlayerInfoArray + 4 * v144) = v137;
    v145 = (HWND)Dialog::FindByHandle((void *)0xC9);
    EnablePlayerSlotControls(v145, 1u);
    Game::ResetReadyStates();
    SetEvent(dword_B73694);
    DisplayRankingsWOL(0);
    return 0;
    v84 = g_WOL_State;
    v151 = (char *)g_WOL_State;
    if ( (int)g_WOL_State <= 0 )
    v89 = (int)v151;
    v88 = g_WOL_State;
    else
    v153 = v160;
    i = a4;
    v85 = 0;
    while ( 1 )
    if ( v85 >= 0 && v83 < v84 )
    qmemcpy(v160, (char *)g_WOL_ConnectionFlags + v85, sizeof(v160));
    v86 = 0;
    v156 = 0;
    do
    v87 = *(uint32_t *)(&i)[v86];
    if ( (v87 & 1) != 0 )
    *(uint32_t *)((char *)&v156 + v86 * 4) += 4;
    if ( (v87 & 2) != 0 )
    *(uint32_t *)((char *)&v156 + v86 * 4) += 2;
    ++v86;
    while ( v86 < 2 );
    if ( (int)v156 >= SHIDWORD(v156) && ((int)v156 > SHIDWORD(v156) || _strcmpi(a4 + 36, &v160[9]) < 0) )
    v88 = g_WOL_State;
    v89 = v83;
    goto LABEL_201;
    v88 = g_WOL_State;
    ++v83;
    v85 += 108;
    if ( v83 >= (int)g_WOL_State )
    break;
    v84 = g_WOL_State;
    v89 = (int)v151;
    LABEL_201:
    if ( v89 > v88 )
    v89 = v88;
    v90 = g_WOL_StateFlags;
    if ( v89 >= g_WOL_StateFlags )
    if ( v88 < g_WOL_StateFlags )
    LABEL_212:
    if ( v89 < v88 )
    memcpy(
    (char *)g_WOL_ConnectionFlags + 108 * v89 + 108,
    (char *)g_WOL_ConnectionFlags + 108 * v89,
    108 * v88 - 108 * v89);
    v88 = g_WOL_State;
    v96 = (char *)g_WOL_ConnectionFlags + 108 * v89;
    if ( v96 )
    qmemcpy(v96, v161, 0x6Cu);
    v88 = g_WOL_State;
    v81 = a4;
    v82 = a3;
    g_WOL_State = v88 + 1;
    goto LABEL_217;
    v91 = 2 * v88;
    if ( 2 * v88 < 10 )
    v91 = 10;
    v151 = (char *)__2_YAPAXI_Z(108 * v91);
    memset(v151, 0, 4 * ((unsigned int)(108 * v91) >> 2));
    v92 = (char *)g_WOL_ConnectionFlags;
    if ( g_WOL_ConnectionFlags )
    v93 = v151;
    v94 = 108 * g_WOL_State;
    v95 = (108 * g_WOL_State) >> 2;
    qmemcpy(v151, g_WOL_ConnectionFlags, 4 * v95);
    qmemcpy(&v93[4 * v95], &v92[4 * v95], v94 & 3);
    v92 = (char *)g_WOL_ConnectionFlags;
    __3_YAXPAX_Z(v92);
    v90 = v91;
    g_WOL_ConnectionFlags = v151;
    v88 = g_WOL_State;
    g_WOL_StateFlags = v91;
    if ( v88 >= v90 )
    DynamicArray::Grow(&g_WOL_State);
    v88 = g_WOL_State;
    goto LABEL_212;
    return 0;
}

int __stdcall CComObject_CChatEventSink___ATL::_vt11(int a1, int a2, int a3, const char *a4)
{
    if ( a2 >= 0 )
    LeaveChannelWOL(a4);
    else
    Debug::Log();
    return 0;
}

int __stdcall CComObject_CChatEventSink___ATL::vt_15_(int a1, int a2, int a3, const char *a4)
{
    HWND Current; // eax
    int v5; // edx
    const char *v6; // ebp
    int v7; // esi
    int v8; // ebx
    int v9; // esi
    int v10; // esi
    uint32_t *v11; // esi
    int v12; // esi
    signed int v13; // eax
    char *v14; // ebp
    signed int v15; // esi
    int v16; // edi
    char *v17; // eax
    int v18; // eax
    void *v19; // edx
    char *v20; // eax
    char *v21; // eax
    uint8_t *v22; // eax
    int v23; // esi
    wchar_t *v24; // eax
    u_long v25; // edx
    u_long v26; // eax
    int v27; // ecx
    int v28; // eax
    int v29; // eax
    signed int v30; // ebx
    int v31; // ebp
    char *v32; // eax
    char *v33; // eax
    HWND v34; // eax
    uint32_t *v35; // eax
    int v36; // eax
    int PlayerSide; // eax
    int PlayerOption; // eax
    int v40; // [esp+74h] [ebp-154h]
    void **v41; // [esp+80h] [ebp-148h]
    int PlayerColor; // [esp+84h] [ebp-144h]
    int v43; // [esp+84h] [ebp-144h]
    int v44; // [esp+88h] [ebp-140h]
    const char *v45; // [esp+9Ch] [ebp-12Ch] BYREF
    __int16 v46; // [esp+A2h] [ebp-126h] BYREF
    void **v47; // [esp+A4h] [ebp-124h] BYREF
    __int16 v48; // [esp+A8h] [ebp-120h]
    void **v49; // [esp+ACh] [ebp-11Ch] BYREF
    int v50; // [esp+B0h] [ebp-118h]
    int v51; // [esp+B4h] [ebp-114h]
    char *v52; // [esp+B8h] [ebp-110h] BYREF
    void *v53; // [esp+BCh] [ebp-10Ch] BYREF
    int v54; // [esp+C0h] [ebp-108h]
    void *v55; // [esp+C4h] [ebp-104h] BYREF
    char v56; // [esp+C8h] [ebp-100h]
    void *v57; // [esp+CCh] [ebp-FCh] BYREF
    uint32_t v58[3]; // [esp+D0h] [ebp-F8h] BYREF
    uint32_t v59[27]; // [esp+DCh] [ebp-ECh] BYREF
    char Buffer[128]; // [esp+148h] [ebp-80h] BYREF
    if ( !g_NetworkLobby_Init )
    memset(byte_B78620, 0, sizeof(byte_B78620));
    unknown_libname_73(&v45);
    if ( a2 >= 0 )
    Current = Dialog::GetCurrent();
    SendDlgItemMessageA(Current, 1342, 0x184u, 0, 0);
    g_WOL_State = 0;
    v51 = 0;
    v54 = 0;
    for ( LOBYTE(v46) = 0; a4; a4 = (const char *)*((uint32_t *)a4 + 8) )
    v5 = *((uint32_t *)a4 + 5);
    ++v54;
    if ( !v5 || strlen(a4 + 87) )
    if ( g_UIPointerTable )
    if ( v5 )
    v6 = a4 + 87;
    if ( strlen(a4 + 87) )
    String::Assign((char **)&v53, v6);
    String::ToLower((const char **)&v53);
    v7 = *((uint32_t *)g_WOL_ListParser + (dword_B768D8(&v53) & ((1 << dword_B768CC) - 1)));
    if ( v7 )
    while ( !String::Compare((const char **)v7, (const char **)&v53) )
    v7 = *(uint32_t *)(v7 + 112);
    if ( !v7 )
    goto LABEL_13;
    else
    LABEL_13:
    (*(void (__stdcall **)(LPVOID, char *, int, const char *, int **, int, uint32_t, uint32_t))(*(uint32_t *)g_UIPointerTable + 20))(
    g_UIPointerTable,
    g_WOL_ConnectFlag,
    g_WOL_GameConfig,
    v6,
    &off_802100,
    -1,
    0,
    0);
    DeleteAndZero(&v53);
    else
    ++dword_B77DDC;
    (*(void (__stdcall **)(LPVOID, int))(*(uint32_t *)ppv + 176))(ppv, *((uint32_t *)a4 + 5));
    v52 = Buffer;
    v8 = *(uint32_t *)a4;
    strcpy(Buffer, a4 + 36);
    qmemcpy(v59, a4, sizeof(v59));
    v59[8] = 0;
    if ( g_WOL_ProcessIdle )
    DynamicClass::Insert((int *)&g_WOL_State, v59, g_WOL_State);
    else
    switch ( dword_B77E48 )
    case 1:
    InsertGameSettings(v59, 0);
    break;
    case 2:
    InsertBuddyList((const char *)v59, 1);
    break;
    case 3:
    InsertBuddyList((const char *)v59, 0);
    break;
    case 4:
    FindBuddyList((int)v59, 1);
    break;
    case 5:
    FindBuddyList((int)v59, 0);
    break;
    default:
    InsertGameSettings(v59, 1);
    break;
    if ( (v8 & 1) != 0 )
    LOBYTE(v46) = 1;
    String::Assign_Bool((void **)&v45, a4 + 36);
    String::ToLower(&v45);
    if ( GameMode_Current[0] == 4 && g_GameOptionsFlags == 3 )
    v9 = *((uint32_t *)g_WOL_MessageQueue + (dword_B76698(&v45) & ((1 << dword_B7668C) - 1)));
    if ( v9 )
    while ( !String::Compare((const char **)v9, &v45) )
    v9 = *(uint32_t *)(v9 + 8);
    if ( !v9 )
    goto LABEL_35;
    else
    LABEL_35:
    StringVector::Insert(&g_WOL_ChatPool, &v45, 0);
    v10 = *((uint32_t *)g_WOL_ConnectionPool + (dword_B76548(&v45) & ((1 << dword_B7653C) - 1)));
    if ( v10 )
    while ( !String::Compare((const char **)v10, &v45) )
    v10 = *(uint32_t *)(v10 + 8);
    if ( !v10 )
    goto LABEL_39;
    else
    LABEL_39:
    StringVector::Insert(&g_WOL_LoginToken, &v45, 0);
    v11 = (uint32_t *)g_WOL_HashTable;
    v12 = *(uint32_t *)(*v11
    + 4
    * ((*(int (__thiscall **)(const char **))(g_WOL_HashTable + 24))(&v45) & ((1 << v11[3]) - 1)));
    if ( v12 )
    while ( !String::Compare((const char **)v12, &v45) )
    v12 = *(uint32_t *)(v12 + 112);
    if ( !v12 )
    goto LABEL_43;
    else
    LABEL_43:
    if ( v54 < 100 )
    String::Assign_Bool((void **)&v45, a4 + 36);
    String::ToLower(&v45);
    strcat(byte_B78620, String::GetOrEmpty((char **)&v45));
    strcat(byte_B78620, asc_8318B8);
    ++v51;
    if ( v51 > 20 )
    (*(void (__stdcall **)(LPVOID, char *, int, char *, int, int, uint32_t, uint32_t))(*(uint32_t *)g_UIPointerTable + 20))(
    g_UIPointerTable,
    g_WOL_ConnectFlag,
    g_WOL_GameConfig,
    byte_B78620,
    g_NetworkRematchState & 0xFFFF00,
    -1,
    0,
    0);
    (*(void (__stdcall **)(LPVOID, char *, int, char *, int))(*(uint32_t *)g_UIPointerTable + 56))(
    g_UIPointerTable,
    g_WOL_ConnectFlag,
    g_WOL_GameConfig,
    byte_B78620,
    g_NetworkRematchState & 0xFFFF00);
    v51 = 0;
    memset(byte_B78620, 0, sizeof(byte_B78620));
    if ( g_WOL_ProcessIdle && !dword_B77E4C )
    String::Assign((char **)&v49, a4 + 36);
    v13 = g_WOL_State;
    v14 = 0;
    v15 = 0;
    if ( (int)g_WOL_State <= 0 )
    LABEL_56:
    v18 = -1;
    else
    v16 = 0;
    while ( 1 )
    if ( v16 >= 0 && v15 < v13 )
    v14 = (char *)g_WOL_ConnectionFlags + v16;
    v17 = String::GetOrEmpty_Alt((char **)&v49);
    if ( !_strcmpi(v17, v14 + 36) )
    break;
    v13 = g_WOL_State;
    ++v15;
    v16 += 108;
    if ( v15 >= (int)g_WOL_State )
    goto LABEL_56;
    v18 = v15;
    v19 = (void *)(148 * v18 + 12021312);
    memset(v19, 0, 0x94u);
    strcpy((char *)v19, a4 + 36);
    v20 = String::GetOrEmpty((char **)&g_WebBrowser);
    if ( _strcmpi(a4 + 36, v20) )
    if ( Game_PlayerCount == 1 )
    v21 = CharToWideString((uint8_t *)a4 + 36);
    wcscpy(g_CurrentPlayerName, (const wchar_t *)v21);
    v22 = __2_YAPAXI_Z(0x85u);
    v23 = (int)v22;
    if ( v22 )
    Waypoint::InitInvalid(v22 + 40);
    else
    v23 = 0;
    memset((void *)v23, 0, 0x84u);
    *(uint8_t *)(v23 + 132) = 0;
    String::Assign((char **)&v57, a4 + 36);
    CharStringToWide((wchar_t **)&v55, (const char **)&v57);
    DeleteAndZero(&v57);
    v24 = WideString::GetOrEmpty((wchar_t **)&v55);
    wcscpy((wchar_t *)v23, v24);
    v25 = *((uint32_t *)a4 + 6);
    v52 = 0;
    v47 = 0;
    v48 = 0;
    v26 = ntohl(v25);
    HIBYTE(v47) = v26;
    LOBYTE(v47) = HIBYTE(v26);
    BYTE2(v47) = BYTE1(v26);
    BYTE1(v47) = BYTE2(v26);
    NetworkAddress::Assign(v58, &v52, (int)&v47, 0);
    v27 = v58[1];
    *(uint32_t *)(v23 + 40) = v58[0];
    v28 = v58[2];
    *(uint32_t *)(v23 + 44) = v27;
    *(uint32_t *)(v23 + 48) = v28;
    SessionClass::SetPlayerOption(v23, -2);
    SessionClass::SetPlayerColor(v23, -2);
    SessionClass::SetOption(v23, -2);
    SessionClass::SetOption2(v23, -2);
    if ( Game_PlayerCount < dword_A8DA7C
    || (byte_A8DA81 || !dword_A8DA7C)
    && dword_A8DA88 > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, uint32_t))(g_PlayerInfoCount + 8))(
    &g_PlayerInfoCount,
    dword_A8DA7C + dword_A8DA88,
    0) )
    v29 = Game_PlayerCount++;
    *(uint32_t *)(Game_PlayerInfoArray + 4 * v29) = v23;
    DeleteAndZero::Alt(&v55);
    DeleteAndZero((void **)&v49);
    if ( strlen(byte_B78620) )
    (*(void (__stdcall **)(LPVOID, char *, int, char *, int, int, uint32_t, uint32_t))(*(uint32_t *)g_UIPointerTable + 20))(
    g_UIPointerTable,
    g_WOL_ConnectFlag,
    g_WOL_GameConfig,
    byte_B78620,
    g_NetworkRematchState & 0xFFFF00,
    -1,
    0,
    0);
    (*(void (__stdcall **)(LPVOID, char *, int, char *, int))(*(uint32_t *)g_UIPointerTable + 56))(
    g_UIPointerTable,
    g_WOL_ConnectFlag,
    g_WOL_GameConfig,
    byte_B78620,
    g_NetworkRematchState & 0xFFFF00);
    if ( g_WOL_ProcessIdle )
    if ( !(uint8_t)v46 )
    v30 = 0;
    if ( (int)g_WOL_State > 0 )
    v31 = 0;
    while ( 1 )
    if ( v31 >= 0 && v30 < (int)g_WOL_State )
    qmemcpy(v59, (char *)g_WOL_ConnectionFlags + v31, sizeof(v59));
    v32 = String::GetOrEmpty((char **)&g_WebBrowser);
    if ( !_strcmpi(&v59[9], v32) )
    break;
    ++v30;
    v31 += 108;
    if ( v30 >= (int)g_WOL_State )
    goto LABEL_85;
    LeaveChannelWOL((const char *)v59);
    LABEL_85:
    if ( g_WOL_ProcessIdle )
    if ( !dword_B77E4C && g_WOL_State == 1 )
    v33 = String::GetOrEmpty((char **)&g_WebBrowser);
    if ( !_strcmpi(a4 + 36, v33) )
    LeaveChannelWOL(a4);
    if ( g_WOL_ProcessIdle )
    dword_AC1178 = 1;
    if ( !dword_B77E4C )
    v34 = (HWND)Dialog::FindByHandle((void *)0xC9);
    EnablePlayerSlotControls(v34, 1u);
    Game::ResetReadyStates();
    v55 = 0;
    v56 = 0;
    ReadRegistryOptionsWOL(&v55);
    ComPtr::Constructor(&v49);
    v49 = &rc_ptr<PlayerProfile>::`vftable';
    if ( Flag::IsNot2(&v55) )
    v35 = LoadPlayerProfile(&v47, (const char **)&g_WebBrowser);
    ComPtr::Set(&v49, v35[1]);
    v47 = &rc_ptr<PlayerProfile>::`vftable';
    ComPtr::Release(&v47);
    else
    ComPtr::Set(&v49, dword_B75E4C);
    SessionClass::AssignSide(GameMode_Current, *(uint32_t *)(v50 + 28), 0);
    SessionClass::AssignColor(GameMode_Current, *(uint32_t *)(v50 + 32), 0);
    v36 = g_GameOptionsFlags;
    if ( !g_MenuStateFlags )
    goto LABEL_105;
    if ( g_GameOptionsFlags != 3 && g_GameOptionsFlags != 1 && g_GameOptionsFlags != 2 )
    SessionClass::AssignSide(GameMode_Current, -3, 0);
    SessionClass::AssignColor(GameMode_Current, -2, 0);
    v36 = g_GameOptionsFlags;
    if ( !g_MenuStateFlags )
    LABEL_105:
    if ( v36 != 3 && v36 != 1 && v36 != 2 && Session::GetPlayerOption(GameMode_Current) == -3 )
    if ( Game_PlayerCount )
    PlayerSide = SessionClass::GetPlayerSide(*(uint32_t *)Game_PlayerInfoArray);
    SessionClass::AssignSide(GameMode_Current, PlayerSide, 0);
    PlayerColor = SessionClass::GetPlayerColor(*(uint32_t *)Game_PlayerInfoArray);
    SessionClass::AssignColor(GameMode_Current, PlayerColor, 0);
    else
    SessionClass::AssignSide(GameMode_Current, -2, 0);
    SessionClass::AssignColor(GameMode_Current, -2, 0);
    Network::GetAddress(dword_A8DBC0, &v52, (int)&v47, &v46);
    v44 = dword_A8E228;
    v43 = (unsigned __int16)dword_ABFEC8;
    v41 = v47;
    v40 = Session::GetPlayerColor(GameMode_Current);
    PlayerOption = Session::GetPlayerOption(GameMode_Current);
    sprintf(Buffer, "R%d,%d,%d,%d,%x,%x,%x", PlayerOption, v40, -2, -2, v41, v43, v44);
    Debug::Log();
    if ( (int)g_WOL_State > 0 )
    qmemcpy(v59, g_WOL_ConnectionFlags, sizeof(v59));
    (*(void (__stdcall **)(LPVOID, uint32_t *, char *))(*(uint32_t *)ppv + 56))(ppv, v59, Buffer);
    v49 = &rc_ptr<PlayerProfile>::`vftable';
    ComPtr::Release(&v49);
    if ( (g_GameOptionsFlags == 3 || g_GameOptionsFlags == 1 || g_GameOptionsFlags == 2)
    && !g_WOL_ProcessIdle
    && !RequestMatchWOL() )
    SetEvent(hEvent);
    DisplayRankingsWOL(0);
    DeleteAndZero((void **)&v45);
    return 0;
}

int __stdcall CComObject_CChatEventSink___ATL::vt_23_(int a1, int a2, int a3, int a4, wchar_t *a5)
{
    int v5; // esi
    signed int v7; // ebp
    int v8; // ebx
    int v9; // edi
    HWND v10; // eax
    HWND v11; // eax
    char *v12; // edi
    int v13; // eax
    int v14; // eax
    char *v15; // edx
    char v16; // [esp+7h] [ebp-8Dh]
    void *v17; // [esp+8h] [ebp-8Ch] BYREF
    void *v18; // [esp+Ch] [ebp-88h] BYREF
    int v19; // [esp+10h] [ebp-84h]
    int v20; // [esp+14h] [ebp-80h]
    size_t v21; // [esp+18h] [ebp-7Ch]
    int v22; // [esp+20h] [ebp-74h]
    char v23[108]; // [esp+28h] [ebp-6Ch] BYREF
    v5 = g_WOL_State;
    v16 = 1;
    v21 = g_WOL_State;
    v20 = 0;
    dword_B76478 = Timer::GetTicks();
    dword_B7647C = v22;
    dword_B76480 = 0;
    if ( byte_B77E27 )
    return 0;
    dword_B77DCC = 1;
    v19 = a4;
    if ( a4 )
    while ( 1 )
    ++v20;
    String::Assign((char **)&v18, (const char *)(v19 + 36));
    String::ToLower((const char **)&v18);
    v7 = 0;
    if ( v5 <= 0 )
    break;
    v8 = 0;
    while ( 1 )
    if ( v8 >= 0 && v7 < (int)g_WOL_State )
    qmemcpy(v23, (char *)g_WOL_ConnectionFlags + v8, sizeof(v23));
    v5 = v21;
    String::Assign((char **)&v17, &v23[36]);
    String::ToLower((const char **)&v17);
    if ( String::Compare((const char **)&v18, (const char **)&v17) )
    break;
    DeleteAndZero(&v17);
    ++v7;
    v8 += 108;
    if ( v7 >= v5 )
    goto LABEL_15;
    DeleteAndZero(&v17);
    if ( v7 >= v5 )
    break;
    v19 = *(uint32_t *)(v19 + 32);
    v9 = v19;
    DeleteAndZero(&v18);
    if ( !v9 )
    goto LABEL_16;
    LABEL_15:
    v16 = 0;
    DeleteAndZero(&v18);
    LABEL_16:
    if ( v20 == v5 && v16 )
    if ( g_GameOptionsFlags == 3 || g_GameOptionsFlags == 1 || g_GameOptionsFlags == 2 )
    v10 = (HWND)Dialog::FindByHandle((void *)0x117);
    CloseDialog(v10, 0);
    v11 = (HWND)Dialog::FindByHandle((void *)0xCF);
    CloseDialog(v11, 0);
    dword_B779D4 = a5;
    *(uint32_t *)dword_B77D6C = g_NetworkRematchState;
    dword_B73814 = 8960;
    *(uint32_t *)dword_B779C4 = dword_B76B24;
    if ( GameMode_Current[0] == 4 && (dword_B76B30 & 0x100) != 0 )
    *(uint32_t *)dword_B779C4 = 2;
    v12 = String::GetOrEmpty((char **)&g_WebBrowser);
    v13 = g_WOL_State;
    strcpy(byte_B77830, v12);
    if ( v13 > 0 && g_WOL_ConnectionFlags )
    strcpy(byte_B779E0, (const char *)g_WOL_ConnectionFlags + 36);
    *(uint32_t *)dword_B77788 = time(0);
    Debug::Log();
    if ( a3 )
    dword_B77DD4 = (unsigned __int8)*(uint32_t *)(a3 + 32);
    byte_B77E26 = 0;
    byte_B77E27 = 1;
    Network::SyncPlayerList();
    g_NetworkLobbyState = 2;
    Debug::Log();
    v14 = 0;
    if ( (int)g_WOL_State > 0 )
    v15 = (char *)g_WOL_ConnectionFlags;
    while ( 1 )
    if ( v14 >= 0 && v14 < (int)g_WOL_State )
    qmemcpy(&g_IsMultiplayerSession, v15, 0x6Cu);
    if ( (g_IsMultiplayerSession & 1) != 0 )
    break;
    ++v14;
    v15 += 108;
    if ( v14 >= (int)g_WOL_State )
    goto LABEL_41;
    if ( &g_IsMultiplayerSession )
    BulkCharToWide(word_A8E258, byte_B777D4, -1);
    LABEL_41:
    dword_A8E2AC = -1;
    dword_A8E04C = CComObject_CChatEventSink___ATL::DispatchConnectionPairs(&unk_A8DC4C);
    return 0;
    else
    byte_B77DEC = 0;
    g_NetworkLobbyState = 0;
    return 0;
}

int __stdcall CComObject_CChatEventSink___ATL::_vt22(int a1, int a2, int a3, int a4, char *Source)
{
    char *v5; // esi
    bool v6; // bl
    char *Flagged; // esi
    char *v8; // eax
    wchar_t *v9; // eax
    wchar_t *v10; // eax
    int v11; // esi
    HWND Current; // ebp
    void *v14; // eax
    int v15; // edx
    bool v16; // bl
    HWND DlgItem; // eax
    HWND v18; // eax
    HWND v19; // eax
    HWND v20; // eax
    char v21; // [esp+7h] [ebp-B9h]
    void *v22; // [esp+8h] [ebp-B8h] BYREF
    int v23; // [esp+Ch] [ebp-B4h]
    char v24; // [esp+13h] [ebp-ADh]
    int Buffer[16]; // [esp+14h] [ebp-ACh] BYREF
    uint8_t v26[108]; // [esp+54h] [ebp-6Ch] BYREF
    if ( (byte_B78600 & 1) == 0 )
    byte_B78600 |= 1u;
    dword_B78608 = Timer::GetTicks();
    atexit(nullsub_265);
    if ( a2 < 0 )
    return 0;
    v5 = _strdup(Source);
    v6 = SetupNetworkLobbyDialog(v5, (void *)(a4 + 36));
    free(v5);
    if ( g_NetworkLobby_Init )
    return 0;
    if ( g_NetworkLobbyState )
    return 0;
    if ( *Source == 90 )
    return 0;
    if ( *Source == 87 )
    return 0;
    v21 = 0;
    Flagged = GameSettings::FindFlagged();
    if ( Flagged )
    v8 = String::GetOrEmpty_Alt((char **)&g_WebBrowser);
    if ( !_strcmpi(Flagged + 36, v8) )
    return 0;
    if ( g_GameOptionsFlags == 3 || g_GameOptionsFlags == 1 || g_GameOptionsFlags == 2 )
    CharStringToWide((wchar_t **)&v22, (const char **)&g_WebBrowser);
    v9 = WideString::GetOrEmpty((wchar_t **)&v22);
    v10 = Player::FindByName(v9);
    v11 = (int)v10;
    if ( v10
    && SessionClass::GetPlayerSide((int)v10) >= 0
    && SessionClass::GetPlayerColor(v11) >= 0
    && *Source >= 48
    && *Source <= 57
    && g_WOL_State == 2 )
    (*(void (__stdcall **)(LPVOID, char *))(*(uint32_t *)ppv + 60))(ppv, g_INI_Key_A1);
    DeleteAndZero::Alt(&v22);
    return 0;
    Current = Dialog::GetCurrent();
    if ( !g_UIControlState )
    if ( v6 )
    v21 = 1;
    dword_B78608 = Timer::GetTicks();
    dword_B7860C = v23;
    Debug::Log();
    if ( (int)(Timer::GetTicks() - dword_B78608) > 900 )
    v14 = g_UIControlState;
    if ( (!g_UIControlState || !*(uint32_t *)g_UIControlState) && !byte_B77E2C )
    if ( !Destination
    || (LOBYTE(v14) = g_MultiplayerSetupState,
    FindAndValidateMap(&Destination, g_MultiplayerConfigState, &g_MultiplayerFlags, (int)v14, 0)) )
    dword_B78608 = Timer::GetTicks();
    dword_B7860C = v23;
    else
    v21 = 1;
    Debug::Log();
    if ( !IsRandMap::Sed2((int)GameMode_Current) )
    LOBYTE(v15) = g_MultiplayerSetupState;
    if ( !FindAndValidateMap(&Destination, g_MultiplayerConfigState, &g_MultiplayerFlags, v15, 0)
    || (RawFileClass::Construct(Buffer, (int)&Destination),
    v16 = FileClass::Open(Buffer, 0) != 0,
    RawFileClass::Dtor(Buffer),
    v16) )
    if ( GameMode_Current[0] == 4 )
    if ( dword_B76B24 || (v24 = BYTE1(dword_B76B30) & 1, (dword_B76B30 & 0x100) != 0) )
    if ( *(uint32_t *)(*(uint32_t *)Game_PlayerInfoArray + 119) )
    *(uint32_t *)(*(uint32_t *)Game_PlayerInfoArray + 119) = 0;
    Network::SendOptionsGame(aA0);
    DlgItem = GetDlgItem(Current, 1439);
    EnableWindow(DlgItem, 0);
    else
    v21 = 0;
    if ( Dialog::GetCurrentType() == 201 )
    v18 = Dialog::GetCurrent();
    InvalidateRect(v18, 0, 0);
    if ( v21 )
    sprintf((char *const)Buffer, "P%s", &Destination);
    if ( (int)g_WOL_State > 0 )
    qmemcpy(v26, g_WOL_ConnectionFlags, sizeof(v26));
    (*(void (__stdcall **)(LPVOID, uint8_t *, int *))(*(uint32_t *)ppv + 56))(ppv, v26, Buffer);
    Debug::Log();
    sub_796960();
    return 0;
    v19 = GetDlgItem(Current, 1823);
    if ( v19 )
    ShowWindow(v19, 0);
    v20 = GetDlgItem(Current, 1128);
    ShowWindow(v20, 1);
    return 0;
}

int __stdcall CComObject_CChatEventSink___ATL::vt_21_(int a1, int a2, int a3, int a4)
{
    signed int v4; // eax
    char *v5; // ebx
    signed int v6; // esi
    int v7; // edi
    char *v8; // eax
    __int16 v9; // bx
    int v10; // edi
    char **v11; // esi
    char *v12; // eax
    char *v14; // edi
    wchar_t **v15; // esi
    char *v16; // eax
    char *v17; // eax
    char *v18; // eax
    char *v19; // eax
    char *v20; // eax
    char *v21; // eax
    char *v22; // esi
    uint32_t *v23; // eax
    int v24; // edx
    int v25; // ecx
    char *v26; // eax
    int v27; // esi
    char *v28; // eax
    int v29; // ecx
    HWND v30; // ebp
    int v31; // esi
    int PlayerSide; // eax
    int v33; // ebx
    int v34; // edx
    int v35; // eax
    char *v36; // eax
    int v37; // eax
    char *v38; // eax
    int v39; // eax
    int v40; // eax
    int v41; // esi
    int v42; // eax
    int v43; // ecx
    char *v44; // eax
    uint32_t *v45; // edx
    uint32_t *v46; // eax
    int v47; // eax
    int v48; // edi
    int v49; // esi
    bool v50; // bl
    char *v51; // eax
    int v52; // eax
    int v53; // eax
    int v54; // eax
    int ResourceID2; // eax
    int v56; // eax
    HWND DlgItem; // eax
    int ResourceID; // esi
    int v59; // esi
    int v60; // edx
    uint32_t *v61; // ecx
    int *v62; // eax
    int v63; // ecx
    void *v64; // eax
    int v65; // edi
    void *PlayerColor; // eax
    int v67; // esi
    int Option; // eax
    int v69; // esi
    int Option2; // eax
    int v71; // esi
    bool v72; // bl
    int v73; // eax
    char *i; // edx
    char *v75; // eax
    signed int v76; // eax
    char *v77; // ebx
    int v78; // esi
    int v79; // edi
    char *v80; // eax
    int v81; // esi
    LPARAM v82; // [esp-8h] [ebp-DCh]
    LPARAM v83; // [esp-8h] [ebp-DCh]
    LPARAM v84; // [esp-8h] [ebp-DCh]
    LPARAM v85; // [esp-8h] [ebp-DCh]
    int v86; // [esp-4h] [ebp-D8h]
    bool v87; // [esp+11h] [ebp-C3h]
    bool v88; // [esp+11h] [ebp-C3h]
    char v89; // [esp+12h] [ebp-C2h]
    bool v90; // [esp+12h] [ebp-C2h]
    bool v91; // [esp+13h] [ebp-C1h]
    bool v92; // [esp+13h] [ebp-C1h]
    const char *v93; // [esp+14h] [ebp-C0h]
    char *v94; // [esp+14h] [ebp-C0h]
    char *v95; // [esp+14h] [ebp-C0h]
    char *v96; // [esp+14h] [ebp-C0h]
    int v97; // [esp+18h] [ebp-BCh] BYREF
    char *v98; // [esp+1Ch] [ebp-B8h]
    void *v99; // [esp+20h] [ebp-B4h] BYREF
    int v100; // [esp+24h] [ebp-B0h]
    int *v101; // [esp+28h] [ebp-ACh] BYREF
    char *v102; // [esp+2Ch] [ebp-A8h]
    int v103; // [esp+30h] [ebp-A4h] BYREF
    __int16 v104; // [esp+34h] [ebp-A0h]
    int v105; // [esp+38h] [ebp-9Ch] BYREF
    int v106; // [esp+3Ch] [ebp-98h]
    void *Block; // [esp+40h] [ebp-94h]
    int *v108; // [esp+44h] [ebp-90h]
    void *v109; // [esp+48h] [ebp-8Ch] BYREF
    int v110; // [esp+4Ch] [ebp-88h]
    int v111; // [esp+50h] [ebp-84h] BYREF
    void *v112; // [esp+54h] [ebp-80h] BYREF
    int v113; // [esp+58h] [ebp-7Ch] BYREF
    uint32_t v114[3]; // [esp+5Ch] [ebp-78h] BYREF
    uint32_t v115[27]; // [esp+68h] [ebp-6Ch] BYREF
    if ( g_NetworkLobby_Init
    || g_NetworkLobbyState && *(uint8_t *)a4 != 90
    || (g_GameOptionsFlags == 3 || g_GameOptionsFlags == 1 || g_GameOptionsFlags == 2) && *(uint8_t *)a4 != 90 )
    return 0;
    v93 = (const char *)(a3 + 36);
    String::Assign((char **)&v99, (const char *)(a3 + 36));
    v4 = g_WOL_State;
    v5 = 0;
    v6 = 0;
    if ( (int)g_WOL_State <= 0 )
    LABEL_15:
    v6 = -1;
    else
    v7 = 0;
    while ( 1 )
    if ( v7 >= 0 && v6 < v4 )
    v5 = (char *)g_WOL_ConnectionFlags + v7;
    v8 = String::GetOrEmpty_Alt((char **)&v99);
    if ( !_strcmpi(v8, v5 + 36) )
    break;
    v4 = g_WOL_State;
    ++v6;
    v7 += 108;
    if ( v6 >= (int)g_WOL_State )
    goto LABEL_15;
    DeleteAndZero(&v99);
    if ( v6 == -1 )
    return 0;
    if ( *(uint8_t *)a4 == 80 )
    if ( dword_B77E4C == 1 )
    Debug::Log();
    if ( (int)g_WOL_State >= 2 )
    v73 = 0;
    if ( (int)g_WOL_State > 0 )
    for ( i = (char *)g_WOL_ConnectionFlags; ; i += 108 )
    if ( v73 >= 0 && v73 < (int)g_WOL_State )
    qmemcpy(&g_IsMultiplayerSession, i, 0x6Cu);
    if ( (g_IsMultiplayerSession & 1) != 0 )
    break;
    if ( ++v73 >= (int)g_WOL_State )
    return 0;
    if ( &g_IsMultiplayerSession )
    v75 = String::GetOrEmpty_Alt((char **)&g_WebBrowser);
    if ( !_strcmpi(&byte_B777D4, v75)
    && !g_NetworkLobbyState
    && g_WOL_ProcessIdle
    && g_UIControlState
    && *(uint32_t *)g_UIControlState
    && byte_8316D4 )
    String::Assign((char **)&v109, v93);
    v76 = g_WOL_State;
    v77 = 0;
    v78 = 0;
    if ( (int)g_WOL_State <= 0 )
    LABEL_150:
    v78 = -1;
    else
    v79 = 0;
    while ( 1 )
    if ( v79 >= 0 && v78 < v76 )
    v77 = (char *)g_WOL_ConnectionFlags + v79;
    v80 = String::GetOrEmpty_Alt((char **)&v109);
    if ( !_strcmpi(v80, v77 + 36) )
    break;
    v76 = g_WOL_State;
    ++v78;
    v79 += 108;
    if ( v78 >= (int)g_WOL_State )
    goto LABEL_150;
    DeleteAndZero(&v109);
    if ( v78 != -1 )
    if ( v78 >= 0 && v78 < (int)g_WOL_State )
    qmemcpy(v115, (char *)g_WOL_ConnectionFlags + 108 * v78, sizeof(v115));
    v115[8] = 0;
    Network::SyncPlayerList();
    v81 = dword_B77DCC;
    dword_B77DCC = 1;
    MapPreview::Upload((int *)g_UIControlState);
    dword_B77DCC = v81;
    return 0;
    if ( *(uint8_t *)a4 == 82 )
    v14 = 0;
    Block = _strdup((const char *)(a4 + 1));
    v98 = 0;
    v15 = (wchar_t **)&g_NetworkPlayerName;
    while ( 1 )
    WideString::Assign((wchar_t **)&v112, *v15);
    ToWideStringCharAlt((char **)&v97, (const wchar_t **)&v112);
    DeleteAndZero::Alt(&v112);
    v16 = String::GetOrEmpty((char **)&v97);
    if ( !_strcmpi(v16, v93) )
    break;
    DeleteAndZero((void **)&v97);
    ++v15;
    ++v14;
    if ( (int)v15 >= (int)&g_PlayerNameListEnd )
    v98 = v14;
    free(Block);
    return 0;
    v98 = v14;
    v102 = v14;
    DeleteAndZero((void **)&v97);
    if ( v14 == (char *)-1 )
    goto LABEL_125;
    v17 = strtok((char *)Block, Delimiter);
    v100 = 0;
    if ( v17 )
    v100 = atol(v17);
    v18 = strtok(0, Delimiter);
    v99 = 0;
    if ( v18 )
    v99 = (void *)atol(v18);
    v19 = strtok(0, Delimiter);
    v110 = 0;
    if ( v19 )
    v110 = atol(v19);
    v20 = strtok(0, Delimiter);
    v106 = 0;
    if ( v20 )
    v106 = atol(v20);
    v21 = strtok(0, Delimiter);
    v105 = 0;
    sscanf(v21, "%X", &v105);
    Waypoint::InitInvalid(v114);
    if ( v105 )
    v103 = v105;
    v101 = 0;
    v104 = 0;
    NetworkID::Assign(v114, &v101, (int)&v103, 0);
    v22 = v98;
    v23 = (uint32_t *)(12 * (uint32_t)v98 + 11066316);
    v24 = v114[1];
    *v23 = v114[0];
    v25 = v114[2];
    v23[1] = v24;
    v23[2] = v25;
    else
    v22 = v98;
    v26 = strtok(0, Delimiter);
    v111 = 0;
    if ( v26 )
    sscanf(v26, "%X", &v111);
    v27 = (int)v22;
    v97 = v27 * 4;
    v108 = &dword_A8DC2C[v27];
    *v108 = v111;
    v28 = strtok(0, Delimiter);
    v29 = 0;
    v113 = 0;
    if ( v28 )
    sscanf(v28, "%X", &v113);
    v29 = v113;
    v101 = &dword_A8E230[v27];
    *v101 = v29;
    Network::FormatAddress((unsigned __int16 *)v114, 0);
    Debug::Log();
    v30 = (HWND)Dialog::FindByHandle((void *)0xC2);
    if ( !v30 )
    v30 = (HWND)Dialog::FindByHandle((void *)0xC9);
    v31 = v97;
    PlayerSide = SessionClass::GetPlayerSide(*(LPARAM *)((char *)&g_NetworkPlayerName + v97));
    v33 = *(LPARAM *)((char *)&g_NetworkPlayerName + v31);
    v103 = PlayerSide;
    v87 = 0;
    v91 = 0;
    v89 = 0;
    if ( PlayerSide == -3 )
    v91 = v100 != -3;
    else
    v87 = v100 == -3;
    v34 = g_WOL_State;
    v35 = 0;
    if ( (int)g_WOL_State > 0 )
    v94 = (char *)g_WOL_ConnectionFlags;
    while ( 1 )
    if ( v35 >= 0 && v35 < (int)g_WOL_State )
    qmemcpy(&g_IsMultiplayerSession, v94, 0x6Cu);
    if ( (g_IsMultiplayerSession & 1) != 0 )
    break;
    ++v35;
    v94 += 108;
    if ( v35 >= (int)g_WOL_State )
    goto LABEL_67;
    if ( &g_IsMultiplayerSession )
    v36 = String::GetOrEmpty_Alt((char **)&g_WebBrowser);
    if ( !_strcmpi(&byte_B777D4, v36)
    && !v98
    && v87
    && g_GameStateFlags
    && !(*(unsigned __int8 (__thiscall **)(int))(*(uint32_t *)g_GameStateFlags + 188))(g_GameStateFlags) )
    v87 = 0;
    v89 = 1;
    v34 = g_WOL_State;
    LABEL_67:
    if ( v91 )
    v37 = 0;
    if ( v34 > 0 )
    v95 = (char *)g_WOL_ConnectionFlags;
    while ( 1 )
    if ( v37 >= 0 && v37 < v34 )
    qmemcpy(&g_IsMultiplayerSession, v95, 0x6Cu);
    if ( (g_IsMultiplayerSession & 1) != 0 )
    break;
    ++v37;
    v95 += 108;
    if ( v37 >= v34 )
    goto LABEL_82;
    if ( &g_IsMultiplayerSession )
    v38 = String::GetOrEmpty_Alt((char **)&g_WebBrowser);
    if ( !_strcmpi(&byte_B777D4, v38) )
    if ( NetworkLobby::CheckMinPlayers() )
    v82 = g_Lobby_MaxPlayers;
    v39 = PlayerSlot::IndexToDlgID(v98);
    PlayerSkirmishSlotHandler(v30, v39, v82, 0);
    v89 = 1;
    Lobby::BuildPlayerList();
    CheckGameSettingsChanged(1, 0);
    DisplayRankingsWOL(0);
    else
    SessionClass::SetPlayerOption(v33, -2);
    *(uint32_t *)(v33 + 107) = 0;
    v83 = g_Lobby_MaxPlayers;
    v40 = PlayerSlot::IndexToDlgID((void *)g_MPCooperativeState);
    PlayerSkirmishSlotHandler(v30, v40, v83, 0);
    v41 = NetworkLobby::AssignPlayerSlot(v33);
    v102 = (char *)v41;
    v42 = PlayerSlot::IndexToDlgID((void *)v41);
    PlayerSkirmishSlotHandler(v30, v42, v33, 0);
    Lobby::BuildPlayerList();
    v43 = v41;
    v97 = v43 * 4;
    v44 = v98;
    dword_A8DC2C[v43] = *v108;
    v45 = (uint32_t *)(12 * (uint32_t)v44 + 11066316);
    v46 = (uint32_t *)(12 * v41 + 11066316);
    *v46 = *v45;
    v46[1] = v45[1];
    v46[2] = v45[2];
    dword_A8E230[v43] = *v101;
    v34 = g_WOL_State;
    LABEL_82:
    if ( v87 )
    v47 = 0;
    if ( v34 > 0 )
    v96 = (char *)g_WOL_ConnectionFlags;
    while ( 1 )
    if ( v47 >= 0 && v47 < v34 )
    qmemcpy(&g_IsMultiplayerSession, v96, 0x6Cu);
    if ( (g_IsMultiplayerSession & 1) != 0 )
    break;
    ++v47;
    v96 += 108;
    if ( v47 >= v34 )
    goto LABEL_90;
    if ( &g_IsMultiplayerSession )
    v51 = String::GetOrEmpty_Alt((char **)&g_WebBrowser);
    if ( !_strcmpi(&byte_B777D4, v51) )
    if ( !GameOption::CheckDuplicate() )
    SessionClass::SetPlayerOption(v33, -3);
    *(uint32_t *)(v33 + 107) = -1;
    v85 = g_HouseClass_ObserverFlags;
    v53 = PlayerSlot::IndexToDlgID(v102);
    PlayerSkirmishSlotHandler(v30, v53, v85, 0);
    v54 = PlayerSlot::IndexToDlgID((void *)g_MPCooperativeState);
    PlayerSkirmishSlotHandler(v30, v54, v33, 0);
    Lobby::BuildPlayerList();
    ResourceID2 = GetResourceID2CSF((void *)g_MPCooperativeState);
    SetupComboBoxObserver(v30, ResourceID2);
    v56 = PlayerSlot::IndexToDlgID((void *)g_MPCooperativeState);
    DlgItem = GetDlgItem(v30, v56);
    SendMessageA(DlgItem, 0x4F1u, 0, 1);
    ResourceID = GetResourceIDCSF((void *)g_MPCooperativeState);
    FillListBox(v30, ResourceID);
    SetupSkirmishSpawnLocations(v30, ResourceID, 8);
    v59 = g_MPCooperativeState;
    CheckGameSettingsChanged(1, 0);
    DisplayRankingsWOL(0);
    dword_A8DC2C[v59] = *v108;
    v60 = 12 * (uint32_t)v98 + 11066316;
    v61 = (uint32_t *)(12 * v59 + 11066316);
    *v61 = dword_A8DBCC[3 * (uint32_t)v98];
    v61[1] = *(uint32_t *)(v60 + 4);
    v62 = v101;
    v61[2] = *(uint32_t *)(v60 + 8);
    v63 = *v62;
    v64 = Block;
    dword_A8E230[v59] = v63;
    free(v64);
    return 0;
    v84 = g_HouseClass_ObserverFlags;
    v52 = PlayerSlot::IndexToDlgID(v102);
    PlayerSkirmishSlotHandler(v30, v52, v84, 0);
    Lobby::BuildPlayerList();
    LABEL_124:
    CheckGameSettingsChanged(1, 0);
    DisplayRankingsWOL(0);
    goto LABEL_125;
    LABEL_90:
    if ( v89 )
    LABEL_125:
    free(Block);
    return 0;
    v48 = v103;
    v49 = v100;
    v50 = v103 != v100;
    v92 = v103 != v100;
    if ( !g_GameStateFlags
    || (*(unsigned __int8 (__thiscall **)(int, int))(*(uint32_t *)g_GameStateFlags + 28))(g_GameStateFlags, v100) )
    if ( !v50 )
    v65 = v97;
    LABEL_105:
    PlayerColor = (void *)SessionClass::GetPlayerColor(*(LPARAM *)((char *)&g_NetworkPlayerName + v65));
    v67 = (int)v99;
    v90 = PlayerColor != v99;
    if ( PlayerColor != v99 )
    if ( (unsigned __int8)NetworkSession::IsPlayerInGame(v99) )
    v67 = -2;
    SessionClass::SetPlayerColor(*(LPARAM *)((char *)&g_NetworkPlayerName + v65), v67);
    Option = SessionClass::GetOption(*(LPARAM *)((char *)&g_NetworkPlayerName + v65));
    v69 = v110;
    v88 = Option != v110;
    if ( Option != v110 )
    if ( (unsigned __int8)NetworkLobby::CheckPlayerNames(v110) )
    v69 = -2;
    SessionClass::SetOption(*(LPARAM *)((char *)&g_NetworkPlayerName + v65), v69);
    Option2 = SessionClass::GetOption2(*(LPARAM *)((char *)&g_NetworkPlayerName + v65));
    v71 = v106;
    v72 = Option2 != v106;
    if ( Option2 != v106 )
    if ( !g_GameStateFlags
    || (*(unsigned __int8 (__thiscall **)(int, int))(*(uint32_t *)g_GameStateFlags + 52))(g_GameStateFlags, v106) )
    SessionClass::SetOption2(*(LPARAM *)((char *)&g_NetworkPlayerName + v65), v71);
    else if ( g_GameStateFlags )
    v86 = (*(int (__thiscall **)(int))(*(uint32_t *)g_GameStateFlags + 44))(g_GameStateFlags);
    SessionClass::SetOption2(*(LPARAM *)((char *)&g_NetworkPlayerName + v65), v86);
    else
    SessionClass::SetOption2(*(LPARAM *)((char *)&g_NetworkPlayerName + v65), -2);
    if ( !v92 && !v90 && !v88 && !v72 )
    goto LABEL_125;
    goto LABEL_124;
    else
    if ( (*(unsigned __int8 (__thiscall **)(int, int))(*(uint32_t *)g_GameStateFlags + 28))(g_GameStateFlags, v48) )
    v49 = v48;
    else
    v49 = (*(int (__thiscall **)(int))(*(uint32_t *)g_GameStateFlags + 40))(g_GameStateFlags);
    v92 = 1;
    v65 = v97;
    SessionClass::SetPlayerOption(*(LPARAM *)((char *)&g_NetworkPlayerName + v97), v49);
    goto LABEL_105;
    if ( *(uint8_t *)a4 != 90 || *(uint8_t *)(a4 + 1) != 52 )
    return 0;
    Debug::Log();
    v9 = atol((const char *)(a4 + 2));
    Debug::Log();
    v10 = 0;
    v11 = (char **)&g_NetworkPlayerName;
    while ( 1 )
    v12 = ToWideStringChar(*v11);
    if ( !_strcmpi(v12, v93) )
    break;
    ++v11;
    ++v10;
    if ( (int)v11 >= (int)&g_PlayerNameListEnd )
    return 0;
    *((_WORD *)&dword_A8E050 + v10) = v9;
    return 0;
}

int __stdcall CComObject_CChatEventSink___ATL::_vt16(int a1, int a2, int a3, const char *a4, char *String1)
{
    const char *v6; // edi
    const char *v7; // esi
    bool v8; // bl
    int v9; // edi
    const void *v10; // esi
    wchar_t *v11; // eax
    if ( !g_NetworkLobby_Init && a2 >= 0 )
    if ( g_GameOptionsFlags == 3 || g_GameOptionsFlags == 1 || g_GameOptionsFlags == 2 )
    if ( (*a4 & 1) != 0 )
    HandleWOLMatchMessage(String1, 0);
    return 0;
    else
    v6 = String1;
    String::Assign(&String1, String1);
    v7 = a4;
    if ( a4 )
    if ( (*a4 & 1) != 0 )
    v8 = 1;
    else if ( Dialog::FindByHandle((void *)0xC2) )
    v8 = 1;
    else if ( Dialog::FindByHandle((void *)0xC9) )
    v8 = 1;
    else
    v8 = dword_B779C0 != 0;
    else
    v8 = 0;
    DeleteAndZero((void **)&String1);
    if ( v8 && IsBuddyOrIgnoreWOL(v7) )
    String::Assign(&String1, v6);
    CharStringToWide((wchar_t **)&a2, (const char **)&String1);
    DeleteAndZero((void **)&String1);
    v9 = 61680;
    if ( (*v7 & 1) != 0 )
    v9 = 16776960;
    v10 = v7 + 36;
    if ( _strcmpi(g_GameSetupBuffer, v10) )
    v11 = WideString::GetOrEmpty((wchar_t **)&a2);
    Dialog::ShowMessage(v9, (size_t)aHsS_1, v10, v11);
    DeleteAndZero::Alt((void **)&a2);
    return 0;
}

int __stdcall CComObject_CChatEventSink___ATL::_vt40(int a1, int a2, int a3, const char *a4, wchar_t *String)
{
    const char *v6; // esi
    bool v7; // zf
    int v8; // eax
    int v9; // edi
    const void *v10; // esi
    wchar_t *v11; // eax
    if ( g_NetworkLobby_Init )
    return 0;
    if ( a2 < 0 )
    return 0;
    WideString::Assign((wchar_t **)&a2, String);
    v6 = a4;
    if ( a4 )
    if ( (*a4 & 1) != 0 || Dialog::FindByHandle((void *)0xC2) || Dialog::FindByHandle((void *)0xC9) )
    goto LABEL_21;
    v7 = WideString::IsASCII((const wchar_t **)&a2) == 0;
    v8 = dword_B779C0;
    if ( v7 )
    v8 = dword_B779DC;
    if ( v8 )
    LABEL_21:
    if ( IsBuddyOrIgnoreWOL(v6) )
    v9 = 61680;
    if ( (*v6 & 1) != 0 )
    v9 = 16776960;
    v10 = v6 + 36;
    if ( _strcmpi(g_GameSetupBuffer, v10) )
    v11 = WideString::GetOrEmpty((wchar_t **)&a2);
    Dialog::ShowMessage(v9, (size_t)aHsS_1, v10, v11);
    DeleteAndZero::Alt((void **)&a2);
    return 0;
}

int __stdcall CComObject_CChatEventSink___ATL::_vt17(int a1, int a2, const char *a3, char *String1)
{
    const char *v5; // edi
    const char *v6; // esi
    bool v7; // bl
    int v8; // edi
    const void *v9; // esi
    wchar_t *v10; // eax
    if ( g_NetworkLobby_Init || a2 < 0 )
    return 0;
    if ( g_GameOptionsFlags != 3 && g_GameOptionsFlags != 1 && g_GameOptionsFlags != 2 )
    v5 = String1;
    String::Assign(&String1, String1);
    v6 = a3;
    if ( a3 )
    if ( (*a3 & 1) != 0 )
    v7 = 1;
    else if ( Dialog::FindByHandle((void *)0xC2) )
    v7 = 1;
    else if ( Dialog::FindByHandle((void *)0xC9) )
    v7 = 1;
    else
    v7 = dword_B779C0 != 0;
    else
    v7 = 0;
    DeleteAndZero((void **)&String1);
    if ( v7 && IsBuddyOrIgnoreWOL(v6) )
    String::Assign(&String1, v5);
    CharStringToWide((wchar_t **)&a2, (const char **)&String1);
    DeleteAndZero((void **)&String1);
    v8 = 16744576;
    if ( (*v6 & 1) != 0 )
    v8 = 16776960;
    v9 = v6 + 36;
    if ( _strcmpi(g_GameSetupBuffer, v9) )
    v10 = WideString::GetOrEmpty((wchar_t **)&a2);
    Dialog::ShowMessage(v8, (size_t)aHsS_2, v9, v10);
    DeleteAndZero::Alt((void **)&a2);
    return 0;
    if ( (*a3 & 1) != 0 )
    HandleWOLMatchMessage(String1, 1);
    else
    Debug::Log();
    return 0;
}

int __stdcall CComObject_CChatEventSink___ATL::_vt41(int a1, int a2, const char *a3, wchar_t *String)
{
    const char *v5; // esi
    bool v6; // zf
    int v7; // eax
    int v8; // edi
    const void *v9; // esi
    wchar_t *v10; // eax
    if ( g_NetworkLobby_Init )
    return 0;
    if ( a2 < 0 )
    return 0;
    WideString::Assign((wchar_t **)&a2, String);
    v5 = a3;
    if ( a3 )
    if ( (*a3 & 1) != 0 || Dialog::FindByHandle((void *)0xC2) || Dialog::FindByHandle((void *)0xC9) )
    goto LABEL_21;
    v6 = WideString::IsASCII((const wchar_t **)&a2) == 0;
    v7 = dword_B779C0;
    if ( v6 )
    v7 = dword_B779DC;
    if ( v7 )
    LABEL_21:
    if ( IsBuddyOrIgnoreWOL(v5) )
    v8 = 16744576;
    if ( (*v5 & 1) != 0 )
    v8 = 16776960;
    v9 = v5 + 36;
    if ( _strcmpi(g_GameSetupBuffer, v9) )
    v10 = WideString::GetOrEmpty((wchar_t **)&a2);
    Dialog::ShowMessage(v8, (size_t)aHsS_2, v9, v10);
    DeleteAndZero::Alt((void **)&a2);
    return 0;
}

int __stdcall CComObject_CChatEventSink___ATL::_vt28(int a1, int a2, const char *a3, const char *a4)
{
    bool v5; // zf
    int v6; // eax
    char v7; // al
    wchar_t *v8; // eax
    int Type; // esi
    int v10; // eax
    wchar_t *StringCSF; // eax
    wchar_t *v12; // eax
    HWND Current; // esi
    wchar_t *v14; // eax
    wchar_t *v15; // eax
    HWND Dialog; // eax
    wchar_t *v17; // eax
    HWND DlgItem; // eax
    char **ChatCommand; // ebx
    HWND v20; // esi
    char *v21; // eax
    int v22; // esi
    wchar_t *v23; // eax
    int v24; // [esp-Ch] [ebp-22Ch]
    void *v25; // [esp+Ch] [ebp-214h] BYREF
    void *v26[4]; // [esp+10h] [ebp-210h] BYREF
    wchar_t Buffer[256]; // [esp+20h] [ebp-200h] BYREF
    if ( a2 < 0 )
    return 0;
    String::Assign((char **)v26, a4);
    CharStringToWide((wchar_t **)&v25, (const char **)v26);
    DeleteAndZero(v26);
    if ( !a3 )
    goto LABEL_12;
    if ( (*a3 & 1) == 0 && !Dialog::FindByHandle((void *)0xC2) && !Dialog::FindByHandle((void *)0xC9) )
    v5 = WideString::IsASCII((const wchar_t **)&v25) == 0;
    v6 = dword_B779C0;
    if ( v5 )
    v6 = dword_B779DC;
    if ( !v6 )
    goto LABEL_12;
    if ( IsBuddyOrIgnoreWOL(a3) )
    v7 = g_NetworkLobby_Init;
    strcpy(byte_B77E30, a3 + 36);
    if ( v7 )
    v8 = WideString::GetOrEmpty((wchar_t **)&v25);
    swprintf(Buffer, (const size_t)g_Str_Trace___hs_, (const wchar_t *const)a3 + 18, v8);
    Type = BuildingAnim::GetType();
    v10 = Math::RoundToInt(*(double *)&RulesClass_Instance[1].InfantryVirus * 900.0);
    MessageListClass::AddMessage(g_GameNetworkObject, 0, 0, Buffer, Type, 22, v10, 0);
    v24 = Math::RoundToInt(*(double *)&RulesClass_Instance[1].InfantryVirus * 900.0);
    StringCSF = GetStringCSF(aTxtHowToReply, 0, g_Str_File_wonline_cpp, 8066);
    MessageListClass::AddMessage(g_GameNetworkObject, 0, 0, StringCSF, Type, 22, v24, 0);
    MapClass::MarkForRedraw(&MapClass_Instance, 0);
    v12 = WideString::GetOrEmpty((wchar_t **)&v25);
    Dialog::ShowStatusText(0xFFFFFF, (size_t)g_Str_Trace___hs_, a3 + 36, v12);
    dword_B76478 = Timer::GetTicks();
    dword_B7647C = (int)v26[2];
    dword_B76480 = 300;
    else
    Current = Dialog::GetCurrent();
    if ( Current )
    while ( !GetDlgItem(Current, 1343) )
    if ( GetDlgItem(Current, 1461) )
    v14 = WideString::GetOrEmpty((wchar_t **)&v25);
    Dialog::ShowStatusText(0xFFFFFF, (size_t)g_Str_Trace___hs_, a3 + 36, v14);
    Current = (HWND)Dialog::FindByPtr(Current);
    if ( !Current )
    goto LABEL_22;
    v15 = WideString::GetOrEmpty((wchar_t **)&v25);
    Dialog::ShowMessage(0xFFFFFF, (size_t)g_Str_Trace___hs_, a3 + 36, v15);
    else
    LABEL_22:
    ReleaseCapture();
    Screen::Capture(1, 0, (int)(a3 + 36), (int)a3);
    Dialog = (HWND)CreateDialog(0x11Eu, (INT_PTR (__stdcall *)(HWND, UINT, WPARAM, LPARAM))ChatDialog::DlgProc, 0);
    Current = Dialog;
    if ( Dialog )
    SetFocus(Dialog);
    v17 = WideString::GetOrEmpty((wchar_t **)&v25);
    Dialog::ShowMessage(0xFFFFFF, (size_t)g_Str_Trace___hs_, a3 + 36, v17);
    ShowWindow(Current, 1);
    DlgItem = GetDlgItem(Current, 1343);
    ChatCommand = ExtractChatCommand((char **)v26, DlgItem);
    v20 = GetDlgItem(Current, 1816);
    v21 = String::GetOrEmpty_Alt(ChatCommand);
    SendMessageA(v20, 0x4B4u, 0, (LPARAM)v21);
    DeleteAndZero(v26);
    if ( byte_B77E40 )
    v22 = *(uint32_t *)ppv;
    v23 = WideString::GetOrEmpty((wchar_t **)&dword_B76230);
    (*(void (__stdcall **)(LPVOID, const char *, wchar_t *))(v22 + 236))(ppv, a3, v23);
    PlayVocClass(RulesClass_Instance->SpotlightLocationRadius, 0x2000, 1.0, 0);
    DeleteAndZero::Alt(&v25);
    return 0;
    else
    LABEL_12:
    DeleteAndZero::Alt(&v25);
    return 0;
}

int __stdcall CComObject_CChatEventSink___ATL::_vt44(int a1, int a2, int a3, wchar_t *String)
{
    int v5; // edi
    bool v6; // bl
    bool v7; // zf
    int v8; // eax
    int Type; // ebx
    int v10; // eax
    HWND Current; // esi
    HWND DlgItem; // eax
    char **ChatCommand; // ebx
    HWND v14; // esi
    char *v15; // eax
    int v16; // esi
    wchar_t *v17; // eax
    void *v18; // [esp+Ch] [ebp-204h] BYREF
    wchar_t Buffer[256]; // [esp+10h] [ebp-200h] BYREF
    if ( a2 < 0 )
    return 0;
    WideString::Assign((wchar_t **)&v18, String);
    v5 = a3;
    if ( a3 )
    if ( (*(uint8_t *)a3 & 1) != 0 )
    v6 = 1;
    else if ( Dialog::FindByHandle((void *)0xC2) )
    v6 = 1;
    else if ( Dialog::FindByHandle((void *)0xC9) )
    v6 = 1;
    else
    v7 = WideString::IsASCII((const wchar_t **)&v18) == 0;
    v8 = dword_B779C0;
    if ( v7 )
    v8 = dword_B779DC;
    v6 = v8 != 0;
    else
    v6 = 0;
    DeleteAndZero::Alt(&v18);
    if ( !v6 )
    return 0;
    if ( !IsBuddyOrIgnoreWOL((const char *)a3) )
    return 0;
    if ( g_NetworkLobby_Init )
    swprintf(Buffer, (const size_t)g_Str_Trace___hs_, (const wchar_t *const)(a3 + 36), String);
    Type = BuildingAnim::GetType();
    v10 = Math::RoundToInt(*(double *)&RulesClass_Instance[1].InfantryVirus * 900.0);
    MessageListClass::AddMessage(g_GameNetworkObject, 0, 0, Buffer, Type, 22, v10, 0);
    MapClass::MarkForRedraw(&MapClass_Instance, 0);
    Dialog::ShowStatusText(0xFFFFFF, (size_t)g_Str_Trace___hs_, a3 + 36, String);
    else
    Current = Dialog::GetCurrent();
    if ( Current )
    while ( !GetDlgItem(Current, 1343) )
    if ( GetDlgItem(Current, 1461) )
    Dialog::ShowStatusText(0xFFFFFF, (size_t)g_Str_Trace___hs_, a3 + 36, String);
    Current = (HWND)Dialog::FindByPtr(Current);
    if ( !Current )
    goto LABEL_27;
    Dialog::ShowMessage(0xFFFFFF, (size_t)g_Str_Trace___hs_, a3 + 36, String);
    else
    LABEL_27:
    ReleaseCapture();
    Screen::Capture(1, 0, v6, (int)String);
    Current = (HWND)CreateDialog(0x11Eu, (INT_PTR (__stdcall *)(HWND, UINT, WPARAM, LPARAM))ChatDialog::DlgProc, 0);
    SetFocus(Current);
    Dialog::ShowMessage(0xFFFFFF, (size_t)g_Str_Trace___hs_, a3 + 36, String);
    ShowWindow(Current, 1);
    DlgItem = GetDlgItem(Current, 1343);
    ChatCommand = ExtractChatCommand((char **)&v18, DlgItem);
    v14 = GetDlgItem(Current, 1816);
    v15 = String::GetOrEmpty_Alt(ChatCommand);
    SendMessageA(v14, 0x4B4u, 0, (LPARAM)v15);
    DeleteAndZero(&v18);
    v5 = a3;
    if ( byte_B77E40 )
    v16 = *(uint32_t *)ppv;
    v17 = WideString::GetOrEmpty((wchar_t **)&dword_B76230);
    (*(void (__stdcall **)(LPVOID, int, wchar_t *))(v16 + 236))(ppv, v5, v17);
    PlayVocClass(RulesClass_Instance->SpotlightLocationRadius, 0x2000, 1.0, 0);
    return 0;
}

int __stdcall CComObject_CChatEventSink___ATL::_vt27(int a1, int a2)
{
    wchar_t *StringCSF; // eax
    HWND Current; // eax
    HWND v5; // esi
    int Type; // esi
    int v7; // eax
    wchar_t *v8; // [esp-4h] [ebp-10Ch]
    wchar_t *v9; // [esp-4h] [ebp-10Ch]
    const wchar_t *v10; // [esp+0h] [ebp-108h]
    wchar_t Buffer[128]; // [esp+8h] [ebp-100h] BYREF
    if ( !a2 )
    StringCSF = GetStringCSF(aTxtPagesent, 0, g_Str_File_wonline_cpp, 8189);
    Dialog::ShowStatusText(-1, (size_t)StringCSF);
    return 0;
    if ( a2 == 262452 )
    v8 = GetStringCSF(aTxtPagedisable, 0, g_Str_File_wonline_cpp, 8193);
    swprintf(Buffer, (const size_t)v8, v10);
    else
    if ( a2 == 262451 )
    v9 = GetStringCSF(aTxtPageusergon, 0, g_Str_File_wonline_cpp, 8195);
    else
    v9 = GetStringCSF(aTxtPagefailed, 0, g_Str_File_wonline_cpp, 8197);
    swprintf(Buffer, (const size_t)v9, v10);
    Current = Dialog::GetCurrent();
    v5 = Current;
    if ( !Current )
    goto LABEL_19;
    if ( GetDlgItem(Current, 1343) )
    Dialog::ShowMessage(-1, (size_t)Buffer);
    return 0;
    if ( GetDlgItem(v5, 1461) )
    Dialog::ShowStatusText(-1, (size_t)Buffer);
    return 0;
    else
    LABEL_19:
    if ( SessionClass::GetGameSpeed(GameMode_Current) )
    Type = BuildingAnim::GetType();
    v7 = Math::RoundToInt(*(double *)&RulesClass_Instance[1].InfantryVirus * 900.0);
    MessageListClass::AddMessage(g_GameNetworkObject, 0, 0, Buffer, Type, 22, v7, 0);
    return 0;
}

int __stdcall CComObject_CChatEventSink___ATL::_vt18(int a1, int a2, int a3)
{
    if ( !g_NetworkLobby_Init && a2 >= 0 )
    Dialog::ShowMessage(-1, (size_t)aHs_2, a3);
    return 0;
}

int __userpurge CComObject_CChatEventSink___ATL::_vt19@<eax>(const wchar_t *a1@<esi>, int a2, int a3)
{
    wchar_t *StringCSF; // eax
    int Type; // esi
    int v6; // eax
    wchar_t *v7; // eax
    wchar_t Buffer[256]; // [esp+0h] [ebp-200h] BYREF
    if ( byte_B77DC0 )
    SetEvent(dword_B736A8);
    dword_B77DE8 = a3;
    return 0;
    if ( a3 == 262447 )
    if ( g_NetworkLobby_Init )
    if ( !byte_B77DC2 )
    Buffer[0] = 0;
    StringCSF = GetStringCSF(aTxtWolConnlost, 0, g_Str_File_wonline_cpp, 8460);
    swprintf(Buffer, (const size_t)StringCSF, a1);
    Type = BuildingAnim::GetType();
    v6 = Math::RoundToInt(*(double *)&RulesClass_Instance[1].InfantryVirus * 900.0);
    MessageListClass::AddMessage(g_GameNetworkObject, 0, 0, Buffer, Type, 22, v6, 0);
    MapClass::MarkForRedraw(&MapClass_Instance, 0);
    memset(&g_WOL_ProcessIdle, 0, 0x10Cu);
    memset(&dword_B73BE8, 0, 0x10Cu);
    byte_B77DC2 = 1;
    g_WOL_ChannelState = 0;
    Debug::Log();
    return 0;
    else
    if ( Dialog::FindByHandle((void *)0x113) )
    v7 = GetStringCSF(aTxtYoureDiscon, 0, g_Str_File_wonline_cpp, 8478);
    ShowDialogConfirm(v7, 0, (int)GameLoop::Thunk, 0);
    byte_B77DC0 = 1;
    byte_B77DC2 = 1;
    SetEvent(Handles);
    memset(&g_WOL_ProcessIdle, 0, 0x10Cu);
    memset(&dword_B73BE8, 0, 0x10Cu);
    g_WOL_ChannelState = 0;
    Debug::Log();
    return 0;
}

int __stdcall CComObject_CChatEventSink___ATL::vt_08_(int a1, int a2, const char *a3)
{
    signed int v3; // eax
    signed int v4; // ebx
    int v5; // ebp
    const char *v6; // ebx
    signed int v7; // eax
    char *v8; // ebp
    int v9; // edi
    char *v10; // edx
    int v11; // eax
    int v12; // ebp
    int v13; // eax
    char *v14; // edx
    int v15; // esi
    int v16; // eax
    int v17; // esi
    int v18; // esi
    char **v19; // ecx
    int v20; // esi
    int v21; // eax
    int v22; // esi
    int v23; // esi
    char **v24; // ecx
    uint32_t *v25; // esi
    int v26; // esi
    HWND v27; // eax
    HWND v28; // eax
    HWND v29; // esi
    HWND DlgItem; // eax
    void *v32; // [esp+68h] [ebp-330h] BYREF
    int v33; // [esp+6Ch] [ebp-32Ch]
    int v34; // [esp+70h] [ebp-328h] BYREF
    int v35[2]; // [esp+74h] [ebp-324h] BYREF
    void *Block; // [esp+7Ch] [ebp-31Ch]
    void *v37; // [esp+80h] [ebp-318h] BYREF
    void *v38; // [esp+84h] [ebp-314h] BYREF
    uint32_t v39[67]; // [esp+88h] [ebp-310h] BYREF
    char v40[516]; // [esp+194h] [ebp-204h] BYREF
    unknown_libname_73(&v32);
    memset(v40, 0, 513);
    v33 = 0;
    v35[0] = 0;
    v35[1] = 0;
    Block = 0;
    if ( !g_NetworkLobby_Init )
    v34 = 0;
    if ( a2 == 262459 )
    v34 = 41;
    else
    if ( (unsigned __int8)CChatEventSink::Check(&v34, 0) )
    CChatEventSink::EnsureCapacity(0);
    if ( a2 < 0 )
    LABEL_103:
    v35[0] = 0;
    __3_YAXPAX_Z(Block);
    goto LABEL_104;
    if ( v34 )
    Debug::Log();
    memset(v39, 0, sizeof(v39));
    v3 = g_WOL_ChatState;
    v4 = 0;
    if ( (int)g_WOL_ChatState > 0 )
    v5 = 0;
    do
    if ( v5 >= 0 && v4 < v3 )
    qmemcpy(v39, (char *)g_WOL_ConnectionHandler + v5, sizeof(v39));
    if ( v39[10] != -1 )
    Array::InsertElement(v35, v39, v35[0]);
    v3 = g_WOL_ChatState;
    ++v4;
    v5 += 268;
    while ( v4 < v3 );
    g_WOL_ChatState = 0;
    else
    g_WOL_AuthPool = 0;
    v6 = a3;
    if ( a3 )
    do
    if ( *(uint32_t *)v6 )
    if ( a2 == 262459 )
    if ( *((uint32_t *)v6 + 10) != -1 )
    v7 = g_WOL_ChatState;
    v8 = 0;
    v9 = 0;
    if ( (int)g_WOL_ChatState > 0 )
    v10 = (char *)g_WOL_ConnectionHandler;
    while ( 1 )
    if ( v9 >= 0 && v9 < v7 )
    v8 = v10;
    if ( v8 )
    v11 = strcmp(v8 + 52, v6 + 52);
    v6 = a3;
    if ( !v11 )
    break;
    v7 = g_WOL_ChatState;
    ++v9;
    v10 += 268;
    if ( v9 >= (int)g_WOL_ChatState )
    goto LABEL_88;
    Debug::Log();
    *((uint32_t *)v8 + 10) = *((uint32_t *)a3 + 10);
    else
    Array::InsertElement((int *)&g_WOL_ChatState, v6, g_WOL_ChatState);
    v12 = 0;
    v13 = v35[0];
    if ( v35[0] > 0 )
    v14 = (char *)Block;
    while ( 1 )
    if ( v12 >= 0 && v12 < v13 )
    qmemcpy(v39, v14, sizeof(v39));
    if ( !strcmp((const char *)&v39[13], v6 + 52) )
    break;
    v13 = v35[0];
    v6 = a3;
    ++v12;
    v14 += 268;
    if ( v12 >= v35[0] )
    goto LABEL_43;
    v6 = a3;
    v15 = v39[10];
    Debug::Log();
    *((uint32_t *)a3 + 10) = v15;
    LABEL_43:
    String::Assign_Bool(&v32, v6 + 52);
    CChatEventSink::EncodeString(39);
    String::ToLower((const char **)&v32);
    if ( GameMode_Current[0] == 4 && g_GameOptionsFlags == 3 )
    unknown_libname_73(&v37);
    v16 = g_WOL_ChatPool;
    v17 = 0;
    if ( g_WOL_ChatPool <= 0 )
    LABEL_51:
    v18 = 0;
    if ( v16 < 0 )
    v18 = v16;
    if ( v18 >= dword_B777A4 )
    DynamicVector::EnsureCapacity(&g_WOL_ChatPool);
    v16 = g_WOL_ChatPool;
    if ( v16 >= dword_B777A4 )
    DynamicVector::EnsureCapacity(&g_WOL_ChatPool);
    v16 = g_WOL_ChatPool;
    if ( v18 < v16 )
    memcpy(
    (char *)dword_B777A8 + 4 * v18 + 4,
    (char *)dword_B777A8 + 4 * v18,
    4 * (v16 + 0x3FFFFFFF * v18));
    v16 = g_WOL_ChatPool;
    v19 = (char **)((char *)dword_B777A8 + 4 * v18);
    if ( v19 )
    String::AssignFromPtr(v19, (const char **)&v32);
    v16 = g_WOL_ChatPool;
    g_WOL_ChatPool = v16 + 1;
    else
    while ( 1 )
    if ( v17 >= 0 && v17 < v16 )
    String::Reassign((char **)&v37, (const char **)dword_B777A8 + v17);
    if ( String::Compare((const char **)&v37, (const char **)&v32) )
    break;
    v16 = g_WOL_ChatPool;
    if ( ++v17 >= g_WOL_ChatPool )
    goto LABEL_51;
    DeleteAndZero(&v37);
    v20 = *((uint32_t *)g_WOL_ConnectionPool + (dword_B76548(&v32) & ((1 << dword_B7653C) - 1)));
    if ( v20 )
    while ( !String::Compare((const char **)v20, (const char **)&v32) )
    v20 = *(uint32_t *)(v20 + 8);
    if ( !v20 )
    goto LABEL_66;
    else
    LABEL_66:
    unknown_libname_73(&v38);
    v21 = g_WOL_LoginToken;
    v22 = 0;
    if ( g_WOL_LoginToken <= 0 )
    LABEL_72:
    v23 = 0;
    if ( v21 < 0 )
    v23 = v21;
    if ( v23 >= dword_B765FC )
    DynamicVector::EnsureCapacity(&g_WOL_LoginToken);
    v21 = g_WOL_LoginToken;
    if ( v21 >= dword_B765FC )
    DynamicVector::EnsureCapacity(&g_WOL_LoginToken);
    v21 = g_WOL_LoginToken;
    if ( v23 < v21 )
    memcpy(
    (char *)dword_B76600 + 4 * v23 + 4,
    (char *)dword_B76600 + 4 * v23,
    4 * (v21 + 0x3FFFFFFF * v23));
    v21 = g_WOL_LoginToken;
    v24 = (char **)((char *)dword_B76600 + 4 * v23);
    if ( v24 )
    String::AssignFromPtr(v24, (const char **)&v32);
    v21 = g_WOL_LoginToken;
    g_WOL_LoginToken = v21 + 1;
    else
    while ( 1 )
    if ( v22 >= 0 && v22 < v21 )
    String::Reassign((char **)&v38, (const char **)dword_B76600 + v22);
    if ( String::Compare((const char **)&v38, (const char **)&v32) )
    break;
    v21 = g_WOL_LoginToken;
    if ( ++v22 >= g_WOL_LoginToken )
    goto LABEL_72;
    DeleteAndZero(&v38);
    v25 = (uint32_t *)g_WOL_HashTable;
    v26 = *(uint32_t *)(*v25
    + 4 * ((*(int (__thiscall **)(void **))(g_WOL_HashTable + 24))(&v32) & ((1 << v25[3]) - 1)));
    if ( v26 )
    while ( !String::Compare((const char **)v26, (const char **)&v32) )
    v26 = *(uint32_t *)(v26 + 112);
    if ( !v26 )
    goto LABEL_87;
    else
    LABEL_87:
    strcat(v40, String::GetOrEmpty((char **)&v32));
    strcat(v40, asc_8318B8);
    ++v33;
    else
    Array::InsertElement(&g_WOL_AuthPool, v6, g_WOL_AuthPool);
    LABEL_88:
    if ( v33 > 20 )
    (*(void (__stdcall **)(LPVOID, char *, int, char *, int, int, uint32_t, uint32_t))(*(uint32_t *)g_UIPointerTable + 20))(
    g_UIPointerTable,
    g_WOL_ConnectFlag,
    g_WOL_GameConfig,
    v40,
    g_NetworkRematchState & 0xFFFF00,
    -1,
    0,
    0);
    (*(void (__stdcall **)(LPVOID, char *, int, char *, int))(*(uint32_t *)g_UIPointerTable + 56))(
    g_UIPointerTable,
    g_WOL_ConnectFlag,
    g_WOL_GameConfig,
    v40,
    g_NetworkRematchState & 0xFFFF00);
    v33 = 0;
    memset(v40, 0, 0x200u);
    v6 = (const char *)*((uint32_t *)v6 + 12);
    a3 = v6;
    while ( v6 );
    if ( v33 )
    (*(void (__stdcall **)(LPVOID, char *, int, char *, int, int, uint32_t, uint32_t))(*(uint32_t *)g_UIPointerTable + 20))(
    g_UIPointerTable,
    g_WOL_ConnectFlag,
    g_WOL_GameConfig,
    v40,
    g_NetworkRematchState & 0xFFFF00,
    -1,
    0,
    0);
    (*(void (__stdcall **)(LPVOID, char *, int, char *, int))(*(uint32_t *)g_UIPointerTable + 56))(
    g_UIPointerTable,
    g_WOL_ConnectFlag,
    g_WOL_GameConfig,
    v40,
    g_NetworkRematchState & 0xFFFF00);
    memset(v40, 0, 0x200u);
    SetEvent(dword_B73690);
    if ( g_GameOptionsFlags == 3 || g_GameOptionsFlags == 1 || g_GameOptionsFlags == 2 )
    Debug::Log();
    else
    v27 = (HWND)Dialog::FindByHandle((void *)0x116);
    if ( v27 )
    FillBuddyListWOL(v27);
    if ( v34 )
    GameListRenderWOL();
    else
    PopulateWOLLobbyListBox();
    v28 = (HWND)Dialog::FindByHandle((void *)0x113);
    v29 = v28;
    if ( v28 )
    KillTimer(v28, 0x55Du);
    DlgItem = GetDlgItem(v29, 1373);
    EnableWindow(DlgItem, 1);
    goto LABEL_103;
    v35[0] = 0;
    __3_YAXPAX_Z(0);
    LABEL_104:
    DeleteAndZero(&v32);
    return 0;
}

int __stdcall CComObject_CChatEventSink___ATL::_vt13(int a1, int a2, const char *a3, const char *a4)
{
    const char *v4; // edi
    const char *v5; // esi
    bool v6; // bl
    const void *v7; // esi
    wchar_t *v8; // eax
    if ( !g_NetworkLobby_Init && a2 >= 0 )
    v4 = a4;
    String::Assign((char **)&a2, a4);
    v5 = a3;
    if ( a3 )
    if ( (*a3 & 1) != 0 )
    v6 = 1;
    else if ( Dialog::FindByHandle((void *)0xC2) )
    v6 = 1;
    else
    v6 = Dialog::FindByHandle((void *)0xC9) || dword_B779C0 != 0;
    else
    v6 = 0;
    DeleteAndZero((void **)&a2);
    if ( v6 && IsBuddyOrIgnoreWOL(v5) )
    String::Assign((char **)&a2, v4);
    CharStringToWide((wchar_t **)&a4, (const char **)&a2);
    DeleteAndZero((void **)&a2);
    v7 = v5 + 36;
    if ( _strcmpi(g_GameSetupBuffer, v7) )
    v8 = WideString::GetOrEmpty((wchar_t **)&a4);
    Dialog::ShowMessage(16711935, (size_t)g_Str_Trace__hs, v7, v8);
    DeleteAndZero::Alt((void **)&a4);
    return 0;
}

int __stdcall CComObject_CChatEventSink___ATL::_vt42(int a1, int a2, const char *a3, wchar_t *String)
{
    wchar_t *v4; // edi
    const char *v5; // esi
    bool v6; // bl
    bool v7; // zf
    int v8; // eax
    const void *v9; // esi
    if ( !g_NetworkLobby_Init && a2 >= 0 )
    v4 = String;
    WideString::Assign((wchar_t **)&a2, String);
    v5 = a3;
    if ( a3 )
    if ( (*a3 & 1) != 0 )
    v6 = 1;
    else if ( Dialog::FindByHandle((void *)0xC2) )
    v6 = 1;
    else if ( Dialog::FindByHandle((void *)0xC9) )
    v6 = 1;
    else
    v7 = WideString::IsASCII((const wchar_t **)&a2) == 0;
    v8 = dword_B779C0;
    if ( v7 )
    v8 = dword_B779DC;
    v6 = v8 != 0;
    else
    v6 = 0;
    DeleteAndZero::Alt((void **)&a2);
    if ( v6 && IsBuddyOrIgnoreWOL(v5) )
    v9 = v5 + 36;
    if ( _strcmpi(g_GameSetupBuffer, v9) )
    Dialog::ShowMessage(16711935, (size_t)g_Str_Trace__hs, v9, v4);
    return 0;
}

int __stdcall CComObject_CChatEventSink___ATL::_vt14(int a1, int a2, int a3, const char *a4, const char *a5)
{
    const char *v5; // edi
    const char *v6; // esi
    bool v7; // bl
    const void *v8; // esi
    wchar_t *v9; // eax
    if ( !g_NetworkLobby_Init && a2 >= 0 )
    v5 = a5;
    String::Assign((char **)&a2, a5);
    v6 = a4;
    if ( a4 )
    if ( (*a4 & 1) != 0 )
    v7 = 1;
    else if ( Dialog::FindByHandle((void *)0xC2) )
    v7 = 1;
    else
    v7 = Dialog::FindByHandle((void *)0xC9) || dword_B779C0 != 0;
    else
    v7 = 0;
    DeleteAndZero((void **)&a2);
    if ( v7 && IsBuddyOrIgnoreWOL(v6) )
    String::Assign((char **)&a2, v5);
    CharStringToWide((wchar_t **)&a5, (const char **)&a2);
    DeleteAndZero((void **)&a2);
    v8 = v6 + 36;
    if ( _strcmpi(g_GameSetupBuffer, v8) )
    v9 = WideString::GetOrEmpty((wchar_t **)&a5);
    Dialog::ShowMessage(3166463, (size_t)g_Str_Trace__hs, v8, v9);
    DeleteAndZero::Alt((void **)&a5);
    return 0;
}

int __stdcall CComObject_CChatEventSink___ATL::_vt43(int a1, int a2, int a3, const char *a4, wchar_t *String)
{
    wchar_t *v5; // edi
    const char *v6; // esi
    bool v7; // bl
    bool v8; // zf
    int v9; // eax
    const void *v10; // esi
    if ( !g_NetworkLobby_Init && a2 >= 0 )
    v5 = String;
    WideString::Assign((wchar_t **)&a2, String);
    v6 = a4;
    if ( a4 )
    if ( (*a4 & 1) != 0 )
    v7 = 1;
    else if ( Dialog::FindByHandle((void *)0xC2) )
    v7 = 1;
    else if ( Dialog::FindByHandle((void *)0xC9) )
    v7 = 1;
    else
    v8 = WideString::IsASCII((const wchar_t **)&a2) == 0;
    v9 = dword_B779C0;
    if ( v8 )
    v9 = dword_B779DC;
    v7 = v9 != 0;
    else
    v7 = 0;
    DeleteAndZero::Alt((void **)&a2);
    if ( v7 && IsBuddyOrIgnoreWOL(v6) )
    v10 = v6 + 36;
    if ( _strcmpi(g_GameSetupBuffer, v10) )
    Dialog::ShowMessage(3166463, (size_t)g_Str_Trace__hs, v10, v5);
    return 0;
}

int __stdcall CComObject_CChatEventSink___ATL::_vt12(int a1, int a2, int a3, int a4)
{
    return 0;
}

int __stdcall CComObject_CChatEventSink___ATL::_vt25(int a1, int a2, int a3)
{
    return 0;
}

int __stdcall CComObject_CChatEventSink___ATL::_vt29(int a1, int a2, __time32_t Time)
{
    wchar_t *StringCSF; // eax
    const wchar_t *v5; // [esp-4h] [ebp-194h]
    wchar_t Buffer[200]; // [esp+0h] [ebp-190h] BYREF
    if ( !g_NetworkLobby_Init && !a2 )
    v5 = (const wchar_t *)unknown_libname_75(&Time);
    StringCSF = GetStringCSF(aTxtBannedtill, 0, g_Str_File_wonline_cpp, 8809);
    swprintf(Buffer, (const size_t)StringCSF, v5);
    ShowDialogConfirm(Buffer, 0, (int)GameLoop::Thunk, 0);
    return 0;
}

int __stdcall CComObject_CChatEventSink___ATL::_vt31(int a1, int a2, uint8_t *a3, int a4)
{
    wchar_t *StringCSF; // eax
    wchar_t *v6; // eax
    char *v7; // [esp-4h] [ebp-4h]
    char *v8; // [esp-4h] [ebp-4h]
    if ( !g_NetworkLobby_Init )
    if ( a4 )
    v7 = CharToWideString(a3);
    StringCSF = GetStringCSF(aTxtChanBan, 0, g_Str_File_wonline_cpp, 8822);
    Dialog::ShowMessage(-1, (size_t)StringCSF, v7);
    return 0;
    v8 = CharToWideString(a3);
    v6 = GetStringCSF(aTxtChanUnban, 0, g_Str_File_wonline_cpp, 8825);
    Dialog::ShowMessage(-1, (size_t)v6, v8);
    return 0;
}

int __stdcall CComObject_CChatEventSink___ATL::_vt30(int a1, int a2, void *a3, int a4, int a5)
{
    signed int v5; // eax
    signed int v6; // ebp
    int v7; // ebx
    size_t v8; // eax
    int v9; // ebx
    char *v10; // eax
    char *v11; // esi
    void *v12; // ebp
    char v13; // dl
    size_t v14; // ecx
    char v15; // dl
    int v17; // [esp+0h] [ebp-E0h]
    signed int v18; // [esp+4h] [ebp-DCh]
    uint32_t v19[27]; // [esp+8h] [ebp-D8h] BYREF
    uint32_t v20[27]; // [esp+74h] [ebp-6Ch] BYREF
    if ( a2 )
    return 0;
    v5 = g_WOL_State;
    v6 = 0;
    v18 = 0;
    if ( (int)g_WOL_State > 0 )
    v7 = 0;
    v17 = 0;
    while ( 1 )
    if ( v7 < 0 )
    goto LABEL_30;
    if ( v6 >= v5 )
    goto LABEL_30;
    qmemcpy(v20, (char *)g_WOL_ConnectionFlags + v7, sizeof(v20));
    if ( _strcmpi(&v20[9], a3) )
    goto LABEL_30;
    v20[0] = a4 | a5 & v20[0];
    v8 = v6;
    if ( g_WOL_State )
    if ( v6 >= (int)g_WOL_State )
    v8 = g_WOL_State - 1;
    memcpy(
    (char *)g_WOL_ConnectionFlags + 108 * v8,
    (char *)g_WOL_ConnectionFlags + 108 * v8 + 108,
    108 * g_WOL_State - 36 * (3 * v8 + 3));
    --g_WOL_State;
    if ( (int)(3 * g_WOL_State) <= g_WOL_StateFlags )
    v9 = g_WOL_StateFlags / 2;
    if ( g_WOL_StateFlags / 2 < 10 )
    v9 = 10;
    if ( v9 < g_WOL_StateFlags )
    v10 = (char *)__2_YAPAXI_Z(108 * v9);
    v11 = (char *)g_WOL_ConnectionFlags;
    v12 = v10;
    if ( g_WOL_ConnectionFlags )
    v13 = 108 * g_WOL_State;
    v14 = (108 * g_WOL_State) >> 2;
    qmemcpy(v10, g_WOL_ConnectionFlags, 4 * v14);
    qmemcpy(&v10[4 * v14], &v11[4 * v14], v13 & 3);
    v11 = (char *)g_WOL_ConnectionFlags;
    __3_YAXPAX_Z(v11);
    g_WOL_ConnectionFlags = v12;
    v6 = v18;
    g_WOL_StateFlags = v9;
    v7 = v17;
    qmemcpy(v19, v20, sizeof(v19));
    v19[8] = 0;
    if ( dword_B77E48 == 1 )
    break;
    switch ( dword_B77E48 )
    case 2:
    InsertBuddyList((const char *)v19, 1);
    break;
    case 3:
    InsertBuddyList((const char *)v19, 0);
    break;
    case 4:
    FindBuddyList((int)v19, 1);
    break;
    case 5:
    FindBuddyList((int)v19, 0);
    break;
    default:
    v15 = 1;
    goto LABEL_29;
    LABEL_30:
    v5 = g_WOL_State;
    ++v6;
    v7 += 108;
    v18 = v6;
    v17 = v7;
    if ( v6 >= (int)g_WOL_State )
    goto LABEL_31;
    v15 = 0;
    LABEL_29:
    InsertGameSettings(v19, v15);
    goto LABEL_30;
    LABEL_31:
    DisplayRankingsWOL(0);
    return 0;
}

int __stdcall CComObject_CChatEventSink___ATL::_vt24(int a1, int a2, int a3, int a4, int a5)
{
    char *v6; // ebx
    int v7; // ecx
    int v8; // eax
    int v9; // ecx
    wchar_t *v10; // eax
    wchar_t *v11; // eax
    HWND v12; // eax
    wchar_t *v13; // eax
    wchar_t *StringCSF; // eax
    char *v15; // [esp-18h] [ebp-81Ch]
    char *v16; // [esp-14h] [ebp-818h]
    char *v17; // [esp-14h] [ebp-818h]
    wchar_t *v18; // [esp-10h] [ebp-814h]
    char *v19; // [esp-10h] [ebp-814h]
    HWND DlgItem; // [esp-10h] [ebp-814h]
    char *v21; // [esp-10h] [ebp-814h]
    void *v22; // [esp+0h] [ebp-804h] BYREF
    wchar_t Buffer[1024]; // [esp+4h] [ebp-800h] BYREF
    if ( g_NetworkLobby_Init )
    return 0;
    if ( a2 < 0 )
    return 0;
    memset(byte_B785C0, 0, sizeof(byte_B785C0));
    v6 = (char *)(a3 + 52);
    if ( !_strnicmp((const char *)(a3 + 52), g_Str_Lob_41_, strlen(g_Str_Lob_41_)) )
    v7 = atol((const char *)(strlen(g_Str_Lob_41_) + a3 + 52));
    v8 = v7 / 8;
    v9 = v7 % 8;
    if ( v8 )
    sprintf(byte_B785C0, "%s %d", (const char *)(&dword_B73E1C)[v9], v8 + 1);
    else
    sprintf(byte_B785C0, "%s", (const char *)(&dword_B73E1C)[v9]);
    else
    sprintf(byte_B785C0, "%s", v6);
    if ( (BYTE1(*(uint32_t *)a4) & 0x80u) == 0 )
    if ( !NetworkLobby::CheckMinPlayers() )
    v21 = CharToWideString((uint8_t *)(a5 + 36));
    v17 = CharToWideString(v6);
    v15 = CharToWideString((uint8_t *)(a4 + 36));
    StringCSF = GetStringCSF(aTxtUserKicked, 0, g_Str_File_wonline_cpp, 8940);
    Dialog::ShowMessage(-1, (size_t)StringCSF, v15, v17, v21);
    else
    unknown_libname_74(&v22);
    if ( g_WOL_ProcessIdle && sub_5E95E0() )
    v18 = GetStringCSF(g_Str_TXT_CHANNEL_FULL, 0, g_Str_File_wonline_cpp, 8912);
    WideString::Assign_Alt(&v22, v18);
    else
    memset(Buffer, 0, sizeof(Buffer));
    v19 = CharToWideString((uint8_t *)(a5 + 36));
    v16 = CharToWideString(v6);
    v10 = GetStringCSF(aTxtYoureKicked, 0, g_Str_File_wonline_cpp, 8916);
    swprintf(Buffer, (const size_t)v10, (const wchar_t *const)v16, v19);
    WideString::Assign_Alt(&v22, Buffer);
    if ( g_WOL_ProcessIdle )
    v12 = (HWND)Dialog::FindByHandle((void *)0x113);
    if ( v12 )
    DlgItem = GetDlgItem(v12, 1343);
    v13 = WideString::GetOrEmpty((wchar_t **)&v22);
    DrawDialogText(-1, v13, DlgItem);
    DeleteAndZero::Alt(&v22);
    else
    v11 = WideString::GetOrEmpty((wchar_t **)&v22);
    ShowDialogConfirm(v11, 0, (int)GameLoop::Thunk, 0);
    ++dword_B77DD4;
    DeleteAndZero::Alt(&v22);
    LeaveChannelWOL((const char *)a4);
    DisplayRankingsWOL(0);
    GameListRenderWOL();
    return 0;
}

int __stdcall CComObject_CChatEventSink___ATL::_vt33(int a1, int a2, int a3)
{
    int v4; // ebp
    char *v5; // edi
    char **v6; // eax
    char **v7; // esi
    int v8; // eax
    char *v9; // ecx
    char *v10; // eax
    uint32_t *PlayerProfile; // eax
    char v12; // [esp+7h] [ebp-2Dh]
    int v13; // [esp+8h] [ebp-2Ch] BYREF
    void **v14; // [esp+Ch] [ebp-28h] BYREF
    int v15; // [esp+10h] [ebp-24h]
    int v16; // [esp+14h] [ebp-20h] BYREF
    char v17; // [esp+18h] [ebp-1Ch]
    __int64 v18; // [esp+1Ch] [ebp-18h]
    int v19; // [esp+24h] [ebp-10h]
    int v20; // [esp+28h] [ebp-Ch]
    uint32_t v21[2]; // [esp+2Ch] [ebp-8h] BYREF
    v12 = 0;
    if ( a2 >= 0 )
    v4 = a3;
    if ( a3 )
    do
    unknown_libname_73(&a2);
    String::Assign_Bool((void **)&a2, (const char *)(v4 + 36));
    String::ToLower((const char **)&a2);
    HashTable::Lookup(&g_WOL_ConnectionPool, (const char **)&a2, &v13);
    v5 = *(char **)(v4 + 100);
    v6 = (char **)__2_YAPAXI_Z(0xCu);
    v7 = v6;
    if ( v6 )
    unknown_libname_73(v6);
    else
    v7 = 0;
    String::Reassign(v7, (const char **)&a2);
    v7[1] = v5;
    v7[2] = 0;
    v8 = CComObject_CChatEventSink___ATL::Check((int)&g_WOL_ConnectionPool, (int)&a2);
    v9 = (char *)*((uint32_t *)g_WOL_ConnectionPool + v8);
    *((uint32_t *)g_WOL_ConnectionPool + v8) = v7;
    if ( v9 )
    v7[2] = v9;
    v19 = dword_B76538;
    v20 = 0;
    v18 = (unsigned int)++dword_B76534;
    if ( (double)(unsigned int)dword_B76534 / (double)dword_B76538 >= dbl_B76558 )
    HashTable::Grow(&g_WOL_ConnectionPool);
    v10 = String::GetOrEmpty((char **)&g_WebBrowser);
    if ( !_strcmpi((const void *)(a3 + 36), v10) )
    v16 = 0;
    v17 = 0;
    ReadRegistryOptionsWOL(&v16);
    ComPtr::Constructor(&v14);
    v14 = &rc_ptr<PlayerProfile>::`vftable';
    if ( Flag::IsNot2(&v16) )
    PlayerProfile = LoadPlayerProfile(v21, (const char **)&g_WebBrowser);
    ComPtr::Set(&v14, PlayerProfile[1]);
    v21[0] = &rc_ptr<PlayerProfile>::`vftable';
    ComPtr::Release(v21);
    else
    ComPtr::Set(&v14, dword_B75E4C);
    GadgetClass::TrackState(v15, *(uint32_t *)(a3 + 100), 2);
    if ( Flag::IsNot2(&v16) )
    SaveProfileWOL(v15, (const char **)&g_WebBrowser);
    Debug::Log();
    v12 = 1;
    v14 = &rc_ptr<PlayerProfile>::`vftable';
    ComPtr::Release(&v14);
    v4 = *(uint32_t *)(v4 + 32);
    DeleteAndZero((void **)&a2);
    while ( v4 );
    if ( v12 )
    SetEvent(dword_B736BC);
    return 0;
    else
    Debug::Log();
    return 0;
}

int __stdcall CComObject_CChatEventSink___ATL::_vt35(int a1, int a2, char *a3)
{
    int v3; // esi
    int v4; // esi
    int v5; // edi
    int v6; // ecx
    int v7; // edi
    double v8; // st7
    int v9; // esi
    char **v10; // eax
    char **v11; // esi
    int v12; // edx
    char *v13; // eax
    void *v15; // [esp+0h] [ebp-4Ch] BYREF
    __int64 v16; // [esp+4h] [ebp-48h]
    char v17[64]; // [esp+Ch] [ebp-40h] BYREF
    unknown_libname_73(&v15);
    strcpy(v17, g_GameSetupBuffer);
    String::Assign_Bool(&v15, v17);
    String::ToLower((const char **)&v15);
    v3 = *((uint32_t *)g_WOL_ConnectionPool + (dword_B76548(&v15) & ((1 << dword_B7653C) - 1)));
    if ( v3 )
    while ( !String::Compare((const char **)v3, (const char **)&v15) )
    v3 = *(uint32_t *)(v3 + 8);
    if ( !v3 )
    goto LABEL_19;
    if ( dword_B76534 )
    v16 = (unsigned int)(dword_B76534 - 1);
    *(float *)&v16 = (double)v16 / (double)dword_B76538;
    v4 = dword_B76548(&v15) & ((1 << dword_B7653C) - 1);
    v5 = *((uint32_t *)g_WOL_ConnectionPool + v4);
    if ( v5 )
    if ( String::Compare((const char **)v5, (const char **)&v15) )
    v6 = *((uint32_t *)g_WOL_ConnectionPool + v4);
    v7 = *(uint32_t *)(v6 + 8);
    if ( v6 )
    ScalarDtor::DeleteAndZero((void **)v6, 1);
    v8 = *(float *)&v16;
    *((uint32_t *)g_WOL_ConnectionPool + v4) = v7;
    --dword_B76534;
    if ( v8 <= dbl_B76550 )
    LABEL_18:
    HashMap::Shrink(&g_WOL_ConnectionPool);
    else
    v9 = *(uint32_t *)(v5 + 8);
    if ( v9 )
    while ( !String::Compare((const char **)v9, (const char **)&v15) )
    v5 = v9;
    v9 = *(uint32_t *)(v9 + 8);
    if ( !v9 )
    goto LABEL_17;
    *(uint32_t *)(v5 + 8) = *(uint32_t *)(v9 + 8);
    --dword_B76534;
    ScalarDtor::DeleteAndZero((void **)v9, 1);
    LABEL_17:
    if ( *(float *)&v16 <= dbl_B76550 )
    goto LABEL_18;
    LABEL_19:
    v10 = (char **)__2_YAPAXI_Z(0xCu);
    v11 = v10;
    if ( v10 )
    unknown_libname_73(v10);
    else
    v11 = 0;
    String::Reassign(v11, (const char **)&v15);
    v11[2] = 0;
    v11[1] = a3;
    v12 = dword_B76548(&v15) & ((1 << dword_B7653C) - 1);
    v13 = (char *)*((uint32_t *)g_WOL_ConnectionPool + v12);
    *((uint32_t *)g_WOL_ConnectionPool + v12) = v11;
    if ( v13 )
    v11[2] = v13;
    v16 = (unsigned int)++dword_B76534;
    LODWORD(v16) = dword_B76538;
    if ( (double)(unsigned int)dword_B76534 / (double)dword_B76538 >= dbl_B76558 )
    HashTable::Grow(&g_WOL_ConnectionPool);
    DeleteAndZero(&v15);
    return 0;
}

int __stdcall CComObject_CChatEventSink___ATL::_vt34(int a1, int a2, float a3)
{
    float v3; // esi
    float v4; // ebp
    int v5; // esi
    int v6; // esi
    int v7; // edi
    int v8; // ecx
    int v9; // edi
    double v10; // st7
    int v11; // esi
    char *v12; // edi
    char **v13; // eax
    char **v14; // esi
    int v15; // edx
    char *v16; // eax
    if ( a2 < 0 )
    Debug::Log();
    return 0;
    else
    v3 = a3;
    v4 = a3;
    unknown_libname_73(&a2);
    if ( v3 != 0.0 )
    do
    String::Assign_Bool((void **)&a2, (const char *)(LODWORD(v4) + 36));
    v5 = *((uint32_t *)g_WOL_MessageQueue + (dword_B76698(&a2) & ((1 << dword_B7668C) - 1)));
    if ( !v5 )
    goto LABEL_21;
    while ( !String::Compare((const char **)v5, (const char **)&a2) )
    v5 = *(uint32_t *)(v5 + 8);
    if ( !v5 )
    goto LABEL_21;
    if ( !g_WOL_MessageConfig )
    goto LABEL_21;
    a3 = (double)(unsigned int)(g_WOL_MessageConfig - 1) / (double)g_WOL_MsgPool;
    v6 = dword_B76698(&a2) & ((1 << dword_B7668C) - 1);
    v7 = *((uint32_t *)g_WOL_MessageQueue + v6);
    if ( !v7 )
    goto LABEL_21;
    if ( String::Compare((const char **)v7, (const char **)&a2) )
    v8 = *((uint32_t *)g_WOL_MessageQueue + v6);
    v9 = *(uint32_t *)(v8 + 8);
    if ( v8 )
    ScalarDtor::DeleteAndZero((void **)v8, 1);
    v10 = a3;
    *((uint32_t *)g_WOL_MessageQueue + v6) = v9;
    --g_WOL_MessageConfig;
    if ( v10 > dbl_B766A0 )
    goto LABEL_21;
    else
    v11 = *(uint32_t *)(v7 + 8);
    if ( v11 )
    while ( !String::Compare((const char **)v11, (const char **)&a2) )
    v7 = v11;
    v11 = *(uint32_t *)(v11 + 8);
    if ( !v11 )
    goto LABEL_19;
    *(uint32_t *)(v7 + 8) = *(uint32_t *)(v11 + 8);
    --g_WOL_MessageConfig;
    ScalarDtor::DeleteAndZero((void **)v11, 1);
    LABEL_19:
    if ( a3 > dbl_B766A0 )
    goto LABEL_21;
    HashMap::Shrink(&g_WOL_MessageQueue);
    LABEL_21:
    v12 = *(char **)(LODWORD(v4) + 104);
    v13 = (char **)__2_YAPAXI_Z(0xCu);
    v14 = v13;
    if ( v13 )
    unknown_libname_73(v13);
    else
    v14 = 0;
    String::Reassign(v14, (const char **)&a2);
    v14[1] = v12;
    v14[2] = 0;
    v15 = dword_B76698(&a2) & ((1 << dword_B7668C) - 1);
    v16 = (char *)*((uint32_t *)g_WOL_MessageQueue + v15);
    *((uint32_t *)g_WOL_MessageQueue + v15) = v14;
    if ( v16 )
    v14[2] = v16;
    if ( (double)(unsigned int)++g_WOL_MessageConfig / (double)g_WOL_MsgPool >= dbl_B766A8 )
    HashTable::Grow(&g_WOL_MessageQueue);
    v4 = *(float *)(LODWORD(v4) + 32);
    while ( v4 != 0.0 );
    DisplayRankingsWOL(0);
    DeleteAndZero((void **)&a2);
    return 0;
}

int __stdcall CComObject_CChatEventSink___ATL::_vt36(int a1, int a2, int a3)
{
    int v3; // ebp
    int v4; // esi
    int v5; // esi
    int v6; // edi
    int v7; // ecx
    int v8; // edi
    int v9; // esi
    char **v10; // eax
    char **v11; // esi
    int v12; // edx
    char *v13; // eax
    char v15[64]; // [esp+Ch] [ebp-40h] BYREF
    float v16; // [esp+54h] [ebp+8h]
    if ( a2 )
    Debug::Log();
    return 0;
    v3 = a3;
    g_CommandExecState = a3;
    unknown_libname_73(&a3);
    strcpy(v15, g_GameSetupBuffer);
    String::Assign_Bool((void **)&a3, v15);
    String::ToLower((const char **)&a3);
    v4 = *((uint32_t *)g_WOL_MessageQueue + (dword_B76698(&a3) & ((1 << dword_B7668C) - 1)));
    if ( v4 )
    while ( !String::Compare((const char **)v4, (const char **)&a3) )
    v4 = *(uint32_t *)(v4 + 8);
    if ( !v4 )
    goto LABEL_20;
    if ( g_WOL_MessageConfig )
    v16 = (double)(unsigned int)(g_WOL_MessageConfig - 1) / (double)g_WOL_MsgPool;
    v5 = dword_B76698(&a3) & ((1 << dword_B7668C) - 1);
    v6 = *((uint32_t *)g_WOL_MessageQueue + v5);
    if ( v6 )
    if ( String::Compare((const char **)v6, (const char **)&a3) )
    v7 = *((uint32_t *)g_WOL_MessageQueue + v5);
    v8 = *(uint32_t *)(v7 + 8);
    if ( v7 )
    ScalarDtor::DeleteAndZero((void **)v7, 1);
    *((uint32_t *)g_WOL_MessageQueue + v5) = v8;
    --g_WOL_MessageConfig;
    if ( v16 > dbl_B766A0 )
    goto LABEL_20;
    else
    v9 = *(uint32_t *)(v6 + 8);
    if ( v9 )
    while ( !String::Compare((const char **)v9, (const char **)&a3) )
    v6 = v9;
    v9 = *(uint32_t *)(v9 + 8);
    if ( !v9 )
    goto LABEL_18;
    *(uint32_t *)(v6 + 8) = *(uint32_t *)(v9 + 8);
    --g_WOL_MessageConfig;
    ScalarDtor::DeleteAndZero((void **)v9, 1);
    LABEL_18:
    if ( v16 > dbl_B766A0 )
    goto LABEL_20;
    HashMap::Shrink(&g_WOL_MessageQueue);
    LABEL_20:
    v10 = (char **)__2_YAPAXI_Z(0xCu);
    v11 = v10;
    if ( v10 )
    unknown_libname_73(v10);
    else
    v11 = 0;
    String::Reassign(v11, (const char **)&a3);
    v11[1] = (char *)v3;
    v11[2] = 0;
    v12 = dword_B76698(&a3) & ((1 << dword_B7668C) - 1);
    v13 = (char *)*((uint32_t *)g_WOL_MessageQueue + v12);
    *((uint32_t *)g_WOL_MessageQueue + v12) = v11;
    if ( v13 )
    v11[2] = v13;
    if ( (double)(unsigned int)++g_WOL_MessageConfig / (double)g_WOL_MsgPool >= dbl_B766A8 )
    HashTable::Grow(&g_WOL_MessageQueue);
    DeleteAndZero((void **)&a3);
    return 0;
}

int __stdcall CComObject_CChatEventSink___ATL::vt_37_(int a1, int a2, int a3)
{
    int v3; // ebx
    int v4; // eax
    int v5; // esi
    char **v6; // ecx
    HWND v7; // eax
    HWND Current; // eax
    HWND DlgItem; // eax
    HWND v10; // eax
    HWND v11; // esi
    HWND v12; // eax
    char v14[108]; // [esp+8h] [ebp-6Ch] BYREF
    if ( a2 >= 0 )
    v3 = a3;
    if ( a3 )
    while ( 1 )
    String::Assign((char **)&a3, (const char *)(v3 + 36));
    if ( MapSeed::CheckName((const char **)&a3) )
    break;
    LABEL_20:
    DeleteAndZero((void **)&a3);
    v3 = *(uint32_t *)(v3 + 32);
    if ( !v3 )
    goto LABEL_21;
    String::AssignFromPtr((char **)&a2, (const char **)&a3);
    StringVector::Insert(&g_WindowManager, (const char **)&a2, g_WindowManager);
    StringVector::Insert(&g_WOL_RequestManager, (const char **)&a2, g_WOL_RequestManager);
    v4 = g_WOL_BuddyList;
    v5 = g_WOL_BuddyList;
    if ( g_WOL_BuddyList >= dword_B779B4 )
    DynamicVector::EnsureCapacity(&g_WOL_BuddyList);
    v4 = g_WOL_BuddyList;
    if ( v4 >= dword_B779B4 )
    DynamicVector::EnsureCapacity(&g_WOL_BuddyList);
    v4 = g_WOL_BuddyList;
    if ( v5 < v4 )
    memcpy((char *)g_WOL_ChannelMgr + 4 * v5 + 4, (char *)g_WOL_ChannelMgr + 4 * v5, 4 * (v4 + 0x3FFFFFFF * v5));
    v4 = g_WOL_BuddyList;
    v6 = (char **)((char *)g_WOL_ChannelMgr + 4 * v5);
    if ( v6 )
    String::AssignFromPtr(v6, (const char **)&a2);
    v4 = g_WOL_BuddyList;
    g_WOL_BuddyList = v4 + 1;
    if ( String::Length(&g_WOL_AuthObject) )
    if ( (unsigned int)(time(0) - g_WOL_ParseState) < 5 )
    LABEL_19:
    DeleteAndZero((void **)&a2);
    goto LABEL_20;
    DeleteAndZero::Alt2((void **)&g_WOL_AuthObject);
    if ( g_WOL_RequestManager )
    if ( DynamicStringArray::Get(&g_WOL_RequestManager, (char **)&g_WOL_AuthObject, 0) )
    DynamicArray::Remove(&g_WOL_RequestManager, 0);
    g_WOL_ParseState = time(0);
    memset(v14, 0, sizeof(v14));
    strcpy(&v14[36], String::GetOrEmpty((char **)&g_WOL_AuthObject));
    (*(void (__stdcall **)(LPVOID, char *))(*(uint32_t *)ppv + 96))(ppv, v14);
    goto LABEL_19;
    LABEL_21:
    SendGameListWOL();
    v7 = (HWND)Dialog::FindByHandle((void *)0xC4);
    if ( v7 )
    g_WOL_ChannelList &= ~0x200u;
    if ( !g_WOL_ChannelList )
    CloseDialog(v7, 0);
    Current = Dialog::GetCurrent();
    DlgItem = GetDlgItem(Current, 1344);
    if ( DlgItem )
    SetFocus(DlgItem);
    v10 = (HWND)Dialog::FindByHandle((void *)0x116);
    v11 = v10;
    if ( v10 )
    FillBuddyListWOL(v10);
    KillTimer(v11, 0x704u);
    v12 = GetDlgItem(v11, 1796);
    EnableWindow(v12, 1);
    return 0;
}

int __stdcall CComObject_CChatEventSink___ATL::_vt38(int a1, int a2, int a3)
{
    return 0;
}

int __stdcall CComObject_CChatEventSink___ATL::_vt39(int a1, int a2, int a3)
{
    return 0;
}

int __stdcall CComObject_CChatEventSink___ATL::_vt45(int a1, int a2, int a3)
{
    return 0;
}

int __stdcall CComObject_CChatEventSink___ATL::_vt46(int a1, int a2, int a3)
{
    return 0;
}

int __stdcall CComObject_CChatEventSink___ATL::_vt47(int a1, int a2, int a3)
{
    return 0;
}

int __stdcall CComObject_CChatEventSink___ATL::_vt00(char *a1, uint32_t *a2, char **a3)
{
    _UNKNOWN **v3; // esi
    int result; // eax
    uint32_t *v5; // eax
    BOOL v6; // ebp
    int (__stdcall *v7)(char *, uint32_t *, char **, void *); // eax
    void *v8; // eax
    char *v9; // esi
    v3 = &off_7F7698;
    if ( !a3 )
    return -2147467261;
    *a3 = 0;
    if ( !*a2 && !a2[1] && a2[2] == 192 && a2[3] == 1174405120 )
    (*(void (__stdcall **)(char *))(*(uint32_t *)a1 + 4))(a1);
    *a3 = a1;
    return 0;
    while ( 1 )
    v5 = *v3;
    v6 = *v3 == 0;
    if ( !*v3 || *v5 == *a2 && v5[1] == a2[1] && v5[2] == a2[2] && v5[3] == a2[3] )
    break;
    LABEL_17:
    v8 = v3[5];
    v3 += 3;
    if ( !v8 )
    return -2147467262;
    v7 = (int (__stdcall *)(char *, uint32_t *, char **, void *))v3[2];
    if ( v7 != (int (__stdcall *)(char *, uint32_t *, char **, void *))1 )
    result = v7(a1, a2, a3, v3[1]);
    if ( !result || !v6 && result < 0 )
    return result;
    goto LABEL_17;
    v9 = (char *)v3[1] + (uint32_t)a1;
    (*(void (__stdcall **)(char *))(*(uint32_t *)v9 + 4))(v9);
    *a3 = v9;
    return 0;
}

