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

  if ( *((unsigned char *)this + 12) ) /*0x5c5750*/
    return (unsigned int)(a2 - *((unsigned int *)this + 1)) >> 2; /*0x5c5765*/
  else
    return 0; /*0x5c5757*/

}
} // namespace gamemd
// 0x5C5940
namespace gamemd {
VectorClass_flat * CoopCampaignVector::QueryInterface(unsigned int * Block, char a2)
{

  void *v3; // eax

  v3 = (void *)((unsigned int)((void *)*(Block + 1)));
  *Block = (unsigned int)(&vt_VectorClass_CoopCampaignClass);
  if ( v3 && *((unsigned char *)Block + 13) ) /*0x5c5950*/
  {
    __3_YAXPAX_Z(v3); /*0x5c5958*/
    *(Block + 1) = 0; /*0x5c5960*/
  }
  *((unsigned char *)Block + 13) = 0; /*0x5c596b*/
  *(Block + 2) = 0; /*0x5c5971*/
  if ( (a2 & 1) != 0 ) /*0x5c5978*/
    __3_YAXPAX_Z(Block); /*0x5c597b*/
  return (VectorClass *)Block; /*0x5c5985*/

}
} // namespace gamemd
// 0x5C5A80
namespace gamemd {
void CoopCampaignVector::Construct( MultiplayerGameMode * aP1, MultiplayerGameMode * aP2)
{

  *(this + 1) = 0; /*0x5c5a8b*/
  *(this + 2) = aP1; /*0x5c5a8e*/
  *((unsigned char *)this + 12) = 1; /*0x5c5a91*/
  *((unsigned char *)this + 13) = 0; /*0x5c5a95*/
  *this = &vt_VectorClass_CoopCampaignClass; /*0x5c5a98*/
  if ( aP1 ) /*0x5c5a9e*/
  {
    if ( aP2 ) /*0x5c5aa6*/
    {
      *(this + 1) = aP2; /*0x5c5aa8*/
      return this; /*0x5c5aae*/
    }
    *(this + 1) = RA2_OPNEW(4 * (unsigned int)aP1); /*0x5c5abd*/
    *((unsigned char *)this + 13) = 1; /*0x5c5ac0*/
  }
  return this; /*0x5c5aad*/

}
} // namespace gamemd