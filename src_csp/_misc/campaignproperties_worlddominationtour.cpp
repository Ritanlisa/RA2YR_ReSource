#include "campaignproperties_worlddominationtour.hpp"

void ** CampaignProperties_WorldDominationTour::_vt00(void **Block, char a2)
{
    *Block = &WorldDominationTour::CampaignProperties::`vftable';
    DeleteAndZero::Alt(Block + 5);
    DeleteAndZero::Alt(Block + 4);
    *(Block + 2) = &rc_ptr<WDTState>::`vftable';
    ComPtr::Release(Block + 2);
    ReferenceCounted::Constructor(Block);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

