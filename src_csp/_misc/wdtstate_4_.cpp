#include "wdtstate_4_.hpp"

int  WDTState_4_::_vt03(int this)
{
    int (__thiscall ***v2)(uint32_t, int); // ecx
    int result; // eax
    v2 = *(int (__thiscall ****)(uint32_t, int))(this + 4);
    *(uint32_t *)(this + 16) = 0;
    if ( v2 && *(uint8_t *)(this + 13) )
    result = (**v2)(v2, 3);
    *(uint32_t *)(this + 4) = 0;
    *(uint8_t *)(this + 13) = 0;
    *(uint32_t *)(this + 8) = 0;
    return result;
}

unsigned int  WDTState_4_::_vt05(int this, int a2)
{
    if ( *(uint8_t *)(this + 12) )
    return (unsigned int)(a2 - *(uint32_t *)(this + 4)) >> 3;
    else
    return 0;
}

char  WDTState_4_::_vt02(uint8_t *this, int a2, uint32_t *a3)
{
    int v3; // ebp
    uint32_t *v5; // eax
    uint32_t *v6; // ebx
    uint32_t *v7; // esi
    uint32_t *v8; // esi
    int v9; // ebx
    int i; // esi
    void (__thiscall ***v11)(uint32_t, int); // ecx
    int v12; // eax
    int v14; // [esp+10h] [ebp-4h]
    v3 = a2;
    if ( a2 )
    *(this + 12) = 0;
    if ( a3 )
    *a3 = a2;
    v8 = a3 + 1;
    if ( a2 - 1 >= 0 )
    v9 = a2;
    do
    ComPtr::Constructor(v8);
    *v8 = &rc_ptr<WDTTerritory>::`vftable';
    v8 += 2;
    --v9;
    while ( v9 );
    v8 = a3 + 1;
    v6 = v8;
    else
    v5 = __2_YAPAXI_Z(8 * a2 + 4);
    if ( v5 )
    *v5 = a2;
    v6 = v5 + 1;
    v7 = v5 + 1;
    if ( a2 - 1 >= 0 )
    v14 = a2;
    do
    WDTState_4_::Constructor(v7);
    v7 += 2;
    --v14;
    while ( v14 );
    else
    v6 = 0;
    *(this + 12) = 1;
    if ( !v6 )
    return 0;
    if ( *((uint32_t *)this + 1) )
    if ( a2 >= *((uint32_t *)this + 2) )
    v3 = *((uint32_t *)this + 2);
    for ( i = 0; i < v3; ++i )
    ComPtr::Set(&v6[2 * i], *(uint32_t *)(*((uint32_t *)this + 1) + 8 * i + 4));
    if ( *(this + 13) )
    v11 = (void (__thiscall ***)(uint32_t, int))*((uint32_t *)this + 1);
    if ( v11 )
    (**v11)(v11, 3);
    *((uint32_t *)this + 1) = 0;
    v3 = a2;
    *((uint32_t *)this + 1) = v6;
    *((uint32_t *)this + 2) = v3;
    *(this + 13) = a3 == 0;
    else
    (*(void (__thiscall **)(uint8_t *))(*(uint32_t *)this + 12))(this);
    v12 = *((uint32_t *)this + 2);
    if ( v12 < *((uint32_t *)this + 4) )
    *((uint32_t *)this + 4) = v12;
    return 1;
}

int  WDTState_4_::_vt04(int *this, int a2)
{
    int v2; // edx
    int result; // eax
    uint32_t *i; // ecx
    v2 = *(this + 4);
    result = 0;
    if ( v2 <= 0 )
    return -1;
    for ( i = (uint32_t *)(*(this + 1) + 4); *i != *(uint32_t *)(a2 + 4); i += 2 )
    if ( ++result >= v2 )
    return -1;
    return result;
}

uint32_t * WDTState_4_::_vt00(uint32_t *Block, char a2)
{
    void (__thiscall ***v3)(uint32_t, int); // ecx
    v3 = (void (__thiscall ***)(uint32_t, int))*(Block + 1);
    *Block = &VectorClass<rc_ptr<WDTTerritory>>::`vftable';
    if ( v3 && *((uint8_t *)Block + 13) )
    (**v3)(v3, 3);
    *(Block + 1) = 0;
    *((uint8_t *)Block + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

