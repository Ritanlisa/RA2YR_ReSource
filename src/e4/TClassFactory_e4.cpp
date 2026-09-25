// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/TClassFactory_CampaignClass_e4.hpp"
#include "e4/classes/TClassFactory_MechLocomotionClass_e4.hpp"
#include "e4/classes/CampaignClass_e4.hpp"
#include "e4/classes/TActionClass_e4.hpp"
#include "e4/classes/HouseClass_e4.hpp"
#include "e4/classes/AnimClass_e4.hpp"
#include "e4/classes/BuildingType_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/Radar_e4.hpp"

// 0x6C0260
namespace gamemd {
int TClassFactory_CampaignClass::GetClassName()
{
  LONG v1; // esi

  v1 = InterlockedDecrement(Block + 1); /*0x6c0270*/
  if ( !v1 ) /*0x6c0274*/
    RA2_OPDEL((void *)Block); /*0x6c0277*/
  return v1; /*0x6c0281*/
}
} // namespace gamemd
// 0x6C4D60
namespace gamemd {
int TClassFactory_MechLocomotionClass::GetClassName()
{
  LONG v1; // esi

  v1 = InterlockedDecrement(Block + 1); /*0x6c4d70*/
  if ( !v1 ) /*0x6c4d74*/
    RA2_OPDEL((void *, unsigned int a4, unsigned int a2, unsigned int a3)Block); /*0x6c4d77*/
  return v1; /*0x6c4d81*/
}
} // namespace gamemd
// 0x6C0290
namespace gamemd {
int TClassFactory_CampaignClass::ddtor()
{
  void *v5; // eax
  int (__stdcall ***v6)(_DWORD, int, _DWORD *); // eax
  int (__stdcall ***v7)(_DWORD, _DWORD, _DWORD *); // esi
  int v8; // edi

  if ( !a4 ) /*0x6c0298*/
    return -2147024809; /*0x6c029b*/
  *a4 = 0; /*0x6c02a8*/
  if ( a2 ) /*0x6c02b0*/
    return -2147221232; /*0x6c02b3*/
  v5 = RA2_OPNEW(0x3A0u); /*0x6c02c1*/
  if ( !v5 ) /*0x6c02cb*/
    return -2147024882; /*0x6c02cb*/
  v6 = (int (__stdcall ***)(_DWORD, int, _DWORD *))CampaignClass::CampaignClass((int)v5, 0); /*0x6c02d1*/
  v7 = v6; /*0x6c02d6*/
  if ( !v6 ) /*0x6c02da*/
    return -2147024882; /*0x6c02dd*/
  v8 = (**v6)(v6, a3, a4); /*0x6c02f1*/
  if ( v8 < 0 ) /*0x6c02f5*/
    ((void (__thiscall *, unsigned int a1, unsigned int a2)(int (__stdcall ***)(_DWORD, _DWORD, _DWORD *), int))(*v7)[8])(v7, 1); /*0x6c02fd*/
  return v8; /*0x6c029a*/
}
} // namespace gamemd
// 0x6C0310
namespace gamemd {
int TClassFactory_CampaignClass::GetSize()
{
  int v2; // ecx
  int v3; // ecx

  v2 = *(_DWORD *)(a1 + 4); /*0x6c031a*/
  if ( a2 ) /*0x6c031d*/
    v3 = v2 + 1; /*0x6c031f*/
  else
    v3 = v2 - 1; /*0x6c0328*/
  *(_DWORD *, unsigned int a1)(a1 + 4) = v3; /*0x6c0320*/
  return 0; /*0x6c0325*/
}
} // namespace gamemd
// 0x6C4D40
namespace gamemd {
LONG TClassFactory_MechLocomotionClass::AddRef()
{
  return InterlockedIncrement((volatile LONG *, unsigned int a4, unsigned int a2, unsigned int a3)(a1 + 4)); /*0x6c4d4e*/
}
} // namespace gamemd
// 0x6C4D90
namespace gamemd {
int TClassFactory_MechLocomotionClass::ddtor()
{
  void *v5; // eax
  int (__stdcall ***v6)(_DWORD, int, _DWORD *); // eax
  int (__stdcall ***v7)(_DWORD, _DWORD, _DWORD *); // esi
  int v8; // edi

  if ( !a4 ) /*0x6c4d98*/
    return -2147024809; /*0x6c4d9b*/
  *a4 = 0; /*0x6c4da8*/
  if ( a2 ) /*0x6c4db0*/
    return -2147221232; /*0x6c4db3*/
  v5 = RA2_OPNEW(0x34u); /*0x6c4dbe*/
  if ( !v5 ) /*0x6c4dc8*/
    return -2147024882; /*0x6c4dc8*/
  v6 = (int (__stdcall ***)(_DWORD, int, _DWORD *))SmallFunc_5AFEF0((int)v5); /*0x6c4dcc*/
  v7 = v6; /*0x6c4dd1*/
  if ( !v6 ) /*0x6c4dd5*/
    return -2147024882; /*0x6c4dd8*/
  v8 = (**v6)(v6, a3, a4); /*0x6c4dec*/
  if ( v8 < 0 ) /*0x6c4df0*/
    ((void (__thiscall *, unsigned int a1, unsigned int a2)(int (__stdcall ***)(_DWORD, _DWORD, _DWORD *), int))(*v7)[8])(v7, 1); /*0x6c4df8*/
  return v8; /*0x6c4d9a*/
}
} // namespace gamemd
// 0x6C4E10
namespace gamemd {
int TClassFactory_MechLocomotionClass::GetSize()
{
  int v2; // ecx
  int v3; // ecx

  v2 = *(_DWORD *)(a1 + 4); /*0x6c4e1a*/
  if ( a2 ) /*0x6c4e1d*/
    v3 = v2 + 1; /*0x6c4e1f*/
  else
    v3 = v2 - 1; /*0x6c4e28*/
  *(_DWORD *)(a1 + 4) = v3; /*0x6c4e20*/
  return 0; /*0x6c4e25*/
}
} // namespace gamemd