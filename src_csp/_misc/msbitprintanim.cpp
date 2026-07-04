#include "msbitprintanim.hpp"

uint32_t * MSBitPrintAnim::_vt06(uint32_t *this, uint32_t *a2)
{
    uint32_t *v3; // ecx
    v3 = this + 8;
    *a2 = *v3;
    a2[1] = v3[1];
    a2[2] = v3[2];
    a2[3] = v3[3];
    return a2;
}

char  MSBitPrintAnim::_vt07(uint8_t *this)
{
    return *(this + 48);
}

char  MSBitPrintAnim::_vt05(int this, int a2, int *a3)
{
    char result; // al
    int *v5; // eax
    int v6; // edx
    int v7; // ebx
    int v8; // edi
    int v9; // eax
    wchar_t *v10; // eax
    int v11; // [esp-24h] [ebp-38h]
    int v12; // [esp-20h] [ebp-34h]
    int v13; // [esp-1Ch] [ebp-30h]
    int v14; // [esp-18h] [ebp-2Ch]
    char v15; // [esp-14h] [ebp-28h]
    uint32_t v16[4]; // [esp+4h] [ebp-10h] BYREF
    result = g_GameFontObject;
    if ( g_GameFontObject && g_FogOfWarState )
    v5 = a3;
    if ( !a3 )
    v5 = (int *)(this + 32);
    v6 = *v5;
    v7 = v5[2];
    v8 = v5[1];
    v9 = v5[3];
    v16[0] = v6;
    v16[2] = v7 + v6 - 1;
    v16[1] = v8;
    v16[3] = v9 + v8 - 1;
    TextGroup::SetRect((uint32_t *)g_FogOfWarState, v16);
    v15 = *(uint8_t *)(this + 49) != 0;
    v14 = *(uint32_t *)(this + 44);
    v13 = *(uint32_t *)(this + 40);
    v12 = *(uint32_t *)(this + 36);
    v11 = *(uint32_t *)(this + 32);
    v10 = WideString::GetOrEmpty((wchar_t **)(this + 28));
    return Font::Print(g_FogOfWarState, a2, v10, v11, v12, v13, v14, v15, 0, 0);
    return result;
}

void ** MSBitPrintAnim::_vt00(void **Block, char a2)
{
    *Block = &MSBitPrintAnim::`vftable';
    DeleteAndZero::Alt(Block + 7);
    *Block = &MSAnim::`vftable';
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

