// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/CampaignProperties_WorldDominationTour_22_e4.hpp"
#include "e4/classes/AbstractTypeClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/VectorClass_flat_e4.hpp"  // G42.36 C2027 supply

// 0x5D2770
namespace gamemd {
int CampaignProperties_WorldDominationTour_22::Seek(int a2, void *a2_2, void *a3_1)
{

  return *(unsigned int *)(*(unsigned int *)&this->m_1[3] + 4 * a2); /*0x5d277a*/

}
} // namespace gamemd

// 0x5D2900
namespace gamemd {
int CampaignProperties_WorldDominationTour_22::Read(unsigned int * a2, void *a2_2)
{

  int result; // eax
  int m_8; // edx
  unsigned int *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x5d2900*/
    return 0; /*0x5d2908*/
  m_8 = this->m_8; /*0x5d290e*/
  result = 0; /*0x5d2911*/
  if ( m_8 <= 0 ) /*0x5d2915*/
    return -1; /*0x5d292c*/
  for ( i = *(unsigned int **)&this->m_1[3]; *i != *a2; ++i ) /*0x5d291b*/
  {
    if ( ++result >= m_8 ) /*0x5d292a*/
      return -1; /*0x5d292a*/
  }
  return result; /*0x5d290a*/

}
} // namespace gamemd

// 0x5D2940
namespace gamemd {
unsigned int CampaignProperties_WorldDominationTour_22::Write(int a2)
{

  if ( LOBYTE(this->m_C) ) /*0x5d2940*/
    return (unsigned int)(a2 - *(unsigned int *)&this->m_1[3]) >> 2; /*0x5d2955*/
  else
    return 0; /*0x5d2947*/

}
} // namespace gamemd

// 0x5D2CA0
namespace gamemd {
VectorClass_flat * CampaignProperties_WorldDominationTour_22::QueryInterface(unsigned int * Block, char a2)
{

  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x5d2ca3*/
  *(unsigned int *)this->__pad_0 = (unsigned int)&vt_VectorClass; /*0x5d2ca6*/
  if ( v3 && BYTE1(this->m_C) ) /*0x5d2cb0*/
  {
    __3_YAXPAX_Z(v3); /*0x5d2cb8*/
    *(unsigned int *)&this->m_1[3] = 0; /*0x5d2cc0*/
  }
  BYTE1(this->m_C) = 0; /*0x5d2ccb*/
  this->m_8 = 0; /*0x5d2cd1*/
  if ( (a2 & 1) != 0 ) /*0x5d2cd8*/
    __3_YAXPAX_Z(this); /*0x5d2cdb*/
  return (gamemd::VectorClass_flat *)(this->__pad_0); /*0x5d2ce5*/

}
} // namespace gamemd

// 0x76F0F0
namespace gamemd {
int CampaignProperties_WorldDominationTour_22::AddRef(void *a1_1)
{

  return this->q008 < *(unsigned int *)(*(unsigned int *)&this->m_1[3] + 16); /*0x76f0fd*/

}
} // namespace gamemd

// 0x76F1A0
namespace gamemd {
int CampaignProperties_WorldDominationTour_22::Release(void *a1_1)
{

  ++this->q008; /*0x76f1a2*/
  return (int)(this->__pad_0); /*0x76f1a5*/

}
} // namespace gamemd

// 0x76F1B0
namespace gamemd {
int CampaignProperties_WorldDominationTour_22::ddtor()
{

  --this->q008; /*0x76f1b2*/
  return (int)(this->__pad_0); /*0x76f1b5*/

}
} // namespace gamemd
