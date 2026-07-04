#include "msprintanim.hpp"

bool  MSPrintAnim::_vt04(int this, int a2, uint32_t *a3)
{
    uint32_t *v3; // ebx
    signed int v5; // edi
    signed int v6; // eax
    int v7; // edi
    size_t v9; // ebp
    char v10; // cl
    int v11; // edx
    size_t v12; // eax
    int v13; // eax
    int v14; // ebx
    int v15; // ebp
    size_t v16; // edi
    int v17; // ebx
    int v18; // eax
    wchar_t Char; // ax
    int v20; // eax
    int v21; // ecx
    char v22; // cl
    int v23; // edx
    int v24; // edi
    int v25; // eax
    unsigned int v26; // eax
    int v27; // edi
    size_t v28; // eax
    size_t i; // edi
    char v30; // [esp+2Fh] [ebp-25h]
    void *v31; // [esp+30h] [ebp-24h] BYREF
    int v32; // [esp+34h] [ebp-20h]
    int v33; // [esp+38h] [ebp-1Ch]
    int v34; // [esp+3Ch] [ebp-18h]
    size_t v35; // [esp+40h] [ebp-14h]
    int v36; // [esp+44h] [ebp-10h]
    int v37; // [esp+4Ch] [ebp-8h]
    v3 = a3;
    *a3 = 0;
    a3[1] = 0;
    a3[2] = 0;
    a3[3] = 0;
    v5 = *(uint32_t *)(this + 24);
    if ( *(uint32_t *)(this + 16) == -1 )
    LABEL_4:
    if ( v5 )
    return 0;
    goto LABEL_5;
    v6 = Timer::GetTicks() - *(uint32_t *)(this + 16);
    if ( v6 < v5 )
    v5 -= v6;
    goto LABEL_4;
    LABEL_5:
    if ( *(uint8_t *)(this + 12) != 1 )
    return 0;
    v7 = *(uint32_t *)(this + 44);
    *(uint32_t *)(this + 16) = Timer::GetTicks();
    *(uint32_t *)(this + 20) = v37;
    *(uint32_t *)(this + 24) = v7;
    if ( *(uint32_t *)(this + 36) > (unsigned int)WideString::Length((const wchar_t **)(this + 28))
    && *(uint32_t *)(this + 40) > 2u )
    return *(uint8_t *)(this + 72) == 0;
    if ( *(uint8_t *)(this + 48) == 1 )
    (*(void (__thiscall **)(int, int, int, int, uint32_t, int))(*(uint32_t *)a2 + 8))(
    a2,
    this + 56,
    DSurface_Alternate,
    this + 56,
    0,
    1);
    v9 = *(uint32_t *)(this + 32);
    v10 = *(uint8_t *)(this + 73);
    v11 = *(uint32_t *)(this + 8);
    v32 = *(uint32_t *)(this + 4);
    v12 = *(uint32_t *)(this + 36);
    v30 = v10;
    v33 = v11;
    v35 = v9;
    if ( v9 > v12 )
    goto LABEL_35;
    while ( 1 )
    LOWORD(v13) = MSPrintAnim::GetCharAt((const wchar_t **)(this + 28), v9);
    v14 = v13;
    v34 = v13;
    if ( !(_WORD)v13 )
    ++*(uint32_t *)(this + 40);
    goto LABEL_34;
    if ( v30 )
    WideString::AssignFromPtr((wchar_t **)&v31, (const wchar_t **)(this + 28));
    WideString::Erase((const wchar_t **)&v31, 0, v9);
    v15 = 0;
    v16 = 0;
    v36 = *(uint32_t *)(*(uint32_t *)(this + 52) + 4);
    if ( WideString::GetChar((const wchar_t **)&v31, 0) )
    do
    if ( WideString::GetChar((const wchar_t **)&v31, v16) == 10 )
    break;
    v17 = **(uint32_t **)(this + 52);
    LOWORD(v18) = WideString::GetChar((const wchar_t **)&v31, v16);
    v15 += (*(int (__thiscall **)(uint32_t, int))(v17 + 4))(*(uint32_t *)(this + 52), v18);
    Char = WideString::GetChar((const wchar_t **)&v31, ++v16);
    v14 = v34;
    while ( Char );
    v30 = 0;
    v20 = (*(uint32_t *)(this + 64) - v15 - v36) / 2;
    v21 = v20 + v32;
    *(uint32_t *)(this + 76) = v20;
    v32 = v21;
    DeleteAndZero::Alt(&v31);
    v9 = v35;
    if ( (_WORD)v14 != 10 )
    if ( !*(uint8_t *)(this + 48) || (v26 = *(uint32_t *)(this + 36) - v9, v26 >= 2) )
    v26 = 2;
    v27 = v32;
    (*(void (__thiscall **)(uint32_t, int, int, int, int, unsigned int, int))(**(uint32_t **)(this + 52) + 16))(
    *(uint32_t *)(this + 52),
    a2,
    v14,
    v32,
    v33,
    v26,
    1);
    v32 = (*(int (__thiscall **)(uint32_t, int))(**(uint32_t **)(this + 52) + 4))(*(uint32_t *)(this + 52), v14) + v27;
    goto LABEL_25;
    v22 = *(uint8_t *)(this + 73);
    v23 = *(uint32_t *)(this + 52);
    v24 = *(uint32_t *)(this + 8);
    v32 = *(uint32_t *)(this + 4);
    v30 = v22;
    v25 = *(uint32_t *)(v23 + 8);
    v33 += v25;
    if ( v33 + v25 - v24 > *(uint32_t *)(this + 68) )
    break;
    LABEL_25:
    v28 = *(uint32_t *)(this + 36);
    v35 = ++v9;
    if ( v9 > v28 )
    goto LABEL_34;
    for ( i = *(uint32_t *)(this + 32); WideString::GetChar((const wchar_t **)(this + 28), i); ++i )
    if ( WideString::GetChar((const wchar_t **)(this + 28), i) == 10 )
    break;
    if ( WideString::GetChar((const wchar_t **)(this + 28), i) == 10 )
    ++i;
    *(uint32_t *)(this + 32) = i;
    LABEL_34:
    v3 = a3;
    LABEL_35:
    *v3 = *(uint32_t *)(this + 56);
    v3[1] = *(uint32_t *)(this + 60);
    v3[2] = *(uint32_t *)(this + 64);
    v3[3] = *(uint32_t *)(this + 68);
    ++*(uint32_t *)(this + 36);
    return 0;
}

int  MSPrintAnim::_vt05(int this, int a2, int *a3)
{
    int *v4; // ecx
    int result; // eax
    int v6; // ecx
    char v7; // dl
    int v8; // eax
    const wchar_t *v9; // ebx
    const wchar_t **v10; // edi
    size_t v11; // ebp
    int v12; // ebx
    size_t v13; // edi
    int v14; // ebx
    int v15; // eax
    int v16; // kr00_4
    int v17; // ecx
    int v18; // ebx
    int v19; // eax
    int v20; // ebx
    int v21; // eax
    int v22; // eax
    int v23; // [esp-4h] [ebp-54h]
    int v24; // [esp+0h] [ebp-50h]
    void *v25; // [esp+1Ch] [ebp-34h] BYREF
    int v26; // [esp+20h] [ebp-30h]
    int v27; // [esp+24h] [ebp-2Ch]
    const wchar_t *v28; // [esp+28h] [ebp-28h]
    int v29; // [esp+2Ch] [ebp-24h]
    int v30; // [esp+30h] [ebp-20h]
    int v31; // [esp+34h] [ebp-1Ch]
    uint32_t v32[4]; // [esp+40h] [ebp-10h] BYREF
    char v33; // [esp+58h] [ebp+8h]
    int v34; // [esp+58h] [ebp+8h]
    if ( !a3
    || (v4 = ClipRectIntersection(v32, a3, (int *)(this + 56), 0, 0),
    v30 = *v4,
    v31 = v4[1],
    result = v4[2],
    v6 = v4[3],
    result > 0)
    && v6 > 0 )
    v7 = *(uint8_t *)(this + 73);
    v8 = *(uint32_t *)(this + 8);
    v9 = *(const wchar_t **)(this + 36);
    v10 = (const wchar_t **)(this + 28);
    v26 = *(uint32_t *)(this + 4);
    v33 = v7;
    v27 = v8;
    v28 = v9 >= WideString::Length((const wchar_t **)(this + 28))
    ? WideString::Length((const wchar_t **)(this + 28))
    : v9;
    v11 = *(uint32_t *)(this + 32);
    for ( result = (int)v28; v11 < (unsigned int)v28; ++v11 )
    if ( WideString::GetChar(v10, v11) == 10 )
    v33 = *(uint8_t *)(this + 73);
    v12 = *(uint32_t *)(*(uint32_t *)(this + 52) + 8);
    v26 = *(uint32_t *)(this + 4);
    v27 += v12;
    result = (*(int (__thiscall **)(int))(*(uint32_t *)a2 + 128))(a2);
    if ( v27 + v12 >= result )
    return result;
    else
    if ( v33 )
    WideString::AssignFromPtr((wchar_t **)&v25, v10);
    v13 = 0;
    WideString::Erase((const wchar_t **)&v25, 0, v11);
    v34 = 0;
    v29 = *(uint32_t *)(*(uint32_t *)(this + 52) + 4);
    if ( WideString::GetChar((const wchar_t **)&v25, 0) )
    do
    if ( WideString::GetChar((const wchar_t **)&v25, v13) == 10 )
    break;
    v14 = **(uint32_t **)(this + 52);
    LOWORD(v15) = WideString::GetChar((const wchar_t **)&v25, v13++);
    v34 += (*(int (__thiscall **)(uint32_t, int))(v14 + 4))(*(uint32_t *)(this + 52), v15);
    while ( WideString::GetChar((const wchar_t **)&v25, v13) );
    v16 = *(uint32_t *)(this + 64) - v34 - v29;
    v33 = 0;
    v17 = v16 / 2 + v26;
    *(uint32_t *)(this + 76) = v16 / 2;
    v26 = v17;
    DeleteAndZero::Alt(&v25);
    v24 = v27;
    v18 = **(uint32_t **)(this + 52);
    v10 = (const wchar_t **)(this + 28);
    v23 = v26;
    LOWORD(v19) = WideString::GetChar((const wchar_t **)(this + 28), v11);
    (*(void (__thiscall **)(uint32_t, int, int, int, int, int, int))(v18 + 16))(
    *(uint32_t *)(this + 52),
    a2,
    v19,
    v23,
    v24,
    2,
    1);
    v20 = **(uint32_t **)(this + 52);
    LOWORD(v21) = WideString::GetChar((const wchar_t **)(this + 28), v11);
    v22 = (*(int (__thiscall **)(uint32_t, int))(v20 + 4))(*(uint32_t *)(this + 52), v21);
    v26 += v22;
    result = (int)v28;
    return result;
}

uint32_t * MSPrintAnim::_vt06(uint32_t *this, uint32_t *a2)
{
    uint32_t *v3; // ecx
    v3 = this + 14;
    *a2 = *v3;
    a2[1] = v3[1];
    a2[2] = v3[2];
    a2[3] = v3[3];
    return a2;
}

void ** MSPrintAnim::_vt00(void **Block, char a2)
{
    *Block = &MSPrintAnim::`vftable';
    DeleteAndZero::Alt(Block + 7);
    *Block = &MSAnim::`vftable';
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

