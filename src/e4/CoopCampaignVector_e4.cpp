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
  if ( (*((unsigned char *)&(*&this->m_C))) ) /*0x5c5750*/
    return (unsigned int)(a2 - *&this->q004) >> 2; /*0x5c5765*/
  else
    return 0; /*0x5c5757*/
}  // G42.18 ns repair
} // namespace gamemd
// 0x5C5940
namespace gamemd {
VectorClass_flat * CoopCampaignVector::QueryInterface(unsigned int * Block, char a2)
{
  void *v3; // eax

  v3 = *&Block->__pad_004; /*0x5c5943*/
  *(unsigned int *)Block->tail_0 = &vt_VectorClass; /*0x5c5946*/
  if ( v3 && (((unsigned char *)&(*&Block->u32_D))[1]) ) /*0x5c5950*/
  {
    operator delete((void *)(v3)); /*0x5c5958*/
    *&Block->__pad_004 = 0; /*0x5c5960*/
  }
  (((unsigned char *)&(*&Block->u32_C))[1]) = 0; /*0x5c596b*/
  *&Block->u32_8 = 0; /*0x5c5971*/
  if ( (a2 & 1) != 0 ) /*0x5c5978*/
    operator delete((void *)(Block)); /*0x5c597b*/
  return Block->tail_0; /*0x5c5985*/
}
} // namespace gamemd
// 0x5C5A80
namespace gamemd {
unsigned int * CoopCampaignVector::Construct(int aP1, int aP2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8, void *a9)
{

  this->q004 = 0; /*0x5c5a8b*/
  this->q008 = aP1; /*0x5c5a8e*/
  LOBYTE(this->m_C) = 1; /*0x5c5a91*/
  BYTE1(this->m_C) = 0; /*0x5c5a95*/
  *(unsigned int *)this->__pad_000 = (unsigned int)(&vt_VectorClass); /*0x5c5a98*/
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