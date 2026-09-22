// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/CampaignProperties_WorldDominationTour_22_e4.hpp"

// 0x5D2770
namespace gamemd {
int CampaignProperties_WorldDominationTour_22::Seek(int a2)
{
{
    return *(int *)(this->Items + 4 * a2);
}
}
} // namespace gamemd

// 0x5D2900
namespace gamemd {
int CampaignProperties_WorldDominationTour_22::Read(unsigned int * a2)
{
{
    int result;
    int v3;
    int *i;
    if ( !(unsigned char)this->CampaignProperties_WorldDominationTour_22_field_0xC )
    return 0;
    v3 = this->CampaignProperties_WorldDominationTour_22_field_0x8;
    result = 0;
    if ( v3 <= 0 )
    return -1;
    for ( i = *(int **)(this + 4); *i != *a2; ++i )
  {
    if ( ++result >= v3 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x5D2940
namespace gamemd {
unsigned int CampaignProperties_WorldDominationTour_22::Write(int a2)
{
{
    if ( (unsigned char)this->CampaignProperties_WorldDominationTour_22_field_0xC )
    return (unsigned int)(a2 - this->CampaignProperties_WorldDominationTour_22_field_0x4) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x5D2CA0
namespace gamemd {
VectorClass * CampaignProperties_WorldDominationTour_22::QueryInterface(char a2)
{
{
    void *v3;
    v3 = (void *)this->Items;
    *(void**)this = &vt_VectorClass_MSAnim;
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
} // namespace gamemd

// 0x76F0F0
namespace gamemd {
BOOL CampaignProperties_WorldDominationTour_22::AddRef()
{
{
    return this->Capacity < *(int *)(this->Items + 16);
}
}
} // namespace gamemd

// 0x76F1A0
namespace gamemd {
unsigned int * CampaignProperties_WorldDominationTour_22::Release()
{
{
    ++this->Capacity;
    return this;
}
}
} // namespace gamemd

// 0x76F1B0
namespace gamemd {
unsigned int * CampaignProperties_WorldDominationTour_22::ddtor()
{
{
    --this->Capacity;
    return this;
}
}
} // namespace gamemd
