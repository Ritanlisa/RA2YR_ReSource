#include "wonlinestringdialogcontrol_28_.hpp"

int __stdcall WonlineStringDialogControl_28_::_vt03(int a1)
{
    HWND Current; // eax
    Current = Dialog::GetCurrent();
    SendMessageA(Current, 0x5F4u, 0, 0);
    return 0;
}

int __stdcall WonlineStringDialogControl_28_::_vt04(int a1, LPARAM lParam)
{
    HWND Current; // eax
    Current = Dialog::GetCurrent();
    SendMessageA(Current, 0x5F5u, 0, lParam);
    return 0;
}

int __stdcall WonlineStringDialogControl_28_::_vt05(int a1, wchar_t *Format, unsigned int a3, int a4, int a5)
{
    HWND Current; // eax
    wchar_t *v6; // eax
    wchar_t *StringCSF; // eax
    HWND v8; // eax
    HWND DlgItem; // eax
    wchar_t Buffer[200]; // [esp+8h] [ebp-190h] BYREF
    Buffer[0] = 0;
    Current = Dialog::GetCurrent();
    SendDlgItemMessageA(Current, 1478, 0x402u, 100 * (int)Format / a3, 0);
    if ( a5 <= 0 )
    StringCSF = GetStringCSF(aTxtBytesWoTime, 0, g_Str_File_wonline_cpp, 5172);
    swprintf(Buffer, (const size_t)StringCSF, Format, a3);
    else
    v6 = GetStringCSF(aTxtBytesWTime, 0, g_Str_File_wonline_cpp, 5167);
    swprintf(Buffer, (const size_t)v6, Format, a3, a5);
    if ( time(0) != dword_B77EA8 )
    v8 = Dialog::GetCurrent();
    DlgItem = GetDlgItem(v8, 1480);
    SendMessageA(DlgItem, 0x4B2u, 0, (LPARAM)Buffer);
    dword_B77EA8 = time(0);
    return 0;
}

int __stdcall WonlineStringDialogControl_28_::_vt07(int a1, int a2)
{
    HWND Current; // eax
    HWND DlgItem; // eax
    wchar_t *v5; // [esp-4h] [ebp-194h]
    wchar_t *StringCSF; // [esp-4h] [ebp-194h]
    wchar_t Buffer[200]; // [esp+0h] [ebp-190h] BYREF
    Buffer[0] = 0;
    if ( a2 == 2 )
    StringCSF = GetStringCSF(aTxtConnecting, 0, g_Str_File_wonline_cpp, 5191);
    swprintf(Buffer, (const size_t)StringCSF, *(const wchar_t *const *)Buffer);
    else if ( a2 == 4 )
    v5 = GetStringCSF(aTxtFindingPatc, 0, g_Str_File_wonline_cpp, 5195);
    swprintf(Buffer, (const size_t)v5, *(const wchar_t *const *)Buffer);
    Current = Dialog::GetCurrent();
    DlgItem = GetDlgItem(Current, 1480);
    SendMessageA(DlgItem, 0x4B2u, 0, (LPARAM)Buffer);
    return 0;
}

int __stdcall WonlineStringDialogControl_28_::_vt06(int a1)
{
    return 0;
}

int __stdcall WonlineStringDialogControl_28_::_vt00(char *a1, uint32_t *a2, char **a3)
{
    _UNKNOWN **v3; // esi
    int result; // eax
    uint32_t *v5; // eax
    BOOL v6; // ebp
    int (__stdcall *v7)(char *, uint32_t *, char **, void *); // eax
    void *v8; // eax
    char *v9; // esi
    v3 = &off_7F7638;
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

