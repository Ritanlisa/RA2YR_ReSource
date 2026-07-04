#include "msoverlayanim.hpp"

char  MSOverlayAnim::_vt04(int this, int a2, int *a3)
{
    signed int v4; // edi
    signed int v5; // eax
    int v6; // edi
    DWORD Ticks; // eax
    unsigned int v8; // ecx
    int *FoundationSize; // eax
    int v10; // ebx
    int v11; // ecx
    int v12; // edi
    int v13; // eax
    int v14; // ebp
    unsigned int v15; // ecx
    unsigned int v16; // eax
    int v17; // eax
    int v18; // edx
    int v19; // eax
    int v21; // eax
    int *v22; // eax
    int *v23; // eax
    int v24; // edi
    int v25; // edx
    int v26; // eax
    int v27; // edx
    int v28; // ebx
    int v29; // edi
    int v30; // esi
    int v31; // edx
    int v32; // esi
    int v33; // edi
    int v34; // edx
    int v35; // esi
    int v36; // edi
    int v37; // [esp-20h] [ebp-68h]
    int v38; // [esp+18h] [ebp-30h] BYREF
    int v39; // [esp+1Ch] [ebp-2Ch]
    int v40; // [esp+20h] [ebp-28h]
    int v41; // [esp+28h] [ebp-20h] BYREF
    int v42; // [esp+2Ch] [ebp-1Ch]
    int v43; // [esp+30h] [ebp-18h]
    int v44; // [esp+34h] [ebp-14h]
    uint32_t v45[4]; // [esp+38h] [ebp-10h] BYREF
    if ( *(uint8_t *)(this + 12) != 1 )
    goto LABEL_29;
    v4 = *(uint32_t *)(this + 24);
    if ( *(uint32_t *)(this + 16) == -1 )
    LABEL_5:
    if ( !v4 )
    goto LABEL_6;
    LABEL_29:
    *a3 = 0;
    a3[1] = 0;
    a3[2] = 0;
    a3[3] = 0;
    return 0;
    v5 = Timer::GetTicks() - *(uint32_t *)(this + 16);
    if ( v5 < v4 )
    v4 -= v5;
    goto LABEL_5;
    LABEL_6:
    v6 = *(uint32_t *)(this + 36);
    Ticks = Timer::GetTicks();
    v8 = *(uint32_t *)(this + 40);
    *(uint32_t *)(this + 16) = Ticks;
    *(uint32_t *)(this + 20) = v39;
    *(uint32_t *)(this + 24) = v6;
    FoundationSize = Building::GetFoundationSize(&v38, v8);
    v10 = *(uint32_t *)(this + 4);
    v41 = *FoundationSize;
    v11 = v10 + v41;
    v42 = FoundationSize[1];
    v43 = FoundationSize[2];
    v12 = *(uint32_t *)(this + 8) + v42;
    v44 = FoundationSize[3];
    v13 = *(uint32_t *)(this + 56);
    v41 += v10;
    v42 = v12;
    if ( (v13 & 0x200) != 0 )
    v14 = *(uint32_t *)(this + 28);
    v41 = *(__int16 *)(v14 + 2) / -2 + v11;
    v42 = *(__int16 *)(v14 + 4) / -2 + v12;
    (*(void (__thiscall **)(int, int *, int, int *, uint32_t, int))(*(uint32_t *)a2 + 8))(
    a2,
    &v41,
    DSurface_Alternate,
    &v41,
    0,
    1);
    v15 = *(uint32_t *)(this + 48);
    v16 = *(uint32_t *)(this + 40) + 1;
    *(uint32_t *)(this + 40) = v16;
    if ( v16 > v15 )
    if ( !*(uint8_t *)(this + 52) )
    v17 = v42;
    *a3 = v41;
    v18 = v43;
    a3[1] = v17;
    v19 = v44;
    a3[2] = v18;
    a3[3] = v19;
    return 1;
    *(uint32_t *)(this + 40) = *(uint32_t *)(this + 44);
    v21 = *(uint32_t *)(this + 56);
    v38 = *(uint32_t *)(this + 4);
    BYTE1(v21) |= 4u;
    v37 = v21;
    v39 = *(uint32_t *)(this + 8);
    v22 = (int *)(*(int (__thiscall **)(int, uint32_t *))(*(uint32_t *)a2 + 120))(a2, v45);
    DrawToSurfaceSHP(
    a2,
    *(uint32_t *)(this + 32),
    *(uint32_t *)(this + 28),
    *(uint32_t *)(this + 40),
    &v38,
    v22,
    v37,
    0,
    0,
    0,
    1000,
    0,
    0,
    0,
    0,
    0);
    v23 = Building::GetFoundationSize(v45, *(uint32_t *)(this + 40));
    *a3 = *v23;
    a3[1] = v23[1];
    a3[2] = v23[2];
    a3[3] = v23[3];
    v24 = *(uint32_t *)(this + 4) + *a3;
    v25 = a3[1];
    *a3 = v24;
    a3[1] = *(uint32_t *)(this + 8) + v25;
    if ( (*(uint32_t *)(this + 56) & 0x200) != 0 )
    *a3 = *(__int16 *)(*(uint32_t *)(this + 28) + 2) / -2 + v24;
    a3[1] += *(__int16 *)(*(uint32_t *)(this + 28) + 4) / -2;
    if ( a3[2] <= 0 || a3[3] <= 0 )
    v34 = v42;
    v35 = v43;
    v36 = v44;
    *a3 = v41;
    a3[1] = v34;
    a3[2] = v35;
    a3[3] = v36;
    return 0;
    else if ( v43 <= 0 || v44 <= 0 )
    v31 = a3[1];
    v32 = a3[2];
    v33 = a3[3];
    *a3 = *a3;
    a3[1] = v31;
    a3[2] = v32;
    a3[3] = v33;
    return 0;
    else
    v26 = *a3;
    v27 = a3[1];
    v28 = a3[2];
    v40 = v28;
    v29 = a3[3];
    if ( v26 > v41 )
    v28 += v26 - v41;
    v26 = v41;
    v40 = v28;
    if ( v27 > v42 )
    v29 += v27 - v42;
    v27 = v42;
    if ( v26 + v28 < v41 + v43 )
    v40 = v43 - v26 + v41 + 1;
    if ( v29 + v27 < v42 + v44 )
    v29 = v44 - v27 + v42 + 1;
    v30 = v40;
    *a3 = v26;
    a3[1] = v27;
    a3[2] = v30;
    a3[3] = v29;
    return 0;
}

void  MSOverlayAnim::_vt05(int this, int a2, int *a3)
{
    int *FoundationSize; // eax
    int v5; // edi
    int v6; // ecx
    int v7; // eax
    int v8; // ebp
    int *v9; // eax
    int v10; // ecx
    int v11; // eax
    int *v12; // eax
    int v13; // [esp-28h] [ebp-68h]
    int v14[4]; // [esp+10h] [ebp-30h] BYREF
    int v15; // [esp+20h] [ebp-20h] BYREF
    int v16; // [esp+24h] [ebp-1Ch]
    int v17; // [esp+28h] [ebp-18h]
    int v18; // [esp+2Ch] [ebp-14h]
    char v19[16]; // [esp+30h] [ebp-10h] BYREF
    v15 = 0;
    v16 = 0;
    v17 = 0;
    v18 = 0;
    if ( !a3 )
    goto LABEL_10;
    FoundationSize = Building::GetFoundationSize(v14, *(uint32_t *)(this + 40));
    v15 = *FoundationSize;
    v16 = FoundationSize[1];
    v17 = FoundationSize[2];
    v5 = *(uint32_t *)(this + 8) + v16;
    v18 = FoundationSize[3];
    v6 = *(uint32_t *)(this + 4) + v15;
    v7 = *(uint32_t *)(this + 56);
    v15 = v6;
    v16 = v5;
    if ( (v7 & 0x200) != 0 )
    v8 = *(uint32_t *)(this + 28);
    v15 = *(__int16 *)(v8 + 2) / -2 + v6;
    v16 = *(__int16 *)(v8 + 4) / -2 + v5;
    v9 = ClipRectIntersection(v14, a3, &v15, 0, 0);
    v15 = *v9;
    v16 = v9[1];
    v17 = v9[2];
    v10 = v9[3];
    v18 = v10;
    if ( v17 > 0 && v10 > 0 )
    LABEL_10:
    if ( *(uint8_t *)(this + 12) )
    v11 = *(uint32_t *)(this + 56);
    v14[0] = *(uint32_t *)(this + 4);
    BYTE1(v11) |= 4u;
    v13 = v11;
    v14[1] = *(uint32_t *)(this + 8);
    v12 = (int *)(*(int (__thiscall **)(int, char *))(*(uint32_t *)a2 + 120))(a2, v19);
    DrawToSurfaceSHP(
    a2,
    *(uint32_t *)(this + 32),
    *(uint32_t *)(this + 28),
    *(uint32_t *)(this + 40),
    v14,
    v12,
    v13,
    0,
    0,
    0,
    1000,
    0,
    0,
    0,
    0,
    0);
}

int * MSOverlayAnim::_vt06(unsigned int *this, int *a2)
{
    uint32_t *FoundationSize; // eax
    int v4; // edi
    int v5; // ebx
    int v6; // ebp
    int v7; // ecx
    int v8; // esi
    int v10[4]; // [esp+10h] [ebp-10h] BYREF
    FoundationSize = Building::GetFoundationSize(v10, *(this + 10));
    v4 = *(this + 2) + FoundationSize[1];
    v5 = FoundationSize[2];
    v6 = FoundationSize[3];
    v7 = *(this + 1) + *FoundationSize;
    if ( (*(this + 14) & 0x200) != 0 )
    v8 = *(this + 7);
    v7 += *(__int16 *)(v8 + 2) / -2;
    v4 += *(__int16 *)(v8 + 4) / -2;
    *a2 = v7;
    a2[1] = v4;
    a2[2] = v5;
    a2[3] = v6;
    return a2;
}

char  MSOverlayAnim::_vt1(uint8_t *this, char a2)
{
    *(this + 12) = a2;
    return a2;
}

uint32_t * MSOverlayAnim::_vt00(uint32_t *Block, char a2)
{
    void *v3; // eax
    v3 = (void *)*(Block + 7);
    *Block = &MSShapeAnim::`vftable';
    if ( v3 && *((uint8_t *)Block + 60) )
    __3_YAXPAX_Z(v3);
    *(Block + 7) = 0;
    *((uint8_t *)Block + 60) = 0;
    *Block = &MSAnim::`vftable';
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

