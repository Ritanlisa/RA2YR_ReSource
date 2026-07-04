#include "wolgamelist.hpp"

// 0x0077A7C0
char  WOLGameList::UpdatePlayerStats(int this, uint32_t *a2)
{
    char result; // al
    int v3; // edx
    int v4; // edx
    int v5; // edx
    int v6; // edx
    int v7; // esi
    result = 0;
    v3 = a2[7];
    if ( v3 != *(uint32_t *)(this + 36) )
    *(uint32_t *)(this + 36) = v3;
    *(uint8_t *)(this + 8) = 1;
    result = 1;
    v4 = a2[4];
    if ( v4 != *(uint32_t *)(this + 40) )
    *(uint32_t *)(this + 40) = v4;
    *(uint8_t *)(this + 8) = 1;
    result = 1;
    v5 = a2[2];
    if ( v5 != *(uint32_t *)(this + 44) )
    *(uint32_t *)(this + 44) = v5;
    *(uint8_t *)(this + 8) = 1;
    result = 1;
    v6 = a2[3];
    if ( v6 != *(uint32_t *)(this + 48) )
    *(uint32_t *)(this + 48) = v6;
    *(uint8_t *)(this + 8) = 1;
    result = 1;
    v7 = a2[8];
    if ( v7 == *(uint32_t *)(this + 52) )
    if ( result )
    return WOLPersona::FormatDateTime(this);
    else
    *(uint32_t *)(this + 52) = v7;
    *(uint8_t *)(this + 8) = 1;
    return WOLPersona::FormatDateTime(this);
    return result;
}

// 0x007A3100
int __stdcall WOLGameList::PopulateLobbyLists(int a1, int a2, int ***a3, int a4, int a5, int a6)
{
    int ***v6; // ebx
    HWND v8; // eax
    HWND DlgItem; // eax
    void (__stdcall *v10)(HWND, UINT, WPARAM, LPARAM); // edi
    HWND v11; // ebp
    int **v12; // eax
    unsigned int v13; // ecx
    unsigned int v14; // eax
    int v15; // esi
    void **v16; // edi
    unsigned int v17; // eax
    wchar_t *StringCSF; // eax
    unsigned int v19; // ecx
    unsigned int v20; // eax
    int v21; // esi
    void **v22; // edi
    unsigned int v23; // eax
    unsigned int v24; // ecx
    unsigned int v25; // eax
    int v26; // esi
    void **v27; // edi
    unsigned int v28; // eax
    int v29; // esi
    char **v30; // eax
    char **v31; // ebp
    int v32; // edx
    char *v33; // eax
    void **v34; // ecx
    char **v35; // eax
    char **v36; // ebp
    int v37; // edx
    char *v38; // eax
    char **v39; // eax
    char **v40; // ebp
    int v41; // edx
    char *v42; // eax
    int v43; // ebp
    int v44; // ebx
    signed int v45; // eax
    char v46; // dl
    int ***v47; // esi
    HWND v48; // eax
    HWND v49; // eax
    void *v50; // [esp+10h] [ebp-2B1Ch] BYREF
    unsigned int v51; // [esp+14h] [ebp-2B18h]
    int ***v52; // [esp+18h] [ebp-2B14h]
    void **v53; // [esp+1Ch] [ebp-2B10h] BYREF
    int v54; // [esp+20h] [ebp-2B0Ch]
    HWND v55; // [esp+24h] [ebp-2B08h]
    void *v56; // [esp+28h] [ebp-2B04h] BYREF
    signed int v57; // [esp+2Ch] [ebp-2B00h]
    LPARAM lParam; // [esp+30h] [ebp-2AFCh] BYREF
    void *v59; // [esp+34h] [ebp-2AF8h] BYREF
    void *v60; // [esp+38h] [ebp-2AF4h] BYREF
    int **v61; // [esp+48h] [ebp-2AE4h]
    __int64 v62; // [esp+4Ch] [ebp-2AE0h]
    __int64 v63; // [esp+54h] [ebp-2AD8h]
    __int64 v64; // [esp+5Ch] [ebp-2AD0h]
    int v65; // [esp+64h] [ebp-2AC8h]
    int v66; // [esp+68h] [ebp-2AC4h]
    int v67; // [esp+6Ch] [ebp-2AC0h]
    int v68; // [esp+70h] [ebp-2ABCh]
    int v69; // [esp+74h] [ebp-2AB8h]
    int v70; // [esp+78h] [ebp-2AB4h]
    char v71[108]; // [esp+7Ch] [ebp-2AB0h] BYREF
    wchar_t Buffer[128]; // [esp+E8h] [ebp-2A44h] BYREF
    char v73[108]; // [esp+1E8h] [ebp-2944h] BYREF
    char v74[108]; // [esp+254h] [ebp-28D8h] BYREF
    char v75[108]; // [esp+2C0h] [ebp-286Ch] BYREF
    wchar_t String[5120]; // [esp+32Ch] [ebp-2800h] BYREF
    if ( a2 )
    v6 = 0;
    a3 = 0;
    else
    v6 = a3;
    if ( g_NetworkLobby_Init )
    byte_884CF4 = 1;
    return 0;
    v8 = (HWND)Dialog::FindByHandle((void *)0xC1);
    DlgItem = GetDlgItem(v8, 1407);
    v10 = (void (__stdcall *)(HWND, UINT, WPARAM, LPARAM))SendMessageA;
    v11 = DlgItem;
    v55 = DlgItem;
    if ( DlgItem )
    if ( a6 != -1 || a2 )
    SendMessageA(DlgItem, 0x184u, 0, 0);
    if ( !v6 )
    StringCSF = GetStringCSF(aTxtNotInLadder, 0, g_Str_File_wonline_cpp, 4785);
    SendMessageA(v11, 0x4CCu, 0xFFFFFFFF, (LPARAM)StringCSF);
    InvalidateRect(v11, 0, 0);
    return 0;
    goto LABEL_11;
    v11 = 0;
    v55 = 0;
    if ( v6 )
    LABEL_11:
    v12 = v6[7];
    v52 = v6;
    v61 = v12;
    Gadget::InitProperties(&lParam);
    if ( *v6 == &off_802100 )
    if ( (unsigned int)dword_B768C4 > 0x7D0 )
    v13 = dword_B768C8;
    v14 = 0;
    v51 = 0;
    if ( dword_B768C8 )
    do
    v15 = *((uint32_t *)g_WOL_ListParser + v14);
    while ( v15 )
    v16 = (void **)v15;
    v15 = *(uint32_t *)(v15 + 112);
    DeleteAndZero(v16);
    __3_YAXPAX_Z(v16);
    v17 = v51;
    *((uint32_t *)g_WOL_ListParser + v51) = 0;
    v13 = dword_B768C8;
    v14 = v17 + 1;
    v51 = v14;
    while ( v14 < dword_B768C8 );
    v10 = (void (__stdcall *)(HWND, UINT, WPARAM, LPARAM))SendMessageA;
    dword_B768C4 = 0;
    if ( v13 > dword_B768F0 )
    do
    if ( byte_B768D4 )
    break;
    HashMap::Shrink2(&g_WOL_ListParser);
    while ( dword_B768C8 > (unsigned int)dword_B768F0 );
    else if ( *v6 == (int **)8960 )
    if ( (unsigned int)dword_B73AFC > 0x7D0 )
    v19 = dword_B73B00;
    v20 = 0;
    v51 = 0;
    if ( dword_B73B00 )
    do
    v21 = *((uint32_t *)dword_B73AF8 + v20);
    while ( v21 )
    v22 = (void **)v21;
    v21 = *(uint32_t *)(v21 + 112);
    DeleteAndZero(v22);
    __3_YAXPAX_Z(v22);
    v23 = v51;
    *((uint32_t *)dword_B73AF8 + v51) = 0;
    v19 = dword_B73B00;
    v20 = v23 + 1;
    v51 = v20;
    while ( v20 < dword_B73B00 );
    v10 = (void (__stdcall *)(HWND, UINT, WPARAM, LPARAM))SendMessageA;
    dword_B73AFC = 0;
    if ( v19 > dword_B73B28 )
    do
    if ( byte_B73B0C )
    break;
    HashMap::Shrink2(&dword_B73AF8);
    while ( dword_B73B00 > (unsigned int)dword_B73B28 );
    else if ( (unsigned int)dword_B77D84 > 0x7D0 )
    v24 = dword_B77D88;
    v25 = 0;
    v51 = 0;
    if ( dword_B77D88 )
    do
    v26 = *((uint32_t *)dword_B77D80 + v25);
    while ( v26 )
    v27 = (void **)v26;
    v26 = *(uint32_t *)(v26 + 112);
    DeleteAndZero(v27);
    __3_YAXPAX_Z(v27);
    v28 = v51;
    *((uint32_t *)dword_B77D80 + v51) = 0;
    v24 = dword_B77D88;
    v25 = v28 + 1;
    v51 = v25;
    while ( v25 < dword_B77D88 );
    v10 = (void (__stdcall *)(HWND, UINT, WPARAM, LPARAM))SendMessageA;
    dword_B77D84 = 0;
    if ( v24 > dword_B77DB0 )
    do
    if ( byte_B77D94 )
    break;
    HashMap::Shrink2(&dword_B77D80);
    while ( dword_B77D88 > (unsigned int)dword_B77DB0 );
    if ( a3 && v11 )
    dword_B76E38 = (int)a3[7];
    String::ToLowerCopy((const char **)&g_WebBrowser, (char **)&v56);
    v51 = 0;
    if ( a3 )
    while ( v6[4] == (int **)-1 )
    v6 = (int ***)v6[15];
    v52 = v6;
    LABEL_121:
    if ( !v6 )
    goto LABEL_122;
    if ( v11 )
    lParam = 4;
    swprintf(Buffer, (const size_t)g_Str_Fmt_PctD, (const wchar_t *const)v6[7]);
    v10(v11, 0x4CCu, 0xFFFFFFFF, (LPARAM)Buffer);
    v29 = (unsigned __int16)v51 << 16;
    v10(v11, 0x4A8u, v29 | (unsigned __int16)dword_B779D8, (LPARAM)&lParam);
    lParam = 1;
    BulkCharToWide(String, (unsigned __int8 *)v6 + 64, -1);
    WideString::Reassign(&v59, String);
    v10(v11, 0x4A8u, v29 | (unsigned __int16)dword_B73E08, (LPARAM)&lParam);
    swprintf(Buffer, (const size_t)g_Str_Fmt_PctD, (const wchar_t *const)v6[4]);
    WideString::Reassign(&v59, Buffer);
    v10(v11, 0x4A8u, v29 | (unsigned __int16)dword_B76904, (LPARAM)&lParam);
    swprintf(Buffer, (const size_t)g_Str_Fmt_PctD, (const wchar_t *const)v6[2]);
    WideString::Reassign(&v59, Buffer);
    v10(v11, 0x4A8u, v29 | (unsigned __int16)dword_B77CE4, (LPARAM)&lParam);
    swprintf(Buffer, (const size_t)g_Str_Fmt_PctD, (const wchar_t *const)v6[3]);
    WideString::Reassign(&v59, Buffer);
    v10(v11, 0x4A8u, v29 | (unsigned __int16)dword_B73AB4, (LPARAM)&lParam);
    swprintf(Buffer, (const size_t)g_Str_Fmt_PctD, (const wchar_t *const)v6[8]);
    WideString::Reassign(&v59, Buffer);
    v10(v11, 0x4A8u, v29 | (unsigned __int16)dword_B76AEC, (LPARAM)&lParam);
    ++v51;
    String::Assign((char **)&v50, (const char *)v6 + 64);
    String::ToLower((const char **)&v50);
    if ( *a3 == &off_802100 )
    HashTable::Insert(&g_WOL_ListParser, (const char **)&v50, v75);
    v30 = (char **)__2_YAPAXI_Z(0x74u);
    v31 = v30;
    if ( v30 )
    unknown_libname_73(v30);
    else
    v31 = 0;
    String::Reassign(v31, (const char **)&v50);
    qmemcpy(v31 + 1, v6, 0x6Cu);
    v31[28] = 0;
    v32 = dword_B768D8(&v50) & ((1 << dword_B768CC) - 1);
    v33 = (char *)*((uint32_t *)g_WOL_ListParser + v32);
    *((uint32_t *)g_WOL_ListParser + v32) = v31;
    if ( v33 )
    v31[28] = v33;
    v69 = dword_B768C8;
    v64 = (unsigned int)++dword_B768C4;
    v70 = 0;
    if ( (double)(unsigned int)dword_B768C4 / (double)dword_B768C8 < dbl_B768E8 )
    goto LABEL_82;
    v34 = &g_WOL_ListParser;
    else if ( *a3 == (int **)8960 )
    HashTable::Insert(&dword_B73AF8, (const char **)&v50, v74);
    v35 = (char **)__2_YAPAXI_Z(0x74u);
    v36 = v35;
    if ( v35 )
    unknown_libname_73(v35);
    else
    v36 = 0;
    String::Reassign(v36, (const char **)&v50);
    qmemcpy(v36 + 1, v6, 0x6Cu);
    v36[28] = 0;
    v37 = dword_B73B10(&v50) & ((1 << dword_B73B04) - 1);
    v38 = (char *)*((uint32_t *)dword_B73AF8 + v37);
    *((uint32_t *)dword_B73AF8 + v37) = v36;
    if ( v38 )
    v36[28] = v38;
    v67 = dword_B73B00;
    v62 = (unsigned int)++dword_B73AFC;
    v68 = 0;
    if ( (double)(unsigned int)dword_B73AFC / (double)dword_B73B00 < dbl_B73B20 )
    goto LABEL_82;
    v34 = &dword_B73AF8;
    else
    HashTable::Insert(&dword_B77D80, (const char **)&v50, v73);
    v39 = (char **)__2_YAPAXI_Z(0x74u);
    v40 = v39;
    if ( v39 )
    unknown_libname_73(v39);
    else
    v40 = 0;
    String::Reassign(v40, (const char **)&v50);
    qmemcpy(v40 + 1, v6, 0x6Cu);
    v40[28] = 0;
    v41 = dword_B77D98(&v50) & ((1 << dword_B77D8C) - 1);
    v42 = (char *)*((uint32_t *)dword_B77D80 + v41);
    *((uint32_t *)dword_B77D80 + v41) = v40;
    if ( v42 )
    v40[28] = v42;
    v65 = dword_B77D88;
    v63 = (unsigned int)++dword_B77D84;
    v66 = 0;
    if ( (double)(unsigned int)dword_B77D84 / (double)dword_B77D88 < dbl_B77DA8 )
    goto LABEL_82;
    v34 = &dword_B77D80;
    WOLGameList::GrowBuffer(v34);
    LABEL_82:
    if ( g_WOL_ProcessIdle || dword_B77E48 != 2 && dword_B77E48 != 3 )
    goto LABEL_113;
    v43 = 0;
    v57 = g_WOL_State;
    if ( (int)g_WOL_State <= 0 )
    goto LABEL_113;
    v44 = 0;
    while ( 1 )
    if ( v44 >= 0 && v43 < (int)g_WOL_State )
    qmemcpy(v71, (char *)g_WOL_ConnectionFlags + v44, sizeof(v71));
    if ( !_strcmpi(v52 + 16, &v71[36]) )
    break;
    ++v43;
    v44 += 108;
    if ( v43 >= v57 )
    goto LABEL_113;
    if ( v43 >= v57 )
    goto LABEL_113;
    v45 = v43;
    if ( g_WOL_State )
    if ( v43 < 0 )
    v45 = 0;
    if ( v45 >= (int)g_WOL_State )
    v45 = g_WOL_State - 1;
    memcpy(
    (char *)g_WOL_ConnectionFlags + 108 * v45,
    (char *)g_WOL_ConnectionFlags + 108 * v45 + 108,
    108 * g_WOL_State - 36 * (3 * v45 + 3));
    --g_WOL_State;
    if ( (int)(3 * g_WOL_State) <= g_WOL_StateFlags )
    WOLGameList::EnsureCapacity(&g_WOL_State);
    switch ( dword_B77E48 )
    case 1:
    v46 = 0;
    LABEL_112:
    InsertGameSettings(v71, v46);
    break;
    case 2:
    InsertBuddyList(v71, 1);
    break;
    case 3:
    InsertBuddyList(v71, 0);
    break;
    case 4:
    FindBuddyList((int)v71, 1);
    break;
    case 5:
    FindBuddyList((int)v71, 0);
    break;
    default:
    v46 = 1;
    goto LABEL_112;
    LABEL_113:
    if ( String::Compare((const char **)&v56, (const char **)&v50) )
    LoadPlayerProfile(&v53, (const char **)&g_WebBrowser);
    if ( v54 )
    v47 = v52;
    if ( (unsigned __int8)WOLGameList::Check(v52) )
    WOLGameList::UpdatePlayerStats(v47);
    SaveProfileWOL(v54, (const char **)&v50);
    v48 = (HWND)Dialog::FindByHandle((void *)0x10E);
    if ( v48 || (v48 = (HWND)Dialog::FindByHandle((void *)0x114)) != 0 )
    FillPersonaInfoWOL(v54, v48, (char **)&g_WebBrowser, 0);
    v53 = &rc_ptr<PlayerProfile>::`vftable';
    ComPtr::Release(&v53);
    v52 = (int ***)v52[15];
    DeleteAndZero(&v50);
    v6 = v52;
    v11 = v55;
    v10 = (void (__stdcall *)(HWND, UINT, WPARAM, LPARAM))SendMessageA;
    goto LABEL_121;
    LABEL_122:
    if ( v11 )
    v10(v11, 0x186u, a6 - (uint32_t)v61, 0);
    InvalidateRect(v11, 0, 0);
    else
    DisplayRankingsWOL(0);
    SendGameListWOL();
    v49 = (HWND)Dialog::FindByHandle((void *)0x116);
    if ( v49 )
    ShowUserProfileWOL(v49);
    DeleteAndZero(&v56);
    DeleteAndZero::Alt(&v60);
    DeleteAndZero::Alt(&v59);
    return 0;
}

