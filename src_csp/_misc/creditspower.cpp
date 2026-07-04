#include "creditspower.hpp"

char  CreditsPower::DrawCreditsTextLine(int this, char a2)
{
    int v3; // esi
    char result; // al
    int v5; // ecx
    int v6; // eax
    size_t v7; // eax
    int v8; // [esp-10h] [ebp-28h]
    int v9[4]; // [esp+8h] [ebp-10h] BYREF
    v3 = *(uint32_t *)(this + 8);
    if ( v3 < (*(int (__thiscall **)(int))(*(uint32_t *)DSurface_Hidden_2 + 128))(DSurface_Hidden_2)
    && (v3 = *(uint32_t *)(this + 8),
    v3 > (*(int (__thiscall **)(int))(*(uint32_t *)DSurface_Hidden_2 + 128))(DSurface_Hidden_2) - 52)
    || v3 >= -16 && v3 <= 32
    || (result = a2) != 0 )
    v9[3] = *(&g_DisplayWidth + 1);
    v5 = 0;
    v9[0] = (g_DisplayWidth - 520) / 2;
    v6 = *(uint32_t *)(this + 12);
    v9[2] = 520;
    v9[1] = v3;
    if ( (v6 & 0x100) != 0 )
    v5 = 1;
    else if ( (v6 & 0x200) != 0 )
    v5 = 4;
    result = g_DDraw_Active;
    if ( g_DDraw_Active )
    v8 = v5;
    v7 = wcslen(*(const wchar_t **)this);
    return DrawTextRendererTextAligned(8454143, 0, v9, *(unsigned __int16 **)this, v7, v8, 0, dword_8A0F58, 0);
    return result;
}

