#include "tabclass.hpp"

void  TabClass::DrawPower(TabClass *this)
{
    int v1; // ebp
    int v2; // edi
    int BuildingAnimByName; // eax
    int v4; // eax
    LPARAM v5; // esi
    HWND DlgItem; // edi
    int ResourceIDHardcodedCSF; // eax
    HWND v8; // eax
    int v9; // edx
    HWND Default; // eax
    HWND v11; // eax
    unsigned __int8 IsAlliedWith; // al
    HWND v13; // eax
    HWND v14; // edi
    const wchar_t *v15; // eax
    uint32_t *v16; // ebx
    int v17; // ecx
    int v18; // edx
    HWND v19; // edi
    HWND v20; // eax
    HWND v21; // eax
    HWND hWnd; // [esp+10h] [ebp-D8h] BYREF
    __int16 v23; // [esp+14h] [ebp-D4h]
    unsigned __int8 v24; // [esp+16h] [ebp-D2h]
    int nIDDlgItem; // [esp+1Ch] [ebp-CCh]
    wchar_t lParam[100]; // [esp+20h] [ebp-C8h] BYREF
    HWND hDlg; // [esp+ECh] [ebp+4h]
    void *v28; // [esp+F0h] [ebp+8h]
    void*375 *other; // [esp+F4h] [ebp+Ch]
    v1 = *(&dword_83921C + (uint32_t)v28);
    v2 = *(&dword_8391FC + (uint32_t)v28);
    nIDDlgItem = v1;
    lParam[0] = 0;
    if ( other && *(uint8_t *)(*((uint32_t *)other + 13) + 421) )
    wcscpy(lParam, (const wchar_t *)other + 45077);
    if ( other == (void*375 *)HouseClass_Observer )
    BuildingAnimByName = FindBuildingAnimByName(g_INI_Key_LightGrey, 1);
    else if ( *((uint8_t *)other + 501) )
    BuildingAnimByName = FindBuildingAnimByName(g_INI_Key_Grey, 1);
    else
    BuildingAnimByName = *((uint32_t *)BuildingTypeClass_AnimTable + *((uint32_t *)other + 22549));
    v4 = Color::ConvertToRGB((unsigned __int8 *)(BuildingAnimByName + 776), (int)&hWnd);
    v23 = *(_WORD *)v4;
    v24 = *(uint8_t *)(v4 + 2);
    v5 = (unsigned __int8)v23 | ((HIBYTE(v23) | (v24 << 8)) << 8);
    DlgItem = GetDlgItem(hDlg, v2);
    SendMessageA(DlgItem, 0x498u, 0, v5);
    SendMessageA(DlgItem, 0x4B2u, 0, (LPARAM)lParam);
    ResourceIDHardcodedCSF = GetResourceIDHardcodedCSF(v28);
    v8 = GetDlgItem(hDlg, ResourceIDHardcodedCSF);
    v9 = *((uint32_t *)other + 13);
    hWnd = v8;
    Default = (HWND)BuildingType::FindDefault(*(void **)(v9 + 180));
    if ( other == (void*375 *)HouseClass_Observer )
    Default = (HWND)BuildingType::FindDefault((void *)0xFFFFFFFD);
    CacheDialogInvalidate(hWnd, Default);
    if ( *(&dword_83923C + (uint32_t)v28) != -1 )
    v11 = GetDlgItem(hDlg, *(&dword_83923C + (uint32_t)v28));
    hWnd = v11;
    if ( MuteSWLaunches )
    EnableWindow(v11, 0);
    v11 = hWnd;
    if ( *((uint8_t *)other + 501) )
    ShowWindow(v11, 0);
    else
    LOBYTE(v23) = House::IsAlliedWith(HouseClass_Player, other);
    SendMessageA(hWnd, 0xF1u, (unsigned __int8)v23, 0);
    IsAlliedWith = House::IsAlliedWith(other, HouseClass_Player);
    globalHelper_003DD0(hWnd, IsAlliedWith);
    if ( *((uint8_t *)other + 584) )
    v13 = GetDlgItem(hDlg, *(&dword_83925C + (uint32_t)v28));
    ShowWindow(v13, 0);
    else if ( MuteSWLaunches )
    v14 = GetDlgItem(hDlg, *(&dword_83925C + (uint32_t)v28));
    SendMessageA(v14, 0xF1u, 1u, 0);
    EnableWindow(v14, 0);
    v15 = 0;
    v16 = (uint32_t *)((char *)other + 21476);
    v17 = 20;
    do
    v18 = *v16 + v16[21];
    ++v16;
    v15 = (const wchar_t *)((char *)v15 + v18);
    --v17;
    while ( v17 );
    swprintf(lParam, (const size_t)g_Str_Fmt_PctD, v15);
    v19 = GetDlgItem(hDlg, nIDDlgItem);
    SendMessageA(v19, 0x498u, 0, v5);
    SendMessageA(v19, 0x4B2u, 0, (LPARAM)lParam);
    else
    v20 = GetDlgItem(hDlg, v2);
    SendMessageA(v20, 0x4B2u, 0, (LPARAM)lParam);
    v21 = GetDlgItem(hDlg, v1);
    SendMessageA(v21, 0x4B2u, 0, (LPARAM)lParam);
}

