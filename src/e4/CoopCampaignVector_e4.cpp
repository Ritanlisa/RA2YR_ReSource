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
    return (unsigned int)(a2 - this->q004) >> 2; /*0x5c5765*/
  else
    return 0; /*0x5c5757*/
}
} // namespace gamemd
// 0x5C5940
namespace gamemd {
VectorClass_flat * CoopCampaignVector::QueryInterface(char a2)
{
  void *v3; // eax

  v3 = (void *)this->q004; /*0x5c5943*/
  if ( v3 && this->IsAllocated ) /*0x5c5950*/
  {
    RA2_OPDEL(v3); /*0x5c5958*/
    this->q004 = 0; /*0x5c5960*/
  }
  this->IsAllocated = (gamemd::VectorClass_flat *)(0);
  this->q008 = 0; /*0x5c5971*/
  if ( (a2 & 1) != 0 ) /*0x5c5978*/
    RA2_OPDEL(); /*0x5c597b*/
  return this; /*0x5c5985*/
}
} // namespace gamemd
// 0x5C5A80
namespace gamemd {
unsigned int * CoopCampaignVector::Construct(MultiplayerGameMode * aP1, MultiplayerGameMode * aP2)
{
  this->q004 = (unsigned char)(0);
  this->q008 = aP1; /*0x5c5a8e*/
  this->q00C = 1; /*0x5c5a91*/
  this->IsAllocated = 0; /*0x5c5a95*/
  if ( aP1 ) /*0x5c5a9e*/
  {
    if ( aP2 ) /*0x5c5aa6*/
    {
      this->q004 = (unsigned int *)(aP2);
      return this; /*0x5c5aae*/
    }
    this->q004 = operator new(4 * aP1); /*0x5c5abd*/
    this->IsAllocated = 1; /*0x5c5ac0*/
  }
  return (unsigned int *)(this);
}
} // namespace gamemd