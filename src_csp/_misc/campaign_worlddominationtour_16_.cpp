#include "campaign_worlddominationtour_16_.hpp"

uint32_t * Campaign_WorldDominationTour_16_::_vt06(uint32_t *this, uint32_t *a2, int a3)
{
    int v3; // edi
    v3 = *(this + 1) + 8 * a3;
    ComPtr::Constructor(a2);
    *a2 = &rc_ptr<WorldDominationTour::Conflict>::`vftable';
    ComPtr::Set(a2, *(uint32_t *)(v3 + 4));
    return a2;
}

uint32_t * Campaign_WorldDominationTour_16_::sub_765710(uint32_t *Block, char a2)
{
    *Block = &rc_ptr<WorldDominationTour::CampaignProperties>::`vftable';
    ComPtr::Release(Block);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

uint32_t * Campaign_WorldDominationTour_16_::sub_765740(uint32_t *Block, char a2)
{
    *Block = &rc_ptr<WorldDominationTour::History>::`vftable';
    ComPtr::Release(Block);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

char  Campaign_WorldDominationTour_16_::_vt01(int *this, int a2)
{
    int v2; // esi
    int v3; // edx
    uint32_t *v4; // ecx
    uint32_t *i; // eax
    v2 = *(this + 2);
    if ( v2 == *(uint32_t *)(a2 + 8) )
    v3 = 0;
    if ( v2 <= 0 )
    return 1;
    v4 = (uint32_t *)(*(this + 1) + 4);
    for ( i = (uint32_t *)(*(uint32_t *)(a2 + 4) + 4); *v4 == *i; i += 2 )
    ++v3;
    v4 += 2;
    if ( v3 >= v2 )
    return 1;
    return 0;
}

char  Campaign_WorldDominationTour_16_::_vt02(uint8_t *this, int a2, uint32_t *a3)
{
    int v3; // ebp
    uint32_t *v5; // eax
    uint32_t *v6; // esi
    int v7; // ebx
    uint32_t *v8; // ebx
    int v9; // ebx
    int i; // esi
    void (__thiscall ***v12)(uint32_t, int); // ecx
    uint32_t *v13; // [esp+10h] [ebp-4h]
    v3 = a2;
    if ( !a2 )
    (*(void (__thiscall **)(uint8_t *))(*(uint32_t *)this + 12))(this);
    return 1;
    *(this + 12) = 0;
    if ( a3 )
    *a3 = a2;
    v6 = a3 + 1;
    if ( a2 - 1 >= 0 )
    v9 = a2;
    do
    ComPtr::Constructor(v6);
    *v6 = &rc_ptr<WorldDominationTour::Conflict>::`vftable';
    v6 += 2;
    --v9;
    while ( v9 );
    v6 = a3 + 1;
    else
    v5 = __2_YAPAXI_Z(8 * a2 + 4);
    if ( !v5 )
    v8 = 0;
    goto LABEL_14;
    *v5 = a2;
    v6 = v5 + 1;
    v13 = v5 + 1;
    if ( a2 - 1 >= 0 )
    v7 = a2;
    do
    ComPtr::Constructor(v6);
    *v6 = &rc_ptr<WorldDominationTour::Conflict>::`vftable';
    v6 += 2;
    --v7;
    while ( v7 );
    v6 = v13;
    v8 = v6;
    LABEL_14:
    *(this + 12) = 1;
    if ( !v8 )
    return 0;
    if ( *((uint32_t *)this + 1) )
    if ( a2 >= *((uint32_t *)this + 2) )
    v3 = *((uint32_t *)this + 2);
    for ( i = 0; i < v3; ++i )
    ComPtr::Set(&v8[2 * i], *(uint32_t *)(*((uint32_t *)this + 1) + 8 * i + 4));
    if ( *(this + 13) )
    v12 = (void (__thiscall ***)(uint32_t, int))*((uint32_t *)this + 1);
    if ( v12 )
    (**v12)(v12, 3);
    *((uint32_t *)this + 1) = 0;
    v3 = a2;
    *((uint32_t *)this + 1) = v8;
    *((uint32_t *)this + 2) = v3;
    *(this + 13) = a3 == 0;
    return 1;
}

int  Campaign_WorldDominationTour_16_::_vt03(int this)
{
    int (__thiscall ***v2)(uint32_t, int); // ecx
    int result; // eax
    v2 = *(int (__thiscall ****)(uint32_t, int))(this + 4);
    if ( v2 && *(uint8_t *)(this + 13) )
    result = (**v2)(v2, 3);
    *(uint32_t *)(this + 4) = 0;
    *(uint8_t *)(this + 13) = 0;
    *(uint32_t *)(this + 8) = 0;
    return result;
}

int  Campaign_WorldDominationTour_16_::_vt04(int this, int a2)
{
    int result; // eax
    int v3; // edx
    uint32_t *i; // ecx
    if ( !*(uint8_t *)(this + 12) )
    return 0;
    v3 = *(uint32_t *)(this + 8);
    result = 0;
    if ( v3 <= 0 )
    return -1;
    for ( i = (uint32_t *)(*(uint32_t *)(this + 4) + 4); *i != *(uint32_t *)(a2 + 4); i += 2 )
    if ( ++result >= v3 )
    return -1;
    return result;
}

unsigned int  Campaign_WorldDominationTour_16_::_vt05(int this, int a2)
{
    if ( *(uint8_t *)(this + 12) )
    return (unsigned int)(a2 - *(uint32_t *)(this + 4)) >> 3;
    else
    return 0;
}

uint32_t * Campaign_WorldDominationTour_16_::_vt00(uint32_t *Block, char a2)
{
    void (__thiscall ***v3)(uint32_t, int); // ecx
    v3 = (void (__thiscall ***)(uint32_t, int))*(Block + 1);
    *Block = &VectorClass<rc_ptr<WorldDominationTour::Conflict>>::`vftable';
    if ( v3 && *((uint8_t *)Block + 13) )
    (**v3)(v3, 3);
    *(Block + 1) = 0;
    *((uint8_t *)Block + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

