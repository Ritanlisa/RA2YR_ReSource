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

  if ( LOBYTE(this->m_C) ) /*0x5c5750*/
    return (unsigned int)(a2 - *(unsigned int *)&this->m_1[3]) >> 2; /*0x5c5765*/
  else
    return 0; /*0x5c5757*/

}
} // namespace gamemd
// 0x5C5940
namespace gamemd {
VectorClass_flat * CoopCampaignVector::QueryInterface(unsigned int * Block, char a2)
{

  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x5c5943*/
  *(unsigned int *)this->__pad_0 = (unsigned int)&vt_VectorClass;
  if ( v3 && BYTE1(this->m_C) ) /*0x5c5950*/
  {
    __3_YAXPAX_Z(v3); /*0x5c5958*/
    *(unsigned int *)&this->m_1[3] = 0; /*0x5c5960*/
  }
  BYTE1(this->m_C) = 0; /*0x5c596b*/
  this->m_8 = 0; /*0x5c5971*/
  if ( (a2 & 1) != 0 ) /*0x5c5978*/
    __3_YAXPAX_Z(this); /*0x5c597b*/
  return (gamemd::VectorClass_flat *)(this->__pad_0); /*0x5c5985*/

}
} // namespace gamemd
// 0x5C5A80
namespace gamemd {
_DWORD * CoopCampaignVector::Construct(int aP1, int aP2)
{

  this->CoopCampaignVector_field_0x04 = (unsigned int)(0);
  this->CoopCampaignVector_field_0x08 = (unsigned int)(aP1);
  LOBYTE(this->CoopCampaignVector_field_0x0C) = 1; /*0x5c5a91*/
  BYTE1(this->CoopCampaignVector_field_0x0C) = 0; /*0x5c5a95*/
  *(unsigned int *)this->__pad_0 = (unsigned int)(&vt_VectorClass); /*0x5c5a98*/
  if ( aP1 ) /*0x5c5a9e*/
  {
    if ( aP2 ) /*0x5c5aa6*/
    {
      this->CoopCampaignVector_field_0x04 = (unsigned int)(aP2);
      return this->__pad_0; /*0x5c5aae*/
    }
    this->CoopCampaignVector_field_0x04 =(unsigned int)__2_YAPAXI_Z(4 * aP1); /*0x5c5abd*/
    BYTE1(this->CoopCampaignVector_field_0x0C) = 1; /*0x5c5ac0*/
  }
  return this->__pad_0; /*0x5c5aad*/

}
} // namespace gamemd