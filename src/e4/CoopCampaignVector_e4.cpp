// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x5C5750
unsigned int CoopCampaignVector::Write(int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x5c5750*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x5c5765*/
  else
    return 0; /*0x5c5757*/
}
// 0x5C5940
VectorClass * CoopCampaignVector::QueryInterface(char a2)
{
  void *v3; // eax

  v3 = (void *)*(this + 1); /*0x5c5943*/
  *this = &VectorClass<CoopCampaignClass *>::`vftable'; /*0x5c5946*/
  if ( v3 && *((_BYTE *)this + 13) ) /*0x5c5950*/
  {
    __3_YAXPAX_Z(v3); /*0x5c5958*/
    *(this + 1) = 0; /*0x5c5960*/
  }
  *((_BYTE *)this + 13) = 0; /*0x5c596b*/
  *(this + 2) = 0; /*0x5c5971*/
  if ( (a2 & 1) != 0 ) /*0x5c5978*/
    __3_YAXPAX_Z(this); /*0x5c597b*/
  return this; /*0x5c5985*/
}
// 0x5C5A80
unsigned int * CoopCampaignVector::Construct(MultiplayerGameMode * aP1, MultiplayerGameMode * aP2)
{
  *(this + 1) = 0; /*0x5c5a8b*/
  *(this + 2) = aP1; /*0x5c5a8e*/
  *((_BYTE *)this + 12) = 1; /*0x5c5a91*/
  *((_BYTE *)this + 13) = 0; /*0x5c5a95*/
  *this = &VectorClass<CoopCampaignClass *>::`vftable'; /*0x5c5a98*/
  if ( aP1 ) /*0x5c5a9e*/
  {
    if ( aP2 ) /*0x5c5aa6*/
    {
      *(this + 1) = aP2; /*0x5c5aa8*/
      return this; /*0x5c5aae*/
    }
    *(this + 1) = __2_YAPAXI_Z(4 * aP1); /*0x5c5abd*/
    *((_BYTE *)this + 13) = 1; /*0x5c5ac0*/
  }
  return this; /*0x5c5aad*/
}