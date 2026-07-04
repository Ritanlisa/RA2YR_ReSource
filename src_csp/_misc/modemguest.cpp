#include "modemguest.hpp"

int  ModemGuest::UpdateGuestPlayerInfo(char *this, wchar_t *Source, unsigned int a3, int a4)
{
    wchar_t *v5; // edi
    int result; // eax
    HWND v7; // edx
    HWND DlgItem; // edi
    int (__usercall *v9)@<eax>(char@<cf>, char@<zf>); // ebx
    wchar_t lParam[80]; // [esp+10h] [ebp-A0h] BYREF
    v5 = (wchar_t *)(this + 34);
    if ( _wcsicmp((const wchar_t *)this + 17, Source)
    || *((uint32_t *)this + 19) != a3
    || (result = a4, *((uint32_t *)this + 20) != a4) )
    wcscpy(v5, Source);
    v7 = *(HWND *)this;
    *((uint32_t *)this + 19) = a3;
    *((uint32_t *)this + 20) = a4;
    DlgItem = GetDlgItem(v7, 1640);
    if ( DlgItem )
    swprintf(lParam, (const size_t)&off_82C5C8, Source, *(uint32_t *)(*((uint32_t *)g_SuperWeaponTypeCount + a4) + 96));
    SendMessageA(DlgItem, 0x4B2u, 0, (LPARAM)lParam);
    if ( a3 >= 8 )
    v9 = Math::InitDegToRad;
    else
    v9 = (int (__usercall *)@<eax>(char@<cf>, char@<zf>))dword_8316A8[a3];
    SendMessageA(DlgItem, 0x498u, 0, (LPARAM)v9);
    result = PlayVocClass(HIDWORD(RulesClass_Instance->SpotlightSpeed), 0x2000, 1.0, 0);
    *(this + 9) = 1;
    return result;
}

