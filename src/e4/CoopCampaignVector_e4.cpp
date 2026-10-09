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
  if ( IDA_LOBYTE(this->m_C) ) /*0x5c5750*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x5c5765*/
  else
    return 0; /*0x5c5757*/
}
} // namespace gamemd
// 0x5C5940
namespace gamemd {
VectorClass_flat * CoopCampaignVector::QueryInterface(unsigned int * Block, char a2)
{
  void *v3; // eax

  v3 = *(void **)&Block->m_1[3]; /*0x5c5943*/
  *(_DWORD *)Block->__pad_0 = &(void*)(void*)&VectorClass_CoopCampaignClass___vftable; /*0x5c5946*/
  if ( v3 && IDA_BYTE1(Block->m_C) ) /*0x5c5950*/
  {
    RA2_OPDEL(v3); /*0x5c5958*/
    *(_DWORD *)&Block->m_1[3] = 0; /*0x5c5960*/
  }
  IDA_BYTE1(Block->m_C) = 0; /*0x5c596b*/
  Block->m_8 = 0; /*0x5c5971*/
  if ( (a2 & 1) != 0 ) /*0x5c5978*/
    RA2_OPDEL(Block); /*0x5c597b*/
  return Block->__pad_0; /*0x5c5985*/
}
} // namespace gamemd
// 0x5C5A80
namespace gamemd {
_DWORD * CoopCampaignVector::Construct(int aP1, int aP2)
{
  this->CoopCampaignVector_field_0x04 = 0; /*0x5c5a8b*/
  this->CoopCampaignVector_field_0x08 = aP1; /*0x5c5a8e*/
  IDA_LOBYTE(this->CoopCampaignVector_field_0x0C) = 1; /*0x5c5a91*/
  IDA_BYTE1(this->CoopCampaignVector_field_0x0C) = 0; /*0x5c5a95*/
  *(_DWORD *)this->__pad_0 = &(void*)(void*)&VectorClass_CoopCampaignClass___vftable; /*0x5c5a98*/
  if ( aP1 ) /*0x5c5a9e*/
  {
    if ( aP2 ) /*0x5c5aa6*/
    {
      this->CoopCampaignVector_field_0x04 = aP2; /*0x5c5aa8*/
      return this->__pad_0; /*0x5c5aae*/
    }
    this->CoopCampaignVector_field_0x04 = RA2_OPNEW(4 * aP1); /*0x5c5abd*/
    IDA_BYTE1(this->CoopCampaignVector_field_0x0C) = 1; /*0x5c5ac0*/
  }
  return this->__pad_0; /*0x5c5aad*/
}
} // namespace gamemd