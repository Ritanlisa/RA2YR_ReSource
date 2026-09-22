// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x5C5750
unsigned int CoopCampaignVector::Write(int a2)
{
{
    if ( (unsigned char)this->CoopCampaignVector_field_0x0C )
    return (unsigned int)(a2 - this->CoopCampaignVector_field_0x04) >> 2;
    else
    return 0;
}
}

// 0x5C5940
VectorClass * CoopCampaignVector::QueryInterface(char a2)
{
{
    void *v3;
    v3 = (void *)this->Items;
    *(void**)this = &vt_VectorClass_CoopCampaignClass;
    if ( v3 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v3);
    this->Items = 0;
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (VectorClass *)this;
}
}

// 0x5C5A80
unsigned int * CoopCampaignVector::Construct(MultiplayerGameMode * aP1, MultiplayerGameMode * aP2)
{
{
    this->Items = 0;
    this->Capacity = aP1;
    this->IsInitialized = 1;
    this->IsAllocated = 0;
    *(void**)this = &vt_VectorClass_CoopCampaignClass;
    if ( aP1 )
  {
    if ( aP2 )
    {
    this->Items = aP2;
    return this;
    }
    this->Items = __2_YAPAXI_Z(4 * (int)aP1);
    this->IsAllocated = 1;
  }
    return this;
}
}
