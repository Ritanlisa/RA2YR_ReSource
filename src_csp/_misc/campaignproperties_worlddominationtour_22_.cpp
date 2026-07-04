#include "campaignproperties_worlddominationtour_22_.hpp"

int  CampaignProperties_WorldDominationTour_22_::_vt06(uint32_t *this, int a2)
{
    return *(uint32_t *)(*(this + 1) + 4 * a2);
}

int  CampaignProperties_WorldDominationTour_22_::_vt04(int this, uint32_t *a2)
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
    for ( i = *(uint32_t **)(this + 4); *i != *a2; ++i )
    if ( ++result >= v3 )
    return -1;
    return result;
}

unsigned int  CampaignProperties_WorldDominationTour_22_::_vt05(int this, int a2)
{
    if ( *(uint8_t *)(this + 12) )
    return (unsigned int)(a2 - *(uint32_t *)(this + 4)) >> 2;
    else
    return 0;
}

uint32_t * CampaignProperties_WorldDominationTour_22_::_vt00(uint32_t *Block, char a2)
{
    void *v3; // eax
    v3 = (void *)*(Block + 1);
    *Block = &VectorClass<MSAnim *>::`vftable';
    if ( v3 && *((uint8_t *)Block + 13) )
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
    *((uint8_t *)Block + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

uint32_t * CampaignProperties_WorldDominationTour_22_::_vt02(uint32_t *this)
{
    ++*(this + 2);
    return this;
}

uint32_t * CampaignProperties_WorldDominationTour_22_::_vt03(uint32_t *this)
{
    --*(this + 2);
    return this;
}

