#include "filepipe_38_.hpp"

int  FilePipe_38_::_vt06(uint32_t *this, int a2, int a3)
{
    int v3; // ecx
    v3 = *(this + 1) + 3 * a3;
    *(_WORD *)a2 = *(_WORD *)v3;
    *(uint8_t *)(a2 + 2) = *(uint8_t *)(v3 + 2);
    return a2;
}

char  FilePipe_38_::_vt01(int *this, int a2)
{
    int v2; // edi
    int v3; // esi
    int v4; // edx
    uint8_t *v5; // eax
    uint8_t *v6; // ecx
    int v7; // ebp
    v2 = *(this + 2);
    if ( v2 == *(uint32_t *)(a2 + 8) )
    v3 = 0;
    if ( v2 <= 0 )
    return 1;
    v4 = *(uint32_t *)(a2 + 4);
    v5 = (uint8_t *)*(this + 1);
    v6 = (uint8_t *)(v4 + 2);
    v7 = v4 - (uint32_t)v5;
    while ( *v5 == v5[v7] && v5[1] == *(v6 - 1) && v5[2] == *v6 )
    ++v3;
    v6 += 3;
    v5 += 3;
    if ( v3 >= v2 )
    return 1;
    return 0;
}

char  FilePipe_38_::_vt02(void *this, int a2, char *a3)
{
    int v3; // ebp
    char *v5; // edi
    char *v6; // eax
    uint8_t *v7; // ecx
    int v8; // edx
    uint8_t *v9; // eax
    int v10; // ecx
    int v12; // ecx
    int v13; // eax
    int v14; // edx
    char *v15; // ebx
    v3 = a2;
    if ( a2 )
    v5 = a3;
    *((uint8_t *)this + 12) = 0;
    if ( a3 )
    if ( a2 - 1 >= 0 )
    v9 = a3 + 2;
    v10 = a2;
    do
    *(v9 - 2) = 0;
    *(v9 - 1) = 0;
    *v9 = 0;
    v9 += 3;
    --v10;
    while ( v10 );
    else
    v6 = (char *)__2_YAPAXI_Z(3 * a2);
    if ( v6 )
    if ( a2 - 1 >= 0 )
    v7 = v6 + 2;
    v8 = a2;
    do
    *(v7 - 2) = 0;
    *(v7 - 1) = 0;
    *v7 = 0;
    v7 += 3;
    --v8;
    while ( v8 );
    v5 = v6;
    else
    v5 = 0;
    *((uint8_t *)this + 12) = 1;
    if ( v5 )
    if ( *((uint32_t *)this + 1) )
    v12 = *((uint32_t *)this + 2);
    if ( a2 < v12 )
    v12 = a2;
    if ( v12 > 0 )
    v13 = 0;
    do
    v14 = *((uint32_t *)this + 1) + v13;
    v15 = &v5[v13];
    v13 += 3;
    --v12;
    *(_WORD *)v15 = *(_WORD *)v14;
    v15[2] = *(uint8_t *)(v14 + 2);
    while ( v12 );
    v3 = a2;
    if ( *((uint8_t *)this + 13) )
    __3_YAXPAX_Z(*((void **)this + 1));
    *((uint32_t *)this + 1) = 0;
    *((uint32_t *)this + 1) = v5;
    *((uint32_t *)this + 2) = v3;
    *((uint8_t *)this + 13) = a3 == 0;
    return 1;
    else
    return 0;
    else
    (*(void (__thiscall **)(void *))(*(uint32_t *)this + 12))(this);
    return 1;
}

void  FilePipe_38_::_vt03(int this)
{
    if ( *(uint32_t *)(this + 4) && *(uint8_t *)(this + 13) )
    __3_YAXPAX_Z(*(void **)(this + 4));
    *(uint32_t *)(this + 4) = 0;
    *(uint8_t *)(this + 13) = 0;
    *(uint32_t *)(this + 8) = 0;
}

int  FilePipe_38_::_vt04(int this, uint8_t *a2)
{
    int result; // eax
    int v3; // esi
    uint8_t *i; // ecx
    if ( !*(uint8_t *)(this + 12) )
    return 0;
    v3 = *(uint32_t *)(this + 8);
    result = 0;
    if ( v3 <= 0 )
    return -1;
    for ( i = *(uint8_t **)(this + 4); *i != *a2 || i[1] != a2[1] || i[2] != a2[2]; i += 3 )
    if ( ++result >= v3 )
    return -1;
    return result;
}

unsigned int  FilePipe_38_::_vt05(int this, int a2)
{
    if ( *(uint8_t *)(this + 12) )
    return (a2 - *(uint32_t *)(this + 4)) / 3u;
    else
    return 0;
}

uint32_t * FilePipe_38_::_vt00(uint32_t *Block, char a2)
{
    void *v3; // eax
    v3 = (void *)*(Block + 1);
    *Block = &VectorClass<RGBClass>::`vftable';
    if ( v3 && *((uint8_t *)Block + 13) )
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
    *((uint8_t *)Block + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

