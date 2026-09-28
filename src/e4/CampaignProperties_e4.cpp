// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/CampaignProperties_WorldDominationTour_22_e4.hpp"
#include "e4/classes/AbstractTypeClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"

// 0x5D2770
namespace gamemd {
int CampaignProperties_WorldDominationTour_22::Seek(int a2)
{
  return *(unsigned int *)(this->q004 + 4 * a2); /*0x5d277a*/
}
} // namespace gamemd

// 0x5D2900
namespace gamemd {
int CampaignProperties_WorldDominationTour_22::Read(unsigned int * a2)
{
  int result; // eax
  int v3; // edx
  unsigned int *i; // ecx

  if ( !this->q00C ) /*0x5d2900*/
    return 0; /*0x5d2908*/
  v3 = this->q008; /*0x5d290e*/
  result = 0; /*0x5d2911*/
  if ( v3 <= 0 ) /*0x5d2915*/
    return -1; /*0x5d292c*/
  for ( i = this->q004; *i != *a2; ++i ) /*0x5d291b*/
  {
    if ( ++result >= v3 ) /*0x5d292a*/
      return -1; /*0x5d292a*/
  }
  return result; /*0x5d290a*/
}
} // namespace gamemd

// 0x5D2940
namespace gamemd {
unsigned int CampaignProperties_WorldDominationTour_22::Write(int a2)
{
  if ( this->q00C ) /*0x5d2940*/
    return (unsigned int)(a2 - this->q004) >> 2; /*0x5d2955*/
  else
    return 0; /*0x5d2947*/
}
} // namespace gamemd

// 0x5D2CA0
namespace gamemd {
VectorClass_flat * CampaignProperties_WorldDominationTour_22::QueryInterface(char a2)
{
  void *v3; // eax

  v3 = (void *)this->q004; /*0x5d2ca3*/
  *(void **)this = (void*)&VectorClass_MSAnim___vftable; /*0x5d2ca6*/
  if ( v3 && this->IsAllocated ) /*0x5d2cb0*/
  {
    RA2_OPDEL(v3); /*0x5d2cb8*/
    this->q004 = 0; /*0x5d2cc0*/
  }
  this->IsAllocated = (gamemd::VectorClass_flat *)(0);
  this->q008 = (int)((gamemd::VectorClass_flat *)(0));
  if ( (a2 & 1) != 0 ) /*0x5d2cd8*/
    RA2_OPDEL(this); /*0x5d2cdb*/
  return this; /*0x5d2ce5*/
}
} // namespace gamemd

// 0x76F0F0
namespace gamemd {
BOOL CampaignProperties_WorldDominationTour_22::AddRef()
{
  return this->q008 < *(unsigned int *)(this->q004 + 16); /*0x76f0fd*/
}
} // namespace gamemd

// 0x76F1A0
namespace gamemd {
unsigned int * CampaignProperties_WorldDominationTour_22::Release()
{
  ++this->q008; /*0x76f1a2*/
  return this; /*0x76f1a5*/
}
} // namespace gamemd

// 0x76F1B0
namespace gamemd {
unsigned int * CampaignProperties_WorldDominationTour_22::ddtor()
{
  --this->q008; /*0x76f1b2*/
  return this; /*0x76f1b5*/
}
} // namespace gamemd
