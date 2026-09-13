// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/CampaignProperties_WorldDominationTour_22_e4.hpp"

// 0x5D2770
namespace gamemd {
int CampaignProperties_WorldDominationTour_22::Seek(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall CampaignProperties_WorldDominationTour_22_::_vt06(_DWORD *this, int a2)
{
  return *(_DWORD *)(*(this + 1) + 4 * a2); /*0x5d277a*/
}
}
} // namespace gamemd

// 0x5D2900
namespace gamemd {
int CampaignProperties_WorldDominationTour_22::Read(unsigned int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall CampaignProperties_WorldDominationTour_22_::_vt04(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !(unsigned char)this->CampaignProperties_WorldDominationTour_22_field_0xC ) /*0x5d2900*/
    return 0; /*0x5d2908*/
  v3 = this->CampaignProperties_WorldDominationTour_22_field_0x8; /*0x5d290e*/
  result = 0; /*0x5d2911*/
  if ( v3 <= 0 ) /*0x5d2915*/
    return -1; /*0x5d292c*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2; ++i ) /*0x5d291b*/
  {
    if ( ++result >= v3 ) /*0x5d292a*/
      return -1; /*0x5d292a*/
  }
  return result; /*0x5d290a*/
}
}
} // namespace gamemd

// 0x5D2940
namespace gamemd {
unsigned int CampaignProperties_WorldDominationTour_22::Write(int a2)
{
{
    if ( (unsigned char)this->CampaignProperties_WorldDominationTour_22_field_0xC )
    return (unsigned int)(a2 - this->CampaignProperties_WorldDominationTour_22_field_0x4) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x5D2CA0
namespace gamemd {
VectorClass * CampaignProperties_WorldDominationTour_22::QueryInterface(char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
VectorClass *__thiscall CampaignProperties_WorldDominationTour_22_::QueryInterface(_DWORD *this, char a2)
{
  void *v3; // eax

  v3 = (void *)*(this + 1); /*0x5d2ca3*/
  *this = &vt_VectorClass_MSAnim; /*0x5d2ca6*/
  if ( v3 && *((_BYTE *)this + 13) ) /*0x5d2cb0*/
  {
    __3_YAXPAX_Z(v3); /*0x5d2cb8*/
    *(this + 1) = 0; /*0x5d2cc0*/
  }
  *((_BYTE *)this + 13) = 0; /*0x5d2ccb*/
  *(this + 2) = 0; /*0x5d2cd1*/
  if ( (a2 & 1) != 0 ) /*0x5d2cd8*/
    __3_YAXPAX_Z(this); /*0x5d2cdb*/
  return (VectorClass *)this; /*0x5d2ce5*/
}
}
} // namespace gamemd

// 0x76F0F0
namespace gamemd {
BOOL CampaignProperties_WorldDominationTour_22::AddRef()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
BOOL __thiscall CampaignProperties_WorldDominationTour_22_::_vt01(_DWORD *this)
{
  return *(this + 2) < *(_DWORD *)(*(this + 1) + 16); /*0x76f0fd*/
}
}
} // namespace gamemd

// 0x76F1A0
namespace gamemd {
unsigned int * CampaignProperties_WorldDominationTour_22::Release()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall CampaignProperties_WorldDominationTour_22_::_vt02(_DWORD *this)
{
  ++*(this + 2); /*0x76f1a2*/
  return this; /*0x76f1a5*/
}
}
} // namespace gamemd

// 0x76F1B0
namespace gamemd {
unsigned int * CampaignProperties_WorldDominationTour_22::ddtor()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall CampaignProperties_WorldDominationTour_22_::_vt03(_DWORD *this)
{
  --*(this + 2); /*0x76f1b2*/
  return this; /*0x76f1b5*/
}
}
} // namespace gamemd
