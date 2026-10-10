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
namespace gamemd {  // G42.18 ns repair
unsigned int CoopCampaignVector::Write(int a2)
{
  if ( (*((unsigned char *)&(*(unsigned int *)&this->q00C))) ) /*0x5c5750*/
    return (unsigned int)(a2 - *(unsigned int *)&this->q004) >> 2; /*0x5c5765*/
  else
    return 0; /*0x5c5757*/
}  // G42.18 ns repair
} // namespace gamemd
// 0x5C5940
namespace gamemd {
VectorClass_flat * CoopCampaignVector::QueryInterface(unsigned int * Block, char a2)
{
  void *v3; // eax

  v3 = *(void **)&Block->q004; /*0x5c5943*/
  *(unsigned int *)Block->__pad_0 = &vt_VectorClass; /*0x5c5946*/
  if ( v3 && (((unsigned char *)&(*(unsigned int *)&Block->IsAllocated))[1]) ) /*0x5c5950*/
  {
    operator delete((void *)(v3)); /*0x5c5958*/
    *(unsigned int *)&Block->q004 = 0; /*0x5c5960*/
  }
  (((unsigned char *)&(*(unsigned int *)&Block->q00C))[1]) = 0; /*0x5c596b*/
  *(unsigned int *)&Block->q008 = 0; /*0x5c5971*/
  if ( (a2 & 1) != 0 ) /*0x5c5978*/
    operator delete((void *)(Block)); /*0x5c597b*/
  return Block->__pad_0; /*0x5c5985*/
}
} // namespace gamemd
// 0x5C5A80
namespace gamemd {
unsigned int * CoopCampaignVector::Construct(int aP1, int aP2)
{

  this->CoopCampaignVector_field_0x04 = 0; /*0x5c5a8b*/
  this->CoopCampaignVector_field_0x08 = aP1; /*0x5c5a8e*/
  LOBYTE(this->CoopCampaignVector_field_0x0C) = 1; /*0x5c5a91*/
  BYTE1(this->CoopCampaignVector_field_0x0C) = 0; /*0x5c5a95*/
  *(unsigned int *)this->__pad_0 = &VectorClass<CoopCampaignClass *>::`vftable'; /*0x5c5a98*/
  if ( aP1 ) /*0x5c5a9e*/
  {
    if ( aP2 ) /*0x5c5aa6*/
    {
      this->CoopCampaignVector_field_0x04 = aP2; /*0x5c5aa8*/
      return this->__pad_0; /*0x5c5aae*/
    }
    this->CoopCampaignVector_field_0x04 = __2_YAPAXI_Z(4 * aP1); /*0x5c5abd*/
    BYTE1(this->CoopCampaignVector_field_0x0C) = 1; /*0x5c5ac0*/
  }
  return this->__pad_0; /*0x5c5aad*/

}
} // namespace gamemd