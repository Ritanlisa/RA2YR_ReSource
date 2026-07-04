#include "animfile.hpp"

char __userpurge AnimFile::_vt01@<al>(int a1@<ecx>, int a2@<ebx>, int a3)
{
    *(uint32_t *)(a1 + 132) = a3;
    if ( !a3 )
    return 0;
    if ( !(*(unsigned __int8 (__thiscall **)(int))(*(uint32_t *)a3 + 24))(a3) )
    (*(void (__thiscall **)(uint32_t, int))(**(uint32_t **)(a1 + 132) + 28))(*(uint32_t *)(a1 + 132), 1);
    *(uint8_t *)(a1 + 137) = 1;
    return sub_4267F0(a1, a2);
}

void  AnimFile::_vt02(int this)
{
    void (__thiscall ***v2)(uint32_t, int); // ecx
    if ( *(uint8_t *)(this + 137) )
    (*(void (__thiscall **)(uint32_t))(**(uint32_t **)(this + 132) + 52))(*(uint32_t *)(this + 132));
    *(uint8_t *)(this + 137) = 0;
    v2 = *(void (__thiscall ****)(uint32_t, int))(this + 3596);
    *(uint32_t *)(this + 132) = 0;
    if ( v2 )
    (**v2)(v2, 1);
    *(uint32_t *)(this + 3596) = 0;
    if ( *(uint32_t *)(this + 3600) )
    __3_YAXPAX_Z(*(void **)(this + 3600));
    *(uint32_t *)(this + 3600) = 0;
    *(uint8_t *)(this + 136) = 0;
}

int  AnimFile::_vt05(int this)
{
    int result; // eax
    result = *(uint32_t *)(this + 204);
    if ( *(uint8_t *)(this + 166) )
    --result;
    return result;
}

int  AnimFile::_vt03(int this, int a2)
{
    int v4; // eax
    int v5; // eax
    int v6; // edi
    int v7; // ebx
    int v8; // ebx
    int v9; // ebx
    int v10; // eax
    int v11; // eax
    int v12; // ebp
    int v13; // edi
    int v14; // edx
    unsigned __int16 *v15; // ecx
    int v16; // eax
    int v17; // ecx
    int v18; // ecx
    int v19; // edi
    int v20; // ebp
    int v21; // edx
    unsigned __int16 *v22; // ecx
    unsigned __int16 v23; // ax
    int v24; // ebx
    int v25; // ebp
    int v26; // edi
    int v27; // edx
    unsigned __int16 *v28; // ecx
    int v29; // eax
    int v30; // ecx
    unsigned __int16 *v31; // eax
    int v32; // ebx
    int v33; // ecx
    int v34; // [esp+2Ch] [ebp-18h]
    int i; // [esp+38h] [ebp-Ch]
    char *v36; // [esp+3Ch] [ebp-8h]
    __int16 *v37; // [esp+40h] [ebp-4h]
    if ( !*(uint8_t *)(this + 136) )
    return 0;
    v4 = *(uint32_t *)(this + 3604);
    if ( v4 > a2 && (!*(uint8_t *)(this + 166) || !*(uint8_t *)(this + 167) || v4 != *(uint32_t *)(this + 148) || a2) )
    (*(void (__thiscall **)(uint32_t, uint32_t))(**(uint32_t **)(this + 3596) + 24))(*(uint32_t *)(this + 3596), 0);
    *(uint32_t *)(this + 3604) = -1;
    if ( *(uint32_t *)(this + 3604) != a2 )
    v5 = (*(int (__thiscall **)(uint32_t, uint32_t, uint32_t))(**(uint32_t **)(this + 3596) + 92))(
    *(uint32_t *)(this + 3596),
    0,
    0);
    v6 = *(uint32_t *)(this + 3596);
    v36 = (char *)v5;
    v7 = (*(int (__thiscall **)(int))(*(uint32_t *)v6 + 128))(v6);
    v8 = (*(int (__thiscall **)(int))(*(uint32_t *)v6 + 124))(v6) * v7;
    v9 = (*(int (__thiscall **)(int))(*(uint32_t *)v6 + 112))(v6) * v8;
    v10 = *(uint32_t *)(this + 3604);
    for ( i = v9; v10 != a2; v10 = *(uint32_t *)(this + 3604) )
    v11 = v10 + 1;
    *(uint32_t *)(this + 3604) = v11;
    v12 = v11;
    if ( v11 < *(uint32_t *)(this + 204) )
    v13 = 0;
    v14 = *(unsigned __int16 *)(this + 146);
    if ( (_WORD)v14 )
    v15 = (unsigned __int16 *)(this + 2060);
    while ( 1 )
    HIWORD(v16) = 0;
    if ( *v15 <= v12 )
    LOWORD(v16) = *v15;
    if ( v16 + v15[1] > v12 )
    break;
    ++v13;
    v15 += 3;
    if ( v13 >= v14 )
    goto LABEL_42;
    if ( v13 != -1 )
    if ( *(uint8_t *)(this + 136) && *(uint32_t *)(this + 3608) != v13 )
    v17 = *(uint32_t *)(this + 132);
    *(uint32_t *)(this + 3608) = v13;
    (*(void (__thiscall **)(int, int, uint32_t))(*(uint32_t *)v17 + 40))(v17, (v13 << 16) + 2816, 0);
    (*(void (__thiscall **)(uint32_t, uint32_t, int))(**(uint32_t **)(this + 132) + 36))(
    *(uint32_t *)(this + 132),
    *(uint32_t *)(this + 3600),
    *(unsigned __int16 *)(this + 2 * (3 * v13 + 1032))
    + 2 * *(unsigned __int16 *)(this + 6 * v13 + 2062)
    + 8);
    v18 = 3 * v13;
    v19 = *(uint32_t *)(this + 3600);
    v20 = v12 - *(unsigned __int16 *)(this + 2 * v18 + 2060);
    v21 = 2 * *(unsigned __int16 *)(this + 2 * v18 + 2062) + 8;
    v22 = (unsigned __int16 *)(v19 + 8);
    if ( v20 > 0 )
    do
    v23 = *v22++;
    v21 += v23;
    --v20;
    while ( v20 );
    v37 = (__int16 *)(v19 + v21 + 2);
    if ( v19 + v21 != -2 )
    v24 = *(uint32_t *)(this + 3604);
    v25 = 0;
    v34 = v24;
    if ( v24 < *(uint32_t *)(this + 204) )
    v26 = 0;
    v27 = *(unsigned __int16 *)(this + 146);
    if ( (_WORD)v27 )
    v28 = (unsigned __int16 *)(this + 2060);
    while ( 1 )
    HIWORD(v29) = 0;
    if ( *v28 <= v24 )
    LOWORD(v29) = *v28;
    v24 = *(uint32_t *)(this + 3604);
    if ( v29 + v28[1] > v34 )
    break;
    ++v26;
    v28 += 3;
    if ( v26 >= v27 )
    goto LABEL_41;
    if ( v26 != -1 )
    if ( *(uint8_t *)(this + 136) && *(uint32_t *)(this + 3608) != v26 )
    v30 = *(uint32_t *)(this + 132);
    *(uint32_t *)(this + 3608) = v26;
    (*(void (__thiscall **)(int, int, uint32_t))(*(uint32_t *)v30 + 40))(v30, (v26 << 16) + 2816, 0);
    (*(void (__thiscall **)(uint32_t, uint32_t, int))(**(uint32_t **)(this + 132) + 36))(
    *(uint32_t *)(this + 132),
    *(uint32_t *)(this + 3600),
    *(unsigned __int16 *)(this + 2 * (3 * v26 + 1032))
    + 2 * *(unsigned __int16 *)(this + 6 * v26 + 2062)
    + 8);
    AnimFile::Check((unsigned __int16 *)this, v26);
    v25 = 0;
    v24 = v34;
    v31 = (unsigned __int16 *)(*(uint32_t *)(this + 3600) + 8);
    v32 = v24 - *(unsigned __int16 *)(this + 6 * v26 + 2060);
    if ( v32 >= 0 )
    v33 = v32 + 1;
    do
    v25 = *v31++;
    if ( (unsigned __int16)v25 >= 2u )
    v25 -= 2;
    --v33;
    while ( v33 );
    LABEL_41:
    sub_4270D0(this, (unsigned int)v37, v37, v25, v36, i);
    LABEL_42:
    if ( *(uint32_t *)(this + 3604) > *(uint32_t *)(this + 204) )
    *(uint32_t *)(this + 3604) = 0;
    (*(void (__thiscall **)(uint32_t))(**(uint32_t **)(this + 3596) + 96))(*(uint32_t *)(this + 3596));
    return *(uint32_t *)(this + 3596);
}

char * AnimFile::_vt04(char *this)
{
    return this + 1292;
}

void * AnimFile::_vt00(void *Block, char a2)
{
    char v3; // al
    void (__thiscall ***v4)(uint32_t, int); // ecx
    v3 = *((uint8_t *)Block + 137);
    *(uint32_t *)Block = &AnimFile::`vftable';
    if ( v3 )
    (*(void (__thiscall **)(uint32_t))(**((uint32_t **)Block + 33) + 52))(*((uint32_t *)Block + 33));
    *((uint8_t *)Block + 137) = 0;
    v4 = (void (__thiscall ***)(uint32_t, int))*((uint32_t *)Block + 899);
    *((uint32_t *)Block + 33) = 0;
    if ( v4 )
    (**v4)(v4, 1);
    *((uint32_t *)Block + 899) = 0;
    if ( *((uint32_t *)Block + 900) )
    __3_YAXPAX_Z(*((void **)Block + 900));
    *((uint32_t *)Block + 900) = 0;
    *((uint8_t *)Block + 136) = 0;
    *(uint32_t *)Block = &Animate::`vftable';
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

