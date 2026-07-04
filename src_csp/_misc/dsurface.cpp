#include "dsurface.hpp"

// 0x00621B80
int __fastcall DSurface::FillRectWithColor(int *a1, int a2, __int16 a3, unsigned __int8 a4)
{
    int *v4; // esi
    int v5; // ebp
    int result; // eax
    int v7; // eax
    int v8; // ebx
    int v9; // eax
    int v10; // edi
    int v11; // edx
    int v12; // edi
    _WORD *v13; // eax
    int v14; // ecx
    __int16 v15; // bx
    __int16 v16; // si
    __int16 v17; // bp
    unsigned int v18; // ecx
    int v19; // edx
    _WORD *v20; // [esp+Ch] [ebp-28h]
    int v21; // [esp+10h] [ebp-24h]
    int v23; // [esp+18h] [ebp-1Ch]
    int v24; // [esp+1Ch] [ebp-18h]
    int v25; // [esp+20h] [ebp-14h]
    int v27; // [esp+30h] [ebp-4h]
    v4 = a1;
    v5 = a2;
    result = (*(int (__thiscall **)(int, uint32_t, uint32_t))(*(uint32_t *)a2 + 92))(a2, 0, 0);
    v25 = result;
    if ( result )
    v7 = (*(int (__thiscall **)(int))(*(uint32_t *)v5 + 116))(v5);
    v8 = v4[1];
    v23 = v8;
    v9 = v7 / 2;
    v27 = v9;
    if ( v8 < v4[3] + v8 )
    v10 = v9 * v8;
    v24 = v9 * v8;
    do
    v21 = *v4;
    v11 = v10 + *v4;
    if ( *v4 >= *v4 + v4[2] )
    v5 = a2;
    else
    v12 = a4;
    v13 = (_WORD *)(v25 + 2 * v11);
    v14 = 255 - a4;
    v15 = a3;
    v20 = v13;
    while ( 1 )
    v16 = *v13;
    g_GameScreenConfig = v14;
    v17 = g_ScreenSaverState
    & ((v14 * (unsigned __int16)(v16 & g_ScreenSaverState)
    + v12 * (unsigned int)(unsigned __int16)(v15 & g_ScreenSaverState)) >> 8);
    v18 = v14 * (unsigned __int16)(HIWORD(g_ScreenSaverState) & v16)
    + v12 * (unsigned __int16)(HIWORD(g_ScreenSaverState) & a3);
    v15 = a3;
    g_GameScreenFlags = v12;
    v19 = g_GameScreenConfig * (unsigned __int16)(v16 & g_CreditsScreenState);
    v4 = a1;
    v13 = v20 + 1;
    *v20++ = ((v19 + v12 * (unsigned int)(unsigned __int16)(a3 & g_CreditsScreenState)) >> 8)
    | HIWORD(g_ScreenSaverState) & (v18 >> 8)
    | v17;
    if ( ++v21 >= a1[2] + *a1 )
    break;
    v12 = a4;
    v14 = 255 - a4;
    v5 = a2;
    v8 = v23;
    v10 = v24;
    v10 += v27;
    v23 = ++v8;
    v24 = v10;
    while ( v8 < v4[3] + v4[1] );
    return (*(int (__thiscall **)(int))(*(uint32_t *)v5 + 96))(v5);
    return result;
}

// 0x007BD210
int  DSurface::LockAndPrepareRect(int this)
{
    int v2; // eax
    int result; // eax
    if ( (*(uint8_t *)(this + 1980) & 0x40) != 0 )
    (*(void (__cdecl **)(int, int, uint32_t, uint32_t))(this + 88))(this, 7, 0, 0);
    v2 = *(uint32_t *)(this + 1980);
    LOBYTE(v2) = v2 & 0xBF;
    *(uint32_t *)(this + 1980) = v2;
    (*(void (__cdecl **)(int, int, uint32_t, uint32_t))(this + 88))(this, 3, 0, 0);
    result = *(uint32_t *)(this + 1980);
    if ( (result & 0x80000000) == 1 )
    result &= ~0x80000000;
    *(uint32_t *)(this + 1980) = result;
    return result;
}

