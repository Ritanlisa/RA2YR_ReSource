#include "msvqanim.hpp"

void  MSVQAnim::_vt05(int this, int a2, int *a3)
{
    int v3; // esi
    int *v5; // esi
    int v6; // edx
    int v7; // ecx
    int v8; // ebp
    int v9; // ebx
    int v10; // eax
    int v11; // edi
    int v12; // eax
    int v13; // ecx
    int v14; // [esp+Ch] [ebp-28h]
    int v15; // [esp+10h] [ebp-24h]
    int v16; // [esp+14h] [ebp-20h] BYREF
    int v17; // [esp+18h] [ebp-1Ch]
    int v18; // [esp+1Ch] [ebp-18h]
    int v19; // [esp+20h] [ebp-14h]
    int v20; // [esp+24h] [ebp-10h]
    int v21; // [esp+28h] [ebp-Ch]
    int v22; // [esp+3Ch] [ebp+8h]
    v3 = *(uint32_t *)(this + 28);
    v15 = this;
    if ( !v3 || *(uint8_t *)(this + 45) )
    return;
    if ( !a3 )
    LABEL_28:
    (*(void (__thiscall **)(int, int, int, int, uint32_t, int))(*(uint32_t *)a2 + 8))(
    a2,
    *(uint32_t *)(this + 28) + 36,
    DSurface_Alternate,
    *(uint32_t *)(this + 28) + 52,
    0,
    1);
    return;
    v5 = (int *)(v3 + 52);
    Rect::Set(&v16, 0, 0, 0, 0);
    v6 = *v5;
    v7 = v5[1];
    v8 = v5[2];
    v9 = v5[3];
    v22 = a3[2];
    if ( a3[2] <= 0 )
    goto LABEL_23;
    v14 = a3[3];
    if ( v14 <= 0 || v5[2] <= 0 || v5[3] <= 0 )
    goto LABEL_23;
    v10 = *a3;
    if ( v6 < *a3 )
    v8 += v6 - v10;
    v6 = *a3;
    if ( v8 < 1 )
    goto LABEL_21;
    v11 = a3[1];
    if ( v7 < v11 )
    v9 += v7 - v11;
    v7 = v11;
    if ( v9 < 1 )
    LABEL_23:
    v20 = v16;
    v21 = v17;
    goto LABEL_24;
    if ( v6 + v8 > v10 + v22 )
    v8 = v22 + v10 - v6;
    if ( v8 < 1 )
    v20 = v16;
    v21 = v17;
    LABEL_24:
    v12 = v18;
    v13 = v19;
    goto LABEL_25;
    if ( v9 + v7 > v14 + v11 )
    v9 = v14 + v11 - v7;
    if ( v9 < 1 )
    LABEL_21:
    v20 = v16;
    v21 = v17;
    goto LABEL_24;
    v21 = v7;
    v20 = v6;
    v12 = v8;
    v13 = v9;
    LABEL_25:
    if ( v12 > 0 && v13 > 0 )
    this = v15;
    goto LABEL_28;
}

char  MSVQAnim::_vt08(int this, int a2)
{
    int v3; // eax
    int v4; // ecx
    int v5; // edi
    int v6; // eax
    uint8_t v8[16]; // [esp+4h] [ebp-10h] BYREF
    LOBYTE(v3) = *(uint8_t *)(this + 45);
    if ( (uint8_t)v3 )
    v3 = *(uint32_t *)(this + 28);
    if ( v3 )
    v4 = *(uint32_t *)(this + 40);
    if ( v4 )
    v5 = **(uint32_t **)(this + 32);
    v6 = (*(int (__thiscall **)(int, uint8_t *, uint32_t, int))(*(uint32_t *)v4 + 120))(v4, v8, 0, 1);
    LOBYTE(v3) = (*(int (__thiscall **)(uint32_t, int, uint32_t, int))(v5 + 8))(
    *(uint32_t *)(this + 32),
    *(uint32_t *)(this + 28) + 36,
    *(uint32_t *)(this + 40),
    v6);
    return v3;
}

int * MSVQAnim::vt_06_(uint32_t *this, int *a2)
{
    int v3; // eax
    int *v4; // ecx
    if ( (byte_ABFB98 & 1) == 0 )
    dword_ABFBA0 = 0;
    byte_ABFB98 |= 1u;
    dword_ABFBA4 = 0;
    dword_ABFBA8 = 0;
    dword_ABFBAC = 0;
    atexit(nullsub_190);
    v3 = *(this + 7);
    v4 = (int *)(v3 + 52);
    if ( !v3 )
    v4 = &dword_ABFBA0;
    *a2 = *v4;
    a2[1] = v4[1];
    a2[2] = v4[2];
    a2[3] = v4[3];
    return a2;
}

char  MSVQAnim::_vt07(uint8_t *this)
{
    return *(this + 45);
}

uint32_t * MSVQAnim::_vt00(uint32_t *Block, char a2)
{
    void (__thiscall ***v3)(uint32_t, int); // ecx
    uint32_t **v4; // ecx
    void *v5; // edi
    v3 = (void (__thiscall ***)(uint32_t, int))*(Block + 10);
    *Block = &MSVQAnim::`vftable';
    if ( v3 )
    (**v3)(v3, 1);
    v4 = (uint32_t **)*(Block + 7);
    if ( v4 )
    MovieContext::Cleanup(v4);
    v5 = (void *)*(Block + 7);
    if ( v5 )
    BinkMovie::Cleanup((uint32_t *)*(Block + 7));
    __3_YAXPAX_Z(v5);
    *Block = &MSAnim::`vftable';
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

