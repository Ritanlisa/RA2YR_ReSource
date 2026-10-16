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
namespace gamemd {  // G42.18 ns repair
int CampaignProperties_WorldDominationTour_22::Seek(int a2, void *a2_2, void *a3_1)
{
  return *(unsigned int *)(*&this->q004 + 4 * a2); /*0x5d277a*/
}  // G42.18 ns repair
} // namespace gamemd

// 0x5D2900
namespace gamemd {
int CampaignProperties_WorldDominationTour_22::Read(unsigned int * a2, void *a2_2, void *a3)
{

  if ( !(*((unsigned char *)&(a2_2->q00C))) ) /*0x5d2900*/
    return 0; /*0x5d2908*/
  int m_8 = a2_2->q008; // edx /*0x5d290e*/
  int result = 0; // eax /*0x5d2911*/
  if ( m_8 <= 0 ) /*0x5d2915*/
    return -1; /*0x5d292c*/
  unsigned int *i; // ecx
  for ( i = *(unsigned int **)&a2_2->q004; *i != *a2_2; ++i ) /*0x5d291b*/
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
  if ( (this->m_C) ) /*0x5d2940*/
    return (unsigned int)(a2 - *&this->q004) >> 2; /*0x5d2955*/
  else
    return 0; /*0x5d2947*/
}
} // namespace gamemd

// 0x5D2CA0
namespace gamemd {
VectorClass_flat * CampaignProperties_WorldDominationTour_22::QueryInterface(unsigned int * Block, char a2)
{

  void *v3 = *&Block->__pad_004; // eax /*0x5d2ca3*/
  *(unsigned int *)Block->tail_0 = &vt_VectorClass; /*0x5d2ca6*/
  if ( v3 && (((unsigned char *)&(*&Block->u32_D))[1]) ) /*0x5d2cb0*/
  {
    operator delete((void *)(v3)); /*0x5d2cb8*/
    *&Block->__pad_004 = 0; /*0x5d2cc0*/
  }
  (Block->u32_D) = 0; /*0x5d2ccb*/
  Block->u32_8 = 0; /*0x5d2cd1*/
  if ( (a2 & 1) != 0 ) /*0x5d2cd8*/
    operator delete((void *)(Block)); /*0x5d2cdb*/
  return Block->tail_0; /*0x5d2ce5*/
}
} // namespace gamemd

// 0x76F0F0
namespace gamemd {
int CampaignProperties_WorldDominationTour_22::AddRef(void *a1_1)
{

  return *((unsigned int *)a1_1 + 2) < *(unsigned int *)(*(unsigned int *)&a1_1->m_1[3] + 16); /*0x76f0fd*/

}
} // namespace gamemd

// 0x76F1A0
namespace gamemd {
int CampaignProperties_WorldDominationTour_22::Release(void *a1_1)
{
  ++*((unsigned int *)a1_1 + 2); /*0x76f1a2*/
  return a1_1->__pad_0; /*0x76f1a5*/
}
} // namespace gamemd

// 0x76F1B0
namespace gamemd {
int CampaignProperties_WorldDominationTour_22::ddtor(void *a1)
{

  --this->u32_8; /*0x76f1b2*/
  return this->__pad_000; /*0x76f1b5*/

}
} // namespace gamemd
