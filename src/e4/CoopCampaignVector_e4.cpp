// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/CoopCampaignVector_e4.hpp"
#include "e4/classes/MultiplayerGameMode_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/ConvertClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"

// 0x5C5750
namespace gamemd {
unsigned int CoopCampaignVector::Write(int a2)
{
  if ( this->q00C ) /*0x5c5750*/
    return (unsigned int)(a2 - *(unsigned int *)&this->q004) >> 2; /*0x5c5765*/
  else
    return 0; /*0x5c5757*/
}
} // namespace gamemd
// 0x5C5940
namespace gamemd {
VectorClass_flat * CoopCampaignVector::QueryInterface(char a2)
{
  void *v3; // eax

  v3 = (unsigned int)(*(void **)&this-((unsigned int *)(>m_1))[3]);
  *(unsigned int *)this->__pad_0 = (void*)&VectorClass_CoopCampaignClass___vftable; /*0x5c5946*/
  if ( v3 && this->IsAllocated ) /*0x5c5950*/
  {
    RA2_OPDEL(v3); /*0x5c5958*/
    *(unsigned int *)&this->q004 = 0; /*0x5c5960*/
  }
  this->IsAllocated = (gamemd::VectorClass_flat *)(0);
  *(unsigned short *)&this->q008 = 0; /*0x5c5971*/
  if ( (a2 & 1) != 0 ) /*0x5c5978*/
    RA2_OPDEL(); /*0x5c597b*/
  return this; /*0x5c5985*/
}
} // namespace gamemd
// 0x5C5A80
namespace gamemd {
void CoopCampaignVector::Construct(void* a1)
{
  this->CoopCampaignVector_field_0x04 = (unsigned int)(0);
  this->CoopCampaignVector_field_0x08 = (unsigned int)(aP1);
  IDA_LOBYTE(this->CoopCampaignVector_field_0x0C) = 1; /*0x5c5a91*/
  IDA_BYTE1(this->CoopCampaignVector_field_0x0C) = 0; /*0x5c5a95*/
  *(unsigned int *)this->__pad_0 = (void*)&VectorClass_CoopCampaignClass___vftable; /*0x5c5a98*/
  if ( aP1 ) /*0x5c5a9e*/
  {
    if ( aP2 ) /*0x5c5aa6*/
    {
      this->CoopCampaignVector_field_0x04 = (unsigned int *)(aP2);
      return (unsigned int *)(this->__pad_0);
    }
    this->CoopCampaignVector_field_0x04 = RA2_OPNEW(4 * aP1); /*0x5c5abd*/
    IDA_BYTE1(this->CoopCampaignVector_field_0x0C) = 1; /*0x5c5ac0*/
  }
  return (unsigned int *)(this->__pad_0);
}
} // namespace gamemd