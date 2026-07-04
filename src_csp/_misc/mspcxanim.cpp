#include "mspcxanim.hpp"

char  MSPCXAnim::_vt05(int this, int *a2, int *a3)
{
    int v3; // esi
    int v4; // eax
    int *v6; // esi
    int v7; // edx
    int v8; // ecx
    int v9; // ebp
    int v10; // ebx
    int v11; // eax
    int v12; // edi
    int v13; // ecx
    int v14; // ebx
    int v15; // eax
    int v17; // [esp+10h] [ebp-28h]
    int v19; // [esp+18h] [ebp-20h] BYREF
    int v20; // [esp+1Ch] [ebp-1Ch]
    int v21; // [esp+20h] [ebp-18h]
    int v22; // [esp+24h] [ebp-14h]
    int v23; // [esp+28h] [ebp-10h] BYREF
    int v24; // [esp+2Ch] [ebp-Ch]
    int v25; // [esp+40h] [ebp+8h]
    v3 = this;
    v4 = *(uint32_t *)(this + 36);
    if ( !v4 )
    return v4;
    LOBYTE(v4) = *(uint8_t *)(this + 41);
    if ( (uint8_t)v4 )
    return v4;
    LOBYTE(v4) = *(uint8_t *)(this + 12);
    if ( !(uint8_t)v4 )
    return v4;
    if ( !a3 )
    LABEL_29:
    v14 = *a2;
    v15 = (*(int (__thiscall **)(uint32_t, int *, uint32_t, int))(**(uint32_t **)(v3 + 36) + 120))(
    *(uint32_t *)(v3 + 36),
    &v23,
    0,
    1);
    LOBYTE(v4) = (*(int (__thiscall **)(int *, int, uint32_t, int))(v14 + 8))(a2, v3 + 44, *(uint32_t *)(v3 + 36), v15);
    return v4;
    v6 = (int *)(this + 44);
    Rect::Set(&v19, 0, 0, 0, 0);
    v7 = *v6;
    v8 = v6[1];
    v9 = v6[2];
    v10 = v6[3];
    v25 = a3[2];
    if ( a3[2] <= 0 )
    goto LABEL_24;
    v17 = a3[3];
    if ( v17 <= 0 || v6[2] <= 0 || v6[3] <= 0 )
    goto LABEL_24;
    v11 = *a3;
    if ( v7 < *a3 )
    v9 += v7 - v11;
    v7 = *a3;
    if ( v9 < 1 )
    goto LABEL_22;
    v12 = a3[1];
    if ( v8 < v12 )
    v10 += v8 - v12;
    v8 = v12;
    if ( v10 < 1 )
    LABEL_24:
    v23 = v19;
    v24 = v20;
    goto LABEL_25;
    if ( v7 + v9 > v11 + v25 )
    v9 = v25 + v11 - v7;
    if ( v9 < 1 )
    v23 = v19;
    v24 = v20;
    LABEL_25:
    v4 = v21;
    v13 = v22;
    goto LABEL_26;
    if ( v10 + v8 > v17 + v12 )
    v10 = v17 + v12 - v8;
    if ( v10 < 1 )
    LABEL_22:
    v23 = v19;
    v24 = v20;
    goto LABEL_25;
    v24 = v8;
    v23 = v7;
    v4 = v9;
    v13 = v10;
    LABEL_26:
    if ( v4 > 0 && v13 > 0 )
    v3 = this;
    goto LABEL_29;
    return v4;
}

void  MSPCXAnim::_vt08(int this, int a2)
{
    int v3; // ecx
    int v4; // edi
    int v5; // eax
    uint8_t v6[16]; // [esp+4h] [ebp-10h] BYREF
    v3 = *(uint32_t *)(this + 36);
    if ( v3 )
    if ( *(uint8_t *)(this + 12) )
    v4 = **(uint32_t **)(this + 28);
    v5 = (*(int (__thiscall **)(int, uint8_t *, uint32_t, int))(*(uint32_t *)v3 + 120))(v3, v6, 0, 1);
    (*(void (__thiscall **)(uint32_t, int, uint32_t, int))(v4 + 8))(
    *(uint32_t *)(this + 28),
    this + 44,
    *(uint32_t *)(this + 36),
    v5);
}

uint32_t * MSPCXAnim::_vt06(uint32_t *this, uint32_t *a2)
{
    uint32_t *v3; // ecx
    v3 = this + 11;
    *a2 = *v3;
    a2[1] = v3[1];
    a2[2] = v3[2];
    a2[3] = v3[3];
    return a2;
}

char  MSPCXAnim::_vt07(uint8_t *this)
{
    return *(this + 41);
}

uint32_t * MSPCXAnim::_vt00(uint32_t *Block, char a2)
{
    void (__thiscall ***v3)(uint32_t, int); // ecx
    v3 = (void (__thiscall ***)(uint32_t, int))*(Block + 9);
    *Block = &MSPCXAnim::`vftable';
    if ( v3 )
    (**v3)(v3, 1);
    *Block = &MSAnim::`vftable';
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

