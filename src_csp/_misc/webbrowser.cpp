#include "webbrowser.hpp"

char  WebBrowser::LoadURLFromRegistry(int this, const char *a2)
{
    LSTATUS v3; // esi
    LSTATUS v4; // esi
    char *v5; // edx
    int v6; // eax
    HKEY phkResult; // [esp+10h] [ebp-558h] BYREF
    DWORD cbData; // [esp+14h] [ebp-554h] BYREF
    DWORD Type; // [esp+18h] [ebp-550h] BYREF
    CHAR ValueName[64]; // [esp+1Ch] [ebp-54Ch] BYREF
    BYTE v12[260]; // [esp+5Ch] [ebp-50Ch] BYREF
    BYTE Data[512]; // [esp+160h] [ebp-408h] BYREF
    wchar_t Destination[260]; // [esp+360h] [ebp-208h] BYREF
    if ( RegOpenKeyExA(HKEY_LOCAL_MACHINE, g_Str_WOL_URL_RegKey, 0, 0x20019u, &phkResult) )
    return 0;
    strcpy(ValueName, a2);
    if ( !*(uint32_t *)(this + 8) )
    strcat(ValueName, asc_84968C);
    cbData = 512;
    v3 = RegQueryValueExA(phkResult, ValueName, 0, &Type, Data, &cbData);
    RegCloseKey(phkResult);
    if ( v3 )
    return 0;
    Debug::Log();
    if ( !*(uint32_t *)(this + 8) )
    return WebBrowser::OpenURL(Data);
    mbstowcs((wchar_t *)(this + 12), (const char *)Data, 0x200u);
    if ( RegOpenKeyExA(HKEY_LOCAL_MACHINE, g_Str_Software_Westwood_Yuri_s_Reven, 0, 0x20019u, &phkResult) )
    return 0;
    cbData = 260;
    v4 = RegQueryValueExA(phkResult, g_INI_Key_HTMLPath, 0, &Type, v12, &cbData);
    RegCloseKey(phkResult);
    if ( v4 )
    return 0;
    v5 = strrchr((const char *)v12, 92);
    if ( !v5 || strlen((const char *)v12) > v5 - (char *)v12 + 1 )
    strcat((char *)v12, asc_815E74);
    mbstowcs(Destination, (const char *)v12, 0x104u);
    wcscat(Destination, aFr);
    if ( (*(int (__stdcall **)(uint32_t, wchar_t *, uint32_t, uint32_t))(**(uint32_t **)(this + 8) + 64))(
    *(uint32_t *)(this + 8),
    Destination,
    0,
    0) < 0 )
    return 0;
    v6 = *(uint32_t *)(this + 8);
    if ( v6 )
    (*(void (__stdcall **)(uint32_t))(*(uint32_t *)v6 + 28))(*(uint32_t *)(this + 8));
    *(uint8_t *)(this + 1036) = 1;
    return 1;
}

int  WebBrowser::_vt00(WebBrowser *this)
{
    int v2; // [esp+10h] [ebp+4h]
    const void *v3; // [esp+14h] [ebp+8h]
    uint32_t *v4; // [esp+18h] [ebp+Ch]
    *v4 = 0;
    if ( memcmp(v3, &IID_IUnknown, 0x10u) && memcmp(v3, &unk_7F7C20, 0x10u) )
    return -2147467262;
    *v4 = v2;
    (*(void (__stdcall **)(int))(*(uint32_t *)v2 + 4))(v2);
    return 0;
}

int  WebBrowser::_vt01(WebBrowser *this)
{
    int v1; // ecx
    int v3; // [esp+4h] [ebp+4h]
    v1 = *(uint32_t *)(v3 + 4) + 1;
    *(uint32_t *)(v3 + 4) = v1;
    return v1;
}

int  WebBrowser::_vt02(WebBrowser *this)
{
    int result; // eax
    uint32_t *v2; // [esp+4h] [ebp+4h]
    result = v2[1] - 1;
    v2[1] = result;
    if ( !result )
    if ( v2 )
    (*(void (__thiscall **)(uint32_t *, int))(*v2 + 68))(v2, 1);
    return 0;
    return result;
}

int  WebBrowser::_vt03(WebBrowser *this)
{
    HWND v1; // eax
    int v3; // [esp+4h] [ebp+4h]
    v1 = *(HWND *)(v3 + 1040);
    if ( v1 )
    *(uint32_t *)GetWindowLongA(v1, 8) = 1;
    return 0;
}

int  WebBrowser::_vt04(WebBrowser *this)
{
    return 0;
}

int  WebBrowser::_vt05(WebBrowser *this)
{
    int v2; // [esp+4h] [ebp+4h]
    int v3; // [esp+Ch] [ebp+Ch]
    if ( v3 )
    (*(void (__stdcall **)(uint32_t, int, uint32_t, wchar_t *))(**(uint32_t **)(v2 + 8) + 64))(
    *(uint32_t *)(v2 + 8),
    v2 + 12,
    0,
    aMain);
    return 0;
}

int  WebBrowser::_vt06(WebBrowser *this)
{
    return 0;
}

int  WebBrowser::_vt07(WebBrowser *this)
{
    return 0;
}

int  WebBrowser::_vt08(WebBrowser *this)
{
    return 0;
}

int  WebBrowser::_vt09(WebBrowser *this)
{
    return 0;
}

int  WebBrowser::_vt10(WebBrowser *this)
{
    return 0;
}

int  WebBrowser::_vt11(WebBrowser *this)
{
    return 0;
}

int  WebBrowser::_vt12(WebBrowser *this)
{
    return -2147467259;
}

int  WebBrowser::_vt13(WebBrowser *this)
{
    return 0;
}

int  WebBrowser::_vt14(WebBrowser *this)
{
    LSTATUS v1; // esi
    char *v2; // edx
    HKEY phkResult; // [esp+4h] [ebp-318h] BYREF
    DWORD cbData; // [esp+8h] [ebp-314h] BYREF
    DWORD Type; // [esp+Ch] [ebp-310h] BYREF
    BYTE Data[260]; // [esp+10h] [ebp-30Ch] BYREF
    wchar_t Dest[260]; // [esp+114h] [ebp-208h] BYREF
    int v9; // [esp+320h] [ebp+4h]
    Debug::Log();
    if ( RegOpenKeyExA(HKEY_LOCAL_MACHINE, g_Str_Software_Westwood_Yuri_s_Reven, 0, 0x20019u, &phkResult) )
    return 0;
    cbData = 260;
    v1 = RegQueryValueExA(phkResult, g_INI_Key_HTMLPath, 0, &Type, Data, &cbData);
    RegCloseKey(phkResult);
    if ( v1 )
    return 0;
    v2 = strrchr((const char *)Data, 92);
    if ( !v2 || strlen((const char *)Data) > v2 - (char *)Data + 1 )
    strcat((char *)Data, asc_815E74);
    mbstowcs((wchar_t *)(v9 + 12), (const char *)Data, 0x104u);
    wcscat((wchar_t *)(v9 + 12), L"BadPage.htm");
    mbstowcs(Dest, (const char *)Data, 0x104u);
    wcscat(Dest, aFr);
    return (*(int (__stdcall **)(uint32_t, wchar_t *, uint32_t, uint32_t))(**(uint32_t **)(v9 + 8) + 64))(
    *(uint32_t *)(v9 + 8),
    Dest,
    0,
    0);
}

int  WebBrowser::_vt15(WebBrowser *this)
{
    Debug::Log();
    return 0;
}

int  WebBrowser::_vt16(WebBrowser *this)
{
    void *v2; // [esp+0h] [ebp-94h] BYREF
    uint32_t v3[2]; // [esp+4h] [ebp-90h] BYREF
    int v4; // [esp+Ch] [ebp-88h] BYREF
    char v5; // [esp+10h] [ebp-84h]
    char Dest[64]; // [esp+14h] [ebp-80h] BYREF
    char v7[64]; // [esp+54h] [ebp-40h] BYREF
    wchar_t *Source; // [esp+9Ch] [ebp+8h]
    wchar_t *v9; // [esp+A0h] [ebp+Ch]
    wcstombs(Dest, Source, 0x40u);
    wcstombs(v7, v9, 0x40u);
    String::Assign((char **)&v2, Dest);
    Debug::Log();
    LoadPlayerProfile(v3, (const char **)&v2);
    v4 = 0;
    v5 = 0;
    ReadRegistryOptionsWOL(&v4);
    if ( Flag::IsNot2(&v4) )
    FindChannelWOL(Dest, (int)v7, 1u, *(uint32_t *)(v3[1] + 16));
    SaveConfigWOL((int)GameMode_Current);
    String::Assign_Alt((void **)&g_WebBrowser, Dest);
    String::Assign_Alt((void **)&g_WebBrowserConfig, v7);
    v3[0] = &rc_ptr<PlayerProfile>::`vftable';
    ComPtr::Release(v3);
    DeleteAndZero(&v2);
    return 0;
}

int  WebBrowser::_vt17(WebBrowser *this)
{
    int v2; // eax
    char v4; // [esp+10h] [ebp+4h]
    *(uint32_t *)this = &WebBrowser::`vftable';
    Debug::Log();
    if ( *((uint32_t *)this + 2) )
    Debug::Log();
    (*(void (__stdcall **)(uint32_t, WebBrowser *))(**((uint32_t **)this + 2) + 24))(*((uint32_t *)this + 2), this);
    (*(void (__stdcall **)(uint32_t))(**((uint32_t **)this + 2) + 16))(*((uint32_t *)this + 2));
    v2 = *((uint32_t *)this + 2);
    if ( v2 )
    (*(void (__stdcall **)(uint32_t))(*(uint32_t *)v2 + 8))(*((uint32_t *)this + 2));
    if ( (v4 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (int)this;
}

