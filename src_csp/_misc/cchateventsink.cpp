#include "cchateventsink.hpp"

// 0x007A9970
int __stdcall CChatEventSink::HandleUserSearch(int a1, int a2, const char *a3)
{
    HWND v3; // esi
    int v4; // esi
    void **v5; // esi
    const char *v6; // esi
    const char *v7; // ebx
    int v8; // eax
    signed int v9; // ebp
    signed int v10; // eax
    int v11; // ebx
    char *v12; // eax
    char **v13; // eax
    char **v14; // ebp
    int v15; // edx
    char *v16; // eax
    int v17; // esi
    int *v18; // ebx
    int *v19; // edi
    int v20; // ebp
    int v21; // esi
    int v22; // edx
    int v23; // ecx
    int v24; // eax
    int v25; // ecx
    int v26; // eax
    int v27; // ecx
    int v28; // esi
    int v29; // edi
    uint32_t *v30; // edi
    int v31; // ebp
    double v32; // st7
    int *v33; // ebx
    int v34; // esi
    int *v35; // edi
    int v36; // ebp
    int v37; // esi
    int v38; // eax
    int v39; // edx
    int v40; // eax
    int v41; // esi
    char **v42; // eax
    char **v43; // esi
    int v44; // edx
    char *v45; // eax
    int v46; // esi
    int *v47; // ebx
    int *v48; // edi
    int v49; // ebp
    int v50; // esi
    int v51; // edx
    int v52; // ecx
    int v53; // eax
    HWND v54; // eax
    int v55; // esi
    int v56; // ebp
    void *v57; // eax
    void *v58; // esi
    void *v59; // ebx
    HWND DlgItem; // eax
    HWND v62; // ebp
    int v63; // eax
    int v64; // esi
    wchar_t **v65; // eax
    wchar_t *StringCSF; // eax
    wchar_t *v67; // eax
    int v68; // eax
    int v69; // esi
    wchar_t **v70; // eax
    char *v71; // esi
    wchar_t *v72; // eax
    char *v73; // edi
    wchar_t *v74; // eax
    wchar_t *v75; // eax
    HWND Current; // eax
    HWND v77; // esi
    int Type; // esi
    int v79; // eax
    wchar_t *v80; // [esp-8h] [ebp-1E4h]
    wchar_t *v81; // [esp-8h] [ebp-1E4h]
    wchar_t *v82; // [esp-4h] [ebp-1E0h]
    char *v83; // [esp-4h] [ebp-1E0h]
    char *v84; // [esp-4h] [ebp-1E0h]
    char *v85; // [esp-4h] [ebp-1E0h]
    char *v86; // [esp-4h] [ebp-1E0h]
    int v87; // [esp+10h] [ebp-1CCh] BYREF
    __int64 v88; // [esp+14h] [ebp-1C8h] BYREF
    bool v89; // [esp+1Fh] [ebp-1BDh]
    const char *v90; // [esp+20h] [ebp-1BCh]
    char Str1[64]; // [esp+24h] [ebp-1B8h] BYREF
    wchar_t Buffer[134]; // [esp+64h] [ebp-178h] BYREF
    char v93[108]; // [esp+170h] [ebp-6Ch] BYREF
    v3 = (HWND)Dialog::FindByHandle((void *)0xCF);
    v87 = 0;
    if ( !String::Length(&g_WOL_AuthObject) )
    if ( v3 )
    if ( Dialog::GetCurrent() != v3 )
    return 0;
    unknown_libname_74(&v87);
    DlgItem = GetDlgItem(v3, 1480);
    v62 = DlgItem;
    if ( a3 && DlgItem )
    if ( !*(uint32_t *)a3 && !strncmp(a3 + 52, g_Str_Lob_41_, strlen(g_Str_Lob_41_)) )
    v63 = atol(&a3[strlen(g_Str_Lob_41_) + 52]);
    v64 = v63 / 8;
    WideString::Reassign((void **)&v87, (&dword_B73E1C)[v63 % 8]);
    if ( v64 )
    WideString::Append2((wchar_t **)&v87, (wchar_t *)asc_82083C);
    v65 = FormatWideString((wchar_t **)&v88, (const wchar_t *)(v64 + 1));
    WideString::Append((wchar_t **)&v87, (const wchar_t **)v65);
    DeleteAndZero::Alt((void **)&v88);
    goto LABEL_123;
    StringCSF = (wchar_t *)CharToWideString((uint8_t *)a3 + 52);
    else
    switch ( a2 )
    case 262448:
    StringCSF = GetStringCSF(aTxtFindpageNot_0, 0, g_Str_File_wonline_cpp, 8261);
    break;
    case 262449:
    StringCSF = GetStringCSF((wchar_t *)aTxtFindpageNot, 0, g_Str_File_wonline_cpp, 8263);
    break;
    case 262450:
    StringCSF = GetStringCSF((wchar_t *)aTxtFindpageFin, 0, g_Str_File_wonline_cpp, 8265);
    break;
    default:
    StringCSF = GetStringCSF(aTxtFindpageNot_0, 0, g_Str_File_wonline_cpp, 8267);
    break;
    WideString::Reassign((void **)&v87, StringCSF);
    LABEL_123:
    v67 = WideString::GetOrEmpty_Alt((wchar_t **)&v87);
    SendMessageA(v62, 0x4B2u, 0, (LPARAM)v67);
    DeleteAndZero::Alt((void **)&v87);
    return 0;
    if ( a3 )
    if ( *(uint32_t *)a3 || strncmp(a3 + 52, g_Str_Lob_41_, strlen(g_Str_Lob_41_)) )
    v73 = CharToWideString(byte_B76E28);
    v83 = CharToWideString((uint8_t *)a3 + 52);
    v74 = GetStringCSF(aTxtUserFound, 0, g_Str_File_wonline_cpp, 8288);
    swprintf(Buffer, (const size_t)v74, (const wchar_t *const)v73, v83);
    else
    v68 = atol(&a3[strlen(g_Str_Lob_41_) + 52]);
    v69 = v68 / 8;
    WideString::Assign((wchar_t **)&v87, (&dword_B73E1C)[v68 % 8]);
    if ( v69 )
    WideString::Append2((wchar_t **)&v87, (wchar_t *)asc_82083C);
    v70 = FormatWideString((wchar_t **)&v88, (const wchar_t *)(v69 + 1));
    WideString::Append((wchar_t **)&v87, (const wchar_t **)v70);
    DeleteAndZero::Alt((void **)&v88);
    v71 = CharToWideString(byte_B76E28);
    v82 = WideString::GetOrEmpty((wchar_t **)&v87);
    v72 = GetStringCSF(aTxtUserFound, 0, g_Str_File_wonline_cpp, 8286);
    swprintf(Buffer, (const size_t)v72, (const wchar_t *const)v71, v82);
    DeleteAndZero::Alt((void **)&v87);
    else
    switch ( a2 )
    case 262448:
    v84 = CharToWideString(byte_B76E28);
    v75 = GetStringCSF(aTxtUserNotOnli, 0, g_Str_File_wonline_cpp, 8295);
    break;
    case 262449:
    v85 = CharToWideString(byte_B76E28);
    v80 = GetStringCSF(aTxtUserNotInCh, 0, g_Str_File_wonline_cpp, 8297);
    swprintf(Buffer, (const size_t)v80, (const wchar_t *const)v85);
    goto LABEL_139;
    case 262450:
    v86 = CharToWideString(byte_B76E28);
    v81 = GetStringCSF(aTxtUserFindDis, 0, g_Str_File_wonline_cpp, 8299);
    swprintf(Buffer, (const size_t)v81, (const wchar_t *const)v86);
    goto LABEL_139;
    default:
    v84 = CharToWideString(byte_B76E28);
    v75 = GetStringCSF(aTxtUserNotOnli, 0, g_Str_File_wonline_cpp, 8301);
    break;
    swprintf(Buffer, (const size_t)v75, (const wchar_t *const)v84);
    LABEL_139:
    Current = Dialog::GetCurrent();
    v77 = Current;
    if ( Current )
    if ( GetDlgItem(Current, 1343) )
    Dialog::ShowMessage(-1, (size_t)Buffer);
    return 0;
    if ( GetDlgItem(v77, 1461) )
    Dialog::ShowStatusText(-1, (size_t)Buffer);
    return 0;
    if ( SessionClass::GetGameSpeed(GameMode_Current) )
    Type = BuildingAnim::GetType();
    v79 = Math::RoundToInt(*(double *)&RulesClass_Instance[1].InfantryVirus * 900.0);
    MessageListClass::AddMessage(g_GameNetworkObject, 0, 0, Buffer, Type, 22, v79, 0);
    byte_B76E28[0] = 0;
    return 0;
    if ( dword_B76994 )
    v4 = *((uint32_t *)g_WOL_AccountInfo + (dword_B769A8(&g_WOL_AuthObject) & ((1 << dword_B7699C) - 1)));
    if ( v4 )
    while ( !String::Compare((const char **)v4, &g_WOL_AuthObject) )
    v4 = *(uint32_t *)(v4 + 8);
    if ( !v4 )
    goto LABEL_9;
    v5 = (void **)(v4 + 4);
    if ( v5 )
    v87 = (int)*v5;
    LABEL_9:
    v6 = a3;
    Str1[0] = 0;
    if ( a3 )
    if ( *(uint32_t *)a3 )
    v87 = 5;
    v90 = a3 + 52;
    String::Assign((char **)&v88, a3 + 52);
    v9 = 0;
    memset(Buffer, 0, sizeof(Buffer));
    v10 = g_WOL_ChatState;
    if ( (int)g_WOL_ChatState <= 0 )
    LABEL_21:
    memset(Buffer, 0, sizeof(Buffer));
    else
    v11 = 0;
    while ( 1 )
    if ( v11 >= 0 && v9 < v10 )
    qmemcpy(Buffer, (char *)g_WOL_ConnectionHandler + v11, sizeof(Buffer));
    v12 = String::GetOrEmpty_Alt((char **)&v88);
    if ( !_strcmpi(&Buffer[26], v12) )
    break;
    v10 = g_WOL_ChatState;
    ++v9;
    v11 += 268;
    if ( v9 >= (int)g_WOL_ChatState )
    goto LABEL_21;
    if ( GameMode_Current[0] == 4 )
    v89 = (Buffer[16] & 0x1000) != 0;
    if ( (Buffer[16] & 0x1000) != 0 )
    v87 = 8;
    else
    v89 = (Buffer[16] & 0x800) != 0;
    if ( (Buffer[16] & 0x800) != 0 )
    v87 = 7;
    DeleteAndZero((void **)&v88);
    v6 = a3;
    v7 = v90;
    else
    v7 = a3 + 52;
    v90 = a3 + 52;
    if ( !_strnicmp(a3 + 52, g_Str_Lob_40_, strlen(g_Str_Lob_40_)) )
    v87 = 7;
    else
    v8 = -(_strnicmp(a3 + 52, aLob35, strlen(aLob35)) != 0);
    LOBYTE(v8) = v8 & 0xFC;
    v87 = v8 + 8;
    if ( String::Length(&g_WOL_AuthObject) )
    v13 = (char **)__2_YAPAXI_Z(0x114u);
    v14 = v13;
    if ( v13 )
    unknown_libname_73(v13);
    else
    v14 = 0;
    String::Reassign(v14, &g_WOL_AuthObject);
    qmemcpy(v14 + 1, v6, 0x10Cu);
    v14[68] = 0;
    v15 = dword_B76620(&g_WOL_AuthObject) & ((1 << dword_B76614) - 1);
    v16 = (char *)*((uint32_t *)g_WOL_EventQueue + v15);
    *((uint32_t *)g_WOL_EventQueue + v15) = v14;
    if ( v16 )
    v14[68] = v16;
    v17 = g_WOL_PacketQueue;
    v88 = (unsigned int)++dword_B7660C;
    LODWORD(v88) = g_WOL_PacketQueue;
    if ( (double)(unsigned int)dword_B7660C / (double)g_WOL_PacketQueue >= dbl_B76630 && byte_B7661C != 1 )
    v18 = (int *)g_WOL_EventQueue;
    g_WOL_PacketQueue *= 2;
    ++dword_B76614;
    g_WOL_EventQueue = __2_YAPAXI_Z(8 * v17);
    memset(g_WOL_EventQueue, 0, 4 * g_WOL_PacketQueue);
    if ( v17 > 0 )
    v19 = v18;
    v20 = v17;
    do
    v21 = *v19;
    if ( *v19 )
    do
    v22 = dword_B76620(v21) & ((1 << dword_B76614) - 1);
    v23 = *((uint32_t *)g_WOL_EventQueue + v22);
    *((uint32_t *)g_WOL_EventQueue + v22) = v21;
    v24 = *(uint32_t *)(v21 + 272);
    *(uint32_t *)(v21 + 272) = v23;
    v21 = v24;
    while ( v24 );
    ++v19;
    --v20;
    while ( v20 );
    __3_YAXPAX_Z(v18);
    v7 = v90;
    strcpy(Str1, v7);
    if ( !strncmp(Str1, g_Str_Lob_41_, 7u) )
    v25 = atol(&Str1[strlen(g_Str_Lob_41_)]);
    v26 = v25 / 8;
    v27 = v25 % 8;
    if ( v26 )
    sprintf(Str1, "%s %d", (const char *)(&dword_B73E1C)[v27], v26 + 1);
    else
    sprintf(Str1, "%s", (const char *)(&dword_B73E1C)[v27]);
    else
    if ( String::Length(&g_WOL_AuthObject) )
    if ( dword_B7660C )
    v88 = (unsigned int)(dword_B7660C - 1);
    *(float *)&v88 = (double)v88 / (double)g_WOL_PacketQueue;
    v28 = dword_B76620(&g_WOL_AuthObject) & ((1 << dword_B76614) - 1);
    v29 = *((uint32_t *)g_WOL_EventQueue + v28);
    if ( v29 )
    if ( String::Compare((const char **)v29, &g_WOL_AuthObject) )
    v30 = (uint32_t *)*((uint32_t *)g_WOL_EventQueue + v28);
    v31 = v30[68];
    if ( v30 )
    DeleteAndZero(*((void ***)g_WOL_EventQueue + v28));
    __3_YAXPAX_Z(v30);
    v32 = *(float *)&v88;
    *((uint32_t *)g_WOL_EventQueue + v28) = v31;
    --dword_B7660C;
    if ( v32 <= dbl_B76628 && g_WOL_PacketQueue > (unsigned int)dword_B76638 && byte_B7661C != 1 )
    v33 = (int *)g_WOL_EventQueue;
    v34 = g_WOL_PacketQueue;
    g_WOL_PacketQueue = (unsigned int)g_WOL_PacketQueue >> 1;
    --dword_B76614;
    g_WOL_EventQueue = __2_YAPAXI_Z(4 * g_WOL_PacketQueue);
    memset(g_WOL_EventQueue, 0, 4 * g_WOL_PacketQueue);
    if ( v34 > 0 )
    v35 = v33;
    v36 = v34;
    do
    v37 = *v35;
    if ( *v35 )
    do
    v38 = CChatEventSink::ComputeBucketMask(v37);
    v39 = *((uint32_t *)g_WOL_EventQueue + v38);
    *((uint32_t *)g_WOL_EventQueue + v38) = v37;
    v40 = *(uint32_t *)(v37 + 272);
    *(uint32_t *)(v37 + 272) = v39;
    v37 = v40;
    while ( v40 );
    ++v35;
    --v36;
    while ( v36 );
    __3_YAXPAX_Z(v33);
    else
    v41 = *(uint32_t *)(v29 + 272);
    if ( v41 )
    while ( !String::Compare((const char **)v41, &g_WOL_AuthObject) )
    v29 = v41;
    v41 = *(uint32_t *)(v41 + 272);
    if ( !v41 )
    goto LABEL_66;
    *(uint32_t *)(v29 + 272) = *(uint32_t *)(v41 + 272);
    --dword_B7660C;
    CChatEventSink::DeleteAndZero((void *)v41, 1);
    LABEL_66:
    if ( *(float *)&v88 <= dbl_B76628 )
    HashTable::Shrink(&g_WOL_EventQueue);
    switch ( a2 )
    case 262449:
    v87 = 3;
    break;
    case 262448:
    v87 = 2;
    break;
    case 262450:
    v87 = 1;
    break;
    if ( String::Length(&g_WOL_AuthObject) )
    v42 = (char **)__2_YAPAXI_Z(0xCu);
    v43 = v42;
    if ( v42 )
    unknown_libname_73(v42);
    else
    v43 = 0;
    String::Reassign(v43, &g_WOL_AuthObject);
    v43[2] = 0;
    v43[1] = (char *)v87;
    v44 = dword_B769A8(&g_WOL_AuthObject) & ((1 << dword_B7699C) - 1);
    v45 = (char *)*((uint32_t *)g_WOL_AccountInfo + v44);
    *((uint32_t *)g_WOL_AccountInfo + v44) = v43;
    if ( v45 )
    v43[2] = v45;
    v46 = dword_B76998;
    v88 = (unsigned int)++dword_B76994;
    LODWORD(v88) = dword_B76998;
    if ( (double)(unsigned int)dword_B76994 / (double)dword_B76998 >= dbl_B769B8 && byte_B769A4 != 1 )
    v47 = (int *)g_WOL_AccountInfo;
    dword_B76998 *= 2;
    ++dword_B7699C;
    g_WOL_AccountInfo = __2_YAPAXI_Z(8 * v46);
    memset(g_WOL_AccountInfo, 0, 4 * dword_B76998);
    if ( v46 > 0 )
    v48 = v47;
    v49 = v46;
    do
    v50 = *v48;
    if ( *v48 )
    do
    v51 = dword_B769A8(v50) & ((1 << dword_B7699C) - 1);
    v52 = *((uint32_t *)g_WOL_AccountInfo + v51);
    *((uint32_t *)g_WOL_AccountInfo + v51) = v50;
    v53 = *(uint32_t *)(v50 + 8);
    *(uint32_t *)(v50 + 8) = v52;
    v50 = v53;
    while ( v53 );
    ++v48;
    --v49;
    while ( v49 );
    __3_YAXPAX_Z(v47);
    DeleteAndZero::Alt2((void **)&g_WOL_AuthObject);
    v54 = (HWND)Dialog::FindByHandle((void *)0x116);
    if ( v54 )
    FillBuddyListWOL(v54);
    if ( String::Length(&g_WOL_AuthObject) )
    if ( (unsigned int)(time(0) - g_WOL_ParseState) < 5 )
    return 0;
    DeleteAndZero::Alt2((void **)&g_WOL_AuthObject);
    if ( !g_WOL_RequestManager )
    return 0;
    if ( g_WOL_RequestManager > 0 )
    String::Reassign((char **)&g_WOL_AuthObject, (const char **)g_WOL_SessionID);
    v55 = 0;
    if ( g_WOL_RequestManager )
    if ( g_WOL_RequestManager <= 0 )
    v55 = g_WOL_RequestManager - 1;
    DeleteAndZero((void **)g_WOL_SessionID + v55);
    memcpy(
    (char *)g_WOL_SessionID + 4 * v55,
    (char *)g_WOL_SessionID + 4 * v55 + 4,
    4 * (g_WOL_RequestManager + 0x3FFFFFFF * (v55 + 1)));
    --g_WOL_RequestManager;
    if ( 3 * g_WOL_RequestManager <= dword_B76984 )
    v56 = dword_B76984 / 2;
    if ( dword_B76984 / 2 < 10 )
    v56 = 10;
    if ( v56 < dword_B76984 )
    v57 = __2_YAPAXI_Z(4 * v56);
    v58 = g_WOL_SessionID;
    v59 = v57;
    if ( g_WOL_SessionID )
    qmemcpy(v57, g_WOL_SessionID, 4 * g_WOL_RequestManager);
    v58 = g_WOL_SessionID;
    __3_YAXPAX_Z(v58);
    g_WOL_SessionID = v59;
    dword_B76984 = v56;
    g_WOL_ParseState = time(0);
    memset(v93, 0, sizeof(v93));
    strcpy(&v93[36], String::GetOrEmpty((char **)&g_WOL_AuthObject));
    (*(void (__stdcall **)(LPVOID, char *))(*(uint32_t *)ppv + 96))(ppv, v93);
    return 0;
}

// 0x007AED40
char  CChatEventSink::ProcessChatEvent(int *this)
{
    int v2; // eax
    int v4; // ebp
    void *v5; // edx
    const void *v6; // esi
    int v7; // [esp+4h] [ebp-4h]
    v2 = *this;
    if ( *this < *(this + 1) )
    return 0;
    v4 = 2 * v2;
    if ( 2 * v2 < 10 )
    v4 = 10;
    v5 = __2_YAPAXI_Z(248 * v4);
    memset(v5, 0, 4 * ((unsigned int)(248 * v4) >> 2));
    v7 = (int)v5;
    v6 = (const void *)*(this + 2);
    if ( v6 )
    qmemcpy(v5, v6, 248 * *this);
    __3_YAXPAX_Z((void *)*(this + 2));
    *(this + 1) = v4;
    *(this + 2) = v7;
    return 1;
}

