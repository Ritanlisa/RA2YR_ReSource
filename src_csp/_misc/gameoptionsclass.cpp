#include "gameoptionsclass.hpp"

char * GameOptionsClass::UnlockMovieIfNeeded_MoviesList(uint32_t *this, void *a2)
{
    int v2; // edi
    char **v4; // esi
    char *v5; // eax
    char *result; // eax
    int v7; // edi
    char **v8; // esi
    v2 = 0;
    v4 = off_832CA0;
    if ( off_832CA0[0] )
    while ( _strcmpi(a2, *v4) )
    v5 = v4[3];
    v4 += 3;
    ++v2;
    if ( !v5 )
    goto LABEL_4;
    else
    LABEL_4:
    v2 = -1;
    if ( v2 > *(this + 19) )
    *(this + 19) = v2;
    result = off_832C30[0];
    v7 = 0;
    v8 = off_832C30;
    if ( off_832C30[0] )
    while ( 1 )
    result = (char *)_strcmpi(a2, *v8);
    if ( !result )
    break;
    result = v8[3];
    v8 += 3;
    ++v7;
    if ( !result )
    goto LABEL_10;
    else
    LABEL_10:
    v7 = -1;
    if ( v7 > *(this + 20) )
    *(this + 20) = v7;
    return result;
}

// 0x005FC000
char * GameOptionsClass::PopulateMovieList(void *this, HWND hWnd)
{
    void *v2; // ebx
    wchar_t *StringCSF; // eax
    LRESULT v4; // eax
    int v5; // eax
    int v6; // ebp
    char **v7; // ebx
    wchar_t *v8; // ecx
    wchar_t *v9; // eax
    LRESULT v10; // eax
    char *v11; // eax
    char *result; // eax
    int v13; // ebp
    char **i; // ebx
    wchar_t *v15; // ecx
    wchar_t *v16; // eax
    LRESULT v17; // eax
    v2 = this;
    if ( off_832C20[0] )
    if ( off_832C24 )
    StringCSF = GetStringCSF(off_832C24, 0, g_Str_File_Options_CPP, 1265);
    v4 = SendMessageA(hWnd, 0x4CDu, 0, (LPARAM)StringCSF);
    if ( v4 != -1 )
    SendMessageA(hWnd, 0x19Au, v4, (LPARAM)off_832C20);
    v5 = *((uint32_t *)v2 + 19);
    if ( v5 >= 0 )
    v6 = v5 + 1;
    v7 = off_832CA0;
    if ( off_832CA0[0] )
    do
    if ( v6 <= 0 )
    break;
    if ( *v7 )
    v8 = (wchar_t *)v7[1];
    if ( v8 )
    v9 = GetStringCSF(v8, 0, g_Str_File_Options_CPP, 1265);
    v10 = SendMessageA(hWnd, 0x4CDu, 0, (LPARAM)v9);
    if ( v10 != -1 )
    SendMessageA(hWnd, 0x19Au, v10, (LPARAM)v7);
    v11 = v7[3];
    v7 += 3;
    --v6;
    while ( v11 );
    v2 = this;
    result = (char *)*((uint32_t *)v2 + 20);
    if ( (int)result >= 0 )
    v13 = (int)(result + 1);
    result = off_832C30[0];
    for ( i = off_832C30; result; --v13 )
    if ( v13 <= 0 )
    break;
    if ( *i )
    v15 = (wchar_t *)i[1];
    if ( v15 )
    v16 = GetStringCSF(v15, 0, g_Str_File_Options_CPP, 1265);
    v17 = SendMessageA(hWnd, 0x4CDu, 0, (LPARAM)v16);
    if ( v17 != -1 )
    SendMessageA(hWnd, 0x19Au, v17, (LPARAM)i);
    result = i[3];
    i += 3;
    return result;
}

