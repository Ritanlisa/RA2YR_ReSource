#include "campaign_worlddominationtour.hpp"

void ** Campaign_WorldDominationTour::_vt00(void **Block, char a2)
{
    void (__thiscall ***v3)(uint32_t, int); // ecx
    *Block = &WorldDominationTour::Campaign::`vftable';
    DeleteAndZero(Block + 18);
    v3 = (void (__thiscall ***)(uint32_t, int))*(Block + 7);
    *(Block + 6) = &VectorClass<rc_ptr<WorldDominationTour::Conflict>>::`vftable';
    if ( v3 && *((uint8_t *)Block + 37) )
    (**v3)(v3, 3);
    *(Block + 7) = 0;
    *((uint8_t *)Block + 37) = 0;
    *(Block + 8) = 0;
    *(Block + 4) = &rc_ptr<WorldDominationTour::History>::`vftable';
    ComPtr::Release(Block + 4);
    *(Block + 2) = &rc_ptr<WorldDominationTour::CampaignProperties>::`vftable';
    ComPtr::Release(Block + 2);
    ReferenceCounted::Constructor(Block);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

